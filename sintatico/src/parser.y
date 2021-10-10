%define lr.type canonical-lr
%define parse.error verbose

%{
    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    #include "symbol_table.h"
    #include "syntatic_tree.h"
    #include "scope_stack.h"
    #include "semantic_analysis.h"
    
    #define BRED "\e[1;31m"
    #define BGRN "\e[1;32m"
    #define REDHB "\e[0;101m"
    #define BLU "\e[0;34m"
    #define UCYN "\e[4;36m"
    #define reset "\e[0m"
    
    extern FILE *yyin;
    void yyerror (char const *);    
    extern int yylex();
    extern int yylex_destroy();

    extern int errors_count;
    extern int scope_id;
    extern int top;
    extern int line_idx;
    extern int column_idx;
    int symbol_table_idx = 0;
    int symbol_table_size = 0;
    int parsing_errors = 0;
    extern int scope_stack[100000];
    int current_function_idx = 0;

    T_Symbol symbol_table[100000];
    T_Node* root_node;
%}

%union {
    struct Token {
        char content[100];
        int line_idx;
        int column_idx;
        int scope;
    } token;

    struct T_Node* node;
}

%token <token> C_INTEGER
%token <token> C_FLOAT
%token <token> C_NIL
%token <token> LIT_STRING

%token <token> SIMPLE_TYPE
%token <token> LIST_TYPE
%token <token> IDENTIFIER

%token <token> RW_FOR
%token <token> RW_RETURN
%token <token> RW_IF
%token <token> RW_ELSE

%token <token> IO_READ
%token <token> IO_WRITE

%token <token> BINARY_LIST_OP
%token <token> UNARY_LIST_OP

%token '{' 
%token '}'
%token '('
%token ')'
%token ','
%token ';'

%token '='
%token '!'

%token <token> ARITMETIC_OP_ADDITIVE
%token <token> ARITMETIC_OP_MULTIPLICATIVE
%token <token> RELATIONAL_OP
%token <token> EQUALITY_OP
%token <token> LOGICAL_OP_OR
%token <token> LOGICAL_OP_AND

%right THEN RW_ELSE

%type<node> program
%type<node> declarations
%type<node> declaration
%type<node> function_declaration_statement
%type<node> variable_declaration_statement
%type<node> block
%type<node> statements
%type<node> statement
%type<node> parameters_optative
%type<node> parameters
%type<node> parameter
%type<node> for_statement
%type<node> if_else_statement
%type<node> expression_statement
%type<node> io_statement
%type<node> input_statement
%type<node> output_statement
%type<node> return_statement
%type<node> expression
%type<node> function_call_expression
%type<node> function_arguments_optative
%type<node> function_arguments
%type<node> function_argument
%type<node> expression_optative
%type<node> or_expression_optative
%type<node> or_expression
%type<node> and_expression
%type<node> equality_expression
%type<node> relational_expression
%type<node> list_expression
%type<node> addition_expression
%type<node> multiplication_expression
%type<node> simple_value
%type<node> constant

%start program

%%

program
    : declarations {
        root_node = $1;
    }
;

declarations
    : declarations declaration {
        $$ = new_node("declarations", "declarations", 0, "");
        $$->child[0] = $1;
        $$->child[1] = $2;
    }
    | declaration {
        $$ = $1;
    }
    | error { parsing_errors++; }
;

declaration
    : function_declaration_statement {
        $$ = $1;
    }
    | variable_declaration_statement {
        $$ = $1;
    }
;

block
    : '{' statements '}' {
        $$ = $2;
    }
;

statements
    : statements statement {
        $$ = new_node("statements", "statements", 0, "");
        $$->child[0] = $1;
        $$->child[1] = $2;
    }
    | statement {
        $$ = $1;
    }
;

statement
    : expression_statement {
        $$ = $1;
    }
    | io_statement {
        $$ = $1;
    }
    | return_statement {
        $$ = $1;
    }
    | variable_declaration_statement {
        $$ = $1;
    }
    | for_statement {
        $$ = $1;
    }
    | if_else_statement {
        $$ = $1;
    }
    | block {
        $$ = $1;
    }
    | error { parsing_errors++; }
