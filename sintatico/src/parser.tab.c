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

#line 107 "parser.tab.c"

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
  YYSYMBOL_SIMPLE_TYPE = 7,                /* SIMPLE_TYPE  */
  YYSYMBOL_LIST_TYPE = 8,                  /* LIST_TYPE  */
  YYSYMBOL_IDENTIFIER = 9,                 /* IDENTIFIER  */
  YYSYMBOL_RW_FOR = 10,                    /* RW_FOR  */
  YYSYMBOL_RW_RETURN = 11,                 /* RW_RETURN  */
  YYSYMBOL_RW_IF = 12,                     /* RW_IF  */
  YYSYMBOL_RW_ELSE = 13,                   /* RW_ELSE  */
  YYSYMBOL_IO_READ = 14,                   /* IO_READ  */
  YYSYMBOL_IO_WRITE = 15,                  /* IO_WRITE  */
  YYSYMBOL_BINARY_LIST_OP = 16,            /* BINARY_LIST_OP  */
  YYSYMBOL_UNARY_LIST_OP = 17,             /* UNARY_LIST_OP  */
  YYSYMBOL_18_ = 18,                       /* '{'  */
  YYSYMBOL_19_ = 19,                       /* '}'  */
  YYSYMBOL_20_ = 20,                       /* '('  */
  YYSYMBOL_21_ = 21,                       /* ')'  */
  YYSYMBOL_22_ = 22,                       /* ','  */
  YYSYMBOL_23_ = 23,                       /* ';'  */
  YYSYMBOL_24_ = 24,                       /* '='  */
  YYSYMBOL_25_ = 25,                       /* '!'  */
  YYSYMBOL_ARITMETIC_OP_ADDITIVE = 26,     /* ARITMETIC_OP_ADDITIVE  */
  YYSYMBOL_ARITMETIC_OP_MULTIPLICATIVE = 27, /* ARITMETIC_OP_MULTIPLICATIVE  */
  YYSYMBOL_RELATIONAL_OP = 28,             /* RELATIONAL_OP  */
  YYSYMBOL_EQUALITY_OP = 29,               /* EQUALITY_OP  */
  YYSYMBOL_LOGICAL_OP_OR = 30,             /* LOGICAL_OP_OR  */
  YYSYMBOL_LOGICAL_OP_AND = 31,            /* LOGICAL_OP_AND  */
  YYSYMBOL_THEN = 32,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 33,                  /* $accept  */
  YYSYMBOL_program = 34,                   /* program  */
  YYSYMBOL_declarations = 35,              /* declarations  */
  YYSYMBOL_declaration = 36,               /* declaration  */
  YYSYMBOL_block = 37,                     /* block  */
  YYSYMBOL_statements = 38,                /* statements  */
  YYSYMBOL_statement = 39,                 /* statement  */
  YYSYMBOL_function_declaration_statement = 40, /* function_declaration_statement  */
  YYSYMBOL_41_1 = 41,                      /* $@1  */
  YYSYMBOL_42_2 = 42,                      /* $@2  */
  YYSYMBOL_parameters_optative = 43,       /* parameters_optative  */
  YYSYMBOL_parameters = 44,                /* parameters  */
  YYSYMBOL_parameter = 45,                 /* parameter  */
  YYSYMBOL_for_statement = 46,             /* for_statement  */
  YYSYMBOL_if_else_statement = 47,         /* if_else_statement  */
  YYSYMBOL_expression_statement = 48,      /* expression_statement  */
  YYSYMBOL_io_statement = 49,              /* io_statement  */
  YYSYMBOL_input_statement = 50,           /* input_statement  */
  YYSYMBOL_output_statement = 51,          /* output_statement  */
  YYSYMBOL_return_statement = 52,          /* return_statement  */
  YYSYMBOL_expression = 53,                /* expression  */
  YYSYMBOL_function_call_expression = 54,  /* function_call_expression  */
  YYSYMBOL_function_arguments_optative = 55, /* function_arguments_optative  */
  YYSYMBOL_function_arguments = 56,        /* function_arguments  */
  YYSYMBOL_function_argument = 57,         /* function_argument  */
  YYSYMBOL_expression_optative = 58,       /* expression_optative  */
  YYSYMBOL_or_expression_optative = 59,    /* or_expression_optative  */
  YYSYMBOL_or_expression = 60,             /* or_expression  */
  YYSYMBOL_and_expression = 61,            /* and_expression  */
  YYSYMBOL_equality_expression = 62,       /* equality_expression  */
  YYSYMBOL_relational_expression = 63,     /* relational_expression  */
  YYSYMBOL_list_expression = 64,           /* list_expression  */
  YYSYMBOL_addition_expression = 65,       /* addition_expression  */
  YYSYMBOL_multiplication_expression = 66, /* multiplication_expression  */
  YYSYMBOL_simple_value = 67,              /* simple_value  */
  YYSYMBOL_variable_declaration_statement = 68, /* variable_declaration_statement  */
  YYSYMBOL_constant = 69                   /* constant  */
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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3133

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  382

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   279


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
       2,     2,     2,    25,     2,     2,     2,     2,     2,     2,
      20,    21,     2,     2,    22,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    23,
       2,    24,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    18,     2,    19,     2,     2,     2,     2,
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
      15,    16,    17,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   130,   130,   136,   141,   144,   148,   151,   157,   163,
     168,   174,   177,   180,   183,   186,   189,   192,   195,   199,
     199,   232,   232,   275,   278,   284,   289,   295,   314,   340,
     350,   355,   364,   370,   373,   379,   389,   393,   400,   407,
     416,   422,   436,   439,   445,   450,   456,   463,   466,   472,
     475,   481,   487,   493,   499,   505,   511,   517,   524,   530,
     542,   548,   555,   561,   567,   573,   576,   582,   589,   596,
     603,   606,   612,   636,   666,   669,   672
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
  "C_NIL", "LIT_STRING", "SIMPLE_TYPE", "LIST_TYPE", "IDENTIFIER",
  "RW_FOR", "RW_RETURN", "RW_IF", "RW_ELSE", "IO_READ", "IO_WRITE",
  "BINARY_LIST_OP", "UNARY_LIST_OP", "'{'", "'}'", "'('", "')'", "','",
  "';'", "'='", "'!'", "ARITMETIC_OP_ADDITIVE",
  "ARITMETIC_OP_MULTIPLICATIVE", "RELATIONAL_OP", "EQUALITY_OP",
  "LOGICAL_OP_OR", "LOGICAL_OP_AND", "THEN", "$accept", "program",
  "declarations", "declaration", "block", "statements", "statement",
  "function_declaration_statement", "$@1", "$@2", "parameters_optative",
  "parameters", "parameter", "for_statement", "if_else_statement",
  "expression_statement", "io_statement", "input_statement",
  "output_statement", "return_statement", "expression",
  "function_call_expression", "function_arguments_optative",
  "function_arguments", "function_argument", "expression_optative",
  "or_expression_optative", "or_expression", "and_expression",
  "equality_expression", "relational_expression", "list_expression",
  "addition_expression", "multiplication_expression", "simple_value",
  "variable_declaration_statement", "constant", YY_NULLPTR
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
     265,   266,   267,   268,   269,   270,   271,   272,   123,   125,
      40,    41,    44,    59,    61,    33,   273,   274,   275,   276,
     277,   278,   279
};
#endif

