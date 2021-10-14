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
  YYSYMBOL_expression_optative = 57,       /* expression_optative  */
  YYSYMBOL_or_expression_optative = 58,    /* or_expression_optative  */
  YYSYMBOL_or_expression = 59,             /* or_expression  */
  YYSYMBOL_and_expression = 60,            /* and_expression  */
  YYSYMBOL_equality_expression = 61,       /* equality_expression  */
  YYSYMBOL_relational_expression = 62,     /* relational_expression  */
  YYSYMBOL_list_expression = 63,           /* list_expression  */
  YYSYMBOL_addition_expression = 64,       /* addition_expression  */
  YYSYMBOL_multiplication_expression = 65, /* multiplication_expression  */
  YYSYMBOL_simple_value = 66,              /* simple_value  */
  YYSYMBOL_variable_declaration_statement = 67, /* variable_declaration_statement  */
  YYSYMBOL_constant = 68                   /* constant  */
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
#define YYLAST   3187

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  381

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
       0,   129,   129,   135,   140,   143,   147,   150,   156,   162,
     167,   173,   176,   179,   182,   185,   188,   191,   194,   198,
     198,   231,   231,   274,   277,   283,   288,   294,   313,   339,
     349,   354,   363,   369,   372,   378,   392,   399,   409,   427,
     443,   449,   472,   475,   481,   486,   494,   497,   503,   506,
     512,   525,   531,   544,   550,   563,   569,   582,   588,   597,
     603,   616,   622,   635,   641,   644,   650,   657,   664,   671,
     674,   680,   704,   734,   737,   740
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
  "function_arguments", "expression_optative", "or_expression_optative",
  "or_expression", "and_expression", "equality_expression",
  "relational_expression", "list_expression", "addition_expression",
  "multiplication_expression", "simple_value",
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

