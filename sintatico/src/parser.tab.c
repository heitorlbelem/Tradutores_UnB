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
  YYSYMBOL_expression_optative = 51,       /* expression_optative  */
  YYSYMBOL_or_expression_optative = 52,    /* or_expression_optative  */
  YYSYMBOL_or_expression = 53,             /* or_expression  */
  YYSYMBOL_and_expression = 54,            /* and_expression  */
  YYSYMBOL_equality_expression = 55,       /* equality_expression  */
  YYSYMBOL_relational_expression = 56,     /* relational_expression  */
  YYSYMBOL_list_expression = 57,           /* list_expression  */
  YYSYMBOL_addition_expression = 58,       /* addition_expression  */
  YYSYMBOL_multiplication_expression = 59, /* multiplication_expression  */
  YYSYMBOL_simple_value = 60,              /* simple_value  */
  YYSYMBOL_variable_declaration_statement = 61, /* variable_declaration_statement  */
  YYSYMBOL_constant = 62                   /* constant  */
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
#define YYLAST   2279

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  62
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  299

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
       0,    87,    87,    91,    92,    96,    97,   101,   105,   106,
     110,   111,   112,   113,   114,   115,   116,   120,   124,   125,
     129,   130,   134,   138,   142,   143,   146,   150,   151,   155,
     159,   160,   164,   168,   169,   173,   174,   178,   179,   183,
     184,   188,   189,   193,   194,   198,   199,   203,   204,   208,
     209,   213,   214,   218,   219,   220,   221,   222,   223,   227,
     231,   232,   233
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