;

function_declaration_statement:
    SIMPLE_TYPE IDENTIFIER '(' {
        
        scope_id++;
        top++;
        push_scope(top, scope_id, scope_stack);
        
        T_Symbol sym = symbol(
            $1.content, 
            $2.content, 
            "function", 
            $2.scope, 
            $2.line_idx, 
            $2.column_idx,
            0
        );
        if(check_redeclared(symbol_table, $2.content, symbol_table_idx, $2.scope)) {
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Function or variable '%s' already declared\n"reset, $2.line_idx, $2.column_idx, $2.content);
        }

        insert_symbol(symbol_table, symbol_table_idx, sym);
        current_function_idx = symbol_table_idx;
        symbol_table_idx++;
        symbol_table_size++;
    }
    parameters_optative ')' statement {
        $$ = new_node("function_declaration_statement", "func_declaration", 0, "");
        $$->child[0] = new_node("type", $1.content, 1, "");
        $$->child[1] = new_node("id", $2.content, 1, "");
        $$->child[2] = $5;
        $$->child[3] = $7;
        pop_scope(top, scope_stack);
        if(top > 0) top--;
    }
    | SIMPLE_TYPE LIST_TYPE IDENTIFIER '(' {
        scope_id++;
        top++;
        push_scope(top, scope_id, scope_stack);
        char type[100];
        strcpy(type, $1.content);
        strcat(type, " ");
        strcat(type, $2.content);
        T_Symbol sym = symbol(
            type, 
            $3.content, 
            "function", 
            $3.scope, 
            $3.line_idx, 
            $3.column_idx,
            0
        );
        if(check_redeclared(symbol_table, $3.content, symbol_table_idx, $3.scope)) {
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Function or variable '%s' already declared\n"reset, $3.line_idx, $3.column_idx, $3.content);
        }
    
        insert_symbol(symbol_table, symbol_table_idx, sym);
        current_function_idx = symbol_table_idx;
        symbol_table_idx++;
        symbol_table_size++;
        
    } parameters_optative ')' statement {
        char type[100];
        strcpy(type, $1.content);
        strcat(type, " ");
        strcat(type, $2.content);
           
        $$ = new_node("function_declaration_statement", "func_declaration", 0, "");
        $$->child[0] = new_node("type", type, 1, "");
        $$->child[1] = new_node("id", $3.content, 1, "");
        $$->child[2] = $6;
        $$->child[3] = $8;
        pop_scope(top, scope_stack);
        if(top > 0) top--;
    }
;

parameters_optative
    : %empty {
        $$ = NULL;
    }
    | parameters {
        $$ = $1;
    }
;

parameters
    : parameters ',' parameter {
        $$ = new_node("parameters", "params", 0, "");
        $$->child[0] = $1;
        $$->child[1] = $3;
    }
    | parameter {
        $$ = $1;
    }
;

parameter
    : SIMPLE_TYPE IDENTIFIER {
        T_Symbol sym = symbol(
            $1.content, 
            $2.content, 
            "parameter", 
            scope_stack[top], 
            $2.line_idx, 
            $2.column_idx,
            0
        );
        increment_params_number(symbol_table, current_function_idx);
        insert_symbol(symbol_table, symbol_table_idx, sym);
        symbol_table_idx++;
        symbol_table_size++;

        $$ = new_node("function_parameter", "function_param", 0, "");
        $$->child[0] = new_node("type", $1.content, 1, "");
        $$->child[1] = new_node("id", $2.content, 1, "");
    }
    | SIMPLE_TYPE LIST_TYPE IDENTIFIER {
        char type[100];
        strcpy(type, $1.content);
        strcat(type, " ");
        strcat(type, $2.content);
        T_Symbol sym = symbol(
            type, 
            $3.content, 
            "parameter", 
            $3.scope, 
            $3.line_idx, 
            $3.column_idx,
            0
        );
        increment_params_number(symbol_table, current_function_idx);
        insert_symbol(symbol_table, symbol_table_idx, sym);
        symbol_table_idx++;
        symbol_table_size++;

        $$ = new_node("function_parameter", "function_param", 0, "");
        $$->child[0] = new_node("type", type, 1, "");
        $$->child[1] = new_node("id", $3.content, 1, "");
    }
