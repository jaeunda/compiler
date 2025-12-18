#include "type.h"
#include <stdio.h>

#ifndef _GEN_FUNC_H_
#define _GEN_FUNC_H_

typedef enum op {OP_NULL, LOD,LDX,LDXB, LDA, LITI,
	STO,STOB,STX,STXB,
	SUBI,SUBF,DIVI,DIVF,ADDI,ADDF,OFFSET,MULI,MULF, MOD,
	LSSI,LSSF,GTRI,GTRF, LEQI,LEQF,GEQI,GEQF,NEQI,NEQF,EQLI,EQLF,
	NOT, OR, AND, CVTI,CVTF,
	JPC,JPCR,JMP,JPT,JPTR,INT,INCI,INCF,DECI,DECF,SUP, CAL,ADDR,
	RET,  MINUSI, MINUSF, CHK,LDI,LDIB,SWITCH,SWVALUE,SWDEFAULT,
	SWLABEL, SWEND,POP, POPB } OPCODE;
char *opcode_name[]={ "OP_NULL", "LOD","LDX","LDXB", "LDA", "LITI",
	"STO","STOB","STX","STXB","SUBI","SUBF","DIVI","DIVF","ADDI","ADDF",
	"OFFSET","MULI","MULF", "MOD", "LSSI","LSSF","GTRI","GTRF", "LEQI","LEQF",
	"GEQI", "GEQF","NEQI","NEQF","EQLI","EQLF", "NOT", "OR", "AND",
	"CVTI","CVTF", "JPC","JPCR","JMP","JPT","JPTR",
	"INT","INCI","INCF","DECI","DECF","SUP","CAL","ADDR",
	"RET","MINUSI","MINUSF","CHK","LDI","LDIB","SWITCH","SWVALUE",
	"SWDEFAULT", "SWLABEL", "SWEND","POP","POPB"} ;

typedef enum {SW_VALUE,SW_DEFAULT} SW_KIND;
typedef struct sw {SW_KIND kind; int val; int label;} A_SWITCH;

void code_generation(A_NODE *);

void gen_literal_table(); 
void gen_program(A_NODE *); 
void gen_expression(A_NODE *); 
void gen_expression_left(A_NODE *); 
void gen_arg_expression(A_NODE *);
void gen_statement(A_NODE *,int, int, A_SWITCH [], int *); 
void gen_statement_list(A_NODE *,int, int, A_SWITCH [], int *); 
void gen_initializer_global(A_NODE *, A_TYPE *, int); 
void gen_initializer_local(A_NODE *, A_TYPE *, int); 
void gen_declaration_list(A_ID *); void gen_declaration(A_ID *); 
void gen_code_i(OPCODE,int,int); void gen_code_f(OPCODE,int,float);
void gen_code_s(OPCODE,int,char *); void gen_code_l(OPCODE,int,int);
void gen_label_number(int);
void gen_label_name(char *);
void gen_error();

int  get_label();

extern FILE *fout;
extern A_TYPE *int_type, *float_type, *char_type, *void_type, *string_type;
extern A_LITERAL literal_table[];
extern int literal_no;

int label_no=0;
int gen_err=0;

#endif