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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3063

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  380

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
       0,   121,   121,   127,   132,   135,   139,   142,   148,   154,
     159,   165,   168,   171,   174,   177,   180,   183,   186,   190,
     209,   235,   238,   244,   249,   255,   272,   296,   306,   311,
     320,   326,   329,   335,   342,   346,   353,   360,   365,   368,
     374,   382,   385,   391,   396,   402,   408,   411,   417,   420,
     426,   431,   437,   442,   448,   453,   459,   464,   470,   475,
     481,   486,   492,   497,   503,   506,   509,   513,   517,   521,
     527,   545,   569,   572,   575
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

#define YYPACT_NINF (-287)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-75)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,    13,   378,    15,    70,   143,   160,   164,    32,    81,
    -287,   215,   117,    10,   269,    10,   309,   383,    59,   -12,
     430,    61,    91,   435,   491,    21,   491,   527,   311,     7,
     169,   212,   530,  1436,    33,   797,    56,   125,   141,   917,
    2515,  1000,   917,   917,   335,   377,   413,   448,   471,   497,
     507,   567,   578,   112,   140,    92,     9,   152,   728,   586,
    1126,   901,   971,   603,  1203,   536,   753,   182,   166,    82,
     797,   153,   183,  1000,   194,   278,  2726,  2735,   761,   964,
      69,  2744,  2753,   777,   917,   917,   917,   917,   917,   917,
     917,   208,   555,   228,   618,   620,   210,   213,   230,   887,
     234,   242,   250,   253,   890,  1891,  2762,   190,   277,   852,
     808,  2981,  2771,  2780,   245,  1115,   402,  2541,   254,   256,
     262,   672,   268,   785,    42,   896,   904,   933,   721,   491,
     276,   938,   491,   939,  1917,   696,   314,   797,   324,   327,
     330,  2515,  1943,  1969,  1995,  2021,  2047,  2073,  2099,  2125,
     349,  2151,   298,  2796,  2812,  1229,  1292,  1000,  1292,  1292,
     332,   -14,    95,   302,   790,  1011,  1403,  2828,  2844,  2860,
     534,   767,  1322,    38,  1357,  1000,  1357,  1357,   686,    98,
     180,  2996,  3018,  2992,    67,  2573,  2589,  2605,    44,   709,
     354,   797,   363,   375,   381,  2515,    71,   131,   142,   146,
     205,   217,   292,   358,   386,   389,   397,   415,   406,   153,
     412,  1000,   434,   441,  2177,  2203,    82,  1000,  2876,  2892,
     433,  2908,  2924,  1292,  1292,  1292,  1292,  1292,  1292,  1292,
      82,  1115,  2621,  2637,   452,  2653,  2669,  1357,  1357,  1357,
    1357,  1357,  1357,  1357,   474,   468,   153,   476,  1000,   506,
    1058,  2229,   469,   521,  2255,   572,  2281,   538,   580,   592,
     606,  2307,   623,   629,  2940,   259,   410,   993,  1257,  3003,
    2956,  2972,   631,   804,  2685,   338,  3032,  3029,  3014,   458,
    2701,  2717,   584,   512,   633,   533,   651,   656,   659,   661,
     566,  2333,   402,  2567,   668,   698,   700,   708,   830,   568,
     402,  2541,   714,   729,   732,   759,   247,   900,   384,   797,
     699,   711,   765,  2515,   517,   579,   650,   859,  1397,  1475,
    1501,  1527,  1553,   768,  1579,  2359,  2385,  2411,   776,   666,
     671,   674,   727,   721,   795,   784,   153,   786,  1000,   818,
    1170,  2437,  2515,  1605,   721,  2541,   792,   806,  1631,   812,
    1657,   828,   832,   889,   897,  1683,  2463,   915,   736,  2515,
    1709,   402,  2567,   918,   921,   926,  2541,  2489,   929,  1735,
    1761,  1787,  1813,   754,   721,  2567,   935,  1839,  2567,  1865
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -287,  -287,  -287,   950,     1,  -139,    -5,  -287,   943,  -287,
     934,    19,    37,    48,    55,    87,    97,   115,   -23,  1031,
    -208,  -287,   845,   -99,  -286,  1097,  1109,  1052,   878,   820,
     675,   617,   395,     0,   472
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,   142,    78,    79,     6,    18,    19,
      20,   143,   144,   145,   146,   147,   148,   149,   150,    54,
      93,    94,    95,    98,   122,    55,    56,    57,    58,    59,
      60,    61,    62,   151,    64
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    53,   214,    53,     7,     1,   305,   -38,   262,   -22,
      25,     2,    72,    -5,   328,    10,   223,    17,    80,    45,
      -5,    66,   272,   -72,    63,    44,    63,    44,    17,   130,
     -72,   -21,   -51,   -72,   -72,   -72,   -72,   -72,   -72,   -51,
      85,    12,   -28,    46,   -18,    46,    92,    96,    97,   -28,
     100,   -18,   103,    71,   -65,   129,   251,   -18,   230,   -65,
     -65,    47,   231,    47,   -65,   -65,   -65,   -65,   -65,   -65,
      -2,   -17,    48,   105,    48,   368,    73,     2,   -17,    49,
      24,    49,    26,   -59,   -17,   170,   171,   172,   -59,   -59,
     106,   173,    92,   242,   204,   -59,   -59,   -59,   -59,   174,
      27,    13,   175,   -41,    14,   206,    53,   176,   177,    53,
     255,    50,   124,    50,   210,   -38,   -51,   205,   196,   -38,
     -38,    51,    84,    51,   131,   -51,   224,   133,   237,    63,
      44,   -15,    63,    44,   220,    83,   197,    15,   -15,    52,
      16,    52,   -16,    -4,   -15,    74,   -11,   284,    46,   -16,
      -4,    46,   234,   -11,   198,   -16,    29,    30,    31,   -11,
      -6,    75,    33,   -39,    -7,   199,    47,    -6,   247,    47,
      39,    -7,   200,    41,   341,   -53,   -46,    48,    42,    43,
      48,    86,   -53,   -53,    49,   -73,    97,    49,   257,    14,
     260,    91,   -73,    92,   263,   -73,   -73,   -73,   -73,   -73,
     -73,   -51,   -51,   101,   201,   -12,    99,    92,   273,   105,
     -51,   238,   -12,   -50,   202,    -3,    50,   -31,   -12,    50,
     -50,    85,    -3,    97,   -31,   286,    51,   289,   -74,    51,
     -31,    16,   203,   -37,   346,   -74,   -47,   349,   -74,   -74,
     -74,   -74,   -74,   -74,    52,   357,   105,    52,   -18,   114,
     -18,   -18,   -18,   116,   -18,   117,   -18,   -18,   -18,   -18,
     -18,   -18,   -18,   118,   -18,   -18,   -18,   -18,   -40,   -70,
     323,   119,   -18,   -18,   120,   376,   -70,   125,   204,   126,
     -50,   152,   153,   154,   102,   127,   337,   155,   315,   -50,
     224,   128,   -32,   324,   314,   156,   329,   132,   157,   -32,
     -52,   205,   196,   158,   159,   -32,    86,   -52,   -52,   -71,
     206,   -18,   316,    97,   -72,   351,   -71,   354,   -18,   -72,
     197,   206,   204,   -53,   -72,   -72,   -72,   -72,   -72,   -72,
     317,   225,   -53,   -53,   209,   -17,   105,   356,   198,   323,
     358,   318,   -17,   204,   211,   205,   196,   212,   319,   199,
     213,   206,   323,   -39,   367,   323,   200,   369,   -13,   -50,
     -50,   373,   324,   314,   197,   -13,   205,   196,   -50,   238,
     377,   -13,   215,   379,   246,   324,   314,   -19,   324,   314,
     320,   316,   198,   248,   -19,   197,     8,     9,   201,   -14,
     321,    22,    23,   199,   316,   249,   -14,   316,   202,   317,
     200,   250,   -14,   198,   336,    29,    30,    31,   322,   252,
     318,    76,   317,   -15,   199,   317,   203,   319,   -47,    39,
     -15,   200,    41,   318,   253,   -48,   318,    42,    43,   254,
     319,   -52,   201,   319,    77,   256,   168,    81,    82,   225,
     -52,   -52,   202,   258,   152,   153,   154,   259,   -16,   320,
     155,   -24,   -24,   201,   264,   -16,   -25,   -25,   156,   321,
     203,   157,   320,   202,   186,   320,   158,   159,   168,   -30,
     168,   -11,   321,   274,   -58,   321,   -30,   322,   -11,   -58,
     -58,   203,   -30,   282,   242,   113,   -58,   -58,   -58,   -58,
     322,   283,    28,   322,    29,    30,    31,   -12,    32,   285,
      33,    34,    35,    36,   -12,    37,    38,   -31,    39,    40,
     186,    41,   -70,   169,   -31,   287,    42,    43,   -17,   -70,
     -17,   -17,   -17,   168,   -17,   -70,   -17,   -17,   -17,   -17,
     -17,   -17,   -17,   -36,   -17,   -17,   -17,   -17,    67,    68,
     -36,   187,   -17,   -17,   291,   169,   -36,   169,   -26,   -26,
     -72,   219,   168,   221,   222,   -72,   -72,   -23,   -23,   293,
     -72,   -72,   -72,   -72,   -72,   -72,    -8,   -32,   -71,   233,
     168,   235,   236,    -8,   -32,   -71,   -45,   -45,   -13,    -8,
     -28,   -71,   -28,   -28,   -28,   -13,   -28,   187,   -28,   -28,
     -28,   -28,   342,   -28,   -28,   292,   -28,   -28,   -28,   -28,
     169,   294,    88,   -14,   -28,   -28,   168,   299,   168,   -57,
     -14,   186,   168,   295,   -57,   -57,   -57,   -57,   168,   168,
     168,   168,   168,   168,   271,   186,   186,   296,   169,   169,
     169,   169,   186,   186,   186,   186,   186,   186,   281,   -42,
     115,   -44,   -44,   168,   297,   168,   187,   169,   187,   187,
     -37,   -15,   298,   -15,   -15,   -15,   300,   -15,   167,   -15,
     -15,   -15,   -15,   -15,   -15,   -15,   -28,   -15,   -15,   -15,
     -15,   -33,   301,   -28,   -35,   -15,   -15,   302,   -33,   345,
     303,   -35,   304,   169,   -33,   169,   185,   -35,   187,   169,
     167,   325,   167,   -43,   -43,   169,   169,   169,   169,   169,
     169,   169,   187,   187,   207,   208,   112,   -39,   -39,   187,
     187,   187,   187,   187,   187,   187,   166,   244,   245,   338,
     169,   326,   169,   327,   152,   153,   154,   -34,   168,   -40,
     155,   339,   185,   168,   -34,   168,   -29,   330,   156,   168,
     -34,   157,   -46,   -29,   184,   167,   158,   159,   166,   -29,
     166,   -55,   331,   -20,   -27,   332,    87,   -55,   -55,   -55,
     -20,   -27,   134,   111,    29,    30,    31,   -27,   135,   168,
      33,   136,   137,   138,   167,   139,   140,   -30,    39,   141,
     104,    41,   333,   -73,   -30,   340,    42,    43,   -73,   -73,
     184,   343,   167,   -73,   -73,   -73,   -73,   -73,   -73,   344,
      29,    30,    31,   166,   347,   169,    33,   348,   -49,   350,
     169,   -55,   169,   359,    39,    84,   169,    41,   226,   -55,
     -55,   -55,    42,    43,    88,   -37,   -37,   352,   167,   360,
     167,   -56,   166,   185,   167,   361,   -56,   -56,   -56,   -56,
     167,   167,   167,   167,   167,   270,   169,   185,   185,   362,
     166,   -40,   -40,   363,   185,   185,   185,   185,   185,   280,
     -16,   165,   -16,   -16,   -16,   167,   -16,   167,   -16,   -16,
     -16,   -16,   -16,   -16,   -16,   -54,   -16,   -16,   -16,   -16,
      87,   -54,   -54,   -54,   -16,   -16,   166,   -36,   166,   183,
      -8,   184,   166,   165,   -36,   165,   -33,    -8,   166,   166,
     166,   166,   269,   -33,   -35,   184,   184,   110,   334,   335,
     364,   -35,   184,   184,   184,   184,   279,   -61,   365,   164,
      29,    30,    31,   166,   -61,   166,    76,   -61,    90,   -61,
     -61,   -61,   -61,   -34,    39,   183,   366,    41,   -29,   -27,
     -34,   370,    42,    43,   371,   -29,   -27,   182,   165,   372,
     167,   164,   374,   164,    11,   167,   378,   167,    21,    65,
     121,   167,     0,     0,   109,   -10,     0,   -10,   -10,   -10,
       0,   -10,     0,   -10,   -10,   -10,   -10,   165,   -10,   -10,
       0,   -10,   -10,   -10,   -10,     0,     0,   -63,     0,   -10,
     -10,   167,     0,   182,   -63,   165,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   152,   153,   154,   164,     0,   166,   155,
       0,     0,     0,   166,   -54,   166,     0,   156,     0,   166,
     157,   226,   -54,   -54,   -54,   158,   159,   227,     0,     0,
       0,   165,   -57,   165,     0,   164,   183,   165,     0,   -57,
     -57,   -57,   -57,   165,   165,   165,   268,     0,     0,   166,
     183,   183,     0,   164,     0,     0,     0,   183,   183,   183,
     278,   152,   153,   154,   288,     0,     0,   155,   165,     0,
     165,     0,   160,     0,     0,   156,     0,     0,   157,     0,
       0,     0,     0,   158,   159,     0,     0,     0,     0,   164,
       0,   164,     0,   163,   182,   164,     0,     0,     0,     0,
     178,   164,   164,   267,   160,     0,   160,     0,   182,   182,
       0,     0,     0,     0,     0,   182,   182,   277,   170,   171,
     172,   181,     0,     0,   173,   163,   164,   163,   164,     0,
       0,     0,   174,     0,     0,   175,     0,   108,   161,     0,
     176,   177,   -59,     0,     0,     0,   178,     0,     0,   -59,
     162,     0,    89,   165,   -59,   -59,   -59,   -59,   165,   160,
     165,     0,     0,     0,   165,     0,   179,   181,     0,     0,
     161,     0,   161,   152,   153,   154,   353,     0,   180,   155,
     163,     0,   162,     0,   162,     0,     0,   156,   160,     0,
     157,     0,     0,   107,   165,   158,   159,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   160,     0,     0,   163,
       0,   164,   179,   123,     0,     0,   164,     0,   164,   -64,
       0,     0,   164,     0,   180,   161,   -64,   163,     0,   -64,
     -64,   -64,   -64,   -64,   -64,     0,     0,   162,     0,     0,
       0,     0,   160,     0,   160,   -65,     0,   178,   160,   216,
     -65,     0,   164,   217,   161,   -65,   -65,   -65,   -65,   -65,
     -65,   178,   178,   163,     0,   163,   162,     0,   181,   163,
       0,     0,   161,   227,     0,   163,   266,     0,   -56,   160,
       0,   160,   181,   181,   162,   -56,   -56,   -56,   -56,   181,
     276,     0,     0,     0,     0,   152,   153,   154,     0,     0,
     163,   218,   163,     0,     0,     0,     0,     0,   161,   156,
     161,     0,   157,   179,   161,     0,     0,   158,   159,     0,
     162,     0,   162,     0,     0,   180,   162,   179,   179,     0,
       0,     0,   265,     0,     0,     0,     0,     0,   -74,   180,
     180,     0,     0,   -74,   -74,   161,   275,   161,   -74,   -74,
     -74,   -74,   -74,   -74,     0,     0,     0,   162,     0,   162,
     170,   171,   172,     0,   160,     0,   232,     0,     0,   160,
       0,   160,     0,     0,   174,   160,     0,   175,     0,     0,
       0,     0,   176,   177,     0,   163,     0,     0,     0,   123,
     163,     0,   163,     0,     0,     0,   163,   123,   -11,     0,
     -11,   -11,   -11,     0,   -11,   160,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,     0,   -11,   -11,   -11,   -11,     0,   -59,
       0,     0,   -11,   -11,   -59,     0,   163,     0,     0,   228,
     161,   -59,   -59,   -59,   -59,   161,     0,   161,     0,     0,
       0,   161,   162,     0,     0,     0,     0,   162,     0,   162,
       0,     0,   -65,   162,     0,     0,    69,     0,   123,   -65,
      70,     0,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,
       0,   161,     0,     0,     0,     0,   -12,     0,   -12,   -12,
     -12,     0,   -12,   162,   -12,   -12,   -12,   -12,   -12,   -12,
     -12,     0,   -12,   -12,   -12,   -12,     0,     0,     0,     0,
     -12,   -12,   -31,     0,   -31,   -31,   -31,     0,   -31,     0,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,
     -31,   -31,     0,     0,     0,     0,   -31,   -31,   -32,     0,
     -32,   -32,   -32,     0,   -32,     0,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,     0,     0,
       0,     0,   -32,   -32,   -13,     0,   -13,   -13,   -13,     0,
     -13,     0,   -13,   -13,   -13,   -13,   -13,   -13,   -13,     0,
     -13,   -13,   -13,   -13,     0,     0,     0,     0,   -13,   -13,
     -14,     0,   -14,   -14,   -14,     0,   -14,     0,   -14,   -14,
     -14,   -14,   -14,   -14,   -14,     0,   -14,   -14,   -14,   -14,
       0,     0,     0,     0,   -14,   -14,   -30,     0,   -30,   -30,
     -30,     0,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,     0,   -30,   -30,   -30,   -30,     0,     0,     0,     0,
     -30,   -30,   -70,     0,   -70,   -70,   -70,     0,   -70,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,   -70,   -70,
     -70,   -70,     0,     0,     0,     0,   -70,   -70,   -36,     0,
     -36,   -36,   -36,     0,   -36,     0,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,     0,     0,
       0,     0,   -36,   -36,    -8,     0,    -8,    -8,    -8,     0,
      -8,     0,    -8,    -8,    -8,    -8,    -8,    -8,    -8,     0,
      -8,    -8,    -8,    -8,     0,     0,     0,     0,    -8,    -8,
     -71,     0,   -71,   -71,   -71,     0,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,
       0,     0,     0,     0,   -71,   -71,   -28,     0,   -28,   -28,
     -28,     0,   -28,     0,   -28,   -28,   -28,   -28,   375,   -28,
     -28,     0,   -28,   -28,   -28,   -28,     0,     0,     0,     0,
     -28,   -28,   -33,     0,   -33,   -33,   -33,     0,   -33,     0,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,
     -33,   -33,     0,     0,     0,     0,   -33,   -33,   -35,     0,
     -35,   -35,   -35,     0,   -35,     0,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,     0,     0,
       0,     0,   -35,   -35,   -34,     0,   -34,   -34,   -34,     0,
     -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,
     -34,   -34,   -34,   -34,     0,     0,     0,     0,   -34,   -34,
     -29,     0,   -29,   -29,   -29,     0,   -29,     0,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,
       0,     0,     0,     0,   -29,   -29,   -27,     0,   -27,   -27,
     -27,     0,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,     0,   -27,   -27,   -27,   -27,     0,     0,     0,     0,
     -27,   -27,    -9,     0,    -9,    -9,    -9,     0,    -9,     0,
      -9,    -9,    -9,    -9,     0,    -9,    -9,     0,    -9,    -9,
      -9,    -9,     0,     0,     0,     0,    -9,    -9,   -18,     0,
     -18,   -18,   -18,     0,   -18,     0,   -18,   -18,   -18,   -18,
       0,   -18,   -18,     0,   -18,   -18,   -18,   -18,     0,     0,
       0,     0,   -18,   -18,   -17,     0,   -17,   -17,   -17,     0,
     -17,     0,   -17,   -17,   -17,   -17,     0,   -17,   -17,     0,
     -17,   -17,   -17,   -17,     0,     0,     0,     0,   -17,   -17,
     -15,     0,   -15,   -15,   -15,     0,   -15,     0,   -15,   -15,
     -15,   -15,     0,   -15,   -15,     0,   -15,   -15,   -15,   -15,
       0,     0,     0,     0,   -15,   -15,   -16,     0,   -16,   -16,
     -16,     0,   -16,     0,   -16,   -16,   -16,   -16,     0,   -16,
     -16,     0,   -16,   -16,   -16,   -16,     0,     0,     0,     0,
     -16,   -16,   -11,     0,   -11,   -11,   -11,     0,   -11,     0,
     -11,   -11,   -11,   -11,     0,   -11,   -11,     0,   -11,   -11,
     -11,   -11,     0,     0,     0,     0,   -11,   -11,   -12,     0,
     -12,   -12,   -12,     0,   -12,     0,   -12,   -12,   -12,   -12,
       0,   -12,   -12,     0,   -12,   -12,   -12,   -12,     0,     0,
       0,     0,   -12,   -12,   -31,     0,   -31,   -31,   -31,     0,
     -31,     0,   -31,   -31,   -31,   -31,     0,   -31,   -31,     0,
     -31,   -31,   -31,   -31,     0,     0,     0,     0,   -31,   -31,
     -32,     0,   -32,   -32,   -32,     0,   -32,     0,   -32,   -32,
     -32,   -32,     0,   -32,   -32,     0,   -32,   -32,   -32,   -32,
       0,     0,     0,     0,   -32,   -32,   -13,     0,   -13,   -13,
     -13,     0,   -13,     0,   -13,   -13,   -13,   -13,     0,   -13,
     -13,     0,   -13,   -13,   -13,   -13,     0,     0,     0,     0,
     -13,   -13,   -14,     0,   -14,   -14,   -14,     0,   -14,     0,
     -14,   -14,   -14,   -14,     0,   -14,   -14,     0,   -14,   -14,
     -14,   -14,     0,     0,     0,     0,   -14,   -14,   134,     0,
      29,    30,    31,     0,   135,     0,    33,   136,   137,   138,
       0,   139,   140,     0,    39,   141,   261,    41,     0,     0,
       0,     0,    42,    43,   -30,     0,   -30,   -30,   -30,     0,
     -30,     0,   -30,   -30,   -30,   -30,     0,   -30,   -30,     0,
     -30,   -30,   -30,   -30,     0,     0,     0,     0,   -30,   -30,
     134,     0,    29,    30,    31,     0,   135,     0,    33,   136,
     137,   138,     0,   139,   140,     0,    39,   141,   290,    41,
       0,     0,     0,     0,    42,    43,   -70,     0,   -70,   -70,
     -70,     0,   -70,     0,   -70,   -70,   -70,   -70,     0,   -70,
     -70,     0,   -70,   -70,   -70,   -70,     0,     0,     0,     0,
     -70,   -70,   -36,     0,   -36,   -36,   -36,     0,   -36,     0,
     -36,   -36,   -36,   -36,     0,   -36,   -36,     0,   -36,   -36,
     -36,   -36,     0,     0,     0,     0,   -36,   -36,    -8,     0,
      -8,    -8,    -8,     0,    -8,     0,    -8,    -8,    -8,    -8,
       0,    -8,    -8,     0,    -8,    -8,    -8,    -8,     0,     0,
       0,     0,    -8,    -8,   -71,     0,   -71,   -71,   -71,     0,
     -71,     0,   -71,   -71,   -71,   -71,     0,   -71,   -71,     0,
     -71,   -71,   -71,   -71,     0,     0,     0,     0,   -71,   -71,
     -33,     0,   -33,   -33,   -33,     0,   -33,     0,   -33,   -33,
     -33,   -33,     0,   -33,   -33,     0,   -33,   -33,   -33,   -33,
       0,     0,     0,     0,   -33,   -33,   -35,     0,   -35,   -35,
     -35,     0,   -35,     0,   -35,   -35,   -35,   -35,     0,   -35,
     -35,     0,   -35,   -35,   -35,   -35,     0,     0,     0,     0,
     -35,   -35,   -34,     0,   -34,   -34,   -34,     0,   -34,     0,
     -34,   -34,   -34,   -34,     0,   -34,   -34,     0,   -34,   -34,
     -34,   -34,     0,     0,     0,     0,   -34,   -34,   134,     0,
      29,    30,    31,     0,   135,     0,    33,   136,   137,   138,
       0,   139,   140,     0,    39,   141,   355,    41,     0,     0,
       0,     0,    42,    43,   -29,     0,   -29,   -29,   -29,     0,
     -29,     0,   -29,   -29,   -29,   -29,     0,   -29,   -29,     0,
     -29,   -29,   -29,   -29,     0,     0,     0,     0,   -29,   -29,
     -27,     0,   -27,   -27,   -27,     0,   -27,     0,   -27,   -27,
     -27,   -27,     0,   -27,   -27,     0,   -27,   -27,   -27,   -27,
       0,     0,     0,     0,   -27,   -27,   134,     0,    29,    30,
      31,     0,   135,     0,    33,   136,   137,   138,     0,   139,
     140,     0,    39,   141,     0,    41,     0,     0,     0,     0,
      42,    43,   188,     0,    29,    30,    31,     0,   189,     0,
      33,   190,   191,   192,     0,   193,   194,     0,    39,   195,
       0,    41,     0,     0,     0,     0,    42,    43,   306,     0,
      29,    30,    31,     0,   307,     0,    33,   308,   309,   310,
       0,   311,   312,     0,    39,   313,     0,    41,     0,   -61,
       0,     0,    42,    43,   -61,   -61,     0,     0,     0,   -61,
     243,   -61,   -61,   -61,   -61,   -63,     0,     0,     0,     0,
     -63,   -63,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   -64,     0,     0,     0,     0,   -64,   -64,     0,     0,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -65,     0,     0,
       0,     0,   -65,   -65,     0,     0,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -68,     0,     0,     0,     0,   -68,   -68,
       0,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -67,
       0,     0,     0,     0,   -67,   -67,     0,     0,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -66,     0,     0,     0,     0,
     -66,   -66,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -69,     0,     0,     0,     0,   -69,   -69,     0,     0,
       0,   -69,   -69,   -69,   -69,   -69,   -69,   -60,     0,     0,
       0,     0,   -60,   -60,     0,     0,     0,   -60,   243,   -60,
     -60,   -60,   -60,   -62,     0,     0,     0,     0,   -62,   -62,
       0,     0,   -65,   -62,   -62,   -62,   -62,   -62,   -62,   -65,
       0,   -68,   -65,   -65,   -65,   -65,   -65,   -65,   -68,     0,
     -67,   -68,   -68,   -68,   -68,   -68,   -68,   -67,     0,   -66,
     -67,   -67,   -67,   -67,   -67,   -67,   -66,     0,   -69,   -66,
     -66,   -66,   -66,   -66,   -66,   -69,     0,   -60,   -69,   -69,
     -69,   -69,   -69,   -69,   -60,     0,   -62,   -60,    90,   -60,
     -60,   -60,   -60,   -62,     0,     0,   -62,   -62,   -62,   -62,
     -62,   -62,   -73,     0,     0,     0,     0,   -73,     0,     0,
       0,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -74,     0,
       0,     0,     0,   -74,     0,     0,     0,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -61,     0,     0,     0,     0,   -61,
       0,     0,     0,     0,   -61,   229,   -61,   -61,   -61,   -61,
     -63,     0,     0,     0,     0,   -63,     0,     0,     0,     0,
     -63,   -63,   -63,   -63,   -63,   -63,   -64,     0,     0,     0,
       0,   -64,     0,     0,     0,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   -65,     0,     0,     0,     0,   -65,     0,     0,
       0,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -68,     0,
       0,     0,     0,   -68,     0,     0,     0,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -67,     0,     0,     0,     0,   -67,
       0,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -66,     0,     0,     0,     0,   -66,     0,     0,     0,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -69,     0,     0,     0,
       0,   -69,     0,     0,     0,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -60,     0,     0,     0,     0,   -60,     0,     0,
       0,     0,   -60,   229,   -60,   -60,   -60,   -60,   -62,     0,
       0,     0,     0,   -62,     0,     0,     0,   -58,   -62,   -62,
     -62,   -62,   -62,   -62,   -58,     0,     0,    89,   241,   -58,
     -58,   -58,   -58,   -57,   -57,     0,     0,   -53,   -53,   -58,
     -57,   -57,   -57,   -57,   -58,   239,   -53,   -53,     0,   228,
     241,   -58,   -58,   -58,   -58,   -56,   -56,     0,     0,   -55,
     -55,     0,   -56,   -56,   -56,   -56,   240,   -55,   -55,   -55,
     -54,   -54,     0,   -52,   -52,     0,     0,   240,   -54,   -54,
     -54,   239,   -52,   -52
};

