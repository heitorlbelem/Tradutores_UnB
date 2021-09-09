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
  YYSYMBOL_declarations = 34,              /* declarations  */
  YYSYMBOL_declaration = 35,               /* declaration  */
  YYSYMBOL_block = 36,                     /* block  */
  YYSYMBOL_statements = 37,                /* statements  */
  YYSYMBOL_statement = 38,                 /* statement  */
  YYSYMBOL_function_declaration_statement = 39, /* function_declaration_statement  */
  YYSYMBOL_parameters_optative = 40,       /* parameters_optative  */
  YYSYMBOL_parameters = 41,                /* parameters  */
  YYSYMBOL_parameter = 42,                 /* parameter  */
  YYSYMBOL_for_statement = 43,             /* for_statement  */
  YYSYMBOL_if_else_statement = 44,         /* if_else_statement  */
  YYSYMBOL_expression_statement = 45,      /* expression_statement  */
  YYSYMBOL_io_statement = 46,              /* io_statement  */
  YYSYMBOL_input_statement = 47,           /* input_statement  */
  YYSYMBOL_output_statement = 48,          /* output_statement  */
  YYSYMBOL_return_statement = 49,          /* return_statement  */
  YYSYMBOL_expression = 50,                /* expression  */
  YYSYMBOL_function_call_expression = 51,  /* function_call_expression  */
  YYSYMBOL_function_arguments_optional = 52, /* function_arguments_optional  */
  YYSYMBOL_function_arguments = 53,        /* function_arguments  */
  YYSYMBOL_function_argument = 54,         /* function_argument  */
  YYSYMBOL_expression_optative = 55,       /* expression_optative  */
  YYSYMBOL_or_expression_optative = 56,    /* or_expression_optative  */
  YYSYMBOL_or_expression = 57,             /* or_expression  */
  YYSYMBOL_and_expression = 58,            /* and_expression  */
  YYSYMBOL_equality_expression = 59,       /* equality_expression  */
  YYSYMBOL_relational_expression = 60,     /* relational_expression  */
  YYSYMBOL_list_expression = 61,           /* list_expression  */
  YYSYMBOL_addition_expression = 62,       /* addition_expression  */
  YYSYMBOL_multiplication_expression = 63, /* multiplication_expression  */
  YYSYMBOL_simple_value = 64,              /* simple_value  */
  YYSYMBOL_variable_declaration_statement = 65, /* variable_declaration_statement  */
  YYSYMBOL_constant = 66                   /* constant  */
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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2947

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  359

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
       0,    85,    85,    89,    90,    94,    95,    99,   103,   104,
     108,   109,   110,   111,   112,   113,   114,   115,   119,   123,
     124,   128,   129,   133,   137,   141,   142,   145,   149,   150,
     154,   158,   159,   163,   167,   168,   169,   173,   177,   178,
     182,   183,   187,   191,   192,   196,   197,   201,   202,   206,
     207,   211,   212,   216,   217,   221,   222,   226,   227,   231,
     232,   236,   237,   238,   239,   240,   241,   245,   249,   250,
     251
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
  "program", "declarations", "declaration", "block", "statements",
  "statement", "function_declaration_statement", "parameters_optative",
  "parameters", "parameter", "for_statement", "if_else_statement",
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
     265,   266,   267,   268,   269,   270,   271,   123,   125,    40,
      41,    44,    59,    61,    33,   272,   273,   274,   275,   276,
     277,   278
};
#endif

