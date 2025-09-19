#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define NUMBER 256
#define PLUS 257
#define STAR 258
#define LPAREN 259
#define RPAREN 260
#define END 261
#define EXPRESSION 0
#define TERM 1
#define FACTOR 2
#define ACC 999

// ACTION TABLE
int action[12][6] = {
    {5,0,0,4,0,0}, {0,6,0,0,0,ACC}, {0,-2,7,0,-2,-2},
    {0,-4,-4,0,-4,-4}, {5,0,0,4,0,0}, {0,-6,-6,0,-6,-6},
    {5,0,0,4,0,0}, {5,0,0,4,0,0}, {0,6,0,0,11,0},
    {0,-1,7,0,-1,-1}, {0,-3,-3,0,-3,-3}, {0,-5,-5,0,-5,-5}
};
// GOTO TABLE
int go_to[12][3] = {
    {1,2,3}, {0,0,0}, {0,0,0}, {0,0,0}, {8,2,3}, {0,0,0},
    {0,9,3}, {0,0,10}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}
};

// GRAMMAR
int prod_left[7] = {0, EXPRESSION, EXPRESSION, TERM, TERM, FACTOR, FACTOR};
int prod_length[7] = {0,3,1,3,1,3,1};

int stack[1000];
int top = -1;
int sym;

/* FUNCTIONS */
int yyparse(void);
void push(int i);
void shift(int i);
void reduce(int i);
void yyerror(void){
    printf("Syntax Error\n");
    exit(EXIT_FAILURE);
}
int yylex(void);

int main(void){
    yyparse();
}
int yyparse(void){
    int i;
    stack[++top] = 0;
    sym = yylex();
    do {
        i = action[stack[top]][sym-256];
        if (i == ACC)
            printf("Success!\n");
        else if (i > 0) shift(i);
        else if (i < 0) reduce(-i);
        else yyerror(); // i == 0
    } while (i != ACC);
}