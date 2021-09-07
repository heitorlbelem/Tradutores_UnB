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
  YYSYMBOL_YYACCEPT = 31,                  /* $accept  */
  YYSYMBOL_program = 32,                   /* program  */
  YYSYMBOL_block = 33,                     /* block  */
  YYSYMBOL_statements = 34,                /* statements  */
  YYSYMBOL_statement = 35,                 /* statement  */
  YYSYMBOL_for_statement = 36,             /* for_statement  */
  YYSYMBOL_expression_statement = 37,      /* expression_statement  */
  YYSYMBOL_io_statement = 38,              /* io_statement  */
  YYSYMBOL_input_statement = 39,           /* input_statement  */
  YYSYMBOL_output_statement = 40,          /* output_statement  */
  YYSYMBOL_return_statement = 41,          /* return_statement  */
  YYSYMBOL_expression = 42,                /* expression  */
  YYSYMBOL_expression_optative = 43,       /* expression_optative  */
  YYSYMBOL_or_expression_optative = 44,    /* or_expression_optative  */
  YYSYMBOL_or_expression = 45,             /* or_expression  */
  YYSYMBOL_and_expression = 46,            /* and_expression  */
  YYSYMBOL_equality_expression = 47,       /* equality_expression  */
  YYSYMBOL_relational_expression = 48,     /* relational_expression  */
  YYSYMBOL_list_expression = 49,           /* list_expression  */
  YYSYMBOL_addition_expression = 50,       /* addition_expression  */
  YYSYMBOL_multiplication_expression = 51, /* multiplication_expression  */
  YYSYMBOL_simple_value = 52,              /* simple_value  */
  YYSYMBOL_variable_declaration_statement = 53, /* variable_declaration_statement  */
  YYSYMBOL_constant = 54                   /* constant  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  49
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1789

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  50
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  173

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   277


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
      15,    16,    25,    26,    27,    28,    29,    30
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    84,    84,    88,    92,    93,    98,    99,   100,   101,
     102,   103,   107,   111,   112,   116,   117,   121,   125,   126,
     130,   134,   135,   139,   140,   144,   145,   149,   150,   154,
     155,   159,   160,   164,   165,   169,   170,   174,   175,   179,
     180,   184,   185,   186,   187,   188,   189,   193,   197,   198,
     199
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
  "EQUALITY_OP", "LOGICAL_OP_OR", "LOGICAL_OP_AND", "$accept", "program",
  "block", "statements", "statement", "for_statement",
  "expression_statement", "io_statement", "input_statement",
  "output_statement", "return_statement", "expression",
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
     277
};
#endif

#define YYPACT_NINF (-76)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-51)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1241,  1397,  1406,  1415,    -4,   261,   -12,  1349,   -11,     8,
    1367,  1264,  1374,    57,  1367,  1367,    33,   338,   367,   390,
     413,   436,   459,   482,   505,   528,    19,   -20,    24,  1334,
    1515,  1750,   270,  1424,  1433,   551,  1442,    36,  1349,  1287,
      50,    34,  1294,  1451,  1460,   248,    39,  1469,  1478,   -76,
     574,   597,  1367,  1367,  1367,  1367,  1367,  1367,  1367,   620,
      53,    55,    56,   643,    60,    63,    69,   666,  1487,   111,
    1359,  1531,  1759,  1722,  1496,  1505,  1312,    86,    87,    88,
      89,    -1,   689,   712,   735,  1319,    71,  1241,   758,    91,
      94,  1349,    95,   100,  1264,   781,   804,   827,   850,   873,
     896,   919,   942,   965,   113,   988,  1521,  1537,  1553,   290,
    1392,  1374,  1392,  1392,   -14,     6,    98,    77,   158,  1733,
    1569,  1585,  1601,  1011,   123,   122,  1287,   124,   139,  1342,
    1034,  1057,  1374,  1617,  1633,   135,  1649,  1665,  1392,  1392,
    1392,  1392,  1392,  1392,  1392,  1080,   138,  1103,   137,   152,
     157,  1126,   161,  1681,    20,   249,  1755,   206,  1739,  1697,
    1713,  1312,   160,   175,   176,   177,  1149,  1172,  1195,  1319,
     180,  1264,  1218
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
       0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -76,   -76,     1,    -8,     0,    11,    13,    14,    16,    30,
      37,     5,   -75,    42,   195,   196,   197,   164,    90,    73,
      27,    10,    38,    51
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    16,    96,    18,    97,    98,    99,   100,   101,   102,
     103,   104,    62,    80,    27,    28,    29,    30,    31,    32,
      33,    34,   105,    36
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      19,    17,   -22,    45,    37,    26,   -22,    39,    41,    52,
      86,    20,    40,    21,    22,   138,    23,    46,    50,    17,
      44,   -26,   121,    26,    47,    48,   -28,    42,    52,    20,
      24,    21,    22,    49,    23,   -28,   139,    25,    35,   120,
     -27,    51,    64,    60,    61,   123,   -28,    66,    24,   -27,
     139,   146,   121,   -28,    53,    25,    35,   -14,    59,    68,
     -14,   -14,   -14,   122,   -14,   -14,   -14,   -14,    75,   120,
     -14,   -14,    63,   -14,   -14,   -21,   -14,   -24,    76,   -14,
      77,   -14,   -14,    78,    74,   119,   130,    88,    17,    79,
     124,    87,    26,   122,   170,   121,   127,   -32,    20,   125,
      21,    22,   118,    23,   141,   -32,   -32,   -32,    82,    83,
      84,    85,   120,   126,   128,   119,   135,    24,   -30,   129,
     134,   121,   136,   137,    25,    35,   140,   -30,   -30,    73,
     123,    61,   118,   -27,   150,   131,   122,   152,   120,   121,
     -27,    53,   121,   -24,   145,    72,   147,   148,   121,   121,
     121,   121,   121,   121,   160,   153,   120,   162,   119,   120,
     161,   122,   122,   122,   122,   120,   120,   120,   120,   120,
     159,   172,   163,   142,   124,   118,   117,   164,   -34,   121,
     122,   -21,   166,   122,   119,   -34,   -34,   -34,   -34,   122,
     122,   122,   122,   122,   122,   122,   120,   167,   168,   169,
     171,   118,   119,   165,     0,   119,   117,   114,   115,   116,
       0,   119,   119,   119,   119,   158,     0,     0,    71,   118,
     122,   142,   118,     0,     0,     0,   -33,     0,   118,   118,
     118,   157,     0,   -33,   -33,   -33,   -33,   114,   115,   116,
       0,     0,   119,     0,     0,     0,     0,     0,    69,   117,
      70,     1,     2,     3,     0,    89,     5,    90,    91,   118,
       0,    92,    93,     0,    10,    94,    67,    12,     0,   -29,
      95,    81,    14,    15,     0,   117,   -42,   140,   -29,   -29,
     114,   115,   116,   -42,    38,   -36,   -42,   -42,   -42,   -42,
     -42,   -42,   -36,   117,     0,    57,   117,   -36,   -36,   -36,
     -36,     0,   117,   117,   156,   -42,   114,   115,   116,     0,
     -42,     0,     0,   132,     0,   -42,   -42,   -42,   -42,   -42,
     -42,     0,     0,     0,   114,   115,   116,   114,   115,   116,
       0,     0,     0,   117,   154,   116,   155,     0,   -11,     0,
       0,   -11,   -11,   -11,     0,   -11,   -11,   -11,   -11,     0,
       0,   -11,   -11,     0,   -11,   -11,    81,   -11,     0,     0,
     -11,     0,   -11,   -11,   114,   115,   116,    -2,     0,     0,
       1,     2,     3,     0,     4,     5,     6,     7,     0,     0,
       8,     9,     0,    10,    11,     0,    12,     0,     0,    13,
      -5,    14,    15,    -5,    -5,    -5,     0,    -5,    -5,    -5,
      -5,     0,     0,    -5,    -5,     0,    -5,    -5,     0,    -5,
       0,     0,    -5,   -10,    -5,    -5,   -10,   -10,   -10,     0,
     -10,   -10,   -10,   -10,     0,     0,   -10,   -10,     0,   -10,
     -10,     0,   -10,     0,     0,   -10,    -6,   -10,   -10,    -6,
      -6,    -6,     0,    -6,    -6,    -6,    -6,     0,     0,    -6,
      -6,     0,    -6,    -6,     0,    -6,     0,     0,    -6,    -7,
      -6,    -6,    -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,
       0,     0,    -7,    -7,     0,    -7,    -7,     0,    -7,     0,
       0,    -7,   -15,    -7,    -7,   -15,   -15,   -15,     0,   -15,
     -15,   -15,   -15,     0,     0,   -15,   -15,     0,   -15,   -15,
       0,   -15,     0,     0,   -15,   -16,   -15,   -15,   -16,   -16,
     -16,     0,   -16,   -16,   -16,   -16,     0,     0,   -16,   -16,
       0,   -16,   -16,     0,   -16,     0,     0,   -16,    -8,   -16,
     -16,    -8,    -8,    -8,     0,    -8,    -8,    -8,    -8,     0,
       0,    -8,    -8,     0,    -8,    -8,     0,    -8,     0,     0,
      -8,    -9,    -8,    -8,    -9,    -9,    -9,     0,    -9,    -9,
      -9,    -9,     0,     0,    -9,    -9,     0,    -9,    -9,     0,
      -9,     0,     0,    -9,    -4,    -9,    -9,    -4,    -4,    -4,
       0,    -4,    -4,    -4,    -4,     0,     0,    -4,    -4,     0,
      -4,    -4,     0,    -4,     0,     0,    -4,   -13,    -4,    -4,
     -13,   -13,   -13,     0,   -13,   -13,   -13,   -13,     0,     0,
     -13,   -13,     0,   -13,   -13,     0,   -13,     0,     0,   -13,
     -47,   -13,   -13,   -47,   -47,   -47,     0,   -47,   -47,   -47,
     -47,     0,     0,   -47,   -47,     0,   -47,   -47,     0,   -47,
       0,     0,   -47,   -20,   -47,   -47,   -20,   -20,   -20,     0,
     -20,   -20,   -20,   -20,     0,     0,   -20,   -20,     0,   -20,
     -20,     0,   -20,     0,     0,   -20,    -3,   -20,   -20,    -3,
      -3,    -3,     0,    -3,    -3,    -3,    -3,     0,     0,    -3,
      -3,     0,    -3,    -3,     0,    -3,     0,     0,    -3,   -17,
      -3,    -3,   -17,   -17,   -17,     0,   -17,   -17,   -17,   -17,
       0,     0,   -17,   -17,     0,   -17,   -17,     0,   -17,     0,
       0,   -17,   -19,   -17,   -17,   -19,   -19,   -19,     0,   -19,
     -19,   -19,   -19,     0,     0,   -19,   -19,     0,   -19,   -19,
       0,   -19,     0,     0,   -19,   -18,   -19,   -19,   -18,   -18,
     -18,     0,   -18,   -18,   -18,   -18,     0,     0,   -18,   -18,
       0,   -18,   -18,     0,   -18,     0,     0,   -18,   -12,   -18,
     -18,   -12,   -12,   -12,     0,   -12,   -12,   -12,   -12,     0,
       0,   -12,   -12,     0,   -12,   -12,     0,   -12,     0,     0,
     -12,     0,   -12,   -12,   -14,   -14,   -14,     0,   -14,   -14,
     -14,   -14,     0,     0,   -14,   -14,     0,   -14,   -14,   -14,
     -14,     0,     0,   -14,     0,   -14,   -14,   -11,   -11,   -11,
       0,   -11,   -11,   -11,   -11,     0,     0,   -11,   -11,     0,
     -11,   -11,   -11,   -11,     0,     0,   -11,     0,   -11,   -11,
      -5,    -5,    -5,     0,    -5,    -5,    -5,    -5,     0,     0,
      -5,    -5,     0,    -5,    -5,    -5,    -5,     0,     0,    -5,
       0,    -5,    -5,   -10,   -10,   -10,     0,   -10,   -10,   -10,
     -10,     0,     0,   -10,   -10,     0,   -10,   -10,   -10,   -10,
       0,     0,   -10,     0,   -10,   -10,    -6,    -6,    -6,     0,
      -6,    -6,    -6,    -6,     0,     0,    -6,    -6,     0,    -6,
      -6,    -6,    -6,     0,     0,    -6,     0,    -6,    -6,    -7,
      -7,    -7,     0,    -7,    -7,    -7,    -7,     0,     0,    -7,
      -7,     0,    -7,    -7,    -7,    -7,     0,     0,    -7,     0,
      -7,    -7,   -15,   -15,   -15,     0,   -15,   -15,   -15,   -15,
       0,     0,   -15,   -15,     0,   -15,   -15,   -15,   -15,     0,
       0,   -15,     0,   -15,   -15,   -16,   -16,   -16,     0,   -16,
     -16,   -16,   -16,     0,     0,   -16,   -16,     0,   -16,   -16,
     -16,   -16,     0,     0,   -16,     0,   -16,   -16,    -8,    -8,
      -8,     0,    -8,    -8,    -8,    -8,     0,     0,    -8,    -8,
       0,    -8,    -8,    -8,    -8,     0,     0,    -8,     0,    -8,
      -8,    -9,    -9,    -9,     0,    -9,    -9,    -9,    -9,     0,
       0,    -9,    -9,     0,    -9,    -9,    -9,    -9,     0,     0,
      -9,     0,    -9,    -9,    -4,    -4,    -4,     0,    -4,    -4,
      -4,    -4,     0,     0,    -4,    -4,     0,    -4,    -4,    -4,
      -4,     0,     0,    -4,     0,    -4,    -4,     1,     2,     3,
       0,    89,     5,    90,    91,     0,     0,    92,    93,     0,
      10,    94,   151,    12,     0,     0,    95,     0,    14,    15,
     -13,   -13,   -13,     0,   -13,   -13,   -13,   -13,     0,     0,
     -13,   -13,     0,   -13,   -13,   -13,   -13,     0,     0,   -13,
       0,   -13,   -13,   -47,   -47,   -47,     0,   -47,   -47,   -47,
     -47,     0,     0,   -47,   -47,     0,   -47,   -47,   -47,   -47,
       0,     0,   -47,     0,   -47,   -47,   -20,   -20,   -20,     0,
     -20,   -20,   -20,   -20,     0,     0,   -20,   -20,     0,   -20,
     -20,   -20,   -20,     0,     0,   -20,     0,   -20,   -20,    -3,
      -3,    -3,     0,    -3,    -3,    -3,    -3,     0,     0,    -3,
      -3,     0,    -3,    -3,    -3,    -3,     0,     0,    -3,     0,
      -3,    -3,   -17,   -17,   -17,     0,   -17,   -17,   -17,   -17,
       0,     0,   -17,   -17,     0,   -17,   -17,   -17,   -17,     0,
       0,   -17,     0,   -17,   -17,   -19,   -19,   -19,     0,   -19,
     -19,   -19,   -19,     0,     0,   -19,   -19,     0,   -19,   -19,
     -19,   -19,     0,     0,   -19,     0,   -19,   -19,   -18,   -18,
     -18,     0,   -18,   -18,   -18,   -18,     0,     0,   -18,   -18,
       0,   -18,   -18,   -18,   -18,     0,     0,   -18,     0,   -18,
     -18,   -12,   -12,   -12,     0,   -12,   -12,   -12,   -12,     0,
       0,   -12,   -12,     0,   -12,   -12,   -12,   -12,     0,     0,
     -12,     0,   -12,   -12,     1,     2,     3,     0,     4,     5,
       6,     7,     0,     0,     8,     9,     0,    10,    11,     0,
      12,     0,     0,    13,     0,    14,    15,     1,     2,     3,
       0,    89,     5,    90,    91,     0,     0,    92,    93,     0,
      10,    94,     0,    12,     0,     0,    95,     0,    14,    15,
       1,     2,     3,     0,     0,     5,     0,   106,   107,   108,
      65,     0,   109,    10,     0,     0,    12,     0,     0,   -23,
     110,    14,    15,   111,     0,     1,     2,     3,   112,   113,
      43,     0,   106,   107,   108,     0,     0,   109,    10,     0,
       0,    12,     0,     0,   -25,   110,    14,    15,   111,   -23,
       0,     0,     0,   112,   113,   106,   107,   108,   149,     0,
     109,     0,     1,     2,     3,     0,   -30,     5,   110,     0,
       0,   111,    54,   -30,   -30,    10,   112,   113,    12,     0,
       1,     2,     3,    14,    15,    43,     0,   106,   107,   108,
       0,   -29,   109,    10,     0,     0,    12,    54,   -29,   -29,
     110,    14,    15,   111,     0,   106,   107,   108,   112,   113,
     133,     0,     0,     0,     0,     0,     0,     0,   110,     0,
       0,   111,   -48,     0,     0,     0,   112,   113,     0,   -48,
       0,   -49,   -48,   -48,   -48,   -48,   -48,   -48,   -49,     0,
     -50,   -49,   -49,   -49,   -49,   -49,   -49,   -50,     0,   -38,
     -50,   -50,   -50,   -50,   -50,   -50,   -38,     0,   -40,   -38,
      58,   -38,   -38,   -38,   -38,   -40,     0,   -41,   -40,   -40,
     -40,   -40,   -40,   -40,   -41,     0,   -42,   -41,   -41,   -41,
     -41,   -41,   -41,   -42,     0,   -45,   -42,   -42,   -42,   -42,
     -42,   -42,   -45,     0,   -44,   -45,   -45,   -45,   -45,   -45,
     -45,   -44,     0,   -43,   -44,   -44,   -44,   -44,   -44,   -44,
     -43,     0,   -46,   -43,   -43,   -43,   -43,   -43,   -43,   -46,
       0,   -37,   -46,   -46,   -46,   -46,   -46,   -46,   -37,     0,
     -39,   -37,    58,   -37,   -37,   -37,   -37,   -39,     0,     0,
     -39,   -39,   -39,   -39,   -39,   -39,   -48,   -32,     0,     0,
       0,   -48,    55,   -32,   -32,   -32,   -48,   -48,   -48,   -48,
     -48,   -48,   -49,   -31,     0,     0,     0,   -49,    55,   -31,
     -31,   -31,   -49,   -49,   -49,   -49,   -49,   -49,   -50,     0,
       0,     0,     0,   -50,     0,     0,     0,     0,   -50,   -50,
     -50,   -50,   -50,   -50,   -38,     0,     0,     0,     0,   -38,
       0,     0,     0,     0,   -38,   144,   -38,   -38,   -38,   -38,
     -40,     0,     0,     0,     0,   -40,     0,     0,     0,     0,
     -40,   -40,   -40,   -40,   -40,   -40,   -41,     0,     0,     0,
       0,   -41,     0,     0,     0,     0,   -41,   -41,   -41,   -41,
     -41,   -41,   -42,     0,     0,     0,     0,   -42,     0,     0,
       0,     0,   -42,   -42,   -42,   -42,   -42,   -42,   -45,     0,
       0,     0,     0,   -45,     0,     0,     0,     0,   -45,   -45,
     -45,   -45,   -45,   -45,   -44,     0,     0,     0,     0,   -44,
       0,     0,     0,     0,   -44,   -44,   -44,   -44,   -44,   -44,
     -43,     0,     0,     0,     0,   -43,     0,     0,     0,     0,
     -43,   -43,   -43,   -43,   -43,   -43,   -46,     0,     0,     0,
       0,   -46,     0,     0,     0,     0,   -46,   -46,   -46,   -46,
     -46,   -46,   -37,     0,     0,     0,     0,   -37,     0,     0,
       0,     0,   -37,   144,   -37,   -37,   -37,   -37,   -39,     0,
       0,     0,     0,   -39,     0,     0,     0,   -35,   -39,   -39,
     -39,   -39,   -39,   -39,   -35,     0,     0,    57,   -36,   -35,
     -35,   -35,   -35,   -36,   -35,     0,     0,     0,   143,   -35,
     -36,   -36,   -36,   -36,   143,    56,   -35,   -35,   -35,   -35,
       0,     0,   -34,     0,    56,   -31,     0,   -34,   -34,   -34,
     -34,   -33,   141,   -31,   -31,   -31,   -33,   -33,   -33,   -33
};

static const yytype_int16 yycheck[] =
{
       0,     0,    22,    11,     8,     0,    20,    19,    19,    29,
      85,     0,     7,     0,     0,    29,     0,    12,    18,    18,
      10,    22,    12,    18,    14,    15,    20,    19,    29,    18,
       0,    18,    18,     0,    18,    29,    30,     0,     0,    12,
      20,    22,     8,    38,    39,    45,    22,    42,    18,    29,
      30,   126,    42,    29,    30,    18,    18,     0,    22,    20,
       3,     4,     5,    12,     7,     8,     9,    10,    58,    42,
      13,    14,    22,    16,    17,    22,    19,    22,    22,    22,
      20,    24,    25,    20,    57,    12,    94,    87,    87,    20,
      85,    20,    87,    42,   169,    85,    91,    20,    87,     8,
      87,    87,    12,    87,    27,    28,    29,    30,    22,    22,
      22,    22,    85,    19,    19,    42,   111,    87,    20,    19,
     110,   111,   112,   113,    87,    87,    28,    29,    30,    56,
     130,   126,    42,    22,   129,    22,    85,   132,   111,   129,
      29,    30,   132,    20,    22,    55,    22,     8,   138,   139,
     140,   141,   142,   143,   144,    20,   129,    20,    85,   132,
      22,   110,   111,   112,   113,   138,   139,   140,   141,   142,
     143,   171,    20,    15,   169,    85,    12,    20,    20,   169,
     129,    20,    22,   132,   111,    27,    28,    29,    30,   138,
     139,   140,   141,   142,   143,   144,   169,    22,    22,    22,
      20,   111,   129,   161,    -1,   132,    42,    12,    12,    12,
      -1,   138,   139,   140,   141,   142,    -1,    -1,    54,   129,
     169,    15,   132,    -1,    -1,    -1,    20,    -1,   138,   139,
     140,   141,    -1,    27,    28,    29,    30,    42,    42,    42,
      -1,    -1,   169,    -1,    -1,    -1,    -1,    -1,    52,    85,
      53,     3,     4,     5,    -1,     7,     8,     9,    10,   169,
      -1,    13,    14,    -1,    16,    17,    18,    19,    -1,    20,
      22,    76,    24,    25,    -1,   111,    15,    28,    29,    30,
      85,    85,    85,    22,    23,    15,    25,    26,    27,    28,
      29,    30,    22,   129,    -1,    25,   132,    27,    28,    29,
      30,    -1,   138,   139,   140,    15,   111,   111,   111,    -1,
      20,    -1,    -1,    23,    -1,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,   129,   129,   129,   132,   132,   132,
      -1,    -1,    -1,   169,   138,   138,   139,    -1,     0,    -1,
      -1,     3,     4,     5,    -1,     7,     8,     9,    10,    -1,
      -1,    13,    14,    -1,    16,    17,   161,    19,    -1,    -1,
      22,    -1,    24,    25,   169,   169,   169,     0,    -1,    -1,
       3,     4,     5,    -1,     7,     8,     9,    10,    -1,    -1,
      13,    14,    -1,    16,    17,    -1,    19,    -1,    -1,    22,
       0,    24,    25,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,    -1,    13,    14,    -1,    16,    17,    -1,    19,
      -1,    -1,    22,     0,    24,    25,     3,     4,     5,    -1,
       7,     8,     9,    10,    -1,    -1,    13,    14,    -1,    16,
      17,    -1,    19,    -1,    -1,    22,     0,    24,    25,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    13,
      14,    -1,    16,    17,    -1,    19,    -1,    -1,    22,     0,
      24,    25,     3,     4,     5,    -1,     7,     8,     9,    10,
      -1,    -1,    13,    14,    -1,    16,    17,    -1,    19,    -1,
      -1,    22,     0,    24,    25,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    13,    14,    -1,    16,    17,
      -1,    19,    -1,    -1,    22,     0,    24,    25,     3,     4,
       5,    -1,     7,     8,     9,    10,    -1,    -1,    13,    14,
      -1,    16,    17,    -1,    19,    -1,    -1,    22,     0,    24,
      25,     3,     4,     5,    -1,     7,     8,     9,    10,    -1,
      -1,    13,    14,    -1,    16,    17,    -1,    19,    -1,    -1,
      22,     0,    24,    25,     3,     4,     5,    -1,     7,     8,
       9,    10,    -1,    -1,    13,    14,    -1,    16,    17,    -1,
      19,    -1,    -1,    22,     0,    24,    25,     3,     4,     5,
      -1,     7,     8,     9,    10,    -1,    -1,    13,    14,    -1,
      16,    17,    -1,    19,    -1,    -1,    22,     0,    24,    25,
       3,     4,     5,    -1,     7,     8,     9,    10,    -1,    -1,
      13,    14,    -1,    16,    17,    -1,    19,    -1,    -1,    22,
       0,    24,    25,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,    -1,    13,    14,    -1,    16,    17,    -1,    19,
      -1,    -1,    22,     0,    24,    25,     3,     4,     5,    -1,
       7,     8,     9,    10,    -1,    -1,    13,    14,    -1,    16,
      17,    -1,    19,    -1,    -1,    22,     0,    24,    25,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    13,
      14,    -1,    16,    17,    -1,    19,    -1,    -1,    22,     0,
      24,    25,     3,     4,     5,    -1,     7,     8,     9,    10,
      -1,    -1,    13,    14,    -1,    16,    17,    -1,    19,    -1,
      -1,    22,     0,    24,    25,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    13,    14,    -1,    16,    17,
      -1,    19,    -1,    -1,    22,     0,    24,    25,     3,     4,
       5,    -1,     7,     8,     9,    10,    -1,    -1,    13,    14,
      -1,    16,    17,    -1,    19,    -1,    -1,    22,     0,    24,
      25,     3,     4,     5,    -1,     7,     8,     9,    10,    -1,
      -1,    13,    14,    -1,    16,    17,    -1,    19,    -1,    -1,
      22,    -1,    24,    25,     3,     4,     5,    -1,     7,     8,
       9,    10,    -1,    -1,    13,    14,    -1,    16,    17,    18,
      19,    -1,    -1,    22,    -1,    24,    25,     3,     4,     5,
      -1,     7,     8,     9,    10,    -1,    -1,    13,    14,    -1,
      16,    17,    18,    19,    -1,    -1,    22,    -1,    24,    25,
       3,     4,     5,    -1,     7,     8,     9,    10,    -1,    -1,
      13,    14,    -1,    16,    17,    18,    19,    -1,    -1,    22,
      -1,    24,    25,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,    -1,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    22,    -1,    24,    25,     3,     4,     5,    -1,
       7,     8,     9,    10,    -1,    -1,    13,    14,    -1,    16,
      17,    18,    19,    -1,    -1,    22,    -1,    24,    25,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    13,
      14,    -1,    16,    17,    18,    19,    -1,    -1,    22,    -1,
      24,    25,     3,     4,     5,    -1,     7,     8,     9,    10,
      -1,    -1,    13,    14,    -1,    16,    17,    18,    19,    -1,
      -1,    22,    -1,    24,    25,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    13,    14,    -1,    16,    17,
      18,    19,    -1,    -1,    22,    -1,    24,    25,     3,     4,
       5,    -1,     7,     8,     9,    10,    -1,    -1,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    22,    -1,    24,
      25,     3,     4,     5,    -1,     7,     8,     9,    10,    -1,
      -1,    13,    14,    -1,    16,    17,    18,    19,    -1,    -1,
      22,    -1,    24,    25,     3,     4,     5,    -1,     7,     8,
       9,    10,    -1,    -1,    13,    14,    -1,    16,    17,    18,
      19,    -1,    -1,    22,    -1,    24,    25,     3,     4,     5,
      -1,     7,     8,     9,    10,    -1,    -1,    13,    14,    -1,
      16,    17,    18,    19,    -1,    -1,    22,    -1,    24,    25,
       3,     4,     5,    -1,     7,     8,     9,    10,    -1,    -1,
      13,    14,    -1,    16,    17,    18,    19,    -1,    -1,    22,
      -1,    24,    25,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,    -1,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    22,    -1,    24,    25,     3,     4,     5,    -1,
       7,     8,     9,    10,    -1,    -1,    13,    14,    -1,    16,
      17,    18,    19,    -1,    -1,    22,    -1,    24,    25,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    13,
      14,    -1,    16,    17,    18,    19,    -1,    -1,    22,    -1,
      24,    25,     3,     4,     5,    -1,     7,     8,     9,    10,
      -1,    -1,    13,    14,    -1,    16,    17,    18,    19,    -1,
      -1,    22,    -1,    24,    25,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    13,    14,    -1,    16,    17,
      18,    19,    -1,    -1,    22,    -1,    24,    25,     3,     4,
       5,    -1,     7,     8,     9,    10,    -1,    -1,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    22,    -1,    24,
      25,     3,     4,     5,    -1,     7,     8,     9,    10,    -1,
      -1,    13,    14,    -1,    16,    17,    18,    19,    -1,    -1,
      22,    -1,    24,    25,     3,     4,     5,    -1,     7,     8,
       9,    10,    -1,    -1,    13,    14,    -1,    16,    17,    -1,
      19,    -1,    -1,    22,    -1,    24,    25,     3,     4,     5,
      -1,     7,     8,     9,    10,    -1,    -1,    13,    14,    -1,
      16,    17,    -1,    19,    -1,    -1,    22,    -1,    24,    25,
       3,     4,     5,    -1,    -1,     8,    -1,     3,     4,     5,
       6,    -1,     8,    16,    -1,    -1,    19,    -1,    -1,    22,
      16,    24,    25,    19,    -1,     3,     4,     5,    24,    25,
       8,    -1,     3,     4,     5,    -1,    -1,     8,    16,    -1,
      -1,    19,    -1,    -1,    22,    16,    24,    25,    19,    20,
      -1,    -1,    -1,    24,    25,     3,     4,     5,     6,    -1,
       8,    -1,     3,     4,     5,    -1,    22,     8,    16,    -1,
      -1,    19,    28,    29,    30,    16,    24,    25,    19,    -1,
       3,     4,     5,    24,    25,     8,    -1,     3,     4,     5,
      -1,    22,     8,    16,    -1,    -1,    19,    28,    29,    30,
      16,    24,    25,    19,    -1,     3,     4,     5,    24,    25,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,
      -1,    19,    15,    -1,    -1,    -1,    24,    25,    -1,    22,
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
      15,    25,    26,    27,    28,    29,    30,    22,    -1,    -1,
      25,    26,    27,    28,    29,    30,    15,    22,    -1,    -1,
      -1,    20,    27,    28,    29,    30,    25,    26,    27,    28,
      29,    30,    15,    22,    -1,    -1,    -1,    20,    27,    28,
      29,    30,    25,    26,    27,    28,    29,    30,    15,    -1,
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
      -1,    -1,    -1,    20,    -1,    -1,    -1,    15,    25,    26,
      27,    28,    29,    30,    22,    -1,    -1,    25,    15,    27,
      28,    29,    30,    20,    15,    -1,    -1,    -1,    25,    20,
      27,    28,    29,    30,    25,    15,    27,    28,    29,    30,
      -1,    -1,    22,    -1,    15,    20,    -1,    27,    28,    29,
      30,    22,    27,    28,    29,    30,    27,    28,    29,    30
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     7,     8,     9,    10,    13,    14,
      16,    17,    19,    22,    24,    25,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     8,    23,    19,
      42,    19,    19,     8,    52,    34,    42,    52,    52,     0,
      35,    22,    29,    30,    28,    27,    15,    25,    26,    22,
      42,    42,    43,    22,     8,     6,    42,    18,    20,    46,
      47,    48,    49,    50,    51,    52,    22,    20,    20,    20,
      44,    45,    22,    22,    22,    22,    43,    20,    35,     7,
       9,    10,    13,    14,    17,    22,    33,    35,    36,    37,
      38,    39,    40,    41,    42,    53,     3,     4,     5,     8,
      16,    19,    24,    25,    45,    46,    47,    48,    49,    50,
      51,    52,    54,    35,    42,     8,    19,    42,    19,    19,
      34,    22,    23,     8,    52,    42,    52,    52,    29,    30,
      28,    27,    15,    25,    26,    22,    43,    22,     8,     6,
      42,    18,    42,    20,    46,    47,    48,    49,    50,    51,
      52,    22,    20,    20,    20,    44,    22,    22,    22,    22,
      43,    20,    35
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    31,    32,    33,    34,    34,    35,    35,    35,    35,
      35,    35,    36,    37,    37,    38,    38,    39,    40,    40,
      41,    42,    42,    43,    43,    44,    44,    45,    45,    46,
      46,    47,    47,    48,    48,    49,    49,    50,    50,    51,
      51,    52,    52,    52,    52,    52,    52,    53,    54,    54,
      54
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     9,     2,     1,     1,     1,     5,     5,     5,
       3,     3,     1,     0,     1,     0,     1,     3,     1,     3,
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

#line 1842 "parser.tab.c"

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

#line 202 "./src/parser.y"


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
