a.out: yacc lex
	gcc y.tab.c lex.yy.c print.c main.c -w
yacc: yacc.y
	yacc -d yacc.y
lex: lex.l
	lex lex.l

make clean:
	rm a.out