%option noyywrap
%option noinput nounput
%{
    #include <stdio.h>
    #include <stdlib.h>

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
    printf("Delimiter '%s' at LINE:%d\tCOLUMN: %d\t", yytext, line_idx, column_idx);
    column_idx += yyleng;
    printf("\n");
}


{OPERATORS} {
    printf("Operator '%s' at LINE:%d\tCOLUMN: %d\t", yytext, line_idx, column_idx);
    column_idx += yyleng;
    printf("\n");
}

{INTEGER} { 
    printf("Integer '%s' at LINE: %d\tCOLUMN: %d", yytext, line_idx, column_idx);
    column_idx += yyleng;
    printf("\n");
}

{FLOAT} {
    printf("Float '%s' at LINE: %d\tCOLUMN: %d", yytext, line_idx, column_idx);
    column_idx += yyleng;
    printf("\n");
}

{T_SIMPLE} {
    printf("Simple Type '%s' at LINE: %d\tCOLUMN: %d", yytext, line_idx, column_idx);
    column_idx += yyleng;
    printf("\n");
}

{T_LIST} { 
    printf("List Type '%s' at LINE: %d\tCOLUMN: %d", yytext, line_idx, column_idx);
    column_idx += yyleng;
    printf("\n");
}

{IDENTIFIER} {
    printf("Identifier '%s' at LINE: %d\tCOLUMN: %d", yytext, line_idx, column_idx);
    column_idx += yyleng;
    printf("\n");
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
    printf("ERROR: Unexpected character '%s' at LINE:%d\tCOLUMN:%d", yytext, line_idx, column_idx);
    errors_count++;
    column_idx += yyleng;
    printf("\n");
}


%%

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
        printf("Finished. Lexical analysis found no errors\n");
    } else {
        printf("Finished. Lexical analysis found %d errors during execution\n", errors_count);
    }


    fclose(yyin);
    yylex_destroy();

    return (0);
}