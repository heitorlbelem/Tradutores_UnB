all:
	bison -d parser.y
	flex scanner.l
	gcc -g -o tradutor parser.tab.c lex.yy.c symbol_table.c -Wall -ll