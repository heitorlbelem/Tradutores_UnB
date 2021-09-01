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
    int yyerror (char const *);    
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
  YYSYMBOL_function_declaration = 34,      /* function_declaration  */
  YYSYMBOL_35_1 = 35,                      /* $@1  */
  YYSYMBOL_36_2 = 36,                      /* $@2  */
  YYSYMBOL_function_call = 37,             /* function_call  */
  YYSYMBOL_params = 38,                    /* params  */
  YYSYMBOL_block = 39,                     /* block  */
  YYSYMBOL_conditional_statment = 40,      /* conditional_statment  */
  YYSYMBOL_input_statment = 41,            /* input_statment  */
  YYSYMBOL_output_statment = 42,           /* output_statment  */
  YYSYMBOL_for_statment = 43,              /* for_statment  */
  YYSYMBOL_list_binary_operation_statment = 44, /* list_binary_operation_statment  */
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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1027

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  190

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
       0,   111,   111,   112,   113,   114,   118,   118,   132,   132,
     149,   150,   154,   155,   159,   163,   164,   168,   172,   173,
     177,   181,   185,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   210,   214,   215,   219,   220,   224,   225,   229,   230,
     234,   235,   239,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   255,   256,   260,   275,   281,   286,   294,   298,
     302
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
  "program", "function_declaration", "$@1", "$@2", "function_call",
  "params", "block", "conditional_statment", "input_statment",
  "output_statment", "for_statment", "list_binary_operation_statment",
  "list_unary_operation_expression", "statment", "expression",
  "comparison_expression", "logical_expression_or",
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

