all:
	bison -d parser.y -Wcounterexamples
	flex scanner.l
	gcc -g -o tradutor parser.tab.c lex.yy.c symbol_table.c syntatic_tree.c -Wall -ll