;

for_statement
    : RW_FOR '(' expression_optative ';' or_expression_optative ';' expression_optative ')' statement {
        $$ = new_node("for_statement", $1.content, 0, "");
        $$->child[0] = $3;
        $$->child[1] = $5;
        $$->child[2] = $7;
        $$->child[3] = $9;
    }
;

if_else_statement
    : RW_IF '(' expression ')' statement %prec THEN {
        $$ = new_node("if_else_statement", $1.content, 0, "");
        $$->child[0] = $3;
        $$->child[1] = $5;
    }
    | RW_IF '(' expression ')' statement RW_ELSE statement {
        $$ = new_node("if_else_statement", $1.content, 0, "");
        $$->child[0] = $3;
        $$->child[1] = $5;
        $$->child[2] = new_node("else_rw", $6.content, 0, "");
        $$->child[2]->child[0] = $7;
    }

expression_statement
    : expression ';' {
        $$ = $1;
    }
;

io_statement
    : input_statement {
        $$ = $1;
    }
    | output_statement {
        $$ = $1;
    }
;

input_statement
    : IO_READ '(' IDENTIFIER ')' ';' {
        $$ = new_node("input_statement", $1.content, 0, "");
        $$->child[0] = new_node("identifier", $3.content, 1, "");
        if(variable_unavailable(symbol_table, $$->child[0], symbol_table_idx, top, scope_stack)) {
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Undefined reference to '%s'\n"reset, $3.line_idx, $3.column_idx, $3.content);
        }
    }
;

output_statement
    : IO_WRITE '(' expression ')' ';' {
        $$ = new_node("output_statement", $1.content, 0, "");
        $$->child[0] = $3;
    }
    | IO_WRITE '(' LIT_STRING ')' ';' {
        $$ = new_node("output_statement", $1.content, 0, "");
        $$->child[0] = new_node("string_literal", $3.content, 1, "");
    }
;

return_statement
    : RW_RETURN expression ';' {
        $$ = new_node("return_statement", $1.content, 0, "");
        $$->child[0] = $2;
    }
;

expression
    : IDENTIFIER '=' expression {
        $$ = new_node("assignment_expression", "=", 0, "");
        $$->child[0] = new_node("id", $1.content, 1, "");
        $$->child[1] = $3;
        if(variable_unavailable(symbol_table, $$->child[0], symbol_table_idx, top, scope_stack)) {
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Undefined reference to '%s'\n"reset, $1.line_idx, $1.column_idx, $1.content);
        }

        valid_binary_operation("=", $$, $$->child[0], $$->child[1]);
    }
    | or_expression {
        $$ = $1;
    }
;

function_call_expression
    : IDENTIFIER '(' function_arguments_optative ')' {
        $$ = new_node("function_call_expression", "function_call", 0, "");
        $$->child[0] = new_node("id", $1.content, 1, "");
        $$->child[1] = $3;
        
        if(variable_unavailable(symbol_table, $$->child[0], symbol_table_idx, top, scope_stack)){
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Undefined reference to '%s'\n"reset, $1.line_idx, $1.column_idx, $1.content);
        } else if(!check_number_of_params($3, symbol_table, symbol_table_size, $1.content)) {
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Invalid number of arguments passed to '%s'\n"reset, $1.line_idx, $1.column_idx, $1.content);
        }
    }
;

function_arguments_optative
    : %empty {
        $$ = NULL;
    }
    | function_arguments {
        $$ = $1;
    }
;