static const yytype_int16 yycheck[] =
{
       0,    24,   141,    26,     4,     1,   292,    21,   216,    21,
      22,     7,    35,     0,   300,     0,    30,     7,    41,    24,
       7,    26,   230,    16,    24,    24,    26,    26,     7,   128,
      23,    21,    23,    26,    27,    28,    29,    30,    31,    30,
      31,     9,     0,    24,     0,    26,    69,    70,    71,     7,
      73,     7,    75,    20,    16,    13,   195,    13,    20,    21,
      22,    24,    24,    26,    26,    27,    28,    29,    30,    31,
       0,     0,    24,    78,    26,   361,    20,     7,     7,    24,
      21,    26,    21,    16,    13,     3,     4,     5,    21,    22,
      21,     9,   115,    26,   117,    28,    29,    30,    31,    17,
       9,    20,    20,    21,    23,   128,   129,    25,    26,   132,
     209,    24,   117,    26,   137,    23,    21,   117,   117,    21,
      22,    24,    30,    26,   129,    30,    31,   132,    30,   129,
     129,     0,   132,   132,   157,    23,   117,    20,     7,    24,
      23,    26,     0,     0,    13,    20,     0,   246,   129,     7,
       7,   132,   175,     7,   117,    13,     3,     4,     5,    13,
       0,    20,     9,    23,     0,   117,   129,     7,   191,   132,
      17,     7,   117,    20,   313,    23,    23,   129,    25,    26,
     132,    29,    30,    31,   129,    16,   209,   132,   211,    23,
     213,     9,    23,   216,   217,    26,    27,    28,    29,    30,
      31,    21,    22,     9,   117,     0,    23,   230,   231,   214,
      30,    31,     7,    23,   117,     0,   129,     0,    13,   132,
      30,    31,     7,   246,     7,   248,   129,   250,    16,   132,
      13,    23,   117,    23,   333,    23,    23,   336,    26,    27,
      28,    29,    30,    31,   129,   344,   251,   132,     1,    21,
       3,     4,     5,    23,     7,    21,     9,    10,    11,    12,
      13,    14,    15,    21,    17,    18,    19,    20,    23,     0,
     293,    21,    25,    26,    21,   374,     7,    23,   301,    23,
      21,     3,     4,     5,     6,    23,   309,     9,   293,    30,
      31,    23,     0,   293,   293,    17,   301,    21,    20,     7,
      23,   301,   301,    25,    26,    13,    29,    30,    31,     0,
     333,     0,   293,   336,    16,   338,     7,   340,     7,    21,
     301,   344,   345,    21,    26,    27,    28,    29,    30,    31,
     293,    29,    30,    31,    20,     0,   341,   342,   301,   362,
     345,   293,     7,   366,    20,   345,   345,    20,   293,   301,
      20,   374,   375,    21,   359,   378,   301,   362,     0,    21,
      22,   366,   362,   362,   345,     7,   366,   366,    30,    31,
     375,    13,    23,   378,    20,   375,   375,     0,   378,   378,
     293,   362,   345,    20,     7,   366,     8,     9,   301,     0,
     293,     8,     9,   345,   375,    20,     7,   378,   301,   362,
     345,    20,    13,   366,    20,     3,     4,     5,   293,    23,
     362,     9,   375,     0,   366,   378,   301,   362,    21,    17,
       7,   366,    20,   375,     9,    23,   378,    25,    26,    23,
     375,    21,   345,   378,    39,    23,    41,    42,    43,    29,
      30,    31,   345,     9,     3,     4,     5,     6,     0,   362,
       9,    21,    22,   366,    21,     7,    21,    22,    17,   362,
     345,    20,   375,   366,    69,   378,    25,    26,    73,     0,
      75,     0,   375,    21,    16,   378,     7,   362,     7,    21,
      22,   366,    13,     9,    26,    90,    28,    29,    30,    31,
     375,    23,     1,   378,     3,     4,     5,     0,     7,    23,
       9,    10,    11,    12,     7,    14,    15,     0,    17,    18,
     115,    20,     0,    41,     7,     9,    25,    26,     1,     7,
       3,     4,     5,   128,     7,    13,     9,    10,    11,    12,
      13,    14,    15,     0,    17,    18,    19,    20,     8,     9,
       7,    69,    25,    26,    23,    73,    13,    75,    21,    22,
      16,   156,   157,   158,   159,    21,    22,    21,    22,    21,
      26,    27,    28,    29,    30,    31,     0,     0,     0,   174,
     175,   176,   177,     7,     7,     7,    21,    22,     0,    13,
       1,    13,     3,     4,     5,     7,     7,   115,     9,    10,
      11,    12,    13,    14,    15,    23,    17,    18,    19,    20,
     128,    21,    16,     0,    25,    26,   211,    23,   213,    23,
       7,   216,   217,    21,    28,    29,    30,    31,   223,   224,
     225,   226,   227,   228,   229,   230,   231,    21,   156,   157,
     158,   159,   237,   238,   239,   240,   241,   242,   243,    21,
      22,    21,    22,   248,    21,   250,   174,   175,   176,   177,
      21,     1,    21,     3,     4,     5,    23,     7,    41,     9,
      10,    11,    12,    13,    14,    15,     0,    17,    18,    19,
      20,     0,    21,     7,     0,    25,    26,    21,     7,    13,
      21,     7,    21,   211,    13,   213,    69,    13,   216,   217,
      73,    23,    75,    21,    22,   223,   224,   225,   226,   227,
     228,   229,   230,   231,     8,     9,    89,    21,    22,   237,
     238,   239,   240,   241,   242,   243,    41,     8,     9,    20,
     248,    23,   250,    23,     3,     4,     5,     0,   333,    21,
       9,    20,   115,   338,     7,   340,     0,    23,    17,   344,
      13,    20,    21,     7,    69,   128,    25,    26,    73,    13,
      75,    23,    23,     0,     0,    23,    28,    29,    30,    31,
       7,     7,     1,    88,     3,     4,     5,    13,     7,   374,
       9,    10,    11,    12,   157,    14,    15,     0,    17,    18,
      19,    20,    23,    16,     7,    20,    25,    26,    21,    22,
     115,    23,   175,    26,    27,    28,    29,    30,    31,    23,
       3,     4,     5,   128,     9,   333,     9,    23,    23,    23,
     338,    21,   340,    21,    17,    30,   344,    20,    28,    29,
      30,    31,    25,    26,    16,    21,    22,     9,   211,    23,
     213,    23,   157,   216,   217,    23,    28,    29,    30,    31,
     223,   224,   225,   226,   227,   228,   374,   230,   231,    21,
     175,    21,    22,    21,   237,   238,   239,   240,   241,   242,
       1,    41,     3,     4,     5,   248,     7,   250,     9,    10,
      11,    12,    13,    14,    15,    23,    17,    18,    19,    20,
      28,    29,    30,    31,    25,    26,   211,     0,   213,    69,
       0,   216,   217,    73,     7,    75,     0,     7,   223,   224,
     225,   226,   227,     7,     0,   230,   231,    87,     8,     9,
      21,     7,   237,   238,   239,   240,   241,    16,    21,    41,
       3,     4,     5,   248,    23,   250,     9,    26,    27,    28,
      29,    30,    31,     0,    17,   115,    21,    20,     0,     0,
       7,    23,    25,    26,    23,     7,     7,    69,   128,    23,
     333,    73,    23,    75,     4,   338,    21,   340,    15,    25,
     115,   344,    -1,    -1,    86,     1,    -1,     3,     4,     5,
      -1,     7,    -1,     9,    10,    11,    12,   157,    14,    15,
      -1,    17,    18,    19,    20,    -1,    -1,    16,    -1,    25,
      26,   374,    -1,   115,    23,   175,    -1,    26,    27,    28,
      29,    30,    31,     3,     4,     5,   128,    -1,   333,     9,
      -1,    -1,    -1,   338,    21,   340,    -1,    17,    -1,   344,
      20,    28,    29,    30,    31,    25,    26,    16,    -1,    -1,
      -1,   211,    21,   213,    -1,   157,   216,   217,    -1,    28,
      29,    30,    31,   223,   224,   225,   226,    -1,    -1,   374,
     230,   231,    -1,   175,    -1,    -1,    -1,   237,   238,   239,
     240,     3,     4,     5,     6,    -1,    -1,     9,   248,    -1,
     250,    -1,    41,    -1,    -1,    17,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,   211,
      -1,   213,    -1,    41,   216,   217,    -1,    -1,    -1,    -1,
      69,   223,   224,   225,    73,    -1,    75,    -1,   230,   231,
      -1,    -1,    -1,    -1,    -1,   237,   238,   239,     3,     4,
       5,    69,    -1,    -1,     9,    73,   248,    75,   250,    -1,
      -1,    -1,    17,    -1,    -1,    20,    -1,    85,    41,    -1,
      25,    26,    16,    -1,    -1,    -1,   115,    -1,    -1,    23,
      41,    -1,    26,   333,    28,    29,    30,    31,   338,   128,
     340,    -1,    -1,    -1,   344,    -1,    69,   115,    -1,    -1,
      73,    -1,    75,     3,     4,     5,     6,    -1,    69,     9,
     128,    -1,    73,    -1,    75,    -1,    -1,    17,   157,    -1,
      20,    -1,    -1,    84,   374,    25,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,    -1,   157,
      -1,   333,   115,   116,    -1,    -1,   338,    -1,   340,    16,
      -1,    -1,   344,    -1,   115,   128,    23,   175,    -1,    26,
      27,    28,    29,    30,    31,    -1,    -1,   128,    -1,    -1,
      -1,    -1,   211,    -1,   213,    16,    -1,   216,   217,    20,
      21,    -1,   374,    24,   157,    26,    27,    28,    29,    30,
      31,   230,   231,   211,    -1,   213,   157,    -1,   216,   217,
      -1,    -1,   175,    16,    -1,   223,   224,    -1,    21,   248,
      -1,   250,   230,   231,   175,    28,    29,    30,    31,   237,
     238,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,    -1,
     248,     9,   250,    -1,    -1,    -1,    -1,    -1,   211,    17,
     213,    -1,    20,   216,   217,    -1,    -1,    25,    26,    -1,
     211,    -1,   213,    -1,    -1,   216,   217,   230,   231,    -1,
      -1,    -1,   223,    -1,    -1,    -1,    -1,    -1,    16,   230,
     231,    -1,    -1,    21,    22,   248,   237,   250,    26,    27,
      28,    29,    30,    31,    -1,    -1,    -1,   248,    -1,   250,
       3,     4,     5,    -1,   333,    -1,     9,    -1,    -1,   338,
      -1,   340,    -1,    -1,    17,   344,    -1,    20,    -1,    -1,
      -1,    -1,    25,    26,    -1,   333,    -1,    -1,    -1,   292,
     338,    -1,   340,    -1,    -1,    -1,   344,   300,     1,    -1,
       3,     4,     5,    -1,     7,   374,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    16,
      -1,    -1,    25,    26,    21,    -1,   374,    -1,    -1,    26,
     333,    28,    29,    30,    31,   338,    -1,   340,    -1,    -1,
      -1,   344,   333,    -1,    -1,    -1,    -1,   338,    -1,   340,
      -1,    -1,    16,   344,    -1,    -1,    20,    -1,   361,    23,
      24,    -1,    26,    27,    28,    29,    30,    31,    -1,    -1,
      -1,   374,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,    -1,     7,   374,     9,    10,    11,    12,    13,    14,
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
      15,    -1,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      25,    26,     1,    -1,     3,     4,     5,    -1,     7,    -1,
       9,    10,    11,    12,    -1,    14,    15,    -1,    17,    18,
      -1,    20,    -1,    -1,    -1,    -1,    25,    26,     1,    -1,
       3,     4,     5,    -1,     7,    -1,     9,    10,    11,    12,
      -1,    14,    15,    -1,    17,    18,    -1,    20,    -1,    16,
      -1,    -1,    25,    26,    21,    22,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    31,    16,    -1,    -1,    -1,    -1,
      21,    22,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    16,    -1,    -1,    -1,    -1,    21,    22,    -1,    -1,
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
      -1,    -1,    16,    26,    27,    28,    29,    30,    31,    23,
      -1,    16,    26,    27,    28,    29,    30,    31,    23,    -1,
      16,    26,    27,    28,    29,    30,    31,    23,    -1,    16,
      26,    27,    28,    29,    30,    31,    23,    -1,    16,    26,
      27,    28,    29,    30,    31,    23,    -1,    16,    26,    27,
      28,    29,    30,    31,    23,    -1,    16,    26,    27,    28,
      29,    30,    31,    23,    -1,    -1,    26,    27,    28,    29,
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
      -1,    -1,    -1,    21,    -1,    -1,    -1,    16,    26,    27,
      28,    29,    30,    31,    23,    -1,    -1,    26,    16,    28,
      29,    30,    31,    21,    22,    -1,    -1,    21,    22,    16,
      28,    29,    30,    31,    21,    29,    30,    31,    -1,    26,
      16,    28,    29,    30,    31,    21,    22,    -1,    -1,    21,
      22,    -1,    28,    29,    30,    31,    28,    29,    30,    31,
      21,    22,    -1,    21,    22,    -1,    -1,    28,    29,    30,
      31,    29,    30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     7,    34,    35,    36,    40,    66,     8,     9,
       0,    36,     9,    20,    23,    20,    23,     7,    41,    42,
      43,    41,     8,     9,    21,    22,    21,     9,     1,     3,
       4,     5,     7,     9,    10,    11,    12,    14,    15,    17,
      18,    20,    25,    26,    37,    39,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    43,    39,     8,     9,    20,
      24,    20,    51,    20,    20,    20,     9,    65,    38,    39,
      51,    65,    65,    23,    30,    31,    29,    28,    16,    26,
      27,     9,    51,    53,    54,    55,    51,    51,    56,    23,
      51,     9,     6,    51,    19,    39,    21,    59,    60,    61,
      62,    63,    64,    65,    21,    22,    23,    21,    21,    21,
      21,    55,    57,    58,    39,    23,    23,    23,    23,    13,
      56,    39,    21,    39,     1,     7,    10,    11,    12,    14,
      15,    18,    37,    44,    45,    46,    47,    48,    49,    50,
      51,    66,     3,     4,     5,     9,    17,    20,    25,    26,
      52,    58,    59,    60,    61,    62,    63,    64,    65,    67,
       3,     4,     5,     9,    17,    20,    25,    26,    52,    58,
      59,    60,    61,    62,    63,    64,    65,    67,     1,     7,
      10,    11,    12,    14,    15,    18,    37,    44,    45,    46,
      47,    48,    49,    50,    51,    66,    51,     8,     9,    20,
      51,    20,    20,    20,    38,    23,    20,    24,     9,    65,
      51,    65,    65,    30,    31,    29,    28,    16,    26,    27,
      20,    24,     9,    65,    51,    65,    65,    30,    31,    29,
      28,    16,    26,    27,     8,     9,    20,    51,    20,    20,
      20,    38,    23,     9,    23,    56,    23,    51,     9,     6,
      51,    19,    53,    51,    21,    59,    60,    61,    62,    63,
      64,    65,    53,    51,    21,    59,    60,    61,    62,    63,
      64,    65,     9,    23,    56,    23,    51,     9,     6,    51,
      19,    23,    23,    21,    21,    21,    21,    21,    21,    23,
      23,    21,    21,    21,    21,    57,     1,     7,    10,    11,
      12,    14,    15,    18,    37,    39,    44,    45,    46,    47,
      48,    49,    50,    51,    66,    23,    23,    23,    57,    39,
      23,    23,    23,    23,     8,     9,    20,    51,    20,    20,
      20,    38,    13,    23,    23,    13,    56,     9,    23,    56,
      23,    51,     9,     6,    51,    19,    39,    56,    39,    21,
      23,    23,    21,    21,    21,    21,    21,    39,    57,    39,
      23,    23,    23,    39,    23,    13,    56,    39,    21,    39
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    35,    35,    35,    36,    36,    37,    38,
      38,    39,    39,    39,    39,    39,    39,    39,    39,    40,
      40,    41,    41,    42,    42,    43,    43,    44,    45,    45,
      46,    47,    47,    48,    49,    49,    50,    51,    51,    51,
      52,    53,    53,    54,    54,    55,    56,    56,    57,    57,
      58,    58,    59,    59,    60,    60,    61,    61,    62,    62,
      63,    63,    64,    64,    65,    65,    65,    65,    65,    65,
      66,    66,    67,    67,    67
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     6,
       7,     0,     1,     3,     1,     2,     3,     9,     5,     7,
       2,     1,     1,     5,     5,     5,     3,     3,     1,     1,
       4,     0,     1,     3,     1,     1,     0,     1,     0,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     2,     2,     2,     3,
       3,     4,     1,     1,     1
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
#line 2188 "parser.tab.c"
    break;

  case 3: /* declarations: declarations declaration  */
#line 127 "./src/parser.y"
                               {
        (yyval.node) = new_node("declarations", "declarations", 0);
        (yyval.node)->child[0] = (yyvsp[-1].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2198 "parser.tab.c"
    break;

  case 4: /* declarations: declaration  */
#line 132 "./src/parser.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2206 "parser.tab.c"
    break;

  case 5: /* declarations: error  */
#line 135 "./src/parser.y"
            {}
#line 2212 "parser.tab.c"
    break;

  case 6: /* declaration: function_declaration_statement  */
#line 139 "./src/parser.y"
                                     {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2220 "parser.tab.c"
    break;

  case 7: /* declaration: variable_declaration_statement  */
#line 142 "./src/parser.y"
                                     {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2228 "parser.tab.c"
    break;

  case 8: /* block: '{' statements '}'  */
#line 148 "./src/parser.y"
                         {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2236 "parser.tab.c"
    break;

  case 9: /* statements: statements statement  */
#line 154 "./src/parser.y"
                           {
        (yyval.node) = new_node("statements", "statements", 0);
        (yyval.node)->child[0] = (yyvsp[-1].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2246 "parser.tab.c"
    break;

  case 10: /* statements: statement  */
#line 159 "./src/parser.y"
                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2254 "parser.tab.c"
    break;

  case 11: /* statement: expression_statement  */
#line 165 "./src/parser.y"
                           {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2262 "parser.tab.c"
    break;

  case 12: /* statement: io_statement  */
#line 168 "./src/parser.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2270 "parser.tab.c"
    break;

  case 13: /* statement: return_statement  */
#line 171 "./src/parser.y"
                       {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2278 "parser.tab.c"
    break;

  case 14: /* statement: variable_declaration_statement  */
#line 174 "./src/parser.y"
                                     {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2286 "parser.tab.c"
    break;

  case 15: /* statement: for_statement  */
#line 177 "./src/parser.y"
                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2294 "parser.tab.c"
    break;

  case 16: /* statement: if_else_statement  */
#line 180 "./src/parser.y"
                        {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2302 "parser.tab.c"
    break;

  case 17: /* statement: block  */
#line 183 "./src/parser.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2310 "parser.tab.c"
    break;

  case 18: /* statement: error  */
#line 186 "./src/parser.y"
            {}
#line 2316 "parser.tab.c"
    break;

  case 19: /* function_declaration_statement: SIMPLE_TYPE IDENTIFIER '(' parameters_optative ')' statement  */
#line 190 "./src/parser.y"
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

        (yyval.node) = new_node("function_declaration_statement", "func_declaration", 0);
        (yyval.node)->child[0] = new_node("type", (yyvsp[-5].token).content, 1);
        (yyval.node)->child[1] = new_node("id", (yyvsp[-4].token).content, 1);
        (yyval.node)->child[2] = (yyvsp[-2].node);
        (yyval.node)->child[3] = (yyvsp[0].node);
    }
#line 2340 "parser.tab.c"
    break;

  case 20: /* function_declaration_statement: SIMPLE_TYPE LIST_TYPE IDENTIFIER '(' parameters_optative ')' statement  */
#line 209 "./src/parser.y"
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

        (yyval.node) = new_node("function_declaration_statement", "func_declaration", 0);
        (yyval.node)->child[0] = new_node("type", type, 1);
        (yyval.node)->child[1] = new_node("id", (yyvsp[-4].token).content, 1);
        (yyval.node)->child[2] = (yyvsp[-2].node);
        (yyval.node)->child[3] = (yyvsp[0].node);
    }
#line 2368 "parser.tab.c"
    break;

  case 21: /* parameters_optative: %empty  */
#line 235 "./src/parser.y"
             {
        (yyval.node) = NULL;
    }
#line 2376 "parser.tab.c"
    break;

  case 22: /* parameters_optative: parameters  */
#line 238 "./src/parser.y"
                 {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2384 "parser.tab.c"
    break;

  case 23: /* parameters: parameters ',' parameter  */
#line 244 "./src/parser.y"
                               {
        (yyval.node) = new_node("parameters", "params", 0);
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2394 "parser.tab.c"
    break;

  case 24: /* parameters: parameter  */
#line 249 "./src/parser.y"
                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2402 "parser.tab.c"
    break;

  case 25: /* parameter: SIMPLE_TYPE IDENTIFIER  */
#line 255 "./src/parser.y"
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

        (yyval.node) = new_node("function_parameter", "function_param", 0);
        (yyval.node)->child[0] = new_node("type", (yyvsp[-1].token).content, 1);
        (yyval.node)->child[1] = new_node("id", (yyvsp[0].token).content, 1);
    }
#line 2424 "parser.tab.c"
    break;

  case 26: /* parameter: SIMPLE_TYPE LIST_TYPE IDENTIFIER  */
#line 272 "./src/parser.y"
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

        (yyval.node) = new_node("function_parameter", "function_param", 0);
        (yyval.node)->child[0] = new_node("type", type, 1);
        (yyval.node)->child[1] = new_node("id", (yyvsp[0].token).content, 1);
    }
#line 2450 "parser.tab.c"
    break;

  case 27: /* for_statement: RW_FOR '(' expression_optative ';' or_expression_optative ';' expression_optative ')' statement  */
#line 296 "./src/parser.y"
                                                                                                      {
        (yyval.node) = new_node("for_statement", (yyvsp[-8].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[-6].node);
        (yyval.node)->child[1] = (yyvsp[-4].node);
        (yyval.node)->child[2] = (yyvsp[-2].node);
        (yyval.node)->child[3] = (yyvsp[0].node);
    }
#line 2462 "parser.tab.c"
    break;

  case 28: /* if_else_statement: RW_IF '(' expression ')' statement  */
#line 306 "./src/parser.y"
                                                    {
        (yyval.node) = new_node("if_else_statement", (yyvsp[-4].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2472 "parser.tab.c"
    break;

  case 29: /* if_else_statement: RW_IF '(' expression ')' statement RW_ELSE statement  */
#line 311 "./src/parser.y"
                                                           {
        (yyval.node) = new_node("if_else_statement", (yyvsp[-6].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[-4].node);
        (yyval.node)->child[1] = (yyvsp[-2].node);
        (yyval.node)->child[2] = new_node("else_rw", (yyvsp[-1].token).content, 1);
        (yyval.node)->child[2]->child[0] = (yyvsp[0].node);
    }
#line 2484 "parser.tab.c"
    break;

  case 30: /* expression_statement: expression ';'  */
#line 320 "./src/parser.y"
                     {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2492 "parser.tab.c"
    break;

  case 31: /* io_statement: input_statement  */
#line 326 "./src/parser.y"
                      {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2500 "parser.tab.c"
    break;

  case 32: /* io_statement: output_statement  */
#line 329 "./src/parser.y"
                       {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2508 "parser.tab.c"
    break;

  case 33: /* input_statement: IO_READ '(' IDENTIFIER ')' ';'  */
#line 335 "./src/parser.y"
                                     {
        (yyval.node) = new_node("input_statement", (yyvsp[-4].token).content, 0);
        (yyval.node)->child[0] = new_node("identifier", (yyvsp[-2].token).content, 1);
    }
#line 2517 "parser.tab.c"
    break;

  case 34: /* output_statement: IO_WRITE '(' expression ')' ';'  */
#line 342 "./src/parser.y"
                                      {
        (yyval.node) = new_node("output_statement", (yyvsp[-4].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[-2].node);
    }
#line 2526 "parser.tab.c"
    break;

  case 35: /* output_statement: IO_WRITE '(' LIT_STRING ')' ';'  */
#line 346 "./src/parser.y"
                                      {
        (yyval.node) = new_node("output_statement", (yyvsp[-4].token).content, 0);
        (yyval.node)->child[0] = new_node("string_literal", (yyvsp[-2].token).content, 1);
    }
#line 2535 "parser.tab.c"
    break;

  case 36: /* return_statement: RW_RETURN expression ';'  */
#line 353 "./src/parser.y"
                               {
        (yyval.node) = new_node("return_statement", (yyvsp[-2].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[-1].node);
    }
#line 2544 "parser.tab.c"
    break;

  case 37: /* expression: IDENTIFIER '=' expression  */
#line 360 "./src/parser.y"
                                {
        (yyval.node) = new_node("assignment_expression", "=", 0);
        (yyval.node)->child[0] = new_node("id", (yyvsp[-2].token).content, 1);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2554 "parser.tab.c"
    break;

  case 38: /* expression: or_expression  */
#line 365 "./src/parser.y"
                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2562 "parser.tab.c"
    break;

  case 39: /* expression: function_call_expression  */
#line 368 "./src/parser.y"
                               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2570 "parser.tab.c"
    break;

  case 40: /* function_call_expression: IDENTIFIER '(' function_arguments_optional ')'  */
#line 374 "./src/parser.y"
                                                     {
        (yyval.node) = new_node("function_call_expression", "function_call", 0);
        (yyval.node)->child[0] = new_node("id", (yyvsp[-3].token).content, 1);
        (yyval.node)->child[1] = (yyvsp[-1].node);
    }
#line 2580 "parser.tab.c"
    break;

  case 41: /* function_arguments_optional: %empty  */
#line 382 "./src/parser.y"
             {
        (yyval.node) = NULL;
    }
#line 2588 "parser.tab.c"
    break;

  case 42: /* function_arguments_optional: function_arguments  */
#line 385 "./src/parser.y"
                         {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2596 "parser.tab.c"
    break;

  case 43: /* function_arguments: function_arguments ',' function_argument  */
#line 391 "./src/parser.y"
                                               {
        (yyval.node) = new_node("function_arguments", "function_args", 0);
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2606 "parser.tab.c"
    break;

  case 44: /* function_arguments: function_argument  */
#line 396 "./src/parser.y"
                        {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2614 "parser.tab.c"
    break;

  case 45: /* function_argument: expression  */
#line 402 "./src/parser.y"
                 {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2622 "parser.tab.c"
    break;

  case 46: /* expression_optative: %empty  */
#line 408 "./src/parser.y"
             {
        (yyval.node) = NULL;
    }
#line 2630 "parser.tab.c"
    break;

  case 47: /* expression_optative: expression  */
#line 411 "./src/parser.y"
                 {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2638 "parser.tab.c"
    break;

  case 48: /* or_expression_optative: %empty  */
#line 417 "./src/parser.y"
             {
        (yyval.node) = NULL;
    }
#line 2646 "parser.tab.c"
    break;

  case 49: /* or_expression_optative: or_expression  */
#line 420 "./src/parser.y"
                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2654 "parser.tab.c"
    break;

  case 50: /* or_expression: or_expression LOGICAL_OP_OR and_expression  */
#line 426 "./src/parser.y"
                                                 {
        (yyval.node) = new_node("or_expression", (yyvsp[-1].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2664 "parser.tab.c"
    break;

  case 51: /* or_expression: and_expression  */
#line 431 "./src/parser.y"
                     {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2672 "parser.tab.c"
    break;

  case 52: /* and_expression: and_expression LOGICAL_OP_AND equality_expression  */
#line 437 "./src/parser.y"
                                                        {
        (yyval.node) = new_node("and_expression", (yyvsp[-1].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2682 "parser.tab.c"
    break;

  case 53: /* and_expression: equality_expression  */
#line 442 "./src/parser.y"
                          {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2690 "parser.tab.c"
    break;

  case 54: /* equality_expression: equality_expression EQUALITY_OP relational_expression  */
#line 448 "./src/parser.y"
                                                            {
        (yyval.node) = new_node("equality_expression", (yyvsp[-1].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2700 "parser.tab.c"
    break;

  case 55: /* equality_expression: relational_expression  */
#line 453 "./src/parser.y"
                            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2708 "parser.tab.c"
    break;

  case 56: /* relational_expression: relational_expression RELATIONAL_OP list_expression  */
#line 459 "./src/parser.y"
                                                          {
        (yyval.node) = new_node("relational_expression", (yyvsp[-1].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2718 "parser.tab.c"
    break;

  case 57: /* relational_expression: list_expression  */
#line 464 "./src/parser.y"
                      {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2726 "parser.tab.c"
    break;

  case 58: /* list_expression: list_expression BINARY_LIST_OP addition_expression  */
#line 470 "./src/parser.y"
                                                         {
        (yyval.node) = new_node("list_expression", (yyvsp[-1].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2736 "parser.tab.c"
    break;

  case 59: /* list_expression: addition_expression  */
#line 475 "./src/parser.y"
                          {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2744 "parser.tab.c"
    break;

  case 60: /* addition_expression: addition_expression ARITMETIC_OP_ADDITIVE multiplication_expression  */
#line 481 "./src/parser.y"
                                                                          {
        (yyval.node) = new_node("addition_expression", (yyvsp[-1].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2754 "parser.tab.c"
    break;

  case 61: /* addition_expression: multiplication_expression  */
#line 486 "./src/parser.y"
                                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2762 "parser.tab.c"
    break;

  case 62: /* multiplication_expression: multiplication_expression ARITMETIC_OP_MULTIPLICATIVE simple_value  */
#line 492 "./src/parser.y"
                                                                         {
        (yyval.node) = new_node("multiplication_expression", (yyvsp[-1].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2772 "parser.tab.c"
    break;

  case 63: /* multiplication_expression: simple_value  */
#line 497 "./src/parser.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2780 "parser.tab.c"
    break;

  case 64: /* simple_value: constant  */
#line 503 "./src/parser.y"
               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2788 "parser.tab.c"
    break;

  case 65: /* simple_value: IDENTIFIER  */
#line 506 "./src/parser.y"
                 {
        (yyval.node) = new_node("id", (yyvsp[0].token).content, 1);
    }
#line 2796 "parser.tab.c"
    break;

  case 66: /* simple_value: ARITMETIC_OP_ADDITIVE simple_value  */
#line 509 "./src/parser.y"
                                         {
        (yyval.node) = new_node("simple_value_signed", (yyvsp[-1].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[0].node);
    }
#line 2805 "parser.tab.c"
    break;

  case 67: /* simple_value: '!' simple_value  */
#line 513 "./src/parser.y"
                       {
        (yyval.node) = new_node("simple_value_exclamation", "!", 0);
        (yyval.node)->child[0] = (yyvsp[0].node);
    }
#line 2814 "parser.tab.c"
    break;

  case 68: /* simple_value: UNARY_LIST_OP simple_value  */
#line 517 "./src/parser.y"
                                 {
        (yyval.node) = new_node("simple_value_unary", (yyvsp[-1].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[0].node);
    }
#line 2823 "parser.tab.c"
    break;

  case 69: /* simple_value: '(' expression ')'  */
#line 521 "./src/parser.y"
                         {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2831 "parser.tab.c"
    break;

  case 70: /* variable_declaration_statement: SIMPLE_TYPE IDENTIFIER ';'  */
#line 527 "./src/parser.y"
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

        (yyval.node) = new_node("variable_declaration", "var_declaration", 0);
        (yyval.node)->child[0] = new_node("type", (yyvsp[-2].token).content, 1);
        (yyval.node)->child[1] = new_node("id", (yyvsp[-1].token).content, 1);

    }
#line 2854 "parser.tab.c"
    break;

  case 71: /* variable_declaration_statement: SIMPLE_TYPE LIST_TYPE IDENTIFIER ';'  */
#line 545 "./src/parser.y"
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
#line 2880 "parser.tab.c"
    break;

  case 72: /* constant: C_INTEGER  */
#line 569 "./src/parser.y"
                {
        (yyval.node) = new_node("const", (yyvsp[0].token).content, 1);
    }
#line 2888 "parser.tab.c"
    break;

  case 73: /* constant: C_FLOAT  */
#line 572 "./src/parser.y"
              {
        (yyval.node) = new_node("const", (yyvsp[0].token).content, 1);
    }
#line 2896 "parser.tab.c"
    break;

  case 74: /* constant: C_NIL  */
#line 575 "./src/parser.y"
            {
        (yyval.node) = new_node("const", (yyvsp[0].token).content, 1);
    }
#line 2904 "parser.tab.c"
    break;


#line 2908 "parser.tab.c"

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

#line 580 "./src/parser.y"


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
