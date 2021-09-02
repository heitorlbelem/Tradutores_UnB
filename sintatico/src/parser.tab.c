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
  YYSYMBOL_C_STRING = 6,                   /* C_STRING  */
  YYSYMBOL_T_INTEGER = 7,                  /* T_INTEGER  */
  YYSYMBOL_T_FLOAT = 8,                    /* T_FLOAT  */
  YYSYMBOL_T_LIST = 9,                     /* T_LIST  */
  YYSYMBOL_IDENTIFIER = 10,                /* IDENTIFIER  */
  YYSYMBOL_RW_FOR = 11,                    /* RW_FOR  */
  YYSYMBOL_RW_RETURN = 12,                 /* RW_RETURN  */
  YYSYMBOL_RW_IF = 13,                     /* RW_IF  */
  YYSYMBOL_RW_ELSE = 14,                   /* RW_ELSE  */
  YYSYMBOL_IO_READ = 15,                   /* IO_READ  */
  YYSYMBOL_IO_WRITE = 16,                  /* IO_WRITE  */
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
  YYSYMBOL_COMPARISON_OP = 27,             /* COMPARISON_OP  */
  YYSYMBOL_LOGICAL_OP_OR = 28,             /* LOGICAL_OP_OR  */
  YYSYMBOL_LOGICAL_OP_AND = 29,            /* LOGICAL_OP_AND  */
  YYSYMBOL_UNARY_LIST_OP = 30,             /* UNARY_LIST_OP  */
  YYSYMBOL_BINARY_LIST_OP = 31,            /* BINARY_LIST_OP  */
  YYSYMBOL_YYACCEPT = 32,                  /* $accept  */
  YYSYMBOL_program = 33,                   /* program  */
  YYSYMBOL_declaration = 34,               /* declaration  */
  YYSYMBOL_function_declaration = 35,      /* function_declaration  */
  YYSYMBOL_function_call = 36,             /* function_call  */
  YYSYMBOL_params = 37,                    /* params  */
  YYSYMBOL_block = 38,                     /* block  */
  YYSYMBOL_conditional_statment = 39,      /* conditional_statment  */
  YYSYMBOL_input_statment = 40,            /* input_statment  */
  YYSYMBOL_output_statment = 41,           /* output_statment  */
  YYSYMBOL_for_statment = 42,              /* for_statment  */
  YYSYMBOL_list_binary_operation_statment = 43, /* list_binary_operation_statment  */
  YYSYMBOL_binary_operation = 44,          /* binary_operation  */
  YYSYMBOL_list_unary_operation_expression = 45, /* list_unary_operation_expression  */
  YYSYMBOL_statment = 46,                  /* statment  */
  YYSYMBOL_expression = 47,                /* expression  */
  YYSYMBOL_comparison_expression = 48,     /* comparison_expression  */
  YYSYMBOL_logical_expression_or = 49,     /* logical_expression_or  */
  YYSYMBOL_logical_expression_and = 50,    /* logical_expression_and  */
  YYSYMBOL_aritmetic_expression_additive = 51, /* aritmetic_expression_additive  */
  YYSYMBOL_aritmetic_expression_multiplicative = 52, /* aritmetic_expression_multiplicative  */
  YYSYMBOL_return_statment = 53,           /* return_statment  */
  YYSYMBOL_value = 54,                     /* value  */
  YYSYMBOL_variable_assignment = 55,       /* variable_assignment  */
  YYSYMBOL_variable_declaration = 56,      /* variable_declaration  */
  YYSYMBOL_type = 57,                      /* type  */
  YYSYMBOL_constant = 58                   /* constant  */
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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1110

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  193

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
static const yytype_int16 yyrline[] =
{
       0,   113,   113,   119,   123,   127,   130,   133,   137,   156,
     177,   180,   183,   187,   191,   197,   203,   208,   218,   225,
     229,   236,   246,   253,   261,   268,   272,   276,   280,   284,
     288,   292,   296,   300,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   316,   322,   327,   333,   338,   344,   349,
     355,   360,   366,   371,   375,   382,   385,   388,   391,   396,
     401,   406,   410,   413,   420,   425,   433,   452,   458,   464,
     473,   476,   479
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
  "C_NIL", "C_STRING", "T_INTEGER", "T_FLOAT", "T_LIST", "IDENTIFIER",
  "RW_FOR", "RW_RETURN", "RW_IF", "RW_ELSE", "IO_READ", "IO_WRITE", "'{'",
  "'}'", "'('", "')'", "','", "';'", "'='", "'!'", "ARITMETIC_OP_ADDITIVE",
  "ARITMETIC_OP_MULTIPLICATIVE", "COMPARISON_OP", "LOGICAL_OP_OR",
  "LOGICAL_OP_AND", "UNARY_LIST_OP", "BINARY_LIST_OP", "$accept",
  "program", "declaration", "function_declaration", "function_call",
  "params", "block", "conditional_statment", "input_statment",
  "output_statment", "for_statment", "list_binary_operation_statment",
  "binary_operation", "list_unary_operation_expression", "statment",
  "expression", "comparison_expression", "logical_expression_or",
  "logical_expression_and", "aritmetic_expression_additive",
  "aritmetic_expression_multiplicative", "return_statment", "value",
  "variable_assignment", "variable_declaration", "type", "constant", YY_NULLPTR
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

#define YYPACT_NINF (-124)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-73)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     114,   173,     7,    13,    57,   210,   761,   771,    15,    84,
    -124,   781,    81,   791,    27,   801,    34,    -5,   105,    49,
     117,   731,   811,    -5,   221,    98,   106,   -13,   111,   273,
     129,   136,   138,   137,    50,   354,   367,   380,   393,   406,
     419,   142,   144,   821,   140,   233,   190,   158,   921,   929,
     937,   945,   297,   101,   315,   160,   953,   149,    25,    28,
    1069,  1057,   961,   969,   977,   297,   182,   261,   432,   831,
     161,   445,   458,   471,   484,   497,   510,   175,   186,   523,
     536,   189,   184,   286,   191,   549,   194,   199,   203,   222,
     985,   297,   993,  1001,  1009,  1017,   562,   273,   273,   273,
     273,   273,   231,   236,   239,   241,   575,   588,   601,   228,
     252,   202,   273,  1025,   262,   174,  1073,  1065,  1033,  1041,
     224,   259,   268,   274,   282,   726,    62,  1049,   322,   614,
     627,   640,   653,   277,   278,   289,   666,   278,   679,   296,
     219,   747,   757,   767,   297,   265,  1100,   300,   777,    73,
      70,   841,   907,   787,   797,   807,   731,   301,   731,   304,
     308,   817,   297,   827,   837,   847,   857,   297,   297,   297,
     297,   297,   692,   230,   705,   867,   321,   124,   851,   913,
     877,   887,   338,   323,   737,   324,   337,   718,   897,   269,
     339,   340,   351
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
       0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -124,  -124,  -124,   353,   -35,   318,    -8,   -38,   -32,   -31,
     -18,   -11,  -124,    87,  -123,   -27,    -2,     2,   -10,   -16,
     -20,    -7,   -26,   -25,     0,    29,    78
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,     7,    33,    18,    22,    34,    35,    36,
      37,    38,    85,   148,    39,    86,   149,   150,   151,   152,
     153,    40,   154,    41,    42,   139,   155
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       8,    71,    57,    63,    70,    12,    45,    72,    73,    62,
      46,    84,    21,    61,    77,    43,    19,   -67,    82,    60,
      63,    74,    88,   -68,    19,    89,    62,    58,    75,     9,
      61,    59,    76,   172,     9,   174,    60,    13,   102,    78,
     105,     2,     3,     4,    58,    20,    16,   -43,    59,   -66,
     -45,   -37,    97,    20,    17,   -45,    98,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   114,   -37,   -37,   -69,   -37,   -14,
      24,    63,    63,    63,    63,   119,    84,    62,    62,    62,
     118,    61,    61,   117,   133,    63,    63,    60,   116,    97,
     -45,    62,    62,   -43,    14,    61,    61,   -45,   168,   115,
     167,    60,    60,    15,    48,    49,    50,    64,   135,    58,
     126,    90,   128,    59,    59,     1,    56,   160,   -66,   -66,
      91,     2,     3,     4,    64,    23,   136,    25,   -12,   138,
      47,    92,    94,    56,    71,   176,    71,    70,   185,    70,
      72,    73,    72,    73,   -44,   181,   186,    77,    65,    77,
     180,   -44,   168,   179,    74,    66,    74,    67,   178,    68,
     -13,    75,   191,    75,    79,    76,    80,    76,    87,   177,
      95,    96,    78,    -7,    78,    64,    64,    64,    64,    64,
      -7,    -7,    -7,   106,    56,    56,    56,    56,    56,    64,
      64,    26,   103,    48,    49,    50,   -44,   107,    56,    56,
      83,   -44,    98,    26,   109,    48,    49,    50,   108,    52,
      10,   -10,   125,   -65,    53,    54,   -64,     2,     3,     4,
      55,    52,   111,   163,   165,   112,    53,    54,     2,     3,
       4,   183,    55,   140,   141,   142,   140,   141,   142,   -70,
     184,   156,   113,   143,   -70,   -70,   -70,   -70,   -70,   144,
     -11,   120,   144,    81,   145,   146,   121,   145,   146,   122,
     147,   123,   124,   147,   140,   141,   142,   104,   140,   141,
     142,   143,   140,   141,   142,   161,    48,    49,    50,   143,
     144,   129,   127,    51,   162,   145,   146,   157,   144,   190,
     130,   147,    52,   145,   146,   158,   131,    53,    54,   147,
     140,   141,   142,    55,   132,    45,   159,   143,   -55,   137,
     166,   -55,   -55,   -55,   -55,   -55,   144,   110,    48,    49,
      50,   145,   146,   -16,   173,    93,   -66,   147,   175,   -16,
     -16,   -16,   -16,   -16,   -16,   -16,   134,   -16,   -16,   -15,
     -16,   188,    44,   -12,   -65,   -15,   -15,   -15,   -15,   -15,
     -15,   -15,   -15,   -15,   -15,   -38,   -15,   -64,    11,   -10,
     192,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -39,   -38,
     -38,   -11,   -38,     0,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -40,   -39,   -39,     0,   -39,     0,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -41,   -40,   -40,     0,   -40,     0,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,    26,   -41,   -41,
       0,   -41,     0,     2,     3,     4,    27,    28,    29,    30,
     -36,    31,    32,     0,    69,     0,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -42,   -36,   -36,     0,   -36,     0,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -28,   -42,   -42,     0,
     -42,     0,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -29,
     -28,   -28,     0,   -28,     0,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -30,   -29,   -29,     0,   -29,     0,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -31,   -30,   -30,     0,   -30,
       0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -32,   -31,
     -31,     0,   -31,     0,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -27,   -32,   -32,     0,   -32,     0,   -27,   -27,   -27,
     -27,   -27,   -27,   -27,   -35,   -27,   -27,     0,   -27,     0,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -34,   -35,   -35,
       0,   -35,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -22,   -34,   -34,     0,   -34,     0,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,   -54,   -22,   -22,     0,   -22,     0,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -33,   -54,   -54,     0,
     -54,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -25,
     -33,   -33,     0,   -33,     0,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,   -26,   -25,   -25,     0,   -25,     0,   -26,   -26,
     -26,   -26,   -26,   -26,   -26,   -18,   -26,   -26,     0,   -26,
       0,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -19,   -18,
     -18,     0,   -18,     0,   -19,   -19,   -19,   -19,   -19,   -19,
     -19,   -20,   -19,   -19,     0,   -19,     0,   -20,   -20,   -20,
     -20,   -20,   -20,   -20,   -23,   -20,   -20,     0,   -20,     0,
     -23,   -23,   -23,   -23,   -23,   -23,   -23,   -17,   -23,   -23,
       0,   -23,     0,   -17,   -17,   -17,   -17,   -17,   -17,   -17,
     -21,   -17,   -17,     0,   -17,     0,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,    26,   -21,   -21,     0,   -21,     0,     2,
       3,     4,    27,    28,    29,    30,    26,    31,    32,     0,
     182,     0,     2,     3,     4,    27,    28,    29,    30,   -15,
      31,    32,     0,   187,     0,   -15,   -15,   -15,   -15,   -15,
     -15,   -15,    26,   -15,   -15,     0,   -15,     0,     2,     3,
       4,    27,    28,    29,    30,    45,    31,    32,   -55,     0,
       0,   -55,   -55,   -55,   -55,   -55,   189,   -55,     0,     0,
       0,    -2,   -55,   -55,   -55,   -55,   -55,   -71,    -2,    -2,
      -2,    -6,   -71,   -71,   -71,   -71,   -71,   -72,    -6,    -6,
      -6,    -4,   -72,   -72,   -72,   -72,   -72,   -55,    -4,    -4,
      -4,    -5,   -55,   -55,   -55,   -55,   -55,   -57,    -5,    -5,
      -5,    -3,   -57,   -57,   -57,   -57,   -57,   -51,    -3,    -3,
      -3,    -8,   -51,   171,   -51,   -51,   -51,   -53,    -8,    -8,
      -8,    -9,   -53,   -53,   -53,   -53,   -53,   -56,    -9,    -9,
      -9,   -15,   -56,   -56,   -56,   -56,   -56,   -60,   -15,   -15,
     -15,     0,   -60,   -60,   -60,   -60,   -60,   -61,     0,     0,
       0,     0,   -61,   -61,   -61,   -61,   -61,   -58,     0,     0,
       0,   -47,   -58,   -58,   -58,   -58,   -58,   -59,   -47,   -47,
     169,   -46,   -59,   -59,   -59,   -59,   -59,   -24,   -46,   -46,
     169,     0,   -24,   -24,   -24,   -24,   -24,   -62,     0,     0,
       0,     0,   -62,   -62,   -62,   -62,   -62,   -50,     0,     0,
       0,     0,   -50,   171,   -50,   -50,   -50,   -52,     0,     0,
       0,     0,   -52,   -52,   -52,   -52,   -52,   -63,     0,     0,
       0,     0,   -63,   -63,   -63,   -63,   -63,   -49,     0,     0,
       0,     0,   170,   -48,   -49,   -49,   -49,     0,   170,     0,
     -48,   -48,   -48,   -70,     0,     0,   -70,   -70,   -70,   -70,
     -70,   -71,     0,     0,   -71,   -71,   -71,   -71,   -71,   -72,
       0,     0,   -72,   -72,   -72,   -72,   -72,   -55,     0,     0,
     -55,   -55,   -55,   -55,   -55,   -57,     0,     0,   -57,   -57,
     -57,   -57,   -57,   -51,     0,     0,   -51,   101,   -51,   -51,
     -51,   -53,     0,     0,   -53,   -53,   -53,   -53,   -53,   -56,
       0,     0,   -56,   -56,   -56,   -56,   -56,   -60,     0,     0,
     -60,   -60,   -60,   -60,   -60,   -61,     0,     0,   -61,   -61,
     -61,   -61,   -61,   -58,     0,     0,   -58,   -58,   -58,   -58,
     -58,   -59,     0,     0,   -59,   -59,   -59,   -59,   -59,   -24,
       0,     0,   -24,   -24,   -24,   -24,   -24,   -62,     0,     0,
     -62,   -62,   -62,   -62,   -62,   -50,     0,     0,   -50,   101,
     -50,   -50,   -50,   -52,     0,     0,   -52,   -52,   -52,   -52,
     -52,   -63,     0,     0,   -63,   -63,   -63,   -63,   -63,   -49,
       0,     0,   100,     0,   -49,   -49,   -49,   -48,     0,     0,
     100,   -47,   -48,   -48,   -48,   -46,   -47,   -47,    99,     0,
     -46,   -46,    99,   140,   141,   142,     0,     0,     0,     0,
     164
};

