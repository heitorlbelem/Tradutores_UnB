# Nome do executável do projeto.

EXE = tradutor

# Nome do compilador, extensão dos arquivos source e dados de compilação
# (flags e bibliotecas).

CC = gcc
EXT = .c
CFLAGS = -ll -Wall -g -I $(IDIR)
LIBS = -lm

# Caminhos até pastas importantes (arquivos .h, bibliotecas externas,
# arquivos .o, arquivos com testes e, opcionalmente, arquivos do gcov).

IDIR = ./lib
ODIR = ./src/obj
SDIR = ./src

# Lista de dependências do projeto (arquivos .h).

_DEPS = parser.tab.h symbol_table.h syntatic_tree.h

# Lista de arquivos intermediários de compilação gerados pelo projeto
# (arquivos .o).

_OBJ = parser.tab.o symbol_table.o syntatic_tree.o lex.yy.o

# Lista de arquivos fontes utilizados para compilação.

_SRC = parser.tab.c symbol_table.c syntatic_tree.c lex.yy.c

# Junção dos nomes de arquivos com seus respectivos caminhos.

DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))
SRC = $(patsubst %,$(SDIR)/%,$(_SRC))

# Atualização de arquivos que foram alterados.

$(ODIR)/%.o: $(SDIR)/%$(EXT) $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

# Compilação do executável do projeto.

$(EXE): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

# Lista de comandos adicionais do makefile.

.PHONY: clean
.PHONY: valgrind
.PHONY: before
.PHONY: all

before:
	bison -d $(SDIR)/parser.y -Wcounterexamples 
	@mv parser.tab.c $(SDIR)/parser.tab.c
	@mv parser.tab.h $(IDIR)/parser.tab.h
	flex $(SDIR)/scanner.l
	@mv lex.yy.c $(SDIR)/lex.yy.c

all:
	@make before
	@make $(EXE)

# Comando para limpar o executável do projeto e os arquivos .o.
clean:
	@rm -rf $(ODIR)/*.o *~ core $(SDIR)/lex.yy.c $(SDIR)/parser.tab.c $(IDIR)/parser.tab.h
	@if [ -f $(EXE) ]; then rm $(EXE) -i; fi

# Comando para verificar os testes utilizando o valgrind.
valgrind:
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out" ./$(EXE) $(ARGS)