function_arguments
    : function_arguments ',' function_argument {
        $$ = new_node("function_arguments", "function_args", 0, "");
        $$->child[0] = $1;
        $$->child[1] = $3;
    }
    | function_argument {
        $$ = $1;
    }
;

function_argument
    : expression {
        $$ = new_node("function_args", "function_args", 0, "");
        $$->child[0] = $1;
    }
;

expression_optative
    : %empty {
        $$ = NULL;
    }
    | expression {
        $$ = $1;
    }
;

or_expression_optative
    : %empty {
        $$ = NULL;
    }
    | or_expression {
        $$ = $1;
    }
;

or_expression
    : or_expression LOGICAL_OP_OR and_expression {
        $$ = new_node("or_expression", $2.content, 0, "");
        $$->child[0] = $1;
        $$->child[1] = $3;

        valid_binary_operation($2.content, $$, $$->child[0], $$->child[1]);
    }
    | and_expression {
        $$ = $1;
    }
;

and_expression
    : and_expression LOGICAL_OP_AND equality_expression {
        $$ = new_node("and_expression", $2.content, 0, "");
        $$->child[0] = $1;
        $$->child[1] = $3;

        valid_binary_operation($2.content, $$, $$->child[0], $$->child[1]);
    }
    | equality_expression {
        $$ = $1;
    }
;

equality_expression
    : equality_expression EQUALITY_OP relational_expression {
        $$ = new_node("equality_expression", $2.content, 0, "");
        $$->child[0] = $1;
        $$->child[1] = $3;

        valid_binary_operation($2.content, $$, $$->child[0], $$->child[1]);
    }
    | relational_expression {
        $$ = $1;
    }
;

relational_expression
    : relational_expression RELATIONAL_OP list_expression {
        $$ = new_node("relational_expression", $2.content, 0, "");
        $$->child[0] = $1;
        $$->child[1] = $3;

        valid_binary_operation($2.content, $$, $$->child[0], $$->child[1]);
    }
    | list_expression {
        $$ = $1;
    }
;

list_expression
    : addition_expression BINARY_LIST_OP list_expression {
        $$ = new_node("list_expression", $2.content, 0, "");
        $$->child[0] = $1;
        $$->child[1] = $3;

        if(!valid_binary_operation($2.content, $$, $$->child[0], $$->child[1])) {
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - First argument of '%s' must be a unary function\n"reset, $2.line_idx, $2.column_idx, $2.content);
        }
        

    }
    | addition_expression {
        $$ = $1;
    }
;

addition_expression
    : addition_expression ARITMETIC_OP_ADDITIVE multiplication_expression {
        $$ = new_node("addition_expression", $2.content, 0, "");
        $$->child[0] = $1;
        $$->child[1] = $3;

        valid_binary_operation($2.content, $$, $$->child[0], $$->child[1]);
    }
    | multiplication_expression {
        $$ = $1;
    }
;

multiplication_expression
    : multiplication_expression ARITMETIC_OP_MULTIPLICATIVE simple_value {
        $$ = new_node("multiplication_expression", $2.content, 0, "");
        $$->child[0] = $1;
        $$->child[1] = $3;

        valid_binary_operation($2.content, $$, $$->child[0], $$->child[1]);
    }
    | simple_value {
        $$ = $1;
    }
;

simple_value
    : constant {
        $$ = $1;
    }
    | IDENTIFIER {
        $$ = new_node("identifier", $1.content, 1, "");
        if(variable_unavailable(symbol_table, $$, symbol_table_idx, top, scope_stack)){
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Undefined reference to '%s'\n"reset, $1.line_idx, $1.column_idx, $1.content);
        }
    }
    | ARITMETIC_OP_ADDITIVE simple_value {
        $$ = new_node("simple_value_signed", $1.content, 0, "");
        $$->child[0] = $2;
        if(!valid_unary_operation($1.content, $$)) {
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Invalid unary operation '%s' for operand type '%s'\n"reset, $1.line_idx, $1.column_idx, $1.content, $2->const_type);
        }
    }
    | '!' simple_value {
        $$ = new_node("simple_value_exclamation", "!", 0, "");
        $$->child[0] = $2;
        if(!valid_unary_operation("!", $$)){
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Invalid unary operation '!' for operand type '%s'\n"reset, line_idx, column_idx, $2->const_type);
        }
    }
    | UNARY_LIST_OP simple_value {
        $$ = new_node("simple_value_unary", $1.content, 0, "");
        $$->child[0] = $2;
        if(!valid_unary_operation($1.content, $$)) {
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Invalid unary operation '%s' for operand type '%s'\n"reset, $1.line_idx, $1.column_idx, $1.content, $2->const_type);
        }
    }
    | '(' expression ')' {
        $$ = $2;
    }
    | function_call_expression {
        $$ = $1;
    }
