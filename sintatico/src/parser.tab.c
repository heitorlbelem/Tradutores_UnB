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
    
    #define BRED "\e[1;31m"
    #define BGRN "\e[1;32m"
    #define REDHB "\e[0;101m"
    #define BLU "\e[0;34m"
    #define UCYN "\e[4;36m"
    #define reset "\e[0m"
    
    extern FILE *yyin;
    void yyerror (char const *);    
    void print_semantic_error(char* text, int line, int column);
    extern int yylex();
    extern int yylex_destroy();

    extern int errors_count;
    extern int scope_id;
    extern int top;
    int symbol_table_idx = 0;
    int symbol_table_size = 0;
    int parsing_errors = 0;
    extern int scope_stack[100000];

    T_Node* root_node;

#line 103 "parser.tab.c"

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
#define YYLAST   3155

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
       0,   126,   126,   132,   137,   140,   144,   147,   153,   159,
     164,   170,   173,   176,   179,   182,   185,   188,   191,   195,
     195,   226,   226,   263,   266,   272,   277,   283,   300,   324,
     334,   339,   348,   354,   357,   363,   374,   378,   385,   392,
     401,   407,   419,   422,   428,   433,   439,   445,   448,   454,
     457,   463,   468,   474,   479,   485,   490,   496,   501,   507,
     512,   518,   523,   529,   534,   540,   543,   550,   554,   558,
     562,   565,   571,   595,   624,   627,   630
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
      84,    66,    -1,    43,    99,   110,   121,   130,    68,   -11,
    -293,   169,    44,     4,   208,    61,   217,    65,    65,    79,
      72,   201,   260,    88,    80,   367,   493,   111,   493,   372,
     337,    30,   214,  2795,   157,  1032,   102,   404,   104,   107,
     119,   951,  2536,  1018,   951,   951,   415,   473,   499,   509,
     569,   580,   605,   681,   736,   129,  2804,   742,    39,   154,
     935,    74,   703,  2813,  2822,   785,  2831,   421,   786,   133,
     170,    13,   404,    75,   210,  1018,   196,   155,   171,  2840,
     835,   999,   230,  2849,  2858,   797,   951,   951,   951,   951,
     951,   951,   951,   212,   432,   234,   529,   538,   215,   242,
     247,   851,   236,   252,   258,   273,   945,  1912,  2867,   132,
     427,  1078,   117,  1282,  2876,  2885,  2894,  1138,   282,  2562,
     269,   274,   290,   557,   295,   944,     6,   972,   981,   982,
     770,   493,   312,   984,   493,   986,  1938,   532,   158,   404,
     316,   326,   329,  2536,  1964,  1990,  2016,  2042,  2068,  2094,
    2120,  2146,   332,  2172,   804,  2910,  2926,  1384,  1166,  1018,
    1166,  1166,  2942,    -6,   304,    11,  1123,   588,  3118,  2958,
    2974,  2990,   536,  2594,  2610,   883,  1205,  1018,  1205,  1205,
    2626,    14,   182,  1010,  1069,  1225,   460,  2642,  2658,  2674,
     144,   633,   354,   404,   359,   377,   383,  2536,   207,   219,
     271,   276,   293,   360,   391,   420,   388,   471,   331,   397,
     403,    75,   408,  1018,   428,   443,  2198,  2224,    13,  1018,
     300,  3006,   424,  3022,  3038,  1166,  1166,  1166,  1166,  1166,
    1166,  1166,    13,  1138,  1401,  2690,   438,  2706,  2722,  1205,
    1205,  1205,  1205,  1205,  1205,  1205,   466,   418,    75,   462,
    1018,   484,   669,  2250,   514,   478,  2276,   494,  2302,   525,
     540,   576,   582,  2328,   590,   594,  3054,   355,   280,  1206,
     843,  3124,  3070,  3086,   608,   622,  2738,   340,  1251,  1176,
    1308,  1482,  2754,  2770,   634,   535,   644,   568,   661,   662,
     663,   675,   570,  2354,   282,  2588,   683,   684,   685,  3102,
    2786,   646,   282,  2562,   686,   687,   695,   697,   249,   671,
     672,   404,   708,   718,   720,  2536,   519,   581,   651,   744,
    1356,  1476,  1514,  1544,  1572,   700,  1600,  2380,  2406,  2432,
     719,   739,   776,   781,   908,   770,   735,   737,    75,   743,
    1018,   759,   796,  2458,  2536,  1626,   770,  2562,   756,   780,
    1652,   783,  1678,   794,   798,   802,   820,  1704,  2484,   822,
     916,  2536,  1730,   282,  2588,   833,   834,   839,  2562,  2510,
     844,  1756,  1782,  1808,  1834,   931,   770,  2588,   849,  1860,
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
     867,  -293,   859,    19,    37,    48,    55,    87,    97,   115,
     -23,   472,  -181,  -293,   771,   -99,  -292,  1174,  1232,  1102,
    1044,   898,   853,   707,   395,     0,   650
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
      33,    51,   -21,    51,    35,     1,   -23,    24,    25,    29,
      90,     2,    41,    26,    94,    43,   206,   -58,   -47,    -2,
      44,    45,   -58,   -58,   -58,   -58,     2,   208,    55,    28,
      -4,    55,   257,    52,   126,    52,   212,    -4,    19,   207,
     198,    -6,    73,    53,    75,    53,   133,    76,    -6,   135,
      -7,    65,    46,    90,    65,    46,   222,    -7,   199,    77,
     -57,    54,    93,    54,   -18,   -57,   -57,   -57,   -57,   286,
      48,   -18,    85,    48,   236,   -51,   200,   -18,   154,   155,
     156,   104,   -51,    87,   157,    69,    70,   201,    49,    -3,
     249,    49,   158,   343,   202,   159,    -3,   -54,   211,    50,
     160,   161,    50,    88,   -54,   -54,    51,   -66,    99,    51,
     259,    71,   262,    14,   -66,    94,   265,   -66,   -66,   -66,
     -66,   -66,   -66,   -52,   -52,   103,   203,   -17,   -72,    94,
     275,   107,   -52,   240,   -17,   -72,   204,   -73,    52,   -15,
     -17,    52,   -24,    27,   -73,    99,   -15,   288,    53,   291,
     -75,    53,   -15,   101,   205,    16,   348,   -75,   -39,   351,
     -75,   -75,   -75,   -75,   -75,   -75,    54,   359,   107,    54,
     -18,   108,   -18,   -18,   -18,   116,   -18,   119,   -18,   -18,
     -18,   -18,   -18,   -18,   -18,   -48,   -18,   -18,   -18,   -18,
     118,   -16,   325,   120,   -18,   -18,   -11,   378,   -16,   121,
     206,   -26,   -26,   -11,   -16,    31,    32,    33,   339,   -11,
     317,    78,   127,   -12,   122,   326,   316,   128,   331,    41,
     -12,   -53,    43,   207,   198,   -49,   -12,    44,    45,   227,
     -53,   -53,   208,   129,   318,    99,   -66,   353,   130,   356,
     218,   -66,   199,   208,   206,   -52,   -66,   -66,   -66,   -66,
     -66,   -66,   319,   134,   -52,   226,   213,   -18,   107,   358,
     200,   325,   360,   320,   -18,   206,   214,   207,   198,   215,
     321,   201,   -48,   208,   325,   217,   369,   325,   202,   371,
     -33,   -51,   -51,   375,   326,   316,   199,   -33,   207,   198,
     -51,   240,   379,   -33,   248,   381,   -51,   326,   316,   250,
     326,   316,   322,   318,   200,   -51,   226,   199,   -27,   -27,
     203,   -34,   323,   -28,   -28,   201,   318,   251,   -34,   318,
     204,   319,   202,   252,   -34,   200,   255,    31,    32,    33,
     324,   254,   320,    35,   319,   -17,   201,   319,   205,   321,
     -13,    41,   -17,   202,    43,   320,   256,   -13,   320,    44,
      45,   258,   321,   -13,   203,   321,    79,   260,   170,    83,
      84,   285,   -25,   -25,   204,   266,   154,   155,   156,   261,
     -53,   322,   157,   -46,   -46,   203,    88,   -53,   -53,   276,
     158,   323,   205,   159,   322,   204,   188,   322,   160,   161,
     170,   -14,   170,   -20,   323,   284,   -60,   323,   -14,   324,
     -20,   -60,   -60,   205,   -14,   287,   244,   115,   -60,   -60,
     -60,   -60,   324,   289,    30,   324,    31,    32,    33,   -15,
      34,   293,    35,    36,    37,    38,   -15,    39,    40,   -16,
      41,    42,   188,    43,   -32,   162,   -16,   294,    44,    45,
     -17,   -32,   -17,   -17,   -17,   170,   -17,   -32,   -17,   -17,
     -17,   -17,   -17,   -17,   -17,   -72,   -17,   -17,   -17,   -17,
     209,   210,   -72,   180,   -17,   -17,   295,   162,   -72,   162,
     -43,   117,   -74,   221,   170,   223,   224,   -74,   -74,   -45,
     -45,   296,   -74,   -74,   -74,   -74,   -74,   -74,   -38,   -11,
      -8,   235,   170,   237,   238,   -38,   -11,    -8,   -44,   -44,
     -12,   -38,   -30,    -8,   -30,   -30,   -30,   -12,   -30,   180,
     -30,   -30,   -30,   -30,   344,   -30,   -30,   297,   -30,   -30,
     -30,   -30,   162,   298,   229,   -33,   -30,   -30,   170,   -58,
     170,   299,   -33,   188,   170,   -39,   -58,   -58,   -58,   -58,
     170,   170,   170,   170,   170,   170,   273,   188,   188,   300,
     162,   162,   162,   162,   188,   188,   188,   188,   188,   188,
     283,   246,   247,   -39,   -39,   170,   -73,   170,   180,   162,
     180,   180,   -15,   -73,   -15,   -15,   -15,   301,   -15,   -73,
     -15,   -15,   -15,   -15,   -15,   -15,   -15,   302,   -15,   -15,
     -15,   -15,   154,   155,   156,   290,   -15,   -15,   157,   336,
     337,   -34,   303,   304,   305,   162,   158,   162,   -34,   159,
     180,   162,   338,   171,   160,   161,   306,   162,   162,   162,
     162,   162,   162,   162,   180,   180,   327,   328,   329,   332,
     333,   180,   180,   180,   180,   180,   180,   180,   334,   -60,
     335,   189,   162,   345,   162,   171,   -60,   171,   340,    91,
     170,   -60,   -60,   -60,   -60,   170,   -13,   170,   341,   -30,
     342,   170,   346,   -13,   349,   -16,   -30,   -16,   -16,   -16,
     169,   -16,   347,   -16,   -16,   -16,   -16,   -16,   -16,   -16,
     350,   -16,   -16,   -16,   -16,   -40,   352,   189,   354,   -16,
     -16,   170,    86,   154,   155,   156,   -35,   361,   187,   157,
     171,   -37,   169,   -35,   169,   -14,   -22,   158,   -37,   -35,
     159,   -47,   -14,   -22,   -37,   160,   161,   -32,   114,   154,
     155,   156,   355,   362,   -32,   157,   363,   162,   171,   171,
     171,   171,   162,   158,   162,   364,   159,    11,   162,   365,
     -74,   160,   161,   366,   187,   -74,   189,   171,   189,   189,
     -74,   -74,   -74,   -74,   -74,   -74,   136,   169,    31,    32,
      33,   367,   137,   368,    35,   138,   139,   140,   162,   141,
     142,   -38,    41,   143,   106,    43,   372,   373,   -38,   229,
      44,    45,   374,   171,   -57,   171,   169,   376,   189,   171,
     380,   -57,   -57,   -57,   -57,   171,   171,   171,   171,   171,
     171,   171,   189,   189,   169,    23,    67,     0,   123,   189,
     189,   189,   189,   189,   189,   189,   168,     0,     0,   -66,
     171,     0,   171,   232,   -66,   -66,     0,   233,   -36,   -66,
     -66,   -66,   -66,   -66,   -66,   -36,   -31,     0,     0,     0,
     169,   -36,   169,   -31,   186,   187,   169,     0,   168,   -31,
     168,   -29,   169,   169,   169,   169,   169,   272,   -29,   187,
     187,   167,     0,   113,   -29,    -8,   187,   187,   187,   187,
     187,   282,    -8,     0,    31,    32,    33,   169,   -56,   169,
      78,     0,     0,    89,   -56,   -56,   -56,   -50,    41,   185,
     186,    43,   -35,   167,    86,   167,    44,    45,     0,   -35,
       0,   -37,   -36,   168,   -31,   171,   -29,   112,   -37,   -36,
     171,   -31,   171,   -29,     0,     0,   171,     0,     0,     0,
     -10,     0,   -10,   -10,   -10,     0,   -10,     0,   -10,   -10,
     -10,   -10,   168,   -10,   -10,   185,   -10,   -10,   -10,   -10,
       0,   154,   155,   156,   -10,   -10,   171,   157,   167,     0,
     168,   -54,   -54,     0,     0,   158,     0,     0,   159,   241,
     -54,   -54,   169,   160,   161,     0,     0,   169,   -66,   169,
       0,     0,    71,   169,     0,   -66,    72,   167,   -66,   -66,
     -66,   -66,   -66,   -66,     0,     0,   168,     0,   168,     0,
       0,   186,   168,     0,     0,   167,     0,     0,   168,   168,
     168,   168,   271,   169,     0,   186,   186,   166,     0,     0,
     -56,   -56,   186,   186,   186,   186,   281,   242,   -56,   -56,
     -56,   -55,     0,   168,     0,   168,    89,   -55,   -55,   -55,
       0,   167,     0,   167,     0,   184,   185,   167,     0,   166,
       0,   166,     0,   167,   167,   167,   270,     0,     0,     0,
     185,   185,   111,     0,     0,     0,     0,   185,   185,   185,
     280,   172,   173,   174,   -56,   165,     0,   175,   167,     0,
     167,   228,   -56,   -56,   -56,   176,     0,     0,   177,     0,
       0,   184,     0,   178,   179,     0,     0,     0,     0,   154,
     155,   156,     0,   183,   166,   220,     0,   165,     0,   165,
       0,     0,     0,   158,     0,     0,   159,     0,   168,   110,
       0,   160,   161,   168,     0,   168,     0,   -55,   -55,   168,
       0,     0,     0,   166,   242,   -55,   -55,   -55,   172,   173,
     174,     0,     0,     0,   234,     0,     0,   163,     0,   183,
       0,   166,   176,     0,     0,   177,     0,   -55,     0,   168,
     178,   179,   165,   167,   228,   -55,   -55,   -55,   167,     0,
     167,   243,     0,     0,   167,   181,   -58,   -58,     0,   163,
       0,   163,     0,   -58,   -58,   -58,   -58,   166,     0,   166,
       0,   165,   184,   166,     0,     0,     0,     0,     0,   166,
     166,   269,   -53,   -53,   167,   164,   184,   184,     0,   165,
     241,   -53,   -53,   184,   184,   279,     0,     0,     0,     0,
       0,   181,   125,     0,   166,     0,   166,     0,   -59,     0,
       0,     0,     0,   182,   163,   -59,     0,   164,    91,   164,
     -59,   -59,   -59,   -59,     0,   165,     0,   165,   109,     0,
     183,   165,     0,     0,   243,     0,     0,   165,   268,   -57,
     -57,     0,     0,   163,   183,   183,   -57,   -57,   -57,   -57,
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
     -12,   -12,     0,   -12,   -12,   -12,   -12,     0,   -59,     0,
       0,   -12,   -12,   -59,   -59,     0,     0,     0,   244,   163,
     -59,   -59,   -59,   -59,   163,   -33,   163,   -33,   -33,   -33,
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
     -41,   -41,   -41,   -41,   -60,     0,     0,     0,     0,   -60,
     -59,     0,     0,     0,   230,   -59,   -60,   -60,   -60,   -60,
     230,     0,   -59,   -59,   -59,   -59
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
       5,    26,    21,    28,     9,     1,    21,     8,     9,     9,
      16,     7,    17,    21,   117,    20,   119,    23,    23,     0,
      25,    26,    28,    29,    30,    31,     7,   130,   131,    21,
       0,   134,   211,    26,   119,    28,   139,     7,     7,   119,
     119,     0,    20,    26,    20,    28,   131,    20,     7,   134,
       0,   131,   131,    16,   134,   134,   159,     7,   119,    20,
      23,    26,     9,    28,     0,    28,    29,    30,    31,   248,
     131,     7,    23,   134,   177,    23,   119,    13,     3,     4,
       5,     6,    30,    31,     9,     8,     9,   119,   131,     0,
     193,   134,    17,   315,   119,    20,     7,    23,    20,   131,
      25,    26,   134,    29,    30,    31,   131,    16,   211,   134,
     213,    20,   215,    23,    23,   218,   219,    26,    27,    28,
      29,    30,    31,    21,    22,     9,   119,     0,     0,   232,
     233,   216,    30,    31,     7,     7,   119,     0,   131,     0,
      13,   134,    21,    22,     7,   248,     7,   250,   131,   252,
      16,   134,    13,    23,   119,    23,   335,    23,    23,   338,
      26,    27,    28,    29,    30,    31,   131,   346,   253,   134,
       1,    21,     3,     4,     5,    21,     7,    21,     9,    10,
      11,    12,    13,    14,    15,    23,    17,    18,    19,    20,
      23,     0,   295,    21,    25,    26,     0,   376,     7,    21,
     303,    21,    22,     7,    13,     3,     4,     5,   311,    13,
     295,     9,    23,     0,    21,   295,   295,    23,   303,    17,
       7,    21,    20,   303,   303,    23,    13,    25,    26,    29,
      30,    31,   335,    23,   295,   338,    16,   340,    23,   342,
      20,    21,   303,   346,   347,    21,    26,    27,    28,    29,
      30,    31,   295,    21,    30,    31,    20,     0,   343,   344,
     303,   364,   347,   295,     7,   368,    20,   347,   347,    20,
     295,   303,    21,   376,   377,    23,   361,   380,   303,   364,
       0,    21,    22,   368,   364,   364,   347,     7,   368,   368,
      30,    31,   377,    13,    20,   380,    21,   377,   377,    20,
     380,   380,   295,   364,   347,    30,    31,   368,    21,    22,
     303,     0,   295,    21,    22,   347,   377,    20,     7,   380,
     303,   364,   347,    20,    13,   368,     9,     3,     4,     5,
     295,    23,   364,     9,   377,     0,   368,   380,   303,   364,
       0,    17,     7,   368,    20,   377,    23,     7,   380,    25,
      26,    23,   377,    13,   347,   380,    41,     9,    43,    44,
      45,    23,    21,    22,   347,    21,     3,     4,     5,     6,
      23,   364,     9,    21,    22,   368,    29,    30,    31,    21,
      17,   364,   347,    20,   377,   368,    71,   380,    25,    26,
      75,     0,    77,     0,   377,     9,    16,   380,     7,   364,
       7,    21,    22,   368,    13,    23,    26,    92,    28,    29,
      30,    31,   377,     9,     1,   380,     3,     4,     5,     0,
       7,    23,     9,    10,    11,    12,     7,    14,    15,     0,
      17,    18,   117,    20,     0,    43,     7,    23,    25,    26,
       1,     7,     3,     4,     5,   130,     7,    13,     9,    10,
      11,    12,    13,    14,    15,     0,    17,    18,    19,    20,
       8,     9,     7,    71,    25,    26,    21,    75,    13,    77,
      21,    22,    16,   158,   159,   160,   161,    21,    22,    21,
      22,    21,    26,    27,    28,    29,    30,    31,     0,     0,
       0,   176,   177,   178,   179,     7,     7,     7,    21,    22,
       0,    13,     1,    13,     3,     4,     5,     7,     7,   117,
       9,    10,    11,    12,    13,    14,    15,    21,    17,    18,
      19,    20,   130,    21,    16,     0,    25,    26,   213,    21,
     215,    21,     7,   218,   219,    21,    28,    29,    30,    31,
     225,   226,   227,   228,   229,   230,   231,   232,   233,    21,
     158,   159,   160,   161,   239,   240,   241,   242,   243,   244,
     245,     8,     9,    21,    22,   250,     0,   252,   176,   177,
     178,   179,     1,     7,     3,     4,     5,    23,     7,    13,
       9,    10,    11,    12,    13,    14,    15,    23,    17,    18,
      19,    20,     3,     4,     5,     6,    25,    26,     9,     8,
       9,     0,    21,    21,    21,   213,    17,   215,     7,    20,
     218,   219,    20,    43,    25,    26,    21,   225,   226,   227,
     228,   229,   230,   231,   232,   233,    23,    23,    23,    23,
      23,   239,   240,   241,   242,   243,   244,   245,    23,    16,
      23,    71,   250,    23,   252,    75,    23,    77,    20,    26,
     335,    28,    29,    30,    31,   340,     0,   342,    20,     0,
      20,   346,    23,     7,     9,     1,     7,     3,     4,     5,
      43,     7,    13,     9,    10,    11,    12,    13,    14,    15,
      23,    17,    18,    19,    20,    23,    23,   117,     9,    25,
      26,   376,    30,     3,     4,     5,     0,    21,    71,     9,
     130,     0,    75,     7,    77,     0,     0,    17,     7,    13,
      20,    21,     7,     7,    13,    25,    26,     0,    91,     3,
       4,     5,     6,    23,     7,     9,    23,   335,   158,   159,
     160,   161,   340,    17,   342,    21,    20,     4,   346,    21,
      16,    25,    26,    21,   117,    21,   176,   177,   178,   179,
      26,    27,    28,    29,    30,    31,     1,   130,     3,     4,
       5,    21,     7,    21,     9,    10,    11,    12,   376,    14,
      15,     0,    17,    18,    19,    20,    23,    23,     7,    16,
      25,    26,    23,   213,    21,   215,   159,    23,   218,   219,
      21,    28,    29,    30,    31,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   177,    18,    27,    -1,   117,   239,
     240,   241,   242,   243,   244,   245,    43,    -1,    -1,    16,
     250,    -1,   252,    20,    21,    22,    -1,    24,     0,    26,
      27,    28,    29,    30,    31,     7,     0,    -1,    -1,    -1,
     213,    13,   215,     7,    71,   218,   219,    -1,    75,    13,
      77,     0,   225,   226,   227,   228,   229,   230,     7,   232,
     233,    43,    -1,    90,    13,     0,   239,   240,   241,   242,
     243,   244,     7,    -1,     3,     4,     5,   250,    23,   252,
       9,    -1,    -1,    28,    29,    30,    31,    23,    17,    71,
     117,    20,     0,    75,    30,    77,    25,    26,    -1,     7,
      -1,     0,     0,   130,     0,   335,     0,    89,     7,     7,
     340,     7,   342,     7,    -1,    -1,   346,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,    -1,     7,    -1,     9,    10,
      11,    12,   159,    14,    15,   117,    17,    18,    19,    20,
      -1,     3,     4,     5,    25,    26,   376,     9,   130,    -1,
     177,    21,    22,    -1,    -1,    17,    -1,    -1,    20,    29,
      30,    31,   335,    25,    26,    -1,    -1,   340,    16,   342,
      -1,    -1,    20,   346,    -1,    23,    24,   159,    26,    27,
      28,    29,    30,    31,    -1,    -1,   213,    -1,   215,    -1,
      -1,   218,   219,    -1,    -1,   177,    -1,    -1,   225,   226,
     227,   228,   229,   376,    -1,   232,   233,    43,    -1,    -1,
      21,    22,   239,   240,   241,   242,   243,    28,    29,    30,
      31,    23,    -1,   250,    -1,   252,    28,    29,    30,    31,
      -1,   213,    -1,   215,    -1,    71,   218,   219,    -1,    75,
      -1,    77,    -1,   225,   226,   227,   228,    -1,    -1,    -1,
     232,   233,    88,    -1,    -1,    -1,    -1,   239,   240,   241,
     242,     3,     4,     5,    21,    43,    -1,     9,   250,    -1,
     252,    28,    29,    30,    31,    17,    -1,    -1,    20,    -1,
      -1,   117,    -1,    25,    26,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,    71,   130,     9,    -1,    75,    -1,    77,
      -1,    -1,    -1,    17,    -1,    -1,    20,    -1,   335,    87,
      -1,    25,    26,   340,    -1,   342,    -1,    21,    22,   346,
      -1,    -1,    -1,   159,    28,    29,    30,    31,     3,     4,
       5,    -1,    -1,    -1,     9,    -1,    -1,    43,    -1,   117,
      -1,   177,    17,    -1,    -1,    20,    -1,    21,    -1,   376,
      25,    26,   130,   335,    28,    29,    30,    31,   340,    -1,
     342,    16,    -1,    -1,   346,    71,    21,    22,    -1,    75,
      -1,    77,    -1,    28,    29,    30,    31,   213,    -1,   215,
      -1,   159,   218,   219,    -1,    -1,    -1,    -1,    -1,   225,
     226,   227,    21,    22,   376,    43,   232,   233,    -1,   177,
      29,    30,    31,   239,   240,   241,    -1,    -1,    -1,    -1,
      -1,   117,   118,    -1,   250,    -1,   252,    -1,    16,    -1,
      -1,    -1,    -1,    71,   130,    23,    -1,    75,    26,    77,
      28,    29,    30,    31,    -1,   213,    -1,   215,    86,    -1,
     218,   219,    -1,    -1,    16,    -1,    -1,   225,   226,    21,
      22,    -1,    -1,   159,   232,   233,    28,    29,    30,    31,
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
      14,    15,    -1,    17,    18,    19,    20,    -1,    16,    -1,
      -1,    25,    26,    21,    22,    -1,    -1,    -1,    26,   335,
      28,    29,    30,    31,   340,     1,   342,     3,     4,     5,
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
      28,    29,    30,    31,    16,    -1,    -1,    -1,    -1,    21,
      16,    -1,    -1,    -1,    26,    21,    28,    29,    30,    31,
      26,    -1,    28,    29,    30,    31
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
      62,    63,    64,    65,    66,    67,    21,    22,    23,    21,
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
      64,    65,    66,    67,    55,    53,    21,    61,    62,    63,
      64,    65,    66,    67,     9,    23,    58,    23,    53,     9,
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
#line 126 "./src/parser.y"
                   {
        root_node = (yyvsp[0].node);
    }
