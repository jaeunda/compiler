int main(){
	initialize();
	yyparse();
	if (syntax_err) exit(1);
	semantic_analysis(root);
	if (semantic_err) exit(1);
	print_ast(root);
}
