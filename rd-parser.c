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
#define ADD 43
#define PRODUCT 42
#define LEFT_PAREN 40
#define RIGHT_PAREN 41

/* GLOBAL VAR */
int next_token;

int main(void){
    /* INPUT */
    int result;
    if (lexeme() < 0){
        fprintf(stderr, "Syntax Error\n");
        exit(1);
    }    
    if (expression(&result) < 0){
        fprintf(stderr, "Syntax Error\n");
        exit(1);
    }
    /* OUTPUT */
    printf("%d\n", result);
    exit(0);
}
int expression(int *result){
    /* E -> E + T | T */

}
int digit(int *result){
    if (next_token < (int)'0' || next_token > (int)'9')
        return -1;
    *result = next_token - (int)'0';
    return 0;
}
int lexeme(){
    if ((next_token = getchar()) == '\n'){
        return -1;
    }
    return 0;
}