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
  YYSYMBOL_parameters_optative = 41,       /* parameters_optative  */
  YYSYMBOL_parameters = 42,                /* parameters  */
  YYSYMBOL_parameter = 43,                 /* parameter  */
  YYSYMBOL_for_statement = 44,             /* for_statement  */
  YYSYMBOL_if_else_statement = 45,         /* if_else_statement  */
  YYSYMBOL_expression_statement = 46,      /* expression_statement  */
  YYSYMBOL_io_statement = 47,              /* io_statement  */
  YYSYMBOL_input_statement = 48,           /* input_statement  */
  YYSYMBOL_output_statement = 49,          /* output_statement  */
  YYSYMBOL_return_statement = 50,          /* return_statement  */
  YYSYMBOL_expression = 51,                /* expression  */
  YYSYMBOL_function_call_expression = 52,  /* function_call_expression  */
  YYSYMBOL_function_arguments_optional = 53, /* function_arguments_optional  */
  YYSYMBOL_function_arguments = 54,        /* function_arguments  */
  YYSYMBOL_function_argument = 55,         /* function_argument  */
  YYSYMBOL_expression_optative = 56,       /* expression_optative  */
  YYSYMBOL_or_expression_optative = 57,    /* or_expression_optative  */
  YYSYMBOL_or_expression = 58,             /* or_expression  */
  YYSYMBOL_and_expression = 59,            /* and_expression  */
  YYSYMBOL_equality_expression = 60,       /* equality_expression  */
  YYSYMBOL_relational_expression = 61,     /* relational_expression  */
  YYSYMBOL_list_expression = 62,           /* list_expression  */
  YYSYMBOL_addition_expression = 63,       /* addition_expression  */
  YYSYMBOL_multiplication_expression = 64, /* multiplication_expression  */
  YYSYMBOL_simple_value = 65,              /* simple_value  */
  YYSYMBOL_variable_declaration_statement = 66, /* variable_declaration_statement  */
  YYSYMBOL_constant = 67                   /* constant  */
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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3109

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  379

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
       0,   121,   121,   127,   132,   138,   141,   147,   153,   158,
     164,   167,   170,   173,   176,   179,   182,   185,   189,   208,
     234,   237,   243,   248,   254,   271,   295,   306,   312,   322,
     328,   331,   337,   345,   350,   358,   366,   371,   374,   380,
     388,   391,   397,   402,   408,   414,   417,   423,   426,   432,
     437,   443,   448,   454,   459,   465,   470,   476,   481,   487,
     492,   498,   503,   509,   512,   515,   520,   525,   530,   536,
     554,   578,   581,   584
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
  "function_declaration_statement", "parameters_optative", "parameters",
  "parameter", "for_statement", "if_else_statement",
  "expression_statement", "io_statement", "input_statement",
  "output_statement", "return_statement", "expression",
  "function_call_expression", "function_arguments_optional",
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

