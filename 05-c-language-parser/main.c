extern int yyparse();
int yywrap(void) { return 0; }

int line_no;

void main(void){
    yyparse();
}