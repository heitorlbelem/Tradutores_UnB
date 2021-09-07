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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2784

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  356

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
       0,    85,    85,    89,    90,    91,    95,    96,   100,   104,
     105,   109,   110,   111,   112,   113,   114,   115,   119,   123,
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

#define YYPACT_NINF (-271)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-71)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      61,    39,    13,    33,   169,   313,   345,   353,    -6,  -271,
     403,    18,   411,    45,    44,    29,    98,   182,   216,    80,
     165,  1047,  2436,    83,   946,   102,   133,   111,   123,   125,
     251,  2327,   420,   251,   251,   414,   503,   583,   657,   666,
     703,   709,   783,   802,    86,   128,   222,   118,   419,   895,
       2,  1300,  2445,  2454,   815,  2463,   241,   134,     3,   133,
      32,   137,   420,   153,    55,  2472,  2481,  1775,  1798,   150,
    2490,  2499,   824,   251,   251,   251,   251,   251,   251,   251,
     272,   162,   335,   362,   166,   178,   189,   832,   194,   196,
     208,   225,   851,  1821,  2508,   209,   510,   908,   576,  2743,
    2517,  2526,   214,   795,    90,  2350,   220,   231,   236,   372,
     268,   507,    65,   887,   888,   932,   732,   216,   246,   948,
     216,   982,   286,   261,   133,   277,   305,   307,  2327,  1844,
    1867,  1890,  1913,  1936,  1959,  1982,  2005,   308,  2028,  2542,
    2558,  2574,   987,   825,   420,   825,   825,   315,   -15,   176,
      53,   845,   650,   744,  2590,  2606,  2622,   258,   526,  1142,
     704,  1040,   420,  1040,  1040,   608,    49,   103,   529,   881,
    1088,   289,  1203,  1225,  1316,   333,   342,   133,   350,   359,
     365,  2327,    85,    89,   104,   122,   155,   265,   291,   336,
     373,   363,   377,   383,    32,   391,   420,   379,   244,  2051,
    2074,     3,   420,  2638,  2654,   396,  2670,  2686,   825,   825,
     825,   825,   825,   825,   825,     3,   795,  1334,  1352,   407,
    1393,  2379,  1040,  1040,  1040,  1040,  1040,  1040,  1040,   397,
      32,   415,   420,   434,   448,  2097,   367,  2120,   428,  2143,
     440,   446,   467,   475,  2166,   478,   481,  2702,   282,   144,
     950,  1066,  2754,  2718,  2734,   491,   670,  2395,   806,   733,
    1236,  1116,   479,  2411,  2427,   394,   470,   458,   504,   528,
     547,   562,   462,    90,  2373,   471,   508,   570,   564,   672,
      90,  2350,   574,   580,   598,   610,   622,   631,   133,   639,
     642,   653,  2327,   472,   509,   561,   635,  1279,  1387,  1434,
    1471,  1499,   619,  1522,  2189,  2212,  2235,   682,   581,   587,
     655,   656,   732,   690,    32,   692,   420,   686,   762,  2258,
    2327,  1545,   732,  2350,   698,  1568,   706,  1591,   700,   721,
     722,   724,  1614,  2281,   726,   801,  2327,    90,  2373,   716,
     753,   755,  2350,  2304,   757,  1637,  1660,  1683,  1706,   805,
     732,  2373,   735,  1729,  2373,  1752
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
       0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -271,  -271,  -271,   788,    26,  -126,     8,  -271,  -271,  -271,
     707,    34,    48,    58,    66,    84,    92,   117,   -17,  1155,
    -181,  -271,   693,  -104,  -270,   963,  1118,   926,   889,   718,
     681,   644,   399,     0,   473
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,   129,    67,    68,     6,    14,    15,
      16,   130,   131,   132,   133,   134,   135,   136,   137,    45,
      81,    82,    83,    86,   110,    46,    47,    48,    49,    50,
      51,    52,    53,   138,    55
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    44,   199,   285,     7,   -35,   157,   158,   159,    61,
     307,   160,   118,    11,   208,    69,    12,    77,    54,   161,
     245,     8,   162,   -38,   -54,    13,    36,   163,   164,   -54,
     -54,   -54,   -54,     9,   255,    20,    21,    22,   -19,    -5,
      24,    80,    84,    85,    35,    88,    -5,    91,    30,   -20,
      19,    32,    37,    17,   -43,   235,    33,    34,   139,   140,
     141,    90,     1,   142,    18,   -25,    38,   344,     2,   -35,
     -35,   143,   -25,   -50,   144,    93,    39,   117,   222,   145,
     146,   210,   -50,   -50,    40,   -17,    80,    13,   190,   -15,
     238,    57,   -17,    20,    21,    22,   -15,   -17,    65,   192,
      44,   -15,    41,    44,   -16,   191,    30,   195,    72,    32,
      42,   -16,   -45,   112,    33,    34,   -16,    54,   -22,   -22,
      54,    60,   -11,   -48,   -48,   119,   266,   205,   121,   -11,
      62,   182,   -48,   223,   -11,    43,    20,    21,    22,   183,
     -48,    24,    63,    35,    64,   219,    35,   -48,    74,    30,
     -36,    37,    32,   184,    37,   -12,    12,    33,    34,    87,
     231,    89,   -12,   185,   -49,    38,   319,   -12,    38,    -2,
      94,   186,   210,   -49,   -49,    39,     2,    85,    39,   240,
     -68,   243,   102,    40,    80,   246,    40,   -68,   -34,   187,
     -68,   -68,   -68,   -68,   -68,   -68,   -48,   188,    80,   256,
     -44,    41,   -23,   -23,    41,   -48,   209,    93,   324,    42,
     326,   104,    42,    85,   105,   268,   106,   271,   334,    20,
      21,    22,   189,    23,    24,    25,    26,    27,   107,    28,
      29,   -47,    30,    31,    43,    32,   -37,    43,   -47,    74,
      33,    34,   113,    93,   -35,   108,   352,   139,   140,   141,
     242,    73,   142,   114,    20,    21,    22,   302,   115,    65,
     143,   -21,   -21,   144,   190,   -28,   120,    30,   145,   146,
      32,   315,   -28,   -68,   303,    33,    34,   -28,   -68,   -68,
     194,   191,   294,   -68,   -68,   -68,   -68,   -68,   -68,   308,
     116,   -29,   -42,   -42,   193,   192,   196,    85,   -29,   328,
     293,   331,   -47,   -29,   -56,   192,   190,   182,   295,   -56,
     -56,   -47,   209,    -4,   227,   183,   -56,   -56,   -56,   -56,
      -4,   302,   296,   191,   197,   190,   198,    93,   333,   184,
     200,   335,   297,   192,   302,   -36,   -13,   302,   303,   185,
     298,   229,   191,   -13,   343,    -6,   345,   186,   -13,   182,
     349,   303,    -6,    -7,   303,   -39,   103,   183,   299,   353,
      -7,   230,   355,   -14,   293,   187,   300,   -27,   182,   232,
     -14,   184,   295,   188,   -27,   -14,   183,   293,   233,   -27,
     293,   185,   -41,   -41,   234,   295,   296,   241,   295,   186,
     184,   301,   -40,   -40,   -67,   236,   297,   -44,   189,   296,
     185,   -67,   296,    -3,   298,   237,   -67,   187,   186,   297,
      -3,   -67,   297,   239,   -17,   188,   247,   298,   -67,   265,
     298,   -17,   299,   139,   140,   141,   187,   257,   142,    66,
     300,   155,    70,    71,   188,   299,   143,   267,   299,   144,
     189,   -50,   269,   300,   145,   146,   300,    75,   -50,   -50,
     273,   139,   140,   141,   270,   301,   142,   173,   -33,   189,
     274,   155,    -8,   155,   143,   -33,   275,   144,   301,    -8,
     -33,   301,   145,   146,    -8,   -17,   -17,   -17,   101,   -17,
     -17,   -17,   -17,   -17,   -17,   -17,   -17,   276,   -17,   -17,
     -17,   -17,   280,   304,   -55,   277,   -17,   -17,   278,   -55,
     -55,   -34,   173,   -18,   227,   156,   -55,   -55,   -55,   -55,
     -18,   279,   -25,   -25,   -25,   155,   -25,   -25,   -25,   -25,
     -25,   320,   -25,   -25,   281,   -25,   -25,   -25,   -25,   -46,
     305,   174,   -49,   -25,   -25,   156,    73,   156,    75,   -49,
     -49,   -69,   204,   155,   206,   207,   -69,   -69,   282,   -50,
     -50,   -69,   -69,   -69,   -69,   -69,   -69,   224,   -50,   -50,
     218,   155,   220,   221,   -15,   -15,   -15,   283,   -15,   -15,
     -15,   -15,   -15,   -15,   -15,   -15,   174,   -15,   -15,   -15,
     -15,   -25,   284,   -15,   -37,   -15,   -15,   -30,   -25,   156,
     -15,    77,   306,   323,   -30,   155,   309,   155,   -53,   -30,
     173,   155,   310,   -53,   -53,   -53,   -53,   155,   155,   155,
     155,   155,   155,   254,   173,   173,   156,   156,   156,   156,
     311,   173,   173,   173,   173,   173,   173,   264,   -36,   -36,
     313,   155,   312,   155,   174,   156,   174,   174,   -16,   -16,
     -16,   321,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,
     314,   -16,   -16,   -16,   -16,   -32,   -31,   -16,   316,   -16,
     -16,   317,   -32,   -31,   -16,   212,   -11,   -32,   -31,   156,
     -54,   156,   318,   -11,   174,   156,   154,   -54,   -54,   -54,
     -54,   156,   156,   156,   156,   156,   156,   156,   174,   174,
     -34,   -34,   -37,   -37,   329,   174,   174,   174,   174,   174,
     174,   174,   172,   -12,   322,   156,   154,   156,   154,   -28,
     -12,   155,   325,   153,   327,   155,   -28,   155,   336,   -62,
     338,   155,   100,   215,   -62,   -62,    56,   216,   337,   -62,
     -62,   -62,   -62,   -62,   -62,   139,   140,   141,   346,   171,
     142,   339,   340,   153,   341,   153,   342,   172,   143,   155,
     152,   144,   -43,   -49,   -49,   354,   145,   146,    99,   -56,
     154,   224,   -49,   -49,   -56,   139,   140,   141,   330,   213,
     142,   -56,   -56,   -56,   -56,   347,   170,   348,   143,   350,
     152,   144,   152,   -29,   171,   156,   145,   146,   154,   156,
     -29,   156,    10,     0,    98,   156,   109,   153,   157,   158,
     159,   -26,   -13,   160,     0,   -24,   154,     0,   -26,   -13,
       0,   161,   -24,   -26,   162,   -14,     0,   -24,     0,   163,
     164,   170,   -14,   156,   -27,   153,   -47,   -47,   139,   140,
     141,   -27,   -33,   203,   152,   -47,   223,     0,     0,   -33,
     154,   143,   154,   153,   144,   172,   154,     0,     0,   145,
     146,    -8,   154,   154,   154,   154,   154,   253,    -8,   172,
     172,     0,   152,     0,     0,   -52,   172,   172,   172,   172,
     172,   263,   211,   -52,   -52,   -52,   154,   153,   154,   153,
     152,     0,   171,   153,     0,     0,     0,   -30,   -32,   153,
     153,   153,   153,   252,   -30,   -32,   171,   171,     0,     0,
       0,   -52,   -52,   171,   171,   171,   171,   262,   225,   -52,
     -52,   -52,     0,   153,   152,   153,   152,   -52,     0,   170,
     152,   151,    76,   -52,   -52,   -52,   152,   152,   152,   251,
     -51,     0,   -31,   170,   170,    76,   -51,   -51,   -51,   -31,
     170,   170,   170,   261,     0,     0,     0,   169,   -26,     0,
     152,   151,   152,   151,     0,   -26,   154,     0,   150,     0,
     154,   -62,   154,     0,    97,    58,   154,     0,   -62,    59,
     -51,   -62,   -62,   -62,   -62,   -62,   -62,   211,   -51,   -51,
     -51,     0,   -24,     0,   168,     0,     0,     0,   150,   -24,
     150,     0,   169,   153,   154,   148,     0,   153,     0,   153,
      96,     0,   -62,   153,     0,   151,   201,   -62,     0,     0,
     202,     0,   -62,   -62,   -62,   -62,   -62,   -62,     0,     0,
       0,   166,     0,     0,     0,   148,     0,   148,     0,   168,
     152,   153,     0,   151,   152,     0,   152,     0,     0,     0,
     152,     0,   150,   157,   158,   159,     0,     0,   217,     0,
       0,   151,     0,     0,     0,     0,   161,     0,     0,   162,
       0,     0,   -69,     0,   163,   164,   166,   111,   152,   -69,
     150,     0,   -69,   -69,   -69,   -69,   -69,   -69,     0,   148,
       0,   212,     0,     0,     0,   151,   -53,   151,   150,     0,
     169,   151,     0,   -53,   -53,   -53,   -53,   151,   151,   250,
       0,     0,     0,   226,   169,   169,     0,   148,   -54,   -54,
       0,   169,   169,   260,     0,   -54,   -54,   -54,   -54,     0,
       0,   151,   150,   151,   150,   148,     0,   168,   150,     0,
       0,   226,     0,     0,   150,   249,   -53,   -53,     0,     0,
       0,   168,   168,   -53,   -53,   -53,   -53,     0,   168,   259,
     149,     0,     0,     0,     0,     0,     0,   -70,   150,   148,
     150,   148,   -70,   -70,   166,   148,     0,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,   167,     0,   166,   166,
     149,     0,   149,     0,     0,     0,     0,   147,     0,     0,
       0,    95,     0,     0,     0,   148,     0,   148,     0,     0,
       0,   151,     0,     0,     0,   151,     0,   151,     0,     0,
       0,   151,     0,   165,     0,     0,     0,   147,   -58,   147,
       0,   167,     0,   -58,   -58,     0,     0,     0,   -58,   228,
     -58,   -58,   -58,   -58,   149,     0,   111,     0,   150,   151,
     -60,     0,   150,   111,   150,   -60,   -60,     0,   150,     0,
     -60,   -60,   -60,   -60,   -60,   -60,   -51,   -51,   165,     0,
       0,     0,   149,   225,   -51,   -51,   -51,     0,     0,     0,
       0,   147,     0,     0,     0,   148,   150,     0,     0,   148,
     149,   148,   -11,   -11,   -11,   148,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,     0,   -11,   -11,   -11,   -11,   147,
     111,     0,     0,   -11,   -11,     0,     0,     0,     0,     0,
       0,     0,     0,   148,   149,   -56,   149,   147,     0,   167,
     149,     0,   -56,     0,     0,    78,   248,   -56,   -56,   -56,
     -56,   -61,     0,   167,   167,     0,   -61,   -61,     0,     0,
     258,   -61,   -61,   -61,   -61,   -61,   -61,     0,     0,   -62,
     149,   147,   149,   147,   -62,   -62,   165,   147,     0,   -62,
     -62,   -62,   -62,   -62,   -62,     0,     0,   -65,     0,     0,
     165,   165,   -65,   -65,     0,     0,     0,   -65,   -65,   -65,
     -65,   -65,   -65,     0,     0,     0,     0,   147,     0,   147,
     -12,   -12,   -12,     0,   -12,   -12,   -12,   -12,   -12,   -12,
     -12,   -12,     0,   -12,   -12,   -12,   -12,     0,   -64,     0,
       0,   -12,   -12,   -64,   -64,     0,     0,     0,   -64,   -64,
     -64,   -64,   -64,   -64,     0,     0,     0,     0,     0,     0,
     149,     0,     0,     0,   149,     0,   149,   -28,   -28,   -28,
     149,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,
     -28,   -28,   -28,   -28,     0,     0,     0,     0,   -28,   -28,
       0,     0,     0,     0,     0,     0,     0,   147,   149,     0,
       0,   147,     0,   147,   -29,   -29,   -29,   147,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,
     -29,     0,     0,     0,     0,   -29,   -29,     0,     0,     0,
       0,     0,   -13,   -13,   -13,   147,   -13,   -13,   -13,   -13,
     -13,   -13,   -13,   -13,     0,   -13,   -13,   -13,   -13,     0,
       0,     0,     0,   -13,   -13,   -14,   -14,   -14,     0,   -14,
     -14,   -14,   -14,   -14,   -14,   -14,   -14,     0,   -14,   -14,
     -14,   -14,     0,     0,     0,     0,   -14,   -14,   -27,   -27,
     -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
       0,   -27,   -27,   -27,   -27,     0,     0,     0,     0,   -27,
     -27,   -67,   -67,   -67,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,   -67,   -67,   -67,   -67,     0,     0,
       0,     0,   -67,   -67,   -33,   -33,   -33,     0,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,
     -33,     0,     0,     0,     0,   -33,   -33,    -8,    -8,    -8,
       0,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,     0,
      -8,    -8,    -8,    -8,     0,     0,     0,     0,    -8,    -8,
     -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,   351,
     -25,   -25,     0,   -25,   -25,   -25,   -25,     0,     0,     0,
       0,   -25,   -25,   -30,   -30,   -30,     0,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,
       0,     0,     0,     0,   -30,   -30,   -32,   -32,   -32,     0,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,
     -32,   -32,   -32,     0,     0,     0,     0,   -32,   -32,   -31,
     -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,     0,   -31,   -31,   -31,   -31,     0,     0,     0,     0,
     -31,   -31,   -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,     0,
       0,     0,     0,   -26,   -26,   -24,   -24,   -24,     0,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,
     -24,   -24,     0,     0,     0,     0,   -24,   -24,    20,    21,
      22,     0,   122,    24,   123,   124,   125,     0,   126,   127,
       0,    30,   128,    92,    32,     0,     0,     0,     0,    33,
      34,   -10,   -10,   -10,     0,   -10,   -10,   -10,   -10,   -10,
       0,   -10,   -10,     0,   -10,   -10,   -10,   -10,     0,     0,
       0,     0,   -10,   -10,    -9,    -9,    -9,     0,    -9,    -9,
      -9,    -9,    -9,     0,    -9,    -9,     0,    -9,    -9,    -9,
      -9,     0,     0,     0,     0,    -9,    -9,   -17,   -17,   -17,
       0,   -17,   -17,   -17,   -17,   -17,     0,   -17,   -17,     0,
     -17,   -17,   -17,   -17,     0,     0,     0,     0,   -17,   -17,
     -15,   -15,   -15,     0,   -15,   -15,   -15,   -15,   -15,     0,
     -15,   -15,     0,   -15,   -15,   -15,   -15,     0,     0,     0,
       0,   -15,   -15,   -16,   -16,   -16,     0,   -16,   -16,   -16,
     -16,   -16,     0,   -16,   -16,     0,   -16,   -16,   -16,   -16,
       0,     0,     0,     0,   -16,   -16,   -11,   -11,   -11,     0,
     -11,   -11,   -11,   -11,   -11,     0,   -11,   -11,     0,   -11,
     -11,   -11,   -11,     0,     0,     0,     0,   -11,   -11,   -12,
     -12,   -12,     0,   -12,   -12,   -12,   -12,   -12,     0,   -12,
     -12,     0,   -12,   -12,   -12,   -12,     0,     0,     0,     0,
     -12,   -12,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,
     -28,     0,   -28,   -28,     0,   -28,   -28,   -28,   -28,     0,
       0,     0,     0,   -28,   -28,   -29,   -29,   -29,     0,   -29,
     -29,   -29,   -29,   -29,     0,   -29,   -29,     0,   -29,   -29,
     -29,   -29,     0,     0,     0,     0,   -29,   -29,   -13,   -13,
     -13,     0,   -13,   -13,   -13,   -13,   -13,     0,   -13,   -13,
       0,   -13,   -13,   -13,   -13,     0,     0,     0,     0,   -13,
     -13,   -14,   -14,   -14,     0,   -14,   -14,   -14,   -14,   -14,
       0,   -14,   -14,     0,   -14,   -14,   -14,   -14,     0,     0,
       0,     0,   -14,   -14,    20,    21,    22,     0,   122,    24,
     123,   124,   125,     0,   126,   127,     0,    30,   128,   244,
      32,     0,     0,     0,     0,    33,    34,   -27,   -27,   -27,
       0,   -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,     0,
     -27,   -27,   -27,   -27,     0,     0,     0,     0,   -27,   -27,
      20,    21,    22,     0,   122,    24,   123,   124,   125,     0,
     126,   127,     0,    30,   128,   272,    32,     0,     0,     0,
       0,    33,    34,   -67,   -67,   -67,     0,   -67,   -67,   -67,
     -67,   -67,     0,   -67,   -67,     0,   -67,   -67,   -67,   -67,
       0,     0,     0,     0,   -67,   -67,   -33,   -33,   -33,     0,
     -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,     0,   -33,
     -33,   -33,   -33,     0,     0,     0,     0,   -33,   -33,    -8,
      -8,    -8,     0,    -8,    -8,    -8,    -8,    -8,     0,    -8,
      -8,     0,    -8,    -8,    -8,    -8,     0,     0,     0,     0,
      -8,    -8,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,
     -30,     0,   -30,   -30,     0,   -30,   -30,   -30,   -30,     0,
       0,     0,     0,   -30,   -30,   -32,   -32,   -32,     0,   -32,
     -32,   -32,   -32,   -32,     0,   -32,   -32,     0,   -32,   -32,
     -32,   -32,     0,     0,     0,     0,   -32,   -32,   -31,   -31,
     -31,     0,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,
       0,   -31,   -31,   -31,   -31,     0,     0,     0,     0,   -31,
     -31,    20,    21,    22,     0,   122,    24,   123,   124,   125,
       0,   126,   127,     0,    30,   128,   332,    32,     0,     0,
       0,     0,    33,    34,   -26,   -26,   -26,     0,   -26,   -26,
     -26,   -26,   -26,     0,   -26,   -26,     0,   -26,   -26,   -26,
     -26,     0,     0,     0,     0,   -26,   -26,   -24,   -24,   -24,
       0,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,     0,
     -24,   -24,   -24,   -24,     0,     0,     0,     0,   -24,   -24,
      20,    21,    22,     0,   122,    24,   123,   124,   125,     0,
     126,   127,     0,    30,   128,     0,    32,     0,     0,     0,
       0,    33,    34,    20,    21,    22,     0,   175,    24,   176,
     177,   178,     0,   179,   180,     0,    30,   181,     0,    32,
       0,     0,     0,     0,    33,    34,    20,    21,    22,     0,
     286,    24,   287,   288,   289,     0,   290,   291,     0,    30,
     292,     0,    32,     0,   -63,     0,     0,    33,    34,   -63,
     -63,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,   -63,
     -66,     0,     0,     0,     0,   -66,   -66,     0,     0,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -57,     0,     0,     0,
       0,   -57,   -57,     0,     0,     0,   -57,   228,   -57,   -57,
     -57,   -57,   -59,     0,     0,     0,     0,   -59,   -59,     0,
       0,   -70,   -59,   -59,   -59,   -59,   -59,   -59,   -70,     0,
     -58,   -70,   -70,   -70,   -70,   -70,   -70,   -58,     0,   -60,
     -58,    79,   -58,   -58,   -58,   -58,   -60,     0,   -61,   -60,
     -60,   -60,   -60,   -60,   -60,   -61,     0,   -62,   -61,   -61,
     -61,   -61,   -61,   -61,   -62,     0,   -65,   -62,   -62,   -62,
     -62,   -62,   -62,   -65,     0,   -64,   -65,   -65,   -65,   -65,
     -65,   -65,   -64,     0,   -63,   -64,   -64,   -64,   -64,   -64,
     -64,   -63,     0,   -66,   -63,   -63,   -63,   -63,   -63,   -63,
     -66,     0,   -57,   -66,   -66,   -66,   -66,   -66,   -66,   -57,
       0,   -59,   -57,    79,   -57,   -57,   -57,   -57,   -59,     0,
       0,   -59,   -59,   -59,   -59,   -59,   -59,   -68,     0,     0,
       0,     0,   -68,     0,     0,     0,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -69,     0,     0,     0,     0,   -69,     0,
       0,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -70,
       0,     0,     0,     0,   -70,     0,     0,     0,     0,   -70,
     -70,   -70,   -70,   -70,   -70,   -58,     0,     0,     0,     0,
     -58,     0,     0,     0,     0,   -58,   214,   -58,   -58,   -58,
     -58,   -60,     0,     0,     0,     0,   -60,     0,     0,     0,
       0,   -60,   -60,   -60,   -60,   -60,   -60,   -61,     0,     0,
       0,     0,   -61,     0,     0,     0,     0,   -61,   -61,   -61,
     -61,   -61,   -61,   -62,     0,     0,     0,     0,   -62,     0,
       0,     0,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -65,
       0,     0,     0,     0,   -65,     0,     0,     0,     0,   -65,
     -65,   -65,   -65,   -65,   -65,   -64,     0,     0,     0,     0,
     -64,     0,     0,     0,     0,   -64,   -64,   -64,   -64,   -64,
     -64,   -63,     0,     0,     0,     0,   -63,     0,     0,     0,
       0,   -63,   -63,   -63,   -63,   -63,   -63,   -66,     0,     0,
       0,     0,   -66,     0,     0,     0,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -57,     0,     0,     0,     0,   -57,     0,
       0,     0,     0,   -57,   214,   -57,   -57,   -57,   -57,   -59,
       0,     0,     0,     0,   -59,     0,     0,     0,   -55,   -59,
     -59,   -59,   -59,   -59,   -59,   -55,     0,     0,    78,   -55,
     -55,   -55,   -55,   -55,   -55,     0,     0,     0,     0,   213,
       0,   -55,   -55,   -55,   -55
};

