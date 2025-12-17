a.out: yacc lex
	gcc -g y.tab.c lex.yy.c func.c sem_func.c gen_func.c main.c -w
yacc: yacc.y
	yacc -d yacc.y 
lex: lex.l
	lex lex.l

make clean:
	rm a.out