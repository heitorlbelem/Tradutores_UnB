tradutor: src/lex.yy.c
	gcc -g -W -o tradutor src/lex.yy.c -ll

src/lex.yy.c: src/lexical_analyzer.l
	flex -o src/lex.yy.c src/lexical_analyzer.l

clean:
	rm -rf *.o *~ tradutor src/lex.yy.c

