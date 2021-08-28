
all:
	bison -d src/parser.y
	flex src/scanner.l
	gcc -g parser.tab.c lex.yy.c -Wall -ll
