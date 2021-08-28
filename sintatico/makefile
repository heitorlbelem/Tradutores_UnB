
all:
	bison -d src/parser.y -Wcounterexamples -Wother
	flex src/scanner.l
	gcc -g parser.tab.c lex.yy.c -Wall -ll
