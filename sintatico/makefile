all:
	bison -d parser.y
	flex scanner.l
	gcc -g parser.tab.c lex.yy.c symbol_table.c -Wall -ll