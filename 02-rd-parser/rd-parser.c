#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/* FUNCTIONS */
int expression(int *result);
int term(int *result);
int factor(int *result);
int digit(int *result);
int lexeme();

/* TOKEN CODES */
#define PLUS 43
#define MINUS 45
#define STAR 42
#define DIVIDE 47
#define MODULAR 37
#define LEFT_PAREN 40
#define RIGHT_PAREN 41

/* GLOBAL */
enum tokenType{INT, FLT, PLS, MIN, STR, DIV, MOD, LP, RP, END};
struct Token{
    enum tokenType type;
    union { int i_num; double f_num; } num;
} next_token; 

int main(void){
#ifdef D_TEST
    while (lexeme() == 0){
        if (next_token.type == END) exit(0);
        switch (next_token.type){
            case INT:
                printf("%d\n", next_token.num.i_num);
                break;
            case FLT:
                printf("%f\n", next_token.num.f_num);
                break;
            case PLS:
                printf("+\n");
                break;
            case MIN:
                printf("-\n");
                break;
            case STR:
                printf("*\n");
                break;
            case DIV:
                printf("/\n");
                break;
            case MOD:
                printf("mod\n");
                break;
            case LP:
                printf("(\n");
                break;
            case RP:
                printf(")\n");
                break;
        }
    }
    printf("Syntax Error\n");
    exit(0);
#endif

    /* INPUT */

    // initialize result
    struct Token result;
    result.type = INT;
    result.num.i_num = 0;

    if (lexeme() < 0){
        fprintf(stderr, "Syntax Error\n");
        exit(1);
    }    
    if (expression(&result) < 0){
        fprintf(stderr, "Syntax Error\n");
        exit(1);
    }
    if (next_token.type != END){
        fprintf(stderr, "Syntax Error\n");
        exit(1);
    }
    /* OUTPUT */
    if (result.type == INT){
        printf("%d\n", result.num.i_num);
    } else if (result.type == FLT){
        printf("%f\n", result.num.f_num);
    } else {
        fprintf(stderr, "Syntax Error\n");
    }
}
int expression(struct Token *result){
    /*
        E -> TE'
        E'-> +TE' | -TE' | empty
    */
    /* E -> T { (+|-) T } */
    if (term(result) < 0){
        return -1;
    }
    while (next_token.type == PLS || next_token.type == MIN){
        enum tokenType op = next_token.type;
        if (lexeme() < 0){
            return -1;
        }
        struct Token rhs;
        rhs.type = INT;
        rhs.num.i_num = 0;

        if (term(&rhs) < 0){
            return -1;
        }
        
        // operation
        if (op == PLS){
            if (result->type == INT && rhs.type == INT)
                result->num.i_num += rhs.num.i_num;
            else {
                double res, opr;
                res = result->type == INT ? (double)result->num.i_num : result->num.f_num;
                opr = rhs.type == INT ? (double)rhs.num.i_num : rhs.num.f_num;
                result->num.f_num = res + opr; 
                result->type = FLT;
            }
        } else if (op == MIN){
            if (result->type == INT && rhs.type == INT)
                result->num.i_num -= rhs.num.i_num;
            else {
                double res, opr;
                res = result->type == INT ? (double)result->num.i_num : result->num.f_num;
                opr = rhs.type == INT ? (double)rhs.num.i_num : rhs.num.f_num;
                result->num.f_num = res - opr; 
                result->type = FLT;
            }
        } else return -1;
    }
    return 0;
}
int term(struct Token *result){
    /*
        T -> FT'
        T'-> * FT' | / FT' | % FT' | empty
    */
    /* T -> F {( * | / | % ) F } */
    if (factor(result) < 0){
        return -1;
    }
    if (lexeme() < 0){
        return -1;
    }
    while (next_token.type == STAR || next_token.type == DIV || next_token.type == MOD){
        enum tokenType op = next_token.type;
        if (lexeme() < 0){
            return -1;
        }

        struct Token rhs;
        rhs.type = INT;
        rhs.num.i_num = 0;

        if (factor(&rhs) < 0){
            return -1;
        }
        if (op == STR){
            if (result->type == INT && rhs.type == INT)
                result->num.i_num *= rhs.num.i_num;
            else {
                double res, opr;
                res = result->type == INT ? (double)result->num.i_num : result->num.f_num;
                opr = rhs.type == INT ? (double)rhs.num.i_num : rhs.num.f_num;
                result->num.f_num = res * opr; 
                result->type = FLT;
            }
        } else if (op == DIV){
            if (result->type == INT && rhs.type == INT)
                result->num.i_num /= rhs.num.i_num;
            else {
                double res, opr;
                res = result->type == INT ? (double)result->num.i_num : result->num.f_num;
                opr = rhs.type == INT ? (double)rhs.num.i_num : rhs.num.f_num;
                result->num.f_num = res / opr; 
                result->type = FLT;
            }
        } else if (op == MOD){
            if (result->type == INT && rhs.type == INT)
                result->num.i_num %= rhs.num.i_num;
            else {
                fprintf("Error: Invalid operands to binary % (have '%s' and '%s')\n",
                    result->type == INT ? "int" : "float",
                    rhs.type == INT ? "int" : "float");
                return -1;
            }
        } else return -1;
    }
    return 0;
}
int factor(struct Token *result){
    /* F -> number | ( E ) */
    if (next_token.type == LP){
        if (lexeme() < 0){
            return -1;
        }
        if (expression(result) < 0){
            return -1;
        }
        if (next_token.type != RP){
            return -1;
        }
        return 0;
    }

    if (next_token.type == INT){
        result->type = INT;
        result->num.i_num = next_token.num.i_num;
    } else if (next_token.type == FLT){
        result->type = FLT;
        result->num.i_num = next_token.num.f_num;
    } else return -1;

    return 0;
}
int lexeme(){
    char temp[32] = {0};
    int i = 0;
    int ch;

    // ignore the blank
    while ((ch = getchar()) == ' ');

    // get operation token (len: 1)
    if (ch == PLUS){
        next_token.type = PLS;
        return 0;
    } else if (ch == MINUS){
        next_token.type = MIN;
        return 0;
    } else if (ch == STAR){
        next_token.type = STR;
        return 0;
    } else if (ch == DIVIDE){
        next_token.type = DIV;
        return 0;
    } else if (ch == MODULAR){
        next_token.type = MOD;
        return 0;
    } else if (ch == LEFT_PAREN){
        next_token.type = LP;
        return 0;
    } else if (ch == RIGHT_PAREN){
        next_token.type = RP;
        return 0;
    } else if (ch == (int)'\n'){
        next_token.type = END;
        return 0;
    } else if (ch >= (int)'0' && ch <= (int)'9'){ // number: int or float
        // number -> INT     | FLT
        // number -> {digit} | {digit} '.' {digit}
        next_token.type = INT;
        temp[i++] = (char)ch;

        // {digit}
        while ((ch = getchar()) >= (int)'0' && ch <= (int)'9'){
            temp[i++] = (char)ch;
        }
        // decimal point
        if (ch == (int)'.'){
            next_token.type = FLT;
            temp[i++] = (char)ch;
        } else { // if not, return integer
            ungetc(ch, stdin);
            // INT
            next_token.num.i_num = atoi(temp);
            return 0;
        }

        // FLT
        // decimal places
        while ((ch = getchar()) >= (int)'0' && ch <= (int)'9'){
            temp[i++] = (char)ch;
        }
        ungetc(ch, stdin);
        // return float
        next_token.num.f_num = atof(temp);
        return 0;

    } else {  // Syntax Error
        return -1;
    }
    return -1;
}