#define YYTABLE_NINF (-76)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       6,     8,    34,    61,    12,   105,   227,   246,    69,   100,
    -293,   267,   160,     3,   284,     4,   285,    25,    25,    49,
      59,    67,    81,    63,    99,   175,  2524,   119,  2524,   311,
     305,   362,   424,  1074,   326,  1308,   127,   848,   137,   152,
     162,  1044,  2550,  1068,  1044,  1044,   317,   336,   396,   421,
     462,   467,   483,   495,   498,   140,  1360,    32,   145,   543,
     608,   627,   209,  2810,  2819,   529,  2828,   451,   563,   192,
     182,    13,   848,   195,   184,  1068,   208,   255,  1000,  2837,
    1848,  1874,   210,  2846,  2855,   667,  1044,  1044,  1044,  1044,
    1044,  1044,  1044,   218,   465,   212,   492,   221,   226,   234,
     668,   244,   247,   249,   252,   697,  1900,  2864,   232,   750,
     655,  1475,  1503,  2873,  2882,  2891,  1156,   273,  2576,   260,
     263,   265,   558,   281,   747,    53,   784,   786,   787,   440,
    2524,   324,   827,  2524,   831,  1926,   508,   286,   848,   328,
     331,   334,  2550,  1952,  1978,  2004,  2030,  2056,  2082,  2108,
    2134,   350,  2160,  1287,  2907,  2923,   480,  1248,  1068,  1248,
    1248,  2939,    52,    10,    38,   556,   893,  3115,  2955,  2971,
    2987,   504,  1029,  2625,    70,  1258,  1068,  1258,  1258,  2641,
      14,   339,  3141,   279,  1141,   850,  2657,  2673,  2689,    64,
     589,   355,   848,   361,   367,   377,  2550,    72,   104,   109,
     114,   129,   132,   141,   143,   376,   158,   363,   393,   402,
     195,   414,  1068,   437,   656,  2186,  2212,    13,  1068,   299,
    3003,   412,  3019,  3035,  1248,  1248,  1248,  1248,  1248,  1248,
    1248,    13,  1156,  2609,  2705,   427,  2721,  2737,  1258,  1258,
    1258,  1258,  1258,  1258,  1258,   450,   445,   195,   454,  1068,
     535,   690,  2238,   177,   466,  2264,   469,  2290,   517,   527,
     537,   554,  2316,   562,   580,  3051,   172,   130,   965,  1335,
    3145,  3067,  3083,   588,   578,  2753,   497,  3156,  1180,  3126,
    3130,  2769,  2785,   541,   179,   594,   206,   600,   622,   623,
     624,   216,  2342,   273,  2602,   626,   640,   641,  3099,  2801,
     243,   273,  2576,   643,   654,   657,   665,   542,   603,   530,
     848,   659,   669,   670,  2550,   615,   749,   881,   952,  1396,
    1424,  1453,  1482,  1510,   678,  1536,  2368,  2394,  2420,   679,
     359,   410,   419,   429,   440,   638,   691,   195,   694,  1068,
     682,   820,  2446,  2550,  1562,   440,  2576,   671,   704,  1588,
     717,  1614,   692,   720,   721,   730,  1640,  2472,   734,   463,
    2550,  1666,   273,  2602,   742,   748,   759,  2576,  2498,   767,
    1692,  1718,  1744,  1770,   471,   440,  2602,   736,  1796,  2602,
    1822
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
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -293,  -293,  -293,   800,     1,  -140,    -5,  -293,  -293,  -293,
     788,  -293,   778,    19,    37,    48,    55,   112,   118,   136,
     -23,   494,  -180,  -293,  -123,  -292,  1078,  1143,  1009,   966,
     773,   905,   701,   364,     0,   571
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,   143,    80,    81,     6,    17,    18,
      20,    21,    22,   144,   145,   146,   147,   148,   149,   150,
     151,    56,    95,    96,    99,   123,    57,    58,    59,    60,
      61,    62,    63,    64,   152,    66
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,   306,   215,    55,     7,    55,   131,     1,    -5,   329,
     -19,   -21,    -2,     2,    74,    -5,   171,   172,   173,     2,
      82,    47,   174,    68,   -19,   -21,    65,    46,    65,    46,
     175,   -51,    19,   176,   -42,   -40,   -40,   263,   177,   178,
     -51,   225,     8,     9,   238,    48,   -23,    48,    94,    97,
      98,   273,   101,   -30,   104,   -40,   252,    24,    25,   -53,
     -30,    10,    86,    49,   -18,    49,   130,   226,   -53,   -53,
     369,   -18,   -17,   -40,    50,   106,    50,   -18,    12,   -17,
      26,    51,   224,    51,    28,   -17,   -65,   256,   -24,    27,
     231,   -65,   -65,   122,   232,   205,   -65,   -65,   -65,   -65,
     -65,   -65,   -26,   -26,   -15,    -4,   207,    55,    29,   -16,
      55,   -15,    -4,   125,   -11,   211,   -16,   -15,   206,   197,
      13,   -11,   -16,    14,   285,   132,    19,   -11,   134,   -12,
      65,    46,   -33,    65,    46,   221,   -12,   198,    52,   -33,
      52,   -34,   -12,   -13,    53,   -33,    53,    73,   -34,    48,
     -13,   -52,    48,   235,   -34,   199,   -13,    75,   -14,   226,
     -52,   -52,    54,    85,    54,   -14,   200,    49,   -51,   248,
      49,   -14,    76,   201,   342,   -51,    87,   -32,    50,   -71,
      15,    50,    77,    16,   -32,    51,   -71,    98,    51,   258,
     -32,   261,   -71,   -50,    94,   264,   -27,   -27,    31,    32,
      33,    93,   -50,   225,    35,    14,   -38,   100,    94,   274,
     106,   347,    41,   -38,   350,    43,    -8,   102,   -46,   -38,
      44,    45,   358,    -8,    98,    90,   287,    -6,   290,    -8,
     202,   107,   -59,   115,    -6,    91,   203,   -59,   -59,   -59,
     -59,    16,    52,   -72,   -39,    52,    -7,   106,    53,   -47,
     -72,    53,   377,    -7,   204,   -50,   -72,   117,   153,   154,
     155,   103,   -50,    87,   156,   118,    54,    -3,   119,    54,
     120,   324,   157,   121,    -3,   158,    31,    32,    33,   205,
     159,   160,    78,   126,   -71,   -72,   127,   338,   128,   316,
      41,   -71,   -72,    43,   325,   315,   -48,   330,    44,    45,
     -55,   -55,   206,   197,   129,   -18,   210,   241,   -55,   -55,
     -55,   207,   -18,   317,    98,   -65,   352,   -17,   355,   217,
     -65,   198,   207,   205,   -17,   -65,   -65,   -65,   -65,   -65,
     -65,   318,   -28,   -28,    69,    70,   -20,   106,   357,   199,
     324,   359,   319,   -20,   205,   133,   206,   197,   212,   320,
     200,   213,   207,   324,   214,   368,   324,   201,   370,   -30,
     -51,   -51,   374,   325,   315,   198,   -30,   206,   197,   -51,
     239,   378,   346,   216,   380,   247,   325,   315,   -73,   325,
     315,   249,   317,   199,   -47,   -73,   198,   250,   -73,   -73,
     -73,   -73,   -73,   -73,   200,   317,   -15,   251,   317,   253,
     318,   201,   254,   -15,   199,    79,   321,   169,    83,    84,
     -35,   319,   322,   318,   202,   200,   318,   -35,   320,   -37,
     203,   -16,   201,   -35,   319,   255,   -37,   319,   -16,   -36,
     323,   320,   -37,   265,   320,   187,   -36,   257,   204,   169,
     -74,   169,   -36,   153,   154,   155,   259,   -74,   275,   156,
     -74,   -74,   -74,   -74,   -74,   -74,   114,   157,   202,   283,
     158,   -46,   -11,   -31,   203,   159,   160,   -12,   284,   -11,
     -31,   -29,   -25,   -25,   -12,   321,   -31,   286,   -29,   202,
     187,   322,   204,   -33,   -29,   203,   -45,   -45,   321,   292,
     -33,   321,   293,   169,   322,   -34,   -65,   322,   -13,   323,
     217,   -65,   -34,   204,   218,   -13,   -65,   -65,   -65,   -65,
     -65,   -65,   323,   -43,   116,   323,   208,   209,   -50,   -50,
     -73,   220,   169,   222,   223,   -73,   -73,   -50,   239,   -14,
     -73,   -73,   -73,   -73,   -73,   -73,   -14,   161,   294,   234,
     169,   236,   237,   -18,   288,   -18,   -18,   -18,   295,   -18,
     337,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   296,   -18,
     -18,   -18,   -18,   -22,   300,   179,   -53,   -18,   -18,   161,
     -22,   161,    88,   -53,   -53,   297,   169,   -55,   169,   -44,
     -44,   187,   169,   298,   227,   -55,   -55,   -55,   169,   169,
     169,   169,   169,   169,   272,   187,   187,   245,   246,   -39,
     -39,   -39,   187,   187,   187,   187,   187,   187,   282,   299,
     179,   335,   336,   169,   170,   169,   -17,   301,   -17,   -17,
     -17,   302,   -17,   161,   -17,   -17,   -17,   -17,   -17,   -17,
     -17,   -55,   -17,   -17,   -17,   -17,    89,   -55,   -55,   -55,
     -17,   -17,   188,   303,   304,   305,   170,   348,   170,   326,
     -57,   161,   161,   161,   161,   -57,   -57,   -57,   -57,   153,
     154,   155,   260,   327,   328,   156,   331,   -32,   -38,   179,
     161,   179,   179,   157,   -32,   -38,   158,   332,   -54,   339,
     333,   159,   160,    89,   -54,   -54,   -54,   188,   334,   340,
     341,   353,   360,   153,   154,   155,   289,    -8,   169,   156,
     170,   344,   345,   169,    -8,   169,   161,   157,   161,   169,
     158,   179,   161,   363,   349,   159,   160,   351,   161,   161,
     161,   161,   161,   161,   161,   179,   179,   361,   170,   170,
     170,   170,   179,   179,   179,   179,   179,   179,   179,   169,
     362,   364,   365,   161,   168,   161,   188,   170,   188,   188,
     -30,   366,   -30,   -30,   -30,   367,   -30,   379,   -30,   -30,
     -30,   -30,   343,   -30,   -30,   371,   -30,   -30,   -30,   -30,
     -49,   372,   186,   -52,   -30,   -30,   168,    86,   168,    88,
     -52,   -52,   373,   170,   -35,   170,   -37,   -36,   188,   170,
     375,   -35,   113,   -37,   -36,   170,   170,   170,   170,   170,
     170,   170,   188,   188,    11,    67,    23,     0,     0,   188,
     188,   188,   188,   188,   188,   188,   166,   186,     0,     0,
     170,     0,   170,   153,   154,   155,   354,   -31,   161,   156,
     168,   -29,     0,   161,   -31,   161,     0,   157,   -29,   161,
     158,     0,     0,     0,   184,   159,   160,     0,   166,     0,
     166,    31,    32,    33,     0,     0,     0,    35,     0,   168,
       0,     0,   111,   112,     0,    41,   242,     0,    43,   161,
       0,   -59,   -59,    44,    45,     0,   243,   168,   -59,   -59,
     -59,   -59,   -15,     0,   -15,   -15,   -15,     0,   -15,   184,
     -15,   -15,   -15,   -15,   -15,   -15,   -15,     0,   -15,   -15,
     -15,   -15,   166,     0,     0,   170,   -15,   -15,     0,     0,
     170,     0,   170,   168,   -57,   168,   170,     0,   186,   168,
       0,   -57,   -57,   -57,   -57,   168,   168,   168,   168,   168,
     271,   166,   186,   186,     0,     0,     0,     0,     0,   186,
     186,   186,   186,   186,   281,     0,   170,     0,   167,   166,
     168,     0,   168,   -16,     0,   -16,   -16,   -16,     0,   -16,
       0,   -16,   -16,   -16,   -16,   -16,   -16,   -16,     0,   -16,
     -16,   -16,   -16,     0,     0,     0,   185,   -16,   -16,     0,
     167,     0,   167,     0,     0,   166,   -54,   166,     0,     0,
     184,   166,     0,   227,   -54,   -54,   -54,   166,   166,   166,
     269,   270,     0,     0,   184,   184,     0,     0,     0,   165,
       0,   184,   184,   184,   279,   280,   -65,     0,     0,     0,
      71,   185,   166,   -65,   166,     0,   -65,   -65,   -65,   -65,
     -65,   -65,     0,     0,   167,   168,     0,   183,     0,     0,
     168,   165,   168,   165,     0,   -74,   168,    31,    32,    33,
     -74,   -74,   164,    78,   110,   -74,   -74,   -74,   -74,   -74,
     -74,    41,     0,   167,    43,     0,     0,     0,     0,    44,
      45,   153,   154,   155,     0,     0,   168,   156,     0,     0,
     182,   167,   183,     0,   164,   157,   164,     0,   158,     0,
     -75,     0,     0,   159,   160,   165,   109,   -75,     0,     0,
     -75,   -75,   -75,   -75,   -75,   -75,     0,   166,     0,     0,
       0,     0,   166,     0,   166,     0,     0,   167,   166,   167,
       0,   162,   185,   167,   165,   182,     0,     0,     0,   167,
     167,   167,   167,   167,     0,     0,   185,   185,   164,     0,
       0,     0,   165,   185,   185,   185,   185,   185,   166,   180,
       0,     0,     0,   162,   167,   162,   167,     0,     0,   171,
     172,   173,   -57,   -57,     0,   174,     0,   164,     0,   -57,
     -57,   -57,   -57,   175,     0,     0,   176,     0,   165,     0,
     165,   177,   178,   183,   165,   164,   163,     0,     0,     0,
     165,   165,   268,     0,   180,   124,     0,   183,   183,     0,
       0,   -54,   -54,     0,   183,   183,   278,   162,   241,   -54,
     -54,   -54,     0,     0,   181,   165,     0,   165,   163,     0,
     163,   164,     0,   164,     0,     0,   182,   164,     0,   108,
       0,     0,     0,   164,   267,     0,   162,     0,     0,   167,
     182,   182,     0,     0,   167,     0,   167,   182,   277,     0,
     167,   153,   154,   155,   162,     0,     0,   219,   164,   181,
     164,   171,   172,   173,     0,   157,     0,   233,   158,     0,
       0,     0,   163,   159,   160,   175,     0,     0,   176,     0,
     167,     0,     0,   177,   178,     0,     0,     0,     0,     0,
     162,     0,   162,     0,     0,   180,   162,     0,     0,     0,
     165,   163,     0,   -73,     0,   165,     0,   165,   -73,   180,
     180,   165,     0,   -73,   -73,   -73,   -73,   -73,   -73,   163,
       0,     0,     0,     0,   -65,     0,     0,   162,    71,   162,
       0,   -65,    72,     0,   -65,   -65,   -65,   -65,   -65,   -65,
       0,   165,     0,   164,     0,     0,     0,     0,   164,     0,
     164,     0,     0,     0,   164,   163,   -56,   163,     0,     0,
     181,   163,     0,   -56,   -56,   -56,   -56,   266,     0,     0,
       0,   124,     0,     0,   181,   181,   -70,     0,     0,   124,
       0,   276,     0,   -70,   164,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   163,     0,   163,     0,     0,   -11,     0,   -11,
     -11,   -11,     0,   -11,     0,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   162,   -11,   -11,   -11,   -11,   162,     0,   162,
       0,   -11,   -11,   162,     0,   -12,     0,   -12,   -12,   -12,
       0,   -12,     0,   -12,   -12,   -12,   -12,   -12,   -12,   -12,
     124,   -12,   -12,   -12,   -12,     0,     0,     0,     0,   -12,
     -12,     0,     0,   162,   -33,     0,   -33,   -33,   -33,     0,
     -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,
     -33,   -33,   -33,   -33,     0,     0,     0,   163,   -33,   -33,
       0,     0,   163,   -34,   163,   -34,   -34,   -34,   163,   -34,
       0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -56,   -34,
     -34,   -34,   -34,   -56,   -56,   -56,   -56,   -34,   -34,     0,
       0,   -13,     0,   -13,   -13,   -13,     0,   -13,   163,   -13,
     -13,   -13,   -13,   -13,   -13,   -13,   -58,   -13,   -13,   -13,
     -13,   -58,   -58,   -58,   -58,   -13,   -13,   -14,     0,   -14,
     -14,   -14,     0,   -14,     0,   -14,   -14,   -14,   -14,   -14,
     -14,   -14,     0,   -14,   -14,   -14,   -14,     0,     0,     0,
       0,   -14,   -14,   -32,     0,   -32,   -32,   -32,     0,   -32,
       0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,
     -32,   -32,   -32,     0,     0,     0,     0,   -32,   -32,   -71,
       0,   -71,   -71,   -71,     0,   -71,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,     0,
       0,     0,     0,   -71,   -71,   -38,     0,   -38,   -38,   -38,
       0,   -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
       0,   -38,   -38,   -38,   -38,     0,     0,     0,     0,   -38,
     -38,    -8,     0,    -8,    -8,    -8,     0,    -8,     0,    -8,
      -8,    -8,    -8,    -8,    -8,    -8,     0,    -8,    -8,    -8,
      -8,     0,     0,     0,     0,    -8,    -8,   -72,     0,   -72,
     -72,   -72,     0,   -72,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,   -72,   -72,   -72,   -72,     0,     0,     0,
       0,   -72,   -72,   -30,     0,   -30,   -30,   -30,     0,   -30,
       0,   -30,   -30,   -30,   -30,   376,   -30,   -30,     0,   -30,
     -30,   -30,   -30,     0,     0,     0,     0,   -30,   -30,   -35,
       0,   -35,   -35,   -35,     0,   -35,     0,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,     0,
       0,     0,     0,   -35,   -35,   -37,     0,   -37,   -37,   -37,
       0,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
       0,   -37,   -37,   -37,   -37,     0,     0,     0,     0,   -37,
     -37,   -36,     0,   -36,   -36,   -36,     0,   -36,     0,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,
     -36,     0,     0,     0,     0,   -36,   -36,   -31,     0,   -31,
     -31,   -31,     0,   -31,     0,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,     0,   -31,   -31,   -31,   -31,     0,     0,     0,
       0,   -31,   -31,   -29,     0,   -29,   -29,   -29,     0,   -29,
       0,   -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,
     -29,   -29,   -29,     0,     0,     0,     0,   -29,   -29,   135,
       0,    31,    32,    33,     0,   136,     0,    35,   137,   138,
     139,     0,   140,   141,     0,    41,   142,   105,    43,     0,
       0,     0,     0,    44,    45,   -10,     0,   -10,   -10,   -10,
       0,   -10,     0,   -10,   -10,   -10,   -10,     0,   -10,   -10,
       0,   -10,   -10,   -10,   -10,     0,     0,     0,     0,   -10,
     -10,    -9,     0,    -9,    -9,    -9,     0,    -9,     0,    -9,
      -9,    -9,    -9,     0,    -9,    -9,     0,    -9,    -9,    -9,
      -9,     0,     0,     0,     0,    -9,    -9,   -18,     0,   -18,
     -18,   -18,     0,   -18,     0,   -18,   -18,   -18,   -18,     0,
     -18,   -18,     0,   -18,   -18,   -18,   -18,     0,     0,     0,
       0,   -18,   -18,   -17,     0,   -17,   -17,   -17,     0,   -17,
       0,   -17,   -17,   -17,   -17,     0,   -17,   -17,     0,   -17,
     -17,   -17,   -17,     0,     0,     0,     0,   -17,   -17,   -15,
       0,   -15,   -15,   -15,     0,   -15,     0,   -15,   -15,   -15,
     -15,     0,   -15,   -15,     0,   -15,   -15,   -15,   -15,     0,
       0,     0,     0,   -15,   -15,   -16,     0,   -16,   -16,   -16,
       0,   -16,     0,   -16,   -16,   -16,   -16,     0,   -16,   -16,
       0,   -16,   -16,   -16,   -16,     0,     0,     0,     0,   -16,
     -16,   -11,     0,   -11,   -11,   -11,     0,   -11,     0,   -11,
     -11,   -11,   -11,     0,   -11,   -11,     0,   -11,   -11,   -11,
     -11,     0,     0,     0,     0,   -11,   -11,   -12,     0,   -12,
     -12,   -12,     0,   -12,     0,   -12,   -12,   -12,   -12,     0,
     -12,   -12,     0,   -12,   -12,   -12,   -12,     0,     0,     0,
       0,   -12,   -12,   -33,     0,   -33,   -33,   -33,     0,   -33,
       0,   -33,   -33,   -33,   -33,     0,   -33,   -33,     0,   -33,
     -33,   -33,   -33,     0,     0,     0,     0,   -33,   -33,   -34,
       0,   -34,   -34,   -34,     0,   -34,     0,   -34,   -34,   -34,
     -34,     0,   -34,   -34,     0,   -34,   -34,   -34,   -34,     0,
       0,     0,     0,   -34,   -34,   -13,     0,   -13,   -13,   -13,
       0,   -13,     0,   -13,   -13,   -13,   -13,     0,   -13,   -13,
       0,   -13,   -13,   -13,   -13,     0,     0,     0,     0,   -13,
     -13,   -14,     0,   -14,   -14,   -14,     0,   -14,     0,   -14,
     -14,   -14,   -14,     0,   -14,   -14,     0,   -14,   -14,   -14,
     -14,     0,     0,     0,     0,   -14,   -14,   135,     0,    31,
      32,    33,     0,   136,     0,    35,   137,   138,   139,     0,
     140,   141,     0,    41,   142,   262,    43,     0,     0,     0,
       0,    44,    45,   -32,     0,   -32,   -32,   -32,     0,   -32,
       0,   -32,   -32,   -32,   -32,     0,   -32,   -32,     0,   -32,
     -32,   -32,   -32,     0,     0,     0,     0,   -32,   -32,   135,
       0,    31,    32,    33,     0,   136,     0,    35,   137,   138,
     139,     0,   140,   141,     0,    41,   142,   291,    43,     0,
       0,     0,     0,    44,    45,   -71,     0,   -71,   -71,   -71,
       0,   -71,     0,   -71,   -71,   -71,   -71,     0,   -71,   -71,
       0,   -71,   -71,   -71,   -71,     0,     0,     0,     0,   -71,
     -71,   -38,     0,   -38,   -38,   -38,     0,   -38,     0,   -38,
     -38,   -38,   -38,     0,   -38,   -38,     0,   -38,   -38,   -38,
     -38,     0,     0,     0,     0,   -38,   -38,    -8,     0,    -8,
      -8,    -8,     0,    -8,     0,    -8,    -8,    -8,    -8,     0,
      -8,    -8,     0,    -8,    -8,    -8,    -8,     0,     0,     0,
       0,    -8,    -8,   -72,     0,   -72,   -72,   -72,     0,   -72,
       0,   -72,   -72,   -72,   -72,     0,   -72,   -72,     0,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,   -72,   -72,   -35,
       0,   -35,   -35,   -35,     0,   -35,     0,   -35,   -35,   -35,
     -35,     0,   -35,   -35,     0,   -35,   -35,   -35,   -35,     0,
       0,     0,     0,   -35,   -35,   -37,     0,   -37,   -37,   -37,
       0,   -37,     0,   -37,   -37,   -37,   -37,     0,   -37,   -37,
       0,   -37,   -37,   -37,   -37,     0,     0,     0,     0,   -37,
     -37,   -36,     0,   -36,   -36,   -36,     0,   -36,     0,   -36,
     -36,   -36,   -36,     0,   -36,   -36,     0,   -36,   -36,   -36,
     -36,     0,     0,     0,     0,   -36,   -36,   135,     0,    31,
      32,    33,     0,   136,     0,    35,   137,   138,   139,     0,
     140,   141,     0,    41,   142,   356,    43,     0,     0,     0,
       0,    44,    45,   -31,     0,   -31,   -31,   -31,     0,   -31,
       0,   -31,   -31,   -31,   -31,     0,   -31,   -31,     0,   -31,
     -31,   -31,   -31,     0,     0,     0,     0,   -31,   -31,   -29,
       0,   -29,   -29,   -29,     0,   -29,     0,   -29,   -29,   -29,
     -29,     0,   -29,   -29,     0,   -29,   -29,   -29,   -29,     0,
       0,     0,     0,   -29,   -29,    30,     0,    31,    32,    33,
       0,    34,     0,    35,    36,    37,    38,     0,    39,    40,
       0,    41,    42,     0,    43,     0,     0,     0,     0,    44,
      45,   135,     0,    31,    32,    33,     0,   136,     0,    35,
     137,   138,   139,     0,   140,   141,     0,    41,   142,     0,
      43,     0,     0,     0,     0,    44,    45,   189,     0,    31,
      32,    33,     0,   190,     0,    35,   191,   192,   193,     0,
     194,   195,     0,    41,   196,     0,    43,     0,     0,     0,
       0,    44,    45,   307,     0,    31,    32,    33,     0,   308,
       0,    35,   309,   310,   311,     0,   312,   313,     0,    41,
     314,     0,    43,     0,     0,   -65,     0,    44,    45,   231,
     -65,   -65,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,
     -65,   -75,     0,     0,     0,     0,   -75,   -75,     0,     0,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -70,     0,     0,
       0,     0,   -70,   -70,     0,     0,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -61,     0,     0,     0,     0,   -61,   -61,
       0,     0,     0,   -61,   244,   -61,   -61,   -61,   -61,   -63,
       0,     0,     0,     0,   -63,   -63,     0,     0,     0,   -63,
     -63,   -63,   -63,   -63,   -63,   -64,     0,     0,     0,     0,
     -64,   -64,     0,     0,     0,   -64,   -64,   -64,   -64,   -64,
     -64,   -68,     0,     0,     0,     0,   -68,   -68,     0,     0,
       0,   -68,   -68,   -68,   -68,   -68,   -68,   -67,     0,     0,
       0,     0,   -67,   -67,     0,     0,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -66,     0,     0,     0,     0,   -66,   -66,
       0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -69,
       0,     0,     0,     0,   -69,   -69,     0,     0,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -60,     0,     0,     0,     0,
     -60,   -60,     0,     0,     0,   -60,   244,   -60,   -60,   -60,
     -60,   -62,     0,     0,     0,     0,   -62,   -62,     0,     0,
       0,   -62,   -62,   -62,   -62,   -62,   -62,   -41,     0,     0,
       0,     0,   -41,   -41,     0,     0,   -61,   -41,   -41,   -41,
     -41,   -41,   -41,   -61,     0,   -63,   -61,    92,   -61,   -61,
     -61,   -61,   -63,     0,   -64,   -63,   -63,   -63,   -63,   -63,
     -63,   -64,     0,   -68,   -64,   -64,   -64,   -64,   -64,   -64,
     -68,     0,   -67,   -68,   -68,   -68,   -68,   -68,   -68,   -67,
       0,   -66,   -67,   -67,   -67,   -67,   -67,   -67,   -66,     0,
     -69,   -66,   -66,   -66,   -66,   -66,   -66,   -69,     0,   -60,
     -69,   -69,   -69,   -69,   -69,   -69,   -60,     0,   -62,   -60,
      92,   -60,   -60,   -60,   -60,   -62,     0,   -41,   -62,   -62,
     -62,   -62,   -62,   -62,   -41,     0,     0,   -41,   -41,   -41,
     -41,   -41,   -41,   -74,     0,     0,     0,     0,   -74,     0,
       0,     0,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -75,
       0,     0,     0,     0,   -75,     0,     0,     0,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -70,     0,     0,     0,     0,
     -70,     0,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -61,     0,     0,     0,     0,   -61,     0,     0,     0,
       0,   -61,   230,   -61,   -61,   -61,   -61,   -63,     0,     0,
       0,     0,   -63,     0,     0,     0,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -64,     0,     0,     0,     0,   -64,     0,
       0,     0,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -68,
       0,     0,     0,     0,   -68,     0,     0,     0,     0,   -68,
     -68,   -68,   -68,   -68,   -68,   -67,     0,     0,     0,     0,
     -67,     0,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -66,     0,     0,     0,     0,   -66,     0,     0,     0,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -69,     0,     0,
       0,     0,   -69,     0,     0,     0,     0,   -69,   -69,   -69,
     -69,   -69,   -69,   -60,     0,     0,     0,     0,   -60,     0,
       0,     0,     0,   -60,   230,   -60,   -60,   -60,   -60,   -62,
       0,     0,     0,     0,   -62,     0,     0,     0,     0,   -62,
     -62,   -62,   -62,   -62,   -62,   -41,     0,     0,     0,     0,
     -41,     0,     0,     0,     0,   -41,   -41,   -41,   -41,   -41,
     -41,   228,     0,     0,     0,     0,   -59,     0,     0,     0,
       0,   229,     0,   -59,   -59,   -59,   -59,   -56,   -56,     0,
       0,   -58,   -58,     0,   -56,   -56,   -56,   -56,   -58,   -58,
     -58,   -58,   -53,   -53,     0,     0,   -58,     0,     0,     0,
     240,   -53,   -53,   -58,   -58,   -58,   -58,   -52,   -52,     0,
       0,     0,     0,     0,     0,   240,   -52,   -52
};