#define YYPACT_NINF (-275)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-71)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -3,     1,    24,    94,   172,   195,   197,    36,  -275,   213,
      37,   216,    35,    39,   101,   120,   123,   974,    38,   260,
     940,  1110,  1143,    76,   206,    50,   545,    81,    83,    89,
     701,  2440,   729,   701,   701,   279,   342,   442,   450,   468,
     481,   487,   504,   529,   124,   134,   515,   274,   235,   478,
     331,    52,  1178,  2601,   538,  2610,   140,   149,    67,   545,
     237,   151,   729,   117,   266,  2619,  2628,  1815,  1840,   167,
    2637,  2646,   558,   701,   701,   701,   701,   701,   701,   701,
     179,   176,   194,   272,   196,   205,   208,   684,   181,   218,
     224,   230,   687,  1865,  2655,   295,   818,  1358,   498,  2917,
    2664,  2673,   232,   922,   429,  2465,   256,   284,   290,   318,
     314,   534,    53,   693,   721,   743,   294,   974,   358,   769,
     974,   772,  1890,   209,   321,   545,   370,   403,   405,  2440,
    1915,  1940,  1965,  1990,  2015,  2040,  2065,  2090,   361,  2115,
    2689,  2705,  2721,   763,   932,   729,   932,   932,   375,    56,
     103,   -15,   347,   432,    84,  2737,  2753,  2769,   736,  1094,
    1200,   155,  1015,   729,  1015,  1015,   343,    98,   364,   884,
     841,    -9,  2785,  1239,  1293,  1316,    61,   428,   419,   545,
     425,   427,   436,  2440,   147,   198,   239,   268,   277,   288,
     320,   416,   441,   418,   445,   444,   237,   454,   729,   459,
     466,  2140,  2165,    67,   729,  2796,  2812,   458,  2828,  2844,
     932,   932,   932,   932,   932,   932,   932,    67,   922,  2496,
    2512,   482,  2528,  2544,  1015,  1015,  1015,  1015,  1015,  1015,
    1015,   497,   237,   512,   729,   495,   493,  2190,   547,  2215,
     535,  2240,   542,   554,   559,   562,  2265,   580,   588,  2860,
     128,    68,   806,   556,   109,  2876,  2892,   589,   360,  2560,
     376,  1062,   984,  1027,  2908,  2576,  2592,   560,   598,   566,
     590,   601,   602,   623,   612,   429,  2490,   620,   626,   629,
     625,   399,   429,  2465,   631,   635,   650,   651,    22,   507,
     599,   545,   640,   642,   656,  2440,   622,  1282,  1365,  1390,
    1415,  1440,  1465,  1490,  1515,   663,  1540,  2290,  2315,  2340,
     667,   637,   683,   711,   715,   294,   685,   237,   686,   729,
     702,   527,  2365,  2440,  1565,   294,  2465,   699,  1590,   691,
    1615,   709,   718,   719,   727,  1640,  2390,   732,   724,  2440,
     429,  2490,   713,   738,   748,  2465,  2415,   752,  1665,  1690,
    1715,  1740,   768,   294,  2490,   761,  1765,  2490,  1790
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
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
    -275,  -275,  -275,   746,    25,  -127,    11,  -275,  -275,  -275,
     777,    45,    46,    47,    72,    86,   132,   138,   -10,  1014,
    -166,  -275,   694,  -106,  -274,   963,  1039,   870,   826,   682,
     639,   596,   377,     0,   452
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,   130,    67,    68,     5,    13,    14,
      15,   131,   132,   133,   134,   135,   136,   137,   138,    45,
      81,    82,    83,    86,   110,    46,    47,    48,    49,    50,
      51,    52,    53,   139,    55
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,   287,   201,     6,     1,   -50,   228,    44,   310,     7,
     118,   -54,   -54,   212,   -50,   -50,    61,    54,   -54,   -54,
     -54,   -54,    69,   -17,     8,   -17,   -17,   -17,    36,   -17,
     -17,   -17,   -17,   -17,   -17,   -17,   -17,   247,   -17,   -17,
     -17,   -17,    35,    16,    12,    12,   -17,   -17,    80,    84,
      85,   257,    88,   -25,    91,    10,   237,   -19,    11,    17,
     -25,   -17,    37,    38,    39,   117,   347,   -56,   -17,    60,
     158,   159,   160,   -17,   -56,   161,   -35,    78,    93,   -56,
     -56,   -56,   -56,   162,    57,   210,   163,   -38,   -49,    40,
     240,   164,   165,    80,    -2,   192,   212,   -49,   -49,   -56,
      62,     1,    63,    41,   -56,   193,   194,    44,    64,   215,
      44,   -56,   -56,   -56,   -56,   197,   112,    54,   -35,   -35,
      54,   -20,    18,   -48,   -55,    89,   268,   224,   119,   -55,
     184,   121,   -48,   211,   215,   207,   -55,   -55,   -55,   -55,
     -22,   -22,    35,   -23,   -23,    35,    72,   -16,   -47,    42,
     185,   186,   187,   221,   -16,    43,   -36,   -47,   211,   -16,
     -21,   -21,    37,    38,    39,    37,    38,    39,   322,   233,
     -62,    11,    -4,    87,   217,   -62,   -62,   188,   218,    -4,
     -62,   -62,   -62,   -62,   -62,   -62,    85,    94,   242,    40,
     245,   189,    40,    80,   248,    -5,   102,    -6,   -14,   -42,
     -42,   105,    -5,    41,    -6,   -14,    41,    80,   258,   327,
     -14,   329,    93,    -3,   -39,   103,   -67,   195,   -34,   337,
      -3,   -62,    85,   -67,   270,    58,   273,   -44,   -62,    59,
     104,   -62,   -62,   -62,   -62,   -62,   -62,   190,   106,   -15,
      20,    21,    22,   191,   107,    24,   -15,   355,    93,    42,
     108,   -15,    42,    30,   -37,    43,    32,   -50,    43,   -43,
     -17,    33,    34,    75,   -50,   -50,   305,   -17,   -10,   140,
     141,   142,    90,   192,   143,   -10,   306,   -11,   113,   -16,
     -10,   318,   144,   193,   -11,   145,   -16,   297,   -28,   -11,
     146,   147,   -41,   -41,   311,   -28,   -48,   140,   141,   142,
     -28,   296,   143,   -48,    74,   194,   114,    85,   184,   331,
     144,   334,   115,   145,   -43,   194,   192,   -47,   146,   147,
     -29,   298,   299,   300,   -47,    74,   193,   -29,   185,   186,
     187,   305,   -29,    93,   336,   192,   116,   338,   -40,   -40,
     196,   306,   -18,   194,   305,   193,    77,   305,   301,   -18,
     346,   184,   348,   -54,   306,   188,   352,   306,   -54,   -54,
     -54,   -54,   302,   -36,   -36,   356,   296,   -52,   358,   189,
     184,   185,   186,   187,   213,   -52,   -52,   -52,   120,   296,
     -34,   -34,   296,   202,   -48,   -48,   298,   299,   300,   198,
     185,   186,   187,   -48,   225,   -36,   -47,   -47,   188,   298,
     299,   300,   298,   299,   300,   -47,   225,    66,   303,   156,
      70,    71,   189,   301,   304,   190,   -12,   188,   -13,   -37,
     -37,   191,   199,   -12,   200,   -13,   301,   302,   -12,   301,
     -13,   189,    20,    21,    22,   174,   231,    65,   232,   156,
     302,   156,   -14,   302,   234,    30,   235,   214,    32,   -14,
     -15,   -45,   -54,    33,    34,   236,   101,   -15,   190,   -54,
     -54,   -54,   -54,   238,   191,   -44,   239,   243,   -10,   140,
     141,   142,   244,   303,   143,   -10,   241,   190,   249,   304,
     174,   -11,   144,   191,   157,   145,   303,   -28,   -11,   303,
     146,   147,   304,   156,   -28,   304,   140,   141,   142,   272,
     -52,   143,   259,   271,   -29,    76,   -52,   -52,   -52,   144,
     175,   -29,   145,    77,   157,   316,   157,   146,   147,   267,
     -53,   206,   156,   208,   209,   -53,   -53,   -53,   -53,   -12,
     140,   141,   142,   333,   269,   143,   -12,   -35,   -13,   220,
     156,   222,   223,   144,    73,   -13,   145,   -27,    20,    21,
      22,   146,   147,    24,   -27,   175,   -46,   275,   -27,   -27,
     -67,    30,   276,    73,    32,   -27,   -33,   -67,   157,    33,
      34,   214,   -67,   -33,   277,   156,   -53,   156,   -33,   278,
     174,   156,   279,   -53,   -53,   -53,   -53,   156,   156,   156,
     156,   156,   156,   256,   174,   174,   157,   157,   157,   157,
     280,   174,   174,   174,   174,   174,   174,   266,   -34,   281,
     283,   156,    -7,   156,   175,   157,   175,   175,   317,    -7,
     282,   284,   285,   -16,    -7,   -16,   -16,   -16,   155,   -16,
     -16,   -16,   -16,   -16,   -16,   -16,   -16,   -25,   -16,   -16,
     -16,   -16,   307,   286,   -25,   -37,   -16,   -16,   308,   326,
     157,   309,   157,   312,   173,   175,   157,   313,   155,   319,
     155,   320,   157,   157,   157,   157,   157,   157,   157,   175,
     175,   154,   314,   315,   100,   321,   175,   175,   175,   175,
     175,   175,   175,   -30,   -33,   324,   157,    -7,   157,   325,
     -30,   -33,   156,   -30,    -7,   -30,   156,   172,   156,   173,
     -30,   154,   156,   154,    20,    21,    22,   328,   330,    65,
     332,   -32,   155,   340,   153,   -31,    99,    30,   -32,   339,
      32,   -32,   -31,   -32,   -26,    33,    34,   -31,   -32,   341,
     156,   -26,   140,   141,   142,   349,   -26,   143,   342,   343,
     171,   155,   172,   -31,   153,   144,   153,   344,   145,     9,
     -31,   -68,   345,   146,   147,   154,   -68,   -68,    98,   155,
     350,   -68,   -68,   -68,   -68,   -68,   -68,   157,   -24,   -26,
     351,   157,   -24,   157,   353,   -24,   -26,   157,   -62,   -24,
     -24,   357,   203,   -62,   154,   171,   204,     0,   -62,   -62,
     -62,   -62,   -62,   -62,   155,    56,   155,   109,   153,   173,
     155,     0,   154,     0,     0,   157,   155,   155,   155,   155,
     155,   255,     0,   173,   173,     0,     0,     0,     0,     0,
     173,   173,   173,   173,   173,   265,   -51,   153,     0,     0,
     155,     0,   155,   213,   -51,   -51,   -51,   154,     0,   154,
     -49,     0,   172,   154,     0,   153,    75,   -49,   -49,   154,
     154,   154,   154,   254,     0,     0,   172,   172,   152,     0,
       0,   -52,   -52,   172,   172,   172,   172,   264,   227,   -52,
     -52,   -52,     0,   154,     0,   154,     0,     0,     0,     0,
     153,     0,   153,     0,   170,   171,   153,     0,   152,     0,
     152,     0,   153,   153,   153,   253,     0,     0,     0,   171,
     171,    97,   151,     0,   -50,   -50,   171,   171,   171,   263,
       0,   155,   226,   -50,   -50,   155,   153,   155,   153,     0,
       0,   155,     0,     0,     0,   158,   159,   160,   169,   170,
     161,     0,   151,     0,   151,   140,   141,   142,   162,     0,
     205,   163,   152,     0,    96,     0,   164,   165,   144,   155,
       0,   145,     0,     0,   154,   -68,   146,   147,   154,     0,
     154,     0,   -68,     0,   154,   -68,   -68,   -68,   -68,   -68,
     -68,   152,     0,   169,     0,    19,     0,    20,    21,    22,
       0,    23,    24,    25,    26,    27,   151,    28,    29,   152,
      30,    31,   154,    32,     0,   149,     0,   153,    33,    34,
       0,   153,     0,   153,   -51,   -51,     0,   153,     0,     0,
       0,   227,   -51,   -51,   -51,   151,     0,     0,   158,   159,
     160,   167,     0,   219,   152,   149,   152,   149,     0,   170,
     152,   162,     0,   151,   163,   153,   152,   152,   252,   164,
     165,     0,   228,   170,   170,     0,   148,   -53,   -53,     0,
     170,   170,   262,     0,   -53,   -53,   -53,   -53,     0,     0,
     152,     0,   152,     0,     0,     0,   167,   111,   151,     0,
     151,   150,   166,   169,   151,     0,   148,     0,   148,   149,
     151,   251,   -49,   -49,     0,     0,     0,   169,   169,     0,
     226,   -49,   -49,     0,   169,   261,     0,   168,     0,     0,
       0,   150,     0,   150,   151,     0,   151,     0,   149,   -69,
       0,     0,    95,     0,   -69,   -69,     0,   166,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   149,     0,     0,     0,
     148,     0,   -69,     0,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   152,   168,     0,     0,   152,     0,   152,     0,     0,
       0,   152,     0,     0,     0,   150,     0,     0,   -70,   148,
       0,   149,     0,   149,     0,   -70,   167,   149,   -70,   -70,
     -70,   -70,   -70,   -70,     0,     0,     0,   148,     0,   152,
     167,   167,     0,     0,   150,   151,     0,     0,     0,   151,
       0,   151,     0,   -58,     0,   151,     0,   149,     0,   149,
     -58,     0,   150,   -58,    79,   -58,   -58,   -58,   -58,     0,
       0,     0,   148,     0,   148,   -70,     0,   166,   148,     0,
     -70,   -70,     0,   151,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   166,   166,     0,     0,     0,     0,   150,   111,   150,
       0,     0,   168,   150,     0,   111,     0,     0,   148,   250,
     148,     0,     0,     0,   -58,     0,   168,   168,     0,   -58,
     -58,     0,     0,   260,   -58,   230,   -58,   -58,   -58,   -58,
       0,     0,     0,   150,     0,   150,     0,     0,   149,     0,
       0,     0,   149,   -25,   149,   -25,   -25,   -25,   149,   -25,
     -25,   -25,   -25,   -25,   323,   -25,   -25,     0,   -25,   -25,
     -25,   -25,     0,   111,     0,     0,   -25,   -25,   -60,     0,
       0,     0,     0,   -60,   -60,     0,   149,     0,   -60,   -60,
     -60,   -60,   -60,   -60,     0,     0,     0,     0,     0,   148,
       0,   -61,     0,   148,     0,   148,   -61,   -61,     0,   148,
       0,   -61,   -61,   -61,   -61,   -61,   -61,     0,     0,     0,
       0,     0,     0,     0,   150,     0,     0,     0,   150,     0,
     150,     0,     0,     0,   150,     0,   -14,   148,   -14,   -14,
     -14,     0,   -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,
     -51,   -14,   -14,   -14,   -14,    76,   -51,   -51,   -51,   -14,
     -14,   -15,   150,   -15,   -15,   -15,     0,   -15,   -15,   -15,
     -15,   -15,   -15,   -15,   -15,     0,   -15,   -15,   -15,   -15,
       0,     0,     0,     0,   -15,   -15,   -10,     0,   -10,   -10,
     -10,     0,   -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,
       0,   -10,   -10,   -10,   -10,     0,     0,     0,     0,   -10,
     -10,   -11,     0,   -11,   -11,   -11,     0,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,   -11,     0,   -11,   -11,   -11,   -11,
       0,     0,     0,     0,   -11,   -11,   -28,     0,   -28,   -28,
     -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
       0,   -28,   -28,   -28,   -28,     0,     0,     0,     0,   -28,
     -28,   -29,     0,   -29,   -29,   -29,     0,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,
       0,     0,     0,     0,   -29,   -29,   -12,     0,   -12,   -12,
     -12,     0,   -12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,
       0,   -12,   -12,   -12,   -12,     0,     0,     0,     0,   -12,
     -12,   -13,     0,   -13,   -13,   -13,     0,   -13,   -13,   -13,
     -13,   -13,   -13,   -13,   -13,     0,   -13,   -13,   -13,   -13,
       0,     0,     0,     0,   -13,   -13,   -27,     0,   -27,   -27,
     -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
       0,   -27,   -27,   -27,   -27,     0,     0,     0,     0,   -27,
     -27,   -67,     0,   -67,   -67,   -67,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,     0,   -67,   -67,   -67,   -67,
       0,     0,     0,     0,   -67,   -67,   -33,     0,   -33,   -33,
     -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
       0,   -33,   -33,   -33,   -33,     0,     0,     0,     0,   -33,
     -33,    -7,     0,    -7,    -7,    -7,     0,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,
       0,     0,     0,     0,    -7,    -7,   -25,     0,   -25,   -25,
     -25,     0,   -25,   -25,   -25,   -25,   -25,   354,   -25,   -25,
       0,   -25,   -25,   -25,   -25,     0,     0,     0,     0,   -25,
     -25,   -30,     0,   -30,   -30,   -30,     0,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,
       0,     0,     0,     0,   -30,   -30,   -32,     0,   -32,   -32,
     -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
       0,   -32,   -32,   -32,   -32,     0,     0,     0,     0,   -32,
     -32,   -31,     0,   -31,   -31,   -31,     0,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,
       0,     0,     0,     0,   -31,   -31,   -26,     0,   -26,   -26,
     -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
       0,   -26,   -26,   -26,   -26,     0,     0,     0,     0,   -26,
     -26,   -24,     0,   -24,   -24,   -24,     0,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,
       0,     0,     0,     0,   -24,   -24,   122,     0,    20,    21,
      22,     0,   123,    24,   124,   125,   126,     0,   127,   128,
       0,    30,   129,    92,    32,     0,     0,     0,     0,    33,
      34,    -9,     0,    -9,    -9,    -9,     0,    -9,    -9,    -9,
      -9,    -9,     0,    -9,    -9,     0,    -9,    -9,    -9,    -9,
       0,     0,     0,     0,    -9,    -9,    -8,     0,    -8,    -8,
      -8,     0,    -8,    -8,    -8,    -8,    -8,     0,    -8,    -8,
       0,    -8,    -8,    -8,    -8,     0,     0,     0,     0,    -8,
      -8,   -17,     0,   -17,   -17,   -17,     0,   -17,   -17,   -17,
     -17,   -17,     0,   -17,   -17,     0,   -17,   -17,   -17,   -17,
       0,     0,     0,     0,   -17,   -17,   -16,     0,   -16,   -16,
     -16,     0,   -16,   -16,   -16,   -16,   -16,     0,   -16,   -16,
       0,   -16,   -16,   -16,   -16,     0,     0,     0,     0,   -16,
     -16,   -14,     0,   -14,   -14,   -14,     0,   -14,   -14,   -14,
     -14,   -14,     0,   -14,   -14,     0,   -14,   -14,   -14,   -14,
       0,     0,     0,     0,   -14,   -14,   -15,     0,   -15,   -15,
     -15,     0,   -15,   -15,   -15,   -15,   -15,     0,   -15,   -15,
       0,   -15,   -15,   -15,   -15,     0,     0,     0,     0,   -15,
     -15,   -10,     0,   -10,   -10,   -10,     0,   -10,   -10,   -10,
     -10,   -10,     0,   -10,   -10,     0,   -10,   -10,   -10,   -10,
       0,     0,     0,     0,   -10,   -10,   -11,     0,   -11,   -11,
     -11,     0,   -11,   -11,   -11,   -11,   -11,     0,   -11,   -11,
       0,   -11,   -11,   -11,   -11,     0,     0,     0,     0,   -11,
     -11,   -28,     0,   -28,   -28,   -28,     0,   -28,   -28,   -28,
     -28,   -28,     0,   -28,   -28,     0,   -28,   -28,   -28,   -28,
       0,     0,     0,     0,   -28,   -28,   -29,     0,   -29,   -29,
     -29,     0,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,
       0,   -29,   -29,   -29,   -29,     0,     0,     0,     0,   -29,
     -29,   -12,     0,   -12,   -12,   -12,     0,   -12,   -12,   -12,
     -12,   -12,     0,   -12,   -12,     0,   -12,   -12,   -12,   -12,
       0,     0,     0,     0,   -12,   -12,   -13,     0,   -13,   -13,
     -13,     0,   -13,   -13,   -13,   -13,   -13,     0,   -13,   -13,
       0,   -13,   -13,   -13,   -13,     0,     0,     0,     0,   -13,
     -13,   122,     0,    20,    21,    22,     0,   123,    24,   124,
     125,   126,     0,   127,   128,     0,    30,   129,   246,    32,
       0,     0,     0,     0,    33,    34,   -27,     0,   -27,   -27,
     -27,     0,   -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,
       0,   -27,   -27,   -27,   -27,     0,     0,     0,     0,   -27,
     -27,   122,     0,    20,    21,    22,     0,   123,    24,   124,
     125,   126,     0,   127,   128,     0,    30,   129,   274,    32,
       0,     0,     0,     0,    33,    34,   -67,     0,   -67,   -67,
     -67,     0,   -67,   -67,   -67,   -67,   -67,     0,   -67,   -67,
       0,   -67,   -67,   -67,   -67,     0,     0,     0,     0,   -67,
     -67,   -33,     0,   -33,   -33,   -33,     0,   -33,   -33,   -33,
     -33,   -33,     0,   -33,   -33,     0,   -33,   -33,   -33,   -33,
       0,     0,     0,     0,   -33,   -33,    -7,     0,    -7,    -7,
      -7,     0,    -7,    -7,    -7,    -7,    -7,     0,    -7,    -7,
       0,    -7,    -7,    -7,    -7,     0,     0,     0,     0,    -7,
      -7,   -30,     0,   -30,   -30,   -30,     0,   -30,   -30,   -30,
     -30,   -30,     0,   -30,   -30,     0,   -30,   -30,   -30,   -30,
       0,     0,     0,     0,   -30,   -30,   -32,     0,   -32,   -32,
     -32,     0,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,
       0,   -32,   -32,   -32,   -32,     0,     0,     0,     0,   -32,
     -32,   -31,     0,   -31,   -31,   -31,     0,   -31,   -31,   -31,
     -31,   -31,     0,   -31,   -31,     0,   -31,   -31,   -31,   -31,
       0,     0,     0,     0,   -31,   -31,   122,     0,    20,    21,
      22,     0,   123,    24,   124,   125,   126,     0,   127,   128,
       0,    30,   129,   335,    32,     0,     0,     0,     0,    33,
      34,   -26,     0,   -26,   -26,   -26,     0,   -26,   -26,   -26,
     -26,   -26,     0,   -26,   -26,     0,   -26,   -26,   -26,   -26,
       0,     0,     0,     0,   -26,   -26,   -24,     0,   -24,   -24,
     -24,     0,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,
       0,   -24,   -24,   -24,   -24,     0,     0,     0,     0,   -24,
     -24,   122,     0,    20,    21,    22,     0,   123,    24,   124,
     125,   126,     0,   127,   128,     0,    30,   129,     0,    32,
       0,     0,     0,     0,    33,    34,   176,     0,    20,    21,
      22,     0,   177,    24,   178,   179,   180,     0,   181,   182,
       0,    30,   183,     0,    32,     0,     0,     0,     0,    33,
      34,   288,     0,    20,    21,    22,     0,   289,    24,   290,
     291,   292,     0,   293,   294,     0,    30,   295,     0,    32,
       0,   -62,     0,     0,    33,    34,   -62,   -62,     0,     0,
       0,   -62,   -62,   -62,   -62,   -62,   -62,   -65,     0,     0,
       0,     0,   -65,   -65,     0,     0,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -64,     0,     0,     0,     0,   -64,   -64,
       0,     0,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -63,
       0,     0,     0,     0,   -63,   -63,     0,     0,     0,   -63,
     -63,   -63,   -63,   -63,   -63,   -66,     0,     0,     0,     0,
     -66,   -66,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -57,     0,     0,     0,     0,   -57,   -57,     0,     0,
       0,   -57,   230,   -57,   -57,   -57,   -57,   -59,     0,     0,
       0,     0,   -59,   -59,     0,     0,   -60,   -59,   -59,   -59,
     -59,   -59,   -59,   -60,     0,   -61,   -60,   -60,   -60,   -60,
     -60,   -60,   -61,     0,   -62,   -61,   -61,   -61,   -61,   -61,
     -61,   -62,     0,   -65,   -62,   -62,   -62,   -62,   -62,   -62,
     -65,     0,   -64,   -65,   -65,   -65,   -65,   -65,   -65,   -64,
       0,   -63,   -64,   -64,   -64,   -64,   -64,   -64,   -63,     0,
     -66,   -63,   -63,   -63,   -63,   -63,   -63,   -66,     0,   -57,
     -66,   -66,   -66,   -66,   -66,   -66,   -57,     0,   -59,   -57,
      79,   -57,   -57,   -57,   -57,   -59,     0,     0,   -59,   -59,
     -59,   -59,   -59,   -59,   -68,     0,     0,     0,     0,   -68,
       0,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     -69,     0,     0,     0,     0,   -69,     0,     0,     0,     0,
     -69,   -69,   -69,   -69,   -69,   -69,   -70,     0,     0,     0,
       0,   -70,     0,     0,     0,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -58,     0,     0,     0,     0,   -58,     0,     0,
       0,     0,   -58,   216,   -58,   -58,   -58,   -58,   -60,     0,
       0,     0,     0,   -60,     0,     0,     0,     0,   -60,   -60,
     -60,   -60,   -60,   -60,   -61,     0,     0,     0,     0,   -61,
       0,     0,     0,     0,   -61,   -61,   -61,   -61,   -61,   -61,
     -56,     0,     0,     0,     0,   -56,   -56,     0,     0,     0,
     229,   -62,   -56,   -56,   -56,   -56,   -62,     0,     0,     0,
       0,   -62,   -62,   -62,   -62,   -62,   -62,   -65,     0,     0,
       0,     0,   -65,     0,     0,     0,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -64,     0,     0,     0,     0,   -64,     0,
       0,     0,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -63,
       0,     0,     0,     0,   -63,     0,     0,     0,     0,   -63,
     -63,   -63,   -63,   -63,   -63,   -66,     0,     0,     0,     0,
     -66,     0,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -57,     0,     0,     0,     0,   -57,     0,     0,     0,
       0,   -57,   216,   -57,   -57,   -57,   -57,   -59,     0,     0,
       0,     0,   -59,     0,     0,     0,     0,   -59,   -59,   -59,
     -59,   -59,   -59,   -55,     0,     0,     0,     0,   -55,   -55,
       0,     0,   -55,   229,     0,   -55,   -55,   -55,   -55,   -55,
       0,     0,    78,     0,   -55,   -55,   -55,   -55
};

