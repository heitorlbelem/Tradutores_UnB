%option noyywrap
%option noinput nounput
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "parser.tab.h"
    
    #define BRED "\e[1;31m"
    #define BGRN "\e[1;32m"
    #define REDHB "\e[0;101m"
    #define BLU "\e[0;34m"
    #define UCYN "\e[4;36m"
    #define reset "\e[0m"

    int errors_count = 0;
    int column_idx = 1;
    int line_idx = 1;
    int scope_id = 0;

    // void write_line(char*, char*);
%}

DIGIT [0-9]
CHARACTER [a-zA-Z]

INTEGER {DIGIT}+
FLOAT (({DIGIT}*)\.({DIGIT}+))
NIL NIL

T_SIMPLE int|float
T_LIST {T_SIMPLE}[ |\t]+list[ \t]+

IDENTIFIER ({CHARACTER}|[_])({CHARACTER}|{DIGIT}|[_])*

LIST_OPERATORS "?"|":"|"<<"|">>"|"%"
COMPARISON_OPERATORS ">"|"<"|">="|"<="|"=="|"!="
ARITMETIC_OPERATORS "+"|"-"|"*"|"/"
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
    // write_line("Delimiter", yytext);
    column_idx += yyleng;

    if(strcmp(yytext, "(") == 0) {
        return '(';
    } else if(strcmp(yytext, ")") == 0) {
        return ')';
    } else if(strcmp(yytext, "{") == 0) {
        scope_id++;
        return '{';
    } else if(strcmp(yytext, "}") == 0) {
        return '}';
    } else if(strcmp(yytext, ",") == 0) {
        return ',';
    } else {
        return ';';
    }

}

{LIST_OPERATORS} {

    yylval.token.line_idx = line_idx;
    yylval.token.column_idx = column_idx;
    strcpy(yylval.token.content, yytext);

    // write_line("List Operator", yytext);
    column_idx += yyleng;

    if(strcmp(yytext, "?") == 0 || strcmp(yytext, "%") == 0) {
        return UNARY_LIST_OP;
    } else {
        return BINARY_LIST_OP;
    }
}

{COMPARISON_OPERATORS} {

    yylval.token.line_idx = line_idx;
    yylval.token.column_idx = column_idx;
    strcpy(yylval.token.content, yytext);

    // write_line("Comparison Operator", yytext);

    if((strcmp(yytext, "==") == 0) || (strcmp(yytext, "!=") == 0)) {
        return EQUALITY_OP;
    }
    return RELATIONAL_OP;
    

    column_idx += yyleng;

}

{ARITMETIC_OPERATORS} {
    
    yylval.token.line_idx = line_idx;
    yylval.token.column_idx = column_idx;
    strcpy(yylval.token.content, yytext);

    // write_line("Aritmetic Operator", yytext);
    column_idx += yyleng;

    if((strcmp(yytext, "+") == 0) || (strcmp(yytext, "-") == 0)) {
        return ARITMETIC_OP_ADDITIVE;
    } else {
        return ARITMETIC_OP_MULTIPLICATIVE;
    }

}

"=" {
    // write_line("Assign Operator", yytext);
    column_idx += yyleng;

    return '=';
}

{LOGICAL_OPERATORS} {

    yylval.token.line_idx = line_idx;
    yylval.token.column_idx = column_idx;
    strcpy(yylval.token.content, yytext);

    // write_line("Logical Operator", yytext);
    column_idx += yyleng;

    if(strcmp(yytext, "&&") == 0) {
        return LOGICAL_OP_AND;
    } else {
        return LOGICAL_OP_OR;
    }
}

"!" {
    // write_line("Exclamation Operator", yytext);
    column_idx += yyleng;

    return '!';
}

{RESERVED_WORDS} {

    yylval.token.line_idx = line_idx;
    yylval.token.column_idx = column_idx;
    strcpy(yylval.token.content, yytext);

    // write_line("Reserved word", yytext);
    column_idx += yyleng;

    if(strcmp(yytext, "for") == 0) {
        return RW_FOR;
    } else if(strcmp(yytext, "if") == 0) {
        return RW_IF;
    } else if(strcmp(yytext, "else") == 0) {
        return RW_ELSE;
    } else {
        return RW_RETURN;
    } 
}

{IO_OPERATIONS} {

    yylval.token.line_idx = line_idx;
    yylval.token.column_idx = column_idx;
    strcpy(yylval.token.content, yytext);

    // write_line("IO Operation", yytext);
    column_idx += yyleng;

    if(strcmp(yytext, "read") == 0) {
        return IO_READ;
    } else {
        return IO_WRITE;
    }
}

{INTEGER} { 

    yylval.token.line_idx = line_idx;
    yylval.token.column_idx = column_idx;
    strcpy(yylval.token.content, yytext);
  
    // write_line("Integer", yytext);
    column_idx += yyleng;

    return C_INTEGER;
}

{FLOAT} {

    yylval.token.line_idx = line_idx;
    yylval.token.column_idx = column_idx;
    strcpy(yylval.token.content, yytext);

    // write_line("Float", yytext);
    column_idx += yyleng;

    return C_FLOAT;
}

{T_SIMPLE} {

    yylval.token.line_idx = line_idx;
    yylval.token.column_idx = column_idx;
    strcpy(yylval.token.content, yytext);

    // write_line("Simple Type", yytext);
    column_idx += yyleng;

    return TYPE;

}

{T_LIST} { 

    yylval.token.line_idx = line_idx;
    yylval.token.column_idx = column_idx;
    strcpy(yylval.token.content, yytext);
    
    // write_line("List Type", yytext);
    column_idx += yyleng;

    return TYPE;
}

{NIL} {
    yylval.token.line_idx = line_idx;
    yylval.token.column_idx = column_idx;
    strcpy(yylval.token.content, yytext);

    // write_line("Constant", yytext);
    column_idx += yyleng;

    return C_NIL;
}

{IDENTIFIER} {
    
    yylval.token.line_idx = line_idx;
    yylval.token.column_idx = column_idx;
    strcpy(yylval.token.content, yytext);
   
    // write_line("Identifier", yytext);
    column_idx += yyleng;

    return IDENTIFIER;
}

{STRING} {
    yylval.token.line_idx = line_idx;
    yylval.token.column_idx = column_idx;
    strcpy(yylval.token.content, yytext);
    
    // write_line("String text", yytext);
    column_idx += yyleng;

    return C_STRING;
}

{INVALID_STRING} {
    errors_count++;
    printf(REDHB "[SCANNER] Line: %d | Column: %d\t=> ERROR: String must be enclosed in double quotes", line_idx, column_idx);
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

. {
    printf(REDHB "[SCANNER] Line: %d | Column: %d\t=> ERROR: Unexpected character '%s'", line_idx, column_idx, yytext);
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