#define YYPACT_NINF (-293)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-77)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      84,    66,    -1,    43,    99,   121,   145,   148,    68,   -11,
    -293,   162,    44,     4,   208,    61,   217,    65,    65,    80,
      72,    83,   201,   101,    78,   260,   493,   111,   493,   367,
     337,    30,   214,  2795,   157,  1032,   107,   404,   119,   122,
     127,   951,  2536,  1018,   951,   951,   415,   473,   499,   509,
     569,   580,   609,   681,   736,   114,  2804,   742,    39,   154,
     828,   935,   703,  2813,  2822,   776,  2831,   372,   781,   167,
     140,    13,   404,    75,   170,  1018,   169,   155,   171,  2840,
     835,   999,   184,  2849,  2858,   785,   951,   951,   951,   951,
     951,   951,   951,   210,   421,   230,   432,   529,   212,   215,
     232,   786,   236,   244,   252,   258,   797,  1912,  2867,    79,
     427,  1078,  1270,  1282,  2876,  2885,  2894,  1150,   282,  2562,
     247,   269,   274,   538,   290,   908,     6,   945,   991,   994,
     770,   493,   273,  1029,   493,  1067,  1938,   532,   298,   404,
     313,   316,   326,  2536,  1964,  1990,  2016,  2042,  2068,  2094,
    2120,  2146,   329,  2172,   804,  2910,  2926,  1384,  1181,  1018,
    1181,  1181,  2942,    -6,   304,    11,   843,   887,   958,  2958,
    2974,  2990,   536,  2594,  2610,   883,  1205,  1018,  1205,  1205,
    2626,    14,   182,  1010,  1069,  1135,   460,  2642,  2658,  2674,
      90,   633,   335,   404,   354,   359,   377,  2536,   117,   133,
     144,   207,   219,   271,   276,   293,   380,   360,   328,   397,
     388,    75,   403,  1018,   422,   443,  2198,  2224,    13,  1018,
     300,  3006,   416,  3022,  3038,  1181,  1181,  1181,  1181,  1181,
    1181,  1181,    13,  1150,  1401,  2690,   424,  2706,  2722,  1205,
    1205,  1205,  1205,  1205,  1205,  1205,   450,   418,    75,   452,
    1018,   476,   669,  2250,   391,   470,  2276,   478,  2302,   496,
     525,   540,   576,  2328,   582,   594,  3054,   355,   280,  1237,
    1295,  1301,  3070,  3086,   598,   557,  2738,   340,  1113,  1206,
    1225,  1259,  2754,  2770,   606,   420,   634,   471,   658,   659,
     661,   662,   514,  2354,   282,  2588,   644,   673,   683,  3102,
    2786,   535,   282,  2562,   684,   685,   686,   687,   249,   635,
     664,   404,   672,   698,   700,  2536,   519,   581,   651,   744,
    1356,  1476,  1514,  1544,  1572,   705,  1600,  2380,  2406,  2432,
     715,   568,   570,   604,   605,   770,   714,   717,    75,   719,
    1018,   735,   796,  2458,  2536,  1626,   770,  2562,   745,   737,
    1652,   754,  1678,   747,   768,   773,   782,  1704,  2484,   794,
     646,  2536,  1730,   282,  2588,   783,   800,   818,  2562,  2510,
     820,  1756,  1782,  1808,  1834,   739,   770,  2588,   798,  1860,
    2588,  1886
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -293,  -293,  -293,   813,     1,  -142,    -5,  -293,  -293,  -293,
     844,  -293,   840,    19,    37,    48,    55,    87,    97,   115,
     -23,   472,  -181,  -293,   753,   -99,  -292,  1174,  1232,  1102,
    1044,   853,   898,   707,   395,     0,   650
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,   144,    80,    81,     6,    17,    18,
      20,    21,    22,   145,   146,   147,   148,   149,   150,   151,
     152,    56,    95,    96,    97,   100,   124,    57,    58,    59,
      60,    61,    62,    63,    64,   153,    66
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,   216,   307,    55,     7,    55,   -30,     8,     9,    13,
     330,   -19,    14,   -30,    74,   -40,   172,   173,   174,   131,
      82,    47,   175,    68,   225,   -19,    65,    46,    65,    46,
     176,   132,   -54,   177,   -42,   -40,   -40,   264,   178,   179,
     227,   -54,   -54,    10,   239,    48,   -74,    48,    94,    98,
      99,   274,   102,   -74,   105,   253,   -74,   -74,   -74,   -74,
     -74,   -74,   -52,    49,    15,    49,    -5,    16,   -21,   -52,
      87,   370,    19,    -5,    50,   107,    50,    12,    31,    32,
      33,    51,   -21,    51,    35,     1,   -23,    29,    24,    25,
     -18,     2,    41,    26,    94,    43,   206,   -18,   -47,    -2,
      44,    45,   -51,   -18,   -24,    27,     2,   208,    55,   -51,
      87,    55,   257,    52,   126,    52,   212,   -17,    19,   207,
     198,    -4,    28,    53,   -17,    53,   133,    73,    -4,   135,
     -17,    65,    46,   -15,    65,    46,   222,    85,   199,    75,
     -15,    54,    76,    54,   -16,    -6,   -15,    77,    -7,   286,
      48,   -16,    -6,    48,   236,    -7,   200,   -16,   154,   155,
     156,   104,    -3,    14,   157,    69,    70,   201,    49,    -3,
     249,    49,   158,   343,   202,   159,    93,   -54,   103,    50,
     160,   161,    50,    88,   -54,   -54,    51,   -66,    99,    51,
     259,    71,   262,   101,   -66,    94,   265,   -66,   -66,   -66,
     -66,   -66,   -66,   -52,   -52,   108,   203,   -11,   -72,    94,
     275,   107,   -52,   240,   -11,   -72,   204,   -73,    52,   -12,
     -11,    52,   -26,   -26,   -73,    99,   -12,   288,    53,   291,
     -75,    53,   -12,    16,   205,   -39,   348,   -75,   -48,   351,
     -75,   -75,   -75,   -75,   -75,   -75,    54,   359,   107,    54,
     -18,   116,   -18,   -18,   -18,   118,   -18,   119,   -18,   -18,
     -18,   -18,   -18,   -18,   -18,   120,   -18,   -18,   -18,   -18,
     127,   -33,   325,   121,   -18,   -18,   -34,   378,   -33,   122,
     206,   -27,   -27,   -34,   -33,    31,    32,    33,   339,   -34,
     317,    78,   128,   -13,   134,   326,   316,   129,   331,    41,
     -13,   -53,    43,   207,   198,   -49,   -13,    44,    45,   227,
     -53,   -53,   208,   130,   318,    99,   -66,   353,   211,   356,
     218,   -66,   199,   208,   206,   -52,   -66,   -66,   -66,   -66,
     -66,   -66,   319,   213,   -52,   226,   214,   -18,   107,   358,
     200,   325,   360,   320,   -18,   206,   215,   207,   198,   -48,
     321,   201,   217,   208,   325,   248,   369,   325,   202,   371,
     -14,   -51,   -51,   375,   326,   316,   199,   -14,   207,   198,
     -51,   240,   379,   -14,   250,   381,   -51,   326,   316,   251,
     326,   316,   322,   318,   200,   -51,   226,   199,   -28,   -28,
     203,   -32,   323,   -25,   -25,   201,   318,   252,   -32,   318,
     204,   319,   202,   254,   -32,   200,   255,    31,    32,    33,
     324,   256,   320,    35,   319,   -17,   201,   319,   205,   321,
     -72,    41,   -17,   202,    43,   320,   258,   -72,   320,    44,
      45,   260,   321,   -72,   203,   321,    79,   266,   170,    83,
      84,   285,   -46,   -46,   204,   276,   154,   155,   156,   261,
     -53,   322,   157,   -43,   117,   203,    88,   -53,   -53,   284,
     158,   323,   205,   159,   322,   204,   188,   322,   160,   161,
     170,   -38,   170,   -20,   323,   287,   243,   323,   -38,   324,
     -20,   -60,   -60,   205,   -38,   289,   244,   115,   -60,   -60,
     -60,   -60,   324,   293,    30,   324,    31,    32,    33,   -15,
      34,   294,    35,    36,    37,    38,   -15,    39,    40,   -16,
      41,    42,   188,    43,    -8,   162,   -16,   295,    44,    45,
     -17,    -8,   -17,   -17,   -17,   170,   -17,    -8,   -17,   -17,
     -17,   -17,   -17,   -17,   -17,   -73,   -17,   -17,   -17,   -17,
     209,   210,   -73,   180,   -17,   -17,   296,   162,   -73,   162,
     -45,   -45,   -74,   221,   170,   223,   224,   -74,   -74,   -44,
     -44,   297,   -74,   -74,   -74,   -74,   -74,   -74,   -30,   -11,
     -35,   235,   170,   237,   238,   -30,   -11,   -35,   -39,   -39,
     -12,   347,   -30,   -35,   -30,   -30,   -30,   -12,   -30,   180,
     -30,   -30,   -30,   -30,   344,   -30,   -30,   298,   -30,   -30,
     -30,   -30,   162,   299,   -37,   -36,   -30,   -30,   170,   -33,
     170,   -37,   -36,   188,   170,   -39,   -33,   -37,   -36,   300,
     170,   170,   170,   170,   170,   170,   273,   188,   188,   301,
     162,   162,   162,   162,   188,   188,   188,   188,   188,   188,
     283,   246,   247,   336,   337,   170,   -31,   170,   180,   162,
     180,   180,   -15,   -31,   -15,   -15,   -15,   302,   -15,   -31,
     -15,   -15,   -15,   -15,   -15,   -15,   -15,   327,   -15,   -15,
     -15,   -15,   154,   155,   156,   290,   -15,   -15,   157,   303,
     304,   -34,   305,   306,   338,   162,   158,   162,   -34,   159,
     180,   162,   340,   171,   160,   161,   328,   162,   162,   162,
     162,   162,   162,   162,   180,   180,   329,   332,   333,   334,
     335,   180,   180,   180,   180,   180,   180,   180,   341,    90,
     342,   189,   162,   349,   162,   171,   -60,   171,   345,    91,
     170,   -60,   -60,   -60,   -60,   170,   -13,   170,   346,   -29,
     350,   170,   352,   -13,   354,   -16,   -29,   -16,   -16,   -16,
     169,   -16,   -29,   -16,   -16,   -16,   -16,   -16,   -16,   -16,
     362,   -16,   -16,   -16,   -16,   -40,   361,   189,   364,   -16,
     -16,   170,    86,   154,   155,   156,   -14,   363,   187,   157,
     171,   -22,   169,   -14,   169,   -32,   -38,   158,   -22,   365,
     159,   -47,   -32,   -38,   366,   160,   161,    -8,   114,   154,
     155,   156,   355,   367,    -8,   157,   372,   162,   171,   171,
     171,   171,   162,   158,   162,   368,   159,    11,   162,   380,
     -74,   160,   161,   373,   187,   -74,   189,   171,   189,   189,
     -74,   -74,   -74,   -74,   -74,   -74,   136,   169,    31,    32,
      33,   374,   137,   376,    35,   138,   139,   140,   162,   141,
     142,   -56,    41,   143,   106,    43,    89,   -56,   -56,   -56,
      44,    45,    23,   171,   -56,   171,   169,    67,   189,   171,
     123,   228,   -56,   -56,   -56,   171,   171,   171,   171,   171,
     171,   171,   189,   189,   169,     0,     0,     0,     0,   189,
     189,   189,   189,   189,   189,   189,   167,     0,     0,   -66,
     171,     0,   171,   232,   -66,   -66,     0,   233,   -58,   -66,
     -66,   -66,   -66,   -66,   -66,   -58,   -58,   -58,   -58,     0,
     169,     0,   169,     0,   185,   187,   169,     0,   167,     0,
     167,   -50,   169,   169,   169,   169,   169,   272,    86,   187,
     187,   168,   112,   113,     0,   -35,   187,   187,   187,   187,
     187,   282,   -35,     0,    31,    32,    33,   169,   -58,   169,
      78,     0,     0,   -58,   -58,   -58,   -58,     0,    41,   186,
     185,    43,     0,   168,   229,   168,    44,    45,     0,   -60,
       0,     0,     0,   167,   230,   171,   -60,   -60,   -60,   -60,
     171,   -37,   171,     0,   -36,     0,   171,     0,   -37,     0,
     -10,   -36,   -10,   -10,   -10,     0,   -10,     0,   -10,   -10,
     -10,   -10,   167,   -10,   -10,   186,   -10,   -10,   -10,   -10,
       0,   154,   155,   156,   -10,   -10,   171,   157,   168,   -31,
     167,   -54,   -54,     0,     0,   158,   -31,     0,   159,   241,
     -54,   -54,   169,   160,   161,     0,     0,   169,   -66,   169,
       0,     0,    71,   169,     0,   -66,    72,   168,   -66,   -66,
     -66,   -66,   -66,   -66,     0,     0,   167,   -29,   167,     0,
       0,   185,   167,     0,   -29,   168,     0,     0,   167,   167,
     167,   270,   271,   169,     0,   185,   185,   166,     0,     0,
     -56,   -56,   185,   185,   185,   280,   281,   242,   -56,   -56,
     -56,   -55,     0,   167,     0,   167,    89,   -55,   -55,   -55,
       0,   168,     0,   168,     0,   184,   186,   168,     0,   166,
       0,   166,     0,   168,   168,   168,   168,   168,     0,     0,
     186,   186,   111,     0,   -53,   -53,     0,   186,   186,   186,
     186,   186,   241,   -53,   -53,   165,     0,     0,   168,     0,
     168,     0,     0,   172,   173,   174,   -58,   -58,     0,   175,
       0,   184,     0,   -58,   -58,   -58,   -58,   176,     0,     0,
     177,     0,     0,   183,   166,   178,   179,   165,     0,   165,
       0,     0,     0,     0,   154,   155,   156,     0,   167,   110,
     220,     0,     0,   167,     0,   167,     0,     0,   158,   167,
       0,   159,     0,   166,     0,     0,   160,   161,   172,   173,
     174,     0,     0,     0,   234,     0,     0,   163,     0,   183,
       0,   166,   176,     0,     0,   177,     0,   -55,   -55,   167,
     178,   179,   165,   168,   242,   -55,   -55,   -55,   168,     0,
     168,     0,     0,     0,   168,   181,   -57,   -57,     0,   163,
       0,   163,     0,   -57,   -57,   -57,   -57,   166,   -55,   166,
       0,   165,   184,   166,     0,   228,   -55,   -55,   -55,   166,
     166,   269,     0,     0,   168,   164,   184,   184,     0,   165,
     -59,   -59,     0,   184,   184,   279,     0,   -59,   -59,   -59,
     -59,   181,   125,   -57,   166,     0,   166,     0,   -57,   -57,
     -57,   -57,     0,   182,   163,   -59,     0,   164,     0,   164,
     -59,   -59,   -59,   -59,     0,   165,   -57,   165,   109,     0,
     183,   165,   -59,   -57,   -57,   -57,   -57,   165,   268,   -59,
     -59,   -59,   -59,   163,   183,   183,     0,     0,     0,     0,
       0,   183,   278,     0,     0,     0,     0,     0,     0,   182,
       0,   163,   165,     0,   165,     0,     0,   -11,     0,   -11,
     -11,   -11,   164,   -11,     0,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,     0,   -11,   -11,   -11,   -11,     0,     0,   166,
       0,   -11,   -11,     0,   166,     0,   166,   163,     0,   163,
     166,   164,   181,   163,     0,     0,     0,     0,     0,     0,
     -66,     0,     0,     0,   218,   -66,   181,   181,   219,   164,
     -66,   -66,   -66,   -66,   -66,   -66,     0,   -66,     0,     0,
     166,   232,   -66,   -66,   163,     0,   163,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,     0,     0,   165,     0,     0,
       0,     0,   165,     0,   165,   164,     0,   164,   165,     0,
     182,   164,     0,     0,     0,     0,     0,   267,     0,     0,
       0,     0,     0,     0,   182,   182,     0,     0,   125,     0,
       0,   277,     0,     0,     0,     0,   125,   -12,   165,   -12,
     -12,   -12,   164,   -12,   164,   -12,   -12,   -12,   -12,   -12,
     -12,   -12,     0,   -12,   -12,   -12,   -12,     0,     0,     0,
       0,   -12,   -12,     0,     0,     0,     0,     0,     0,   163,
       0,     0,     0,     0,   163,   -33,   163,   -33,   -33,   -33,
     163,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
       0,   -33,   -33,   -33,   -33,     0,     0,   125,     0,   -33,
     -33,     0,     0,     0,     0,   -34,     0,   -34,   -34,   -34,
     163,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
       0,   -34,   -34,   -34,   -34,     0,     0,   164,     0,   -34,
     -34,     0,   164,   -13,   164,   -13,   -13,   -13,   164,   -13,
       0,   -13,   -13,   -13,   -13,   -13,   -13,   -13,     0,   -13,
     -13,   -13,   -13,     0,     0,     0,     0,   -13,   -13,     0,
       0,   -14,     0,   -14,   -14,   -14,     0,   -14,   164,   -14,
     -14,   -14,   -14,   -14,   -14,   -14,     0,   -14,   -14,   -14,
     -14,     0,     0,     0,     0,   -14,   -14,   -32,     0,   -32,
     -32,   -32,     0,   -32,     0,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,     0,   -32,   -32,   -32,   -32,     0,     0,     0,
       0,   -32,   -32,   -72,     0,   -72,   -72,   -72,     0,   -72,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,   -72,   -72,   -38,
       0,   -38,   -38,   -38,     0,   -38,     0,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,     0,
       0,     0,     0,   -38,   -38,    -8,     0,    -8,    -8,    -8,
       0,    -8,     0,    -8,    -8,    -8,    -8,    -8,    -8,    -8,
       0,    -8,    -8,    -8,    -8,     0,     0,     0,     0,    -8,
      -8,   -73,     0,   -73,   -73,   -73,     0,   -73,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,
     -73,     0,     0,     0,     0,   -73,   -73,   -30,     0,   -30,
     -30,   -30,     0,   -30,     0,   -30,   -30,   -30,   -30,   377,
     -30,   -30,     0,   -30,   -30,   -30,   -30,     0,     0,     0,
       0,   -30,   -30,   -35,     0,   -35,   -35,   -35,     0,   -35,
       0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,
     -35,   -35,   -35,     0,     0,     0,     0,   -35,   -35,   -37,
       0,   -37,   -37,   -37,     0,   -37,     0,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,     0,
       0,     0,     0,   -37,   -37,   -36,     0,   -36,   -36,   -36,
       0,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
       0,   -36,   -36,   -36,   -36,     0,     0,     0,     0,   -36,
     -36,   -31,     0,   -31,   -31,   -31,     0,   -31,     0,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,
     -31,     0,     0,     0,     0,   -31,   -31,   -29,     0,   -29,
     -29,   -29,     0,   -29,     0,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,     0,   -29,   -29,   -29,   -29,     0,     0,     0,
       0,   -29,   -29,    -9,     0,    -9,    -9,    -9,     0,    -9,
       0,    -9,    -9,    -9,    -9,     0,    -9,    -9,     0,    -9,
      -9,    -9,    -9,     0,     0,     0,     0,    -9,    -9,   -18,
       0,   -18,   -18,   -18,     0,   -18,     0,   -18,   -18,   -18,
     -18,     0,   -18,   -18,     0,   -18,   -18,   -18,   -18,     0,
       0,     0,     0,   -18,   -18,   -17,     0,   -17,   -17,   -17,
       0,   -17,     0,   -17,   -17,   -17,   -17,     0,   -17,   -17,
       0,   -17,   -17,   -17,   -17,     0,     0,     0,     0,   -17,
     -17,   -15,     0,   -15,   -15,   -15,     0,   -15,     0,   -15,
     -15,   -15,   -15,     0,   -15,   -15,     0,   -15,   -15,   -15,
     -15,     0,     0,     0,     0,   -15,   -15,   -16,     0,   -16,
     -16,   -16,     0,   -16,     0,   -16,   -16,   -16,   -16,     0,
     -16,   -16,     0,   -16,   -16,   -16,   -16,     0,     0,     0,
       0,   -16,   -16,   -11,     0,   -11,   -11,   -11,     0,   -11,
       0,   -11,   -11,   -11,   -11,     0,   -11,   -11,     0,   -11,
     -11,   -11,   -11,     0,     0,     0,     0,   -11,   -11,   -12,
       0,   -12,   -12,   -12,     0,   -12,     0,   -12,   -12,   -12,
     -12,     0,   -12,   -12,     0,   -12,   -12,   -12,   -12,     0,
       0,     0,     0,   -12,   -12,   -33,     0,   -33,   -33,   -33,
       0,   -33,     0,   -33,   -33,   -33,   -33,     0,   -33,   -33,
       0,   -33,   -33,   -33,   -33,     0,     0,     0,     0,   -33,
     -33,   -34,     0,   -34,   -34,   -34,     0,   -34,     0,   -34,
     -34,   -34,   -34,     0,   -34,   -34,     0,   -34,   -34,   -34,
     -34,     0,     0,     0,     0,   -34,   -34,   -13,     0,   -13,
     -13,   -13,     0,   -13,     0,   -13,   -13,   -13,   -13,     0,
     -13,   -13,     0,   -13,   -13,   -13,   -13,     0,     0,     0,
       0,   -13,   -13,   -14,     0,   -14,   -14,   -14,     0,   -14,
       0,   -14,   -14,   -14,   -14,     0,   -14,   -14,     0,   -14,
     -14,   -14,   -14,     0,     0,     0,     0,   -14,   -14,   136,
       0,    31,    32,    33,     0,   137,     0,    35,   138,   139,
     140,     0,   141,   142,     0,    41,   143,   263,    43,     0,
       0,     0,     0,    44,    45,   -32,     0,   -32,   -32,   -32,
       0,   -32,     0,   -32,   -32,   -32,   -32,     0,   -32,   -32,
       0,   -32,   -32,   -32,   -32,     0,     0,     0,     0,   -32,
     -32,   136,     0,    31,    32,    33,     0,   137,     0,    35,
     138,   139,   140,     0,   141,   142,     0,    41,   143,   292,
      43,     0,     0,     0,     0,    44,    45,   -72,     0,   -72,
     -72,   -72,     0,   -72,     0,   -72,   -72,   -72,   -72,     0,
     -72,   -72,     0,   -72,   -72,   -72,   -72,     0,     0,     0,
       0,   -72,   -72,   -38,     0,   -38,   -38,   -38,     0,   -38,
       0,   -38,   -38,   -38,   -38,     0,   -38,   -38,     0,   -38,
     -38,   -38,   -38,     0,     0,     0,     0,   -38,   -38,    -8,
       0,    -8,    -8,    -8,     0,    -8,     0,    -8,    -8,    -8,
      -8,     0,    -8,    -8,     0,    -8,    -8,    -8,    -8,     0,
       0,     0,     0,    -8,    -8,   -73,     0,   -73,   -73,   -73,
       0,   -73,     0,   -73,   -73,   -73,   -73,     0,   -73,   -73,
       0,   -73,   -73,   -73,   -73,     0,     0,     0,     0,   -73,
     -73,   -35,     0,   -35,   -35,   -35,     0,   -35,     0,   -35,
     -35,   -35,   -35,     0,   -35,   -35,     0,   -35,   -35,   -35,
     -35,     0,     0,     0,     0,   -35,   -35,   -37,     0,   -37,
     -37,   -37,     0,   -37,     0,   -37,   -37,   -37,   -37,     0,
     -37,   -37,     0,   -37,   -37,   -37,   -37,     0,     0,     0,
       0,   -37,   -37,   -36,     0,   -36,   -36,   -36,     0,   -36,
       0,   -36,   -36,   -36,   -36,     0,   -36,   -36,     0,   -36,
     -36,   -36,   -36,     0,     0,     0,     0,   -36,   -36,   136,
       0,    31,    32,    33,     0,   137,     0,    35,   138,   139,
     140,     0,   141,   142,     0,    41,   143,   357,    43,     0,
       0,     0,     0,    44,    45,   -31,     0,   -31,   -31,   -31,
       0,   -31,     0,   -31,   -31,   -31,   -31,     0,   -31,   -31,
       0,   -31,   -31,   -31,   -31,     0,     0,     0,     0,   -31,
     -31,   -29,     0,   -29,   -29,   -29,     0,   -29,     0,   -29,
     -29,   -29,   -29,     0,   -29,   -29,     0,   -29,   -29,   -29,
     -29,     0,     0,     0,     0,   -29,   -29,   136,     0,    31,
      32,    33,     0,   137,     0,    35,   138,   139,   140,     0,
     141,   142,     0,    41,   143,     0,    43,     0,     0,     0,
       0,    44,    45,   190,     0,    31,    32,    33,     0,   191,
       0,    35,   192,   193,   194,     0,   195,   196,     0,    41,
     197,     0,    43,     0,     0,     0,     0,    44,    45,   308,
       0,    31,    32,    33,     0,   309,     0,    35,   310,   311,
     312,     0,   313,   314,     0,    41,   315,     0,    43,     0,
     -75,     0,     0,    44,    45,   -75,   -75,     0,     0,     0,
     -75,   -75,   -75,   -75,   -75,   -75,   -76,     0,     0,     0,
       0,   -76,   -76,     0,     0,     0,   -76,   -76,   -76,   -76,
     -76,   -76,   -71,     0,     0,     0,     0,   -71,   -71,     0,
       0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -62,     0,
       0,     0,     0,   -62,   -62,     0,     0,     0,   -62,   245,
     -62,   -62,   -62,   -62,   -64,     0,     0,     0,     0,   -64,
     -64,     0,     0,     0,   -64,   -64,   -64,   -64,   -64,   -64,
     -65,     0,     0,     0,     0,   -65,   -65,     0,     0,     0,
     -65,   -65,   -65,   -65,   -65,   -65,   -69,     0,     0,     0,
       0,   -69,   -69,     0,     0,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -68,     0,     0,     0,     0,   -68,   -68,     0,
       0,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -67,     0,
       0,     0,     0,   -67,   -67,     0,     0,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -70,     0,     0,     0,     0,   -70,
     -70,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -61,     0,     0,     0,     0,   -61,   -61,     0,     0,     0,
     -61,   245,   -61,   -61,   -61,   -61,   -63,     0,     0,     0,
       0,   -63,   -63,     0,     0,     0,   -63,   -63,   -63,   -63,
     -63,   -63,   -41,     0,     0,     0,     0,   -41,   -41,     0,
       0,   -76,   -41,   -41,   -41,   -41,   -41,   -41,   -76,     0,
     -71,   -76,   -76,   -76,   -76,   -76,   -76,   -71,     0,   -62,
     -71,   -71,   -71,   -71,   -71,   -71,   -62,     0,   -64,   -62,
      92,   -62,   -62,   -62,   -62,   -64,     0,   -65,   -64,   -64,
     -64,   -64,   -64,   -64,   -65,     0,   -69,   -65,   -65,   -65,
     -65,   -65,   -65,   -69,     0,   -68,   -69,   -69,   -69,   -69,
     -69,   -69,   -68,     0,   -67,   -68,   -68,   -68,   -68,   -68,
     -68,   -67,     0,   -70,   -67,   -67,   -67,   -67,   -67,   -67,
     -70,     0,   -61,   -70,   -70,   -70,   -70,   -70,   -70,   -61,
       0,   -63,   -61,    92,   -61,   -61,   -61,   -61,   -63,     0,
     -41,   -63,   -63,   -63,   -63,   -63,   -63,   -41,     0,     0,
     -41,   -41,   -41,   -41,   -41,   -41,   -75,     0,     0,     0,
       0,   -75,     0,     0,     0,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -76,     0,     0,     0,     0,   -76,     0,     0,
       0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -71,     0,
       0,     0,     0,   -71,     0,     0,     0,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -62,     0,     0,     0,     0,   -62,
       0,     0,     0,     0,   -62,   231,   -62,   -62,   -62,   -62,
     -64,     0,     0,     0,     0,   -64,     0,     0,     0,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -65,     0,     0,     0,
       0,   -65,     0,     0,     0,     0,   -65,   -65,   -65,   -65,
     -65,   -65,   -69,     0,     0,     0,     0,   -69,     0,     0,
       0,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -68,     0,
       0,     0,     0,   -68,     0,     0,     0,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -67,     0,     0,     0,     0,   -67,
       0,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -70,     0,     0,     0,     0,   -70,     0,     0,     0,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -61,     0,     0,     0,
       0,   -61,     0,     0,     0,     0,   -61,   231,   -61,   -61,
     -61,   -61,   -63,     0,     0,     0,     0,   -63,     0,     0,
       0,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -41,     0,
       0,     0,     0,   -41,     0,     0,     0,     0,   -41,   -41,
     -41,   -41,   -41,   -41
};