static const yytype_int16 yycheck[] =
{
       0,   275,   129,     3,     7,    20,    15,    17,   282,     8,
     116,    20,    21,    28,    29,    30,    26,    17,    27,    28,
      29,    30,    32,     1,     0,     3,     4,     5,    17,     7,
       8,     9,    10,    11,    12,    13,    14,   203,    16,    17,
      18,    19,    17,     8,     7,     7,    24,    25,    58,    59,
      60,   217,    62,     0,    64,    19,   183,    20,    22,    20,
       7,     0,    17,    17,    17,    12,   340,    15,     7,    19,
       3,     4,     5,    12,    22,     8,    20,    25,    67,    27,
      28,    29,    30,    16,     8,    29,    19,    20,    20,    17,
     196,    24,    25,   103,     0,   105,    28,    29,    30,    15,
      19,     7,    19,    17,    20,   105,   116,   117,    19,    25,
     120,    27,    28,    29,    30,   125,   105,   117,    20,    21,
     120,    20,    21,    20,    15,     8,   232,    29,   117,    20,
     105,   120,    29,    30,    25,   145,    27,    28,    29,    30,
      20,    21,   117,    20,    21,   120,    22,     0,    20,    17,
     105,   105,   105,   163,     7,    17,    22,    29,    30,    12,
      20,    21,   117,   117,   117,   120,   120,   120,   295,   179,
      15,    22,     0,    22,    19,    20,    21,   105,    23,     7,
      25,    26,    27,    28,    29,    30,   196,    20,   198,   117,
     200,   105,   120,   203,   204,     0,    20,     0,     0,    20,
      21,    20,     7,   117,     7,     7,   120,   217,   218,   315,
      12,   317,   201,     0,    20,    21,     0,     8,    22,   325,
       7,    15,   232,     7,   234,    19,   236,    22,    22,    23,
      22,    25,    26,    27,    28,    29,    30,   105,    20,     0,
       3,     4,     5,   105,    20,     8,     7,   353,   237,   117,
      20,    12,   120,    16,    22,   117,    19,    22,   120,    22,
       0,    24,    25,    28,    29,    30,   276,     7,     0,     3,
       4,     5,     6,   283,     8,     7,   276,     0,    22,     0,
      12,   291,    16,   283,     7,    19,     7,   276,     0,    12,
      24,    25,    20,    21,   283,     7,    22,     3,     4,     5,
      12,   276,     8,    29,    30,   315,    22,   317,   283,   319,
      16,   321,    22,    19,    20,   325,   326,    22,    24,    25,
       0,   276,   276,   276,    29,    30,   326,     7,   283,   283,
     283,   341,    12,   322,   323,   345,    22,   326,    20,    21,
      19,   341,     0,   353,   354,   345,    15,   357,   276,     7,
     339,   326,   341,    22,   354,   283,   345,   357,    27,    28,
      29,    30,   276,    20,    21,   354,   341,    20,   357,   283,
     345,   326,   326,   326,    27,    28,    29,    30,    20,   354,
      20,    21,   357,    22,    20,    21,   341,   341,   341,    19,
     345,   345,   345,    29,    30,    20,    20,    21,   326,   354,
     354,   354,   357,   357,   357,    29,    30,    30,   276,    32,
      33,    34,   326,   341,   276,   283,     0,   345,     0,    20,
      21,   283,    19,     7,    19,     7,   354,   341,    12,   357,
      12,   345,     3,     4,     5,    58,     8,     8,    19,    62,
     354,    64,     0,   357,    19,    16,    19,    15,    19,     7,
       0,    22,    20,    24,    25,    19,    79,     7,   326,    27,
      28,    29,    30,    22,   326,    20,    22,     8,     0,     3,
       4,     5,     6,   341,     8,     7,    22,   345,    20,   341,
     103,     0,    16,   345,    32,    19,   354,     0,     7,   357,
      24,    25,   354,   116,     7,   357,     3,     4,     5,     6,
      22,     8,    20,     8,     0,    27,    28,    29,    30,    16,
      58,     7,    19,    15,    62,     8,    64,    24,    25,    22,
      22,   144,   145,   146,   147,    27,    28,    29,    30,     0,
       3,     4,     5,     6,    22,     8,     7,    22,     0,   162,
     163,   164,   165,    16,    29,     7,    19,     0,     3,     4,
       5,    24,    25,     8,     7,   103,    22,    22,     0,    12,
       0,    16,    20,    29,    19,     7,     0,     7,   116,    24,
      25,    15,    12,     7,    20,   198,    20,   200,    12,    20,
     203,   204,    20,    27,    28,    29,    30,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   144,   145,   146,   147,
      20,   224,   225,   226,   227,   228,   229,   230,    20,    20,
      20,   234,     0,   236,   162,   163,   164,   165,    19,     7,
      22,    20,    20,     1,    12,     3,     4,     5,    32,     7,
       8,     9,    10,    11,    12,    13,    14,     0,    16,    17,
      18,    19,    22,    20,     7,    20,    24,    25,    22,    12,
     198,    22,   200,    22,    58,   203,   204,    22,    62,    19,
      64,    19,   210,   211,   212,   213,   214,   215,   216,   217,
     218,    32,    22,    22,    78,    19,   224,   225,   226,   227,
     228,   229,   230,     0,     0,    22,   234,     0,   236,    22,
       7,     7,   315,     0,     7,    12,   319,    58,   321,   103,
       7,    62,   325,    64,     3,     4,     5,    22,    22,     8,
       8,     0,   116,    22,    32,     0,    77,    16,     7,    20,
      19,     0,     7,    12,     0,    24,    25,    12,     7,    20,
     353,     7,     3,     4,     5,    22,    12,     8,    20,    20,
      58,   145,   103,     0,    62,    16,    64,    20,    19,     3,
       7,    15,    20,    24,    25,   116,    20,    21,    76,   163,
      22,    25,    26,    27,    28,    29,    30,   315,     0,     0,
      22,   319,     0,   321,    22,     7,     7,   325,    15,     7,
      12,    20,    19,    20,   145,   103,    23,    -1,    25,    26,
      27,    28,    29,    30,   198,    18,   200,   103,   116,   203,
     204,    -1,   163,    -1,    -1,   353,   210,   211,   212,   213,
     214,   215,    -1,   217,   218,    -1,    -1,    -1,    -1,    -1,
     224,   225,   226,   227,   228,   229,    20,   145,    -1,    -1,
     234,    -1,   236,    27,    28,    29,    30,   198,    -1,   200,
      22,    -1,   203,   204,    -1,   163,    28,    29,    30,   210,
     211,   212,   213,   214,    -1,    -1,   217,   218,    32,    -1,
      -1,    20,    21,   224,   225,   226,   227,   228,    27,    28,
      29,    30,    -1,   234,    -1,   236,    -1,    -1,    -1,    -1,
     198,    -1,   200,    -1,    58,   203,   204,    -1,    62,    -1,
      64,    -1,   210,   211,   212,   213,    -1,    -1,    -1,   217,
     218,    75,    32,    -1,    20,    21,   224,   225,   226,   227,
      -1,   315,    28,    29,    30,   319,   234,   321,   236,    -1,
      -1,   325,    -1,    -1,    -1,     3,     4,     5,    58,   103,
       8,    -1,    62,    -1,    64,     3,     4,     5,    16,    -1,
       8,    19,   116,    -1,    74,    -1,    24,    25,    16,   353,
      -1,    19,    -1,    -1,   315,    15,    24,    25,   319,    -1,
     321,    -1,    22,    -1,   325,    25,    26,    27,    28,    29,
      30,   145,    -1,   103,    -1,     1,    -1,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,   116,    13,    14,   163,
      16,    17,   353,    19,    -1,    32,    -1,   315,    24,    25,
      -1,   319,    -1,   321,    20,    21,    -1,   325,    -1,    -1,
      -1,    27,    28,    29,    30,   145,    -1,    -1,     3,     4,
       5,    58,    -1,     8,   198,    62,   200,    64,    -1,   203,
     204,    16,    -1,   163,    19,   353,   210,   211,   212,    24,
      25,    -1,    15,   217,   218,    -1,    32,    20,    21,    -1,
     224,   225,   226,    -1,    27,    28,    29,    30,    -1,    -1,
     234,    -1,   236,    -1,    -1,    -1,   103,   104,   198,    -1,
     200,    32,    58,   203,   204,    -1,    62,    -1,    64,   116,
     210,   211,    20,    21,    -1,    -1,    -1,   217,   218,    -1,
      28,    29,    30,    -1,   224,   225,    -1,    58,    -1,    -1,
      -1,    62,    -1,    64,   234,    -1,   236,    -1,   145,    15,
      -1,    -1,    73,    -1,    20,    21,    -1,   103,    -1,    25,
      26,    27,    28,    29,    30,    15,   163,    -1,    -1,    -1,
     116,    -1,    22,    -1,    -1,    25,    26,    27,    28,    29,
      30,   315,   103,    -1,    -1,   319,    -1,   321,    -1,    -1,
      -1,   325,    -1,    -1,    -1,   116,    -1,    -1,    15,   145,
      -1,   198,    -1,   200,    -1,    22,   203,   204,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,   163,    -1,   353,
     217,   218,    -1,    -1,   145,   315,    -1,    -1,    -1,   319,
      -1,   321,    -1,    15,    -1,   325,    -1,   234,    -1,   236,
      22,    -1,   163,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,   198,    -1,   200,    15,    -1,   203,   204,    -1,
      20,    21,    -1,   353,    -1,    25,    26,    27,    28,    29,
      30,   217,   218,    -1,    -1,    -1,    -1,   198,   275,   200,
      -1,    -1,   203,   204,    -1,   282,    -1,    -1,   234,   210,
     236,    -1,    -1,    -1,    15,    -1,   217,   218,    -1,    20,
      21,    -1,    -1,   224,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,   234,    -1,   236,    -1,    -1,   315,    -1,
      -1,    -1,   319,     1,   321,     3,     4,     5,   325,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    -1,   340,    -1,    -1,    24,    25,    15,    -1,
      -1,    -1,    -1,    20,    21,    -1,   353,    -1,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,   315,
      -1,    15,    -1,   319,    -1,   321,    20,    21,    -1,   325,
      -1,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   315,    -1,    -1,    -1,   319,    -1,
     321,    -1,    -1,    -1,   325,    -1,     1,   353,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      22,    16,    17,    18,    19,    27,    28,    29,    30,    24,
      25,     1,   353,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    13,    14,    -1,    16,    17,    -1,    19,
      -1,    -1,    -1,    -1,    24,    25,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    13,    14,
      -1,    16,    17,    -1,    19,    -1,    -1,    -1,    -1,    24,
      25,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    13,    14,    -1,    16,    17,    -1,    19,
      -1,    15,    -1,    -1,    24,    25,    20,    21,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    15,    -1,    -1,
      -1,    -1,    20,    21,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    15,    -1,    -1,    -1,    -1,    20,    21,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    15,
      -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    15,    -1,    -1,    -1,    -1,
      20,    21,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    15,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    15,    -1,    -1,
      -1,    -1,    20,    21,    -1,    -1,    15,    25,    26,    27,
      28,    29,    30,    22,    -1,    15,    25,    26,    27,    28,
      29,    30,    22,    -1,    15,    25,    26,    27,    28,    29,
      30,    22,    -1,    15,    25,    26,    27,    28,    29,    30,
      22,    -1,    15,    25,    26,    27,    28,    29,    30,    22,
      -1,    15,    25,    26,    27,    28,    29,    30,    22,    -1,
      15,    25,    26,    27,    28,    29,    30,    22,    -1,    15,
      25,    26,    27,    28,    29,    30,    22,    -1,    15,    25,
      26,    27,    28,    29,    30,    22,    -1,    -1,    25,    26,
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
      15,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,
      25,    15,    27,    28,    29,    30,    20,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    15,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    15,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    15,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    15,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    15,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    15,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    15,    -1,    -1,    -1,    -1,    20,    21,
      -1,    -1,    15,    25,    -1,    27,    28,    29,    30,    22,
      -1,    -1,    25,    -1,    27,    28,    29,    30
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     7,    33,    34,    35,    39,    65,     8,     0,    35,
      19,    22,     7,    40,    41,    42,     8,    20,    21,     1,
       3,     4,     5,     7,     8,     9,    10,    11,    13,    14,
      16,    17,    19,    24,    25,    36,    38,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    42,     8,    19,    23,
      19,    50,    19,    19,    19,     8,    64,    37,    38,    50,
      64,    64,    22,    29,    30,    28,    27,    15,    25,    26,
      50,    52,    53,    54,    50,    50,    55,    22,    50,     8,
       6,    50,    18,    38,    20,    58,    59,    60,    61,    62,
      63,    64,    20,    21,    22,    20,    20,    20,    20,    54,
      56,    57,    38,    22,    22,    22,    22,    12,    55,    38,
      20,    38,     1,     7,     9,    10,    11,    13,    14,    17,
      36,    43,    44,    45,    46,    47,    48,    49,    50,    65,
       3,     4,     5,     8,    16,    19,    24,    25,    51,    57,
      58,    59,    60,    61,    62,    63,    64,    66,     3,     4,
       5,     8,    16,    19,    24,    25,    51,    57,    58,    59,
      60,    61,    62,    63,    64,    66,     1,     7,     9,    10,
      11,    13,    14,    17,    36,    43,    44,    45,    46,    47,
      48,    49,    50,    65,    50,     8,    19,    50,    19,    19,
      19,    37,    22,    19,    23,     8,    64,    50,    64,    64,
      29,    30,    28,    27,    15,    25,    26,    19,    23,     8,
      64,    50,    64,    64,    29,    30,    28,    27,    15,    25,
      26,     8,    19,    50,    19,    19,    19,    37,    22,    22,
      55,    22,    50,     8,     6,    50,    18,    52,    50,    20,
      58,    59,    60,    61,    62,    63,    64,    52,    50,    20,
      58,    59,    60,    61,    62,    63,    64,    22,    55,    22,
      50,     8,     6,    50,    18,    22,    20,    20,    20,    20,
      20,    20,    22,    20,    20,    20,    20,    56,     1,     7,
       9,    10,    11,    13,    14,    17,    36,    38,    43,    44,
      45,    46,    47,    48,    49,    50,    65,    22,    22,    22,
      56,    38,    22,    22,    22,    22,     8,    19,    50,    19,
      19,    19,    37,    12,    22,    22,    12,    55,    22,    55,
      22,    50,     8,     6,    50,    18,    38,    55,    38,    20,
      22,    20,    20,    20,    20,    20,    38,    56,    38,    22,
      22,    22,    38,    22,    12,    55,    38,    20,    38
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    32,    33,    34,    34,    35,    35,    36,    37,    37,
      38,    38,    38,    38,    38,    38,    38,    38,    39,    40,
      40,    41,    41,    42,    43,    44,    44,    45,    46,    46,
      47,    48,    48,    49,    50,    50,    50,    51,    52,    52,
      53,    53,    54,    55,    55,    56,    56,    57,    57,    58,
      58,    59,    59,    60,    60,    61,    61,    62,    62,    63,
      63,    64,    64,    64,    64,    64,    64,    65,    66,    66,
      66
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     6,     0,
       1,     3,     1,     2,     9,     5,     7,     2,     1,     1,
       5,     5,     5,     3,     3,     1,     1,     4,     0,     1,
       3,     1,     1,     0,     1,     0,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     1,     2,     2,     2,     3,     3,     1,     1,
       1
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
  case 17: /* statement: error  */
#line 115 "./src/parser.y"
            {}
#line 2154 "parser.tab.c"
    break;


#line 2158 "parser.tab.c"

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

#line 254 "./src/parser.y"


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