#define YYPACT_NINF (-217)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-63)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -3,    -2,    12,   131,   148,   149,   168,    17,  -217,   174,
       8,   178,    14,    -4,    51,   100,   171,    78,    13,   608,
     729,  1983,    18,    19,    21,   911,    33,    35,    47,  1953,
    1889,  1960,  1953,  1953,   223,   247,   257,   312,   397,   441,
     484,   554,   583,    16,   576,   571,   530,   812,   243,    84,
    1992,  2001,   607,  2010,   313,    58,   911,     5,    83,  1960,
      61,   191,  2019,  2028,   819,  1360,    95,  2037,  2046,   609,
    1953,  1953,  1953,  1953,  1953,  1953,  1953,   101,   104,   112,
     617,   127,   132,   142,   153,   661,  1383,  2055,   574,   667,
     835,   324,   213,  2064,  2073,    54,  1912,   157,   165,   167,
     182,   629,    56,   701,   730,   753,   431,    78,   186,   780,
      78,   795,   200,   198,   911,   208,   210,   218,  1889,  1406,
    1429,  1452,  1475,  1498,  1521,  1544,  1567,   224,  1590,   694,
     781,  2089,   449,  1978,  1960,  1978,  1978,   -15,    45,     3,
     493,   173,   352,  2105,  2121,  2137,   240,   233,   911,   237,
     242,   259,  1889,   117,   125,   158,   164,   214,   277,   296,
     306,   254,   315,   212,   258,     5,   268,  1960,   285,   651,
    1613,  1636,  1960,  2153,  2169,   278,  2185,  2201,  1978,  1978,
    1978,  1978,  1978,  1978,  1978,   280,     5,   282,  1960,   322,
     760,  1659,   362,  1682,   310,  1705,   316,   329,   335,   343,
    1728,   345,  2217,   115,   365,   762,   658,   402,  2233,  2249,
     364,   344,   412,   355,   369,   371,   380,   437,    54,  1935,
     379,   388,   391,    54,  1912,   392,   394,   403,   416,   376,
     383,   911,   421,   427,   433,  1889,   870,   893,   941,   969,
     992,  1015,  1038,  1061,  1084,   432,  1107,  1751,  1774,  1797,
     435,   459,   485,   486,   488,   431,   443,     5,   445,  1960,
     460,   842,  1820,  1889,  1130,   431,  1912,   450,  1153,   465,
    1176,   469,   482,   483,   504,  1199,  1843,   513,   568,  1889,
      54,  1935,   510,   516,   519,  1912,  1866,   522,  1222,  1245,
    1268,  1291,   577,   431,  1935,   547,  1314,  1935,  1337
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
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -217,  -217,  -217,   501,    26,  -117,    20,  -217,  -217,  -217,
     552,    43,    44,    50,    76,   102,   124,   126,    -6,   -88,
    -216,   481,   682,   560,   538,   512,   384,   367,   327,     0,
     347
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,   119,    64,    65,     5,    13,    14,
      15,   120,   121,   122,   123,   124,   125,   126,   127,    79,
     100,    44,    45,    46,    47,    48,    49,    50,    51,   128,
      53
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,   170,   228,     6,     1,   -34,     7,   250,    19,    20,
      21,    43,     8,    23,   178,    12,    17,    52,   108,    58,
      12,    29,    16,   -42,    31,    66,    55,   -35,   -18,    32,
      33,   180,   -42,   -42,   -54,   191,    10,    35,    69,    11,
      57,   -54,    56,    34,   -54,   -54,   -54,   -54,   -54,   -54,
      77,    78,    59,    81,    60,    84,   -24,    19,    20,    21,
      36,    37,    62,   -24,   287,   -40,    61,    38,   107,    82,
      29,   -19,    18,    31,   -40,   179,   -37,   194,    32,    33,
      11,    19,    20,    21,    86,    22,    23,    24,    25,    26,
     161,    27,    28,    39,    29,    30,   162,    31,   211,   -48,
     163,    43,    32,    33,    43,    80,   -48,    52,   166,    75,
      52,   -48,   -48,   -48,   -48,    87,   102,   -16,   262,    40,
     -21,   -21,   153,   -33,   -16,   -14,   -36,   109,   175,   -16,
     111,    -2,   -14,    34,    95,   -39,    34,   -14,     1,   154,
     155,    41,   187,    42,   -39,   179,   156,    96,    -4,    -5,
      36,    37,    97,    36,    37,    -4,    -5,    38,   -15,    78,
      38,   196,    98,   199,   -10,   -15,   201,   267,    -6,   269,
     -15,   -10,   157,    99,    -3,    -6,   -10,   277,   -59,   103,
      78,    -3,   213,    39,   216,   -59,    39,   104,   182,   105,
      86,   -22,   -22,   -46,   129,   130,   131,    83,   158,   132,
     -46,   -46,   -46,   -46,   106,   295,   110,   133,   164,    40,
     134,    86,    40,   245,   -11,   135,   136,   165,   161,   246,
     159,   -11,   160,   -16,   162,   258,   -11,   167,   -47,   168,
     -16,    41,   -36,    42,    41,   -47,    42,   169,    75,   237,
     -47,   -47,   -47,   -47,   251,   236,   171,   -17,   185,   163,
     153,    78,   186,   271,   -17,   274,   188,   -14,    74,   163,
     161,   189,   238,   239,   -14,   -46,   162,   154,   155,   240,
     -46,   -46,   -46,   -46,   156,   245,   192,   -27,   190,   161,
     193,   246,    86,   276,   -27,   162,   278,   163,   245,   -27,
     195,   245,   153,   197,   246,   241,   -28,   246,   202,   286,
     157,   288,   210,   -28,   212,   292,   -12,   236,   -28,   154,
     155,   153,   -15,   -12,   296,   -13,   156,   298,   -12,   -15,
     236,   242,   -13,   236,   238,   239,   158,   -13,   154,   155,
     214,   240,   218,   -20,   -20,   156,   219,   238,   239,    74,
     238,   239,   157,   243,   240,   244,   -45,   240,   159,   220,
     160,   -45,   -45,   -45,   -45,   221,    63,   241,   144,    67,
      68,   157,   -26,   222,   -59,   -33,   223,   -48,   158,   -26,
     241,   -59,   -48,   241,   -26,   224,   -59,   183,   145,   -48,
     -48,   -48,   -48,   242,   256,   -41,   144,   158,   144,   225,
     159,   226,   160,   180,   -41,   -41,   242,   -10,   143,   242,
     227,   247,   257,    94,   -10,   243,   145,   244,   145,   159,
     248,   160,   -32,   249,   252,   142,   253,   -47,   243,   -32,
     244,   243,   -47,   244,   -32,   254,   143,   183,   143,   -47,
     -47,   -47,   -47,   144,   129,   130,   131,    -7,   255,   132,
     259,   -11,    93,   142,    -7,   142,   260,   133,   -11,    -7,
     134,   -35,   261,   145,   264,   135,   136,   265,    92,   -24,
     174,   144,   176,   177,   -54,   268,   -24,   270,   272,   -54,
     279,   266,   172,   143,   -54,   -54,   -54,   -54,   -54,   -54,
     145,   145,   145,   145,   -27,   -29,   -31,   280,   -30,   281,
     142,   -27,   -29,   -31,   144,   -30,   144,   -29,   -31,   144,
     -30,   143,   282,   283,     9,   144,   144,   144,   144,   144,
     144,   209,   137,   -44,   145,   144,   145,   144,   142,   145,
     181,   -44,   -44,   -44,   284,   145,   145,   145,   145,   145,
     145,   145,   289,   285,   143,   145,   143,   145,   290,   143,
     137,   291,   137,   141,   293,   143,   143,   143,   143,   143,
     208,   142,   -42,   142,   -28,   143,   142,   143,    72,   -42,
     -42,   -28,   142,   142,   142,   142,   207,   297,   -25,   140,
      54,   141,   142,   141,   142,   -25,   101,   -23,     0,     0,
     -25,     0,   144,   -12,   -23,    91,   144,   137,   144,   -23,
     -12,   139,   144,   -40,     0,     0,   -39,   140,   -34,   140,
     -40,    71,   145,   -39,    71,    70,   145,   -13,   145,   -26,
      90,     0,   145,     0,   -13,   137,   -26,   -32,   141,   139,
     144,   139,   143,   -60,   -32,     0,   143,     0,   143,     0,
     -60,    89,   143,   -60,   -60,   -60,   -60,   -60,   -60,   142,
     145,     0,     0,   142,   140,   142,   141,     0,   137,   142,
     137,   -38,     0,   137,   129,   130,   131,   198,    70,   132,
     143,    -7,     0,     0,     0,     0,   139,   133,    -7,   137,
     134,   137,   140,   182,     0,   135,   136,   142,   -45,   141,
       0,   141,     0,     0,   141,   -45,   -45,   -45,   -45,   -41,
     141,   141,   141,   206,   139,    72,   -41,   -41,     0,   101,
     141,   -29,   141,     0,   101,   140,     0,   140,   -29,   -60,
     140,     0,     0,   138,   -60,     0,   140,   140,   205,   -60,
     -60,   -60,   -60,   -60,   -60,     0,   140,   139,   140,   139,
     -31,     0,   139,     0,     0,     0,   137,   -31,   139,   204,
     137,   138,   137,   138,   -61,     0,   137,     0,   139,     0,
     139,   -61,    88,   -30,   -61,   -61,   -61,   -61,   -61,   -61,
     -30,   101,     0,   129,   130,   131,   215,   141,   132,     0,
       0,   141,     0,   141,   137,     0,   133,   141,     0,   134,
     -25,     0,   -43,     0,   135,   136,     0,   -25,   138,   181,
     -43,   -43,   -43,   140,     0,   -23,   -61,   140,     0,   140,
       0,   -61,   -23,   140,     0,   141,   -61,   -61,   -61,   -61,
     -61,   -61,     0,     0,     0,   139,   138,     0,     0,   139,
       0,   139,    19,    20,    21,   139,   112,    23,   113,   114,
     115,   140,   116,   117,   -44,    29,   118,    85,    31,    73,
     -44,   -44,   -44,    32,    33,   129,   130,   131,   273,   138,
     132,   138,     0,   139,   138,     0,     0,   -43,   133,     0,
     203,   134,    73,   -43,   -43,   -43,   135,   136,     0,     0,
     138,     0,   138,   -16,   -16,   -16,     0,   -16,   -16,   -16,
     -16,   -16,   -16,   -16,   -16,     0,   -16,   -16,   -16,   -16,
       0,     0,     0,     0,   -16,   -16,   -24,   -24,   -24,     0,
     -24,   -24,   -24,   -24,   -24,   263,   -24,   -24,     0,   -24,
     -24,   -24,   -24,     0,    19,    20,    21,   -24,   -24,    23,
       0,     0,     0,     0,     0,     0,     0,    29,     0,     0,
      31,     0,     0,     0,     0,    32,    33,   138,     0,     0,
       0,   138,     0,   138,   -14,   -14,   -14,   138,   -14,   -14,
     -14,   -14,   -14,   -14,   -14,   -14,     0,   -14,   -14,   -14,
     -14,     0,     0,     0,     0,   -14,   -14,     0,     0,     0,
       0,     0,   -15,   -15,   -15,   138,   -15,   -15,   -15,   -15,
     -15,   -15,   -15,   -15,     0,   -15,   -15,   -15,   -15,     0,
       0,     0,     0,   -15,   -15,   -10,   -10,   -10,     0,   -10,
     -10,   -10,   -10,   -10,   -10,   -10,   -10,     0,   -10,   -10,
     -10,   -10,     0,     0,     0,     0,   -10,   -10,   -11,   -11,
     -11,     0,   -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,
       0,   -11,   -11,   -11,   -11,     0,     0,     0,     0,   -11,
     -11,   -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,     0,     0,
       0,     0,   -27,   -27,   -28,   -28,   -28,     0,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,
     -28,     0,     0,     0,     0,   -28,   -28,   -12,   -12,   -12,
       0,   -12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,     0,
     -12,   -12,   -12,   -12,     0,     0,     0,     0,   -12,   -12,
     -13,   -13,   -13,     0,   -13,   -13,   -13,   -13,   -13,   -13,
     -13,   -13,     0,   -13,   -13,   -13,   -13,     0,     0,     0,
       0,   -13,   -13,   -26,   -26,   -26,     0,   -26,   -26,   -26,
     -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,
       0,     0,     0,     0,   -26,   -26,   -59,   -59,   -59,     0,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,   -59,
     -59,   -59,   -59,     0,     0,     0,     0,   -59,   -59,   -32,
     -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,     0,   -32,   -32,   -32,   -32,     0,     0,     0,     0,
     -32,   -32,    -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,     0,
       0,     0,     0,    -7,    -7,   -24,   -24,   -24,     0,   -24,
     -24,   -24,   -24,   -24,   294,   -24,   -24,     0,   -24,   -24,
     -24,   -24,     0,     0,     0,     0,   -24,   -24,   -29,   -29,
     -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
       0,   -29,   -29,   -29,   -29,     0,     0,     0,     0,   -29,
     -29,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,     0,     0,
       0,     0,   -31,   -31,   -30,   -30,   -30,     0,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,
     -30,     0,     0,     0,     0,   -30,   -30,   -25,   -25,   -25,
       0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,     0,
     -25,   -25,   -25,   -25,     0,     0,     0,     0,   -25,   -25,
     -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,   -23,
     -23,   -23,     0,   -23,   -23,   -23,   -23,     0,     0,     0,
       0,   -23,   -23,    -9,    -9,    -9,     0,    -9,    -9,    -9,
      -9,    -9,     0,    -9,    -9,     0,    -9,    -9,    -9,    -9,
       0,     0,     0,     0,    -9,    -9,    -8,    -8,    -8,     0,
      -8,    -8,    -8,    -8,    -8,     0,    -8,    -8,     0,    -8,
      -8,    -8,    -8,     0,     0,     0,     0,    -8,    -8,   -16,
     -16,   -16,     0,   -16,   -16,   -16,   -16,   -16,     0,   -16,
     -16,     0,   -16,   -16,   -16,   -16,     0,     0,     0,     0,
     -16,   -16,   -14,   -14,   -14,     0,   -14,   -14,   -14,   -14,
     -14,     0,   -14,   -14,     0,   -14,   -14,   -14,   -14,     0,
       0,     0,     0,   -14,   -14,   -15,   -15,   -15,     0,   -15,
     -15,   -15,   -15,   -15,     0,   -15,   -15,     0,   -15,   -15,
     -15,   -15,     0,     0,     0,     0,   -15,   -15,   -10,   -10,
     -10,     0,   -10,   -10,   -10,   -10,   -10,     0,   -10,   -10,
       0,   -10,   -10,   -10,   -10,     0,     0,     0,     0,   -10,
     -10,   -11,   -11,   -11,     0,   -11,   -11,   -11,   -11,   -11,
       0,   -11,   -11,     0,   -11,   -11,   -11,   -11,     0,     0,
       0,     0,   -11,   -11,   -27,   -27,   -27,     0,   -27,   -27,
     -27,   -27,   -27,     0,   -27,   -27,     0,   -27,   -27,   -27,
     -27,     0,     0,     0,     0,   -27,   -27,   -28,   -28,   -28,
       0,   -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,     0,
     -28,   -28,   -28,   -28,     0,     0,     0,     0,   -28,   -28,
     -12,   -12,   -12,     0,   -12,   -12,   -12,   -12,   -12,     0,
     -12,   -12,     0,   -12,   -12,   -12,   -12,     0,     0,     0,
       0,   -12,   -12,   -13,   -13,   -13,     0,   -13,   -13,   -13,
     -13,   -13,     0,   -13,   -13,     0,   -13,   -13,   -13,   -13,
       0,     0,     0,     0,   -13,   -13,    19,    20,    21,     0,
     112,    23,   113,   114,   115,     0,   116,   117,     0,    29,
     118,   200,    31,     0,     0,     0,     0,    32,    33,   -26,
     -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,     0,   -26,
     -26,     0,   -26,   -26,   -26,   -26,     0,     0,     0,     0,
     -26,   -26,    19,    20,    21,     0,   112,    23,   113,   114,
     115,     0,   116,   117,     0,    29,   118,   217,    31,     0,
       0,     0,     0,    32,    33,   -59,   -59,   -59,     0,   -59,
     -59,   -59,   -59,   -59,     0,   -59,   -59,     0,   -59,   -59,
     -59,   -59,     0,     0,     0,     0,   -59,   -59,   -32,   -32,
     -32,     0,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,
       0,   -32,   -32,   -32,   -32,     0,     0,     0,     0,   -32,
     -32,    -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,
       0,    -7,    -7,     0,    -7,    -7,    -7,    -7,     0,     0,
       0,     0,    -7,    -7,   -29,   -29,   -29,     0,   -29,   -29,
     -29,   -29,   -29,     0,   -29,   -29,     0,   -29,   -29,   -29,
     -29,     0,     0,     0,     0,   -29,   -29,   -31,   -31,   -31,
       0,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,     0,
     -31,   -31,   -31,   -31,     0,     0,     0,     0,   -31,   -31,
     -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,     0,
     -30,   -30,     0,   -30,   -30,   -30,   -30,     0,     0,     0,
       0,   -30,   -30,    19,    20,    21,     0,   112,    23,   113,
     114,   115,     0,   116,   117,     0,    29,   118,   275,    31,
       0,     0,     0,     0,    32,    33,   -25,   -25,   -25,     0,
     -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,     0,   -25,
     -25,   -25,   -25,     0,     0,     0,     0,   -25,   -25,   -23,
     -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,     0,   -23,
     -23,     0,   -23,   -23,   -23,   -23,     0,     0,     0,     0,
     -23,   -23,    19,    20,    21,     0,   112,    23,   113,   114,
     115,     0,   116,   117,     0,    29,   118,     0,    31,     0,
       0,     0,     0,    32,    33,    19,    20,    21,     0,   146,
      23,   147,   148,   149,     0,   150,   151,     0,    29,   152,
       0,    31,     0,     0,     0,     0,    32,    33,    19,    20,
      21,     0,   229,    23,   230,   231,   232,     0,   233,   234,
       0,    29,   235,     0,    31,     0,    19,    20,    21,    32,
      33,    62,     0,   129,   130,   131,     0,     0,   132,    29,
       0,     0,    31,     0,     0,     0,   133,    32,    33,   134,
       0,   129,   130,   131,   135,   136,   173,     0,     0,     0,
       0,     0,     0,     0,   133,     0,     0,   134,   -62,     0,
       0,     0,   135,   136,     0,   -62,     0,   -50,   -62,   -62,
     -62,   -62,   -62,   -62,   -50,     0,   -52,   -50,    76,   -50,
     -50,   -50,   -50,   -52,     0,   -53,   -52,   -52,   -52,   -52,
     -52,   -52,   -53,     0,   -54,   -53,   -53,   -53,   -53,   -53,
     -53,   -54,     0,   -57,   -54,   -54,   -54,   -54,   -54,   -54,
     -57,     0,   -56,   -57,   -57,   -57,   -57,   -57,   -57,   -56,
       0,   -55,   -56,   -56,   -56,   -56,   -56,   -56,   -55,     0,
     -58,   -55,   -55,   -55,   -55,   -55,   -55,   -58,     0,   -49,
     -58,   -58,   -58,   -58,   -58,   -58,   -49,     0,   -51,   -49,
      76,   -49,   -49,   -49,   -49,   -51,     0,     0,   -51,   -51,
     -51,   -51,   -51,   -51,   -62,     0,     0,     0,     0,   -62,
       0,     0,     0,     0,   -62,   -62,   -62,   -62,   -62,   -62,
     -50,     0,     0,     0,     0,   -50,     0,     0,     0,     0,
     -50,   184,   -50,   -50,   -50,   -50,   -52,     0,     0,     0,
       0,   -52,     0,     0,     0,     0,   -52,   -52,   -52,   -52,
     -52,   -52,   -53,     0,     0,     0,     0,   -53,     0,     0,
       0,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -54,     0,
       0,     0,     0,   -54,     0,     0,     0,     0,   -54,   -54,
     -54,   -54,   -54,   -54,   -57,     0,     0,     0,     0,   -57,
       0,     0,     0,     0,   -57,   -57,   -57,   -57,   -57,   -57,
     -56,     0,     0,     0,     0,   -56,     0,     0,     0,     0,
     -56,   -56,   -56,   -56,   -56,   -56,   -55,     0,     0,     0,
       0,   -55,     0,     0,     0,     0,   -55,   -55,   -55,   -55,
     -55,   -55,   -58,     0,     0,     0,     0,   -58,     0,     0,
       0,     0,   -58,   -58,   -58,   -58,   -58,   -58,   -49,     0,
       0,     0,     0,   -49,     0,     0,     0,     0,   -49,   184,
     -49,   -49,   -49,   -49,   -51,     0,     0,     0,     0,   -51,
       0,     0,     0,     0,   -51,   -51,   -51,   -51,   -51,   -51
};