#define YYPACT_NINF (-135)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-71)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     282,    17,    33,    45,    96,   682,    -9,    56,  -135,   692,
      63,   702,   108,   712,    38,    47,   282,    83,    98,    15,
     119,   664,   722,    83,   282,    95,   109,   126,   226,   137,
     147,   149,   116,   310,   322,   334,   346,   358,   370,   382,
     151,   155,   732,   159,   186,   250,   161,   842,   850,   858,
     866,   254,    46,   218,   178,   874,   158,    75,    64,   170,
     978,   882,   890,   898,   254,   198,   214,   394,   742,   187,
     406,   418,   430,   442,   454,   466,   212,   213,   478,   490,
     215,   220,   156,   221,   248,   146,   249,   256,   906,   254,
     914,   922,   930,   938,   502,   226,   226,   226,   226,   226,
     265,   283,   295,   304,   514,   526,   538,   305,   326,   258,
     226,   946,   319,   185,   990,   986,   954,   962,   331,   329,
     338,   341,   350,   641,    92,   970,   286,   550,   562,   574,
     586,   365,   367,   376,   598,   367,   610,   377,   658,   668,
     678,   688,   254,   121,  1017,   389,   698,   -13,   132,   166,
     828,   708,   718,   728,   664,   385,   664,   398,   391,   738,
     254,   748,   758,   768,   778,   254,   254,   254,   254,   254,
     622,   262,   634,   788,   403,   762,   752,   834,   798,   808,
     298,    34,   412,   415,   646,   818,   222,   424,   427,   436
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -135,  -135,   455,  -135,  -135,    -8,   444,   -12,   -33,   -29,
     -23,   -17,    -5,    12,  -134,   -25,     3,   -11,   -22,   -16,
     -20,     4,   -27,   -36,     0,    28,   105
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,    15,    16,    32,    18,    22,    33,    34,
      35,    36,    37,   146,    38,    84,   147,   148,   149,   150,
     151,    39,   152,    40,    41,   137,   153
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    62,    76,    56,    10,    70,    59,   -41,    61,    71,
      86,    42,    60,    11,   165,    72,    19,    58,    62,    81,
     170,    73,   172,    59,    19,    61,    87,   -65,     7,    60,
      69,    57,     7,    74,    58,   -13,    24,    83,    77,   100,
      55,   103,    75,   -66,    20,    -8,    -8,    -8,    57,    47,
      48,    49,    20,   186,   -53,   -67,    88,    55,    -6,   -53,
     -53,   -53,   -53,   -53,   112,    89,    12,    17,    62,    62,
      62,    62,   117,    59,   114,    61,    61,    61,   116,    60,
      60,   115,    62,    62,   113,    13,   -43,    59,    59,    61,
      61,   -43,    96,    60,    60,   133,     8,   -41,    58,    58,
      21,    83,    95,     1,     2,     3,   126,    55,    55,    55,
      55,    55,    57,   124,   131,   -64,   -64,   158,    23,    95,
     134,    55,    55,   136,   138,   139,   140,    14,    44,    25,
     -64,   159,    45,    63,    76,   174,    76,    70,    67,    70,
     160,    71,   179,    71,   176,    46,   183,    72,   178,    72,
      63,   177,   -43,    73,   175,    73,    64,    90,    92,   -43,
     166,   188,    69,   182,    69,    74,    65,    74,    66,   109,
      77,    85,    77,    78,    75,    44,    75,    79,   -53,   -12,
      94,   -53,   -53,   -53,   -53,   -53,   -45,   108,    93,   138,
     139,   140,   -45,   -45,   -45,   167,   141,   -45,   -45,    97,
      63,    63,    63,    63,    63,   142,    80,   -42,   101,   104,
     143,   144,   -42,    96,    63,    63,   145,   138,   139,   140,
     102,    47,    48,    49,   141,   138,   139,   140,    91,    47,
      48,    49,   141,   142,   105,   106,    50,   -10,   143,   144,
     107,   142,   187,   -63,   145,    51,   143,   144,   161,   163,
      52,    53,   145,    47,    48,    49,    54,   138,   139,   140,
      82,    47,    48,    49,   141,   138,   139,   140,   123,    51,
     -62,   110,   181,   142,    52,    53,   111,    51,   143,   144,
      54,   142,    52,    53,   145,   118,   143,   144,    54,     1,
       2,     3,   145,   -15,   -15,   -15,   -15,   -15,   -15,   -15,
     132,   -15,   -15,   119,   -15,   -14,   -14,   -14,   -14,   -14,
     -14,   -14,   -14,   -14,   -14,   120,   -14,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   121,   -35,   -35,   -11,   -35,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   122,   -36,   -36,   125,
     -36,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   154,   -37,
     -37,   127,   -37,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     128,   -38,   -38,   129,   -38,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   130,   -39,   -39,   155,   -39,     1,     2,     3,
      26,    27,    28,    29,   156,    30,    31,   157,    68,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   135,   -34,   -34,   164,
     -34,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   171,   -40,
     -40,   173,   -40,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
     -64,   -26,   -26,   185,   -26,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -63,   -27,   -27,   -62,   -27,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -10,   -28,   -28,   189,   -28,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -11,   -29,   -29,     9,
     -29,   -30,   -30,   -30,   -30,   -30,   -30,   -30,    43,   -30,
     -30,     0,   -30,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
       0,   -25,   -25,     0,   -25,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,     0,   -33,   -33,     0,   -33,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,     0,   -32,   -32,     0,   -32,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,     0,   -52,   -52,     0,
     -52,   -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,
     -31,     0,   -31,   -23,   -23,   -23,   -23,   -23,   -23,   -23,
       0,   -23,   -23,     0,   -23,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,     0,   -24,   -24,     0,   -24,   -17,   -17,   -17,
     -17,   -17,   -17,   -17,     0,   -17,   -17,     0,   -17,   -18,
     -18,   -18,   -18,   -18,   -18,   -18,     0,   -18,   -18,     0,
     -18,   -19,   -19,   -19,   -19,   -19,   -19,   -19,     0,   -19,
     -19,     0,   -19,   -21,   -21,   -21,   -21,   -21,   -21,   -21,
       0,   -21,   -21,     0,   -21,   -16,   -16,   -16,   -16,   -16,
     -16,   -16,     0,   -16,   -16,     0,   -16,   -20,   -20,   -20,
     -20,   -20,   -20,   -20,     0,   -20,   -20,     0,   -20,     1,
       2,     3,    26,    27,    28,    29,     0,    30,    31,     0,
     180,     1,     2,     3,    26,    27,    28,    29,     0,    30,
      31,     0,   184,   -14,   -14,   -14,   -14,   -14,   -14,   -14,
      44,   -14,   -14,   -53,   -14,     0,   -53,   -53,   -53,   -53,
     -53,     1,     2,     3,    26,    27,    28,    29,   -68,    30,
      31,     0,    -5,   -68,   -68,   -68,   -68,   -68,   -69,    -5,
      -5,    -5,    -3,   -69,   -69,   -69,   -69,   -69,   -70,    -3,
      -3,    -3,    -4,   -70,   -70,   -70,   -70,   -70,   -53,    -4,
      -4,    -4,    -2,   -53,   -53,   -53,   -53,   -53,   -55,    -2,
      -2,    -2,    -7,   -55,   -55,   -55,   -55,   -55,   -49,    -7,
      -7,    -7,    -9,   -49,   169,   -49,   -49,   -49,   -51,    -9,
      -9,    -9,   -14,   -51,   -51,   -51,   -51,   -51,   -54,   -14,
     -14,   -14,     0,   -54,   -54,   -54,   -54,   -54,   -58,     0,
       0,     0,     0,   -58,   -58,   -58,   -58,   -58,   -59,     0,
       0,     0,   -44,   -59,   -59,   -59,   -59,   -59,   -56,   -44,
     -44,   167,   -42,   -56,   -56,   -56,   -56,   -56,   -57,   -42,
     166,     0,     0,   -57,   -57,   -57,   -57,   -57,   -22,     0,
       0,     0,     0,   -22,   -22,   -22,   -22,   -22,   -60,     0,
       0,     0,     0,   -60,   -60,   -60,   -60,   -60,   -48,     0,
       0,     0,     0,   -48,   169,   -48,   -48,   -48,   -50,     0,
       0,     0,     0,   -50,   -50,   -50,   -50,   -50,   -61,     0,
       0,     0,     0,   -61,   -61,   -61,   -61,   -61,   -47,     0,
       0,     0,     0,   168,   -46,   -47,   -47,   -47,     0,   168,
       0,   -46,   -46,   -46,   -68,     0,     0,   -68,   -68,   -68,
     -68,   -68,   -69,     0,     0,   -69,   -69,   -69,   -69,   -69,
     -70,     0,     0,   -70,   -70,   -70,   -70,   -70,   -53,     0,
       0,   -53,   -53,   -53,   -53,   -53,   -55,     0,     0,   -55,
     -55,   -55,   -55,   -55,   -49,     0,     0,   -49,    99,   -49,
     -49,   -49,   -51,     0,     0,   -51,   -51,   -51,   -51,   -51,
     -54,     0,     0,   -54,   -54,   -54,   -54,   -54,   -58,     0,
       0,   -58,   -58,   -58,   -58,   -58,   -59,     0,     0,   -59,
     -59,   -59,   -59,   -59,   -56,     0,     0,   -56,   -56,   -56,
     -56,   -56,   -57,     0,     0,   -57,   -57,   -57,   -57,   -57,
     -22,     0,     0,   -22,   -22,   -22,   -22,   -22,   -60,     0,
       0,   -60,   -60,   -60,   -60,   -60,   -48,     0,     0,   -48,
      99,   -48,   -48,   -48,   -50,     0,     0,   -50,   -50,   -50,
     -50,   -50,   -61,     0,     0,   -61,   -61,   -61,   -61,   -61,
     -47,     0,     0,    98,     0,   -47,   -47,   -47,   -46,     0,
       0,    98,   -44,   -46,   -46,   -46,     0,   -44,   -44,    97,
     138,   139,   140,     0,     0,     0,     0,   162
};