static const yytype_int16 yycheck[] =
{
       0,    39,    29,    29,    39,     5,    19,    39,    39,    29,
      23,    46,    17,    29,    39,    23,    16,    10,    45,    29,
      46,    39,    47,    10,    24,    52,    46,    29,    39,     0,
      46,    29,    39,   156,     5,   158,    46,    22,    65,    39,
      67,     7,     8,     9,    46,    16,    19,    22,    46,    22,
      22,     1,    27,    24,    20,    27,    28,     7,     8,     9,
      10,    11,    12,    13,    91,    15,    16,    10,    18,    20,
      21,    97,    98,    99,   100,   101,   111,    97,    98,    99,
     100,    97,    98,    99,    22,   111,   112,    97,    98,    27,
      20,   111,   112,    20,    10,   111,   112,    27,    28,    97,
      27,   111,   112,    22,     3,     4,     5,    29,   133,   111,
     112,    10,   120,   111,   112,     1,    29,   144,    20,    21,
      19,     7,     8,     9,    46,    20,   134,    10,    22,   137,
      19,    53,    54,    46,   172,   162,   174,   172,   173,   174,
     172,   172,   174,   174,    20,   171,   173,   172,    19,   174,
     170,    27,    28,   169,   172,    19,   174,    19,   168,    22,
      20,   172,   189,   174,    22,   172,    22,   174,    10,   167,
      10,    22,   172,     0,   174,    97,    98,    99,   100,   101,
       7,     8,     9,    22,    97,    98,    99,   100,   101,   111,
     112,     1,    10,     3,     4,     5,    22,    22,   111,   112,
      10,    27,    28,     1,    20,     3,     4,     5,    22,    19,
       0,    22,    10,    22,    24,    25,    22,     7,     8,     9,
      30,    19,    23,   145,   146,    22,    24,    25,     7,     8,
       9,     1,    30,     3,     4,     5,     3,     4,     5,    20,
      10,    17,    20,    10,    25,    26,    27,    28,    29,    19,
      22,    20,    19,    20,    24,    25,    20,    24,    25,    20,
      30,    20,    10,    30,     3,     4,     5,     6,     3,     4,
       5,    10,     3,     4,     5,    10,     3,     4,     5,    10,
      19,    22,    20,    10,    19,    24,    25,    10,    19,    20,
      22,    30,    19,    24,    25,    17,    22,    24,    25,    30,
       3,     4,     5,    30,    22,    19,    10,    10,    22,    20,
      10,    25,    26,    27,    28,    29,    19,    31,     3,     4,
       5,    24,    25,     1,    23,    10,    22,    30,    20,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,     1,
      18,    20,    24,    20,    20,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,     1,    18,    20,     5,    20,
      20,     7,     8,     9,    10,    11,    12,    13,     1,    15,
      16,    20,    18,    -1,     7,     8,     9,    10,    11,    12,
      13,     1,    15,    16,    -1,    18,    -1,     7,     8,     9,
      10,    11,    12,    13,     1,    15,    16,    -1,    18,    -1,
       7,     8,     9,    10,    11,    12,    13,     1,    15,    16,
      -1,    18,    -1,     7,     8,     9,    10,    11,    12,    13,
       1,    15,    16,    -1,    18,    -1,     7,     8,     9,    10,
      11,    12,    13,     1,    15,    16,    -1,    18,    -1,     7,
       8,     9,    10,    11,    12,    13,     1,    15,    16,    -1,
      18,    -1,     7,     8,     9,    10,    11,    12,    13,     1,
      15,    16,    -1,    18,    -1,     7,     8,     9,    10,    11,
      12,    13,     1,    15,    16,    -1,    18,    -1,     7,     8,
       9,    10,    11,    12,    13,     1,    15,    16,    -1,    18,
      -1,     7,     8,     9,    10,    11,    12,    13,     1,    15,
      16,    -1,    18,    -1,     7,     8,     9,    10,    11,    12,
      13,     1,    15,    16,    -1,    18,    -1,     7,     8,     9,
      10,    11,    12,    13,     1,    15,    16,    -1,    18,    -1,
       7,     8,     9,    10,    11,    12,    13,     1,    15,    16,
      -1,    18,    -1,     7,     8,     9,    10,    11,    12,    13,
       1,    15,    16,    -1,    18,    -1,     7,     8,     9,    10,
      11,    12,    13,     1,    15,    16,    -1,    18,    -1,     7,
       8,     9,    10,    11,    12,    13,     1,    15,    16,    -1,
      18,    -1,     7,     8,     9,    10,    11,    12,    13,     1,
      15,    16,    -1,    18,    -1,     7,     8,     9,    10,    11,
      12,    13,     1,    15,    16,    -1,    18,    -1,     7,     8,
       9,    10,    11,    12,    13,     1,    15,    16,    -1,    18,
      -1,     7,     8,     9,    10,    11,    12,    13,     1,    15,
      16,    -1,    18,    -1,     7,     8,     9,    10,    11,    12,
      13,     1,    15,    16,    -1,    18,    -1,     7,     8,     9,
      10,    11,    12,    13,     1,    15,    16,    -1,    18,    -1,
       7,     8,     9,    10,    11,    12,    13,     1,    15,    16,
      -1,    18,    -1,     7,     8,     9,    10,    11,    12,    13,
       1,    15,    16,    -1,    18,    -1,     7,     8,     9,    10,
      11,    12,    13,     1,    15,    16,    -1,    18,    -1,     7,
       8,     9,    10,    11,    12,    13,     1,    15,    16,    -1,
      18,    -1,     7,     8,     9,    10,    11,    12,    13,     1,
      15,    16,    -1,    18,    -1,     7,     8,     9,    10,    11,
      12,    13,     1,    15,    16,    -1,    18,    -1,     7,     8,
       9,    10,    11,    12,    13,    19,    15,    16,    22,    -1,
      -1,    25,    26,    27,    28,    29,    19,    20,    -1,    -1,
      -1,     0,    25,    26,    27,    28,    29,    20,     7,     8,
       9,     0,    25,    26,    27,    28,    29,    20,     7,     8,
       9,     0,    25,    26,    27,    28,    29,    20,     7,     8,
       9,     0,    25,    26,    27,    28,    29,    20,     7,     8,
       9,     0,    25,    26,    27,    28,    29,    20,     7,     8,
       9,     0,    25,    26,    27,    28,    29,    20,     7,     8,
       9,     0,    25,    26,    27,    28,    29,    20,     7,     8,
       9,     0,    25,    26,    27,    28,    29,    20,     7,     8,
       9,    -1,    25,    26,    27,    28,    29,    20,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    20,    -1,    -1,
      -1,    20,    25,    26,    27,    28,    29,    20,    27,    28,
      29,    20,    25,    26,    27,    28,    29,    20,    27,    28,
      29,    -1,    25,    26,    27,    28,    29,    20,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    20,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    20,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    20,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    20,    -1,    -1,
      -1,    -1,    25,    20,    27,    28,    29,    -1,    25,    -1,
      27,    28,    29,    22,    -1,    -1,    25,    26,    27,    28,
      29,    22,    -1,    -1,    25,    26,    27,    28,    29,    22,
      -1,    -1,    25,    26,    27,    28,    29,    22,    -1,    -1,
      25,    26,    27,    28,    29,    22,    -1,    -1,    25,    26,
      27,    28,    29,    22,    -1,    -1,    25,    26,    27,    28,
      29,    22,    -1,    -1,    25,    26,    27,    28,    29,    22,
      -1,    -1,    25,    26,    27,    28,    29,    22,    -1,    -1,
      25,    26,    27,    28,    29,    22,    -1,    -1,    25,    26,
      27,    28,    29,    22,    -1,    -1,    25,    26,    27,    28,
      29,    22,    -1,    -1,    25,    26,    27,    28,    29,    22,
      -1,    -1,    25,    26,    27,    28,    29,    22,    -1,    -1,
      25,    26,    27,    28,    29,    22,    -1,    -1,    25,    26,
      27,    28,    29,    22,    -1,    -1,    25,    26,    27,    28,
      29,    22,    -1,    -1,    25,    26,    27,    28,    29,    22,
      -1,    -1,    25,    -1,    27,    28,    29,    22,    -1,    -1,
      25,    22,    27,    28,    29,    22,    27,    28,    29,    -1,
      27,    28,    29,     3,     4,     5,    -1,    -1,    -1,    -1,
      10
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     7,     8,     9,    33,    34,    35,    56,    57,
       0,    35,    56,    22,    10,    22,    19,    20,    37,    56,
      57,    17,    38,    20,    21,    10,     1,    10,    11,    12,
      13,    15,    16,    36,    39,    40,    41,    42,    43,    46,
      53,    55,    56,    38,    37,    19,    23,    19,     3,     4,
       5,    10,    19,    24,    25,    30,    45,    47,    48,    49,
      50,    51,    52,    54,    58,    19,    19,    19,    22,    18,
      36,    39,    40,    41,    42,    43,    53,    55,    56,    22,
      22,    20,    47,    10,    36,    44,    47,    10,    55,    47,
      10,    19,    58,    10,    58,    10,    22,    27,    28,    29,
      25,    26,    47,    10,     6,    47,    22,    22,    22,    20,
      31,    23,    22,    20,    47,    49,    50,    51,    52,    54,
      20,    20,    20,    20,    10,    10,    48,    20,    38,    22,
      22,    22,    22,    22,    14,    55,    38,    20,    38,    57,
       3,     4,     5,    10,    19,    24,    25,    30,    45,    48,
      49,    50,    51,    52,    54,    58,    17,    10,    17,    10,
      47,    10,    19,    58,    10,    58,    10,    27,    28,    29,
      25,    26,    46,    23,    46,    20,    47,    49,    50,    51,
      52,    54,    18,     1,    10,    36,    47,    18,    20,    19,
      20,    47,    20
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    32,    33,    34,    34,    34,    34,    34,    35,    35,
      36,    36,    36,    37,    37,    38,    39,    39,    40,    41,
      41,    42,    43,    44,    45,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    47,    48,    48,    49,    49,    50,    50,
      51,    51,    52,    52,    53,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    55,    55,    56,    57,    57,    57,
      58,    58,    58
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     2,     2,     1,     1,     5,     6,
       3,     4,     1,     3,     1,     3,     5,     7,     5,     5,
       5,     9,     3,     4,     2,     3,     3,     2,     2,     2,
       2,     2,     2,     3,     2,     2,     1,     1,     1,     1,
       1,     1,     2,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     1,     1,     2,     2,
       2,     2,     3,     4,     3,     3,     2,     1,     1,     1,
       1,     1,     1
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
  case 2: /* program: declaration  */
#line 113 "./src/parser.y"
                {
        root_node = (yyvsp[0].node);
    }
#line 1729 "parser.tab.c"
    break;

  case 3: /* declaration: program variable_declaration ';'  */
#line 119 "./src/parser.y"
                                       {
        (yyval.node) = (yyvsp[-2].node);
        (yyval.node)->children[0] = (yyvsp[-1].node);
    }
#line 1738 "parser.tab.c"
    break;

  case 4: /* declaration: program function_declaration  */
#line 123 "./src/parser.y"
                                   {
        (yyval.node) = (yyvsp[-1].node);
        (yyval.node)->children[0] = (yyvsp[0].node);
    }
#line 1747 "parser.tab.c"
    break;

  case 5: /* declaration: variable_declaration ';'  */
#line 127 "./src/parser.y"
                               {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 1755 "parser.tab.c"
    break;

  case 6: /* declaration: function_declaration  */
#line 130 "./src/parser.y"
                           {
        (yyval.node) = (yyvsp[0].node);
    }
#line 1763 "parser.tab.c"
    break;

  case 7: /* declaration: error  */
#line 133 "./src/parser.y"
           {}
#line 1769 "parser.tab.c"
    break;

  case 8: /* function_declaration: type IDENTIFIER '(' ')' block  */
#line 137 "./src/parser.y"
                                    {
        scope_id++;
        update_symbol(
            symbol_table_idx,
            (yyvsp[-3].token).line_idx, 
            (yyvsp[-3].token).column_idx, 
            scope_id, 
            0, 
            (yyvsp[-3].token).content
        );
        symbol_table_idx++;
        symbol_table_size++;

        (yyval.node) = create_node("function_declaration", "", 0);
        (yyval.node)->children[0] = (yyvsp[-4].node);
        (yyval.node)->children[1] = create_node("identifier", (yyvsp[-3].token).content, 1);
        (yyval.node)->children[2] = NULL;
        (yyval.node)->children[3] = (yyvsp[0].node);
    }
#line 1793 "parser.tab.c"
    break;

  case 9: /* function_declaration: type IDENTIFIER '(' params ')' block  */
#line 156 "./src/parser.y"
                                           {
        scope_id++;
        update_symbol(
            symbol_table_idx,
            (yyvsp[-4].token).line_idx, 
            (yyvsp[-4].token).column_idx, 
            scope_id, 
            0, 
            (yyvsp[-4].token).content
        );
        symbol_table_idx++;
        symbol_table_size++;
        (yyval.node) = create_node("function_declaration", "", 0);
        (yyval.node)->children[0] = (yyvsp[-5].node);
        (yyval.node)->children[1] = create_node("identifier", (yyvsp[-4].token).content, 1);
        (yyval.node)->children[2] = (yyvsp[-2].node);
        (yyval.node)->children[3] = (yyvsp[0].node);
    }
#line 1816 "parser.tab.c"
    break;

  case 10: /* function_call: IDENTIFIER '(' ')'  */
#line 177 "./src/parser.y"
                         {
        (yyval.node) = create_node("identifier", (yyvsp[-2].token).content, 1);
    }
#line 1824 "parser.tab.c"
    break;

  case 11: /* function_call: IDENTIFIER '(' expression ')'  */
#line 180 "./src/parser.y"
                                    {
        (yyval.node) = create_node("identifier", (yyvsp[-3].token).content, 1);
    }
#line 1832 "parser.tab.c"
    break;

  case 12: /* function_call: error  */
#line 183 "./src/parser.y"
            { }
#line 1838 "parser.tab.c"
    break;

  case 13: /* params: variable_declaration ',' params  */
#line 187 "./src/parser.y"
                                      {
        (yyval.node) = create_node("params", "", 0);
        (yyval.node)->children[0] = (yyvsp[-2].node);
    }
#line 1847 "parser.tab.c"
    break;

  case 14: /* params: variable_declaration  */
#line 191 "./src/parser.y"
                           {
        (yyval.node) = (yyvsp[0].node);
    }
#line 1855 "parser.tab.c"
    break;

  case 15: /* block: '{' statment '}'  */
#line 197 "./src/parser.y"
                       {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 1863 "parser.tab.c"
    break;

  case 16: /* conditional_statment: RW_IF '(' expression ')' block  */
#line 203 "./src/parser.y"
                                     {
        (yyval.node) = create_node("conditional_statment", "if", 0);
        (yyval.node)->children[0] = (yyvsp[-2].node);
        (yyval.node)->children[1] = (yyvsp[0].node);
    }
#line 1873 "parser.tab.c"
    break;

  case 17: /* conditional_statment: RW_IF '(' expression ')' block RW_ELSE block  */
#line 208 "./src/parser.y"
                                                   {
        (yyval.node) = create_node("conditional_statment", "if_else", 0);
        (yyval.node)->children[0] = (yyvsp[-4].node);
        (yyval.node)->children[1] = (yyvsp[-2].node);
        (yyval.node)->children[2] = create_node("else", (yyvsp[-1].token).content, 0);
        (yyval.node)->children[2]->children[0] = (yyvsp[0].node);
    }
#line 1885 "parser.tab.c"
    break;

  case 18: /* input_statment: IO_READ '(' IDENTIFIER ')' ';'  */
#line 218 "./src/parser.y"
                                     {
        (yyval.node) = create_node("input_statment", (yyvsp[-4].token).content, 0);
        (yyval.node)->children[0] = create_node("identifier", (yyvsp[-2].token).content, 1);
    }
#line 1894 "parser.tab.c"
    break;

  case 19: /* output_statment: IO_WRITE '(' C_STRING ')' ';'  */
#line 225 "./src/parser.y"
                                    {
        (yyval.node) = create_node("output_statment", (yyvsp[-4].token).content, 0);
        (yyval.node)->children[0] = create_node("string_constant", (yyvsp[-2].token).content, 1);
    }
#line 1903 "parser.tab.c"
    break;

  case 20: /* output_statment: IO_WRITE '(' expression ')' ';'  */
#line 229 "./src/parser.y"
                                      {
        (yyval.node) = create_node("output_statment", (yyvsp[-4].token).content, 0);
        (yyval.node)->children[0] = (yyvsp[-2].node);
    }
#line 1912 "parser.tab.c"
    break;

  case 21: /* for_statment: RW_FOR '(' variable_assignment ';' comparison_expression ';' variable_assignment ')' block  */
#line 236 "./src/parser.y"
                                                                                                 {
        (yyval.node) = create_node("for_statment", (yyvsp[-8].token).content, 0);
        (yyval.node)->children[0] = (yyvsp[-6].node);
        (yyval.node)->children[1] = (yyvsp[-4].node);
        (yyval.node)->children[2] = (yyvsp[-2].node);
        (yyval.node)->children[3] = (yyvsp[0].node);
    }
#line 1924 "parser.tab.c"
    break;

  case 22: /* list_binary_operation_statment: IDENTIFIER '=' binary_operation  */
#line 246 "./src/parser.y"
                                      {
        (yyval.node) = create_node("list_assign_operator","=", 0);
        (yyval.node)->children[0] = (yyvsp[0].node);
    }
#line 1933 "parser.tab.c"
    break;

  case 23: /* binary_operation: IDENTIFIER BINARY_LIST_OP IDENTIFIER ';'  */
#line 253 "./src/parser.y"
                                             {
        (yyval.node) = create_node("binary_operation", (yyvsp[-2].token).content, 0);
        (yyval.node)->children[0] = create_node("identifier", (yyvsp[-3].token).content, 1);
        (yyval.node)->children[1] = create_node("identifier", (yyvsp[-1].token).content, 1);
    }
#line 1943 "parser.tab.c"
    break;

  case 24: /* list_unary_operation_expression: UNARY_LIST_OP IDENTIFIER  */
#line 261 "./src/parser.y"
                               {
        (yyval.node) = create_node("unary_list_operator", (yyvsp[-1].token).content, 0);
        (yyval.node)->children[0] = create_node("identifier", (yyvsp[0].token).content, 1);
    }
#line 1952 "parser.tab.c"
    break;

  case 25: /* statment: statment variable_assignment ';'  */
#line 268 "./src/parser.y"
                                       {
        (yyval.node) = create_node("statment", "", 0);
        (yyval.node)->children[0] = (yyvsp[-1].node);
    }
#line 1961 "parser.tab.c"
    break;

  case 26: /* statment: statment variable_declaration ';'  */
#line 272 "./src/parser.y"
                                        {
        (yyval.node) = create_node("statment", "", 0);
        (yyval.node)->children[0] = (yyvsp[-1].node);
    }
#line 1970 "parser.tab.c"
    break;

  case 27: /* statment: statment return_statment  */
#line 276 "./src/parser.y"
                               {
        (yyval.node) = create_node("statment", "", 0);
        (yyval.node)->children[0] = (yyvsp[0].node);
    }
#line 1979 "parser.tab.c"
    break;

  case 28: /* statment: statment conditional_statment  */
#line 280 "./src/parser.y"
                                    {
        (yyval.node) = create_node("statment", "", 0);
        (yyval.node)->children[0] = (yyvsp[0].node);
    }
#line 1988 "parser.tab.c"
    break;

  case 29: /* statment: statment input_statment  */
#line 284 "./src/parser.y"
                              {
        (yyval.node) = create_node("statment", "", 0);
        (yyval.node)->children[0] = (yyvsp[0].node);
    }
#line 1997 "parser.tab.c"
    break;

  case 30: /* statment: statment output_statment  */
#line 288 "./src/parser.y"
                               {
        (yyval.node) = create_node("statment", "", 0);
        (yyval.node)->children[0] = (yyvsp[0].node);
    }
#line 2006 "parser.tab.c"
    break;

  case 31: /* statment: statment for_statment  */
#line 292 "./src/parser.y"
                            {
        (yyval.node) = create_node("statment", "", 0);
        (yyval.node)->children[0] = (yyvsp[0].node);
    }
#line 2015 "parser.tab.c"
    break;

  case 32: /* statment: statment list_binary_operation_statment  */
#line 296 "./src/parser.y"
                                              {
        (yyval.node) = create_node("statment", "", 0);
        (yyval.node)->children[0] = (yyvsp[0].node);
    }
#line 2024 "parser.tab.c"
    break;

  case 33: /* statment: statment function_call ';'  */
#line 300 "./src/parser.y"
                                 {
        (yyval.node) = create_node("statment", "", 0);
        (yyval.node)->children[0] = (yyvsp[-1].node);
    }
#line 2033 "parser.tab.c"
    break;

  case 34: /* statment: variable_declaration ';'  */
#line 304 "./src/parser.y"
                               { (yyval.node) = (yyvsp[-1].node); }
#line 2039 "parser.tab.c"
    break;

  case 35: /* statment: variable_assignment ';'  */
#line 305 "./src/parser.y"
                              { (yyval.node) = (yyvsp[-1].node); }
#line 2045 "parser.tab.c"
    break;

  case 36: /* statment: return_statment  */
#line 306 "./src/parser.y"
                      { (yyval.node) = (yyvsp[0].node); }
#line 2051 "parser.tab.c"
    break;

  case 37: /* statment: conditional_statment  */
#line 307 "./src/parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 2057 "parser.tab.c"
    break;

  case 38: /* statment: input_statment  */
#line 308 "./src/parser.y"
                     { (yyval.node) = (yyvsp[0].node); }
#line 2063 "parser.tab.c"
    break;

  case 39: /* statment: output_statment  */
#line 309 "./src/parser.y"
                      { (yyval.node) = (yyvsp[0].node); }
#line 2069 "parser.tab.c"
    break;

  case 40: /* statment: for_statment  */
#line 310 "./src/parser.y"
                   { (yyval.node) = (yyvsp[0].node); }
#line 2075 "parser.tab.c"
    break;

  case 41: /* statment: list_binary_operation_statment  */
#line 311 "./src/parser.y"
                                     { (yyval.node) = (yyvsp[0].node); }
#line 2081 "parser.tab.c"
    break;

  case 42: /* statment: function_call ';'  */
#line 312 "./src/parser.y"
                        { (yyval.node) = (yyvsp[-1].node); }
#line 2087 "parser.tab.c"
    break;

  case 43: /* expression: comparison_expression  */
#line 316 "./src/parser.y"
                            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2095 "parser.tab.c"
    break;

  case 44: /* comparison_expression: comparison_expression COMPARISON_OP logical_expression_or  */
#line 322 "./src/parser.y"
                                                                {
        (yyval.node) = create_node("comparison_expression", (yyvsp[-1].token).content, 0);
        (yyval.node)->children[0] = (yyvsp[-2].node);
        (yyval.node)->children[1] = (yyvsp[0].node);
    }
#line 2105 "parser.tab.c"
    break;

  case 45: /* comparison_expression: logical_expression_or  */
#line 327 "./src/parser.y"
                            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2113 "parser.tab.c"
    break;

  case 46: /* logical_expression_or: logical_expression_or LOGICAL_OP_OR logical_expression_and  */
#line 333 "./src/parser.y"
                                                                 {
        (yyval.node) = create_node("logical_expression_or", (yyvsp[-1].token).content, 0);
        (yyval.node)->children[0] = (yyvsp[-2].node);
        (yyval.node)->children[1] = (yyvsp[0].node);
    }
#line 2123 "parser.tab.c"
    break;

  case 47: /* logical_expression_or: logical_expression_and  */
#line 338 "./src/parser.y"
                             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2131 "parser.tab.c"
    break;

  case 48: /* logical_expression_and: logical_expression_and LOGICAL_OP_AND aritmetic_expression_additive  */
#line 344 "./src/parser.y"
                                                                          {
        (yyval.node) = create_node("logical_expression_and", (yyvsp[-1].token).content, 0);
        (yyval.node)->children[0] = (yyvsp[-2].node);
        (yyval.node)->children[1] = (yyvsp[0].node);
    }
#line 2141 "parser.tab.c"
    break;

  case 49: /* logical_expression_and: aritmetic_expression_additive  */
#line 349 "./src/parser.y"
                                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2149 "parser.tab.c"
    break;

  case 50: /* aritmetic_expression_additive: aritmetic_expression_additive ARITMETIC_OP_ADDITIVE aritmetic_expression_multiplicative  */
#line 355 "./src/parser.y"
                                                                                             {
        (yyval.node) = create_node("aritmetic_expression_additive", (yyvsp[-1].token).content, 0);
        (yyval.node)->children[0] = (yyvsp[-2].node);
        (yyval.node)->children[1] = (yyvsp[0].node);
    }
#line 2159 "parser.tab.c"
    break;

  case 51: /* aritmetic_expression_additive: aritmetic_expression_multiplicative  */
#line 360 "./src/parser.y"
                                          {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2167 "parser.tab.c"
    break;

  case 52: /* aritmetic_expression_multiplicative: aritmetic_expression_multiplicative ARITMETIC_OP_MULTIPLICATIVE value  */
#line 366 "./src/parser.y"
                                                                            {
        (yyval.node) = create_node("aritmetic_expression_multiplicative", (yyvsp[-1].token).content, 0);
        (yyval.node)->children[0] = (yyvsp[-2].node);
        (yyval.node)->children[1] = (yyvsp[0].node);
    }
#line 2177 "parser.tab.c"
    break;

  case 53: /* aritmetic_expression_multiplicative: value  */
#line 371 "./src/parser.y"
            { (yyval.node) = (yyvsp[0].node); }
#line 2183 "parser.tab.c"
    break;

  case 54: /* return_statment: RW_RETURN expression ';'  */
#line 375 "./src/parser.y"
                               {
        (yyval.node) = create_node("return_statment", (yyvsp[-2].token).content, 0);
        (yyval.node)->children[0] = (yyvsp[-1].node);
    }
#line 2192 "parser.tab.c"
    break;

  case 55: /* value: IDENTIFIER  */
#line 382 "./src/parser.y"
                 { 
        (yyval.node) = create_node("identifier", (yyvsp[0].token).content, 1); 
    }
#line 2200 "parser.tab.c"
    break;

  case 56: /* value: constant  */
#line 385 "./src/parser.y"
               { 
        (yyval.node) = (yyvsp[0].node); 
    }
#line 2208 "parser.tab.c"
    break;

  case 57: /* value: list_unary_operation_expression  */
#line 388 "./src/parser.y"
                                      { 
        (yyval.node) = (yyvsp[0].node); 
    }
#line 2216 "parser.tab.c"
    break;

  case 58: /* value: ARITMETIC_OP_ADDITIVE IDENTIFIER  */
#line 391 "./src/parser.y"
                                       {
        // O QUE FAZER AQUI?
        (yyval.node) = create_node("signal_operator", (yyvsp[-1].token).content, 0);
        (yyval.node)->children[0] = create_node("identifier", (yyvsp[0].token).content, 1);
    }
#line 2226 "parser.tab.c"
    break;

  case 59: /* value: ARITMETIC_OP_ADDITIVE constant  */
#line 396 "./src/parser.y"
                                     {
        // O QUE FAZER AQUI?
        (yyval.node) = create_node("signal_operator", (yyvsp[-1].token).content, 0);
        (yyval.node)->children[0] = (yyvsp[0].node);
    }
#line 2236 "parser.tab.c"
    break;

  case 60: /* value: '!' IDENTIFIER  */
#line 401 "./src/parser.y"
                     {
        // O QUE FAZER AQUI?
        (yyval.node) = create_node("exclamation_operator", "!", 0);
        (yyval.node)->children[0] = create_node("identifier", (yyvsp[0].token).content, 1);
    }
#line 2246 "parser.tab.c"
    break;

  case 61: /* value: '!' constant  */
#line 406 "./src/parser.y"
                   {
        (yyval.node) = create_node("exclamation_operator", "!", 0);
        (yyval.node)->children[0] = (yyvsp[0].node);
    }
#line 2255 "parser.tab.c"
    break;

  case 62: /* value: '(' expression ')'  */
#line 410 "./src/parser.y"
                         {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2263 "parser.tab.c"
    break;

  case 63: /* value: '!' '(' expression ')'  */
#line 413 "./src/parser.y"
                            {
        (yyval.node) = create_node("exclamation_operator", "!", 0);
        (yyval.node)->children[0] = (yyvsp[-1].node);
    }
#line 2272 "parser.tab.c"
    break;

  case 64: /* variable_assignment: IDENTIFIER '=' expression  */
#line 420 "./src/parser.y"
                                {
        (yyval.node) = create_node("variable_assignment", "=", 0);
        (yyval.node)->children[0] = create_node("identifier", (yyvsp[-2].token).content, 1);
        (yyval.node)->children[1] = (yyvsp[0].node);
    }
#line 2282 "parser.tab.c"
    break;

  case 65: /* variable_assignment: IDENTIFIER '=' function_call  */
#line 425 "./src/parser.y"
                                   {
        (yyval.node) = create_node("variable_assignment", "=", 0);
        (yyval.node)->children[0] = create_node("identifier", (yyvsp[-2].token).content, 1);
        (yyval.node)->children[1] = (yyvsp[0].node);
    }
#line 2292 "parser.tab.c"
    break;

  case 66: /* variable_declaration: type IDENTIFIER  */
#line 433 "./src/parser.y"
                      {
        (yyval.node) = create_node("variable_declaration", "var_declaration", 0);
        (yyval.node)->children[0] = (yyvsp[-1].node);
        (yyval.node)->children[1] = create_node("identifier", (yyvsp[0].token).content, 1);
        
        update_symbol(
            symbol_table_idx,
            (yyvsp[0].token).line_idx, 
            (yyvsp[0].token).column_idx,
            scope_id,
            1,
            (yyvsp[0].token).content
        );
        symbol_table_idx++;
        symbol_table_size++;
    }
#line 2313 "parser.tab.c"
    break;

  case 67: /* type: T_INTEGER  */
#line 452 "./src/parser.y"
                {
        (yyval.node) = create_node("int_type", "int", 1);

        T_Symbol new_symbol = symbol((yyvsp[0].token).content);
        insert_symbol(symbol_table_idx, new_symbol);
    }
#line 2324 "parser.tab.c"
    break;

  case 68: /* type: T_FLOAT  */
#line 458 "./src/parser.y"
              {
        (yyval.node) = create_node("float_type", "float", 1);

        T_Symbol new_symbol = symbol((yyvsp[0].token).content);
        insert_symbol(symbol_table_idx, new_symbol);
    }
#line 2335 "parser.tab.c"
    break;

  case 69: /* type: T_LIST  */
#line 464 "./src/parser.y"
             {
        (yyval.node) = create_node("list_type", "list", 1);

        T_Symbol new_symbol = symbol((yyvsp[0].token).content);
        insert_symbol(symbol_table_idx, new_symbol);
    }
#line 2346 "parser.tab.c"
    break;

  case 70: /* constant: C_INTEGER  */
#line 473 "./src/parser.y"
                {
        (yyval.node) = create_node("int_const", (yyvsp[0].token).content, 1);
    }
#line 2354 "parser.tab.c"
    break;

  case 71: /* constant: C_FLOAT  */
#line 476 "./src/parser.y"
              {
        (yyval.node) = create_node("float_const", (yyvsp[0].token).content, 1);
    }
#line 2362 "parser.tab.c"
    break;

  case 72: /* constant: C_NIL  */
#line 479 "./src/parser.y"
            {
        (yyval.node) = create_node("list_const", (yyvsp[0].token).content, 1);
    }
#line 2370 "parser.tab.c"
    break;


#line 2374 "parser.tab.c"

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

#line 484 "./src/parser.y"


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