static const yytype_int16 yycheck[] =
{
       0,   293,   142,    26,     4,    28,   129,     1,     0,   301,
       7,     7,     0,     7,    37,     7,     3,     4,     5,     7,
      43,    26,     9,    28,    21,    21,    26,    26,    28,    28,
      17,    21,     7,    20,    21,    21,    22,   217,    25,    26,
      30,    31,     8,     9,    30,    26,    21,    28,    71,    72,
      73,   231,    75,     0,    77,    23,   196,     8,     9,    21,
       7,     0,    30,    26,     0,    28,    13,    29,    30,    31,
     362,     7,     0,    21,    26,    80,    28,    13,     9,     7,
      21,    26,    30,    28,    21,    13,    16,   210,    21,    22,
      20,    21,    22,   116,    24,   118,    26,    27,    28,    29,
      30,    31,    21,    22,     0,     0,   129,   130,     9,     0,
     133,     7,     7,   118,     0,   138,     7,    13,   118,   118,
      20,     7,    13,    23,   247,   130,     7,    13,   133,     0,
     130,   130,     0,   133,   133,   158,     7,   118,    26,     7,
      28,     0,    13,     0,    26,    13,    28,    20,     7,   130,
       7,    21,   133,   176,    13,   118,    13,    20,     0,    29,
      30,    31,    26,    23,    28,     7,   118,   130,    23,   192,
     133,    13,    20,   118,   314,    30,    31,     0,   130,     0,
      20,   133,    20,    23,     7,   130,     7,   210,   133,   212,
      13,   214,    13,    21,   217,   218,    21,    22,     3,     4,
       5,     9,    30,    31,     9,    23,     0,    23,   231,   232,
     215,   334,    17,     7,   337,    20,     0,     9,    23,    13,
      25,    26,   345,     7,   247,    16,   249,     0,   251,    13,
     118,    21,    23,    21,     7,    26,   118,    28,    29,    30,
      31,    23,   130,     0,    23,   133,     0,   252,   130,    23,
       7,   133,   375,     7,   118,    23,    13,    23,     3,     4,
       5,     6,    30,    31,     9,    21,   130,     0,    21,   133,
      21,   294,    17,    21,     7,    20,     3,     4,     5,   302,
      25,    26,     9,    23,     0,     0,    23,   310,    23,   294,
      17,     7,     7,    20,   294,   294,    23,   302,    25,    26,
      21,    22,   302,   302,    23,     0,    20,    28,    29,    30,
      31,   334,     7,   294,   337,    16,   339,     0,   341,    20,
      21,   302,   345,   346,     7,    26,    27,    28,    29,    30,
      31,   294,    21,    22,     8,     9,     0,   342,   343,   302,
     363,   346,   294,     7,   367,    21,   346,   346,    20,   294,
     302,    20,   375,   376,    20,   360,   379,   302,   363,     0,
      21,    22,   367,   363,   363,   346,     7,   367,   367,    30,
      31,   376,    13,    23,   379,    20,   376,   376,    16,   379,
     379,    20,   363,   346,    21,    23,   367,    20,    26,    27,
      28,    29,    30,    31,   346,   376,     0,    20,   379,    23,
     363,   346,     9,     7,   367,    41,   294,    43,    44,    45,
       0,   363,   294,   376,   302,   367,   379,     7,   363,     0,
     302,     0,   367,    13,   376,    23,     7,   379,     7,     0,
     294,   376,    13,    21,   379,    71,     7,    23,   302,    75,
      16,    77,    13,     3,     4,     5,     9,    23,    21,     9,
      26,    27,    28,    29,    30,    31,    92,    17,   346,     9,
      20,    21,     0,     0,   346,    25,    26,     0,    23,     7,
       7,     0,    21,    22,     7,   363,    13,    23,     7,   367,
     116,   363,   346,     0,    13,   367,    21,    22,   376,    23,
       7,   379,    23,   129,   376,     0,    16,   379,     0,   363,
      20,    21,     7,   367,    24,     7,    26,    27,    28,    29,
      30,    31,   376,    21,    22,   379,     8,     9,    21,    22,
      16,   157,   158,   159,   160,    21,    22,    30,    31,     0,
      26,    27,    28,    29,    30,    31,     7,    43,    21,   175,
     176,   177,   178,     1,     9,     3,     4,     5,    21,     7,
      20,     9,    10,    11,    12,    13,    14,    15,    21,    17,
      18,    19,    20,     0,    23,    71,    23,    25,    26,    75,
       7,    77,    29,    30,    31,    21,   212,    21,   214,    21,
      22,   217,   218,    21,    28,    29,    30,    31,   224,   225,
     226,   227,   228,   229,   230,   231,   232,     8,     9,    21,
      22,    21,   238,   239,   240,   241,   242,   243,   244,    21,
     116,     8,     9,   249,    43,   251,     1,    23,     3,     4,
       5,    21,     7,   129,     9,    10,    11,    12,    13,    14,
      15,    23,    17,    18,    19,    20,    28,    29,    30,    31,
      25,    26,    71,    21,    21,    21,    75,     9,    77,    23,
      23,   157,   158,   159,   160,    28,    29,    30,    31,     3,
       4,     5,     6,    23,    23,     9,    23,     0,     0,   175,
     176,   177,   178,    17,     7,     7,    20,    23,    23,    20,
      23,    25,    26,    28,    29,    30,    31,   116,    23,    20,
      20,     9,    21,     3,     4,     5,     6,     0,   334,     9,
     129,    23,    23,   339,     7,   341,   212,    17,   214,   345,
      20,   217,   218,    21,    23,    25,    26,    23,   224,   225,
     226,   227,   228,   229,   230,   231,   232,    23,   157,   158,
     159,   160,   238,   239,   240,   241,   242,   243,   244,   375,
      23,    21,    21,   249,    43,   251,   175,   176,   177,   178,
       1,    21,     3,     4,     5,    21,     7,    21,     9,    10,
      11,    12,    13,    14,    15,    23,    17,    18,    19,    20,
      23,    23,    71,    23,    25,    26,    75,    30,    77,    29,
      30,    31,    23,   212,     0,   214,     0,     0,   217,   218,
      23,     7,    91,     7,     7,   224,   225,   226,   227,   228,
     229,   230,   231,   232,     4,    27,    18,    -1,    -1,   238,
     239,   240,   241,   242,   243,   244,    43,   116,    -1,    -1,
     249,    -1,   251,     3,     4,     5,     6,     0,   334,     9,
     129,     0,    -1,   339,     7,   341,    -1,    17,     7,   345,
      20,    -1,    -1,    -1,    71,    25,    26,    -1,    75,    -1,
      77,     3,     4,     5,    -1,    -1,    -1,     9,    -1,   158,
      -1,    -1,    89,    90,    -1,    17,    16,    -1,    20,   375,
      -1,    21,    22,    25,    26,    -1,    26,   176,    28,    29,
      30,    31,     1,    -1,     3,     4,     5,    -1,     7,   116,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,   129,    -1,    -1,   334,    25,    26,    -1,    -1,
     339,    -1,   341,   212,    21,   214,   345,    -1,   217,   218,
      -1,    28,    29,    30,    31,   224,   225,   226,   227,   228,
     229,   158,   231,   232,    -1,    -1,    -1,    -1,    -1,   238,
     239,   240,   241,   242,   243,    -1,   375,    -1,    43,   176,
     249,    -1,   251,     1,    -1,     3,     4,     5,    -1,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    -1,    -1,    -1,    71,    25,    26,    -1,
      75,    -1,    77,    -1,    -1,   212,    21,   214,    -1,    -1,
     217,   218,    -1,    28,    29,    30,    31,   224,   225,   226,
     227,   228,    -1,    -1,   231,   232,    -1,    -1,    -1,    43,
      -1,   238,   239,   240,   241,   242,    16,    -1,    -1,    -1,
      20,   116,   249,    23,   251,    -1,    26,    27,    28,    29,
      30,    31,    -1,    -1,   129,   334,    -1,    71,    -1,    -1,
     339,    75,   341,    77,    -1,    16,   345,     3,     4,     5,
      21,    22,    43,     9,    88,    26,    27,    28,    29,    30,
      31,    17,    -1,   158,    20,    -1,    -1,    -1,    -1,    25,
      26,     3,     4,     5,    -1,    -1,   375,     9,    -1,    -1,
      71,   176,   116,    -1,    75,    17,    77,    -1,    20,    -1,
      16,    -1,    -1,    25,    26,   129,    87,    23,    -1,    -1,
      26,    27,    28,    29,    30,    31,    -1,   334,    -1,    -1,
      -1,    -1,   339,    -1,   341,    -1,    -1,   212,   345,   214,
      -1,    43,   217,   218,   158,   116,    -1,    -1,    -1,   224,
     225,   226,   227,   228,    -1,    -1,   231,   232,   129,    -1,
      -1,    -1,   176,   238,   239,   240,   241,   242,   375,    71,
      -1,    -1,    -1,    75,   249,    77,   251,    -1,    -1,     3,
       4,     5,    21,    22,    -1,     9,    -1,   158,    -1,    28,
      29,    30,    31,    17,    -1,    -1,    20,    -1,   212,    -1,
     214,    25,    26,   217,   218,   176,    43,    -1,    -1,    -1,
     224,   225,   226,    -1,   116,   117,    -1,   231,   232,    -1,
      -1,    21,    22,    -1,   238,   239,   240,   129,    28,    29,
      30,    31,    -1,    -1,    71,   249,    -1,   251,    75,    -1,
      77,   212,    -1,   214,    -1,    -1,   217,   218,    -1,    86,
      -1,    -1,    -1,   224,   225,    -1,   158,    -1,    -1,   334,
     231,   232,    -1,    -1,   339,    -1,   341,   238,   239,    -1,
     345,     3,     4,     5,   176,    -1,    -1,     9,   249,   116,
     251,     3,     4,     5,    -1,    17,    -1,     9,    20,    -1,
      -1,    -1,   129,    25,    26,    17,    -1,    -1,    20,    -1,
     375,    -1,    -1,    25,    26,    -1,    -1,    -1,    -1,    -1,
     212,    -1,   214,    -1,    -1,   217,   218,    -1,    -1,    -1,
     334,   158,    -1,    16,    -1,   339,    -1,   341,    21,   231,
     232,   345,    -1,    26,    27,    28,    29,    30,    31,   176,
      -1,    -1,    -1,    -1,    16,    -1,    -1,   249,    20,   251,
      -1,    23,    24,    -1,    26,    27,    28,    29,    30,    31,
      -1,   375,    -1,   334,    -1,    -1,    -1,    -1,   339,    -1,
     341,    -1,    -1,    -1,   345,   212,    21,   214,    -1,    -1,
     217,   218,    -1,    28,    29,    30,    31,   224,    -1,    -1,
      -1,   293,    -1,    -1,   231,   232,    16,    -1,    -1,   301,
      -1,   238,    -1,    23,   375,    -1,    26,    27,    28,    29,
      30,    31,   249,    -1,   251,    -1,    -1,     1,    -1,     3,
       4,     5,    -1,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,   334,    17,    18,    19,    20,   339,    -1,   341,
      -1,    25,    26,   345,    -1,     1,    -1,     3,     4,     5,
      -1,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
     362,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    25,
      26,    -1,    -1,   375,     1,    -1,     3,     4,     5,    -1,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,   334,    25,    26,
      -1,    -1,   339,     1,   341,     3,     4,     5,   345,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    23,    17,
      18,    19,    20,    28,    29,    30,    31,    25,    26,    -1,
      -1,     1,    -1,     3,     4,     5,    -1,     7,   375,     9,
      10,    11,    12,    13,    14,    15,    23,    17,    18,    19,
      20,    28,    29,    30,    31,    25,    26,     1,    -1,     3,
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
      -1,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
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
      14,    15,    -1,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    25,    26,     1,    -1,     3,     4,     5,    -1,     7,
      -1,     9,    10,    11,    12,    -1,    14,    15,    -1,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    25,    26,     1,
      -1,     3,     4,     5,    -1,     7,    -1,     9,    10,    11,
      12,    -1,    14,    15,    -1,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    25,    26,     1,    -1,     3,     4,     5,
      -1,     7,    -1,     9,    10,    11,    12,    -1,    14,    15,
      -1,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,    25,
      26,     1,    -1,     3,     4,     5,    -1,     7,    -1,     9,
      10,    11,    12,    -1,    14,    15,    -1,    17,    18,    -1,
      20,    -1,    -1,    -1,    -1,    25,    26,     1,    -1,     3,
       4,     5,    -1,     7,    -1,     9,    10,    11,    12,    -1,
      14,    15,    -1,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    25,    26,     1,    -1,     3,     4,     5,    -1,     7,
      -1,     9,    10,    11,    12,    -1,    14,    15,    -1,    17,
      18,    -1,    20,    -1,    -1,    16,    -1,    25,    26,    20,
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
      -1,    -1,    -1,    26,    27,    28,    29,    30,    31,    16,
      -1,    -1,    -1,    -1,    21,    22,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    31,    16,    -1,    -1,    -1,    -1,
      21,    22,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    16,    -1,    -1,    -1,    -1,    21,    22,    -1,    -1,
      -1,    26,    27,    28,    29,    30,    31,    16,    -1,    -1,
      -1,    -1,    21,    22,    -1,    -1,    16,    26,    27,    28,
      29,    30,    31,    23,    -1,    16,    26,    27,    28,    29,
      30,    31,    23,    -1,    16,    26,    27,    28,    29,    30,
      31,    23,    -1,    16,    26,    27,    28,    29,    30,    31,
      23,    -1,    16,    26,    27,    28,    29,    30,    31,    23,
      -1,    16,    26,    27,    28,    29,    30,    31,    23,    -1,
      16,    26,    27,    28,    29,    30,    31,    23,    -1,    16,
      26,    27,    28,    29,    30,    31,    23,    -1,    16,    26,
      27,    28,    29,    30,    31,    23,    -1,    16,    26,    27,
      28,    29,    30,    31,    23,    -1,    -1,    26,    27,    28,
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
      -1,    -1,    21,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    31,    16,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    31,    16,
      -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    31,    16,    -1,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    16,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    26,    -1,    28,    29,    30,    31,    21,    22,    -1,
      -1,    21,    22,    -1,    28,    29,    30,    31,    28,    29,
      30,    31,    21,    22,    -1,    -1,    21,    -1,    -1,    -1,
      29,    30,    31,    28,    29,    30,    31,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     7,    34,    35,    36,    40,    67,     8,     9,
       0,    36,     9,    20,    23,    20,    23,    41,    42,     7,
      43,    44,    45,    43,     8,     9,    21,    22,    21,     9,
       1,     3,     4,     5,     7,     9,    10,    11,    12,    14,
      15,    17,    18,    20,    25,    26,    37,    39,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    45,    39,     8,
       9,    20,    24,    20,    53,    20,    20,    20,     9,    66,
      38,    39,    53,    66,    66,    23,    30,    31,    29,    28,
      16,    26,    27,     9,    53,    55,    56,    53,    53,    57,
      23,    53,     9,     6,    53,    19,    39,    21,    60,    61,
      62,    63,    63,    65,    66,    21,    22,    23,    21,    21,
      21,    21,    53,    58,    59,    39,    23,    23,    23,    23,
      13,    57,    39,    21,    39,     1,     7,    10,    11,    12,
      14,    15,    18,    37,    46,    47,    48,    49,    50,    51,
      52,    53,    67,     3,     4,     5,     9,    17,    20,    25,
      26,    54,    59,    60,    61,    62,    63,    64,    65,    66,
      68,     3,     4,     5,     9,    17,    20,    25,    26,    54,
      59,    60,    61,    62,    63,    64,    65,    66,    68,     1,
       7,    10,    11,    12,    14,    15,    18,    37,    46,    47,
      48,    49,    50,    51,    52,    53,    67,    53,     8,     9,
      20,    53,    20,    20,    20,    38,    23,    20,    24,     9,
      66,    53,    66,    66,    30,    31,    29,    28,    16,    26,
      27,    20,    24,     9,    66,    53,    66,    66,    30,    31,
      29,    28,    16,    26,    27,     8,     9,    20,    53,    20,
      20,    20,    38,    23,     9,    23,    57,    23,    53,     9,
       6,    53,    19,    55,    53,    21,    60,    61,    62,    63,
      63,    65,    66,    55,    53,    21,    60,    61,    62,    63,
      63,    65,    66,     9,    23,    57,    23,    53,     9,     6,
      53,    19,    23,    23,    21,    21,    21,    21,    21,    21,
      23,    23,    21,    21,    21,    21,    58,     1,     7,    10,
      11,    12,    14,    15,    18,    37,    39,    46,    47,    48,
      49,    50,    51,    52,    53,    67,    23,    23,    23,    58,
      39,    23,    23,    23,    23,     8,     9,    20,    53,    20,
      20,    20,    38,    13,    23,    23,    13,    57,     9,    23,
      57,    23,    53,     9,     6,    53,    19,    39,    57,    39,
      21,    23,    23,    21,    21,    21,    21,    21,    39,    58,
      39,    23,    23,    23,    39,    23,    13,    57,    39,    21,
      39
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    35,    35,    35,    36,    36,    37,    38,
      38,    39,    39,    39,    39,    39,    39,    39,    39,    41,
      40,    42,    40,    43,    43,    44,    44,    45,    45,    46,
      47,    47,    48,    49,    49,    50,    51,    51,    52,    53,
      53,    54,    55,    55,    56,    56,    57,    57,    58,    58,
      59,    59,    60,    60,    61,    61,    62,    62,    63,    63,
      64,    64,    65,    65,    66,    66,    66,    66,    66,    66,
      66,    67,    67,    68,    68,    68
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       7,     0,     8,     0,     1,     3,     1,     2,     3,     9,
       5,     7,     2,     1,     1,     5,     5,     5,     3,     3,
       1,     4,     0,     1,     3,     1,     0,     1,     0,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     2,     2,     2,     3,
       1,     3,     4,     1,     1,     1
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
#line 129 "./src/parser.y"
                   {
        root_node = (yyvsp[0].node);
    }
#line 2225 "parser.tab.c"
    break;

  case 3: /* declarations: declarations declaration  */
#line 135 "./src/parser.y"
                               {
        (yyval.node) = new_node("declarations", "declarations", 0, "");
        (yyval.node)->child[0] = (yyvsp[-1].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2235 "parser.tab.c"
    break;

  case 4: /* declarations: declaration  */
#line 140 "./src/parser.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2243 "parser.tab.c"
    break;

  case 5: /* declarations: error  */
#line 143 "./src/parser.y"
            { parsing_errors++; }
#line 2249 "parser.tab.c"
    break;

  case 6: /* declaration: function_declaration_statement  */
#line 147 "./src/parser.y"
                                     {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2257 "parser.tab.c"
    break;

  case 7: /* declaration: variable_declaration_statement  */
#line 150 "./src/parser.y"
                                     {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2265 "parser.tab.c"
    break;

  case 8: /* block: '{' statements '}'  */
#line 156 "./src/parser.y"
                         {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2273 "parser.tab.c"
    break;

  case 9: /* statements: statements statement  */
#line 162 "./src/parser.y"
                           {
        (yyval.node) = new_node("statements", "statements", 0, "");
        (yyval.node)->child[0] = (yyvsp[-1].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2283 "parser.tab.c"
    break;

  case 10: /* statements: statement  */
#line 167 "./src/parser.y"
                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2291 "parser.tab.c"
    break;

  case 11: /* statement: expression_statement  */
#line 173 "./src/parser.y"
                           {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2299 "parser.tab.c"
    break;

  case 12: /* statement: io_statement  */
#line 176 "./src/parser.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2307 "parser.tab.c"
    break;

  case 13: /* statement: return_statement  */
#line 179 "./src/parser.y"
                       {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2315 "parser.tab.c"
    break;

  case 14: /* statement: variable_declaration_statement  */
#line 182 "./src/parser.y"
                                     {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2323 "parser.tab.c"
    break;

  case 15: /* statement: for_statement  */
#line 185 "./src/parser.y"
                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2331 "parser.tab.c"
    break;

  case 16: /* statement: if_else_statement  */
#line 188 "./src/parser.y"
                        {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2339 "parser.tab.c"
    break;

  case 17: /* statement: block  */
#line 191 "./src/parser.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2347 "parser.tab.c"
    break;

  case 18: /* statement: error  */
#line 194 "./src/parser.y"
            { parsing_errors++; }
#line 2353 "parser.tab.c"
    break;

  case 19: /* $@1: %empty  */
#line 198 "./src/parser.y"
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
#line 2382 "parser.tab.c"
    break;

  case 20: /* function_declaration_statement: SIMPLE_TYPE IDENTIFIER '(' $@1 parameters_optative ')' statement  */
#line 222 "./src/parser.y"
                                      {
        (yyval.node) = new_node("function_declaration_statement", "func_declaration", 0, "");
        (yyval.node)->child[0] = new_node("type", (yyvsp[-6].token).content, 1, "");
        (yyval.node)->child[1] = new_node("identifier", (yyvsp[-5].token).content, 1, "");
        (yyval.node)->child[2] = (yyvsp[-2].node);
        (yyval.node)->child[3] = (yyvsp[0].node);
        pop_scope(top, scope_stack);
        if(top > 0) top--;
    }
#line 2396 "parser.tab.c"
    break;

  case 21: /* $@2: %empty  */
#line 231 "./src/parser.y"
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
#line 2428 "parser.tab.c"
    break;

  case 22: /* function_declaration_statement: SIMPLE_TYPE LIST_TYPE IDENTIFIER '(' $@2 parameters_optative ')' statement  */
#line 257 "./src/parser.y"
                                        {
        char type[100];
        strcpy(type, (yyvsp[-7].token).content);
        strcat(type, " ");
        strcat(type, (yyvsp[-6].token).content);
           
        (yyval.node) = new_node("function_declaration_statement", "func_declaration", 0, "");
        (yyval.node)->child[0] = new_node("type", type, 1, "");
        (yyval.node)->child[1] = new_node("identifier", (yyvsp[-5].token).content, 1, "");
        (yyval.node)->child[2] = (yyvsp[-2].node);
        (yyval.node)->child[3] = (yyvsp[0].node);
        pop_scope(top, scope_stack);
        if(top > 0) top--;
    }
#line 2447 "parser.tab.c"
    break;

  case 23: /* parameters_optative: %empty  */
#line 274 "./src/parser.y"
             {
        (yyval.node) = NULL;
    }
#line 2455 "parser.tab.c"
    break;

  case 24: /* parameters_optative: parameters  */
#line 277 "./src/parser.y"
                 {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2463 "parser.tab.c"
    break;

  case 25: /* parameters: parameters ',' parameter  */
#line 283 "./src/parser.y"
                               {
        (yyval.node) = new_node("parameters", "params", 0, "");
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2473 "parser.tab.c"
    break;

  case 26: /* parameters: parameter  */
#line 288 "./src/parser.y"
                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2481 "parser.tab.c"
    break;

  case 27: /* parameter: SIMPLE_TYPE IDENTIFIER  */
#line 294 "./src/parser.y"
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
        (yyval.node)->child[1] = new_node("identifier", (yyvsp[0].token).content, 1, "");
    }
#line 2505 "parser.tab.c"
    break;

  case 28: /* parameter: SIMPLE_TYPE LIST_TYPE IDENTIFIER  */
#line 313 "./src/parser.y"
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
        (yyval.node)->child[1] = new_node("identifier", (yyvsp[0].token).content, 1, "");
    }
#line 2533 "parser.tab.c"
    break;

  case 29: /* for_statement: RW_FOR '(' expression_optative ';' or_expression_optative ';' expression_optative ')' statement  */
#line 339 "./src/parser.y"
                                                                                                      {
        (yyval.node) = new_node("for_statement", (yyvsp[-8].token).content, 0, "");
        (yyval.node)->child[0] = (yyvsp[-6].node);
        (yyval.node)->child[1] = (yyvsp[-4].node);
        (yyval.node)->child[2] = (yyvsp[-2].node);
        (yyval.node)->child[3] = (yyvsp[0].node);
    }
#line 2545 "parser.tab.c"
    break;

  case 30: /* if_else_statement: RW_IF '(' expression ')' statement  */
#line 349 "./src/parser.y"
                                                    {
        (yyval.node) = new_node("if_else_statement", (yyvsp[-4].token).content, 0, "");
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2555 "parser.tab.c"
    break;

  case 31: /* if_else_statement: RW_IF '(' expression ')' statement RW_ELSE statement  */
#line 354 "./src/parser.y"
                                                           {
        (yyval.node) = new_node("if_else_statement", (yyvsp[-6].token).content, 0, "");
        (yyval.node)->child[0] = (yyvsp[-4].node);
        (yyval.node)->child[1] = (yyvsp[-2].node);
        (yyval.node)->child[2] = new_node("else_rw", (yyvsp[-1].token).content, 0, "");
        (yyval.node)->child[2]->child[0] = (yyvsp[0].node);
    }
#line 2567 "parser.tab.c"
    break;

  case 32: /* expression_statement: expression ';'  */
#line 363 "./src/parser.y"
                     {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2575 "parser.tab.c"
    break;

  case 33: /* io_statement: input_statement  */
#line 369 "./src/parser.y"
                      {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2583 "parser.tab.c"
    break;

  case 34: /* io_statement: output_statement  */
#line 372 "./src/parser.y"
                       {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2591 "parser.tab.c"
    break;

  case 35: /* input_statement: IO_READ '(' IDENTIFIER ')' ';'  */
#line 378 "./src/parser.y"
                                     {
        (yyval.node) = new_node("input_statement", (yyvsp[-4].token).content, 0, "");
        (yyval.node)->child[0] = new_node("identifier", (yyvsp[-2].token).content, 1, "");
        if(variable_unavailable(symbol_table, (yyval.node)->child[0], symbol_table_idx, top, scope_stack)) {
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Undefined reference to '%s'\n"reset, (yyvsp[-2].token).line_idx, (yyvsp[-2].token).column_idx, (yyvsp[-2].token).content);
        }

        if(!valid_read_write_params((yyvsp[-4].token).content, (yyval.node)->child[0])) {
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Invalid params passed to '%s'\n"reset, (yyvsp[-4].token).line_idx, (yyvsp[-4].token).column_idx, (yyvsp[-4].token).content);
        }
    }
#line 2607 "parser.tab.c"
    break;

  case 36: /* output_statement: IO_WRITE '(' expression ')' ';'  */
#line 392 "./src/parser.y"
                                      {
        (yyval.node) = new_node("output_statement", (yyvsp[-4].token).content, 0, "");
        (yyval.node)->child[0] = (yyvsp[-2].node);
        if(!valid_read_write_params((yyvsp[-4].token).content, (yyval.node)->child[0])) {
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Invalid params passed to '%s'\n"reset, (yyvsp[-4].token).line_idx, (yyvsp[-4].token).column_idx, (yyvsp[-4].token).content);
        }
    }
#line 2619 "parser.tab.c"
    break;

  case 37: /* output_statement: IO_WRITE '(' LIT_STRING ')' ';'  */
#line 399 "./src/parser.y"
                                      {
        (yyval.node) = new_node("output_statement", (yyvsp[-4].token).content, 0, "");
        (yyval.node)->child[0] = new_node("string_literal", (yyvsp[-2].token).content, 1, "literal_string");
        if(!valid_read_write_params((yyvsp[-4].token).content, (yyval.node)->child[0])) {
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Invalid params passed to '%s'\n"reset, (yyvsp[-4].token).line_idx, (yyvsp[-4].token).column_idx, (yyvsp[-4].token).content);
        }
    }
#line 2631 "parser.tab.c"
    break;

  case 38: /* return_statement: RW_RETURN expression ';'  */
#line 409 "./src/parser.y"
                               {
        char function_return_type[10];
        strcpy(function_return_type, symbol_table[current_function_idx].type);

        (yyval.node) = new_node("return_statement", (yyvsp[-2].token).content, 0, function_return_type);
        (yyval.node)->child[0] = (yyvsp[-1].node);

        if(!valid_return_type((yyval.node))) {
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Cannot cast from '%s' to '%s'\n"reset,
                (yyvsp[-2].token).line_idx, (yyvsp[-2].token).column_idx, 
                (yyval.node)->const_type,
                (yyval.node)->child[0]->const_type
            );
        }
    }
#line 2651 "parser.tab.c"
    break;

  case 39: /* expression: IDENTIFIER '=' expression  */
#line 427 "./src/parser.y"
                                {
        (yyval.node) = new_node("assignment_expression", "=", 0, "");
        (yyval.node)->child[0] = new_node("identifier", (yyvsp[-2].token).content, 1, "");
        (yyval.node)->child[1] = (yyvsp[0].node);
        if(variable_unavailable(symbol_table, (yyval.node)->child[0], symbol_table_idx, top, scope_stack)) {
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Undefined reference to '%s'\n"reset, (yyvsp[-2].token).line_idx, (yyvsp[-2].token).column_idx, (yyvsp[-2].token).content);
        }

        if(!valid_binary_operation("=", (yyval.node), (yyval.node)->child[0], (yyval.node)->child[1])) {
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Cannot cast from '%s' to '%s'\n"reset,
                (yyvsp[-2].token).line_idx, (yyvsp[-2].token).column_idx, 
                (yyval.node)->child[1]->const_type,
                (yyval.node)->child[0]->const_type 
            );
        }
    }
#line 2672 "parser.tab.c"
    break;

  case 40: /* expression: or_expression  */
#line 443 "./src/parser.y"
                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2680 "parser.tab.c"
    break;

  case 41: /* function_call_expression: IDENTIFIER '(' function_arguments_optative ')'  */
#line 449 "./src/parser.y"
                                                     {
        (yyval.node) = new_node("function_call_expression", "function_call", 0, "");
        (yyval.node)->child[0] = new_node("identifier", (yyvsp[-3].token).content, 1, "");
        (yyval.node)->child[1] = (yyvsp[-1].node);
        
        int valid_params = check_number_of_params((yyvsp[-1].node), symbol_table, symbol_table_size, (yyvsp[-3].token).content);

        if(variable_unavailable(symbol_table, (yyval.node)->child[0], symbol_table_idx, top, scope_stack)){
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Undefined reference to '%s'\n"reset, (yyvsp[-3].token).line_idx, (yyvsp[-3].token).column_idx, (yyvsp[-3].token).content);
        } else if(!valid_params) {
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Wrong number of arguments passed to '%s'\n"reset, (yyvsp[-3].token).line_idx, (yyvsp[-3].token).column_idx, (yyvsp[-3].token).content);
        } else if(valid_params) {
            int first_argument_idx = find_function_first_argument((yyvsp[-3].token).content, symbol_table, symbol_table_size);
            if(invalid_argument_type((yyval.node)->child[1], symbol_table, first_argument_idx, 0, 0)) {
                printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Invalid param type passed to '%s'\n"reset, (yyvsp[-3].token).line_idx, (yyvsp[-3].token).column_idx, (yyvsp[-3].token).content);
            }
        }

        strcpy((yyval.node)->const_type, (yyval.node)->child[0]->const_type);
    }
#line 2705 "parser.tab.c"
    break;

  case 42: /* function_arguments_optative: %empty  */
#line 472 "./src/parser.y"
             {
        (yyval.node) = NULL;
    }
#line 2713 "parser.tab.c"
    break;

  case 43: /* function_arguments_optative: function_arguments  */
#line 475 "./src/parser.y"
                         {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2721 "parser.tab.c"
    break;

  case 44: /* function_arguments: function_arguments ',' expression  */
#line 481 "./src/parser.y"
                                        {
        (yyval.node) = new_node("function_arguments", "function_args", 0, "");
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2731 "parser.tab.c"
    break;

  case 45: /* function_arguments: expression  */
#line 486 "./src/parser.y"
                 {
        (yyval.node) = new_node("function_arguments", "function_args", 0, "");
        (yyval.node)->child[0] = new_node("function_Arguments", "function_args", 0, "");
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2741 "parser.tab.c"
    break;

  case 46: /* expression_optative: %empty  */
#line 494 "./src/parser.y"
             {
        (yyval.node) = NULL;
    }
#line 2749 "parser.tab.c"
    break;

  case 47: /* expression_optative: expression  */
#line 497 "./src/parser.y"
                 {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2757 "parser.tab.c"
    break;

  case 48: /* or_expression_optative: %empty  */
#line 503 "./src/parser.y"
             {
        (yyval.node) = NULL;
    }
#line 2765 "parser.tab.c"
    break;

  case 49: /* or_expression_optative: or_expression  */
#line 506 "./src/parser.y"
                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2773 "parser.tab.c"
    break;

  case 50: /* or_expression: or_expression LOGICAL_OP_OR and_expression  */
#line 512 "./src/parser.y"
                                                 {
        (yyval.node) = new_node("or_expression", (yyvsp[-1].token).content, 0, "");
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);

        if(!valid_binary_operation((yyvsp[-1].token).content, (yyval.node), (yyval.node)->child[0], (yyval.node)->child[1])){
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Cannot cast from '%s' to '%s'\n"reset,
                (yyvsp[-1].token).line_idx, (yyvsp[-1].token).column_idx, 
                (yyval.node)->child[1]->const_type,
                (yyval.node)->child[0]->const_type 
            );
        }
    }
#line 2791 "parser.tab.c"
    break;

  case 51: /* or_expression: and_expression  */
#line 525 "./src/parser.y"
                     {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2799 "parser.tab.c"
    break;

  case 52: /* and_expression: and_expression LOGICAL_OP_AND equality_expression  */
#line 531 "./src/parser.y"
                                                        {
        (yyval.node) = new_node("and_expression", (yyvsp[-1].token).content, 0, "");
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);

        if(!valid_binary_operation((yyvsp[-1].token).content, (yyval.node), (yyval.node)->child[0], (yyval.node)->child[1])) {
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Cannot cast from '%s' to '%s'\n"reset,
                (yyvsp[-1].token).line_idx, (yyvsp[-1].token).column_idx, 
                (yyval.node)->child[1]->const_type,
                (yyval.node)->child[0]->const_type 
            );
        }
    }
#line 2817 "parser.tab.c"
    break;

  case 53: /* and_expression: equality_expression  */
#line 544 "./src/parser.y"
                          {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2825 "parser.tab.c"
    break;

  case 54: /* equality_expression: equality_expression EQUALITY_OP relational_expression  */
#line 550 "./src/parser.y"
                                                            {
        (yyval.node) = new_node("equality_expression", (yyvsp[-1].token).content, 0, "");
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);

        if(!valid_binary_operation((yyvsp[-1].token).content, (yyval.node), (yyval.node)->child[0], (yyval.node)->child[1])) {
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Cannot cast from '%s' to '%s'\n"reset,
                (yyvsp[-1].token).line_idx, (yyvsp[-1].token).column_idx, 
                (yyval.node)->child[1]->const_type,
                (yyval.node)->child[0]->const_type 
            );
        }
    }
#line 2843 "parser.tab.c"
    break;

  case 55: /* equality_expression: relational_expression  */
#line 563 "./src/parser.y"
                            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2851 "parser.tab.c"
    break;

  case 56: /* relational_expression: relational_expression RELATIONAL_OP list_expression  */
#line 569 "./src/parser.y"
                                                          {
        (yyval.node) = new_node("relational_expression", (yyvsp[-1].token).content, 0, "");
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);

        if(!valid_binary_operation((yyvsp[-1].token).content, (yyval.node), (yyval.node)->child[0], (yyval.node)->child[1])) {
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Cannot cast from '%s' to '%s'\n"reset,
                (yyvsp[-1].token).line_idx, (yyvsp[-1].token).column_idx, 
                (yyval.node)->child[1]->const_type,
                (yyval.node)->child[0]->const_type 
            );
        }
    }
#line 2869 "parser.tab.c"
    break;

  case 57: /* relational_expression: list_expression  */
#line 582 "./src/parser.y"
                      {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2877 "parser.tab.c"
    break;

  case 58: /* list_expression: addition_expression BINARY_LIST_OP list_expression  */
#line 588 "./src/parser.y"
                                                         {
        (yyval.node) = new_node("list_expression", (yyvsp[-1].token).content, 0, "");
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);

        if(!valid_binary_operation((yyvsp[-1].token).content, (yyval.node), (yyval.node)->child[0], (yyval.node)->child[1])) {
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Invalid '%s' binary operation\n"reset, (yyvsp[-1].token).line_idx, (yyvsp[-1].token).column_idx, (yyvsp[-1].token).content);
        }
    }
#line 2891 "parser.tab.c"
    break;

  case 59: /* list_expression: addition_expression  */
#line 597 "./src/parser.y"
                          {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2899 "parser.tab.c"
    break;

  case 60: /* addition_expression: addition_expression ARITMETIC_OP_ADDITIVE multiplication_expression  */
#line 603 "./src/parser.y"
                                                                          {
        (yyval.node) = new_node("addition_expression", (yyvsp[-1].token).content, 0, "");
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);

        if(!valid_binary_operation((yyvsp[-1].token).content, (yyval.node), (yyval.node)->child[0], (yyval.node)->child[1])) {
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Cannot cast from '%s' to '%s'\n"reset,
                (yyvsp[-1].token).line_idx, (yyvsp[-1].token).column_idx, 
                (yyval.node)->child[1]->const_type,
                (yyval.node)->child[0]->const_type 
            );
        }
    }
#line 2917 "parser.tab.c"
    break;

  case 61: /* addition_expression: multiplication_expression  */
#line 616 "./src/parser.y"
                                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2925 "parser.tab.c"
    break;

  case 62: /* multiplication_expression: multiplication_expression ARITMETIC_OP_MULTIPLICATIVE simple_value  */
#line 622 "./src/parser.y"
                                                                         {
        (yyval.node) = new_node("multiplication_expression", (yyvsp[-1].token).content, 0, "");
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);

        if(!valid_binary_operation((yyvsp[-1].token).content, (yyval.node), (yyval.node)->child[0], (yyval.node)->child[1])) {
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Cannot cast from '%s' to '%s'\n"reset,
                (yyvsp[-1].token).line_idx, (yyvsp[-1].token).column_idx, 
                (yyval.node)->child[1]->const_type,
                (yyval.node)->child[0]->const_type 
            );
        }
    }
#line 2943 "parser.tab.c"
    break;

  case 63: /* multiplication_expression: simple_value  */
#line 635 "./src/parser.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2951 "parser.tab.c"
    break;

  case 64: /* simple_value: constant  */
#line 641 "./src/parser.y"
               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2959 "parser.tab.c"
    break;

  case 65: /* simple_value: IDENTIFIER  */
#line 644 "./src/parser.y"
                 {
        (yyval.node) = new_node("identifier", (yyvsp[0].token).content, 1, "");
        if(variable_unavailable(symbol_table, (yyval.node), symbol_table_idx, top, scope_stack)){
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Undefined reference to '%s'\n"reset, (yyvsp[0].token).line_idx, (yyvsp[0].token).column_idx, (yyvsp[0].token).content);
        }
    }
#line 2970 "parser.tab.c"
    break;

  case 66: /* simple_value: ARITMETIC_OP_ADDITIVE simple_value  */
#line 650 "./src/parser.y"
                                         {
        (yyval.node) = new_node("simple_value_signed", (yyvsp[-1].token).content, 0, "");
        (yyval.node)->child[0] = (yyvsp[0].node);
        if(!valid_unary_operation((yyvsp[-1].token).content, (yyval.node))) {
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Invalid unary operation '%s' for operand type '%s'\n"reset, (yyvsp[-1].token).line_idx, (yyvsp[-1].token).column_idx, (yyvsp[-1].token).content, (yyvsp[0].node)->const_type);
        }
    }
#line 2982 "parser.tab.c"
    break;

  case 67: /* simple_value: '!' simple_value  */
#line 657 "./src/parser.y"
                       {
        (yyval.node) = new_node("simple_value_exclamation", "!", 0, "");
        (yyval.node)->child[0] = (yyvsp[0].node);
        if(!valid_unary_operation("!", (yyval.node))){
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Invalid unary operation '!' for operand type '%s'\n"reset, line_idx, column_idx, (yyvsp[0].node)->const_type);
        }
    }
#line 2994 "parser.tab.c"
    break;

  case 68: /* simple_value: UNARY_LIST_OP simple_value  */
#line 664 "./src/parser.y"
                                 {
        (yyval.node) = new_node("simple_value_unary", (yyvsp[-1].token).content, 0, "");
        (yyval.node)->child[0] = (yyvsp[0].node);
        if(!valid_unary_operation((yyvsp[-1].token).content, (yyval.node))) {
            printf(BHRED"[SEMANTIC ERROR] Line: %d | Column: %d - Invalid unary operation '%s' for operand type '%s'\n"reset, (yyvsp[-1].token).line_idx, (yyvsp[-1].token).column_idx, (yyvsp[-1].token).content, (yyvsp[0].node)->const_type);
        }
    }
#line 3006 "parser.tab.c"
    break;

  case 69: /* simple_value: '(' expression ')'  */
#line 671 "./src/parser.y"
                         {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 3014 "parser.tab.c"
    break;

  case 70: /* simple_value: function_call_expression  */
#line 674 "./src/parser.y"
                               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 3022 "parser.tab.c"
    break;

  case 71: /* variable_declaration_statement: SIMPLE_TYPE IDENTIFIER ';'  */
#line 680 "./src/parser.y"
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
        (yyval.node)->child[1] = new_node("identifier", (yyvsp[-1].token).content, 1, "");

    }
#line 3051 "parser.tab.c"
    break;

  case 72: /* variable_declaration_statement: SIMPLE_TYPE LIST_TYPE IDENTIFIER ';'  */
#line 704 "./src/parser.y"
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
        (yyval.node)->child[1] = new_node("identifier", (yyvsp[-1].token).content, 1, "");
    }
#line 3083 "parser.tab.c"
    break;

  case 73: /* constant: C_INTEGER  */
#line 734 "./src/parser.y"
                {
        (yyval.node) = new_node("const", (yyvsp[0].token).content, 1, "int");
    }
#line 3091 "parser.tab.c"
    break;

  case 74: /* constant: C_FLOAT  */
#line 737 "./src/parser.y"
              {
        (yyval.node) = new_node("const", (yyvsp[0].token).content, 1, "float");
    }
#line 3099 "parser.tab.c"
    break;

  case 75: /* constant: C_NIL  */
#line 740 "./src/parser.y"
            {
        (yyval.node) = new_node("const", (yyvsp[0].token).content, 1, "NIL");
    }
#line 3107 "parser.tab.c"
    break;


#line 3111 "parser.tab.c"

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

#line 745 "./src/parser.y"


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
