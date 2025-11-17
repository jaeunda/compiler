a.out: yacc lex
	gcc -g y.tab.c lex.yy.c print.c func.c main.c -w
yacc: yacc.y
	yacc -d yacc.y
lex: lex.l
	lex lex.l

make clean:
	rm a.out