#include "gen_func.h"
#include "type.h"

void code_generation(A_NODE *node){
    gen_program(node);
    gen_literal_table();
}

void gen_literal_table(){ // literal들을 어셈블리 파일의 데이터 섹션에 기록
    int i;
    // literal_table에 등록된 모든 리터럴 순회
    for (i = 1; i <= literal_no; i++){
        // .literal: 리터럴 선언 명령어
        // 명령어와 함께 해당 literal이 위치할 addr 출력
        fprintf(fout, ".literal %5d   ", literal_table[i].addr);
        // literal의 type에 따라 실제 값 출력
        if (literal_table[i].type == int_type)
            fprintf(fout, "%d\n", literal_table[i].value.i);
        else if (literal_table[i].type == float_type)
            fprintf(fout, "%f\n", literal_table[i].value.f);
        else if (literal_table[i].type == char_type) // char 타입은 ASCII 코드로 출력
            fprintf(fout, "%d\n", literal_table[i].value.c);
        else if (literal_table[i].type == string_type)
            fprintf(fout, "%s\n", literal_table[i].value.s);
    }
}
void gen_program(A_NODE *node){
    switch (node->name){
        case N_PROGRAM:
            // 전역 변수 공간 확보(INT)
            // node->value는 전역 변수들의 총 크기, 스택 포인터를 node->value만큼 증가
            gen_code_i(INT, 0, node->value);
            // main 함수의 label로 점프하여 실행 시작
            gen_code_s(SUP, 0, "main");
            // main 함수 종료되면 return -> 프로그램 종료
            gen_code_i(RET, 0, 0);

            // 프로그램에 정의된 모든 함수와 전역 변수 초기화 코드 생성
            gen_declaration_list(node->clink);
            break;

        default: // root가 N_PROGRAM이 아닌 경우
            gen_error(100, node->line);
            break;
    }
}
void gen_expression(A_NODE *node){ // expression을 평가하여 r-value를 stack top에 남김
    A_ID *id;
    A_TYPE *t;
    int i, ll;

    switch (node->name){
        case N_EXP_IDENT: // Identifier: 변수나 상수의 값을 로드
            id = node->clink;
            t = id->type;
            switch (id->kind){
                case ID_VAR:
                case ID_PARM: // variable이나 parameter인 경우
                    switch (t->kind) {
                        case T_ENUM:
                        case T_POINTER: // 일반 변수나 포인터 변수는 값을 stack에 로드
                            gen_code_i(LOD, id->level, id->address); // level과 offset 사용
                            break;
                        case T_ARRAY:
                            // 배열의 이름은 시작 주소로 취급 -> 주소 로드(LDA)
                            if (id->kind == ID_VAR)
                                gen_code_i(LDA, id->level, id->address);
                            else // ID_PARM인 경우 포인트이므로 값을 로드(LOD)
                                gen_code_i(LOD, id->level, id->address);
                            break;
                        case T_STRUCT: // 구현하지 않음.
                            gen_error(24, node->line, "T_STRUCT"); // not implemented
                            break;
                        case T_UNION:
                            // 주소를 로드한 뒤 LDI를 통해 값을 로드
                            gen_code_i(LDA, id->level, id->address);
                            i = id->type->size;
                            // LDI: load indirect
                            gen_code_i(LDI, 0, i%4 ? i/4+1 : i/4);
                            break;
                        default:
                            gen_error(11, id->line); // error11: illegal identifier in expression
                            break;    
                    }
                    break;
                case ID_ENUM_LITERAL:
                    // 정수 literal로 취급하여 값 로드
                    gen_code_i(LITI, 0, id->init);
                    break;
                default:
                    gen_error(11, node->line);
                    break;
            }
            break;
        case N_EXP_INT_CONST:
            // LITI로 직접 로드
            gen_code_i(LITI, 0, node->clink);
            break;
        case N_EXP_FLOAT_CONST:
            // float const는 literal_table에 저장된 값을 로드(LOD)
            i = node->clink;
            gen_code_i(LOD, 0, literal_table[i].addr);
            break;
        case N_EXP_CHAR_CONST:
            // ASCII로 취급하여 로드(LITI)
            gen_code_i(LITI, 0, node->clink);
            break;
        case N_EXP_STRING_LITERAL:
            // string 주소 로드(LDA)
            i = node->clink;
            gen_code_i(LDA, 0, literal_table[i].addr);
            break;
        case N_EXP_ARRAY: // 주소 계산 -> 값 로드
            gen_expression(node->llink); // array base 주소 연산
            gen_expression(node->rlink); // index 평가(array 크기)

            if (node->type->size > 1){
                gen_code_i(LITI, 0, node->type->size); // element 타입의 크기 로드
                gen_code_i(MULI, 0, 0); // offset 계산: element 개수 * 타입 크기
            }
            // base + offset
            gen_code_i(OFFSET, 0, 0);

            if (!isArrayType(node->type)) { // 타입이 원소이면
                i = node->type->size;
                if (i == 1)
                    gen_code_i(LDIB, 0, 0);
                else
                    gen_code_i(LDI, 0, i%4 ? i/4+1 : i/4); // word alignment
            }
            break;
        case N_EXP_FUNCTION_CALL:
            t = node->llink->type;
            // return type 크기 계산
            i = t->element_type->element_type->size;
            // word alignment
            if (i%4) 
                i = i/4 * 4 + 4;
            if (node->rlink){
                // header + return 사이즈 만큼 공간 확보
                gen_code_i(INT, 0, 12 + i);
                // argument 계산
                gen_arg_expression(node->rlink);
                // argument 개수 만큼 stack pointer 조정
                gen_code_i(POP, 0, node->rlink->value / 4 + 3);
            } else {
                gen_code_i(INT, 0, i); // 인자 없는 경우
            }
            // 호출 함수의 주소 로드
            gen_expression(node->llink);
            // 함수 호출
            gen_code_i(CAL, 0, 0);
            break;
        case N_EXP_STRUCT: // struct 멤버 참조는 구현하지 않음.
            gen_error(24, node->line, "N_EXP_STRUCT");
            break;
        case N_EXP_ARROW: // 포인터의 멤버 참조는 구현하지 않음.
            gen_error(24, node->line, "N_EXP_ARROW");
            break;
        case N_EXP_POST_INC: // 후위 증가 연산자
            gen_expression(node->clink); // 증가 전 값 로드
            gen_expression_left(node->clink); // 주소 로드
            t = node->type;
            // 주소로부터 값 로드(증가 전)
            if (node->type->size == 1) 
                gen_code_i(LDXB, 0, 0);
            else
                gen_code_i(LDX, 0, 1);
            // 값 증가
            if (isPointerOrArrayType(node->type)){
                // 포인터 타입이면 타입 크기만큼 증가
                gen_code_i(LITI, 0, node->type->element_type->size); // 타입 크기 (정수값) 로드
                gen_code_i(ADDI, 0, 0); // 타입 크기만큼 증가
            } else if (isFloatType(node->type)){
                gen_code_i(INCF, 0, 0);
            } else {
                // 포인터가 아니면 1만큼 증가
                gen_code_i(INCI, 0, 0);
            }
            // 증가된 값 메모리에 저장 (STO)
            if (node->type->size == 1)
                gen_code_i(STOB, 0, 0);
            else
                gen_code_i(STO, 0, 0);
            break;
        case N_EXP_POST_DEC: // 후위 감소 연산자
            gen_expression(node->clink); // 감소 전 값 로드
            gen_expression_left(node->clink); // 변수의 주소 로드
            t = node->type;
            // 주소로부터 값 로드(감소 전)
            if (node->type->size == 1)
                gen_code_i(LDXB, 0, 0);
            else
                gen_code_i(LDX, 0, 1);
            // 값 감소
            if (isPointerOrArrayType(node->type)){
                // 포인터 타입이면 타입 크기만큼 감소
                gen_code_i(LITI, 0, node->type->element_type->size); // 타입 크기 로드
                gen_code_i(SUBI, 0, 0); // 타입 크기만큼 감소
            } else if (isFloatType(node->type)){
                gen_code_i(DECF, 0, 0);
            } else {
                // 포인터 타입이 아니면 1만큼 감소
                gen_code_i(DECI, 0, 0);
            }
            // 감소한 값 메모리에 저장(STO)
            if (node->type->size == 1)
                gen_code_i(STOB, 0, 0);
            else
                gen_code_i(STO, 0, 0);
            break;
        case N_EXP_PRE_INC: // 전위 증가 연산자
            gen_expression_left(node->clink); // 후위 연산자와 달리 변수의 주소부터 로드
            t = node->type;
            // 주소로부터 값 로드 (증가 전)
            if (node->type->size == 1)
                gen_code_i(LDXB, 0, 0);
            else
                gen_code_i(LDX, 0, 1);
            // 값 증가
            if (isPointerOrArrayType(node->type)){
                // 포인터 타입이면 타입 크기만큼 증가
                gen_code_i(LITI, 0, node->type->element_type->size);
                gen_code_i(ADDI, 0, 0);
            } else if (isFloatType(node->type)){
                gen_code_i(INCF, 0, 0);
            } else {
                // 포인터 타입이 아니면 1만큼 증가
                gen_code_i(INCI, 0, 0);
            }
            // 증가한 값 저장
            if (node->type->size == 1){
                gen_code_i(STXB, 0, 0);
            } else {
                gen_code_i(STX, 0, 0);
            }
            break;
        case N_EXP_PRE_DEC: // 전위 감소 연산자
            gen_expression_left(node->clink); // 변수의 주소 로드
            t = node->type;
            // 주소로부터 값 로드 (감소 전)
            if (node->type->size == 1)
                gen_code_i(LDXB, 0, 0);
            else
                gen_code_i(LDX, 0, 1); 
            // 값 감소
            if (isPointerOrArrayType(node->type)){
                // 포인터 타입이면 타입 크기만큼 증가
                gen_code_i(LITI, 0, node->type->element_type->size);
                gen_code_i(SUBI, 0, 0);
            } else if (isFloatType(node->type)){
                gen_code_i(DECF, 0, 0);
            } else {
                // 포인터 타입이 아니면 1만큼 감소
                gen_code_i(DECI, 0, 0);
            }
            break;
        case N_EXP_NOT: // ! 연산자
            gen_expression(node->clink);
            gen_code_i(NOT, 0, 0);
            break;
        case N_EXP_PLUS:
            gen_expression(node->clink);
            break;
        case N_EXP_MINUS:
            gen_expression(node->clink);
            if (isFloatType(node->type))
                gen_code_i(MINUSF, 0, 0);
            else
                gen_code_i(MINUSI, 0, 0);
            break;
        case N_EXP_AMP: // 주소 연산자
            gen_expression_left(node->clink); // lvalue를 구해야 함
            break;
        case N_EXP_STAR: // 역참조
            gen_expression(node->clink); // 포인터 값 로드 -> 주소
            i = node->type->size;
            // 주소에 있는 값 로드
            if (i == 1)
                gen_code_i(LDIB, 0, 0);
            else    
                gen_code_i(LDI, 0, i%4 ? i/4+1 : i/4);
            break;
        case N_EXP_SIZE_EXP:
            gen_code_i(LITI, 0, node->clink);
            break;
        case N_EXP_SIZE_TYPE:
            gen_code_i(LITI, 0, node->clink);
            break;
        case N_EXP_CAST: // type casting
            gen_expression(node->rlink); // RHS expression 계산
            if (node->type != node->rlink->type){ // 양쪽 타입이 다르면 캐스팅
                if (isFloatType(node->type)) // LHS: float이면 int->float으로 변환
                    gen_code_i(CVTF, 0, 0);
                else if (isFloatType(node->rlink->type)) // LHS가 float이 아니면서 RHS가 float이면 float->int로 변환
                    gen_code_i(CVTI, 0, 0);
            }
            break;
        case N_EXP_MUL: // 곱셈 연산
            gen_expression(node->llink); // 좌측 계산
            gen_expression(node->rlink); // 우측 계산
            if (isFloatType(node->type)) // 타입에 따라 연산 코드 생성
                gen_code_i(MULF, 0, 0);
            else
                gen_code_i(MULI, 0, 0);
            break;
        case N_EXP_DIV: // 나눗셈
            gen_expression(node->llink); // 좌측 계산
            gen_expression(node->rlink); // 우측 계산
            if (isFloatType(node->type)) // 타입에 따라 연산 코드 생성
                gen_code_i(DIVF, 0, 0);
            else 
                gen_code_i(DIVI, 0, 0);
            break;
        case N_EXP_MOD: // 모듈러 연산
            gen_expression(node->llink);
            gen_expression(node->rlink);
            gen_code_i(MOD, 0, 0);
            break;
        case N_EXP_ADD: // 덧셈
            gen_expression(node->llink);
            if (isPointerOrArrayType(node->rlink->type)){
                // 포인터 연산일 경우(포인터 + 정수) 정수*타입 크기 계산
                gen_code_i(LITI, 0, node->rlink->type->element_type->size);
                gen_code_i(MULI, 0, 0);
            }
            gen_expression(node->rlink);
            if (isPointerOrArrayType(node->llink->type)){
                gen_code_i(LITI, 0, node->llink->type->element_type->size);
                gen_code_i(MULI, 0, 0);
            }
            // 타입에 따라 연산 코드 생성
            if (isFloatType(node->type))
                gen_code_i(ADDF, 0, 0);
            else
                gen_code_i(ADDI, 0, 0);
            break;
        case N_EXP_SUB: // 뺄셈
            gen_expression(node->llink);
            gen_expression(node->rlink);
            if (isPointerOrArrayType(node->llink->type) && !isPointerOrArrayType(node->rlink->type)){
                // 좌측은 포인터, 우측은 포인터 타입이 아닌 경우 정수 * 타입 크기 계산
                gen_code_i(LITI, 0, node->llink->type->element_type->size);
                gen_code_i(MULI, 0, 0);
            } // 포인터 - 정수
            if (isFloatType(node->type))
                gen_code_i(SUBF, 0, 0);
            else
                gen_code_i(SUBI, 0, 0);
            break;
        case N_EXP_LSS: // < (논리 연산)
            gen_expression(node->llink); // 좌측 계산
            gen_expression(node->rlink); // 우측 계산
            if (isFloatType(node->llink->type)) // 타입에 따라 연산 코드 생성
                gen_code_i(LSSF, 0, 0);
            else
                gen_code_i(LSSI, 0, 0);
            break;
        case N_EXP_GTR: // >
            gen_expression(node->llink);
            gen_expression(node->rlink);
            if (isFloatType(node->llink->type)) // 타입에 따라 연산 코드 생성
                gen_code_i(GTRF, 0, 0);
            else
                gen_code_i(GTRI, 0, 0);
            break;
        case N_EXP_LEQ: // <=
            gen_expression(node->llink);
            gen_expression(node->rlink);
            if (isFloatType(node->llink->type))
                gen_code_i(LEQF, 0, 0);
            else    
                gen_code_i(LEQI, 0, 0);
            break;
        case N_EXP_GEQ: // >=
            gen_expression(node->llink);
            gen_expression(node->rlink);
            if (isFloatType(node->llink->type))
                gen_code_i(GEQF, 0, 0);
            else
                gen_code_i(GEQI, 0, 0);
            break;
        case N_EXP_NEQ: // !=
            gen_expression(node->llink);
            gen_expression(node->rlink);
            if (isFloatType(node->llink->type))
                gen_code_i(NEQF, 0, 0);
            else
                gen_code_i(NEQI, 0, 0);
            break;
        case N_EXP_EQL: // ==
            gen_expression(node->llink);
            gen_expression(node->rlink);
            if (isFloatType(node->llink->type))
                gen_code_i(EQLF, 0, 0);
            else
                gen_code_i(EQLI, 0, 0);
            break;
        case N_EXP_AND: // &&
            gen_expression(node->llink);
            // short-circuit evaluation
            gen_code_l(JPCR, 0, i=get_label()); // llink expression이 거짓이면 평가하지 않고 점프
            gen_expression(node->rlink);
            gen_label_number(i);
            break;
        case N_EXP_OR:
            gen_expression(node->llink);
            // short-circuit evaluation
            // llink 평가가 true이면 더 이상 평가하지 않고 점프
            gen_code_l(JPTR, 0, i=get_label());
            gen_expression(node->rlink);
            gen_label_number(i);
            break;
        case N_EXP_ASSIGN:
            gen_expression_left(node->llink); // 좌측 피연산자의 주소 계산
            gen_expression(node->rlink); // 우측 피연산자의 값 계산
            i = node->type->size; 
            // store(STX) 
            // STX: 값을 저장하고, 스택 탑에 남겨둠
            if (i == 1)
                gen_code_i(STXB, 0, 0);
            else
                gen_code_i(STX, 0, 0);
            break;
        default:
            gen_error(100, node->line);
            break;
    }
}
void gen_expression_left(A_NODE *node){
    A_ID *id;
    A_TYPE *t;
    int result;
    switch (node->name) {
        case N_EXP_IDENT: // 식별자의 주소를 구함
            id = node->clink;
            t = id->type;
            switch (id->kind){
                case ID_VAR:
                case ID_PARM:
                    switch (t->kind){
                        case T_ENUM:
                        case T_POINTER:
                        case T_STRUCT:
                        case T_UNION:
                            // 일반 변수, 포인터, 구조체 등은 주소 로드하는 코드 생성
                            gen_code_i(LDA, id->level, id->address);
                            break;
                        case T_ARRAY:
                            if (id->kind == ID_VAR){
                                // 일반적인 배열 선언의 경우 
                                gen_code_i(LDA, id->level, id->address);
                                // 배열의 이름이 곧 시작 주소
                            } else {
                                // 파라미터와 같은 경웽는 포인터 변수에 주소값이 담겨서 넘어오기 때문에
                                // LDA가 아니라 LOD로 주소값을 로드
                                gen_code_i(LOD, id->level, id->address);
                            }
                            break;
                    }
                    break;
                case ID_FUNC:
                    // 함수 이름 -> 함수 시작 주소
                    gen_code_s(ADDR, 0, id->name);
                    break;
                default:
                    gen_error(13, node->line, id->name);
                    break;
            }
            break;
        case N_EXP_ARRAY: // 배열의 원소 접근: a[i]
            gen_expression(node->llink); // 배열의 시작 주소 계산
            gen_expression(node->rlink); // 배열의 인덱스 계산
            if (node->type->size > 1){ // 인덱스 * 원소의 타입 크기
                gen_code_i(LITI, 0, node->type->size);
                gen_code_i(MULI, 0, 0);
            }
            // 주소 연산: base + offset
            gen_code_i(OFFSET, 0, 0);
            break;
        case N_EXP_STRUCT: // 구현하지 않음
            gen_error(24, node->line, "N_EXP_STRUCT");
            break;
        case N_EXP_ARROW: // 구현하지 않음
            gen_error(24, node->line, "N_EXP_ARROW");
            break;
        case N_EXP_STAR: // 역참조
            gen_expression(node->clink); // 변수가 가지고 있는 값
            break;
        case N_EXP_INT_CONST:
        case N_EXP_FLOAT_CONST:
        case N_EXP_CHAR_CONST:
        case N_EXP_STRING_LITERAL:
        case N_EXP_FUNCTION_CALL:
        case N_EXP_POST_INC:
        case N_EXP_POST_DEC:
        case N_EXP_PRE_INC:
        case N_EXP_PRE_DEC:
        case N_EXP_NOT:
        case N_EXP_MINUS:
        case N_EXP_SIZE_EXP:
        case N_EXP_SIZE_TYPE:
        case N_EXP_CAST:
        case N_EXP_MUL:
        case N_EXP_DIV:
        case N_EXP_MOD:
        case N_EXP_ADD:
        case N_EXP_SUB:
        case N_EXP_LSS:
        case N_EXP_GTR:
        case N_EXP_LEQ:
        case N_EXP_GEQ:
        case N_EXP_NEQ:
        case N_EXP_EQL:
        case N_EXP_AMP:
        case N_EXP_AND:
        case N_EXP_OR:
        case N_EXP_ASSIGN:
            gen_error(12, node->line); // 위와 같은 case는 lvalue가 될 수 없음
            break;
        default:
            gen_error(100, node->line);
            break;
    }
}
void gen_arg_expression(A_NODE *node){
    A_NODE *n;
    switch (node->name) {
        // argument list 분석
        case N_ARG_LIST:
            gen_expression(node->llink); // llink 수식 평가
            // 결과값 stack top에 push
            gen_arg_expression(node->rlink); // 재귀 호출
            // 첫 번째 ~ 마지막 argument가 순서대로 
            break;
        case N_ARG_LIST_NIL:
            break;
        default:
            gen_error(100, node->line);
            break;
    }
}
int get_label() {
    label_no++;
    return (label_no);
}
void gen_statement(A_NODE *node, int cont_label, int break_label, A_SWITCH sw[], int *sn){
    A_SWITCH switch_table[100];
    int switch_no = 0;
    A_NODE *n;
    int i, l1, l2, l3;
    switch (node->name) {
        case N_STMT_LABEL_CASE: // switch문 구현하지 않음.
            gen_error(24, node->line, "N_STMT_LABEL_CASE");
            break;
        case N_STMT_LABEL_DEFAULT: // 구현하지 않음
            gen_error(24, node->line, "N_STMT_LABEL_DEFAULT");
            break;
        case N_STMT_COMPOUND:
            // 복합문 처리
            if (node->llink) // 선언문이 있다면
                gen_declaration_list(node->llink); // 지역 변수 선언 처리
            gen_statement_list(node->rlink, cont_label, break_label, sw, sn); // 내부 statement 처리
            // 전달받은 cont, break 문맥 그대로 유지
            break;
        case N_STMT_EMPTY:
            break;
        case N_STMT_EXPRESSION:
            n = node->clink;
            gen_expression(n); // expression 평가
            // 평가 결과값은 스택에서 제거
            i = n->type->size;
            if (i)
                gen_code_i(POP, 0, i%4 ? i/4+1 : i/4);
            break;
        case N_STMT_IF:
            gen_expression(node->llink); // 조건식 평가
            gen_code_l(JPC, 0, l1 = get_label()); // 조건이 거짓이라면 l1으로 점프 (JPC 코드 생성하며 l1 label도 생성)
            gen_statement(node->clink, cont_label, break_label, 0, 0); // if statement 코드 생성
            gen_label_number(l1); // l1: if문 종료
            break;
        case N_STMT_IF_ELSE:
            gen_expression(node->llink); // 조건식 평가
            gen_code_l(JPC, 0, l1 = get_label()); // 조건이 거짓이라면 l1으로 점프
            gen_statement(node->clink, cont_label, break_label, 0, 0); // cont, break 문맥 그대로 유지
            gen_code_l(JMP, 0, l2 = get_label()); // if statement 실행 후 else 문을 건너뛰고 l2로 점프(if문 종료)
            gen_label_number(l1);
            gen_statement(node->rlink, cont_label, break_label, 0, 0); // else statement 실행 코드 생성
            gen_label_number(l2);
            break;
        case N_STMT_SWITCH: // 구현하지 않음.
            gen_error(24, node->line, "N_STMT_SWITCH");
            break;
        case N_STMT_WHILE:
            l3 = get_label(); // loop 시작
            gen_label_number(l1 = get_label()); // 조건 검사 (루프 시작)
            gen_expression(node->llink); // 조건식 평가
            gen_code_l(JPC, 0, l2 = get_label()); // 조건이 거짓이면 루프 종료 l2로 점프
            // 루프 body 실행 코드 생성
            gen_statement(node->rlink, l3, l2, 0, 0); // l3 시작 ~ l2 종료
            gen_label_number(l3);
            gen_code_l(JMP, 0, l1); // 조건 검사로 점프
            gen_label_number(l2);
            break;
        case N_STMT_DO:
            l3 = get_label(); // continue
            l2 = get_label(); // break
            gen_label_number(l1 = get_label());
            gen_statement(node->llink, l2, l3, 0, 0);
            gen_label_number(l2);
            gen_expression(node->rlink);
            // 조건이 참이면 l1으로 점프
            gen_code_l(JPT, 0, l1);
            gen_label_number(l3); // 루프 종료
            break;
        case N_STMT_FOR:
            n = node->llink;
            l3 = get_label();
            // 초기화 식
            if (n->llink) {
                gen_expression(n->llink);
                i = n->llink->type->size;
                if (i)
                    gen_code_i(POP, 0, i%4 ? i/4+1 : i/4); // 식의 결과값 버림
            }
            gen_label_number(l1 = get_label());
            l2 = get_label();
            // 조건 식 평가
            if (n->clink){
                gen_expression(n->clink);
                // 조건이 거짓이면 l2로 점프
                gen_code_l(JPC, 0, l2);
            }
            gen_statement(node->rlink, l3, l2, 0, 0);
            gen_label_number(l3);
            if (n->rlink) {
                gen_expression(n->rlink);
                i = n->rlink->type->size;
                if (i)
                    gen_code_i(POP, 0, i%4 ? i/4+1 : i/4);
            }
            gen_code_l(JMP, 0, l1);
            gen_label_number(l2);
            break;
        case N_STMT_CONTINUE:
            if (cont_label)
                gen_code_l(JMP, 0, cont_label); // 가장 가까운 루프의 레이블로 점프
            else
                gen_error(22, node->line);
            break;
        case N_STMT_BREAK:
            if (break_label)
                gen_code_l(JMP, 0, break_label); // 가장 가까운 루프의 종료 레이블로 점프
            else
                gen_error(23, node->line);
            break;
        case N_STMT_RETURN:
            n = node->clink;
            if (n) {
                // 리턴값이 있는 경우
                i = n->type->size;
                if (i%4)
                    i = i/4 * 4 + 4;
                gen_code_i(LDA, 1, -i);
                gen_expression(n);
                // 결과값 리턴 주소에 저장
                gen_code_i(STO, 0, 0);
            }
            // 함수 종료 및 복귀
            gen_code_i(RET, 0, 0);
            break;
        default:
            gen_error(100, node->line);
            break;
    }
}
void gen_statement_list(A_NODE *node, int cont_label, int break_label, A_SWITCH sw[], int *sn)
{
	switch(node->name) {
		case N_STMT_LIST:
			gen_statement(node->llink, cont_label, break_label, sw, sn); // 전달받은 context 그대로 전달
			gen_statement_list(node->rlink, cont_label, break_label, sw, sn); // 재귀 호출
			break;
		case N_STMT_LIST_NIL:
			break;
		default :
			gen_error(100,node->line);
			break;
	}
}
void gen_initializer_global(A_NODE *node, A_TYPE *t, int addr) {

}
void gen_initializer_local(A_NODE *node, A_TYPE *t, int addr) {

}
void gen_declaration_list(A_ID *id)
{
	while (id) {
		gen_declaration(id); // 현재 id 선언 처리
		id=id->link; // 다음 id로
	}
}
void gen_declaration(A_ID *id){
    int i;
    A_NODE *node;
    switch (id->kind){
        case ID_VAR: // 변수 선언
            // 초기화 식의 존재 여부 확인
            if (id->init){
                // 전역 변수
                if (id->level == 0)
                    gen_initializer_global(id->init, id->type, id->address);
                else // 지역 변수
                    gen_initializer_local(id->init, id->type, id->address);
            }
            break;
        case ID_FUNC:
            if (id->type->expr) {
                gen_label_name(id->name); // 함수 레이블 생성
                gen_code_i(INT, 0, id->type->local_var_size); // 지역 변수 공간 확보
                gen_statement(id->type->expr, 0, 0, 0, 0);
                gen_code_i(RET, 0, 0); // 리턴 명령어 생성
            }
            break;
        case ID_PARM:
        case ID_TYPE:
        case ID_ENUM:
        case ID_STRUCT:
        case ID_FIELD:
        case ID_ENUM_LITERAL:
        case ID_NULL:
            break; // 위 경우 선언 시점에 별도 실행 코드를 생성하지 않음.
        default:
            gen_error(100, id->line);
            break;
    }
}
void gen_error(int i, int ll, char *s )
{
	gen_err++;
	printf("*** error at line %d: ",ll);

	switch (i) {
		case 11:
			printf("illegal identifier in expression \n"); 
			break;
		case 12:
			printf("illegal l-value expression \n");
			break;
		case 13: 
			printf("identifier %s not l-value expression \n",s);
			break;
		case 20:
			printf("illegal default label in switch statement \n");
			break;
		case 21:
			printf("illegal case label in switch statement \n");
			break;
		case 22:
			printf("no destination for continue statement \n");
			break;
		case 23:
			printf("no destination for break statement \n");
			break;
		case 24:
			printf("not implemented %s for code generation\n",s);
			break;
		case 100:
			printf("fatal compiler error during code generation\n");
			break;
		default:
			printf("unknown \n");
			break;
	}
}
void gen_code_i(OPCODE op,  int l, int a)
{ 
	fprintf(fout,"\t%9s   %d, %d\n",opcode_name[op],l,a);
}
void gen_code_f(OPCODE op,  int l, float a)
{
	fprintf(fout,"\t%9s   %d, %f\n",opcode_name[op],l,a);
}
void gen_code_s(OPCODE op,  int l, char *a)
{
	fprintf(fout,"\t%9s   %d, %s\n",opcode_name[op],l,a); 
}
void gen_code_l(OPCODE op,  int l, int a)
{
	fprintf(fout,"\t%9s   %d, L%d\n",opcode_name[op],l,a);
}
void gen_label_number(int i)
{
	fprintf(fout,"L%d:\n",i);
}
void gen_label_name(char *s) 
{ 
	fprintf(fout,"%s:\n",s);
}