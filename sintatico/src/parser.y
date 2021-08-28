%define lr.type canonical-lr
%define parse.error verbose

%{
    #include<stdio.h>
    #include<stdlib.h>

    #define BRED "\e[1;31m"
    #define BGRN "\e[1;32m"
    #define REDHB "\e[0;101m"
    #define BLU "\e[0;34m"
    #define UCYN "\e[4;36m"
    #define reset "\e[0m"
    
    extern FILE *yyin;
    int yyerror (char const *);    
    extern int yylex();
    extern int yylex_destroy();

    extern int errors_count;
    extern int line_idx;
    extern int column_idx;
%}

%union {
  struct Lexeme {
    char content[100];
    int line_idx;
    int column_idx;
    int scope;
  } lexeme;
}

%token <lexeme> C_INTEGER
%token <lexeme> C_FLOAT
%token <lexeme> C_NIL
%token <lexeme> C_STRING

%token <lexeme> T_INTEGER
%token <lexeme> T_FLOAT
%token <lexeme> T_LIST

%token <lexeme> IDENTIFIER

%token <lexeme> RW_FOR
%token <lexeme> RW_RETURN
%token <lexeme> RW_IF
%token <lexeme> RW_ELSE

%token <lexeme> IO_READ
%token <lexeme> IO_WRITE

%token '{' 
%token '}'
%token '('
%token ')'
%token ','
%token ';'

%token '='
%token '!'

%token <lexeme> ARITMETIC_OP_SUM_MINUS
%token <lexeme> ARITMETIC_OP_MUL_DIV
%token <lexeme> COMPARISON_OP
%token <lexeme> LOGICAL_OP_OR
%token <lexeme> LOGICAL_OP_AND


%%

program:
     variable_declaration
    | variable_assignment
    | program variable_declaration
    | program variable_assignment

variable_assignment:
    IDENTIFIER '=' const ';' { printf("\nassignment\n"); }

variable_declaration:
    type IDENTIFIER ';' {
        printf("linha: %s", $2.content);
    }

type:
    T_INTEGER 
    | T_FLOAT
    | T_LIST

const:
    C_INTEGER { printf("%s\n", $1.content); }
    | C_FLOAT { printf("%s\n", $1.content); }

%%

int yyerror(const char* err_msg){
    printf("\n[PARSER] Line: %d | Column: %d\t=> ERROR %s\n\n", yylval.lexeme.line_idx, yylval.lexeme.column_idx, err_msg);
    errors_count++;
    return 0;
}

int main(int argc, char ** argv) {
    
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

    yyparse();

    if(errors_count == 0){
        printf(BGRN "Finished. Lexical analysis found no errors");
        printf(reset "\n");
    } else {
        printf(BRED "Finished. Lexical analysis found %d errors during execution", errors_count);
        printf(reset "\n");
    }


    fclose(yyin);
    yylex_destroy();

    return 0;
}