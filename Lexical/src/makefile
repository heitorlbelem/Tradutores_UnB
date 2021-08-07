all: lexical

lexical: lex.yy.c
	gcc -o lexical lex.yy.c -ll

lex.yy.c: lexical_analyzer.l
	flex lexical_analyzer.l

clean:
	rm -rf *.o *~ lexical
