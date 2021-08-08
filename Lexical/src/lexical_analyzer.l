%option noyywrap
%option noinput nounput
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "../include/ANSI-color-codes.h"


    int errors_count = 0;
    int column_idx = 1;
    int line_idx = 1;

    void write_line(char*, char*);
%}

DIGIT [0-9]
CHARACTER [a-zA-Z]

INTEGER {DIGIT}+
FLOAT (({DIGIT}*)\.({DIGIT}+))

NIL NIL

T_SIMPLE int|float
T_LIST {T_SIMPLE}[ |\t]+list[ \t]+

IDENTIFIER ({CHARACTER}|[_])({CHARACTER}|{DIGIT}|[_])*

INVALID_IDENTIFIER ({DIGIT}+({CHARACTER}|[~^\/`´.$&@#_])+)

OPERATORS "!"|"&&"|"||"|"=="|">"|"<"|">="|"<="|"!="|"="|"+"|"++"|"+="|"-"|"--"|"-="|"/"|"/="|"*"|"*="|"?"|":"|"%"|"<<"|">>"

DELIMITERS "("|")"|"{"|"}"|";"|","

UNIQUE_CHAR (\'[^\']\')

STRING (\"[^\"]*\")

INVALID_STRING (\'[^\']*\')

ONE_LINE_COMMENT \/\/.*
MULTI_LINE_COMMENT \/\*[^\*\/]*\*\/

%%

{ONE_LINE_COMMENT}|{MULTI_LINE_COMMENT} {}

{DELIMITERS} {
    write_line("Delimiter", yytext);
    column_idx += yyleng;
}


{OPERATORS} {
    write_line("Operator", yytext);
    column_idx += yyleng;
}

{INTEGER} { 
    write_line("Integer", yytext);
    column_idx += yyleng;
}

{FLOAT} {
    write_line("Float", yytext);
    column_idx += yyleng;
}

{T_SIMPLE} {
    write_line("Simple Type", yytext);
    column_idx += yyleng;
}

{T_LIST} { 
    write_line("List Type", yytext);
    column_idx += yyleng;
}

{NIL} {
    write_line("Constant", yytext);
    column_idx += yyleng;
}

{IDENTIFIER} {
    write_line("Identifier", yytext);
    column_idx += yyleng;
}

{UNIQUE_CHAR} {
    write_line("Char", yytext);
    column_idx += yyleng;
}

{STRING} {
    write_line("String text", yytext);
    column_idx += yyleng;
}

{INVALID_STRING} {
    errors_count++;
    printf(REDHB "ERROR: String must be enclosed in double quotes. Line: %d Column:%d", line_idx, column_idx);
    printf(reset "\n");
    column_idx += yyleng;
}


\n {
    column_idx = 1;
    line_idx++;
}

[ |\t] {
    column_idx += yyleng;
}

{INVALID_IDENTIFIER} {
    printf(REDHB "ERROR: Invalid token '%s' at line: %d column: %d", yytext, line_idx, column_idx);
    errors_count++;
    column_idx += yyleng;
    printf(reset "\n");
}

. {
    printf(REDHB "ERROR: Unexpected character '%s' at line: %d column: %d", yytext, line_idx, column_idx);
    errors_count++;
    column_idx += yyleng;
    printf(reset "\n");
}


%%

void write_line(char* type, char* token) {
    printf(BLU "%s ", type);
    printf(reset "");
    printf(UCYN "%s", token);
    printf(reset "");
    printf(" at line: %d column: %d\n", line_idx, column_idx);
    printf(reset "");
}

int main(int argc, char **argv) {
    
    if(argc != 2) {
        printf("Eh necessario passar exatamente um arquivo como parametro\n");
        return (-1);
    }

    if (!(yyin = fopen(argv[1], "r"))) {
        printf("Erro ao abrir arquivo\n");
        return (-1);
    }

    yylex();

    if(errors_count == 0){
        printf(BGRN "Finished. Lexical analysis found no errors\n");
    } else {
        printf(BRED "Finished. Lexical analysis found %d errors during execution\n", errors_count);
    }


    fclose(yyin);
    yylex_destroy();

    return (0);
}