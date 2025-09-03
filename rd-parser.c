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
#define ASTERISK 42
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
    if (next_token != (int)'\n'){
        fprintf(stderr, "Syntax Error\n");
        exit(1);
    }
    /* OUTPUT */
    printf("%d\n", result);
    exit(0);
}
int expression(int *result){
    /* E -> T + E | T */
    if (term(result) < 0){
        return -1;
    }
    if (next_token != PLUS){
        return 0;
    }
    if (lexeme() < 0){
        return -1;
    }
    int rhs;
    if (expression(&rhs) < 0){
        return -1;
    }
    *result += rhs;
    return 0;
}
int term(int *result){
    /* T -> F * T | F */
    if (factor(result) < 0){
        return -1;
    }
    if (lexeme() < 0){
        return -1;
    }
    if (next_token != ASTERISK){
        return 0;
    }
    if (lexeme() < 0){
        return -1;
    }
    int rhs;
    if (term(&rhs) < 0){
        return -1;
    }
    *result *= rhs;
    return 0;
}
int factor(int *result){
    /* F -> digit | '(' E ')' */
    if (next_token == LEFT_PAREN){
        if (lexeme() < 0){
            return -1;
        }
        if (expression(result) < 0){
            return -1;
        }
        if (next_token != RIGHT_PAREN){
            return -1;
        }
        return 0;
    }
    if (digit(result) < 0){
        return -1;
    }
    return 0;
}
int digit(int *result){
    if (next_token < (int)'0' || next_token > (int)'9')
        return -1;
    *result = next_token - (int)'0';
    return 0;
}
int lexeme(){
    if ((next_token = getchar()) == EOF){
        return -1;
    }
    return 0;
}