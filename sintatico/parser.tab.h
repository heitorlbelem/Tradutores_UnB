/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    C_INTEGER = 258,               /* C_INTEGER  */
    C_FLOAT = 259,                 /* C_FLOAT  */
    C_NIL = 260,                   /* C_NIL  */
    C_STRING = 261,                /* C_STRING  */
    T_INTEGER = 262,               /* T_INTEGER  */
    T_FLOAT = 263,                 /* T_FLOAT  */
    T_LIST = 264,                  /* T_LIST  */
    IDENTIFIER = 265,              /* IDENTIFIER  */
    RW_FOR = 266,                  /* RW_FOR  */
    RW_RETURN = 267,               /* RW_RETURN  */
    RW_IF = 268,                   /* RW_IF  */
    RW_ELSE = 269,                 /* RW_ELSE  */
    IO_READ = 270,                 /* IO_READ  */
    IO_WRITE = 271,                /* IO_WRITE  */
    ARITMETIC_OP_ADDITIVE = 272,   /* ARITMETIC_OP_ADDITIVE  */
    ARITMETIC_OP_MULTIPLICATIVE = 273, /* ARITMETIC_OP_MULTIPLICATIVE  */
    COMPARISON_OP = 274,           /* COMPARISON_OP  */
    LOGICAL_OP_OR = 275,           /* LOGICAL_OP_OR  */
    LOGICAL_OP_AND = 276,          /* LOGICAL_OP_AND  */
    UNARY_LIST_OP = 277,           /* UNARY_LIST_OP  */
    BINARY_LIST_OP = 278           /* BINARY_LIST_OP  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 27 "parser.y"

    struct Token {
        char content[100];
        int line_idx;
        int column_idx;
        int scope;
    } token;

#line 96 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