#define YYPACT_NINF (-291)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-74)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       9,   153,    65,    10,    81,   100,   120,    20,    -9,  -291,
     122,    14,     6,   170,     6,   175,   285,    36,   200,   293,
      42,    78,   311,    57,    83,    57,   330,   202,   213,   850,
    1123,   514,   483,    82,   882,    99,   105,   152,  1023,  2557,
    1042,  1023,  1023,   227,   257,   310,   327,   350,   364,   404,
     486,   490,   115,   128,   337,   118,   630,   308,   977,   189,
    2768,  2777,   538,  2786,   504,   566,   167,   171,    15,   882,
     246,   180,  1042,   197,   281,  2795,  2804,  1881,  1907,   159,
    2813,  2822,   567,  1023,  1023,  1023,  1023,  1023,  1023,  1023,
     208,   547,   204,   571,   573,   214,   223,   229,   604,   235,
     262,   267,   270,   606,  1933,  2831,   230,   866,   358,  1149,
    3050,  2840,  2849,   276,  1088,   439,  2583,   289,   307,   325,
     618,   349,   686,    73,   720,   721,   736,   646,    57,   283,
     747,    57,   762,  1959,   665,   363,   882,   372,   375,   385,
    2557,  1985,  2011,  2037,  2063,  2089,  2115,  2141,  2167,   387,
    2193,   249,  2865,  2881,   920,  1118,  1042,  1118,  1118,   392,
       1,   113,   169,    75,  1218,  3061,  2897,  2913,  2929,   137,
    1239,  1425,   729,  1203,  1042,  1203,  1203,   743,    93,   436,
     763,   499,    63,    17,  2615,  2631,  2647,   111,   788,   396,
     882,   416,   418,   420,  2557,   139,   201,   295,   296,   328,
     362,   378,   408,   401,   412,   425,   443,   432,   246,   446,
    1042,   462,   709,  2219,  2245,    15,  1042,  2945,  2961,   459,
    2977,  2993,  1118,  1118,  1118,  1118,  1118,  1118,  1118,    15,
    1088,  2663,  2679,   464,  2695,  2711,  1203,  1203,  1203,  1203,
    1203,  1203,  1203,   474,   466,   246,   475,  1042,   491,   845,
    2271,   422,   479,  2297,   481,  2323,   518,   520,   526,   534,
    2349,   550,   556,  3009,   237,   627,   774,  3078,  3067,  3025,
    3041,   587,   750,  2727,   891,   809,   710,   954,   157,  2743,
    2759,   591,   426,   599,   447,   616,   655,   661,   679,   463,
    2375,   439,  2609,   601,   681,   683,   687,   820,   488,   439,
    2583,   696,   699,   723,   745,   539,   838,   759,   882,   766,
     779,   781,  2557,   676,  1292,  1367,  1393,  1419,  1463,  1491,
    1517,  1543,   760,  1569,  2401,  2427,  2453,   784,   524,   603,
     605,   662,   646,   617,   786,   246,   790,  1042,   806,   900,
    2479,  2557,  1595,   646,  2583,   796,   801,  1621,   821,  1647,
     808,   831,   832,   836,  1673,  2505,   837,   698,  2557,  1699,
     439,  2609,   840,   841,   844,  2583,  2531,   851,  1725,  1751,
    1777,  1803,   717,   646,  2609,   839,  1829,  2609,  1855
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -291,  -291,  -291,   865,     5,  -138,   -18,  -291,   861,  -291,
     858,    19,    29,    53,    76,   107,   117,   131,   -19,  1126,
    -203,  -291,   770,  -119,  -290,   989,  1015,   946,   787,   742,
     551,   596,   360,     0,   405
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,   141,    77,    78,     5,    17,    18,
      19,   142,   143,   144,   145,   146,   147,   148,   149,    53,
      92,    93,    94,    97,   121,    54,    55,    56,    57,    58,
      59,    60,    61,   150,    63
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,   304,   213,     6,    52,    44,    52,    65,   129,   327,
      -2,    12,   261,    16,    13,    71,     1,     1,   169,   170,
     171,    79,   -37,    62,   172,    62,   271,   -20,    43,    11,
      43,   222,   173,   -58,    14,   174,   -40,    15,   -58,   -58,
     175,   176,    45,   241,    45,   -58,   -58,   -58,   -58,    91,
      95,    96,    46,    99,    46,   102,   250,    23,    27,   104,
      28,    29,    30,    25,    31,     9,    32,    33,    34,    35,
     367,    36,    37,   -27,    38,    39,    47,    40,    47,   240,
     -27,    -4,    41,    42,   -56,   -56,   128,    26,    -4,   254,
      16,   -56,   -56,   -56,   -56,    91,   -54,   203,   123,    48,
      -5,    48,    70,   225,   -54,   -54,   -54,    -5,   205,    52,
     130,   -17,    52,   132,   -37,   -37,   204,   209,   -17,    72,
      -6,   195,    -3,   236,   -17,    73,   283,    -6,    62,    -3,
      49,    62,    49,    43,   -50,   196,    43,   219,    82,   -16,
      50,   -50,    50,   -50,   223,   197,   -16,    45,   -50,    84,
      45,   -38,   -16,   -71,    51,   233,    51,    46,   -71,   -71,
      46,     7,     8,   -71,   -71,   -71,   -71,   -71,   -71,   198,
     -69,   246,    74,   -57,   340,   -70,    90,   -69,   -57,   -57,
     105,    47,   -70,   241,    47,   -57,   -57,   -57,   -57,    96,
     -52,   256,   199,   259,    13,   104,    91,   262,   224,   -52,
     -52,   -14,   -17,    98,    48,   -58,   100,    48,   -14,   -17,
      91,   272,   -58,   345,   -14,    88,   348,   -58,   -58,   -58,
     -58,   -21,    24,   200,   356,   113,    96,   -16,   285,   -71,
     288,    15,   104,   201,   -16,    49,   -71,   -36,    49,   -71,
     -71,   -71,   -71,   -71,   -71,    50,   -46,   202,    50,    28,
      29,    30,   115,   -49,   375,    32,   116,   -18,   -49,    51,
     -49,    84,    51,    38,   -18,   -71,    40,   -49,   223,   -45,
     -71,    41,    42,   322,   314,   -71,   -71,   -71,   -71,   -71,
     -71,   203,   328,   117,   151,   152,   153,   101,   118,   336,
     154,   119,   323,    21,    22,   -15,   -10,   313,   155,   -39,
     204,   156,   -15,   -10,   131,   195,   157,   158,   -15,   -10,
     -14,   315,   124,   205,   -23,   -23,    96,   -14,   350,   196,
     353,   316,   104,   355,   205,   203,   357,   -15,   -11,   197,
     125,   -54,   -24,   -24,   -15,   -11,    86,   -54,   -54,   -54,
     366,   -11,   322,   368,   204,   317,   203,   372,   126,   195,
     -10,   -25,   -25,   198,   205,   322,   376,   -10,   322,   378,
     -37,   323,   -30,   196,   -11,   204,   313,    83,   318,   -30,
     195,   -11,   127,   197,   323,   -30,   199,   323,   -31,   313,
     315,   -53,   313,   208,   196,   -31,    86,   -53,   -53,   -53,
     316,   -31,   210,   315,   197,   211,   315,   198,    76,   319,
     167,    80,    81,   316,   -30,   212,   316,   200,   -12,   320,
     214,   -30,   -13,   -38,   317,   -12,   245,   201,   198,   -13,
     199,   -12,   -29,   321,   251,   -13,   -69,   317,   185,   -29,
     317,   202,   167,   -69,   167,   -29,   247,   318,   248,   -69,
     249,   199,    28,    29,    30,   168,   -46,   -35,    75,   112,
     318,   200,   252,   318,   -35,   253,    38,   -50,   -50,    40,
     -35,   201,   -47,    -7,    41,    42,   -50,   237,   319,   255,
      -7,   257,   200,   186,   185,   202,    -7,   168,   320,   168,
     263,   319,   201,   281,   319,   273,   -31,   167,   -70,   282,
     -12,   320,   321,   -31,   320,   -70,   202,   -12,   284,   -64,
     286,   -70,   290,    68,   291,   321,   -64,    69,   321,   -64,
     -64,   -64,   -64,   -64,   -64,   218,   167,   220,   221,   186,
     -54,   -54,    66,    67,   -27,   -22,   -22,   239,   -54,   -54,
     -54,   -27,   168,   232,   167,   234,   235,   344,   -13,   292,
     -17,   293,   -17,   -17,   -17,   -13,   -17,   294,   -17,   -17,
     -17,   -17,   -17,   -17,   -17,   295,   -17,   -17,   -17,   -17,
     168,   168,   168,   168,   -17,   -17,   -19,   -29,   -44,   -44,
     167,   296,   167,   -19,   -29,   185,   167,   -36,   186,   168,
     186,   186,   167,   167,   167,   167,   167,   167,   270,   185,
     185,   165,   -41,   114,   -43,   -43,   185,   185,   185,   185,
     185,   185,   280,   -32,   -35,   -34,    -7,   167,   297,   167,
     -32,   -35,   -34,    -7,   298,   168,   -32,   168,   -34,   183,
     186,   168,   299,   165,   324,   165,   346,   168,   168,   168,
     168,   168,   168,   168,   186,   186,   166,   300,   110,   -42,
     -42,   186,   186,   186,   186,   186,   186,   186,   -51,   151,
     152,   153,   168,   -52,   168,   154,   224,   -51,   -51,    85,
     -52,   -52,   -33,   155,   184,   183,   156,   -45,   166,   -33,
     166,   157,   158,   206,   207,   -33,   301,   -16,   165,   -16,
     -16,   -16,   302,   -16,   111,   -16,   -16,   -16,   -16,   -16,
     -16,   -16,   167,   -16,   -16,   -16,   -16,   167,   -28,   167,
     303,   -16,   -16,   167,   325,   -28,   326,   165,   -39,   -48,
     184,   -28,   151,   152,   153,   258,    83,   -26,   154,   329,
     -32,   -34,   330,   166,   -26,   165,   155,   -32,   -34,   156,
     -26,   -53,   -53,   167,   157,   158,   -33,   168,   239,   -53,
     -53,   -53,   168,   -33,   168,   -64,   331,   -28,   168,   229,
     -64,   -64,   166,   230,   -28,   -64,   -64,   -64,   -64,   -64,
     -64,   165,   -26,   165,   -38,   -38,   183,   165,   332,   -26,
     166,   -36,   -36,   165,   165,   165,   165,   268,   168,   335,
     183,   183,   164,   342,   -52,   -52,   337,   183,   183,   183,
     183,   278,   238,   -52,   -52,   -53,   243,   244,   165,   338,
     165,   339,   225,   -53,   -53,   -53,   166,   343,   166,   347,
     182,   184,   166,   349,   164,   351,   164,   358,   166,   166,
     166,   166,   166,   269,   359,   184,   184,   163,   109,   361,
     -51,   -51,   184,   184,   184,   184,   184,   279,   238,   -51,
     -51,   -39,   -39,   166,   360,   166,   333,   334,   151,   152,
     153,   287,   362,   363,   154,   181,   182,   364,   365,   163,
     377,   163,   155,   369,   370,   156,   -72,   371,    10,   164,
     157,   158,   108,   -72,   373,    20,   -72,   -72,   -72,   -72,
     -72,   -72,    64,   165,   120,    28,    29,    30,   165,   -51,
     165,    32,     0,     0,   165,    85,   -51,   -51,   164,    38,
       0,   181,    40,   151,   152,   153,   352,    41,    42,   154,
       0,     0,   -49,   -49,   163,     0,   164,   155,     0,     0,
     156,   -49,   237,     0,   165,   157,   158,     0,   166,     0,
       0,     0,     0,   166,     0,   166,   -64,     0,     0,   166,
     215,   -64,     0,   163,   216,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   164,     0,   164,     0,     0,   182,   164,     0,
       0,   163,     0,     0,   164,   164,   164,   267,     0,   166,
     240,   182,   182,     0,     0,   -55,   -55,     0,   182,   182,
     182,   277,   -55,   -55,   -55,   -55,   162,     0,     0,   164,
       0,   164,     0,    87,     0,     0,     0,   163,     0,   163,
     -56,     0,   181,   163,     0,   -56,   -56,   -56,   -56,   163,
     163,   266,     0,     0,   180,     0,   181,   181,   162,     0,
     162,     0,     0,   181,   181,   276,    28,    29,    30,   160,
     107,     0,    75,     0,   163,     0,   163,     0,     0,     0,
      38,     0,     0,    40,     0,   151,   152,   153,    41,    42,
       0,   154,     0,     0,     0,   161,     0,   178,     0,   155,
     180,   160,   156,   160,     0,     0,     0,   157,   158,     0,
       0,     0,     0,   162,   164,     0,     0,     0,     0,   164,
       0,   164,     0,   179,     0,   164,     0,   161,     0,   161,
       0,   169,   170,   171,     0,     0,     0,   172,   106,     0,
       0,     0,   162,   178,   122,   173,     0,     0,   174,     0,
       0,     0,     0,   175,   176,   164,   160,     0,     0,   163,
     162,   151,   152,   153,   163,     0,   163,   217,     0,   179,
     163,     0,     0,     0,     0,   155,     0,     0,   156,   -73,
       0,     0,   161,   157,   158,   160,   -73,     0,     0,   -73,
     -73,   -73,   -73,   -73,   -73,     0,   162,     0,   162,     0,
     163,   180,   162,   160,     0,    87,   159,     0,   162,   265,
       0,   161,   -55,     0,     0,   180,   180,   -55,   -55,   -55,
     -55,     0,   180,   275,     0,     0,     0,     0,     0,   161,
       0,     0,     0,   162,   177,   162,     0,     0,   159,   160,
     159,   160,     0,     0,   178,   160,   169,   170,   171,     0,
       0,     0,   231,     0,     0,     0,     0,     0,   178,   178,
     173,     0,     0,   174,     0,   161,     0,   161,   175,   176,
     179,   161,     0,     0,   226,     0,   160,   264,   160,   -56,
     177,     0,     0,     0,   179,   179,   -56,   -56,   -56,   -56,
       0,   274,     0,   159,     0,   -72,     0,     0,     0,     0,
     -72,   -72,   161,     0,   161,   -72,   -72,   -72,   -72,   -72,
     -72,     0,     0,     0,     0,     0,     0,     0,   162,     0,
     122,     0,   159,   162,     0,   162,     0,     0,   122,   162,
       0,     0,     0,   -27,     0,   -27,   -27,   -27,     0,   -27,
     159,   -27,   -27,   -27,   -27,   341,   -27,   -27,     0,   -27,
     -27,   -27,   -27,     0,     0,     0,     0,   -27,   -27,   162,
       0,   160,     0,     0,     0,     0,   160,     0,   160,     0,
       0,     0,   160,     0,     0,     0,   159,     0,   159,     0,
       0,   177,   159,     0,     0,     0,     0,   161,     0,   122,
       0,     0,   161,     0,   161,   177,   177,     0,   161,     0,
       0,     0,   160,     0,     0,     0,     0,     0,   -14,     0,
     -14,   -14,   -14,   159,   -14,   159,   -14,   -14,   -14,   -14,
     -14,   -14,   -14,     0,   -14,   -14,   -14,   -14,   161,     0,
       0,     0,   -14,   -14,   -15,     0,   -15,   -15,   -15,     0,
     -15,     0,   -15,   -15,   -15,   -15,   -15,   -15,   -15,     0,
     -15,   -15,   -15,   -15,     0,     0,     0,     0,   -15,   -15,
     -10,     0,   -10,   -10,   -10,     0,   -10,     0,   -10,   -10,
     -10,   -10,   -10,   -10,   -10,     0,   -10,   -10,   -10,   -10,
       0,   -73,     0,     0,   -10,   -10,   -73,   -73,     0,     0,
       0,   -73,   -73,   -73,   -73,   -73,   -73,     0,   159,     0,
       0,     0,     0,   159,   -11,   159,   -11,   -11,   -11,   159,
     -11,     0,   -11,   -11,   -11,   -11,   -11,   -11,   -11,     0,
     -11,   -11,   -11,   -11,     0,     0,     0,     0,   -11,   -11,
       0,     0,   -30,     0,   -30,   -30,   -30,     0,   -30,   159,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,
     -30,   -30,     0,     0,     0,     0,   -30,   -30,   -31,     0,
     -31,   -31,   -31,     0,   -31,     0,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,     0,     0,
       0,     0,   -31,   -31,   -12,     0,   -12,   -12,   -12,     0,
     -12,     0,   -12,   -12,   -12,   -12,   -12,   -12,   -12,     0,
     -12,   -12,   -12,   -12,     0,     0,     0,     0,   -12,   -12,
     -13,     0,   -13,   -13,   -13,     0,   -13,     0,   -13,   -13,
     -13,   -13,   -13,   -13,   -13,     0,   -13,   -13,   -13,   -13,
       0,     0,     0,     0,   -13,   -13,   -29,     0,   -29,   -29,
     -29,     0,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,     0,   -29,   -29,   -29,   -29,     0,     0,     0,     0,
     -29,   -29,   -69,     0,   -69,   -69,   -69,     0,   -69,     0,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,   -69,   -69,
     -69,   -69,     0,     0,     0,     0,   -69,   -69,   -35,     0,
     -35,   -35,   -35,     0,   -35,     0,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,     0,     0,
       0,     0,   -35,   -35,    -7,     0,    -7,    -7,    -7,     0,
      -7,     0,    -7,    -7,    -7,    -7,    -7,    -7,    -7,     0,
      -7,    -7,    -7,    -7,     0,     0,     0,     0,    -7,    -7,
     -70,     0,   -70,   -70,   -70,     0,   -70,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,
       0,     0,     0,     0,   -70,   -70,   -27,     0,   -27,   -27,
     -27,     0,   -27,     0,   -27,   -27,   -27,   -27,   374,   -27,
     -27,     0,   -27,   -27,   -27,   -27,     0,     0,     0,     0,
     -27,   -27,   -32,     0,   -32,   -32,   -32,     0,   -32,     0,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,
     -32,   -32,     0,     0,     0,     0,   -32,   -32,   -34,     0,
     -34,   -34,   -34,     0,   -34,     0,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,     0,     0,
       0,     0,   -34,   -34,   -33,     0,   -33,   -33,   -33,     0,
     -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,
     -33,   -33,   -33,   -33,     0,     0,     0,     0,   -33,   -33,
     -28,     0,   -28,   -28,   -28,     0,   -28,     0,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,
       0,     0,     0,     0,   -28,   -28,   -26,     0,   -26,   -26,
     -26,     0,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,     0,   -26,   -26,   -26,   -26,     0,     0,     0,     0,
     -26,   -26,   133,     0,    28,    29,    30,     0,   134,     0,
      32,   135,   136,   137,     0,   138,   139,     0,    38,   140,
     103,    40,     0,     0,     0,     0,    41,    42,    -9,     0,
      -9,    -9,    -9,     0,    -9,     0,    -9,    -9,    -9,    -9,
       0,    -9,    -9,     0,    -9,    -9,    -9,    -9,     0,     0,
       0,     0,    -9,    -9,    -8,     0,    -8,    -8,    -8,     0,
      -8,     0,    -8,    -8,    -8,    -8,     0,    -8,    -8,     0,
      -8,    -8,    -8,    -8,     0,     0,     0,     0,    -8,    -8,
     -17,     0,   -17,   -17,   -17,     0,   -17,     0,   -17,   -17,
     -17,   -17,     0,   -17,   -17,     0,   -17,   -17,   -17,   -17,
       0,     0,     0,     0,   -17,   -17,   -16,     0,   -16,   -16,
     -16,     0,   -16,     0,   -16,   -16,   -16,   -16,     0,   -16,
     -16,     0,   -16,   -16,   -16,   -16,     0,     0,     0,     0,
     -16,   -16,   -14,     0,   -14,   -14,   -14,     0,   -14,     0,
     -14,   -14,   -14,   -14,     0,   -14,   -14,     0,   -14,   -14,
     -14,   -14,     0,     0,     0,     0,   -14,   -14,   -15,     0,
     -15,   -15,   -15,     0,   -15,     0,   -15,   -15,   -15,   -15,
       0,   -15,   -15,     0,   -15,   -15,   -15,   -15,     0,     0,
       0,     0,   -15,   -15,   -10,     0,   -10,   -10,   -10,     0,
     -10,     0,   -10,   -10,   -10,   -10,     0,   -10,   -10,     0,
     -10,   -10,   -10,   -10,     0,     0,     0,     0,   -10,   -10,
     -11,     0,   -11,   -11,   -11,     0,   -11,     0,   -11,   -11,
     -11,   -11,     0,   -11,   -11,     0,   -11,   -11,   -11,   -11,
       0,     0,     0,     0,   -11,   -11,   -30,     0,   -30,   -30,
     -30,     0,   -30,     0,   -30,   -30,   -30,   -30,     0,   -30,
     -30,     0,   -30,   -30,   -30,   -30,     0,     0,     0,     0,
     -30,   -30,   -31,     0,   -31,   -31,   -31,     0,   -31,     0,
     -31,   -31,   -31,   -31,     0,   -31,   -31,     0,   -31,   -31,
     -31,   -31,     0,     0,     0,     0,   -31,   -31,   -12,     0,
     -12,   -12,   -12,     0,   -12,     0,   -12,   -12,   -12,   -12,
       0,   -12,   -12,     0,   -12,   -12,   -12,   -12,     0,     0,
       0,     0,   -12,   -12,   -13,     0,   -13,   -13,   -13,     0,
     -13,     0,   -13,   -13,   -13,   -13,     0,   -13,   -13,     0,
     -13,   -13,   -13,   -13,     0,     0,     0,     0,   -13,   -13,
     133,     0,    28,    29,    30,     0,   134,     0,    32,   135,
     136,   137,     0,   138,   139,     0,    38,   140,   260,    40,
       0,     0,     0,     0,    41,    42,   -29,     0,   -29,   -29,
     -29,     0,   -29,     0,   -29,   -29,   -29,   -29,     0,   -29,
     -29,     0,   -29,   -29,   -29,   -29,     0,     0,     0,     0,
     -29,   -29,   133,     0,    28,    29,    30,     0,   134,     0,
      32,   135,   136,   137,     0,   138,   139,     0,    38,   140,
     289,    40,     0,     0,     0,     0,    41,    42,   -69,     0,
     -69,   -69,   -69,     0,   -69,     0,   -69,   -69,   -69,   -69,
       0,   -69,   -69,     0,   -69,   -69,   -69,   -69,     0,     0,
       0,     0,   -69,   -69,   -35,     0,   -35,   -35,   -35,     0,
     -35,     0,   -35,   -35,   -35,   -35,     0,   -35,   -35,     0,
     -35,   -35,   -35,   -35,     0,     0,     0,     0,   -35,   -35,
      -7,     0,    -7,    -7,    -7,     0,    -7,     0,    -7,    -7,
      -7,    -7,     0,    -7,    -7,     0,    -7,    -7,    -7,    -7,
       0,     0,     0,     0,    -7,    -7,   -70,     0,   -70,   -70,
     -70,     0,   -70,     0,   -70,   -70,   -70,   -70,     0,   -70,
     -70,     0,   -70,   -70,   -70,   -70,     0,     0,     0,     0,
     -70,   -70,   -32,     0,   -32,   -32,   -32,     0,   -32,     0,
     -32,   -32,   -32,   -32,     0,   -32,   -32,     0,   -32,   -32,
     -32,   -32,     0,     0,     0,     0,   -32,   -32,   -34,     0,
     -34,   -34,   -34,     0,   -34,     0,   -34,   -34,   -34,   -34,
       0,   -34,   -34,     0,   -34,   -34,   -34,   -34,     0,     0,
       0,     0,   -34,   -34,   -33,     0,   -33,   -33,   -33,     0,
     -33,     0,   -33,   -33,   -33,   -33,     0,   -33,   -33,     0,
     -33,   -33,   -33,   -33,     0,     0,     0,     0,   -33,   -33,
     133,     0,    28,    29,    30,     0,   134,     0,    32,   135,
     136,   137,     0,   138,   139,     0,    38,   140,   354,    40,
       0,     0,     0,     0,    41,    42,   -28,     0,   -28,   -28,
     -28,     0,   -28,     0,   -28,   -28,   -28,   -28,     0,   -28,
     -28,     0,   -28,   -28,   -28,   -28,     0,     0,     0,     0,
     -28,   -28,   -26,     0,   -26,   -26,   -26,     0,   -26,     0,
     -26,   -26,   -26,   -26,     0,   -26,   -26,     0,   -26,   -26,
     -26,   -26,     0,     0,     0,     0,   -26,   -26,   133,     0,
      28,    29,    30,     0,   134,     0,    32,   135,   136,   137,
       0,   138,   139,     0,    38,   140,     0,    40,     0,     0,
       0,     0,    41,    42,   187,     0,    28,    29,    30,     0,
     188,     0,    32,   189,   190,   191,     0,   192,   193,     0,
      38,   194,     0,    40,     0,     0,     0,     0,    41,    42,
     305,     0,    28,    29,    30,     0,   306,     0,    32,   307,
     308,   309,     0,   310,   311,     0,    38,   312,     0,    40,
       0,   -60,     0,     0,    41,    42,   -60,   -60,     0,     0,
       0,   -60,   242,   -60,   -60,   -60,   -60,   -62,     0,     0,
       0,     0,   -62,   -62,     0,     0,     0,   -62,   -62,   -62,
     -62,   -62,   -62,   -63,     0,     0,     0,     0,   -63,   -63,
       0,     0,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -64,
       0,     0,     0,     0,   -64,   -64,     0,     0,     0,   -64,
     -64,   -64,   -64,   -64,   -64,   -67,     0,     0,     0,     0,
     -67,   -67,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -66,     0,     0,     0,     0,   -66,   -66,     0,     0,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -65,     0,     0,
       0,     0,   -65,   -65,     0,     0,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -68,     0,     0,     0,     0,   -68,   -68,
       0,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -59,
       0,     0,     0,     0,   -59,   -59,     0,     0,     0,   -59,
     242,   -59,   -59,   -59,   -59,   -61,     0,     0,     0,     0,
     -61,   -61,     0,     0,   -60,   -61,   -61,   -61,   -61,   -61,
     -61,   -60,     0,   -62,   -60,    89,   -60,   -60,   -60,   -60,
     -62,     0,   -63,   -62,   -62,   -62,   -62,   -62,   -62,   -63,
       0,   -64,   -63,   -63,   -63,   -63,   -63,   -63,   -64,     0,
     -67,   -64,   -64,   -64,   -64,   -64,   -64,   -67,     0,   -66,
     -67,   -67,   -67,   -67,   -67,   -67,   -66,     0,   -65,   -66,
     -66,   -66,   -66,   -66,   -66,   -65,     0,   -68,   -65,   -65,
     -65,   -65,   -65,   -65,   -68,     0,   -59,   -68,   -68,   -68,
     -68,   -68,   -68,   -59,     0,   -61,   -59,    89,   -59,   -59,
     -59,   -59,   -61,     0,     0,   -61,   -61,   -61,   -61,   -61,
     -61,   -72,     0,     0,     0,     0,   -72,     0,     0,     0,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -73,     0,     0,
       0,     0,   -73,     0,     0,     0,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -60,     0,     0,     0,     0,   -60,     0,
       0,     0,     0,   -60,   228,   -60,   -60,   -60,   -60,   -62,
       0,     0,     0,     0,   -62,     0,     0,     0,     0,   -62,
     -62,   -62,   -62,   -62,   -62,   -63,     0,     0,     0,     0,
     -63,     0,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   -64,     0,     0,     0,     0,   -64,     0,     0,     0,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -67,     0,     0,
       0,     0,   -67,     0,     0,     0,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -66,     0,     0,     0,     0,   -66,     0,
       0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -65,
       0,     0,     0,     0,   -65,     0,     0,     0,     0,   -65,
     -65,   -65,   -65,   -65,   -65,   -68,     0,     0,     0,     0,
     -68,     0,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -59,     0,     0,     0,     0,   -59,     0,     0,     0,
       0,   -59,   228,   -59,   -59,   -59,   -59,   -61,     0,     0,
       0,     0,   -61,     0,     0,     0,   -57,   -61,   -61,   -61,
     -61,   -61,   -61,   -57,     0,     0,    88,   -58,   -57,   -57,
     -57,   -57,   -58,   -57,     0,     0,     0,   227,   -57,   -58,
     -58,   -58,   -58,   227,   226,   -57,   -57,   -57,   -57,   -55,
       0,     0,     0,     0,     0,     0,   -55,   -55,   -55,   -55
};

