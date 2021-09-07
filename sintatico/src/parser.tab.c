/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 4 "./src/parser.y"

    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    #include "symbol_table.h"
    #include "syntatic_tree.h"
    
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
    int symbol_table_idx = 0;
    int symbol_table_size = 0;

    T_Node* root_node;

#line 98 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_C_INTEGER = 3,                  /* C_INTEGER  */
  YYSYMBOL_C_FLOAT = 4,                    /* C_FLOAT  */
  YYSYMBOL_C_NIL = 5,                      /* C_NIL  */
  YYSYMBOL_LIT_STRING = 6,                 /* LIT_STRING  */
  YYSYMBOL_TYPE = 7,                       /* TYPE  */
  YYSYMBOL_IDENTIFIER = 8,                 /* IDENTIFIER  */
  YYSYMBOL_RW_FOR = 9,                     /* RW_FOR  */
  YYSYMBOL_RW_RETURN = 10,                 /* RW_RETURN  */
  YYSYMBOL_RW_IF = 11,                     /* RW_IF  */
  YYSYMBOL_RW_ELSE = 12,                   /* RW_ELSE  */
  YYSYMBOL_IO_READ = 13,                   /* IO_READ  */
  YYSYMBOL_IO_WRITE = 14,                  /* IO_WRITE  */
  YYSYMBOL_BINARY_LIST_OP = 15,            /* BINARY_LIST_OP  */
  YYSYMBOL_UNARY_LIST_OP = 16,             /* UNARY_LIST_OP  */
  YYSYMBOL_17_ = 17,                       /* '{'  */
  YYSYMBOL_18_ = 18,                       /* '}'  */
  YYSYMBOL_19_ = 19,                       /* '('  */
  YYSYMBOL_20_ = 20,                       /* ')'  */
  YYSYMBOL_21_ = 21,                       /* ','  */
  YYSYMBOL_22_ = 22,                       /* ';'  */
  YYSYMBOL_23_ = 23,                       /* '='  */
  YYSYMBOL_24_ = 24,                       /* '!'  */
  YYSYMBOL_ARITMETIC_OP_ADDITIVE = 25,     /* ARITMETIC_OP_ADDITIVE  */
  YYSYMBOL_ARITMETIC_OP_MULTIPLICATIVE = 26, /* ARITMETIC_OP_MULTIPLICATIVE  */
  YYSYMBOL_RELATIONAL_OP = 27,             /* RELATIONAL_OP  */
  YYSYMBOL_EQUALITY_OP = 28,               /* EQUALITY_OP  */
  YYSYMBOL_LOGICAL_OP_OR = 29,             /* LOGICAL_OP_OR  */
  YYSYMBOL_LOGICAL_OP_AND = 30,            /* LOGICAL_OP_AND  */
  YYSYMBOL_THEN = 31,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 32,                  /* $accept  */
  YYSYMBOL_program = 33,                   /* program  */
  YYSYMBOL_block = 34,                     /* block  */
  YYSYMBOL_statements = 35,                /* statements  */
  YYSYMBOL_statement = 36,                 /* statement  */
  YYSYMBOL_for_statement = 37,             /* for_statement  */
  YYSYMBOL_if_else_statement = 38,         /* if_else_statement  */
  YYSYMBOL_expression_statement = 39,      /* expression_statement  */
  YYSYMBOL_io_statement = 40,              /* io_statement  */
  YYSYMBOL_input_statement = 41,           /* input_statement  */
  YYSYMBOL_output_statement = 42,          /* output_statement  */
  YYSYMBOL_return_statement = 43,          /* return_statement  */
  YYSYMBOL_expression = 44,                /* expression  */
  YYSYMBOL_expression_optative = 45,       /* expression_optative  */
  YYSYMBOL_or_expression_optative = 46,    /* or_expression_optative  */
  YYSYMBOL_or_expression = 47,             /* or_expression  */
  YYSYMBOL_and_expression = 48,            /* and_expression  */
  YYSYMBOL_equality_expression = 49,       /* equality_expression  */
  YYSYMBOL_relational_expression = 50,     /* relational_expression  */
  YYSYMBOL_list_expression = 51,           /* list_expression  */
  YYSYMBOL_addition_expression = 52,       /* addition_expression  */
  YYSYMBOL_multiplication_expression = 53, /* multiplication_expression  */
  YYSYMBOL_simple_value = 54,              /* simple_value  */
  YYSYMBOL_variable_declaration_statement = 55, /* variable_declaration_statement  */
  YYSYMBOL_constant = 56                   /* constant  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  52
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3364

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  53
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  289

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   278


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    24,     2,     2,     2,     2,     2,     2,
      19,    20,     2,     2,    21,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    22,
       2,    23,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,    18,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    87,    87,    91,    95,    96,   101,   102,   103,   104,
     105,   106,   107,   111,   115,   116,   119,   120,   124,   125,
     129,   133,   134,   138,   142,   143,   147,   148,   152,   153,
     157,   158,   162,   163,   167,   168,   172,   173,   177,   178,
     182,   183,   187,   188,   192,   193,   194,   195,   196,   197,
     201,   205,   206,   207
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "C_INTEGER", "C_FLOAT",
  "C_NIL", "LIT_STRING", "TYPE", "IDENTIFIER", "RW_FOR", "RW_RETURN",
  "RW_IF", "RW_ELSE", "IO_READ", "IO_WRITE", "BINARY_LIST_OP",
  "UNARY_LIST_OP", "'{'", "'}'", "'('", "')'", "','", "';'", "'='", "'!'",
  "ARITMETIC_OP_ADDITIVE", "ARITMETIC_OP_MULTIPLICATIVE", "RELATIONAL_OP",
  "EQUALITY_OP", "LOGICAL_OP_OR", "LOGICAL_OP_AND", "THEN", "$accept",
  "program", "block", "statements", "statement", "for_statement",
  "if_else_statement", "expression_statement", "io_statement",
  "input_statement", "output_statement", "return_statement", "expression",
  "expression_optative", "or_expression_optative", "or_expression",
  "and_expression", "equality_expression", "relational_expression",
  "list_expression", "addition_expression", "multiplication_expression",
  "simple_value", "variable_declaration_statement", "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   123,   125,    40,
      41,    44,    59,    61,    33,   272,   273,   274,   275,   276,
     277,   278
};
#endif

#define YYPACT_NINF (-205)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-54)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     821,   343,   827,  2996,    -4,     7,   -10,   743,    12,    20,
      27,   791,  2942,   862,  1378,   791,   791,    50,  1401,  1424,
    1447,  1470,  1493,  1516,  1539,  1562,  1585,  1608,    31,   -17,
     116,   113,   712,   197,  3314,  3016,  3025,  1631,  3034,    35,
     743,   147,    58,   862,    64,   338,  3043,  3052,  2367,    54,
    3061,  3070,  -205,  1654,  1677,   791,   791,   791,   791,   791,
     791,   791,  1700,    62,    63,    66,  1723,    69,    70,    78,
      80,  1746,  3079,   135,   161,   749,   650,  3323,  3088,  3097,
     409,  2965,    79,    85,    87,    88,   -12,    51,  1769,  1792,
    1815,   589,   821,    92,  1838,   821,  1861,   108,    94,   743,
     104,   106,   112,  2942,  2390,  2413,  2436,  2459,  2482,  2505,
    2528,  2551,  2574,  2597,   110,  2620,  3113,  3129,  3145,   678,
    3011,   862,  3011,  3011,    57,    18,   -14,   239,    99,   305,
    3161,  3177,  3193,  2643,   126,   118,   743,   129,   130,   134,
    2942,   901,   936,   964,   987,  1010,  1033,  1056,  1079,  1102,
     145,  1125,   142,   146,   147,   148,   862,   165,   467,  2666,
    2689,   862,  3209,  3225,   154,  3241,  3257,  3011,  3011,  3011,
    3011,  3011,  3011,  3011,   160,   147,   163,   862,   168,   499,
    2712,  1148,  2735,   171,  2758,   167,   174,   176,   179,  2781,
     181,  3273,    49,    -2,   591,   373,  3334,  3289,  3305,  1171,
     180,  1194,   184,   185,   187,   191,  1217,   409,  2988,   195,
     196,   206,   409,  2965,   207,   208,   212,   215,   231,   221,
     743,   223,   224,   225,  2942,  1884,  1907,  1930,  1953,  1976,
    1999,  2022,  2045,  2068,  2091,   226,  2114,  2804,  2827,  2850,
     228,  1240,  1263,  1286,  1309,   589,   230,   147,   240,   862,
     238,   708,  2873,  2942,  2137,   589,  2965,   241,  2160,   242,
    2183,   243,   254,   258,   260,  2206,  2896,   262,  1332,  2942,
     409,  2988,   268,   269,   270,  2965,  2919,   271,  2229,  2252,
    2275,  2298,  1355,   589,  2988,   275,  2321,  2988,  2344
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -205,  -205,     2,    -1,     1,    23,    25,    52,   103,   105,
     111,   140,     0,   -67,  -204,   405,   683,   644,   624,   515,
     474,   419,   286,   222,   378
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    17,   105,    19,   106,   107,   108,   109,   110,   111,
     112,   113,   114,    65,    85,    29,    30,    31,    32,    33,
      34,    35,    36,   115,    38
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,    20,    18,   217,    39,   -25,   -33,    42,   240,    41,
     -29,    48,    55,    49,   169,   -33,   -33,    55,   -32,    28,
      53,    18,   -45,    21,    93,    22,   169,   -32,   -32,   -45,
      40,    43,   -45,   -45,   -45,   -45,   -45,   -45,   -31,    44,
      63,    64,    21,    67,    22,    70,    45,   -31,   168,   133,
      52,   -14,    23,    54,   -14,   -14,   -14,    62,   -14,   -14,
     -14,   -14,   -14,    92,   -14,   -14,   277,   -14,   -14,   -30,
     -14,    23,    68,   -14,    72,   -14,   -14,   -25,   -30,   168,
      66,   150,    87,   142,   -24,   -27,   167,   183,    80,    81,
      82,   152,    28,    94,    18,    28,    96,    18,    83,   155,
      84,    88,   159,    24,   143,    25,   144,    89,   200,    90,
      91,    26,    95,   154,   171,    21,   153,    22,    21,   -37,
      22,   164,    24,   156,    25,   157,   -37,   -37,   -37,   -37,
      26,   158,   160,   145,   174,   -33,   176,   175,   -31,   180,
      27,    57,   -33,   -33,    23,   -31,    56,    23,   177,   178,
       1,     2,     3,   179,    64,     5,   185,   -30,   188,    27,
     133,   190,   -27,    11,   -30,    56,    13,   181,   182,   -26,
     184,    15,    16,   186,   191,    64,   203,   202,   257,   205,
     259,   133,   199,   -32,   146,   201,   147,   208,   267,    57,
     -32,   -32,   148,   207,   209,    24,   210,    25,    24,   211,
      25,   -24,   212,    26,   213,   214,    26,   215,   235,   227,
     226,   216,    59,   150,   241,   142,   285,   237,   238,   -37,
     248,   149,    37,   252,   -37,   -37,   -37,   -37,   239,   242,
     243,   228,    27,   229,   244,    27,   143,   245,   144,   246,
     247,    37,   249,   250,   251,   152,   262,    64,   254,   261,
     255,   264,   258,   133,   266,   152,   150,   268,   142,   -35,
     230,   269,   260,   271,   270,   145,   170,   -35,   -35,   -35,
     276,   235,   278,   226,   272,   150,   282,   142,   273,   143,
     274,   144,   275,   152,   235,   286,   226,   235,   288,   226,
     279,   280,   281,   283,   228,   287,   229,    47,   143,   131,
     144,    50,    51,   151,     0,     0,     0,   228,   145,   229,
     228,   231,   229,   232,    37,     0,   146,    37,   147,   233,
     -39,     0,     0,   230,   148,   -39,     0,   145,     0,   131,
     172,   131,   -39,   -39,   -39,   -39,   230,     0,     0,   230,
       0,   116,   117,   118,    69,     0,   119,    79,   234,     0,
       0,     0,     0,   149,   120,     0,     0,   121,   -51,   146,
       0,   147,   122,   123,     0,   -51,     0,   148,   -51,   -51,
     -51,   -51,   -51,   -51,   231,     0,   232,   131,   146,     0,
     147,     0,   233,     0,     0,     0,   148,   231,   171,   232,
     231,   132,   232,   -36,     0,   233,   149,     0,   233,     0,
     -36,   -36,   -36,   -36,     0,     0,   163,   131,   165,   166,
       0,   234,     1,     2,     3,   149,     0,    46,   124,     0,
       0,   132,     0,   132,   234,    11,     0,   234,    13,     0,
     236,   -28,   130,    15,    16,   151,     0,     0,     0,     0,
       0,     0,   131,     0,   131,     0,     0,   131,   124,     0,
     124,     0,     0,   131,   131,   131,   131,   131,   131,   198,
       0,     0,   130,   131,   130,   131,     0,     0,     0,   132,
     116,   117,   118,   187,     0,   119,     0,     0,   151,    78,
       0,     0,     0,   120,     0,    86,   121,   129,     0,     0,
       0,   122,   123,   236,     0,     0,   124,   151,   132,   132,
     132,   132,   116,   117,   118,   204,   236,   119,     0,   236,
     130,     0,     0,     0,     0,   120,     0,   129,   121,   129,
       0,     0,     0,   122,   123,     0,   124,     0,   128,     0,
       0,   131,     0,    77,   132,   131,   132,   131,     0,   132,
     130,   131,     0,     0,     0,   132,   132,   132,   132,   132,
     132,   132,     0,     0,     0,   132,     0,   132,   128,     0,
     128,   124,     0,   124,     0,   129,   124,     0,     0,   131,
       0,     0,     0,    76,     0,   130,     0,   130,     0,     0,
     130,     0,   124,     0,   124,     0,   130,   130,   130,   130,
     130,   197,   116,   117,   118,   129,   130,   119,   130,     0,
       0,     0,     0,     0,     0,   120,   128,     0,   121,   -26,
       0,   -34,    86,   122,   123,     0,     0,    86,   170,   -34,
     -34,   -34,     0,   132,     0,     0,     0,   132,     0,   132,
     129,     0,   129,   132,     0,   129,   128,   127,     0,     0,
       0,   129,   129,   129,   129,   196,     0,     0,     0,     0,
     124,   129,     0,   129,   124,     0,   124,   126,     0,     0,
     124,   132,     0,     0,   130,    59,     0,   127,   130,   127,
     130,   128,   -36,   128,   130,    86,   128,   -36,   -36,   -36,
     -36,    75,   128,   128,   128,   195,     0,   126,   124,   126,
       0,     0,   128,   -45,   128,     0,   125,     0,   -45,     0,
      74,   161,   130,   -45,   -45,   -45,   -45,   -45,   -45,     0,
       0,   116,   117,   118,   263,   127,   119,     0,     0,   129,
       0,     0,     0,   129,   120,   129,   125,   121,   125,   129,
       0,     0,   122,   123,   -35,   126,     0,     0,    73,    58,
     -35,   -35,   -35,     0,     0,   127,     1,     2,     3,     0,
       0,     5,     0,     0,     0,     0,     0,   129,     0,    11,
     128,     0,    13,     0,   128,   126,   128,    15,    16,     0,
     128,   -34,     0,     0,   125,     0,    58,   -34,   -34,   -34,
     127,     0,   127,     0,     0,   127,     0,     0,     0,     0,
       0,   127,   127,   194,     1,     2,     3,     0,   128,    46,
     126,   127,   126,   127,   125,   126,     0,    11,     0,     0,
      13,   126,   193,     0,     0,    15,    16,     0,     0,     0,
       0,   126,     0,   126,     1,     2,     3,     0,     4,     5,
       6,     7,     8,     0,     9,    10,     0,    11,    12,   125,
      13,   125,   -52,    14,   125,    15,    16,     0,     0,   -52,
     192,     0,   -52,   -52,   -52,   -52,   -52,   -52,     0,     0,
     125,     0,   125,     0,     0,   116,   117,   118,     0,   127,
     119,     0,     0,   127,     0,   127,     0,     0,   120,   127,
       0,   121,     0,     0,     0,     0,   122,   123,     0,   126,
       0,     0,     0,   126,     0,   126,     0,     0,     0,   126,
       0,   -17,     0,     0,   -17,   -17,   -17,   127,   -17,   -17,
     -17,   -17,   -17,   -17,   -17,   -17,     0,   -17,   -17,     0,
     -17,     0,     0,   -17,     0,   -17,   -17,   126,   125,     0,
       0,     0,   125,     0,   125,     0,   -12,     0,   125,   -12,
     -12,   -12,     0,   -12,   -12,   -12,   -12,   -12,   -12,   -12,
     -12,     0,   -12,   -12,     0,   -12,     0,     0,   -12,     0,
     -12,   -12,     0,     0,   -10,     0,   125,   -10,   -10,   -10,
       0,   -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,     0,
     -10,   -10,     0,   -10,     0,     0,   -10,   -11,   -10,   -10,
     -11,   -11,   -11,     0,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,     0,   -11,   -11,     0,   -11,     0,     0,   -11,
      -6,   -11,   -11,    -6,    -6,    -6,     0,    -6,    -6,    -6,
      -6,    -6,    -6,    -6,    -6,     0,    -6,    -6,     0,    -6,
       0,     0,    -6,    -7,    -6,    -6,    -7,    -7,    -7,     0,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,     0,    -7,
      -7,     0,    -7,     0,     0,    -7,   -18,    -7,    -7,   -18,
     -18,   -18,     0,   -18,   -18,   -18,   -18,   -18,   -18,   -18,
     -18,     0,   -18,   -18,     0,   -18,     0,     0,   -18,   -19,
     -18,   -18,   -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,
     -19,   -19,   -19,   -19,     0,   -19,   -19,     0,   -19,     0,
       0,   -19,    -8,   -19,   -19,    -8,    -8,    -8,     0,    -8,
      -8,    -8,    -8,    -8,    -8,    -8,    -8,     0,    -8,    -8,
       0,    -8,     0,     0,    -8,    -9,    -8,    -8,    -9,    -9,
      -9,     0,    -9,    -9,    -9,    -9,    -9,    -9,    -9,    -9,
       0,    -9,    -9,     0,    -9,     0,     0,    -9,   -16,    -9,
      -9,   -16,   -16,   -16,     0,   -16,   -16,   -16,   -16,   -16,
     -16,   -16,   -16,     0,   -16,   -16,     0,   -16,     0,     0,
     -16,   -50,   -16,   -16,   -50,   -50,   -50,     0,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,     0,   -50,   -50,     0,
     -50,     0,     0,   -50,   -23,   -50,   -50,   -23,   -23,   -23,
       0,   -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,     0,
     -23,   -23,     0,   -23,     0,     0,   -23,    -3,   -23,   -23,
      -3,    -3,    -3,     0,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    -3,     0,    -3,    -3,     0,    -3,     0,     0,    -3,
     -14,    -3,    -3,   -14,   -14,   -14,     0,   -14,   -14,   -14,
     -14,   -14,   256,   -14,   -14,     0,   -14,   -14,     0,   -14,
       0,     0,   -14,   -20,   -14,   -14,   -20,   -20,   -20,     0,
     -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,     0,   -20,
     -20,     0,   -20,     0,     0,   -20,   -22,   -20,   -20,   -22,
     -22,   -22,     0,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
     -22,     0,   -22,   -22,     0,   -22,     0,     0,   -22,   -21,
     -22,   -22,   -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,   -21,     0,   -21,   -21,     0,   -21,     0,
       0,   -21,   -15,   -21,   -21,   -15,   -15,   -15,     0,   -15,
     -15,   -15,   -15,   -15,   -15,   -15,   -15,     0,   -15,   -15,
       0,   -15,     0,     0,   -15,   -13,   -15,   -15,   -13,   -13,
     -13,     0,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,
       0,   -13,   -13,     0,   -13,     0,     0,   -13,   -17,   -13,
     -13,   -17,   -17,   -17,     0,   -17,   -17,   -17,   -17,   -17,
       0,   -17,   -17,     0,   -17,   -17,     0,   -17,     0,     0,
     -17,   -12,   -17,   -17,   -12,   -12,   -12,     0,   -12,   -12,
     -12,   -12,   -12,     0,   -12,   -12,     0,   -12,   -12,     0,
     -12,     0,     0,   -12,    -2,   -12,   -12,     1,     2,     3,
       0,     4,     5,     6,     7,     8,     0,     9,    10,     0,
      11,    12,     0,    13,     0,     0,    14,    -5,    15,    16,
      -5,    -5,    -5,     0,    -5,    -5,    -5,    -5,    -5,     0,
      -5,    -5,     0,    -5,    -5,     0,    -5,     0,     0,    -5,
     -10,    -5,    -5,   -10,   -10,   -10,     0,   -10,   -10,   -10,
     -10,   -10,     0,   -10,   -10,     0,   -10,   -10,     0,   -10,
       0,     0,   -10,   -11,   -10,   -10,   -11,   -11,   -11,     0,
     -11,   -11,   -11,   -11,   -11,     0,   -11,   -11,     0,   -11,
     -11,     0,   -11,     0,     0,   -11,    -6,   -11,   -11,    -6,
      -6,    -6,     0,    -6,    -6,    -6,    -6,    -6,     0,    -6,
      -6,     0,    -6,    -6,     0,    -6,     0,     0,    -6,    -7,
      -6,    -6,    -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,
      -7,     0,    -7,    -7,     0,    -7,    -7,     0,    -7,     0,
       0,    -7,   -18,    -7,    -7,   -18,   -18,   -18,     0,   -18,
     -18,   -18,   -18,   -18,     0,   -18,   -18,     0,   -18,   -18,
       0,   -18,     0,     0,   -18,   -19,   -18,   -18,   -19,   -19,
     -19,     0,   -19,   -19,   -19,   -19,   -19,     0,   -19,   -19,
       0,   -19,   -19,     0,   -19,     0,     0,   -19,    -8,   -19,
     -19,    -8,    -8,    -8,     0,    -8,    -8,    -8,    -8,    -8,
       0,    -8,    -8,     0,    -8,    -8,     0,    -8,     0,     0,
      -8,    -9,    -8,    -8,    -9,    -9,    -9,     0,    -9,    -9,
      -9,    -9,    -9,     0,    -9,    -9,     0,    -9,    -9,     0,
      -9,     0,     0,    -9,    -4,    -9,    -9,    -4,    -4,    -4,
       0,    -4,    -4,    -4,    -4,    -4,     0,    -4,    -4,     0,
      -4,    -4,     0,    -4,     0,     0,    -4,   -16,    -4,    -4,
     -16,   -16,   -16,     0,   -16,   -16,   -16,   -16,   -16,     0,
     -16,   -16,     0,   -16,   -16,     0,   -16,     0,     0,   -16,
     -50,   -16,   -16,   -50,   -50,   -50,     0,   -50,   -50,   -50,
     -50,   -50,     0,   -50,   -50,     0,   -50,   -50,     0,   -50,
       0,     0,   -50,   -23,   -50,   -50,   -23,   -23,   -23,     0,
     -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,     0,   -23,
     -23,     0,   -23,     0,     0,   -23,    -3,   -23,   -23,    -3,
      -3,    -3,     0,    -3,    -3,    -3,    -3,    -3,     0,    -3,
      -3,     0,    -3,    -3,     0,    -3,     0,     0,    -3,   -20,
      -3,    -3,   -20,   -20,   -20,     0,   -20,   -20,   -20,   -20,
     -20,     0,   -20,   -20,     0,   -20,   -20,     0,   -20,     0,
       0,   -20,   -22,   -20,   -20,   -22,   -22,   -22,     0,   -22,
     -22,   -22,   -22,   -22,     0,   -22,   -22,     0,   -22,   -22,
       0,   -22,     0,     0,   -22,   -21,   -22,   -22,   -21,   -21,
     -21,     0,   -21,   -21,   -21,   -21,   -21,     0,   -21,   -21,
       0,   -21,   -21,     0,   -21,     0,     0,   -21,   -15,   -21,
     -21,   -15,   -15,   -15,     0,   -15,   -15,   -15,   -15,   -15,
       0,   -15,   -15,     0,   -15,   -15,     0,   -15,     0,     0,
     -15,   -13,   -15,   -15,   -13,   -13,   -13,     0,   -13,   -13,
     -13,   -13,   -13,     0,   -13,   -13,     0,   -13,   -13,     0,
     -13,     0,     0,   -13,     0,   -13,   -13,   -17,   -17,   -17,
       0,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,     0,
     -17,   -17,   -17,   -17,     0,     0,   -17,     0,   -17,   -17,
     -12,   -12,   -12,     0,   -12,   -12,   -12,   -12,   -12,   -12,
     -12,   -12,     0,   -12,   -12,   -12,   -12,     0,     0,   -12,
       0,   -12,   -12,   -14,   -14,   -14,     0,   -14,   -14,   -14,
     -14,   -14,   253,   -14,   -14,     0,   -14,   -14,   -14,   -14,
       0,     0,   -14,     0,   -14,   -14,   -10,   -10,   -10,     0,
     -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,     0,   -10,
     -10,   -10,   -10,     0,     0,   -10,     0,   -10,   -10,   -11,
     -11,   -11,     0,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,     0,   -11,   -11,   -11,   -11,     0,     0,   -11,     0,
     -11,   -11,    -6,    -6,    -6,     0,    -6,    -6,    -6,    -6,
      -6,    -6,    -6,    -6,     0,    -6,    -6,    -6,    -6,     0,
       0,    -6,     0,    -6,    -6,    -7,    -7,    -7,     0,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,     0,    -7,    -7,
      -7,    -7,     0,     0,    -7,     0,    -7,    -7,   -18,   -18,
     -18,     0,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,
       0,   -18,   -18,   -18,   -18,     0,     0,   -18,     0,   -18,
     -18,   -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,   -19,
     -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,     0,     0,
     -19,     0,   -19,   -19,    -8,    -8,    -8,     0,    -8,    -8,
      -8,    -8,    -8,    -8,    -8,    -8,     0,    -8,    -8,    -8,
      -8,     0,     0,    -8,     0,    -8,    -8,    -9,    -9,    -9,
       0,    -9,    -9,    -9,    -9,    -9,    -9,    -9,    -9,     0,
      -9,    -9,    -9,    -9,     0,     0,    -9,     0,    -9,    -9,
     -16,   -16,   -16,     0,   -16,   -16,   -16,   -16,   -16,   -16,
     -16,   -16,     0,   -16,   -16,   -16,   -16,     0,     0,   -16,
       0,   -16,   -16,   -50,   -50,   -50,     0,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,     0,   -50,   -50,   -50,   -50,
       0,     0,   -50,     0,   -50,   -50,   -23,   -23,   -23,     0,
     -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,     0,   -23,
     -23,   -23,   -23,     0,     0,   -23,     0,   -23,   -23,    -3,
      -3,    -3,     0,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,     0,    -3,    -3,    -3,    -3,     0,     0,    -3,     0,
      -3,    -3,   -14,   -14,   -14,     0,   -14,   -14,   -14,   -14,
     -14,   284,   -14,   -14,     0,   -14,   -14,   -14,   -14,     0,
       0,   -14,     0,   -14,   -14,   -20,   -20,   -20,     0,   -20,
     -20,   -20,   -20,   -20,   -20,   -20,   -20,     0,   -20,   -20,
     -20,   -20,     0,     0,   -20,     0,   -20,   -20,   -22,   -22,
     -22,     0,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
       0,   -22,   -22,   -22,   -22,     0,     0,   -22,     0,   -22,
     -22,   -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,     0,     0,
     -21,     0,   -21,   -21,   -15,   -15,   -15,     0,   -15,   -15,
     -15,   -15,   -15,   -15,   -15,   -15,     0,   -15,   -15,   -15,
     -15,     0,     0,   -15,     0,   -15,   -15,   -13,   -13,   -13,
       0,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,     0,
     -13,   -13,   -13,   -13,     0,     0,   -13,     0,   -13,   -13,
       1,     2,     3,     0,    97,     5,    98,    99,   100,     0,
     101,   102,     0,    11,   103,    71,    13,     0,     0,   104,
       0,    15,    16,   -17,   -17,   -17,     0,   -17,   -17,   -17,
     -17,   -17,     0,   -17,   -17,     0,   -17,   -17,   -17,   -17,
       0,     0,   -17,     0,   -17,   -17,   -12,   -12,   -12,     0,
     -12,   -12,   -12,   -12,   -12,     0,   -12,   -12,     0,   -12,
     -12,   -12,   -12,     0,     0,   -12,     0,   -12,   -12,    -5,
      -5,    -5,     0,    -5,    -5,    -5,    -5,    -5,     0,    -5,
      -5,     0,    -5,    -5,    -5,    -5,     0,     0,    -5,     0,
      -5,    -5,   -10,   -10,   -10,     0,   -10,   -10,   -10,   -10,
     -10,     0,   -10,   -10,     0,   -10,   -10,   -10,   -10,     0,
       0,   -10,     0,   -10,   -10,   -11,   -11,   -11,     0,   -11,
     -11,   -11,   -11,   -11,     0,   -11,   -11,     0,   -11,   -11,
     -11,   -11,     0,     0,   -11,     0,   -11,   -11,    -6,    -6,
      -6,     0,    -6,    -6,    -6,    -6,    -6,     0,    -6,    -6,
       0,    -6,    -6,    -6,    -6,     0,     0,    -6,     0,    -6,
      -6,    -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,
       0,    -7,    -7,     0,    -7,    -7,    -7,    -7,     0,     0,
      -7,     0,    -7,    -7,   -18,   -18,   -18,     0,   -18,   -18,
     -18,   -18,   -18,     0,   -18,   -18,     0,   -18,   -18,   -18,
     -18,     0,     0,   -18,     0,   -18,   -18,   -19,   -19,   -19,
       0,   -19,   -19,   -19,   -19,   -19,     0,   -19,   -19,     0,
     -19,   -19,   -19,   -19,     0,     0,   -19,     0,   -19,   -19,
      -8,    -8,    -8,     0,    -8,    -8,    -8,    -8,    -8,     0,
      -8,    -8,     0,    -8,    -8,    -8,    -8,     0,     0,    -8,
       0,    -8,    -8,    -9,    -9,    -9,     0,    -9,    -9,    -9,
      -9,    -9,     0,    -9,    -9,     0,    -9,    -9,    -9,    -9,
       0,     0,    -9,     0,    -9,    -9,    -4,    -4,    -4,     0,
      -4,    -4,    -4,    -4,    -4,     0,    -4,    -4,     0,    -4,
      -4,    -4,    -4,     0,     0,    -4,     0,    -4,    -4,     1,
       2,     3,     0,    97,     5,    98,    99,   100,     0,   101,
     102,     0,    11,   103,   189,    13,     0,     0,   104,     0,
      15,    16,   -16,   -16,   -16,     0,   -16,   -16,   -16,   -16,
     -16,     0,   -16,   -16,     0,   -16,   -16,   -16,   -16,     0,
       0,   -16,     0,   -16,   -16,     1,     2,     3,     0,    97,
       5,    98,    99,   100,     0,   101,   102,     0,    11,   103,
     206,    13,     0,     0,   104,     0,    15,    16,   -50,   -50,
     -50,     0,   -50,   -50,   -50,   -50,   -50,     0,   -50,   -50,
       0,   -50,   -50,   -50,   -50,     0,     0,   -50,     0,   -50,
     -50,   -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,
       0,   -23,   -23,     0,   -23,   -23,   -23,   -23,     0,     0,
     -23,     0,   -23,   -23,    -3,    -3,    -3,     0,    -3,    -3,
      -3,    -3,    -3,     0,    -3,    -3,     0,    -3,    -3,    -3,
      -3,     0,     0,    -3,     0,    -3,    -3,   -20,   -20,   -20,
       0,   -20,   -20,   -20,   -20,   -20,     0,   -20,   -20,     0,
     -20,   -20,   -20,   -20,     0,     0,   -20,     0,   -20,   -20,
     -22,   -22,   -22,     0,   -22,   -22,   -22,   -22,   -22,     0,
     -22,   -22,     0,   -22,   -22,   -22,   -22,     0,     0,   -22,
       0,   -22,   -22,   -21,   -21,   -21,     0,   -21,   -21,   -21,
     -21,   -21,     0,   -21,   -21,     0,   -21,   -21,   -21,   -21,
       0,     0,   -21,     0,   -21,   -21,     1,     2,     3,     0,
      97,     5,    98,    99,   100,     0,   101,   102,     0,    11,
     103,   265,    13,     0,     0,   104,     0,    15,    16,   -15,
     -15,   -15,     0,   -15,   -15,   -15,   -15,   -15,     0,   -15,
     -15,     0,   -15,   -15,   -15,   -15,     0,     0,   -15,     0,
     -15,   -15,   -13,   -13,   -13,     0,   -13,   -13,   -13,   -13,
     -13,     0,   -13,   -13,     0,   -13,   -13,   -13,   -13,     0,
       0,   -13,     0,   -13,   -13,     1,     2,     3,     0,    97,
       5,    98,    99,   100,     0,   101,   102,     0,    11,   103,
       0,    13,     0,     0,   104,     0,    15,    16,     1,     2,
       3,     0,   134,     5,   135,   136,   137,     0,   138,   139,
       0,    11,   140,     0,    13,     0,     0,   141,     0,    15,
      16,     1,     2,     3,     0,   218,     5,   219,   220,   221,
       0,   222,   223,     0,    11,   224,     0,    13,     0,     0,
     225,   -53,    15,    16,   116,   117,   118,     0,   -53,   162,
       0,   -53,   -53,   -53,   -53,   -53,   -53,   120,     0,     0,
     121,   -41,     0,     0,     0,   122,   123,     0,   -41,     0,
     -43,   -41,    61,   -41,   -41,   -41,   -41,   -43,     0,   -44,
     -43,   -43,   -43,   -43,   -43,   -43,   -44,     0,   -45,   -44,
     -44,   -44,   -44,   -44,   -44,   -45,     0,   -48,   -45,   -45,
     -45,   -45,   -45,   -45,   -48,     0,   -47,   -48,   -48,   -48,
     -48,   -48,   -48,   -47,     0,   -46,   -47,   -47,   -47,   -47,
     -47,   -47,   -46,     0,   -49,   -46,   -46,   -46,   -46,   -46,
     -46,   -49,     0,   -40,   -49,   -49,   -49,   -49,   -49,   -49,
     -40,     0,   -42,   -40,    61,   -40,   -40,   -40,   -40,   -42,
       0,     0,   -42,   -42,   -42,   -42,   -42,   -42,   -51,     0,
       0,     0,     0,   -51,     0,     0,     0,     0,   -51,   -51,
     -51,   -51,   -51,   -51,   -52,     0,     0,     0,     0,   -52,
       0,     0,     0,     0,   -52,   -52,   -52,   -52,   -52,   -52,
     -53,     0,     0,     0,     0,   -53,     0,     0,     0,     0,
     -53,   -53,   -53,   -53,   -53,   -53,   -41,     0,     0,     0,
       0,   -41,     0,     0,     0,     0,   -41,   173,   -41,   -41,
     -41,   -41,   -43,     0,     0,     0,     0,   -43,     0,     0,
       0,     0,   -43,   -43,   -43,   -43,   -43,   -43,   -44,     0,
       0,     0,     0,   -44,     0,     0,     0,     0,   -44,   -44,
     -44,   -44,   -44,   -44,   -45,     0,     0,     0,     0,   -45,
       0,     0,     0,     0,   -45,   -45,   -45,   -45,   -45,   -45,
     -48,     0,     0,     0,     0,   -48,     0,     0,     0,     0,
     -48,   -48,   -48,   -48,   -48,   -48,   -47,     0,     0,     0,
       0,   -47,     0,     0,     0,     0,   -47,   -47,   -47,   -47,
     -47,   -47,   -46,     0,     0,     0,     0,   -46,     0,     0,
       0,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -49,     0,
       0,     0,     0,   -49,     0,     0,     0,     0,   -49,   -49,
     -49,   -49,   -49,   -49,   -40,     0,     0,     0,     0,   -40,
       0,     0,     0,     0,   -40,   173,   -40,   -40,   -40,   -40,
     -42,     0,     0,     0,     0,   -42,     0,     0,     0,   -39,
     -42,   -42,   -42,   -42,   -42,   -42,   -39,     0,   -38,    60,
       0,   -39,   -39,   -39,   -39,   -38,     0,     0,    60,   -38,
     -38,   -38,   -38,   -38,   -38,     0,     0,     0,     0,   172,
       0,   -38,   -38,   -38,   -38
};

static const yytype_int16 yycheck[] =
{
       0,     0,     0,   207,     8,    22,    20,     7,   212,    19,
      22,    12,    29,    13,    28,    29,    30,    29,    20,    19,
      19,    19,    15,     0,    91,     0,    28,    29,    30,    22,
      23,    19,    25,    26,    27,    28,    29,    30,    20,    19,
      40,    41,    19,    43,    19,    45,    19,    29,    30,    48,
       0,     0,     0,    22,     3,     4,     5,    22,     7,     8,
       9,    10,    11,    12,    13,    14,   270,    16,    17,    20,
      19,    19,     8,    22,    20,    24,    25,    20,    29,    30,
      22,    81,    81,    81,    22,    22,    29,   154,    22,    20,
      20,    91,    92,    92,    92,    95,    95,    95,    20,    99,
      20,    22,   103,     0,    81,     0,    81,    22,   175,    22,
      22,     0,    20,    19,    15,    92,     8,    92,    95,    20,
      95,   121,    19,    19,    19,    19,    27,    28,    29,    30,
      19,    19,    22,    81,     8,    22,   136,    19,    22,   140,
       0,    28,    29,    30,    92,    29,    30,    95,    19,    19,
       3,     4,     5,    19,   154,     8,   156,    22,   158,    19,
     159,   161,    20,    16,    29,    30,    19,    22,    22,    22,
      22,    24,    25,     8,    20,   175,     8,   177,   245,   179,
     247,   180,    22,    22,    81,    22,    81,    20,   255,    28,
      29,    30,    81,    22,    20,    92,    20,    92,    95,    20,
      95,    20,    22,    92,    20,    20,    95,    20,   208,   208,
     208,    20,    15,   213,   213,   213,   283,    22,    22,    22,
     220,    81,     0,   224,    27,    28,    29,    30,    22,    22,
      22,   208,    92,   208,    22,    95,   213,    22,   213,     8,
      19,    19,    19,    19,    19,   245,     8,   247,    22,   249,
      22,   251,    22,   252,   253,   255,   256,   256,   256,    20,
     208,    20,    22,    20,    22,   213,    27,    28,    29,    30,
     269,   271,   271,   271,    20,   275,   275,   275,    20,   256,
      20,   256,    20,   283,   284,   284,   284,   287,   287,   287,
      22,    22,    22,    22,   271,    20,   271,    11,   275,    13,
     275,    15,    16,    81,    -1,    -1,    -1,   284,   256,   284,
     287,   208,   287,   208,    92,    -1,   213,    95,   213,   208,
      15,    -1,    -1,   271,   213,    20,    -1,   275,    -1,    43,
      25,    45,    27,    28,    29,    30,   284,    -1,    -1,   287,
      -1,     3,     4,     5,     6,    -1,     8,    61,   208,    -1,
      -1,    -1,    -1,   213,    16,    -1,    -1,    19,    15,   256,
      -1,   256,    24,    25,    -1,    22,    -1,   256,    25,    26,
      27,    28,    29,    30,   271,    -1,   271,    91,   275,    -1,
     275,    -1,   271,    -1,    -1,    -1,   275,   284,    15,   284,
     287,    13,   287,    20,    -1,   284,   256,    -1,   287,    -1,
      27,    28,    29,    30,    -1,    -1,   120,   121,   122,   123,
      -1,   271,     3,     4,     5,   275,    -1,     8,    13,    -1,
      -1,    43,    -1,    45,   284,    16,    -1,   287,    19,    -1,
     208,    22,    13,    24,    25,   213,    -1,    -1,    -1,    -1,
      -1,    -1,   156,    -1,   158,    -1,    -1,   161,    43,    -1,
      45,    -1,    -1,   167,   168,   169,   170,   171,   172,   173,
      -1,    -1,    43,   177,    45,   179,    -1,    -1,    -1,    91,
       3,     4,     5,     6,    -1,     8,    -1,    -1,   256,    60,
      -1,    -1,    -1,    16,    -1,    80,    19,    13,    -1,    -1,
      -1,    24,    25,   271,    -1,    -1,    91,   275,   120,   121,
     122,   123,     3,     4,     5,     6,   284,     8,    -1,   287,
      91,    -1,    -1,    -1,    -1,    16,    -1,    43,    19,    45,
      -1,    -1,    -1,    24,    25,    -1,   121,    -1,    13,    -1,
      -1,   245,    -1,    59,   156,   249,   158,   251,    -1,   161,
     121,   255,    -1,    -1,    -1,   167,   168,   169,   170,   171,
     172,   173,    -1,    -1,    -1,   177,    -1,   179,    43,    -1,
      45,   156,    -1,   158,    -1,    91,   161,    -1,    -1,   283,
      -1,    -1,    -1,    58,    -1,   156,    -1,   158,    -1,    -1,
     161,    -1,   177,    -1,   179,    -1,   167,   168,   169,   170,
     171,   172,     3,     4,     5,   121,   177,     8,   179,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    91,    -1,    19,    20,
      -1,    20,   207,    24,    25,    -1,    -1,   212,    27,    28,
      29,    30,    -1,   245,    -1,    -1,    -1,   249,    -1,   251,
     156,    -1,   158,   255,    -1,   161,   121,    13,    -1,    -1,
      -1,   167,   168,   169,   170,   171,    -1,    -1,    -1,    -1,
     245,   177,    -1,   179,   249,    -1,   251,    13,    -1,    -1,
     255,   283,    -1,    -1,   245,    15,    -1,    43,   249,    45,
     251,   156,    22,   158,   255,   270,   161,    27,    28,    29,
      30,    57,   167,   168,   169,   170,    -1,    43,   283,    45,
      -1,    -1,   177,    15,   179,    -1,    13,    -1,    20,    -1,
      56,    23,   283,    25,    26,    27,    28,    29,    30,    -1,
      -1,     3,     4,     5,     6,    91,     8,    -1,    -1,   245,
      -1,    -1,    -1,   249,    16,   251,    43,    19,    45,   255,
      -1,    -1,    24,    25,    22,    91,    -1,    -1,    55,    27,
      28,    29,    30,    -1,    -1,   121,     3,     4,     5,    -1,
      -1,     8,    -1,    -1,    -1,    -1,    -1,   283,    -1,    16,
     245,    -1,    19,    -1,   249,   121,   251,    24,    25,    -1,
     255,    22,    -1,    -1,    91,    -1,    27,    28,    29,    30,
     156,    -1,   158,    -1,    -1,   161,    -1,    -1,    -1,    -1,
      -1,   167,   168,   169,     3,     4,     5,    -1,   283,     8,
     156,   177,   158,   179,   121,   161,    -1,    16,    -1,    -1,
      19,   167,   168,    -1,    -1,    24,    25,    -1,    -1,    -1,
      -1,   177,    -1,   179,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    -1,    13,    14,    -1,    16,    17,   156,
      19,   158,    15,    22,   161,    24,    25,    -1,    -1,    22,
     167,    -1,    25,    26,    27,    28,    29,    30,    -1,    -1,
     177,    -1,   179,    -1,    -1,     3,     4,     5,    -1,   245,
       8,    -1,    -1,   249,    -1,   251,    -1,    -1,    16,   255,
      -1,    19,    -1,    -1,    -1,    -1,    24,    25,    -1,   245,
      -1,    -1,    -1,   249,    -1,   251,    -1,    -1,    -1,   255,
      -1,     0,    -1,    -1,     3,     4,     5,   283,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    16,    17,    -1,
      19,    -1,    -1,    22,    -1,    24,    25,   283,   245,    -1,
      -1,    -1,   249,    -1,   251,    -1,     0,    -1,   255,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    -1,    16,    17,    -1,    19,    -1,    -1,    22,    -1,
      24,    25,    -1,    -1,     0,    -1,   283,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      16,    17,    -1,    19,    -1,    -1,    22,     0,    24,    25,
       3,     4,     5,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    16,    17,    -1,    19,    -1,    -1,    22,
       0,    24,    25,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,    16,    17,    -1,    19,
      -1,    -1,    22,     0,    24,    25,     3,     4,     5,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    -1,    19,    -1,    -1,    22,     0,    24,    25,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    -1,    16,    17,    -1,    19,    -1,    -1,    22,     0,
      24,    25,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    -1,    16,    17,    -1,    19,    -1,
      -1,    22,     0,    24,    25,     3,     4,     5,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      -1,    19,    -1,    -1,    22,     0,    24,    25,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    16,    17,    -1,    19,    -1,    -1,    22,     0,    24,
      25,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    -1,    19,    -1,    -1,
      22,     0,    24,    25,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    16,    17,    -1,
      19,    -1,    -1,    22,     0,    24,    25,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      16,    17,    -1,    19,    -1,    -1,    22,     0,    24,    25,
       3,     4,     5,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    16,    17,    -1,    19,    -1,    -1,    22,
       0,    24,    25,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,    16,    17,    -1,    19,
      -1,    -1,    22,     0,    24,    25,     3,     4,     5,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    -1,    19,    -1,    -1,    22,     0,    24,    25,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    -1,    16,    17,    -1,    19,    -1,    -1,    22,     0,
      24,    25,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    -1,    16,    17,    -1,    19,    -1,
      -1,    22,     0,    24,    25,     3,     4,     5,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      -1,    19,    -1,    -1,    22,     0,    24,    25,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    16,    17,    -1,    19,    -1,    -1,    22,     0,    24,
      25,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      -1,    13,    14,    -1,    16,    17,    -1,    19,    -1,    -1,
      22,     0,    24,    25,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    -1,    13,    14,    -1,    16,    17,    -1,
      19,    -1,    -1,    22,     0,    24,    25,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    -1,    13,    14,    -1,
      16,    17,    -1,    19,    -1,    -1,    22,     0,    24,    25,
       3,     4,     5,    -1,     7,     8,     9,    10,    11,    -1,
      13,    14,    -1,    16,    17,    -1,    19,    -1,    -1,    22,
       0,    24,    25,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    13,    14,    -1,    16,    17,    -1,    19,
      -1,    -1,    22,     0,    24,    25,     3,     4,     5,    -1,
       7,     8,     9,    10,    11,    -1,    13,    14,    -1,    16,
      17,    -1,    19,    -1,    -1,    22,     0,    24,    25,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    -1,    13,
      14,    -1,    16,    17,    -1,    19,    -1,    -1,    22,     0,
      24,    25,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    13,    14,    -1,    16,    17,    -1,    19,    -1,
      -1,    22,     0,    24,    25,     3,     4,     5,    -1,     7,
       8,     9,    10,    11,    -1,    13,    14,    -1,    16,    17,
      -1,    19,    -1,    -1,    22,     0,    24,    25,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    13,    14,
      -1,    16,    17,    -1,    19,    -1,    -1,    22,     0,    24,
      25,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      -1,    13,    14,    -1,    16,    17,    -1,    19,    -1,    -1,
      22,     0,    24,    25,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    -1,    13,    14,    -1,    16,    17,    -1,
      19,    -1,    -1,    22,     0,    24,    25,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    -1,    13,    14,    -1,
      16,    17,    -1,    19,    -1,    -1,    22,     0,    24,    25,
       3,     4,     5,    -1,     7,     8,     9,    10,    11,    -1,
      13,    14,    -1,    16,    17,    -1,    19,    -1,    -1,    22,
       0,    24,    25,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    13,    14,    -1,    16,    17,    -1,    19,
      -1,    -1,    22,     0,    24,    25,     3,     4,     5,    -1,
       7,     8,     9,    10,    11,    -1,    13,    14,    -1,    16,
      17,    -1,    19,    -1,    -1,    22,     0,    24,    25,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    -1,    13,
      14,    -1,    16,    17,    -1,    19,    -1,    -1,    22,     0,
      24,    25,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    13,    14,    -1,    16,    17,    -1,    19,    -1,
      -1,    22,     0,    24,    25,     3,     4,     5,    -1,     7,
       8,     9,    10,    11,    -1,    13,    14,    -1,    16,    17,
      -1,    19,    -1,    -1,    22,     0,    24,    25,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    13,    14,
      -1,    16,    17,    -1,    19,    -1,    -1,    22,     0,    24,
      25,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      -1,    13,    14,    -1,    16,    17,    -1,    19,    -1,    -1,
      22,     0,    24,    25,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    -1,    13,    14,    -1,    16,    17,    -1,
      19,    -1,    -1,    22,    -1,    24,    25,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    -1,    -1,    22,    -1,    24,    25,
       3,     4,     5,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    16,    17,    18,    19,    -1,    -1,    22,
      -1,    24,    25,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    22,    -1,    24,    25,     3,     4,     5,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    -1,    -1,    22,    -1,    24,    25,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    -1,    16,    17,    18,    19,    -1,    -1,    22,    -1,
      24,    25,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    -1,
      -1,    22,    -1,    24,    25,     3,     4,     5,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    -1,    -1,    22,    -1,    24,    25,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    22,    -1,    24,
      25,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    -1,    -1,
      22,    -1,    24,    25,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    16,    17,    18,
      19,    -1,    -1,    22,    -1,    24,    25,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    -1,    -1,    22,    -1,    24,    25,
       3,     4,     5,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    16,    17,    18,    19,    -1,    -1,    22,
      -1,    24,    25,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    22,    -1,    24,    25,     3,     4,     5,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    -1,    -1,    22,    -1,    24,    25,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    -1,    16,    17,    18,    19,    -1,    -1,    22,    -1,
      24,    25,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    -1,
      -1,    22,    -1,    24,    25,     3,     4,     5,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    -1,    -1,    22,    -1,    24,    25,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    22,    -1,    24,
      25,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    -1,    -1,
      22,    -1,    24,    25,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    16,    17,    18,
      19,    -1,    -1,    22,    -1,    24,    25,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    -1,    -1,    22,    -1,    24,    25,
       3,     4,     5,    -1,     7,     8,     9,    10,    11,    -1,
      13,    14,    -1,    16,    17,    18,    19,    -1,    -1,    22,
      -1,    24,    25,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    22,    -1,    24,    25,     3,     4,     5,    -1,
       7,     8,     9,    10,    11,    -1,    13,    14,    -1,    16,
      17,    18,    19,    -1,    -1,    22,    -1,    24,    25,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    -1,    13,
      14,    -1,    16,    17,    18,    19,    -1,    -1,    22,    -1,
      24,    25,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    13,    14,    -1,    16,    17,    18,    19,    -1,
      -1,    22,    -1,    24,    25,     3,     4,     5,    -1,     7,
       8,     9,    10,    11,    -1,    13,    14,    -1,    16,    17,
      18,    19,    -1,    -1,    22,    -1,    24,    25,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    22,    -1,    24,
      25,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      -1,    13,    14,    -1,    16,    17,    18,    19,    -1,    -1,
      22,    -1,    24,    25,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    -1,    13,    14,    -1,    16,    17,    18,
      19,    -1,    -1,    22,    -1,    24,    25,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    -1,    13,    14,    -1,
      16,    17,    18,    19,    -1,    -1,    22,    -1,    24,    25,
       3,     4,     5,    -1,     7,     8,     9,    10,    11,    -1,
      13,    14,    -1,    16,    17,    18,    19,    -1,    -1,    22,
      -1,    24,    25,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    22,    -1,    24,    25,     3,     4,     5,    -1,
       7,     8,     9,    10,    11,    -1,    13,    14,    -1,    16,
      17,    18,    19,    -1,    -1,    22,    -1,    24,    25,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    -1,    13,
      14,    -1,    16,    17,    18,    19,    -1,    -1,    22,    -1,
      24,    25,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    13,    14,    -1,    16,    17,    18,    19,    -1,
      -1,    22,    -1,    24,    25,     3,     4,     5,    -1,     7,
       8,     9,    10,    11,    -1,    13,    14,    -1,    16,    17,
      18,    19,    -1,    -1,    22,    -1,    24,    25,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    22,    -1,    24,
      25,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      -1,    13,    14,    -1,    16,    17,    18,    19,    -1,    -1,
      22,    -1,    24,    25,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    -1,    13,    14,    -1,    16,    17,    18,
      19,    -1,    -1,    22,    -1,    24,    25,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    -1,    13,    14,    -1,
      16,    17,    18,    19,    -1,    -1,    22,    -1,    24,    25,
       3,     4,     5,    -1,     7,     8,     9,    10,    11,    -1,
      13,    14,    -1,    16,    17,    18,    19,    -1,    -1,    22,
      -1,    24,    25,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    22,    -1,    24,    25,     3,     4,     5,    -1,
       7,     8,     9,    10,    11,    -1,    13,    14,    -1,    16,
      17,    18,    19,    -1,    -1,    22,    -1,    24,    25,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    -1,    13,
      14,    -1,    16,    17,    18,    19,    -1,    -1,    22,    -1,
      24,    25,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    13,    14,    -1,    16,    17,    18,    19,    -1,
      -1,    22,    -1,    24,    25,     3,     4,     5,    -1,     7,
       8,     9,    10,    11,    -1,    13,    14,    -1,    16,    17,
      -1,    19,    -1,    -1,    22,    -1,    24,    25,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    13,    14,
      -1,    16,    17,    -1,    19,    -1,    -1,    22,    -1,    24,
      25,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      -1,    13,    14,    -1,    16,    17,    -1,    19,    -1,    -1,
      22,    15,    24,    25,     3,     4,     5,    -1,    22,     8,
      -1,    25,    26,    27,    28,    29,    30,    16,    -1,    -1,
      19,    15,    -1,    -1,    -1,    24,    25,    -1,    22,    -1,
      15,    25,    26,    27,    28,    29,    30,    22,    -1,    15,
      25,    26,    27,    28,    29,    30,    22,    -1,    15,    25,
      26,    27,    28,    29,    30,    22,    -1,    15,    25,    26,
      27,    28,    29,    30,    22,    -1,    15,    25,    26,    27,
      28,    29,    30,    22,    -1,    15,    25,    26,    27,    28,
      29,    30,    22,    -1,    15,    25,    26,    27,    28,    29,
      30,    22,    -1,    15,    25,    26,    27,    28,    29,    30,
      22,    -1,    15,    25,    26,    27,    28,    29,    30,    22,
      -1,    -1,    25,    26,    27,    28,    29,    30,    15,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    15,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      15,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    15,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    30,    15,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    15,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    15,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      15,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    15,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    30,    15,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    15,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    15,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      15,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    15,
      25,    26,    27,    28,    29,    30,    22,    -1,    15,    25,
      -1,    27,    28,    29,    30,    22,    -1,    -1,    25,    15,
      27,    28,    29,    30,    20,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,    29,    30
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     7,     8,     9,    10,    11,    13,
      14,    16,    17,    19,    22,    24,    25,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,     8,
      23,    19,    44,    19,    19,    19,     8,    54,    35,    44,
      54,    54,     0,    36,    22,    29,    30,    28,    27,    15,
      25,    26,    22,    44,    44,    45,    22,    44,     8,     6,
      44,    18,    20,    48,    49,    50,    51,    52,    53,    54,
      22,    20,    20,    20,    20,    46,    47,    36,    22,    22,
      22,    22,    12,    45,    36,    20,    36,     7,     9,    10,
      11,    13,    14,    17,    22,    34,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    55,     3,     4,     5,     8,
      16,    19,    24,    25,    47,    48,    49,    50,    51,    52,
      53,    54,    56,    36,     7,     9,    10,    11,    13,    14,
      17,    22,    34,    37,    38,    39,    40,    41,    42,    43,
      44,    55,    44,     8,    19,    44,    19,    19,    19,    35,
      22,    23,     8,    54,    44,    54,    54,    29,    30,    28,
      27,    15,    25,    26,     8,    19,    44,    19,    19,    19,
      35,    22,    22,    45,    22,    44,     8,     6,    44,    18,
      44,    20,    48,    49,    50,    51,    52,    53,    54,    22,
      45,    22,    44,     8,     6,    44,    18,    22,    20,    20,
      20,    20,    22,    20,    20,    20,    20,    46,     7,     9,
      10,    11,    13,    14,    17,    22,    34,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    55,    22,    22,    22,
      46,    36,    22,    22,    22,    22,     8,    19,    44,    19,
      19,    19,    35,    12,    22,    22,    12,    45,    22,    45,
      22,    44,     8,     6,    44,    18,    36,    45,    36,    20,
      22,    20,    20,    20,    20,    20,    36,    46,    36,    22,
      22,    22,    36,    22,    12,    45,    36,    20,    36
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    32,    33,    34,    35,    35,    36,    36,    36,    36,
      36,    36,    36,    37,    38,    38,    39,    39,    40,    40,
      41,    42,    42,    43,    44,    44,    45,    45,    46,    46,
      47,    47,    48,    48,    49,    49,    50,    50,    51,    51,
      52,    52,    53,    53,    54,    54,    54,    54,    54,    54,
      55,    56,    56,    56
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     9,     5,     7,     2,     1,     1,     1,
       5,     5,     5,     3,     3,     1,     0,     1,     0,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     2,     2,     2,     3,
       3,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {

#line 2193 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 210 "./src/parser.y"


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

    yyparse();

    if(errors_count == 0){
        printf(BGRN "Finished. Lexical analysis found no errors");
        printf(reset "\n");
    } else {
        printf(BRED "Finished. Lexical analysis found %d errors during execution", errors_count);
        printf(reset "\n");
    }

    print_symbol_table(symbol_table_size);

    fclose(yyin);
    yylex_destroy();

    return 0;
}
