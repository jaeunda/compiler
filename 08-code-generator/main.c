#include <stdio.h>
#include <stdlib.h>
#include "type.h"

extern FILE *yyin;
extern A_NODE *root;
extern int syntax_err;
extern int semantic_err;

FILE *fout;

void main(int argc, char *argv[]){
    if (argc < 2){
        printf("source file not given.\n");
        exit(1);
    }
    if (strcmp(argv[1], "-o") == 0){
        if (argc > 3){
            if ((fout = fopen(argv[2], "w")) == NULL){
                printf("cannot open output file: %s\n", argv[3]);
                exit(1);
            } else ;
        } else {
            printf("out file not given.\n");
            exit(1);
        }
    } else if (argc == 2){
        if ((fout = fopen("a.asm", "w")) == NULL){
            printf("cannot open output file: a.asm\n");
            exit(1);
        }
    }

    if ((yyin = fopen(argv[argc-1], "r")) == NULL){
        printf("cannot open input file: %s\n", argv[argc-1]);
        exit(1);
    }

    printf("\nStart Syntax Analysis\n");
    
    initialize();
    yyparse();
    if (syntax_err) exit(1);

    printf("\nStart Semantic Analysis\n");
    semantic_analysis(root);
    if (semantic_err) exit(1);

    printf("\nStart Code Generation\n");
    code_generation(root);

    exit(0);
}