static const yytype_int16 yycheck[] =
{
       0,   143,   294,    26,     4,    28,     0,     8,     9,    20,
     302,     7,    23,     7,    37,    21,     3,     4,     5,    13,
      43,    26,     9,    28,    30,    21,    26,    26,    28,    28,
      17,   130,    21,    20,    21,    21,    22,   218,    25,    26,
      29,    30,    31,     0,    30,    26,    16,    28,    71,    72,
      73,   232,    75,    23,    77,   197,    26,    27,    28,    29,
      30,    31,    23,    26,    20,    28,     0,    23,     7,    30,
      31,   363,     7,     7,    26,    80,    28,     9,     3,     4,
       5,    26,    21,    28,     9,     1,    21,     9,     8,     9,
       0,     7,    17,    21,   117,    20,   119,     7,    23,     0,
      25,    26,    23,    13,    21,    22,     7,   130,   131,    30,
      31,   134,   211,    26,   119,    28,   139,     0,     7,   119,
     119,     0,    21,    26,     7,    28,   131,    20,     7,   134,
      13,   131,   131,     0,   134,   134,   159,    23,   119,    20,
       7,    26,    20,    28,     0,     0,    13,    20,     0,   248,
     131,     7,     7,   134,   177,     7,   119,    13,     3,     4,
       5,     6,     0,    23,     9,     8,     9,   119,   131,     7,
     193,   134,    17,   315,   119,    20,     9,    23,     9,   131,
      25,    26,   134,    29,    30,    31,   131,    16,   211,   134,
     213,    20,   215,    23,    23,   218,   219,    26,    27,    28,
      29,    30,    31,    21,    22,    21,   119,     0,     0,   232,
     233,   216,    30,    31,     7,     7,   119,     0,   131,     0,
      13,   134,    21,    22,     7,   248,     7,   250,   131,   252,
      16,   134,    13,    23,   119,    23,   335,    23,    23,   338,
      26,    27,    28,    29,    30,    31,   131,   346,   253,   134,
       1,    21,     3,     4,     5,    23,     7,    21,     9,    10,
      11,    12,    13,    14,    15,    21,    17,    18,    19,    20,
      23,     0,   295,    21,    25,    26,     0,   376,     7,    21,
     303,    21,    22,     7,    13,     3,     4,     5,   311,    13,
     295,     9,    23,     0,    21,   295,   295,    23,   303,    17,
       7,    21,    20,   303,   303,    23,    13,    25,    26,    29,
      30,    31,   335,    23,   295,   338,    16,   340,    20,   342,
      20,    21,   303,   346,   347,    21,    26,    27,    28,    29,
      30,    31,   295,    20,    30,    31,    20,     0,   343,   344,
     303,   364,   347,   295,     7,   368,    20,   347,   347,    21,
     295,   303,    23,   376,   377,    20,   361,   380,   303,   364,
       0,    21,    22,   368,   364,   364,   347,     7,   368,   368,
      30,    31,   377,    13,    20,   380,    21,   377,   377,    20,
     380,   380,   295,   364,   347,    30,    31,   368,    21,    22,
     303,     0,   295,    21,    22,   347,   377,    20,     7,   380,
     303,   364,   347,    23,    13,   368,     9,     3,     4,     5,
     295,    23,   364,     9,   377,     0,   368,   380,   303,   364,
       0,    17,     7,   368,    20,   377,    23,     7,   380,    25,
      26,     9,   377,    13,   347,   380,    41,    21,    43,    44,
      45,    23,    21,    22,   347,    21,     3,     4,     5,     6,
      23,   364,     9,    21,    22,   368,    29,    30,    31,     9,
      17,   364,   347,    20,   377,   368,    71,   380,    25,    26,
      75,     0,    77,     0,   377,    23,    16,   380,     7,   364,
       7,    21,    22,   368,    13,     9,    26,    92,    28,    29,
      30,    31,   377,    23,     1,   380,     3,     4,     5,     0,
       7,    23,     9,    10,    11,    12,     7,    14,    15,     0,
      17,    18,   117,    20,     0,    43,     7,    21,    25,    26,
       1,     7,     3,     4,     5,   130,     7,    13,     9,    10,
      11,    12,    13,    14,    15,     0,    17,    18,    19,    20,
       8,     9,     7,    71,    25,    26,    21,    75,    13,    77,
      21,    22,    16,   158,   159,   160,   161,    21,    22,    21,
      22,    21,    26,    27,    28,    29,    30,    31,     0,     0,
       0,   176,   177,   178,   179,     7,     7,     7,    21,    22,
       0,    13,     1,    13,     3,     4,     5,     7,     7,   117,
       9,    10,    11,    12,    13,    14,    15,    21,    17,    18,
      19,    20,   130,    21,     0,     0,    25,    26,   213,     0,
     215,     7,     7,   218,   219,    21,     7,    13,    13,    21,
     225,   226,   227,   228,   229,   230,   231,   232,   233,    23,
     158,   159,   160,   161,   239,   240,   241,   242,   243,   244,
     245,     8,     9,     8,     9,   250,     0,   252,   176,   177,
     178,   179,     1,     7,     3,     4,     5,    23,     7,    13,
       9,    10,    11,    12,    13,    14,    15,    23,    17,    18,
      19,    20,     3,     4,     5,     6,    25,    26,     9,    21,
      21,     0,    21,    21,    20,   213,    17,   215,     7,    20,
     218,   219,    20,    43,    25,    26,    23,   225,   226,   227,
     228,   229,   230,   231,   232,   233,    23,    23,    23,    23,
      23,   239,   240,   241,   242,   243,   244,   245,    20,    16,
      20,    71,   250,     9,   252,    75,    23,    77,    23,    26,
     335,    28,    29,    30,    31,   340,     0,   342,    23,     0,
      23,   346,    23,     7,     9,     1,     7,     3,     4,     5,
      43,     7,    13,     9,    10,    11,    12,    13,    14,    15,
      23,    17,    18,    19,    20,    23,    21,   117,    21,    25,
      26,   376,    30,     3,     4,     5,     0,    23,    71,     9,
     130,     0,    75,     7,    77,     0,     0,    17,     7,    21,
      20,    21,     7,     7,    21,    25,    26,     0,    91,     3,
       4,     5,     6,    21,     7,     9,    23,   335,   158,   159,
     160,   161,   340,    17,   342,    21,    20,     4,   346,    21,
      16,    25,    26,    23,   117,    21,   176,   177,   178,   179,
      26,    27,    28,    29,    30,    31,     1,   130,     3,     4,
       5,    23,     7,    23,     9,    10,    11,    12,   376,    14,
      15,    23,    17,    18,    19,    20,    28,    29,    30,    31,
      25,    26,    18,   213,    21,   215,   159,    27,   218,   219,
     117,    28,    29,    30,    31,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   177,    -1,    -1,    -1,    -1,   239,
     240,   241,   242,   243,   244,   245,    43,    -1,    -1,    16,
     250,    -1,   252,    20,    21,    22,    -1,    24,    21,    26,
      27,    28,    29,    30,    31,    28,    29,    30,    31,    -1,
     213,    -1,   215,    -1,    71,   218,   219,    -1,    75,    -1,
      77,    23,   225,   226,   227,   228,   229,   230,    30,   232,
     233,    43,    89,    90,    -1,     0,   239,   240,   241,   242,
     243,   244,     7,    -1,     3,     4,     5,   250,    23,   252,
       9,    -1,    -1,    28,    29,    30,    31,    -1,    17,    71,
     117,    20,    -1,    75,    16,    77,    25,    26,    -1,    21,
      -1,    -1,    -1,   130,    26,   335,    28,    29,    30,    31,
     340,     0,   342,    -1,     0,    -1,   346,    -1,     7,    -1,
       1,     7,     3,     4,     5,    -1,     7,    -1,     9,    10,
      11,    12,   159,    14,    15,   117,    17,    18,    19,    20,
      -1,     3,     4,     5,    25,    26,   376,     9,   130,     0,
     177,    21,    22,    -1,    -1,    17,     7,    -1,    20,    29,
      30,    31,   335,    25,    26,    -1,    -1,   340,    16,   342,
      -1,    -1,    20,   346,    -1,    23,    24,   159,    26,    27,
      28,    29,    30,    31,    -1,    -1,   213,     0,   215,    -1,
      -1,   218,   219,    -1,     7,   177,    -1,    -1,   225,   226,
     227,   228,   229,   376,    -1,   232,   233,    43,    -1,    -1,
      21,    22,   239,   240,   241,   242,   243,    28,    29,    30,
      31,    23,    -1,   250,    -1,   252,    28,    29,    30,    31,
      -1,   213,    -1,   215,    -1,    71,   218,   219,    -1,    75,
      -1,    77,    -1,   225,   226,   227,   228,   229,    -1,    -1,
     232,   233,    88,    -1,    21,    22,    -1,   239,   240,   241,
     242,   243,    29,    30,    31,    43,    -1,    -1,   250,    -1,
     252,    -1,    -1,     3,     4,     5,    21,    22,    -1,     9,
      -1,   117,    -1,    28,    29,    30,    31,    17,    -1,    -1,
      20,    -1,    -1,    71,   130,    25,    26,    75,    -1,    77,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,   335,    87,
       9,    -1,    -1,   340,    -1,   342,    -1,    -1,    17,   346,
      -1,    20,    -1,   159,    -1,    -1,    25,    26,     3,     4,
       5,    -1,    -1,    -1,     9,    -1,    -1,    43,    -1,   117,
      -1,   177,    17,    -1,    -1,    20,    -1,    21,    22,   376,
      25,    26,   130,   335,    28,    29,    30,    31,   340,    -1,
     342,    -1,    -1,    -1,   346,    71,    21,    22,    -1,    75,
      -1,    77,    -1,    28,    29,    30,    31,   213,    21,   215,
      -1,   159,   218,   219,    -1,    28,    29,    30,    31,   225,
     226,   227,    -1,    -1,   376,    43,   232,   233,    -1,   177,
      21,    22,    -1,   239,   240,   241,    -1,    28,    29,    30,
      31,   117,   118,    23,   250,    -1,   252,    -1,    28,    29,
      30,    31,    -1,    71,   130,    23,    -1,    75,    -1,    77,
      28,    29,    30,    31,    -1,   213,    21,   215,    86,    -1,
     218,   219,    21,    28,    29,    30,    31,   225,   226,    28,
      29,    30,    31,   159,   232,   233,    -1,    -1,    -1,    -1,
      -1,   239,   240,    -1,    -1,    -1,    -1,    -1,    -1,   117,
      -1,   177,   250,    -1,   252,    -1,    -1,     1,    -1,     3,
       4,     5,   130,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    -1,    -1,   335,
      -1,    25,    26,    -1,   340,    -1,   342,   213,    -1,   215,
     346,   159,   218,   219,    -1,    -1,    -1,    -1,    -1,    -1,
      16,    -1,    -1,    -1,    20,    21,   232,   233,    24,   177,
      26,    27,    28,    29,    30,    31,    -1,    16,    -1,    -1,
     376,    20,    21,    22,   250,    -1,   252,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,   335,    -1,    -1,
      -1,    -1,   340,    -1,   342,   213,    -1,   215,   346,    -1,
     218,   219,    -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,
      -1,    -1,    -1,    -1,   232,   233,    -1,    -1,   294,    -1,
      -1,   239,    -1,    -1,    -1,    -1,   302,     1,   376,     3,
       4,     5,   250,     7,   252,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,   335,
      -1,    -1,    -1,    -1,   340,     1,   342,     3,     4,     5,
     346,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    -1,    -1,   363,    -1,    25,
      26,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
     376,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    -1,    -1,   335,    -1,    25,
      26,    -1,   340,     1,   342,     3,     4,     5,   346,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    25,    26,    -1,
      -1,     1,    -1,     3,     4,     5,    -1,     7,   376,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    25,    26,     1,    -1,     3,
       4,     5,    -1,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    25,    26,     1,    -1,     3,     4,     5,    -1,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    25,    26,     1,
      -1,     3,     4,     5,    -1,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    25,    26,     1,    -1,     3,     4,     5,
      -1,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    25,
      26,     1,    -1,     3,     4,     5,    -1,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    25,    26,     1,    -1,     3,
       4,     5,    -1,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    25,    26,     1,    -1,     3,     4,     5,    -1,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    25,    26,     1,
      -1,     3,     4,     5,    -1,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    25,    26,     1,    -1,     3,     4,     5,
      -1,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    25,
      26,     1,    -1,     3,     4,     5,    -1,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    25,    26,     1,    -1,     3,
       4,     5,    -1,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    -1,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    25,    26,     1,    -1,     3,     4,     5,    -1,     7,
      -1,     9,    10,    11,    12,    -1,    14,    15,    -1,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    25,    26,     1,
      -1,     3,     4,     5,    -1,     7,    -1,     9,    10,    11,
      12,    -1,    14,    15,    -1,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    25,    26,     1,    -1,     3,     4,     5,
      -1,     7,    -1,     9,    10,    11,    12,    -1,    14,    15,
      -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    25,
      26,     1,    -1,     3,     4,     5,    -1,     7,    -1,     9,
      10,    11,    12,    -1,    14,    15,    -1,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    25,    26,     1,    -1,     3,
       4,     5,    -1,     7,    -1,     9,    10,    11,    12,    -1,
      14,    15,    -1,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    25,    26,     1,    -1,     3,     4,     5,    -1,     7,
      -1,     9,    10,    11,    12,    -1,    14,    15,    -1,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    25,    26,     1,
      -1,     3,     4,     5,    -1,     7,    -1,     9,    10,    11,
      12,    -1,    14,    15,    -1,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    25,    26,     1,    -1,     3,     4,     5,
      -1,     7,    -1,     9,    10,    11,    12,    -1,    14,    15,
      -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    25,
      26,     1,    -1,     3,     4,     5,    -1,     7,    -1,     9,
      10,    11,    12,    -1,    14,    15,    -1,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    25,    26,     1,    -1,     3,
       4,     5,    -1,     7,    -1,     9,    10,    11,    12,    -1,
      14,    15,    -1,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    25,    26,     1,    -1,     3,     4,     5,    -1,     7,
      -1,     9,    10,    11,    12,    -1,    14,    15,    -1,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    25,    26,     1,
      -1,     3,     4,     5,    -1,     7,    -1,     9,    10,    11,
      12,    -1,    14,    15,    -1,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    25,    26,     1,    -1,     3,     4,     5,
      -1,     7,    -1,     9,    10,    11,    12,    -1,    14,    15,
      -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    25,
      26,     1,    -1,     3,     4,     5,    -1,     7,    -1,     9,
      10,    11,    12,    -1,    14,    15,    -1,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    25,    26,     1,    -1,     3,
       4,     5,    -1,     7,    -1,     9,    10,    11,    12,    -1,
      14,    15,    -1,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    25,    26,     1,    -1,     3,     4,     5,    -1,     7,
      -1,     9,    10,    11,    12,    -1,    14,    15,    -1,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    25,    26,     1,
      -1,     3,     4,     5,    -1,     7,    -1,     9,    10,    11,
      12,    -1,    14,    15,    -1,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    25,    26,     1,    -1,     3,     4,     5,
      -1,     7,    -1,     9,    10,    11,    12,    -1,    14,    15,
      -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    25,
      26,     1,    -1,     3,     4,     5,    -1,     7,    -1,     9,
      10,    11,    12,    -1,    14,    15,    -1,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    25,    26,     1,    -1,     3,
       4,     5,    -1,     7,    -1,     9,    10,    11,    12,    -1,
      14,    15,    -1,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    25,    26,     1,    -1,     3,     4,     5,    -1,     7,
      -1,     9,    10,    11,    12,    -1,    14,    15,    -1,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    25,    26,     1,
      -1,     3,     4,     5,    -1,     7,    -1,     9,    10,    11,
      12,    -1,    14,    15,    -1,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    25,    26,     1,    -1,     3,     4,     5,
      -1,     7,    -1,     9,    10,    11,    12,    -1,    14,    15,
      -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    25,
      26,     1,    -1,     3,     4,     5,    -1,     7,    -1,     9,
      10,    11,    12,    -1,    14,    15,    -1,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    25,    26,     1,    -1,     3,
       4,     5,    -1,     7,    -1,     9,    10,    11,    12,    -1,
      14,    15,    -1,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    25,    26,     1,    -1,     3,     4,     5,    -1,     7,
      -1,     9,    10,    11,    12,    -1,    14,    15,    -1,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    25,    26,     1,
      -1,     3,     4,     5,    -1,     7,    -1,     9,    10,    11,
      12,    -1,    14,    15,    -1,    17,    18,    -1,    20,    -1,
      16,    -1,    -1,    25,    26,    21,    22,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    16,    -1,    -1,    -1,
      -1,    21,    22,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    31,    16,    -1,    -1,    -1,    -1,    21,    22,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    31,    16,    -1,
      -1,    -1,    -1,    21,    22,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    31,    16,    -1,    -1,    -1,    -1,    21,
      22,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      16,    -1,    -1,    -1,    -1,    21,    22,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    16,    -1,    -1,    -1,
      -1,    21,    22,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    31,    16,    -1,    -1,    -1,    -1,    21,    22,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    31,    16,    -1,
      -1,    -1,    -1,    21,    22,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    31,    16,    -1,    -1,    -1,    -1,    21,
      22,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      16,    -1,    -1,    -1,    -1,    21,    22,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    16,    -1,    -1,    -1,
      -1,    21,    22,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    31,    16,    -1,    -1,    -1,    -1,    21,    22,    -1,
      -1,    16,    26,    27,    28,    29,    30,    31,    23,    -1,
      16,    26,    27,    28,    29,    30,    31,    23,    -1,    16,
      26,    27,    28,    29,    30,    31,    23,    -1,    16,    26,
      27,    28,    29,    30,    31,    23,    -1,    16,    26,    27,
      28,    29,    30,    31,    23,    -1,    16,    26,    27,    28,
      29,    30,    31,    23,    -1,    16,    26,    27,    28,    29,
      30,    31,    23,    -1,    16,    26,    27,    28,    29,    30,
      31,    23,    -1,    16,    26,    27,    28,    29,    30,    31,
      23,    -1,    16,    26,    27,    28,    29,    30,    31,    23,
      -1,    16,    26,    27,    28,    29,    30,    31,    23,    -1,
      16,    26,    27,    28,    29,    30,    31,    23,    -1,    -1,
      26,    27,    28,    29,    30,    31,    16,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    31,    16,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    31,    16,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    31,    16,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      16,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    16,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    31,    16,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    31,    16,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    31,    16,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      16,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    16,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    31,    16,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    31,    16,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     7,    34,    35,    36,    40,    68,     8,     9,
       0,    36,     9,    20,    23,    20,    23,    41,    42,     7,
      43,    44,    45,    43,     8,     9,    21,    22,    21,     9,
       1,     3,     4,     5,     7,     9,    10,    11,    12,    14,
      15,    17,    18,    20,    25,    26,    37,    39,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    45,    39,     8,
       9,    20,    24,    20,    53,    20,    20,    20,     9,    67,
      38,    39,    53,    67,    67,    23,    30,    31,    29,    28,
      16,    26,    27,     9,    53,    55,    56,    57,    53,    53,
      58,    23,    53,     9,     6,    53,    19,    39,    21,    61,
      62,    63,    64,    64,    66,    67,    21,    22,    23,    21,
      21,    21,    21,    57,    59,    60,    39,    23,    23,    23,
      23,    13,    58,    39,    21,    39,     1,     7,    10,    11,
      12,    14,    15,    18,    37,    46,    47,    48,    49,    50,
      51,    52,    53,    68,     3,     4,     5,     9,    17,    20,
      25,    26,    54,    60,    61,    62,    63,    64,    65,    66,
      67,    69,     3,     4,     5,     9,    17,    20,    25,    26,
      54,    60,    61,    62,    63,    64,    65,    66,    67,    69,
       1,     7,    10,    11,    12,    14,    15,    18,    37,    46,
      47,    48,    49,    50,    51,    52,    53,    68,    53,     8,
       9,    20,    53,    20,    20,    20,    38,    23,    20,    24,
       9,    67,    53,    67,    67,    30,    31,    29,    28,    16,
      26,    27,    20,    24,     9,    67,    53,    67,    67,    30,
      31,    29,    28,    16,    26,    27,     8,     9,    20,    53,
      20,    20,    20,    38,    23,     9,    23,    58,    23,    53,
       9,     6,    53,    19,    55,    53,    21,    61,    62,    63,
      64,    64,    66,    67,    55,    53,    21,    61,    62,    63,
      64,    64,    66,    67,     9,    23,    58,    23,    53,     9,
       6,    53,    19,    23,    23,    21,    21,    21,    21,    21,
      21,    23,    23,    21,    21,    21,    21,    59,     1,     7,
      10,    11,    12,    14,    15,    18,    37,    39,    46,    47,
      48,    49,    50,    51,    52,    53,    68,    23,    23,    23,
      59,    39,    23,    23,    23,    23,     8,     9,    20,    53,
      20,    20,    20,    38,    13,    23,    23,    13,    58,     9,
      23,    58,    23,    53,     9,     6,    53,    19,    39,    58,
      39,    21,    23,    23,    21,    21,    21,    21,    21,    39,
      59,    39,    23,    23,    23,    39,    23,    13,    58,    39,
      21,    39
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    35,    35,    35,    36,    36,    37,    38,
      38,    39,    39,    39,    39,    39,    39,    39,    39,    41,
      40,    42,    40,    43,    43,    44,    44,    45,    45,    46,
      47,    47,    48,    49,    49,    50,    51,    51,    52,    53,
      53,    54,    55,    55,    56,    56,    57,    58,    58,    59,
      59,    60,    60,    61,    61,    62,    62,    63,    63,    64,
      64,    65,    65,    66,    66,    67,    67,    67,    67,    67,
      67,    67,    68,    68,    69,    69,    69
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       7,     0,     8,     0,     1,     3,     1,     2,     3,     9,
       5,     7,     2,     1,     1,     5,     5,     5,     3,     3,
       1,     4,     0,     1,     3,     1,     1,     0,     1,     0,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     2,     2,     2,
       3,     1,     3,     4,     1,     1,     1
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
  case 2: /* program: declarations  */
#line 130 "./src/parser.y"
                   {
        root_node = (yyvsp[0].node);
    }
#line 2216 "parser.tab.c"
    break;

  case 3: /* declarations: declarations declaration  */
#line 136 "./src/parser.y"
                               {
        (yyval.node) = new_node("declarations", "declarations", 0, "");
        (yyval.node)->child[0] = (yyvsp[-1].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2226 "parser.tab.c"
    break;

  case 4: /* declarations: declaration  */
#line 141 "./src/parser.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2234 "parser.tab.c"
    break;

  case 5: /* declarations: error  */
#line 144 "./src/parser.y"
            { parsing_errors++; }
#line 2240 "parser.tab.c"
    break;

  case 6: /* declaration: function_declaration_statement  */
#line 148 "./src/parser.y"
                                     {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2248 "parser.tab.c"
    break;

  case 7: /* declaration: variable_declaration_statement  */
#line 151 "./src/parser.y"
                                     {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2256 "parser.tab.c"
    break;

  case 8: /* block: '{' statements '}'  */
#line 157 "./src/parser.y"
                         {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2264 "parser.tab.c"
    break;

  case 9: /* statements: statements statement  */
#line 163 "./src/parser.y"
                           {
        (yyval.node) = new_node("statements", "statements", 0, "");
        (yyval.node)->child[0] = (yyvsp[-1].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2274 "parser.tab.c"
    break;

  case 10: /* statements: statement  */
#line 168 "./src/parser.y"
                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2282 "parser.tab.c"
    break;

  case 11: /* statement: expression_statement  */
#line 174 "./src/parser.y"
                           {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2290 "parser.tab.c"
    break;

  case 12: /* statement: io_statement  */
#line 177 "./src/parser.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2298 "parser.tab.c"
    break;

  case 13: /* statement: return_statement  */
#line 180 "./src/parser.y"
                       {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2306 "parser.tab.c"
    break;

  case 14: /* statement: variable_declaration_statement  */
#line 183 "./src/parser.y"
                                     {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2314 "parser.tab.c"
    break;

  case 15: /* statement: for_statement  */
#line 186 "./src/parser.y"
                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2322 "parser.tab.c"
    break;

  case 16: /* statement: if_else_statement  */
#line 189 "./src/parser.y"
                        {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2330 "parser.tab.c"
    break;

  case 17: /* statement: block  */
#line 192 "./src/parser.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2338 "parser.tab.c"
    break;

  case 18: /* statement: error  */
#line 195 "./src/parser.y"
            { parsing_errors++; }
#line 2344 "parser.tab.c"
    break;

  case 19: /* $@1: %empty  */
#line 199 "./src/parser.y"
                               {
        
        scope_id++;
        top++;
        push_scope(top, scope_id, scope_stack);
        
        T_Symbol sym = symbol(
            (yyvsp[-2].token).content, 
            (yyvsp[-1].token).content, 
            "function", 
            (yyvsp[-1].token).scope, 
            (yyvsp[-1].token).line_idx, 
            (yyvsp[-1].token).column_idx,
            0
        );
        if(check_redeclared(symbol_table, (yyvsp[-1].token).content, symbol_table_idx, (yyvsp[-1].token).scope)) {
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Function or variable '%s' already declared\n"reset, (yyvsp[-1].token).line_idx, (yyvsp[-1].token).column_idx, (yyvsp[-1].token).content);
        }

        insert_symbol(symbol_table, symbol_table_idx, sym);
        current_function_idx = symbol_table_idx;
        symbol_table_idx++;
        symbol_table_size++;
    }
#line 2373 "parser.tab.c"
    break;

  case 20: /* function_declaration_statement: SIMPLE_TYPE IDENTIFIER '(' $@1 parameters_optative ')' statement  */
#line 223 "./src/parser.y"
                                      {
        (yyval.node) = new_node("function_declaration_statement", "func_declaration", 0, "");
        (yyval.node)->child[0] = new_node("type", (yyvsp[-6].token).content, 1, "");
        (yyval.node)->child[1] = new_node("id", (yyvsp[-5].token).content, 1, "");
        (yyval.node)->child[2] = (yyvsp[-2].node);
        (yyval.node)->child[3] = (yyvsp[0].node);
        pop_scope(top, scope_stack);
        if(top > 0) top--;
    }
#line 2387 "parser.tab.c"
    break;

  case 21: /* $@2: %empty  */
#line 232 "./src/parser.y"
                                           {
        scope_id++;
        top++;
        push_scope(top, scope_id, scope_stack);
        char type[100];
        strcpy(type, (yyvsp[-3].token).content);
        strcat(type, " ");
        strcat(type, (yyvsp[-2].token).content);
        T_Symbol sym = symbol(
            type, 
            (yyvsp[-1].token).content, 
            "function", 
            (yyvsp[-1].token).scope, 
            (yyvsp[-1].token).line_idx, 
            (yyvsp[-1].token).column_idx,
            0
        );
        if(check_redeclared(symbol_table, (yyvsp[-1].token).content, symbol_table_idx, (yyvsp[-1].token).scope)) {
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Function or variable '%s' already declared\n"reset, (yyvsp[-1].token).line_idx, (yyvsp[-1].token).column_idx, (yyvsp[-1].token).content);
        }
    
        insert_symbol(symbol_table, symbol_table_idx, sym);
        current_function_idx = symbol_table_idx;
        symbol_table_idx++;
        symbol_table_size++;
        
    }
#line 2419 "parser.tab.c"
    break;

  case 22: /* function_declaration_statement: SIMPLE_TYPE LIST_TYPE IDENTIFIER '(' $@2 parameters_optative ')' statement  */
#line 258 "./src/parser.y"
                                        {
        char type[100];
        strcpy(type, (yyvsp[-7].token).content);
        strcat(type, " ");
        strcat(type, (yyvsp[-6].token).content);
           
        (yyval.node) = new_node("function_declaration_statement", "func_declaration", 0, "");
        (yyval.node)->child[0] = new_node("type", type, 1, "");
        (yyval.node)->child[1] = new_node("id", (yyvsp[-5].token).content, 1, "");
        (yyval.node)->child[2] = (yyvsp[-2].node);
        (yyval.node)->child[3] = (yyvsp[0].node);
        pop_scope(top, scope_stack);
        if(top > 0) top--;
    }
#line 2438 "parser.tab.c"
    break;

  case 23: /* parameters_optative: %empty  */
#line 275 "./src/parser.y"
             {
        (yyval.node) = NULL;
    }
#line 2446 "parser.tab.c"
    break;

  case 24: /* parameters_optative: parameters  */
#line 278 "./src/parser.y"
                 {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2454 "parser.tab.c"
    break;

  case 25: /* parameters: parameters ',' parameter  */
#line 284 "./src/parser.y"
                               {
        (yyval.node) = new_node("parameters", "params", 0, "");
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2464 "parser.tab.c"
    break;

  case 26: /* parameters: parameter  */
#line 289 "./src/parser.y"
                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2472 "parser.tab.c"
    break;

  case 27: /* parameter: SIMPLE_TYPE IDENTIFIER  */
#line 295 "./src/parser.y"
                             {
        T_Symbol sym = symbol(
            (yyvsp[-1].token).content, 
            (yyvsp[0].token).content, 
            "parameter", 
            scope_stack[top], 
            (yyvsp[0].token).line_idx, 
            (yyvsp[0].token).column_idx,
            0
        );
        increment_params_number(symbol_table, current_function_idx);
        insert_symbol(symbol_table, symbol_table_idx, sym);
        symbol_table_idx++;
        symbol_table_size++;

        (yyval.node) = new_node("function_parameter", "function_param", 0, "");
        (yyval.node)->child[0] = new_node("type", (yyvsp[-1].token).content, 1, "");
        (yyval.node)->child[1] = new_node("id", (yyvsp[0].token).content, 1, "");
    }
#line 2496 "parser.tab.c"
    break;

  case 28: /* parameter: SIMPLE_TYPE LIST_TYPE IDENTIFIER  */
#line 314 "./src/parser.y"
                                       {
        char type[100];
        strcpy(type, (yyvsp[-2].token).content);
        strcat(type, " ");
        strcat(type, (yyvsp[-1].token).content);
        T_Symbol sym = symbol(
            type, 
            (yyvsp[0].token).content, 
            "parameter", 
            (yyvsp[0].token).scope, 
            (yyvsp[0].token).line_idx, 
            (yyvsp[0].token).column_idx,
            0
        );
        increment_params_number(symbol_table, current_function_idx);
        insert_symbol(symbol_table, symbol_table_idx, sym);
        symbol_table_idx++;
        symbol_table_size++;

        (yyval.node) = new_node("function_parameter", "function_param", 0, "");
        (yyval.node)->child[0] = new_node("type", type, 1, "");
        (yyval.node)->child[1] = new_node("id", (yyvsp[0].token).content, 1, "");
    }
#line 2524 "parser.tab.c"
    break;

  case 29: /* for_statement: RW_FOR '(' expression_optative ';' or_expression_optative ';' expression_optative ')' statement  */
#line 340 "./src/parser.y"
                                                                                                      {
        (yyval.node) = new_node("for_statement", (yyvsp[-8].token).content, 0, "");
        (yyval.node)->child[0] = (yyvsp[-6].node);
        (yyval.node)->child[1] = (yyvsp[-4].node);
        (yyval.node)->child[2] = (yyvsp[-2].node);
        (yyval.node)->child[3] = (yyvsp[0].node);
    }
#line 2536 "parser.tab.c"
    break;

  case 30: /* if_else_statement: RW_IF '(' expression ')' statement  */
#line 350 "./src/parser.y"
                                                    {
        (yyval.node) = new_node("if_else_statement", (yyvsp[-4].token).content, 0, "");
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2546 "parser.tab.c"
    break;

  case 31: /* if_else_statement: RW_IF '(' expression ')' statement RW_ELSE statement  */
#line 355 "./src/parser.y"
                                                           {
        (yyval.node) = new_node("if_else_statement", (yyvsp[-6].token).content, 0, "");
        (yyval.node)->child[0] = (yyvsp[-4].node);
        (yyval.node)->child[1] = (yyvsp[-2].node);
        (yyval.node)->child[2] = new_node("else_rw", (yyvsp[-1].token).content, 0, "");
        (yyval.node)->child[2]->child[0] = (yyvsp[0].node);
    }
#line 2558 "parser.tab.c"
    break;

  case 32: /* expression_statement: expression ';'  */
#line 364 "./src/parser.y"
                     {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2566 "parser.tab.c"
    break;

  case 33: /* io_statement: input_statement  */
#line 370 "./src/parser.y"
                      {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2574 "parser.tab.c"
    break;

  case 34: /* io_statement: output_statement  */
#line 373 "./src/parser.y"
                       {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2582 "parser.tab.c"
    break;

  case 35: /* input_statement: IO_READ '(' IDENTIFIER ')' ';'  */
#line 379 "./src/parser.y"
                                     {
        (yyval.node) = new_node("input_statement", (yyvsp[-4].token).content, 0, "");
        (yyval.node)->child[0] = new_node("identifier", (yyvsp[-2].token).content, 1, "");
        if(variable_unavailable(symbol_table, (yyval.node)->child[0], symbol_table_idx, top, scope_stack)) {
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Undefined reference to '%s'\n"reset, (yyvsp[-2].token).line_idx, (yyvsp[-2].token).column_idx, (yyvsp[-2].token).content);
        }
    }
#line 2594 "parser.tab.c"
    break;

  case 36: /* output_statement: IO_WRITE '(' expression ')' ';'  */
#line 389 "./src/parser.y"
                                      {
        (yyval.node) = new_node("output_statement", (yyvsp[-4].token).content, 0, "");
        (yyval.node)->child[0] = (yyvsp[-2].node);
    }
#line 2603 "parser.tab.c"
    break;

  case 37: /* output_statement: IO_WRITE '(' LIT_STRING ')' ';'  */
#line 393 "./src/parser.y"
                                      {
        (yyval.node) = new_node("output_statement", (yyvsp[-4].token).content, 0, "");
        (yyval.node)->child[0] = new_node("string_literal", (yyvsp[-2].token).content, 1, "");
    }
#line 2612 "parser.tab.c"
    break;

  case 38: /* return_statement: RW_RETURN expression ';'  */
#line 400 "./src/parser.y"
                               {
        (yyval.node) = new_node("return_statement", (yyvsp[-2].token).content, 0, "");
        (yyval.node)->child[0] = (yyvsp[-1].node);
    }
#line 2621 "parser.tab.c"
    break;

  case 39: /* expression: IDENTIFIER '=' expression  */
#line 407 "./src/parser.y"
                                {
        (yyval.node) = new_node("assignment_expression", "=", 0, "");
        (yyval.node)->child[0] = new_node("id", (yyvsp[-2].token).content, 1, "");
        (yyval.node)->child[1] = (yyvsp[0].node);
        if(variable_unavailable(symbol_table, (yyval.node)->child[0], symbol_table_idx, top, scope_stack)) {
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Undefined reference to '%s'\n"reset, (yyvsp[-2].token).line_idx, (yyvsp[-2].token).column_idx, (yyvsp[-2].token).content);
        }
        valid_binary_operation("=", (yyval.node), (yyval.node)->child[0], (yyval.node)->child[1]);
    }
#line 2635 "parser.tab.c"
    break;

  case 40: /* expression: or_expression  */
#line 416 "./src/parser.y"
                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2643 "parser.tab.c"
    break;

  case 41: /* function_call_expression: IDENTIFIER '(' function_arguments_optative ')'  */
#line 422 "./src/parser.y"
                                                     {
        (yyval.node) = new_node("function_call_expression", "function_call", 0, "");
        (yyval.node)->child[0] = new_node("id", (yyvsp[-3].token).content, 1, "");
        (yyval.node)->child[1] = (yyvsp[-1].node);
        
        if(variable_unavailable(symbol_table, (yyval.node)->child[0], symbol_table_idx, top, scope_stack)){
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Undefined reference to '%s'\n"reset, (yyvsp[-3].token).line_idx, (yyvsp[-3].token).column_idx, (yyvsp[-3].token).content);
        } else if(!check_number_of_params((yyvsp[-1].node), symbol_table, symbol_table_size, (yyvsp[-3].token).content)) {
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Invalid number of arguments passed to '%s'\n"reset, (yyvsp[-3].token).line_idx, (yyvsp[-3].token).column_idx, (yyvsp[-3].token).content);
        }
    }
#line 2659 "parser.tab.c"
    break;

  case 42: /* function_arguments_optative: %empty  */
#line 436 "./src/parser.y"
             {
        (yyval.node) = NULL;
    }
#line 2667 "parser.tab.c"
    break;

  case 43: /* function_arguments_optative: function_arguments  */
#line 439 "./src/parser.y"
                         {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2675 "parser.tab.c"
    break;

  case 44: /* function_arguments: function_arguments ',' function_argument  */
#line 445 "./src/parser.y"
                                               {
        (yyval.node) = new_node("function_arguments", "function_args", 0, "");
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2685 "parser.tab.c"
    break;

  case 45: /* function_arguments: function_argument  */
#line 450 "./src/parser.y"
                        {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2693 "parser.tab.c"
    break;

  case 46: /* function_argument: expression  */
#line 456 "./src/parser.y"
                 {
        (yyval.node) = new_node("function_args", "function_args", 0, "");
        (yyval.node)->child[0] = (yyvsp[0].node);
    }
#line 2702 "parser.tab.c"
    break;

  case 47: /* expression_optative: %empty  */
#line 463 "./src/parser.y"
             {
        (yyval.node) = NULL;
    }
#line 2710 "parser.tab.c"
    break;

  case 48: /* expression_optative: expression  */
#line 466 "./src/parser.y"
                 {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2718 "parser.tab.c"
    break;

  case 49: /* or_expression_optative: %empty  */
#line 472 "./src/parser.y"
             {
        (yyval.node) = NULL;
    }
#line 2726 "parser.tab.c"
    break;

  case 50: /* or_expression_optative: or_expression  */
#line 475 "./src/parser.y"
                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2734 "parser.tab.c"
    break;

  case 51: /* or_expression: or_expression LOGICAL_OP_OR and_expression  */
#line 481 "./src/parser.y"
                                                 {
        (yyval.node) = new_node("or_expression", (yyvsp[-1].token).content, 0, "");
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
        valid_binary_operation((yyvsp[-1].token).content, (yyval.node), (yyval.node)->child[0], (yyval.node)->child[1]);
    }
#line 2745 "parser.tab.c"
    break;

  case 52: /* or_expression: and_expression  */
#line 487 "./src/parser.y"
                     {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2753 "parser.tab.c"
    break;

  case 53: /* and_expression: and_expression LOGICAL_OP_AND equality_expression  */
#line 493 "./src/parser.y"
                                                        {
        (yyval.node) = new_node("and_expression", (yyvsp[-1].token).content, 0, "");
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
        valid_binary_operation((yyvsp[-1].token).content, (yyval.node), (yyval.node)->child[0], (yyval.node)->child[1]);
    }
#line 2764 "parser.tab.c"
    break;

  case 54: /* and_expression: equality_expression  */
#line 499 "./src/parser.y"
                          {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2772 "parser.tab.c"
    break;

  case 55: /* equality_expression: equality_expression EQUALITY_OP relational_expression  */
#line 505 "./src/parser.y"
                                                            {
        (yyval.node) = new_node("equality_expression", (yyvsp[-1].token).content, 0, "");
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
        valid_binary_operation((yyvsp[-1].token).content, (yyval.node), (yyval.node)->child[0], (yyval.node)->child[1]);
    }
#line 2783 "parser.tab.c"
    break;

  case 56: /* equality_expression: relational_expression  */
#line 511 "./src/parser.y"
                            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2791 "parser.tab.c"
    break;

  case 57: /* relational_expression: relational_expression RELATIONAL_OP list_expression  */
#line 517 "./src/parser.y"
                                                          {
        (yyval.node) = new_node("relational_expression", (yyvsp[-1].token).content, 0, "");
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);

        valid_binary_operation((yyvsp[-1].token).content, (yyval.node), (yyval.node)->child[0], (yyval.node)->child[1]);
    }
#line 2803 "parser.tab.c"
    break;

  case 58: /* relational_expression: list_expression  */
#line 524 "./src/parser.y"
                      {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2811 "parser.tab.c"
    break;

  case 59: /* list_expression: addition_expression BINARY_LIST_OP list_expression  */
#line 530 "./src/parser.y"
                                                         {
        (yyval.node) = new_node("list_expression", (yyvsp[-1].token).content, 0, "");
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);

        if(strcmp((yyvsp[-1].token).content, "<<") == 0 || strcmp((yyvsp[-1].token).content, ">>") == 0) {
            if(!expression_is_unary_function((yyvsp[-2].node), symbol_table, symbol_table_size)) {
                printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - First argument of '%s' must be a unary function\n"reset, (yyvsp[-1].token).line_idx, (yyvsp[-1].token).column_idx, (yyvsp[-1].token).content);
            }
        }

    }
#line 2828 "parser.tab.c"
    break;

  case 60: /* list_expression: addition_expression  */
#line 542 "./src/parser.y"
                          {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2836 "parser.tab.c"
    break;

  case 61: /* addition_expression: addition_expression ARITMETIC_OP_ADDITIVE multiplication_expression  */
#line 548 "./src/parser.y"
                                                                          {
        (yyval.node) = new_node("addition_expression", (yyvsp[-1].token).content, 0, "");
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);

        valid_binary_operation((yyvsp[-1].token).content, (yyval.node), (yyval.node)->child[0], (yyval.node)->child[1]);
    }
#line 2848 "parser.tab.c"
    break;

  case 62: /* addition_expression: multiplication_expression  */
#line 555 "./src/parser.y"
                                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2856 "parser.tab.c"
    break;

  case 63: /* multiplication_expression: multiplication_expression ARITMETIC_OP_MULTIPLICATIVE simple_value  */
#line 561 "./src/parser.y"
                                                                         {
        (yyval.node) = new_node("multiplication_expression", (yyvsp[-1].token).content, 0, "");
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
        valid_binary_operation((yyvsp[-1].token).content, (yyval.node), (yyval.node)->child[0], (yyval.node)->child[1]);
    }
#line 2867 "parser.tab.c"
    break;

  case 64: /* multiplication_expression: simple_value  */
#line 567 "./src/parser.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2875 "parser.tab.c"
    break;

  case 65: /* simple_value: constant  */
#line 573 "./src/parser.y"
               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2883 "parser.tab.c"
    break;

  case 66: /* simple_value: IDENTIFIER  */
#line 576 "./src/parser.y"
                 {
        (yyval.node) = new_node("identifier", (yyvsp[0].token).content, 1, "");
        if(variable_unavailable(symbol_table, (yyval.node), symbol_table_idx, top, scope_stack)){
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Undefined reference to '%s'\n"reset, (yyvsp[0].token).line_idx, (yyvsp[0].token).column_idx, (yyvsp[0].token).content);
        }
    }
#line 2894 "parser.tab.c"
    break;

  case 67: /* simple_value: ARITMETIC_OP_ADDITIVE simple_value  */
#line 582 "./src/parser.y"
                                         {
        (yyval.node) = new_node("simple_value_signed", (yyvsp[-1].token).content, 0, "");
        (yyval.node)->child[0] = (yyvsp[0].node);
        if(!valid_unary_operation((yyvsp[-1].token).content, (yyval.node))) {
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Invalid unary operation '%s' for operand type '%s'\n"reset, (yyvsp[-1].token).line_idx, (yyvsp[-1].token).column_idx, (yyvsp[-1].token).content, (yyvsp[0].node)->const_type);
        }
    }
#line 2906 "parser.tab.c"
    break;

  case 68: /* simple_value: '!' simple_value  */
#line 589 "./src/parser.y"
                       {
        (yyval.node) = new_node("simple_value_exclamation", "!", 0, "");
        (yyval.node)->child[0] = (yyvsp[0].node);
        if(!valid_unary_operation("!", (yyval.node))){
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Invalid unary operation '!' for operand type '%s'\n"reset, line_idx, column_idx, (yyvsp[0].node)->const_type);
        }
    }
#line 2918 "parser.tab.c"
    break;

  case 69: /* simple_value: UNARY_LIST_OP simple_value  */
#line 596 "./src/parser.y"
                                 {
        (yyval.node) = new_node("simple_value_unary", (yyvsp[-1].token).content, 0, "");
        (yyval.node)->child[0] = (yyvsp[0].node);
        if(!valid_unary_operation((yyvsp[-1].token).content, (yyval.node))) {
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Invalid unary operation '%s' for operand type '%s'\n"reset, (yyvsp[-1].token).line_idx, (yyvsp[-1].token).column_idx, (yyvsp[-1].token).content, (yyvsp[0].node)->const_type);
        }
    }
#line 2930 "parser.tab.c"
    break;

  case 70: /* simple_value: '(' expression ')'  */
#line 603 "./src/parser.y"
                         {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2938 "parser.tab.c"
    break;

  case 71: /* simple_value: function_call_expression  */
#line 606 "./src/parser.y"
                               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2946 "parser.tab.c"
    break;

  case 72: /* variable_declaration_statement: SIMPLE_TYPE IDENTIFIER ';'  */
#line 612 "./src/parser.y"
                                 {
        T_Symbol sym = symbol(
            (yyvsp[-2].token).content, 
            (yyvsp[-1].token).content, 
            "variable", 
            (yyvsp[-1].token).scope, 
            (yyvsp[-1].token).line_idx, 
            (yyvsp[-1].token).column_idx,
            0
        );
        
        if(check_redeclared(symbol_table, (yyvsp[-1].token).content, symbol_table_idx, (yyvsp[-1].token).scope)){
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Function or variable '%s' already declared\n"reset, (yyvsp[-1].token).line_idx, (yyvsp[-1].token).column_idx, (yyvsp[-1].token).content);
        }

        insert_symbol(symbol_table, symbol_table_idx, sym);
        symbol_table_idx++;
        symbol_table_size++;

        (yyval.node) = new_node("variable_declaration", "var_declaration", 0, "");
        (yyval.node)->child[0] = new_node("type", (yyvsp[-2].token).content, 1, "");
        (yyval.node)->child[1] = new_node("id", (yyvsp[-1].token).content, 1, "");

    }
#line 2975 "parser.tab.c"
    break;

  case 73: /* variable_declaration_statement: SIMPLE_TYPE LIST_TYPE IDENTIFIER ';'  */
#line 636 "./src/parser.y"
                                           {
        char type[100];
        strcpy(type, (yyvsp[-3].token).content);
        strcat(type, " ");
        strcat(type, (yyvsp[-2].token).content);
        T_Symbol sym = symbol(
            type, 
            (yyvsp[-1].token).content, 
            "variable", 
            (yyvsp[-1].token).scope, 
            (yyvsp[-1].token).line_idx, 
            (yyvsp[-1].token).column_idx,
            0
        );

        if(check_redeclared(symbol_table, (yyvsp[-1].token).content, symbol_table_idx, (yyvsp[-1].token).scope)){
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Function or variable '%s' already declared\n"reset, (yyvsp[-1].token).line_idx, (yyvsp[-1].token).column_idx, (yyvsp[-1].token).content);
        }

        insert_symbol(symbol_table, symbol_table_idx, sym);
        symbol_table_idx++;
        symbol_table_size++;

        (yyval.node) = new_node("variable_declaration", "var_declaration", 0, "");
        (yyval.node)->child[0] = new_node("type", type, 1, "");
        (yyval.node)->child[1] = new_node("id", (yyvsp[-1].token).content, 1, "");
    }
#line 3007 "parser.tab.c"
    break;

  case 74: /* constant: C_INTEGER  */
#line 666 "./src/parser.y"
                {
        (yyval.node) = new_node("const", (yyvsp[0].token).content, 1, "int");
    }
#line 3015 "parser.tab.c"
    break;

  case 75: /* constant: C_FLOAT  */
#line 669 "./src/parser.y"
              {
        (yyval.node) = new_node("const", (yyvsp[0].token).content, 1, "float");
    }
#line 3023 "parser.tab.c"
    break;

  case 76: /* constant: C_NIL  */
#line 672 "./src/parser.y"
            {
        (yyval.node) = new_node("const", (yyvsp[0].token).content, 1, "NIL");
    }
#line 3031 "parser.tab.c"
    break;


#line 3035 "parser.tab.c"

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

#line 677 "./src/parser.y"


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