static const yytype_int16 yycheck[] =
{
       0,   291,   140,     3,    23,    23,    25,    25,   127,   299,
       0,    20,   215,     7,    23,    34,     7,     7,     3,     4,
       5,    40,    21,    23,     9,    25,   229,    21,    23,     9,
      25,    30,    17,    16,    20,    20,    21,    23,    21,    22,
      25,    26,    23,    26,    25,    28,    29,    30,    31,    68,
      69,    70,    23,    72,    25,    74,   194,    21,     1,    77,
       3,     4,     5,    21,     7,     0,     9,    10,    11,    12,
     360,    14,    15,     0,    17,    18,    23,    20,    25,    16,
       7,     0,    25,    26,    21,    22,    13,     9,     7,   208,
       7,    28,    29,    30,    31,   114,    21,   116,   116,    23,
       0,    25,    20,    28,    29,    30,    31,     7,   127,   128,
     128,     0,   131,   131,    21,    22,   116,   136,     7,    20,
       0,   116,     0,    30,    13,    20,   245,     7,   128,     7,
      23,   131,    25,   128,    21,   116,   131,   156,    23,     0,
      23,    23,    25,    30,    31,   116,     7,   128,    30,    31,
     131,    23,    13,    16,    23,   174,    25,   128,    21,    22,
     131,     8,     9,    26,    27,    28,    29,    30,    31,   116,
       0,   190,    20,    16,   312,     0,     9,     7,    21,    22,
      21,   128,     7,    26,   131,    28,    29,    30,    31,   208,
      21,   210,   116,   212,    23,   213,   215,   216,    29,    30,
      31,     0,     0,    23,   128,    16,     9,   131,     7,     7,
     229,   230,    23,   332,    13,    26,   335,    28,    29,    30,
      31,    21,    22,   116,   343,    21,   245,     0,   247,    16,
     249,    23,   250,   116,     7,   128,    23,    23,   131,    26,
      27,    28,    29,    30,    31,   128,    23,   116,   131,     3,
       4,     5,    23,    23,   373,     9,    21,     0,    21,   128,
      30,    31,   131,    17,     7,    16,    20,    30,    31,    23,
      21,    25,    26,   292,   292,    26,    27,    28,    29,    30,
      31,   300,   300,    21,     3,     4,     5,     6,    21,   308,
       9,    21,   292,     8,     9,     0,     0,   292,    17,    23,
     300,    20,     7,     7,    21,   300,    25,    26,    13,    13,
       0,   292,    23,   332,    21,    22,   335,     7,   337,   300,
     339,   292,   340,   341,   343,   344,   344,     0,     0,   300,
      23,    23,    21,    22,     7,     7,    28,    29,    30,    31,
     358,    13,   361,   361,   344,   292,   365,   365,    23,   344,
       0,    21,    22,   300,   373,   374,   374,     7,   377,   377,
      23,   361,     0,   344,     0,   365,   361,    30,   292,     7,
     365,     7,    23,   344,   374,    13,   300,   377,     0,   374,
     361,    23,   377,    20,   365,     7,    28,    29,    30,    31,
     361,    13,    20,   374,   365,    20,   377,   344,    38,   292,
      40,    41,    42,   374,     0,    20,   377,   300,     0,   292,
      23,     7,     0,    21,   361,     7,    20,   300,   365,     7,
     344,    13,     0,   292,    23,    13,     0,   374,    68,     7,
     377,   300,    72,     7,    74,    13,    20,   361,    20,    13,
      20,   365,     3,     4,     5,    40,    21,     0,     9,    89,
     374,   344,     9,   377,     7,    23,    17,    21,    22,    20,
      13,   344,    23,     0,    25,    26,    30,    31,   361,    23,
       7,     9,   365,    68,   114,   344,    13,    72,   361,    74,
      21,   374,   365,     9,   377,    21,     0,   127,     0,    23,
       0,   374,   361,     7,   377,     7,   365,     7,    23,    16,
       9,    13,    23,    20,    23,   374,    23,    24,   377,    26,
      27,    28,    29,    30,    31,   155,   156,   157,   158,   114,
      21,    22,     8,     9,     0,    21,    22,    28,    29,    30,
      31,     7,   127,   173,   174,   175,   176,    13,     0,    21,
       1,    21,     3,     4,     5,     7,     7,    21,     9,    10,
      11,    12,    13,    14,    15,    21,    17,    18,    19,    20,
     155,   156,   157,   158,    25,    26,     0,     0,    21,    22,
     210,    21,   212,     7,     7,   215,   216,    21,   173,   174,
     175,   176,   222,   223,   224,   225,   226,   227,   228,   229,
     230,    40,    21,    22,    21,    22,   236,   237,   238,   239,
     240,   241,   242,     0,     0,     0,     0,   247,    21,   249,
       7,     7,     7,     7,    23,   210,    13,   212,    13,    68,
     215,   216,    23,    72,    23,    74,     9,   222,   223,   224,
     225,   226,   227,   228,   229,   230,    40,    21,    87,    21,
      22,   236,   237,   238,   239,   240,   241,   242,    21,     3,
       4,     5,   247,    23,   249,     9,    29,    30,    31,    29,
      30,    31,     0,    17,    68,   114,    20,    21,    72,     7,
      74,    25,    26,     8,     9,    13,    21,     1,   127,     3,
       4,     5,    21,     7,    88,     9,    10,    11,    12,    13,
      14,    15,   332,    17,    18,    19,    20,   337,     0,   339,
      21,    25,    26,   343,    23,     7,    23,   156,    21,    23,
     114,    13,     3,     4,     5,     6,    30,     0,     9,    23,
       0,     0,    23,   127,     7,   174,    17,     7,     7,    20,
      13,    21,    22,   373,    25,    26,     0,   332,    28,    29,
      30,    31,   337,     7,   339,    16,    23,     0,   343,    20,
      21,    22,   156,    24,     7,    26,    27,    28,    29,    30,
      31,   210,     0,   212,    21,    22,   215,   216,    23,     7,
     174,    21,    22,   222,   223,   224,   225,   226,   373,    20,
     229,   230,    40,    23,    21,    22,    20,   236,   237,   238,
     239,   240,    29,    30,    31,    21,     8,     9,   247,    20,
     249,    20,    28,    29,    30,    31,   210,    23,   212,    23,
      68,   215,   216,    23,    72,     9,    74,    21,   222,   223,
     224,   225,   226,   227,    23,   229,   230,    40,    86,    21,
      21,    22,   236,   237,   238,   239,   240,   241,    29,    30,
      31,    21,    22,   247,    23,   249,     8,     9,     3,     4,
       5,     6,    21,    21,     9,    68,   114,    21,    21,    72,
      21,    74,    17,    23,    23,    20,    16,    23,     3,   127,
      25,    26,    85,    23,    23,    14,    26,    27,    28,    29,
      30,    31,    24,   332,   114,     3,     4,     5,   337,    23,
     339,     9,    -1,    -1,   343,    29,    30,    31,   156,    17,
      -1,   114,    20,     3,     4,     5,     6,    25,    26,     9,
      -1,    -1,    21,    22,   127,    -1,   174,    17,    -1,    -1,
      20,    30,    31,    -1,   373,    25,    26,    -1,   332,    -1,
      -1,    -1,    -1,   337,    -1,   339,    16,    -1,    -1,   343,
      20,    21,    -1,   156,    24,    -1,    26,    27,    28,    29,
      30,    31,   210,    -1,   212,    -1,    -1,   215,   216,    -1,
      -1,   174,    -1,    -1,   222,   223,   224,   225,    -1,   373,
      16,   229,   230,    -1,    -1,    21,    22,    -1,   236,   237,
     238,   239,    28,    29,    30,    31,    40,    -1,    -1,   247,
      -1,   249,    -1,    16,    -1,    -1,    -1,   210,    -1,   212,
      23,    -1,   215,   216,    -1,    28,    29,    30,    31,   222,
     223,   224,    -1,    -1,    68,    -1,   229,   230,    72,    -1,
      74,    -1,    -1,   236,   237,   238,     3,     4,     5,    40,
      84,    -1,     9,    -1,   247,    -1,   249,    -1,    -1,    -1,
      17,    -1,    -1,    20,    -1,     3,     4,     5,    25,    26,
      -1,     9,    -1,    -1,    -1,    40,    -1,    68,    -1,    17,
     114,    72,    20,    74,    -1,    -1,    -1,    25,    26,    -1,
      -1,    -1,    -1,   127,   332,    -1,    -1,    -1,    -1,   337,
      -1,   339,    -1,    68,    -1,   343,    -1,    72,    -1,    74,
      -1,     3,     4,     5,    -1,    -1,    -1,     9,    83,    -1,
      -1,    -1,   156,   114,   115,    17,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    25,    26,   373,   127,    -1,    -1,   332,
     174,     3,     4,     5,   337,    -1,   339,     9,    -1,   114,
     343,    -1,    -1,    -1,    -1,    17,    -1,    -1,    20,    16,
      -1,    -1,   127,    25,    26,   156,    23,    -1,    -1,    26,
      27,    28,    29,    30,    31,    -1,   210,    -1,   212,    -1,
     373,   215,   216,   174,    -1,    16,    40,    -1,   222,   223,
      -1,   156,    23,    -1,    -1,   229,   230,    28,    29,    30,
      31,    -1,   236,   237,    -1,    -1,    -1,    -1,    -1,   174,
      -1,    -1,    -1,   247,    68,   249,    -1,    -1,    72,   210,
      74,   212,    -1,    -1,   215,   216,     3,     4,     5,    -1,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,   229,   230,
      17,    -1,    -1,    20,    -1,   210,    -1,   212,    25,    26,
     215,   216,    -1,    -1,    16,    -1,   247,   222,   249,    21,
     114,    -1,    -1,    -1,   229,   230,    28,    29,    30,    31,
      -1,   236,    -1,   127,    -1,    16,    -1,    -1,    -1,    -1,
      21,    22,   247,    -1,   249,    26,    27,    28,    29,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   332,    -1,
     291,    -1,   156,   337,    -1,   339,    -1,    -1,   299,   343,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,    -1,     7,
     174,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    25,    26,   373,
      -1,   332,    -1,    -1,    -1,    -1,   337,    -1,   339,    -1,
      -1,    -1,   343,    -1,    -1,    -1,   210,    -1,   212,    -1,
      -1,   215,   216,    -1,    -1,    -1,    -1,   332,    -1,   360,
      -1,    -1,   337,    -1,   339,   229,   230,    -1,   343,    -1,
      -1,    -1,   373,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,   247,     7,   249,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,   373,    -1,
      -1,    -1,    25,    26,     1,    -1,     3,     4,     5,    -1,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    25,    26,
       1,    -1,     3,     4,     5,    -1,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      -1,    16,    -1,    -1,    25,    26,    21,    22,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    31,    -1,   332,    -1,
      -1,    -1,    -1,   337,     1,   339,     3,     4,     5,   343,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    25,    26,
      -1,    -1,     1,    -1,     3,     4,     5,    -1,     7,   373,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    25,    26,     1,    -1,
       3,     4,     5,    -1,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    25,    26,     1,    -1,     3,     4,     5,    -1,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    25,    26,
       1,    -1,     3,     4,     5,    -1,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    25,    26,     1,    -1,     3,     4,
       5,    -1,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      25,    26,     1,    -1,     3,     4,     5,    -1,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    25,    26,     1,    -1,
       3,     4,     5,    -1,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    25,    26,     1,    -1,     3,     4,     5,    -1,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    25,    26,
       1,    -1,     3,     4,     5,    -1,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    25,    26,     1,    -1,     3,     4,
       5,    -1,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      25,    26,     1,    -1,     3,     4,     5,    -1,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    25,    26,     1,    -1,
       3,     4,     5,    -1,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    25,    26,     1,    -1,     3,     4,     5,    -1,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    25,    26,
       1,    -1,     3,     4,     5,    -1,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    25,    26,     1,    -1,     3,     4,
       5,    -1,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      25,    26,     1,    -1,     3,     4,     5,    -1,     7,    -1,
       9,    10,    11,    12,    -1,    14,    15,    -1,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    25,    26,     1,    -1,
       3,     4,     5,    -1,     7,    -1,     9,    10,    11,    12,
      -1,    14,    15,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    25,    26,     1,    -1,     3,     4,     5,    -1,
       7,    -1,     9,    10,    11,    12,    -1,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    25,    26,
       1,    -1,     3,     4,     5,    -1,     7,    -1,     9,    10,
      11,    12,    -1,    14,    15,    -1,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    25,    26,     1,    -1,     3,     4,
       5,    -1,     7,    -1,     9,    10,    11,    12,    -1,    14,
      15,    -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      25,    26,     1,    -1,     3,     4,     5,    -1,     7,    -1,
       9,    10,    11,    12,    -1,    14,    15,    -1,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    25,    26,     1,    -1,
       3,     4,     5,    -1,     7,    -1,     9,    10,    11,    12,
      -1,    14,    15,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    25,    26,     1,    -1,     3,     4,     5,    -1,
       7,    -1,     9,    10,    11,    12,    -1,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    25,    26,
       1,    -1,     3,     4,     5,    -1,     7,    -1,     9,    10,
      11,    12,    -1,    14,    15,    -1,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    25,    26,     1,    -1,     3,     4,
       5,    -1,     7,    -1,     9,    10,    11,    12,    -1,    14,
      15,    -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      25,    26,     1,    -1,     3,     4,     5,    -1,     7,    -1,
       9,    10,    11,    12,    -1,    14,    15,    -1,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    25,    26,     1,    -1,
       3,     4,     5,    -1,     7,    -1,     9,    10,    11,    12,
      -1,    14,    15,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    25,    26,     1,    -1,     3,     4,     5,    -1,
       7,    -1,     9,    10,    11,    12,    -1,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    25,    26,
       1,    -1,     3,     4,     5,    -1,     7,    -1,     9,    10,
      11,    12,    -1,    14,    15,    -1,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    25,    26,     1,    -1,     3,     4,
       5,    -1,     7,    -1,     9,    10,    11,    12,    -1,    14,
      15,    -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      25,    26,     1,    -1,     3,     4,     5,    -1,     7,    -1,
       9,    10,    11,    12,    -1,    14,    15,    -1,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    25,    26,     1,    -1,
       3,     4,     5,    -1,     7,    -1,     9,    10,    11,    12,
      -1,    14,    15,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    25,    26,     1,    -1,     3,     4,     5,    -1,
       7,    -1,     9,    10,    11,    12,    -1,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    25,    26,
       1,    -1,     3,     4,     5,    -1,     7,    -1,     9,    10,
      11,    12,    -1,    14,    15,    -1,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    25,    26,     1,    -1,     3,     4,
       5,    -1,     7,    -1,     9,    10,    11,    12,    -1,    14,
      15,    -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      25,    26,     1,    -1,     3,     4,     5,    -1,     7,    -1,
       9,    10,    11,    12,    -1,    14,    15,    -1,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    25,    26,     1,    -1,
       3,     4,     5,    -1,     7,    -1,     9,    10,    11,    12,
      -1,    14,    15,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    25,    26,     1,    -1,     3,     4,     5,    -1,
       7,    -1,     9,    10,    11,    12,    -1,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    25,    26,
       1,    -1,     3,     4,     5,    -1,     7,    -1,     9,    10,
      11,    12,    -1,    14,    15,    -1,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    25,    26,     1,    -1,     3,     4,
       5,    -1,     7,    -1,     9,    10,    11,    12,    -1,    14,
      15,    -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      25,    26,     1,    -1,     3,     4,     5,    -1,     7,    -1,
       9,    10,    11,    12,    -1,    14,    15,    -1,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    25,    26,     1,    -1,
       3,     4,     5,    -1,     7,    -1,     9,    10,    11,    12,
      -1,    14,    15,    -1,    17,    18,    -1,    20,    -1,    -1,
      -1,    -1,    25,    26,     1,    -1,     3,     4,     5,    -1,
       7,    -1,     9,    10,    11,    12,    -1,    14,    15,    -1,
      17,    18,    -1,    20,    -1,    -1,    -1,    -1,    25,    26,
       1,    -1,     3,     4,     5,    -1,     7,    -1,     9,    10,
      11,    12,    -1,    14,    15,    -1,    17,    18,    -1,    20,
      -1,    16,    -1,    -1,    25,    26,    21,    22,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    31,    16,    -1,    -1,
      -1,    -1,    21,    22,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    31,    16,    -1,    -1,    -1,    -1,    21,    22,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    31,    16,
      -1,    -1,    -1,    -1,    21,    22,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    31,    16,    -1,    -1,    -1,    -1,
      21,    22,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    16,    -1,    -1,    -1,    -1,    21,    22,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    31,    16,    -1,    -1,
      -1,    -1,    21,    22,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    31,    16,    -1,    -1,    -1,    -1,    21,    22,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    31,    16,
      -1,    -1,    -1,    -1,    21,    22,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    31,    16,    -1,    -1,    -1,    -1,
      21,    22,    -1,    -1,    16,    26,    27,    28,    29,    30,
      31,    23,    -1,    16,    26,    27,    28,    29,    30,    31,
      23,    -1,    16,    26,    27,    28,    29,    30,    31,    23,
      -1,    16,    26,    27,    28,    29,    30,    31,    23,    -1,
      16,    26,    27,    28,    29,    30,    31,    23,    -1,    16,
      26,    27,    28,    29,    30,    31,    23,    -1,    16,    26,
      27,    28,    29,    30,    31,    23,    -1,    16,    26,    27,
      28,    29,    30,    31,    23,    -1,    16,    26,    27,    28,
      29,    30,    31,    23,    -1,    16,    26,    27,    28,    29,
      30,    31,    23,    -1,    -1,    26,    27,    28,    29,    30,
      31,    16,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    31,    16,    -1,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    31,    16,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    31,    16,
      -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    31,    16,    -1,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    16,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    31,    16,    -1,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    31,    16,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    31,    16,
      -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    31,    16,    -1,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    16,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    31,    16,    -1,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    16,    26,    27,    28,
      29,    30,    31,    23,    -1,    -1,    26,    16,    28,    29,
      30,    31,    21,    16,    -1,    -1,    -1,    26,    21,    28,
      29,    30,    31,    26,    16,    28,    29,    30,    31,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     7,    34,    35,    36,    40,    66,     8,     9,     0,
      36,     9,    20,    23,    20,    23,     7,    41,    42,    43,
      41,     8,     9,    21,    22,    21,     9,     1,     3,     4,
       5,     7,     9,    10,    11,    12,    14,    15,    17,    18,
      20,    25,    26,    37,    39,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    43,    39,     8,     9,    20,    24,
      20,    51,    20,    20,    20,     9,    65,    38,    39,    51,
      65,    65,    23,    30,    31,    29,    28,    16,    26,    27,
       9,    51,    53,    54,    55,    51,    51,    56,    23,    51,
       9,     6,    51,    19,    39,    21,    59,    60,    61,    62,
      63,    64,    65,    21,    22,    23,    21,    21,    21,    21,
      55,    57,    58,    39,    23,    23,    23,    23,    13,    56,
      39,    21,    39,     1,     7,    10,    11,    12,    14,    15,
      18,    37,    44,    45,    46,    47,    48,    49,    50,    51,
      66,     3,     4,     5,     9,    17,    20,    25,    26,    52,
      58,    59,    60,    61,    62,    63,    64,    65,    67,     3,
       4,     5,     9,    17,    20,    25,    26,    52,    58,    59,
      60,    61,    62,    63,    64,    65,    67,     1,     7,    10,
      11,    12,    14,    15,    18,    37,    44,    45,    46,    47,
      48,    49,    50,    51,    66,    51,     8,     9,    20,    51,
      20,    20,    20,    38,    23,    20,    24,     9,    65,    51,
      65,    65,    30,    31,    29,    28,    16,    26,    27,    20,
      24,     9,    65,    51,    65,    65,    30,    31,    29,    28,
      16,    26,    27,     8,     9,    20,    51,    20,    20,    20,
      38,    23,     9,    23,    56,    23,    51,     9,     6,    51,
      19,    53,    51,    21,    59,    60,    61,    62,    63,    64,
      65,    53,    51,    21,    59,    60,    61,    62,    63,    64,
      65,     9,    23,    56,    23,    51,     9,     6,    51,    19,
      23,    23,    21,    21,    21,    21,    21,    21,    23,    23,
      21,    21,    21,    21,    57,     1,     7,    10,    11,    12,
      14,    15,    18,    37,    39,    44,    45,    46,    47,    48,
      49,    50,    51,    66,    23,    23,    23,    57,    39,    23,
      23,    23,    23,     8,     9,    20,    51,    20,    20,    20,
      38,    13,    23,    23,    13,    56,     9,    23,    56,    23,
      51,     9,     6,    51,    19,    39,    56,    39,    21,    23,
      23,    21,    21,    21,    21,    21,    39,    57,    39,    23,
      23,    23,    39,    23,    13,    56,    39,    21,    39
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    35,    35,    36,    36,    37,    38,    38,
      39,    39,    39,    39,    39,    39,    39,    39,    40,    40,
      41,    41,    42,    42,    43,    43,    44,    45,    45,    46,
      47,    47,    48,    49,    49,    50,    51,    51,    51,    52,
      53,    53,    54,    54,    55,    56,    56,    57,    57,    58,
      58,    59,    59,    60,    60,    61,    61,    62,    62,    63,
      63,    64,    64,    65,    65,    65,    65,    65,    65,    66,
      66,    67,    67,    67
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     6,     7,
       0,     1,     3,     1,     2,     3,     9,     5,     7,     2,
       1,     1,     5,     5,     5,     3,     3,     1,     1,     4,
       0,     1,     3,     1,     1,     0,     1,     0,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     1,     1,     2,     2,     2,     3,     3,
       4,     1,     1,     1
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
#line 121 "./src/parser.y"
                   {
        root_node = (yyvsp[0].node);
    }
#line 2196 "parser.tab.c"
    break;

  case 3: /* declarations: declarations declaration  */
#line 127 "./src/parser.y"
                               {
        (yyval.node) = new_node("declarations", "", 0);
        (yyval.node)->child[0] = (yyvsp[-1].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2206 "parser.tab.c"
    break;

  case 4: /* declarations: declaration  */
#line 132 "./src/parser.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2214 "parser.tab.c"
    break;

  case 5: /* declaration: function_declaration_statement  */
#line 138 "./src/parser.y"
                                     {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2222 "parser.tab.c"
    break;

  case 6: /* declaration: variable_declaration_statement  */
#line 141 "./src/parser.y"
                                     {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2230 "parser.tab.c"
    break;

  case 7: /* block: '{' statements '}'  */
#line 147 "./src/parser.y"
                         {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2238 "parser.tab.c"
    break;

  case 8: /* statements: statements statement  */
#line 153 "./src/parser.y"
                           {
        (yyval.node) = new_node("statements", "", 0);
        (yyval.node)->child[0] = (yyvsp[-1].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2248 "parser.tab.c"
    break;

  case 9: /* statements: statement  */
#line 158 "./src/parser.y"
                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2256 "parser.tab.c"
    break;

  case 10: /* statement: expression_statement  */
#line 164 "./src/parser.y"
                           {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2264 "parser.tab.c"
    break;

  case 11: /* statement: io_statement  */
#line 167 "./src/parser.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2272 "parser.tab.c"
    break;

  case 12: /* statement: return_statement  */
#line 170 "./src/parser.y"
                       {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2280 "parser.tab.c"
    break;

  case 13: /* statement: variable_declaration_statement  */
#line 173 "./src/parser.y"
                                     {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2288 "parser.tab.c"
    break;

  case 14: /* statement: for_statement  */
#line 176 "./src/parser.y"
                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2296 "parser.tab.c"
    break;

  case 15: /* statement: if_else_statement  */
#line 179 "./src/parser.y"
                        {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2304 "parser.tab.c"
    break;

  case 16: /* statement: block  */
#line 182 "./src/parser.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2312 "parser.tab.c"
    break;

  case 17: /* statement: error  */
#line 185 "./src/parser.y"
            {}
#line 2318 "parser.tab.c"
    break;

  case 18: /* function_declaration_statement: SIMPLE_TYPE IDENTIFIER '(' parameters_optative ')' statement  */
#line 189 "./src/parser.y"
                                                                   {
        T_Symbol sym = symbol(
            (yyvsp[-5].token).content, 
            (yyvsp[-4].token).content, 
            "function", 
            scope_id, 
            (yyvsp[-4].token).line_idx, 
            (yyvsp[-4].token).column_idx
        );
        insert_symbol(symbol_table_idx, sym);
        symbol_table_idx++;
        symbol_table_size++;

        (yyval.node) = new_node("function_declaration_statement", "", 0);
        (yyval.node)->child[0] = new_node("type", (yyvsp[-5].token).content, 1);
        (yyval.node)->child[1] = new_node("id", (yyvsp[-4].token).content, 1);
        (yyval.node)->child[2] = (yyvsp[-2].node);
        (yyval.node)->child[3] = (yyvsp[0].node);
    }
#line 2342 "parser.tab.c"
    break;

  case 19: /* function_declaration_statement: SIMPLE_TYPE LIST_TYPE IDENTIFIER '(' parameters_optative ')' statement  */
#line 208 "./src/parser.y"
                                                                             {
        char type[100];
        strcpy(type, (yyvsp[-6].token).content);
        strcat(type, " ");
        strcat(type, (yyvsp[-5].token).content);
        T_Symbol sym = symbol(
            type, 
            (yyvsp[-4].token).content, 
            "function", 
            scope_id, 
            (yyvsp[-4].token).line_idx, 
            (yyvsp[-4].token).column_idx
        );
        insert_symbol(symbol_table_idx, sym);
        symbol_table_idx++;
        symbol_table_size++;

        (yyval.node) = new_node("function_declaration_statement", "", 0);
        (yyval.node)->child[0] = new_node("type", type, 1);
        (yyval.node)->child[1] = new_node("id", (yyvsp[-4].token).content, 1);
        (yyval.node)->child[2] = (yyvsp[-2].node);
        (yyval.node)->child[3] = (yyvsp[0].node);
    }
#line 2370 "parser.tab.c"
    break;

  case 20: /* parameters_optative: %empty  */
#line 234 "./src/parser.y"
             {
        (yyval.node) = NULL;
    }
#line 2378 "parser.tab.c"
    break;

  case 21: /* parameters_optative: parameters  */
#line 237 "./src/parser.y"
                 {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2386 "parser.tab.c"
    break;

  case 22: /* parameters: parameters ',' parameter  */
#line 243 "./src/parser.y"
                               {
        (yyval.node) = new_node("parameters", "", 0);
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2396 "parser.tab.c"
    break;

  case 23: /* parameters: parameter  */
#line 248 "./src/parser.y"
                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2404 "parser.tab.c"
    break;

  case 24: /* parameter: SIMPLE_TYPE IDENTIFIER  */
#line 254 "./src/parser.y"
                             {
        T_Symbol sym = symbol(
            (yyvsp[-1].token).content, 
            (yyvsp[0].token).content, 
            "parameter", 
            scope_id, 
            (yyvsp[0].token).line_idx, 
            (yyvsp[0].token).column_idx
        );
        insert_symbol(symbol_table_idx, sym);
        symbol_table_idx++;
        symbol_table_size++;

        (yyval.node) = new_node("function_parameter", "", 0);
        (yyval.node)->child[0] = new_node("type", (yyvsp[-1].token).content, 1);
        (yyval.node)->child[1] = new_node("id", (yyvsp[0].token).content, 1);
    }
#line 2426 "parser.tab.c"
    break;

  case 25: /* parameter: SIMPLE_TYPE LIST_TYPE IDENTIFIER  */
#line 271 "./src/parser.y"
                                       {
        char type[100];
        strcpy(type, (yyvsp[-2].token).content);
        strcat(type, " ");
        strcat(type, (yyvsp[-1].token).content);
        T_Symbol sym = symbol(
            type, 
            (yyvsp[0].token).content, 
            "parameter", 
            scope_id, 
            (yyvsp[0].token).line_idx, 
            (yyvsp[0].token).column_idx
        );
        insert_symbol(symbol_table_idx, sym);
        symbol_table_idx++;
        symbol_table_size++;

        (yyval.node) = new_node("function_parameter", "", 0);
        (yyval.node)->child[0] = new_node("type", type, 1);
        (yyval.node)->child[1] = new_node("id", (yyvsp[0].token).content, 1);
    }
#line 2452 "parser.tab.c"
    break;

  case 26: /* for_statement: RW_FOR '(' expression_optative ';' or_expression_optative ';' expression_optative ')' statement  */
#line 295 "./src/parser.y"
                                                                                                      {
        (yyval.node) = new_node("for_statement", "", 0);
        (yyval.node)->child[0] = new_node("for_rw", (yyvsp[-8].token).content, 1);
        (yyval.node)->child[1] = (yyvsp[-6].node);
        (yyval.node)->child[2] = (yyvsp[-4].node);
        (yyval.node)->child[3] = (yyvsp[-2].node);
        (yyval.node)->child[4] = (yyvsp[0].node);
    }
#line 2465 "parser.tab.c"
    break;

  case 27: /* if_else_statement: RW_IF '(' expression ')' statement  */
#line 306 "./src/parser.y"
                                                    {
        (yyval.node) = new_node("if_else_statement", "", 0);
        (yyval.node)->child[0] = new_node("if_rw", (yyvsp[-4].token).content, 1);
        (yyval.node)->child[1] = (yyvsp[-2].node);
        (yyval.node)->child[2] = (yyvsp[0].node);
    }
#line 2476 "parser.tab.c"
    break;

  case 28: /* if_else_statement: RW_IF '(' expression ')' statement RW_ELSE statement  */
#line 312 "./src/parser.y"
                                                           {
        (yyval.node) = new_node("if_else_statement", "", 0);
        (yyval.node)->child[0] = new_node("if_rw", (yyvsp[-6].token).content, 1);
        (yyval.node)->child[1] = (yyvsp[-4].node);
        (yyval.node)->child[2] = (yyvsp[-2].node);
        (yyval.node)->child[3] = new_node("else_rw", (yyvsp[-1].token).content, 1);
        (yyval.node)->child[4] = (yyvsp[0].node);
    }
#line 2489 "parser.tab.c"
    break;

  case 29: /* expression_statement: expression ';'  */
#line 322 "./src/parser.y"
                     {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2497 "parser.tab.c"
    break;

  case 30: /* io_statement: input_statement  */
#line 328 "./src/parser.y"
                      {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2505 "parser.tab.c"
    break;

  case 31: /* io_statement: output_statement  */
#line 331 "./src/parser.y"
                       {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2513 "parser.tab.c"
    break;

  case 32: /* input_statement: IO_READ '(' IDENTIFIER ')' ';'  */
#line 337 "./src/parser.y"
                                     {
        (yyval.node) = new_node("input_statement", "", 0);
        (yyval.node)->child[0] = new_node("input_rw", (yyvsp[-4].token).content, 1);
        (yyval.node)->child[1] = new_node("input_rw", (yyvsp[-2].token).content, 1);
    }
#line 2523 "parser.tab.c"
    break;

  case 33: /* output_statement: IO_WRITE '(' expression ')' ';'  */
#line 345 "./src/parser.y"
                                      {
        (yyval.node) = new_node("output_statement", "", 0);
        (yyval.node)->child[0] = new_node("output_rw", (yyvsp[-4].token).content, 1);
        (yyval.node)->child[1] = (yyvsp[-2].node);
    }
#line 2533 "parser.tab.c"
    break;

  case 34: /* output_statement: IO_WRITE '(' LIT_STRING ')' ';'  */
#line 350 "./src/parser.y"
                                      {
        (yyval.node) = new_node("output_statement", "", 0);
        (yyval.node)->child[0] = new_node("output_rw", (yyvsp[-4].token).content, 1);
        (yyval.node)->child[1] = new_node("string_literal", (yyvsp[-2].token).content, 1);
    }
#line 2543 "parser.tab.c"
    break;

  case 35: /* return_statement: RW_RETURN expression ';'  */
#line 358 "./src/parser.y"
                               {
        (yyval.node) = new_node("return_statement", "", 0);
        (yyval.node)->child[0] = new_node("return_rw", (yyvsp[-2].token).content, 1);
        (yyval.node)->child[1] = (yyvsp[-1].node);
    }
#line 2553 "parser.tab.c"
    break;

  case 36: /* expression: IDENTIFIER '=' expression  */
#line 366 "./src/parser.y"
                                {
        (yyval.node) = new_node("assignment_expression", "=", 0);
        (yyval.node)->child[0] = new_node("id", (yyvsp[-2].token).content, 1);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2563 "parser.tab.c"
    break;

  case 37: /* expression: or_expression  */
#line 371 "./src/parser.y"
                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2571 "parser.tab.c"
    break;

  case 38: /* expression: function_call_expression  */
#line 374 "./src/parser.y"
                               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2579 "parser.tab.c"
    break;

  case 39: /* function_call_expression: IDENTIFIER '(' function_arguments_optional ')'  */
#line 380 "./src/parser.y"
                                                     {
        (yyval.node) = new_node("function_call_expression", "", 0);
        (yyval.node)->child[0] = new_node("id", (yyvsp[-3].token).content, 1);
        (yyval.node)->child[1] = (yyvsp[-1].node);
    }
#line 2589 "parser.tab.c"
    break;

  case 40: /* function_arguments_optional: %empty  */
#line 388 "./src/parser.y"
             {
        (yyval.node) = NULL;
    }
#line 2597 "parser.tab.c"
    break;

  case 41: /* function_arguments_optional: function_arguments  */
#line 391 "./src/parser.y"
                         {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2605 "parser.tab.c"
    break;

  case 42: /* function_arguments: function_arguments ',' function_argument  */
#line 397 "./src/parser.y"
                                               {
        (yyval.node) = new_node("function_arguments", "", 0);
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2615 "parser.tab.c"
    break;

  case 43: /* function_arguments: function_argument  */
#line 402 "./src/parser.y"
                        {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2623 "parser.tab.c"
    break;

  case 44: /* function_argument: expression  */
#line 408 "./src/parser.y"
                 {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2631 "parser.tab.c"
    break;

  case 45: /* expression_optative: %empty  */
#line 414 "./src/parser.y"
             {
        (yyval.node) = NULL;
    }
#line 2639 "parser.tab.c"
    break;

  case 46: /* expression_optative: expression  */
#line 417 "./src/parser.y"
                 {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2647 "parser.tab.c"
    break;

  case 47: /* or_expression_optative: %empty  */
#line 423 "./src/parser.y"
             {
        (yyval.node) = NULL;
    }
#line 2655 "parser.tab.c"
    break;

  case 48: /* or_expression_optative: or_expression  */
#line 426 "./src/parser.y"
                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2663 "parser.tab.c"
    break;

  case 49: /* or_expression: or_expression LOGICAL_OP_OR and_expression  */
#line 432 "./src/parser.y"
                                                 {
        (yyval.node) = new_node("or_expression", (yyvsp[-1].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2673 "parser.tab.c"
    break;

  case 50: /* or_expression: and_expression  */
#line 437 "./src/parser.y"
                     {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2681 "parser.tab.c"
    break;

  case 51: /* and_expression: and_expression LOGICAL_OP_AND equality_expression  */
#line 443 "./src/parser.y"
                                                        {
        (yyval.node) = new_node("and_expression", (yyvsp[-1].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2691 "parser.tab.c"
    break;

  case 52: /* and_expression: equality_expression  */
#line 448 "./src/parser.y"
                          {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2699 "parser.tab.c"
    break;

  case 53: /* equality_expression: equality_expression EQUALITY_OP relational_expression  */
#line 454 "./src/parser.y"
                                                            {
        (yyval.node) = new_node("equality_expression", (yyvsp[-1].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2709 "parser.tab.c"
    break;

  case 54: /* equality_expression: relational_expression  */
#line 459 "./src/parser.y"
                            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2717 "parser.tab.c"
    break;

  case 55: /* relational_expression: relational_expression RELATIONAL_OP list_expression  */
#line 465 "./src/parser.y"
                                                          {
        (yyval.node) = new_node("relational_expression", (yyvsp[-1].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2727 "parser.tab.c"
    break;

  case 56: /* relational_expression: list_expression  */
#line 470 "./src/parser.y"
                      {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2735 "parser.tab.c"
    break;

  case 57: /* list_expression: list_expression BINARY_LIST_OP addition_expression  */
#line 476 "./src/parser.y"
                                                         {
        (yyval.node) = new_node("list_expression", (yyvsp[-1].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2745 "parser.tab.c"
    break;

  case 58: /* list_expression: addition_expression  */
#line 481 "./src/parser.y"
                          {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2753 "parser.tab.c"
    break;

  case 59: /* addition_expression: addition_expression ARITMETIC_OP_ADDITIVE multiplication_expression  */
#line 487 "./src/parser.y"
                                                                          {
        (yyval.node) = new_node("addition_expression", (yyvsp[-1].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2763 "parser.tab.c"
    break;

  case 60: /* addition_expression: multiplication_expression  */
#line 492 "./src/parser.y"
                                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2771 "parser.tab.c"
    break;

  case 61: /* multiplication_expression: multiplication_expression ARITMETIC_OP_MULTIPLICATIVE simple_value  */
#line 498 "./src/parser.y"
                                                                         {
        (yyval.node) = new_node("multiplication_expression", (yyvsp[-1].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2781 "parser.tab.c"
    break;

  case 62: /* multiplication_expression: simple_value  */
#line 503 "./src/parser.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2789 "parser.tab.c"
    break;

  case 63: /* simple_value: constant  */
#line 509 "./src/parser.y"
               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2797 "parser.tab.c"
    break;

  case 64: /* simple_value: IDENTIFIER  */
#line 512 "./src/parser.y"
                 {
        (yyval.node) = new_node("id", (yyvsp[0].token).content, 1);
    }
#line 2805 "parser.tab.c"
    break;

  case 65: /* simple_value: ARITMETIC_OP_ADDITIVE simple_value  */
#line 515 "./src/parser.y"
                                         {
        (yyval.node) = new_node("simple_value_signed", "", 0);
        (yyval.node)->child[0] = new_node("aritmetic_op", (yyvsp[-1].token).content, 1);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2815 "parser.tab.c"
    break;

  case 66: /* simple_value: '!' simple_value  */
#line 520 "./src/parser.y"
                       {
        (yyval.node) = new_node("simple_value_exclamation", "", 0);
        (yyval.node)->child[0] = new_node("exclamation_op", "!", 1);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2825 "parser.tab.c"
    break;

  case 67: /* simple_value: UNARY_LIST_OP simple_value  */
#line 525 "./src/parser.y"
                                 {
        (yyval.node) = new_node("simple_value_unary", "", 0);
        (yyval.node)->child[0] = new_node("unary_list_op", (yyvsp[-1].token).content, 1);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2835 "parser.tab.c"
    break;

  case 68: /* simple_value: '(' expression ')'  */
#line 530 "./src/parser.y"
                         {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2843 "parser.tab.c"
    break;

  case 69: /* variable_declaration_statement: SIMPLE_TYPE IDENTIFIER ';'  */
#line 536 "./src/parser.y"
                                 {
        T_Symbol sym = symbol(
            (yyvsp[-2].token).content, 
            (yyvsp[-1].token).content, 
            "variable", 
            scope_id, 
            (yyvsp[-1].token).line_idx, 
            (yyvsp[-1].token).column_idx
        );
        insert_symbol(symbol_table_idx, sym);
        symbol_table_idx++;
        symbol_table_size++;

        (yyval.node) = new_node("variable_declaration", "", 0);
        (yyval.node)->child[0] = new_node("type", (yyvsp[-2].token).content, 1);
        (yyval.node)->child[1] = new_node("id", (yyvsp[-1].token).content, 1);

    }
#line 2866 "parser.tab.c"
    break;

  case 70: /* variable_declaration_statement: SIMPLE_TYPE LIST_TYPE IDENTIFIER ';'  */
#line 554 "./src/parser.y"
                                           {
        char type[100];
        strcpy(type, (yyvsp[-3].token).content);
        strcat(type, " ");
        strcat(type, (yyvsp[-2].token).content);
        T_Symbol sym = symbol(
            type, 
            (yyvsp[-1].token).content, 
            "variable", 
            scope_id, 
            (yyvsp[-1].token).line_idx, 
            (yyvsp[-1].token).column_idx
        );
        insert_symbol(symbol_table_idx, sym);
        symbol_table_idx++;
        symbol_table_size++;

        (yyval.node) = new_node("variable_declaration", "", 0);
        (yyval.node)->child[0] = new_node("type", type, 1);
        (yyval.node)->child[1] = new_node("id", (yyvsp[-1].token).content, 1);
    }
#line 2892 "parser.tab.c"
    break;

  case 71: /* constant: C_INTEGER  */
#line 578 "./src/parser.y"
                {
        (yyval.node) = new_node("const", (yyvsp[0].token).content, 1);
    }
#line 2900 "parser.tab.c"
    break;

  case 72: /* constant: C_FLOAT  */
#line 581 "./src/parser.y"
              {
        (yyval.node) = new_node("const", (yyvsp[0].token).content, 1);
    }
#line 2908 "parser.tab.c"
    break;

  case 73: /* constant: C_NIL  */
#line 584 "./src/parser.y"
            {
        (yyval.node) = new_node("const", (yyvsp[0].token).content, 1);
    }
#line 2916 "parser.tab.c"
    break;


#line 2920 "parser.tab.c"

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

#line 589 "./src/parser.y"


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
        printf(BGRN "Finished. Analysis found no errors");
        printf(reset "\n");
    } else {
        printf(BRED "Finished. Lexical Analysis found %d errors during execution", errors_count);
        printf(reset "\n");
    }

    print_symbol_table(symbol_table_size);

    // printar árvore
    show_tree(root_node, 0);
    free_tree(root_node);

    fclose(yyin);
    yylex_destroy();

    return 0;
}