;

variable_declaration_statement
    : SIMPLE_TYPE IDENTIFIER ';' {
        T_Symbol sym = symbol(
            $1.content, 
            $2.content, 
            "variable", 
            $2.scope, 
            $2.line_idx, 
            $2.column_idx,
            0
        );
        
        if(check_redeclared(symbol_table, $2.content, symbol_table_idx, $2.scope)){
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Function or variable '%s' already declared\n"reset, $2.line_idx, $2.column_idx, $2.content);
        }

        insert_symbol(symbol_table, symbol_table_idx, sym);
        symbol_table_idx++;
        symbol_table_size++;

        $$ = new_node("variable_declaration", "var_declaration", 0, "");
        $$->child[0] = new_node("type", $1.content, 1, "");
        $$->child[1] = new_node("id", $2.content, 1, "");

    }
    | SIMPLE_TYPE LIST_TYPE IDENTIFIER ';' {
        char type[100];
        strcpy(type, $1.content);
        strcat(type, " ");
        strcat(type, $2.content);
        T_Symbol sym = symbol(
            type, 
            $3.content, 
            "variable", 
            $3.scope, 
            $3.line_idx, 
            $3.column_idx,
            0
        );

        if(check_redeclared(symbol_table, $3.content, symbol_table_idx, $3.scope)){
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Function or variable '%s' already declared\n"reset, $3.line_idx, $3.column_idx, $3.content);
        }

        insert_symbol(symbol_table, symbol_table_idx, sym);
        symbol_table_idx++;
        symbol_table_size++;

        $$ = new_node("variable_declaration", "var_declaration", 0, "");
        $$->child[0] = new_node("type", type, 1, "");
        $$->child[1] = new_node("id", $3.content, 1, "");
    }
;

constant
    : C_INTEGER {
        $$ = new_node("const", $1.content, 1, "int");
    }
    | C_FLOAT {
        $$ = new_node("const", $1.content, 1, "float");
    }
    | C_NIL {
        $$ = new_node("const", $1.content, 1, "NIL");
    }
;

%%

void yyerror(const char* err_msg){
    printf("\n[PARSER] Line: %d | Column: %d\t=> ERROR %s\n\n", yylval.token.line_idx, yylval.token.column_idx, err_msg);
    errors_count++;
    return;
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

    initialize_scope_stack(scope_stack);
    yyparse();
    
    print_symbol_table(symbol_table, symbol_table_size);

    // printar árvore
    if(errors_count == 0 && parsing_errors == 0){
        printf(BGRN "\n--------------- SYNTATIC TREE ---------------");
        printf(reset"\n");
        show_tree(root_node, 0);
        free_tree(root_node);
        printf(reset "\n"); 
    } else {
        if(errors_count > 0) {
            printf(BRED "Finished. Lexical Analysis found %d errors during execution", errors_count);
            printf(reset"\n");
        }
        if(parsing_errors > 0) {
            printf(BRED "Finished. Syntatic Analysis found %d errors during execution", parsing_errors);
            printf(reset "\n");
        }
    }

    if(!main_exists(symbol_table, symbol_table_size)) {
        printf(BRED "[SEMANTIC ERROR] No 'main' function found\n"reset);
    }

    fclose(yyin);
    yylex_destroy();

    return 0;
}
