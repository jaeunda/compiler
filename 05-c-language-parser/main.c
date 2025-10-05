extern int yyparse();
int yywrap(void) { return 1; }

int main(void){
    return yyparse();
}