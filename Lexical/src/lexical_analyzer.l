%option noyywrap
%option noinput nounput
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "../include/ANSI-color-codes.h"

    int errors_count = 0;
    int column_idx = 1;
    int line_idx = 1;
%}

DIGIT [0-9]
CHARACTER [a-zA-Z]

INTEGER {DIGIT}+
FLOAT (({DIGIT}*)\.({DIGIT}+))

NIL NIL

T_SIMPLE int|float
T_LIST (({T_SIMPLE})[ |\t]+(list))

IDENTIFIER ({CHARACTER}|[_])({CHARACTER}|{DIGIT}|[_])*

INVALID_IDENTIFIER ({DIGIT}+({CHARACTER}|[~^])+

OPERATORS "!"|"&&"|"||"|"=="|">"|"<"|">="|"<="|"!="|"="|"+"|"++"|"+="|"-"|"--"|"-="|"/"|"/="|"*"|"*="|"?"|"%"|"<<"|">>"

DELIMITERS "("|")"|"{"|"}"|";"|","

%%

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

{IDENTIFIER} {
    write_line("Identifier", yytext);
    column_idx += yyleng;
}

\n {
    column_idx = 1;
    line_idx++;
}

[ |\t] {
    column_idx += yyleng;
}

[0-9][a-zA-Z] {
    printf("ERROR: Erradoo\n");
}

. {
    printf(REDHB "ERROR: Unexpected character '%s' at LINE:%d\tCOLUMN:%d", yytext);
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
    printf("\tat line: %d column: %d\n", line_idx, column_idx);
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