static const yytype_int16 yycheck[] =
{
       0,   118,   218,     3,     7,    20,     8,   223,     3,     4,
       5,    17,     0,     8,    29,     7,    20,    17,   106,    25,
       7,    16,     8,    20,    19,    31,     8,    22,    20,    24,
      25,    28,    29,    30,    15,   152,    19,    17,    22,    22,
      19,    22,    23,    17,    25,    26,    27,    28,    29,    30,
      56,    57,    19,    59,    19,    61,     0,     3,     4,     5,
      17,    17,     8,     7,   280,    20,    19,    17,    12,     8,
      16,    20,    21,    19,    29,    30,    22,   165,    24,    25,
      22,     3,     4,     5,    64,     7,     8,     9,    10,    11,
      96,    13,    14,    17,    16,    17,    96,    19,   186,    15,
     106,   107,    24,    25,   110,    22,    22,   107,   114,    25,
     110,    27,    28,    29,    30,    20,    96,     0,   235,    17,
      20,    21,    96,    22,     7,     0,    22,   107,   134,    12,
     110,     0,     7,   107,    22,    20,   110,    12,     7,    96,
      96,    17,   148,    17,    29,    30,    96,    20,     0,     0,
     107,   107,    20,   110,   110,     7,     7,   107,     0,   165,
     110,   167,    20,   169,     0,     7,   172,   255,     0,   257,
      12,     7,    96,    20,     0,     7,    12,   265,     0,    22,
     186,     7,   188,   107,   190,     7,   110,    22,    15,    22,
     170,    20,    21,    20,     3,     4,     5,     6,    96,     8,
      27,    28,    29,    30,    22,   293,    20,    16,     8,   107,
      19,   191,   110,   219,     0,    24,    25,    19,   224,   219,
      96,     7,    96,     0,   224,   231,    12,    19,    15,    19,
       7,   107,    20,   107,   110,    22,   110,    19,    25,   219,
      27,    28,    29,    30,   224,   219,    22,     0,     8,   255,
     224,   257,    19,   259,     7,   261,    19,     0,    15,   265,
     266,    19,   219,   219,     7,    22,   266,   224,   224,   219,
      27,    28,    29,    30,   224,   281,    22,     0,    19,   285,
      22,   281,   262,   263,     7,   285,   266,   293,   294,    12,
      22,   297,   266,     8,   294,   219,     0,   297,    20,   279,
     224,   281,    22,     7,    22,   285,     0,   281,    12,   266,
     266,   285,     0,     7,   294,     0,   266,   297,    12,     7,
     294,   219,     7,   297,   281,   281,   224,    12,   285,   285,
       8,   281,    22,    20,    21,   285,    20,   294,   294,    15,
     297,   297,   266,   219,   294,   219,    22,   297,   224,    20,
     224,    27,    28,    29,    30,    20,    29,   281,    31,    32,
      33,   285,     0,    20,     0,    20,    22,    15,   266,     7,
     294,     7,    20,   297,    12,    20,    12,    25,    31,    27,
      28,    29,    30,   281,     8,    20,    59,   285,    61,    20,
     266,    20,   266,    28,    29,    30,   294,     0,    31,   297,
      20,    22,    19,    76,     7,   281,    59,   281,    61,   285,
      22,   285,     0,    22,    22,    31,    22,    15,   294,     7,
     294,   297,    20,   297,    12,    22,    59,    25,    61,    27,
      28,    29,    30,   106,     3,     4,     5,     0,    22,     8,
      19,     0,    75,    59,     7,    61,    19,    16,     7,    12,
      19,    20,    19,   106,    22,    24,    25,    22,    74,     0,
     133,   134,   135,   136,    15,    22,     7,    22,     8,    20,
      20,    12,    23,   106,    25,    26,    27,    28,    29,    30,
     133,   134,   135,   136,     0,     0,     0,    22,     0,    20,
     106,     7,     7,     7,   167,     7,   169,    12,    12,   172,
      12,   134,    20,    20,     3,   178,   179,   180,   181,   182,
     183,   184,    31,    20,   167,   188,   169,   190,   134,   172,
      27,    28,    29,    30,    20,   178,   179,   180,   181,   182,
     183,   184,    22,    20,   167,   188,   169,   190,    22,   172,
      59,    22,    61,    31,    22,   178,   179,   180,   181,   182,
     183,   167,    22,   169,     0,   188,   172,   190,    28,    29,
      30,     7,   178,   179,   180,   181,   182,    20,     0,    31,
      18,    59,   188,    61,   190,     7,    95,     0,    -1,    -1,
      12,    -1,   255,     0,     7,    73,   259,   106,   261,    12,
       7,    31,   265,    22,    -1,    -1,    22,    59,    22,    61,
      29,    30,   255,    29,    30,    29,   259,     0,   261,     0,
      72,    -1,   265,    -1,     7,   134,     7,     0,   106,    59,
     293,    61,   255,    15,     7,    -1,   259,    -1,   261,    -1,
      22,    71,   265,    25,    26,    27,    28,    29,    30,   255,
     293,    -1,    -1,   259,   106,   261,   134,    -1,   167,   265,
     169,    22,    -1,   172,     3,     4,     5,     6,    29,     8,
     293,     0,    -1,    -1,    -1,    -1,   106,    16,     7,   188,
      19,   190,   134,    15,    -1,    24,    25,   293,    20,   167,
      -1,   169,    -1,    -1,   172,    27,    28,    29,    30,    22,
     178,   179,   180,   181,   134,    28,    29,    30,    -1,   218,
     188,     0,   190,    -1,   223,   167,    -1,   169,     7,    15,
     172,    -1,    -1,    31,    20,    -1,   178,   179,   180,    25,
      26,    27,    28,    29,    30,    -1,   188,   167,   190,   169,
       0,    -1,   172,    -1,    -1,    -1,   255,     7,   178,   179,
     259,    59,   261,    61,    15,    -1,   265,    -1,   188,    -1,
     190,    22,    70,     0,    25,    26,    27,    28,    29,    30,
       7,   280,    -1,     3,     4,     5,     6,   255,     8,    -1,
      -1,   259,    -1,   261,   293,    -1,    16,   265,    -1,    19,
       0,    -1,    20,    -1,    24,    25,    -1,     7,   106,    27,
      28,    29,    30,   255,    -1,     0,    15,   259,    -1,   261,
      -1,    20,     7,   265,    -1,   293,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,   255,   134,    -1,    -1,   259,
      -1,   261,     3,     4,     5,   265,     7,     8,     9,    10,
      11,   293,    13,    14,    22,    16,    17,    18,    19,    27,
      28,    29,    30,    24,    25,     3,     4,     5,     6,   167,
       8,   169,    -1,   293,   172,    -1,    -1,    22,    16,    -1,
     178,    19,    27,    28,    29,    30,    24,    25,    -1,    -1,
     188,    -1,   190,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,     3,     4,     5,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    -1,     3,     4,     5,    24,    25,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    24,    25,   255,    -1,    -1,
      -1,   259,    -1,   261,     3,     4,     5,   265,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,   293,     7,     8,     9,    10,
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
      13,    14,    -1,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    24,    25,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    -1,    13,    14,    -1,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    24,    25,     3,     4,     5,    -1,
       7,     8,     9,    10,    11,    -1,    13,    14,    -1,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    24,    25,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    -1,    13,
      14,    -1,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      24,    25,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    -1,    13,    14,    -1,    16,    17,    -1,    19,    -1,
      -1,    -1,    -1,    24,    25,     3,     4,     5,    -1,     7,
       8,     9,    10,    11,    -1,    13,    14,    -1,    16,    17,
      -1,    19,    -1,    -1,    -1,    -1,    24,    25,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    -1,    13,    14,
      -1,    16,    17,    -1,    19,    -1,     3,     4,     5,    24,
      25,     8,    -1,     3,     4,     5,    -1,    -1,     8,    16,
      -1,    -1,    19,    -1,    -1,    -1,    16,    24,    25,    19,
      -1,     3,     4,     5,    24,    25,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    -1,    -1,    19,    15,    -1,
      -1,    -1,    24,    25,    -1,    22,    -1,    15,    25,    26,
      27,    28,    29,    30,    22,    -1,    15,    25,    26,    27,
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
      15,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    15,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    30,    15,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    15,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    15,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     7,    33,    34,    35,    39,    61,     8,     0,    35,
      19,    22,     7,    40,    41,    42,     8,    20,    21,     3,
       4,     5,     7,     8,     9,    10,    11,    13,    14,    16,
      17,    19,    24,    25,    36,    38,    43,    44,    45,    46,
      47,    48,    49,    50,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    42,     8,    23,    19,    50,    19,
      19,    19,     8,    60,    37,    38,    50,    60,    60,    22,
      29,    30,    28,    27,    15,    25,    26,    50,    50,    51,
      22,    50,     8,     6,    50,    18,    38,    20,    54,    55,
      56,    57,    58,    59,    60,    22,    20,    20,    20,    20,
      52,    53,    38,    22,    22,    22,    22,    12,    51,    38,
      20,    38,     7,     9,    10,    11,    13,    14,    17,    36,
      43,    44,    45,    46,    47,    48,    49,    50,    61,     3,
       4,     5,     8,    16,    19,    24,    25,    53,    54,    55,
      56,    57,    58,    59,    60,    62,     7,     9,    10,    11,
      13,    14,    17,    36,    43,    44,    45,    46,    47,    48,
      49,    50,    61,    50,     8,    19,    50,    19,    19,    19,
      37,    22,    23,     8,    60,    50,    60,    60,    29,    30,
      28,    27,    15,    25,    26,     8,    19,    50,    19,    19,
      19,    37,    22,    22,    51,    22,    50,     8,     6,    50,
      18,    50,    20,    54,    55,    56,    57,    58,    59,    60,
      22,    51,    22,    50,     8,     6,    50,    18,    22,    20,
      20,    20,    20,    22,    20,    20,    20,    20,    52,     7,
       9,    10,    11,    13,    14,    17,    36,    38,    43,    44,
      45,    46,    47,    48,    49,    50,    61,    22,    22,    22,
      52,    38,    22,    22,    22,    22,     8,    19,    50,    19,
      19,    19,    37,    12,    22,    22,    12,    51,    22,    51,
      22,    50,     8,     6,    50,    18,    38,    51,    38,    20,
      22,    20,    20,    20,    20,    20,    38,    52,    38,    22,
      22,    22,    38,    22,    12,    51,    38,    20,    38
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    32,    33,    34,    34,    35,    35,    36,    37,    37,
      38,    38,    38,    38,    38,    38,    38,    39,    40,    40,
      41,    41,    42,    43,    44,    44,    45,    46,    46,    47,
      48,    48,    49,    50,    50,    51,    51,    52,    52,    53,
      53,    54,    54,    55,    55,    56,    56,    57,    57,    58,
      58,    59,    59,    60,    60,    60,    60,    60,    60,    61,
      62,    62,    62
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     6,     0,     1,
       3,     1,     2,     9,     5,     7,     2,     1,     1,     5,
       5,     5,     3,     3,     1,     0,     1,     0,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     1,     1,     2,     2,     2,     3,     3,
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

#line 1991 "parser.tab.c"

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

#line 236 "./src/parser.y"


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