static const yytype_int16 yycheck[] =
{
       0,    18,   128,   273,     4,    20,     3,     4,     5,    26,
     280,     8,   116,    19,    29,    32,    22,    15,    18,    16,
     201,     8,    19,    20,    22,     7,    18,    24,    25,    27,
      28,    29,    30,     0,   215,     3,     4,     5,    20,     0,
       8,    58,    59,    60,    18,    62,     7,    64,    16,    20,
      21,    19,    18,     8,    22,   181,    24,    25,     3,     4,
       5,     6,     1,     8,    20,     0,    18,   337,     7,    20,
      21,    16,     7,    20,    19,    67,    18,    12,    29,    24,
      25,    28,    29,    30,    18,     0,   103,     7,   105,     0,
     194,     8,     7,     3,     4,     5,     7,    12,     8,   116,
     117,    12,    18,   120,     0,   105,    16,   124,    22,    19,
      18,     7,    22,   105,    24,    25,    12,   117,    20,    21,
     120,    19,     0,    20,    21,   117,   230,   144,   120,     7,
      19,   105,    29,    30,    12,    18,     3,     4,     5,   105,
      22,     8,    19,   117,    19,   162,   120,    29,    30,    16,
      22,   117,    19,   105,   120,     0,    22,    24,    25,    22,
     177,     8,     7,   105,    20,   117,   292,    12,   120,     0,
      20,   105,    28,    29,    30,   117,     7,   194,   120,   196,
      15,   198,    20,   117,   201,   202,   120,    22,    22,   105,
      25,    26,    27,    28,    29,    30,    20,   105,   215,   216,
      22,   117,    20,    21,   120,    29,    30,   199,   312,   117,
     314,    22,   120,   230,    20,   232,    20,   234,   322,     3,
       4,     5,   105,     7,     8,     9,    10,    11,    20,    13,
      14,    22,    16,    17,   117,    19,    22,   120,    29,    30,
      24,    25,    22,   235,    22,    20,   350,     3,     4,     5,
       6,    29,     8,    22,     3,     4,     5,   274,    22,     8,
      16,    20,    21,    19,   281,     0,    20,    16,    24,    25,
      19,   288,     7,    15,   274,    24,    25,    12,    20,    21,
      19,   281,   274,    25,    26,    27,    28,    29,    30,   281,
      22,     0,    20,    21,     8,   312,    19,   314,     7,   316,
     274,   318,    20,    12,    15,   322,   323,   281,   274,    20,
      21,    29,    30,     0,    25,   281,    27,    28,    29,    30,
       7,   338,   274,   323,    19,   342,    19,   319,   320,   281,
      22,   323,   274,   350,   351,    20,     0,   354,   338,   281,
     274,     8,   342,     7,   336,     0,   338,   281,    12,   323,
     342,   351,     7,     0,   354,    20,    21,   323,   274,   351,
       7,    19,   354,     0,   338,   281,   274,     0,   342,    19,
       7,   323,   338,   281,     7,    12,   342,   351,    19,    12,
     354,   323,    20,    21,    19,   351,   338,     8,   354,   323,
     342,   274,    20,    21,     0,    22,   338,    20,   281,   351,
     342,     7,   354,     0,   338,    22,    12,   323,   342,   351,
       7,     0,   354,    22,     0,   323,    20,   351,     7,    22,
     354,     7,   338,     3,     4,     5,   342,    20,     8,    30,
     338,    32,    33,    34,   342,   351,    16,    22,   354,    19,
     323,    22,     8,   351,    24,    25,   354,    28,    29,    30,
      22,     3,     4,     5,     6,   338,     8,    58,     0,   342,
      20,    62,     0,    64,    16,     7,    20,    19,   351,     7,
      12,   354,    24,    25,    12,     3,     4,     5,    79,     7,
       8,     9,    10,    11,    12,    13,    14,    20,    16,    17,
      18,    19,    22,    22,    15,    20,    24,    25,    20,    20,
      21,    20,   103,     0,    25,    32,    27,    28,    29,    30,
       7,    20,     3,     4,     5,   116,     7,     8,     9,    10,
      11,    12,    13,    14,    20,    16,    17,    18,    19,    22,
      22,    58,    22,    24,    25,    62,    29,    64,    28,    29,
      30,    15,   143,   144,   145,   146,    20,    21,    20,    20,
      21,    25,    26,    27,    28,    29,    30,    28,    29,    30,
     161,   162,   163,   164,     3,     4,     5,    20,     7,     8,
       9,    10,    11,    12,    13,    14,   103,    16,    17,    18,
      19,     0,    20,     0,    20,    24,    25,     0,     7,   116,
       7,    15,    22,    12,     7,   196,    22,   198,    22,    12,
     201,   202,    22,    27,    28,    29,    30,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   143,   144,   145,   146,
      22,   222,   223,   224,   225,   226,   227,   228,    20,    21,
       8,   232,    22,   234,   161,   162,   163,   164,     3,     4,
       5,    22,     7,     8,     9,    10,    11,    12,    13,    14,
      19,    16,    17,    18,    19,     0,     0,     0,    19,    24,
      25,    19,     7,     7,     7,    15,     0,    12,    12,   196,
      20,   198,    19,     7,   201,   202,    32,    27,    28,    29,
      30,   208,   209,   210,   211,   212,   213,   214,   215,   216,
      20,    21,    20,    21,     8,   222,   223,   224,   225,   226,
     227,   228,    58,     0,    22,   232,    62,   234,    64,     0,
       7,   312,    22,    32,    22,   316,     7,   318,    20,    15,
      20,   322,    78,    19,    20,    21,    19,    23,    22,    25,
      26,    27,    28,    29,    30,     3,     4,     5,    22,    58,
       8,    20,    20,    62,    20,    64,    20,   103,    16,   350,
      32,    19,    20,    20,    21,    20,    24,    25,    77,    15,
     116,    28,    29,    30,    20,     3,     4,     5,     6,    25,
       8,    27,    28,    29,    30,    22,    58,    22,    16,    22,
      62,    19,    64,     0,   103,   312,    24,    25,   144,   316,
       7,   318,     4,    -1,    76,   322,   103,   116,     3,     4,
       5,     0,     0,     8,    -1,     0,   162,    -1,     7,     7,
      -1,    16,     7,    12,    19,     0,    -1,    12,    -1,    24,
      25,   103,     7,   350,     0,   144,    20,    21,     3,     4,
       5,     7,     0,     8,   116,    29,    30,    -1,    -1,     7,
     196,    16,   198,   162,    19,   201,   202,    -1,    -1,    24,
      25,     0,   208,   209,   210,   211,   212,   213,     7,   215,
     216,    -1,   144,    -1,    -1,    20,   222,   223,   224,   225,
     226,   227,    27,    28,    29,    30,   232,   196,   234,   198,
     162,    -1,   201,   202,    -1,    -1,    -1,     0,     0,   208,
     209,   210,   211,   212,     7,     7,   215,   216,    -1,    -1,
      -1,    20,    21,   222,   223,   224,   225,   226,    27,    28,
      29,    30,    -1,   232,   196,   234,   198,    22,    -1,   201,
     202,    32,    27,    28,    29,    30,   208,   209,   210,   211,
      22,    -1,     0,   215,   216,    27,    28,    29,    30,     7,
     222,   223,   224,   225,    -1,    -1,    -1,    58,     0,    -1,
     232,    62,   234,    64,    -1,     7,   312,    -1,    32,    -1,
     316,    15,   318,    -1,    75,    19,   322,    -1,    22,    23,
      20,    25,    26,    27,    28,    29,    30,    27,    28,    29,
      30,    -1,     0,    -1,    58,    -1,    -1,    -1,    62,     7,
      64,    -1,   103,   312,   350,    32,    -1,   316,    -1,   318,
      74,    -1,    15,   322,    -1,   116,    19,    20,    -1,    -1,
      23,    -1,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    62,    -1,    64,    -1,   103,
     312,   350,    -1,   144,   316,    -1,   318,    -1,    -1,    -1,
     322,    -1,   116,     3,     4,     5,    -1,    -1,     8,    -1,
      -1,   162,    -1,    -1,    -1,    -1,    16,    -1,    -1,    19,
      -1,    -1,    15,    -1,    24,    25,   103,   104,   350,    22,
     144,    -1,    25,    26,    27,    28,    29,    30,    -1,   116,
      -1,    15,    -1,    -1,    -1,   196,    20,   198,   162,    -1,
     201,   202,    -1,    27,    28,    29,    30,   208,   209,   210,
      -1,    -1,    -1,    15,   215,   216,    -1,   144,    20,    21,
      -1,   222,   223,   224,    -1,    27,    28,    29,    30,    -1,
      -1,   232,   196,   234,   198,   162,    -1,   201,   202,    -1,
      -1,    15,    -1,    -1,   208,   209,    20,    21,    -1,    -1,
      -1,   215,   216,    27,    28,    29,    30,    -1,   222,   223,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    15,   232,   196,
     234,   198,    20,    21,   201,   202,    -1,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    58,    -1,   215,   216,
      62,    -1,    64,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    73,    -1,    -1,    -1,   232,    -1,   234,    -1,    -1,
      -1,   312,    -1,    -1,    -1,   316,    -1,   318,    -1,    -1,
      -1,   322,    -1,    58,    -1,    -1,    -1,    62,    15,    64,
      -1,   103,    -1,    20,    21,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,   116,    -1,   273,    -1,   312,   350,
      15,    -1,   316,   280,   318,    20,    21,    -1,   322,    -1,
      25,    26,    27,    28,    29,    30,    20,    21,   103,    -1,
      -1,    -1,   144,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,   116,    -1,    -1,    -1,   312,   350,    -1,    -1,   316,
     162,   318,     3,     4,     5,   322,     7,     8,     9,    10,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,   144,
     337,    -1,    -1,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   350,   196,    15,   198,   162,    -1,   201,
     202,    -1,    22,    -1,    -1,    25,   208,    27,    28,    29,
      30,    15,    -1,   215,   216,    -1,    20,    21,    -1,    -1,
     222,    25,    26,    27,    28,    29,    30,    -1,    -1,    15,
     232,   196,   234,   198,    20,    21,   201,   202,    -1,    25,
      26,    27,    28,    29,    30,    -1,    -1,    15,    -1,    -1,
     215,   216,    20,    21,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,   232,    -1,   234,
       3,     4,     5,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    16,    17,    18,    19,    -1,    15,    -1,
      -1,    24,    25,    20,    21,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
     312,    -1,    -1,    -1,   316,    -1,   318,     3,     4,     5,
     322,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   312,   350,    -1,
      -1,   316,    -1,   318,     3,     4,     5,   322,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,   350,     7,     8,     9,    10,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    24,    25,     3,     4,     5,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    24,    25,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    24,    25,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    24,    25,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,    25,
       3,     4,     5,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    24,    25,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,     3,     4,     5,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    24,    25,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      24,    25,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    24,    25,     3,     4,     5,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    24,    25,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      -1,    13,    14,    -1,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    24,    25,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    -1,    13,    14,    -1,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    24,    25,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    -1,    13,    14,    -1,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,    25,
       3,     4,     5,    -1,     7,     8,     9,    10,    11,    -1,
      13,    14,    -1,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    24,    25,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,     3,     4,     5,    -1,
       7,     8,     9,    10,    11,    -1,    13,    14,    -1,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    24,    25,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    -1,    13,
      14,    -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      24,    25,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    13,    14,    -1,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    24,    25,     3,     4,     5,    -1,     7,
       8,     9,    10,    11,    -1,    13,    14,    -1,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    24,    25,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      -1,    13,    14,    -1,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    24,    25,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    -1,    13,    14,    -1,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    24,    25,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    -1,    13,    14,    -1,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,    25,
       3,     4,     5,    -1,     7,     8,     9,    10,    11,    -1,
      13,    14,    -1,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    24,    25,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,     3,     4,     5,    -1,
       7,     8,     9,    10,    11,    -1,    13,    14,    -1,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    24,    25,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    -1,    13,
      14,    -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      24,    25,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    13,    14,    -1,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    24,    25,     3,     4,     5,    -1,     7,
       8,     9,    10,    11,    -1,    13,    14,    -1,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    24,    25,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      -1,    13,    14,    -1,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    24,    25,     3,     4,     5,    -1,     7,     8,
       9,    10,    11,    -1,    13,    14,    -1,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    24,    25,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    -1,    13,    14,    -1,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,    25,
       3,     4,     5,    -1,     7,     8,     9,    10,    11,    -1,
      13,    14,    -1,    16,    17,    -1,    19,    -1,    -1,    -1,
      -1,    24,    25,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    13,    14,    -1,    16,    17,    -1,    19,
      -1,    -1,    -1,    -1,    24,    25,     3,     4,     5,    -1,
       7,     8,     9,    10,    11,    -1,    13,    14,    -1,    16,
      17,    -1,    19,    -1,    15,    -1,    -1,    24,    25,    20,
      21,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      15,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    15,    -1,    -1,    -1,
      -1,    20,    21,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    30,    15,    -1,    -1,    -1,    -1,    20,    21,    -1,
      -1,    15,    25,    26,    27,    28,    29,    30,    22,    -1,
      15,    25,    26,    27,    28,    29,    30,    22,    -1,    15,
      25,    26,    27,    28,    29,    30,    22,    -1,    15,    25,
      26,    27,    28,    29,    30,    22,    -1,    15,    25,    26,
      27,    28,    29,    30,    22,    -1,    15,    25,    26,    27,
      28,    29,    30,    22,    -1,    15,    25,    26,    27,    28,
      29,    30,    22,    -1,    15,    25,    26,    27,    28,    29,
      30,    22,    -1,    15,    25,    26,    27,    28,    29,    30,
      22,    -1,    15,    25,    26,    27,    28,    29,    30,    22,
      -1,    15,    25,    26,    27,    28,    29,    30,    22,    -1,
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
      28,    29,    30,    15,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    15,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    15,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    15,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    15,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    15,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    15,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    15,    25,
      26,    27,    28,    29,    30,    22,    -1,    -1,    25,    15,
      27,    28,    29,    30,    20,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,    29,    30
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     7,    33,    34,    35,    39,    65,     8,     0,
      35,    19,    22,     7,    40,    41,    42,     8,    20,    21,
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
      20,    38,     7,     9,    10,    11,    13,    14,    17,    36,
      43,    44,    45,    46,    47,    48,    49,    50,    65,     3,
       4,     5,     8,    16,    19,    24,    25,    51,    57,    58,
      59,    60,    61,    62,    63,    64,    66,     3,     4,     5,
       8,    16,    19,    24,    25,    51,    57,    58,    59,    60,
      61,    62,    63,    64,    66,     7,     9,    10,    11,    13,
      14,    17,    36,    43,    44,    45,    46,    47,    48,    49,
      50,    65,    50,     8,    19,    50,    19,    19,    19,    37,
      22,    19,    23,     8,    64,    50,    64,    64,    29,    30,
      28,    27,    15,    25,    26,    19,    23,     8,    64,    50,
      64,    64,    29,    30,    28,    27,    15,    25,    26,     8,
      19,    50,    19,    19,    19,    37,    22,    22,    55,    22,
      50,     8,     6,    50,    18,    52,    50,    20,    58,    59,
      60,    61,    62,    63,    64,    52,    50,    20,    58,    59,
      60,    61,    62,    63,    64,    22,    55,    22,    50,     8,
       6,    50,    18,    22,    20,    20,    20,    20,    20,    20,
      22,    20,    20,    20,    20,    56,     7,     9,    10,    11,
      13,    14,    17,    36,    38,    43,    44,    45,    46,    47,
      48,    49,    50,    65,    22,    22,    22,    56,    38,    22,
      22,    22,    22,     8,    19,    50,    19,    19,    19,    37,
      12,    22,    22,    12,    55,    22,    55,    22,    50,     8,
       6,    50,    18,    38,    55,    38,    20,    22,    20,    20,
      20,    20,    20,    38,    56,    38,    22,    22,    22,    38,
      22,    12,    55,    38,    20,    38
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    32,    33,    34,    34,    34,    35,    35,    36,    37,
      37,    38,    38,    38,    38,    38,    38,    38,    39,    40,
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
       0,     2,     1,     2,     1,     1,     1,     1,     3,     2,
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

#line 2120 "parser.tab.c"

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