#line 2216 "parser.tab.c"
    break;

  case 3: /* declarations: declarations declaration  */
#line 132 "./src/parser.y"
                               {
        (yyval.node) = new_node("declarations", "declarations", 0);
        (yyval.node)->child[0] = (yyvsp[-1].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2226 "parser.tab.c"
    break;

  case 4: /* declarations: declaration  */
#line 137 "./src/parser.y"
                  {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2234 "parser.tab.c"
    break;

  case 5: /* declarations: error  */
#line 140 "./src/parser.y"
            { parsing_errors++; }
#line 2240 "parser.tab.c"
    break;

  case 6: /* declaration: function_declaration_statement  */
#line 144 "./src/parser.y"
                                     {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2248 "parser.tab.c"
    break;

  case 7: /* declaration: variable_declaration_statement  */
#line 147 "./src/parser.y"
                                     {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2256 "parser.tab.c"
    break;

  case 8: /* block: '{' statements '}'  */
#line 153 "./src/parser.y"
                         {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2264 "parser.tab.c"
    break;

  case 9: /* statements: statements statement  */
#line 159 "./src/parser.y"
                           {
        (yyval.node) = new_node("statements", "statements", 0);
        (yyval.node)->child[0] = (yyvsp[-1].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2274 "parser.tab.c"
    break;

  case 10: /* statements: statement  */
#line 164 "./src/parser.y"
                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2282 "parser.tab.c"
    break;

  case 11: /* statement: expression_statement  */
#line 170 "./src/parser.y"
                           {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2290 "parser.tab.c"
    break;

  case 12: /* statement: io_statement  */
#line 173 "./src/parser.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2298 "parser.tab.c"
    break;

  case 13: /* statement: return_statement  */
#line 176 "./src/parser.y"
                       {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2306 "parser.tab.c"
    break;

  case 14: /* statement: variable_declaration_statement  */
#line 179 "./src/parser.y"
                                     {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2314 "parser.tab.c"
    break;

  case 15: /* statement: for_statement  */
#line 182 "./src/parser.y"
                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2322 "parser.tab.c"
    break;

  case 16: /* statement: if_else_statement  */
#line 185 "./src/parser.y"
                        {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2330 "parser.tab.c"
    break;

  case 17: /* statement: block  */
#line 188 "./src/parser.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2338 "parser.tab.c"
    break;

  case 18: /* statement: error  */
#line 191 "./src/parser.y"
            { parsing_errors++; }
#line 2344 "parser.tab.c"
    break;

  case 19: /* $@1: %empty  */
#line 195 "./src/parser.y"
                               {
        scope_id++;
        top++;
        push_scope(top, scope_id, scope_stack);
    }
#line 2354 "parser.tab.c"
    break;

  case 20: /* function_declaration_statement: SIMPLE_TYPE IDENTIFIER '(' $@1 parameters_optative ')' statement  */
#line 200 "./src/parser.y"
                                      {
        T_Symbol sym = symbol(
            (yyvsp[-6].token).content, 
            (yyvsp[-5].token).content, 
            "function", 
            (yyvsp[-5].token).scope, 
            (yyvsp[-5].token).line_idx, 
            (yyvsp[-5].token).column_idx
        );
        int error = check_redeclared((yyvsp[-5].token).content, symbol_table_idx, (yyvsp[-5].token).scope);
        if(error) {
            print_semantic_error("Function already declared", (yyvsp[-5].token).line_idx, (yyvsp[-5].token).column_idx);
        }

        insert_symbol(symbol_table_idx, sym);
        symbol_table_idx++;
        symbol_table_size++;
        pop_scope(top, scope_stack);
        if(top > 0) top--;

        (yyval.node) = new_node("function_declaration_statement", "func_declaration", 0);
        (yyval.node)->child[0] = new_node("type", (yyvsp[-6].token).content, 1);
        (yyval.node)->child[1] = new_node("id", (yyvsp[-5].token).content, 1);
        (yyval.node)->child[2] = (yyvsp[-2].node);
        (yyval.node)->child[3] = (yyvsp[0].node);
    }
#line 2385 "parser.tab.c"
    break;

  case 21: /* $@2: %empty  */
#line 226 "./src/parser.y"
                                           {
        scope_id++;
        top++;
        push_scope(top, scope_id, scope_stack);
    }
#line 2395 "parser.tab.c"
    break;

  case 22: /* function_declaration_statement: SIMPLE_TYPE LIST_TYPE IDENTIFIER '(' $@2 parameters_optative ')' statement  */
#line 230 "./src/parser.y"
                                        {
        char type[100];
        strcpy(type, (yyvsp[-7].token).content);
        strcat(type, " ");
        strcat(type, (yyvsp[-6].token).content);
        T_Symbol sym = symbol(
            type, 
            (yyvsp[-5].token).content, 
            "function", 
            (yyvsp[-5].token).scope, 
            (yyvsp[-5].token).line_idx, 
            (yyvsp[-5].token).column_idx
        );
        int error = check_redeclared((yyvsp[-5].token).content, symbol_table_idx, (yyvsp[-5].token).scope);
        if(error) {
            print_semantic_error("Function already declared", (yyvsp[-5].token).line_idx, (yyvsp[-5].token).column_idx);
        }

        insert_symbol(symbol_table_idx, sym);
        symbol_table_idx++;
        symbol_table_size++;
        pop_scope(top, scope_stack);
        if(top > 0) top--;

        (yyval.node) = new_node("function_declaration_statement", "func_declaration", 0);
        (yyval.node)->child[0] = new_node("type", type, 1);
        (yyval.node)->child[1] = new_node("id", (yyvsp[-5].token).content, 1);
        (yyval.node)->child[2] = (yyvsp[-2].node);
        (yyval.node)->child[3] = (yyvsp[0].node);
    }
#line 2430 "parser.tab.c"
    break;

  case 23: /* parameters_optative: %empty  */
#line 263 "./src/parser.y"
             {
        (yyval.node) = NULL;
    }
#line 2438 "parser.tab.c"
    break;

  case 24: /* parameters_optative: parameters  */
#line 266 "./src/parser.y"
                 {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2446 "parser.tab.c"
    break;

  case 25: /* parameters: parameters ',' parameter  */
#line 272 "./src/parser.y"
                               {
        (yyval.node) = new_node("parameters", "params", 0);
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2456 "parser.tab.c"
    break;

  case 26: /* parameters: parameter  */
#line 277 "./src/parser.y"
                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2464 "parser.tab.c"
    break;

  case 27: /* parameter: SIMPLE_TYPE IDENTIFIER  */
#line 283 "./src/parser.y"
                             {
        T_Symbol sym = symbol(
            (yyvsp[-1].token).content, 
            (yyvsp[0].token).content, 
            "parameter", 
            scope_stack[top], 
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
#line 2486 "parser.tab.c"
    break;

  case 28: /* parameter: SIMPLE_TYPE LIST_TYPE IDENTIFIER  */
#line 300 "./src/parser.y"
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
            (yyvsp[0].token).column_idx
        );
        insert_symbol(symbol_table_idx, sym);
        symbol_table_idx++;
        symbol_table_size++;

        (yyval.node) = new_node("function_parameter", "function_param", 0);
        (yyval.node)->child[0] = new_node("type", type, 1);
        (yyval.node)->child[1] = new_node("id", (yyvsp[0].token).content, 1);
    }
#line 2512 "parser.tab.c"
    break;

  case 29: /* for_statement: RW_FOR '(' expression_optative ';' or_expression_optative ';' expression_optative ')' statement  */
#line 324 "./src/parser.y"
                                                                                                      {
        (yyval.node) = new_node("for_statement", (yyvsp[-8].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[-6].node);
        (yyval.node)->child[1] = (yyvsp[-4].node);
        (yyval.node)->child[2] = (yyvsp[-2].node);
        (yyval.node)->child[3] = (yyvsp[0].node);
    }
#line 2524 "parser.tab.c"
    break;

  case 30: /* if_else_statement: RW_IF '(' expression ')' statement  */
#line 334 "./src/parser.y"
                                                    {
        (yyval.node) = new_node("if_else_statement", (yyvsp[-4].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2534 "parser.tab.c"
    break;

  case 31: /* if_else_statement: RW_IF '(' expression ')' statement RW_ELSE statement  */
#line 339 "./src/parser.y"
                                                           {
        (yyval.node) = new_node("if_else_statement", (yyvsp[-6].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[-4].node);
        (yyval.node)->child[1] = (yyvsp[-2].node);
        (yyval.node)->child[2] = new_node("else_rw", (yyvsp[-1].token).content, 0);
        (yyval.node)->child[2]->child[0] = (yyvsp[0].node);
    }
#line 2546 "parser.tab.c"
    break;

  case 32: /* expression_statement: expression ';'  */
#line 348 "./src/parser.y"
                     {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2554 "parser.tab.c"
    break;

  case 33: /* io_statement: input_statement  */
#line 354 "./src/parser.y"
                      {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2562 "parser.tab.c"
    break;

  case 34: /* io_statement: output_statement  */
#line 357 "./src/parser.y"
                       {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2570 "parser.tab.c"
    break;

  case 35: /* input_statement: IO_READ '(' IDENTIFIER ')' ';'  */
#line 363 "./src/parser.y"
                                     {
        (yyval.node) = new_node("input_statement", (yyvsp[-4].token).content, 0);
        (yyval.node)->child[0] = new_node("identifier", (yyvsp[-2].token).content, 1);
        int error = variable_unavailable((yyvsp[-2].token).content, symbol_table_idx, top, scope_stack);
        if(error) {
            print_semantic_error("Variable unavailable", (yyvsp[-2].token).line_idx, (yyvsp[-2].token).column_idx);
        }
    }
#line 2583 "parser.tab.c"
    break;

  case 36: /* output_statement: IO_WRITE '(' expression ')' ';'  */
#line 374 "./src/parser.y"
                                      {
        (yyval.node) = new_node("output_statement", (yyvsp[-4].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[-2].node);
    }
#line 2592 "parser.tab.c"
    break;

  case 37: /* output_statement: IO_WRITE '(' LIT_STRING ')' ';'  */
#line 378 "./src/parser.y"
                                      {
        (yyval.node) = new_node("output_statement", (yyvsp[-4].token).content, 0);
        (yyval.node)->child[0] = new_node("string_literal", (yyvsp[-2].token).content, 1);
    }
#line 2601 "parser.tab.c"
    break;

  case 38: /* return_statement: RW_RETURN expression ';'  */
#line 385 "./src/parser.y"
                               {
        (yyval.node) = new_node("return_statement", (yyvsp[-2].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[-1].node);
    }
#line 2610 "parser.tab.c"
    break;

  case 39: /* expression: IDENTIFIER '=' expression  */
#line 392 "./src/parser.y"
                                {
        (yyval.node) = new_node("assignment_expression", "=", 0);
        (yyval.node)->child[0] = new_node("id", (yyvsp[-2].token).content, 1);
        (yyval.node)->child[1] = (yyvsp[0].node);
        int error = variable_unavailable((yyvsp[-2].token).content, symbol_table_idx, top, scope_stack);
        if(error) {
            print_semantic_error("Variable unavailable", (yyvsp[-2].token).line_idx, (yyvsp[-2].token).column_idx);
        }
    }
#line 2624 "parser.tab.c"
    break;

  case 40: /* expression: or_expression  */
#line 401 "./src/parser.y"
                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2632 "parser.tab.c"
    break;

  case 41: /* function_call_expression: IDENTIFIER '(' function_arguments_optative ')'  */
#line 407 "./src/parser.y"
                                                     {
        (yyval.node) = new_node("function_call_expression", "function_call", 0);
        (yyval.node)->child[0] = new_node("id", (yyvsp[-3].token).content, 1);
        (yyval.node)->child[1] = (yyvsp[-1].node);
        int error = variable_unavailable((yyvsp[-3].token).content, symbol_table_idx, top, scope_stack);
        if(error) {
            print_semantic_error("Function unavailable", (yyvsp[-3].token).line_idx, (yyvsp[-3].token).column_idx);
        }
    }
#line 2646 "parser.tab.c"
    break;

  case 42: /* function_arguments_optative: %empty  */
#line 419 "./src/parser.y"
             {
        (yyval.node) = NULL;
    }
#line 2654 "parser.tab.c"
    break;

  case 43: /* function_arguments_optative: function_arguments  */
#line 422 "./src/parser.y"
                         {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2662 "parser.tab.c"
    break;

  case 44: /* function_arguments: function_arguments ',' function_argument  */
#line 428 "./src/parser.y"
                                               {
        (yyval.node) = new_node("function_arguments", "function_args", 0);
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2672 "parser.tab.c"
    break;

  case 45: /* function_arguments: function_argument  */
#line 433 "./src/parser.y"
                        {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2680 "parser.tab.c"
    break;

  case 46: /* function_argument: expression  */
#line 439 "./src/parser.y"
                 {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2688 "parser.tab.c"
    break;

  case 47: /* expression_optative: %empty  */
#line 445 "./src/parser.y"
             {
        (yyval.node) = NULL;
    }
#line 2696 "parser.tab.c"
    break;

  case 48: /* expression_optative: expression  */
#line 448 "./src/parser.y"
                 {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2704 "parser.tab.c"
    break;

  case 49: /* or_expression_optative: %empty  */
#line 454 "./src/parser.y"
             {
        (yyval.node) = NULL;
    }
#line 2712 "parser.tab.c"
    break;

  case 50: /* or_expression_optative: or_expression  */
#line 457 "./src/parser.y"
                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2720 "parser.tab.c"
    break;

  case 51: /* or_expression: or_expression LOGICAL_OP_OR and_expression  */
#line 463 "./src/parser.y"
                                                 {
        (yyval.node) = new_node("or_expression", (yyvsp[-1].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2730 "parser.tab.c"
    break;

  case 52: /* or_expression: and_expression  */
#line 468 "./src/parser.y"
                     {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2738 "parser.tab.c"
    break;

  case 53: /* and_expression: and_expression LOGICAL_OP_AND equality_expression  */
#line 474 "./src/parser.y"
                                                        {
        (yyval.node) = new_node("and_expression", (yyvsp[-1].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2748 "parser.tab.c"
    break;

  case 54: /* and_expression: equality_expression  */
#line 479 "./src/parser.y"
                          {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2756 "parser.tab.c"
    break;

  case 55: /* equality_expression: equality_expression EQUALITY_OP relational_expression  */
#line 485 "./src/parser.y"
                                                            {
        (yyval.node) = new_node("equality_expression", (yyvsp[-1].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2766 "parser.tab.c"
    break;

  case 56: /* equality_expression: relational_expression  */
#line 490 "./src/parser.y"
                            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2774 "parser.tab.c"
    break;

  case 57: /* relational_expression: relational_expression RELATIONAL_OP list_expression  */
#line 496 "./src/parser.y"
                                                          {
        (yyval.node) = new_node("relational_expression", (yyvsp[-1].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2784 "parser.tab.c"
    break;

  case 58: /* relational_expression: list_expression  */
#line 501 "./src/parser.y"
                      {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2792 "parser.tab.c"
    break;

  case 59: /* list_expression: list_expression BINARY_LIST_OP addition_expression  */
#line 507 "./src/parser.y"
                                                         {
        (yyval.node) = new_node("list_expression", (yyvsp[-1].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2802 "parser.tab.c"
    break;

  case 60: /* list_expression: addition_expression  */
#line 512 "./src/parser.y"
                          {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2810 "parser.tab.c"
    break;

  case 61: /* addition_expression: addition_expression ARITMETIC_OP_ADDITIVE multiplication_expression  */
#line 518 "./src/parser.y"
                                                                          {
        (yyval.node) = new_node("addition_expression", (yyvsp[-1].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2820 "parser.tab.c"
    break;

  case 62: /* addition_expression: multiplication_expression  */
#line 523 "./src/parser.y"
                                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2828 "parser.tab.c"
    break;

  case 63: /* multiplication_expression: multiplication_expression ARITMETIC_OP_MULTIPLICATIVE simple_value  */
#line 529 "./src/parser.y"
                                                                         {
        (yyval.node) = new_node("multiplication_expression", (yyvsp[-1].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[-2].node);
        (yyval.node)->child[1] = (yyvsp[0].node);
    }
#line 2838 "parser.tab.c"
    break;

  case 64: /* multiplication_expression: simple_value  */
#line 534 "./src/parser.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2846 "parser.tab.c"
    break;

  case 65: /* simple_value: constant  */
#line 540 "./src/parser.y"
               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2854 "parser.tab.c"
    break;

  case 66: /* simple_value: IDENTIFIER  */
#line 543 "./src/parser.y"
                 {
        (yyval.node) = new_node("id", (yyvsp[0].token).content, 1);
        int error = variable_unavailable((yyvsp[0].token).content, symbol_table_idx, top, scope_stack);
        if(error) {
            print_semantic_error("Variable unavailable", (yyvsp[0].token).line_idx, (yyvsp[0].token).column_idx);
        }
    }
#line 2866 "parser.tab.c"
    break;

  case 67: /* simple_value: ARITMETIC_OP_ADDITIVE simple_value  */
#line 550 "./src/parser.y"
                                         {
        (yyval.node) = new_node("simple_value_signed", (yyvsp[-1].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[0].node);
    }
#line 2875 "parser.tab.c"
    break;

  case 68: /* simple_value: '!' simple_value  */
#line 554 "./src/parser.y"
                       {
        (yyval.node) = new_node("simple_value_exclamation", "!", 0);
        (yyval.node)->child[0] = (yyvsp[0].node);
    }
#line 2884 "parser.tab.c"
    break;

  case 69: /* simple_value: UNARY_LIST_OP simple_value  */
#line 558 "./src/parser.y"
                                 {
        (yyval.node) = new_node("simple_value_unary", (yyvsp[-1].token).content, 0);
        (yyval.node)->child[0] = (yyvsp[0].node);
    }
#line 2893 "parser.tab.c"
    break;

  case 70: /* simple_value: '(' expression ')'  */
#line 562 "./src/parser.y"
                         {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2901 "parser.tab.c"
    break;

  case 71: /* simple_value: function_call_expression  */
#line 565 "./src/parser.y"
                               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2909 "parser.tab.c"
    break;

  case 72: /* variable_declaration_statement: SIMPLE_TYPE IDENTIFIER ';'  */
#line 571 "./src/parser.y"
                                 {
        T_Symbol sym = symbol(
            (yyvsp[-2].token).content, 
            (yyvsp[-1].token).content, 
            "variable", 
            (yyvsp[-1].token).scope, 
            (yyvsp[-1].token).line_idx, 
            (yyvsp[-1].token).column_idx
        );
        
        int error = check_redeclared((yyvsp[-1].token).content, symbol_table_idx, (yyvsp[-1].token).scope);
        if(error) {
            print_semantic_error("Variable already declared", (yyvsp[-1].token).line_idx, (yyvsp[-1].token).column_idx);
        }

        insert_symbol(symbol_table_idx, sym);
        symbol_table_idx++;
        symbol_table_size++;

        (yyval.node) = new_node("variable_declaration", "var_declaration", 0);
        (yyval.node)->child[0] = new_node("type", (yyvsp[-2].token).content, 1);
        (yyval.node)->child[1] = new_node("id", (yyvsp[-1].token).content, 1);

    }
#line 2938 "parser.tab.c"
    break;

  case 73: /* variable_declaration_statement: SIMPLE_TYPE LIST_TYPE IDENTIFIER ';'  */
#line 595 "./src/parser.y"
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
            (yyvsp[-1].token).column_idx
        );

        int error = check_redeclared((yyvsp[-1].token).content, symbol_table_idx, (yyvsp[-1].token).scope);
        if(error) {
            print_semantic_error("Variable already declared", (yyvsp[-1].token).line_idx, (yyvsp[-1].token).column_idx);
        }
        insert_symbol(symbol_table_idx, sym);
        symbol_table_idx++;
        symbol_table_size++;

        (yyval.node) = new_node("variable_declaration", "var_declaration", 0);
        (yyval.node)->child[0] = new_node("type", type, 1);
        (yyval.node)->child[1] = new_node("id", (yyvsp[-1].token).content, 1);
    }
#line 2969 "parser.tab.c"
    break;

  case 74: /* constant: C_INTEGER  */
#line 624 "./src/parser.y"
                {
        (yyval.node) = new_node("const", (yyvsp[0].token).content, 1);
    }
#line 2977 "parser.tab.c"
    break;

  case 75: /* constant: C_FLOAT  */
#line 627 "./src/parser.y"
              {
        (yyval.node) = new_node("const", (yyvsp[0].token).content, 1);
    }
#line 2985 "parser.tab.c"
    break;

  case 76: /* constant: C_NIL  */
#line 630 "./src/parser.y"
            {
        (yyval.node) = new_node("const", (yyvsp[0].token).content, 1);
    }
#line 2993 "parser.tab.c"
    break;


#line 2997 "parser.tab.c"

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

#line 635 "./src/parser.y"


void yyerror(const char* err_msg){
    printf("\n[PARSER] Line: %d | Column: %d\t=> ERROR %s\n\n", yylval.token.line_idx, yylval.token.column_idx, err_msg);
    errors_count++;
    return;
}

void print_semantic_error(char* text, int line, int column) {
    printf("[SEMANTIC ERROR] Line: %d | Column: %d\t", line, column);
    printf("%s\n", text);
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
    
    print_symbol_table(symbol_table_size);

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

    fclose(yyin);
    yylex_destroy();

    return 0;
}