static const yytype_int16 yycheck[] =
{
       0,    28,    38,    28,     4,    38,    28,    20,    28,    38,
      46,    23,    28,    22,    27,    38,    16,    28,    45,    44,
     154,    38,   156,    45,    24,    45,    51,    10,     0,    45,
      38,    28,     4,    38,    45,    20,    21,    45,    38,    64,
      28,    66,    38,    10,    16,     7,     8,     9,    45,     3,
       4,     5,    24,    19,    20,    10,    10,    45,    20,    25,
      26,    27,    28,    29,    89,    19,    10,    20,    95,    96,
      97,    98,    99,    95,    96,    95,    96,    97,    98,    95,
      96,    97,   109,   110,    95,    22,    22,   109,   110,   109,
     110,    27,    28,   109,   110,   131,     0,    22,   109,   110,
      17,   109,    27,     7,     8,     9,   118,    95,    96,    97,
      98,    99,   109,   110,    22,    20,    21,   142,    20,    27,
     132,   109,   110,   135,     3,     4,     5,    19,    19,    10,
      22,    10,    23,    28,   170,   160,   172,   170,    22,   172,
      19,   170,   169,   172,   166,    19,   171,   170,   168,   172,
      45,   167,    20,   170,   165,   172,    19,    52,    53,    27,
      28,   186,   170,   171,   172,   170,    19,   172,    19,    23,
     170,    10,   172,    22,   170,    19,   172,    22,    22,    20,
      22,    25,    26,    27,    28,    29,    20,    31,    10,     3,
       4,     5,    22,    27,    28,    29,    10,    27,    28,    29,
      95,    96,    97,    98,    99,    19,    20,    22,    10,    22,
      24,    25,    27,    28,   109,   110,    30,     3,     4,     5,
       6,     3,     4,     5,    10,     3,     4,     5,    10,     3,
       4,     5,    10,    19,    22,    22,    10,    22,    24,    25,
      20,    19,    20,    22,    30,    19,    24,    25,   143,   144,
      24,    25,    30,     3,     4,     5,    30,     3,     4,     5,
      10,     3,     4,     5,    10,     3,     4,     5,    10,    19,
      22,    22,    10,    19,    24,    25,    20,    19,    24,    25,
      30,    19,    24,    25,    30,    20,    24,    25,    30,     7,
       8,     9,    30,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    20,    18,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    20,    18,     7,     8,     9,
      10,    11,    12,    13,    20,    15,    16,    22,    18,     7,
       8,     9,    10,    11,    12,    13,    10,    15,    16,    20,
      18,     7,     8,     9,    10,    11,    12,    13,    17,    15,
      16,    22,    18,     7,     8,     9,    10,    11,    12,    13,
      22,    15,    16,    22,    18,     7,     8,     9,    10,    11,
      12,    13,    22,    15,    16,    10,    18,     7,     8,     9,
      10,    11,    12,    13,    17,    15,    16,    10,    18,     7,
       8,     9,    10,    11,    12,    13,    20,    15,    16,    10,
      18,     7,     8,     9,    10,    11,    12,    13,    23,    15,
      16,    20,    18,     7,     8,     9,    10,    11,    12,    13,
      22,    15,    16,    20,    18,     7,     8,     9,    10,    11,
      12,    13,    20,    15,    16,    20,    18,     7,     8,     9,
      10,    11,    12,    13,    20,    15,    16,    20,    18,     7,
       8,     9,    10,    11,    12,    13,    20,    15,    16,     4,
      18,     7,     8,     9,    10,    11,    12,    13,    24,    15,
      16,    -1,    18,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    18,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    -1,    18,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    -1,    18,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    -1,
      18,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    -1,    18,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    18,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    -1,    18,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    -1,    18,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    -1,
      18,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    -1,    18,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    18,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    -1,    18,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    -1,    18,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    -1,
      18,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    -1,    18,     7,     8,     9,    10,    11,    12,    13,
      19,    15,    16,    22,    18,    -1,    25,    26,    27,    28,
      29,     7,     8,     9,    10,    11,    12,    13,    20,    15,
      16,    -1,     0,    25,    26,    27,    28,    29,    20,     7,
       8,     9,     0,    25,    26,    27,    28,    29,    20,     7,
       8,     9,     0,    25,    26,    27,    28,    29,    20,     7,
       8,     9,     0,    25,    26,    27,    28,    29,    20,     7,
       8,     9,     0,    25,    26,    27,    28,    29,    20,     7,
       8,     9,     0,    25,    26,    27,    28,    29,    20,     7,
       8,     9,     0,    25,    26,    27,    28,    29,    20,     7,
       8,     9,    -1,    25,    26,    27,    28,    29,    20,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    20,    -1,
      -1,    -1,    20,    25,    26,    27,    28,    29,    20,    27,
      28,    29,    20,    25,    26,    27,    28,    29,    20,    27,
      28,    -1,    -1,    25,    26,    27,    28,    29,    20,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    20,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    20,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    20,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    20,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    20,    -1,
      -1,    -1,    -1,    25,    20,    27,    28,    29,    -1,    25,
      -1,    27,    28,    29,    22,    -1,    -1,    25,    26,    27,
      28,    29,    22,    -1,    -1,    25,    26,    27,    28,    29,
      22,    -1,    -1,    25,    26,    27,    28,    29,    22,    -1,
      -1,    25,    26,    27,    28,    29,    22,    -1,    -1,    25,
      26,    27,    28,    29,    22,    -1,    -1,    25,    26,    27,
      28,    29,    22,    -1,    -1,    25,    26,    27,    28,    29,
      22,    -1,    -1,    25,    26,    27,    28,    29,    22,    -1,
      -1,    25,    26,    27,    28,    29,    22,    -1,    -1,    25,
      26,    27,    28,    29,    22,    -1,    -1,    25,    26,    27,
      28,    29,    22,    -1,    -1,    25,    26,    27,    28,    29,
      22,    -1,    -1,    25,    26,    27,    28,    29,    22,    -1,
      -1,    25,    26,    27,    28,    29,    22,    -1,    -1,    25,
      26,    27,    28,    29,    22,    -1,    -1,    25,    26,    27,
      28,    29,    22,    -1,    -1,    25,    26,    27,    28,    29,
      22,    -1,    -1,    25,    -1,    27,    28,    29,    22,    -1,
      -1,    25,    22,    27,    28,    29,    -1,    27,    28,    29,
       3,     4,     5,    -1,    -1,    -1,    -1,    10
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     7,     8,     9,    33,    34,    56,    57,     0,    34,
      56,    22,    10,    22,    19,    35,    36,    20,    38,    56,
      57,    17,    39,    20,    21,    10,    10,    11,    12,    13,
      15,    16,    37,    40,    41,    42,    43,    44,    46,    53,
      55,    56,    39,    38,    19,    23,    19,     3,     4,     5,
      10,    19,    24,    25,    30,    45,    47,    48,    49,    50,
      51,    52,    54,    58,    19,    19,    19,    22,    18,    37,
      40,    41,    42,    43,    44,    53,    55,    56,    22,    22,
      20,    47,    10,    37,    47,    10,    55,    47,    10,    19,
      58,    10,    58,    10,    22,    27,    28,    29,    25,    26,
      47,    10,     6,    47,    22,    22,    22,    20,    31,    23,
      22,    20,    47,    49,    50,    51,    52,    54,    20,    20,
      20,    20,    10,    10,    48,    20,    39,    22,    22,    22,
      22,    22,    14,    55,    39,    20,    39,    57,     3,     4,
       5,    10,    19,    24,    25,    30,    45,    48,    49,    50,
      51,    52,    54,    58,    17,    10,    17,    10,    47,    10,
      19,    58,    10,    58,    10,    27,    28,    29,    25,    26,
      46,    23,    46,    20,    47,    49,    50,    51,    52,    54,
      18,    10,    37,    47,    18,    20,    19,    20,    47,    20
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    32,    33,    33,    33,    33,    35,    34,    36,    34,
      37,    37,    38,    38,    39,    40,    40,    41,    42,    42,
      43,    44,    45,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    47,    48,    48,    49,    49,    50,    50,    51,    51,
      52,    52,    53,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    55,    55,    56,    57,    57,    57,    58,    58,
      58
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     0,     6,     0,     7,
       3,     4,     3,     1,     3,     5,     7,     5,     5,     5,
       9,     6,     2,     3,     3,     2,     2,     2,     2,     2,
       2,     3,     2,     2,     1,     1,     1,     1,     1,     1,
       2,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     2,     2,     2,     2,
       3,     4,     3,     3,     2,     1,     1,     1,     1,     1,
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
  case 6: /* $@1: %empty  */
#line 118 "./src/parser.y"
                          {
        scope_id++;
        update_symbol(
            symbol_table_idx,
            (yyvsp[-1].token).line_idx, 
            (yyvsp[-1].token).column_idx, 
            scope_id, 
            0, 
            (yyvsp[-1].token).content
        );
        symbol_table_idx++;
        symbol_table_size++;
    }
#line 1718 "parser.tab.c"
    break;

  case 8: /* $@2: %empty  */
#line 132 "./src/parser.y"
                          {
        scope_id++;
        update_symbol(
            symbol_table_idx,
            (yyvsp[-1].token).line_idx, 
            (yyvsp[-1].token).column_idx, 
            scope_id, 
            0, 
            (yyvsp[-1].token).content
        );
        symbol_table_idx++;
        symbol_table_size++;
    }
#line 1736 "parser.tab.c"
    break;

  case 64: /* variable_declaration: type IDENTIFIER  */
#line 260 "./src/parser.y"
                      {
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
#line 1753 "parser.tab.c"
    break;

  case 65: /* type: T_INTEGER  */
#line 275 "./src/parser.y"
                {
        T_Symbol new_symbol = symbol((yyvsp[0].token).content);
        insert_symbol(symbol_table_idx, new_symbol);

        (yyval.node) = create_node("int");
    }
#line 1764 "parser.tab.c"
    break;

  case 66: /* type: T_FLOAT  */
#line 281 "./src/parser.y"
              {
        T_Symbol new_symbol = symbol((yyvsp[0].token).content);
        insert_symbol(symbol_table_idx, new_symbol);
        (yyval.node) = create_node("float");
    }
#line 1774 "parser.tab.c"
    break;

  case 67: /* type: T_LIST  */
#line 286 "./src/parser.y"
             {
        T_Symbol new_symbol = symbol((yyvsp[0].token).content);
        insert_symbol(symbol_table_idx, new_symbol);
        (yyval.node) = create_node("list");
    }
#line 1784 "parser.tab.c"
    break;

  case 68: /* constant: C_INTEGER  */
#line 294 "./src/parser.y"
                {
        (yyval.node) = create_node("constant");
        strcpy((yyval.node)->value, (yyvsp[0].token).content);
    }
#line 1793 "parser.tab.c"
    break;

  case 69: /* constant: C_FLOAT  */
#line 298 "./src/parser.y"
              {
        (yyval.node) = create_node("constant");
        strcpy((yyval.node)->value, (yyvsp[0].token).content);
    }
#line 1802 "parser.tab.c"
    break;

  case 70: /* constant: C_NIL  */
#line 302 "./src/parser.y"
            {
        (yyval.node) = create_node("constant");
        strcpy((yyval.node)->value, (yyvsp[0].token).content);
    }
#line 1811 "parser.tab.c"
    break;


#line 1815 "parser.tab.c"

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

#line 308 "./src/parser.y"


int yyerror(const char* err_msg){
    printf("\n[PARSER] Line: %d | Column: %d\t=> ERROR %s\n\n", yylval.token.line_idx, yylval.token.column_idx, err_msg);
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

    print_symbol_table(symbol_table_size);


    fclose(yyin);
    yylex_destroy();

    return 0;
}
