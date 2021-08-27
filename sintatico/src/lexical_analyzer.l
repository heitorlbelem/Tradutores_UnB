%option noyywrap
%option noinput nounput
%{
    #include <stdio.h>
    #include <stdlib.h>
    
    #define BRED "\e[1;31m"
    #define BGRN "\e[1;32m"
    #define REDHB "\e[0;101m"
    #define BLU "\e[0;34m"
    #define UCYN "\e[4;36m"
    #define reset "\e[0m"


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
INVALID_IDENTIFIER ({DIGIT}+({CHARACTER}|[~^\`´.$&@#_])+)

LIST_OPERATORS "?"|":"|"<<"|">>"|"%"
COMPARISON_OPERATORS ">"|"<"|">="|"<="|"=="|"!="
ARITMETIC_OPERATORS "+"|"-"|"*"|"/"
UNARY_OPERATORS "++"|"--"
ASSIGN_OPERATORS "="|"+="|"-="|"*="|"/="
LOGICAL_OPERATORS "&&"|"||"

RESERVED_WORDS for|if|else|return
IO_OPERATIONS read|write|writeln

DELIMITERS "("|")"|"{"|"}"|";"|","

STRING (\"[^\"\n]*\")
INVALID_STRING (\"({CHARACTER}*{DIGIT}*)*)

ONE_LINE_COMMENT \/\/.*
MULTI_LINE_COMMENT \/\*(.|[\n])*\*\/
%%

{ONE_LINE_COMMENT}|{MULTI_LINE_COMMENT} {}

{DELIMITERS} {
    write_line("Delimiter", yytext);
    column_idx += yyleng;
}

{LIST_OPERATORS} {
    write_line("List Operator", yytext);
    column_idx += yyleng;
}

{COMPARISON_OPERATORS} {
    write_line("Comparison Operator", yytext);
    column_idx += yyleng;
}

{ARITMETIC_OPERATORS} {
    write_line("Aritmetic Operator", yytext);
    column_idx += yyleng;
}

{UNARY_OPERATORS} {
    write_line("Unary Operator", yytext);
    column_idx += yyleng;
}

{ASSIGN_OPERATORS} {
    write_line("Assign Operator", yytext);
    column_idx += yyleng;
}

{LOGICAL_OPERATORS} {
    write_line("Logical Operator", yytext);
    column_idx += yyleng;
}

"!" {
    write_line("Exclamation Operator", yytext);
    column_idx += yyleng;
}

{RESERVED_WORDS} {
    write_line("Reserved word", yytext);
    column_idx += yyleng;
}

{IO_OPERATIONS} {
    write_line("IO Operation", yytext);
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

{STRING} {
    write_line("String text", yytext);
    column_idx += yyleng;
}

{INVALID_STRING} {
    errors_count++;
    printf(REDHB "Line: %d | Column: %d\t=> ERROR: String must be enclosed in double quotes", line_idx, column_idx);
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
    printf(REDHB "Line: %d | Column: %d\t=> ERROR: Invalid token '%s'", line_idx, column_idx, yytext);
    errors_count++;
    column_idx += yyleng;
    printf(reset "\n");
}

. {
    printf(REDHB "Line: %d | Column: %d\t=> ERROR: Unexpected character '%s'", line_idx, column_idx, yytext);
    errors_count++;
    column_idx += yyleng;
    printf(reset "\n");
}


%%

void write_line(char* type, char* token) {
    printf("Line: %d | Column: %d\t=> ", line_idx, column_idx);
    printf(BLU "%s ", type);
    printf(reset "");
    printf(UCYN "%s", token);
    printf(reset "\n");
}

int main(int argc, char **argv) {
    
    if(argc != 2) {
        printf(BRED "You must pass exactly one file as an argument.");
        printf(reset "\n");
        return (-1);
    }

    if (!(yyin = fopen(argv[1], "r"))) {
        printf(BRED "Error opening file");
        printf(reset "\n");
        return (-1);
    }

    yylex();

    if(errors_count == 0){
        printf(BGRN "Finished. Lexical analysis found no errors");
        printf(reset "\n");
    } else {
        printf(BRED "Finished. Lexical analysis found %d errors during execution", errors_count);
        printf(reset "\n");
    }


    fclose(yyin);
    yylex_destroy();

    return (0);
}