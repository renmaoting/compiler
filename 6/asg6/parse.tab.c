/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "parse.y" /* yacc.c:339  */

  #include <iostream>
  #include <cmath>
  #include <algorithm>
  #include <iomanip>
  #include "symbolTable.h" 
  #include "childNode.h" 
	int yylex (void);
	extern int yylineno;
	extern char *yytext;
    int level = 0;
    int ifExeFunc= 0;// decide where to exe func
	void yyerror (char const *);

#line 81 "parse.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parse.tab.h".  */
#ifndef YY_YY_PARSE_TAB_H_INCLUDED
# define YY_YY_PARSE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AMPEREQUAL = 258,
    AMPERSAND = 259,
    AND = 260,
    AS = 261,
    ASSERT = 262,
    AT = 263,
    BACKQUOTE = 264,
    BAR = 265,
    BREAK = 266,
    CIRCUMFLEX = 267,
    CIRCUMFLEXEQUAL = 268,
    CLASS = 269,
    COLON = 270,
    COMMA = 271,
    CONTINUE = 272,
    DEDENT = 273,
    DEF = 274,
    DEL = 275,
    DOT = 276,
    DOUBLESLASH = 277,
    DOUBLESLASHEQUAL = 278,
    DOUBLESTAR = 279,
    DOUBLESTAREQUAL = 280,
    ELIF = 281,
    ELSE = 282,
    ENDMARKER = 283,
    EQEQUAL = 284,
    EQUAL = 285,
    EXCEPT = 286,
    EXEC = 287,
    FINALLY = 288,
    FOR = 289,
    FROM = 290,
    GLOBAL = 291,
    GREATER = 292,
    GREATEREQUAL = 293,
    GRLT = 294,
    IF = 295,
    IMPORT = 296,
    IN = 297,
    INDENT = 298,
    IS = 299,
    LAMBDA = 300,
    LBRACE = 301,
    LEFTSHIFT = 302,
    LEFTSHIFTEQUAL = 303,
    LESS = 304,
    LESSEQUAL = 305,
    LPAR = 306,
    LSQB = 307,
    MINEQUAL = 308,
    MINUS = 309,
    NAME = 310,
    NEWLINE = 311,
    NOT = 312,
    NOTEQUAL = 313,
    NUMBER = 314,
    FLOAT = 315,
    OR = 316,
    PASS = 317,
    PERCENT = 318,
    PERCENTEQUAL = 319,
    PLUS = 320,
    PLUSEQUAL = 321,
    PRINT = 322,
    RAISE = 323,
    RBRACE = 324,
    RETURN = 325,
    RIGHTSHIFT = 326,
    RIGHTSHIFTEQUAL = 327,
    RPAR = 328,
    RSQB = 329,
    SEMI = 330,
    SLASH = 331,
    SLASHEQUAL = 332,
    STAR = 333,
    STAREQUAL = 334,
    STRING = 335,
    TILDE = 336,
    TRY = 337,
    VBAREQUAL = 338,
    WHILE = 339,
    WITH = 340,
    YIELD = 341
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 17 "parse.y" /* yacc.c:355  */

    Ast* ast;
    double d;
    int i;
    char* c;
    std::vector<Ast*>* vec;

#line 216 "parse.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 231 "parse.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  139
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   880

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  142
/* YYNRULES -- Number of rules.  */
#define YYNRULES  326
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  491

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   341

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    58,    58,    59,    60,    69,    70,    73,    76,    77,
      80,    81,    84,    85,    88,    89,    92,    93,    96,    97,
     100,   100,   112,   113,   116,   117,   120,   121,   124,   125,
     128,   129,   132,   133,   136,   137,   140,   143,   144,   147,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   161,
     192,   203,   204,   207,   208,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   225,   225,   232,
     235,   236,   239,   240,   243,   246,   249,   250,   251,   252,
     253,   256,   259,   262,   263,   266,   269,   270,   273,   274,
     277,   278,   281,   282,   285,   288,   289,   292,   293,   296,
     297,   300,   301,   302,   305,   306,   309,   310,   313,   316,
     317,   320,   321,   324,   330,   338,   339,   342,   343,   346,
     347,   348,   349,   350,   351,   352,   353,   356,   357,   360,
     361,   364,   365,   368,   369,   372,   373,   376,   377,   380,
     381,   384,   385,   388,   391,   392,   395,   396,   399,   400,
     403,   404,   407,   408,   412,   413,   418,   422,   427,   428,
     431,   432,   435,   436,   445,   446,   449,   450,   453,   454,
     457,   458,   461,   462,   465,   466,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   483,   484,   487,
     488,   491,   492,   495,   496,   499,   500,   503,   504,   513,
     514,   517,   518,   538,   539,   540,   541,   544,   550,   553,
     554,   555,   558,   561,   572,   573,   576,   577,   578,   579,
     580,   585,   586,   587,   590,   591,   594,   595,   598,   599,
     602,   603,   606,   607,   610,   611,   614,   615,   618,   619,
     622,   623,   624,   627,   630,   631,   632,   635,   636,   639,
     640,   643,   644,   647,   651,   654,   655,   658,   659,   662,
     663,   666,   667,   670,   671,   674,   675,   676,   677,   678,
     679,   682,   683,   686,   687,   690,   691,   694,   695,   698,
     699,   702,   703,   707,   708,   711,   712,   715,   716,   719,
     723,   724,   727,   728,   729,   732,   733,   734,   737,   738,
     739,   742,   743,   744,   747,   748,   749,   752,   753,   754,
     758,   759,   760,   763,   764,   765,   768,   769,   770,   773,
     776,   779,   780,   781,   784,   785,   786
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AMPEREQUAL", "AMPERSAND", "AND", "AS",
  "ASSERT", "AT", "BACKQUOTE", "BAR", "BREAK", "CIRCUMFLEX",
  "CIRCUMFLEXEQUAL", "CLASS", "COLON", "COMMA", "CONTINUE", "DEDENT",
  "DEF", "DEL", "DOT", "DOUBLESLASH", "DOUBLESLASHEQUAL", "DOUBLESTAR",
  "DOUBLESTAREQUAL", "ELIF", "ELSE", "ENDMARKER", "EQEQUAL", "EQUAL",
  "EXCEPT", "EXEC", "FINALLY", "FOR", "FROM", "GLOBAL", "GREATER",
  "GREATEREQUAL", "GRLT", "IF", "IMPORT", "IN", "INDENT", "IS", "LAMBDA",
  "LBRACE", "LEFTSHIFT", "LEFTSHIFTEQUAL", "LESS", "LESSEQUAL", "LPAR",
  "LSQB", "MINEQUAL", "MINUS", "NAME", "NEWLINE", "NOT", "NOTEQUAL",
  "NUMBER", "FLOAT", "OR", "PASS", "PERCENT", "PERCENTEQUAL", "PLUS",
  "PLUSEQUAL", "PRINT", "RAISE", "RBRACE", "RETURN", "RIGHTSHIFT",
  "RIGHTSHIFTEQUAL", "RPAR", "RSQB", "SEMI", "SLASH", "SLASHEQUAL", "STAR",
  "STAREQUAL", "STRING", "TILDE", "TRY", "VBAREQUAL", "WHILE", "WITH",
  "YIELD", "$accept", "start", "single_input", "file_input",
  "pick_NEWLINE_stmt", "star_NEWLINE_stmt", "decorator", "opt_arglist",
  "decorators", "decorated", "funcdef", "$@1", "parameters", "varargslist",
  "opt_EQUAL_test", "star_fpdef_COMMA", "opt_DOUBLESTAR_NAME",
  "pick_STAR_DOUBLESTAR", "fpdef", "fplist", "stmt", "simple_stmt",
  "small_stmt", "expr_stmt", "pick_yield_expr_testlist", "star_EQUAL",
  "augassign", "print_stmt", "$@2", "opt_test", "opt_test_2", "del_stmt",
  "pass_stmt", "flow_stmt", "break_stmt", "continue_stmt", "return_stmt",
  "yield_stmt", "raise_stmt", "opt_COMMA_test", "opt_test_3",
  "import_stmt", "import_name", "import_from", "star_DOT", "plus_DOT",
  "pick_STAR_import", "import_as_name", "dotted_as_name",
  "import_as_names", "dotted_as_names", "dotted_name", "global_stmt",
  "exec_stmt", "assert_stmt", "compound_stmt", "if_stmt", "star_ELIF",
  "while_stmt", "for_stmt", "try_stmt", "plus_except", "opt_ELSE",
  "opt_FINALLY", "with_stmt", "star_COMMA_with_item", "with_item",
  "except_clause", "pick_AS_COMMA", "opt_AS_COMMA", "suite", "plus_stmt",
  "testlist_safe", "old_test", "old_lambdef", "test", "opt_IF_ELSE",
  "or_test", "and_test", "not_test", "comparison", "comp_op", "expr",
  "xor_expr", "and_expr", "shift_expr", "pick_LEFTSHIFT_RIGHTSHIFT",
  "arith_expr", "pick_PLUS_MINUS", "term", "pick_multop", "factor",
  "pick_unop", "power", "star_trailer", "atom",
  "pick_yield_expr_testlist_comp", "opt_yield_test", "opt_listmaker",
  "opt_dictorsetmaker", "plus_STRING", "listmaker", "testlist_comp",
  "lambdef", "trailer", "subscriptlist", "subscript", "opt_test_only",
  "opt_sliceop", "sliceop", "exprlist", "testlist", "dictorsetmaker",
  "pick_comp_for", "pick_for_test", "classdef", "opt_testlist", "arglist",
  "argument", "opt_comp_for", "list_iter", "list_for", "list_if",
  "comp_iter", "comp_for", "comp_if", "testlist1", "encoding_decl",
  "yield_expr", "star_fpdef_notest", "star_COMMA_expr", "star_COMMA_fpdef",
  "star_COMMA_test", "star_test_COLON_test", "star_COMMA_subscript",
  "star_COMMA_import_as_name", "plus_COMMA_test", "plus_COMMA_old_test",
  "dictarg", "listarg", "arglist_postlist", "small_stmt_STAR_OR_SEMI", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341
};
# endif

#define YYPACT_NINF -366

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-366)))

#define YYTABLE_NINF -309

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     403,   762,    -4,   762,  -366,    45,  -366,    76,   275,   275,
     275,   122,   124,   762,    -4,    66,   762,    17,   762,  -366,
      87,   148,   348,  -366,  -366,  -366,  -366,   113,   762,   762,
     105,  -366,   174,   762,   762,   762,   190,  -366,  -366,   483,
     163,   184,   157,  -366,  -366,   194,  -366,   121,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,   181,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
     182,    18,   195,  -366,   822,   189,   197,   198,   -10,    93,
      28,  -366,   275,  -366,    33,  -366,  -366,    22,  -366,  -366,
    -366,  -366,   200,  -366,    88,  -366,   143,    13,  -366,    39,
    -366,    31,   168,    75,    -4,   170,  -366,   199,  -366,   202,
      36,   762,    57,  -366,   204,    14,   191,   152,   151,  -366,
      32,  -366,   150,  -366,  -366,    91,   153,  -366,  -366,   762,
     762,   209,  -366,  -366,   643,   214,   215,   227,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,   705,   179,   183,
     762,  -366,   348,   348,  -366,   348,  -366,  -366,  -366,  -366,
    -366,   185,  -366,  -366,   201,  -366,   275,   275,   275,   275,
    -366,  -366,   275,  -366,  -366,   275,  -366,  -366,  -366,  -366,
     275,  -366,   186,   315,   235,   216,    33,  -366,  -366,  -366,
    -366,    17,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,    17,   762,   192,   315,  -366,  -366,   762,   643,   762,
     188,   275,  -366,   762,   762,  -366,  -366,   116,    67,   643,
      -4,   193,  -366,   229,   176,   762,   203,   205,  -366,   762,
     234,   762,   275,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
     275,  -366,  -366,  -366,   238,  -366,   182,   762,  -366,   219,
    -366,   142,   643,   762,   242,   275,   121,  -366,  -366,   182,
      19,   195,  -366,  -366,  -366,   189,   197,   198,   -10,    93,
      28,  -366,  -366,   762,   762,   196,   130,  -366,   243,  -366,
     247,   245,   252,   208,   254,   253,   275,  -366,   241,  -366,
    -366,  -366,  -366,  -366,   206,  -366,  -366,  -366,   212,    99,
     259,    39,   261,   260,    67,   223,   285,  -366,  -366,   277,
    -366,   270,  -366,  -366,    57,  -366,  -366,  -366,  -366,   281,
    -366,     5,  -366,   140,   256,   257,   762,  -366,  -366,  -366,
     261,  -366,   762,   286,   276,   287,   278,   215,   643,   189,
    -366,  -366,   762,  -366,  -366,  -366,   762,  -366,  -366,   315,
     744,   283,  -366,    81,  -366,   762,  -366,  -366,   250,   293,
    -366,   236,   643,  -366,   762,  -366,   643,  -366,   237,   263,
     223,  -366,   762,   292,   229,   288,  -366,  -366,   191,   762,
    -366,  -366,  -366,   348,   793,   298,  -366,   563,    37,   643,
     305,   289,   643,   308,  -366,  -366,  -366,  -366,  -366,   312,
    -366,  -366,  -366,   254,  -366,   318,  -366,   643,  -366,  -366,
    -366,   309,  -366,  -366,   277,   322,   323,  -366,   291,   234,
     328,    90,    68,    25,   331,  -366,   297,   762,  -366,  -366,
    -366,  -366,  -366,   762,  -366,  -366,   643,   329,  -366,   319,
     643,   744,  -366,   762,  -366,  -366,  -366,   338,  -366,   643,
     643,  -366,  -366,   762,   793,  -366,  -366,  -366,   793,   344,
     793,  -366,  -366,  -366,   793,  -366,  -366,  -366,   643,  -366,
    -366,  -366,  -366,   643,   270,  -366,   346,   129,  -366,   793,
      25,   349,  -366,  -366,  -366,  -366,  -366,  -366,  -366,   793,
    -366
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      11,     0,     0,     0,    81,     0,    82,     0,     0,     0,
       0,    98,     0,     0,     0,    29,   231,   227,   229,   210,
     220,     8,     0,   221,   222,    75,   209,    67,    87,    84,
     233,   211,     0,     0,     0,   291,     0,     4,     2,    11,
       0,    17,     0,   126,   124,     9,    37,   326,    40,    41,
      42,    43,    44,    76,    77,    78,    80,    79,    45,    92,
      93,    46,    47,    48,    38,   119,   120,   121,   122,   123,
     303,   167,   168,   170,   173,   174,   187,   189,   191,   193,
     197,   201,     0,   208,   215,   223,   165,    54,   125,     3,
      85,   220,   118,   111,     0,   287,     0,     0,    20,   297,
      74,   116,     0,    98,     0,     0,   114,     0,   109,    94,
     107,     0,     0,    34,     0,     0,    27,   303,     0,   230,
     303,   226,     0,   225,   224,   303,     0,   228,   172,     0,
      71,    91,    83,   232,     0,     0,   145,   147,   290,     1,
       8,    10,     9,     7,    16,    19,    18,   325,     0,     0,
     302,   254,     0,     0,   164,     0,   178,   177,   179,   181,
     183,   185,   176,   180,     0,   182,     0,     0,     0,     0,
     195,   196,     0,   200,   199,     0,   206,   205,   204,   203,
       0,   207,     0,    15,   248,   213,   215,    60,    62,    66,
      65,     0,    63,    56,    59,    55,    64,    58,    57,    61,
      50,     0,     0,     0,    15,    13,   219,     0,     0,   264,
       0,   296,   253,     0,     0,    97,    99,     0,     0,     0,
       0,     0,   239,   294,     0,     0,     0,     0,    24,     0,
     300,     0,     0,   256,   259,   260,   218,   236,   237,   216,
       0,   234,   235,   217,    73,    68,   303,     0,    86,     0,
     154,     0,     0,     0,     0,     0,   326,    39,   113,   303,
       0,   169,   171,   186,   184,   175,   188,   190,   192,   194,
     198,   202,   242,     0,     0,     0,   274,    14,   267,   270,
     269,     0,   245,     0,   309,     0,     0,   214,    54,    52,
      51,    49,   117,   112,     0,   288,   262,   263,     0,    29,
       0,   297,    89,     0,     0,     0,   105,   101,    96,   312,
     103,   130,   110,   106,   293,    36,    35,   238,    33,    31,
      26,    29,    25,   306,     0,     0,     0,    69,    72,    70,
      89,   157,   149,     0,   140,     0,   132,   145,     0,   146,
     324,   301,     0,   319,   320,   240,     0,   271,   273,   266,
       0,     0,   241,   248,   243,   248,   212,    53,     0,     0,
      23,     0,     0,   295,     0,   115,     0,    95,     0,     0,
     311,   108,     0,   128,   294,     0,    32,    28,    27,   305,
     255,   257,   258,     0,     0,   315,    90,     0,   153,     0,
       0,   142,     0,     0,   144,   143,   166,   272,   265,   323,
     322,   268,   244,   309,   247,   250,    12,     0,    22,    21,
      88,   134,   102,   104,   312,     0,     0,   292,     0,   300,
       0,   284,    29,   278,   159,   161,   160,   314,   313,   155,
     156,   150,   151,     0,   148,   136,     0,     0,   135,   138,
       0,     0,   307,   252,   246,   249,   261,     0,   310,     0,
       0,    30,   298,     0,     0,   283,   281,   282,     0,     0,
       0,   277,   275,   276,     0,   158,   152,   139,     0,   137,
     131,   321,   251,     0,   130,   127,   306,   286,   163,     0,
     280,   318,   141,   133,   129,   304,   285,   162,   279,   317,
     316
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -366,  -366,  -366,  -366,  -366,   325,  -366,   164,   332,  -366,
     334,  -366,  -366,  -288,     3,    56,  -366,  -366,  -106,  -366,
     -36,     1,   232,  -366,   217,    94,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,    53,
    -366,  -366,  -366,  -366,   282,   284,    80,    20,   166,    84,
    -366,    16,  -366,  -366,  -366,  -366,  -366,   -83,  -366,  -366,
    -366,   -47,  -366,  -366,  -366,    60,   145,  -366,  -366,  -366,
    -185,  -366,  -366,  -365,  -366,    -1,  -366,  -147,   248,   -13,
    -366,  -366,    21,   239,   251,   240,  -366,   244,  -366,   246,
    -366,   -69,  -366,  -366,   218,  -366,  -366,  -366,  -366,  -366,
     385,  -366,  -366,  -366,  -366,  -366,    71,    70,  -366,  -366,
      -6,   -21,  -366,  -366,  -366,   388,  -366,    78,  -328,  -366,
     -49,   311,  -366,   -44,  -110,  -366,  -366,  -366,     4,    72,
     133,    26,   -81,   -35,    44,    42,    65,   -30,  -326,  -366,
      12,   210
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    36,    37,    38,    39,    40,    41,   275,    42,    43,
      44,   210,   300,   114,   230,   115,   376,   228,   116,   224,
      45,   250,    47,    48,   288,   200,   201,    49,   130,   245,
     327,    50,    51,    52,    53,    54,    55,    56,    57,   365,
     248,    58,    59,    60,   104,   105,   308,   309,   108,   310,
     109,   110,    61,    62,    63,    64,    65,   373,    66,    67,
      68,   334,   391,   438,    69,   254,   136,   335,   433,   434,
     251,   387,   423,   481,   425,    70,   154,    71,    72,    73,
      74,   166,    75,    76,    77,    78,   172,    79,   175,    80,
     180,    81,    82,    83,   185,    84,   121,   122,   126,   118,
      85,   127,   123,    86,   186,   283,   284,   285,   444,   445,
     100,    87,   119,   380,   233,    88,   298,   277,   278,   347,
     461,   462,   463,   455,   456,   457,    96,    89,    90,   315,
     212,   322,   151,   382,   354,   371,   328,   465,   279,   280,
     401,   148
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      92,    46,    95,   142,   102,   260,   223,   234,   132,   128,
     237,   361,   107,   181,   138,   117,   120,   125,    94,   424,
    -299,   124,   399,   296,   400,   187,     3,   131,   208,    99,
     101,    99,   135,   137,   311,   188,   235,   170,   226,   238,
      46,   167,   221,   431,   242,   189,   342,   190,   150,   167,
     176,    93,   191,   432,   182,   211,   112,   203,   152,   240,
     113,   171,    15,    16,   209,   460,   232,   336,    17,    18,
     192,    19,    91,   213,    22,   193,    23,    24,  -299,   153,
     153,   111,    26,   458,   183,   184,   194,  -289,   195,   477,
       3,   177,   227,   478,   196,   480,   103,    30,    31,   197,
      97,   198,   281,    35,   178,   199,   179,   150,   112,   203,
     222,   271,   113,   399,   487,   400,  -100,   112,   305,   112,
     217,   113,   306,   113,   232,   240,    15,    16,   244,   246,
     454,    98,    17,    18,   459,    19,    91,   203,    22,   204,
      23,    24,   262,   103,   205,   307,    26,   173,    -5,   259,
     112,   153,   206,   395,   113,  -308,   379,   304,   174,   207,
     346,    30,    31,   232,   232,   329,   348,   231,   150,   454,
     289,     5,   360,   332,   232,   333,     7,   409,   341,   106,
     289,   411,   276,   282,   129,    30,   232,   265,   297,   134,
     139,   143,     2,   303,    -6,   290,   147,   149,   150,   167,
     155,   292,   169,   276,   435,   290,   295,   439,   374,   168,
     214,   218,   302,   381,   219,   378,   202,   356,   220,   225,
     236,   229,   446,   239,   317,   247,   324,   243,   320,   252,
     323,   253,   301,   255,   325,   257,   421,   426,   258,   299,
     286,   272,   263,   264,     3,   314,   330,   293,   313,   316,
     321,   467,   137,    99,   326,   470,   281,   338,   318,   349,
     319,    99,   331,   350,   474,   475,   351,  -247,   355,   345,
     353,   191,   343,   344,   362,   366,   339,   364,   306,   358,
      15,    16,   352,   482,     3,   359,    17,    18,   483,    19,
      91,   369,    22,   370,    23,    24,   372,   375,   383,   384,
      26,   389,   392,   390,   402,   393,   406,   426,   407,   408,
     412,   426,   418,   426,   427,    30,    31,   426,   413,   416,
     436,    16,   437,   440,     3,   385,    17,    18,   441,    19,
      91,   388,   426,   443,    23,    24,   447,   449,   450,   273,
      26,   396,   426,   453,   468,   397,   451,   464,   276,   276,
     332,   430,   282,   473,   404,    30,    31,     3,   153,   479,
      15,    16,   379,   410,   141,   489,    17,    18,   294,    19,
      91,   415,    22,   144,    23,    24,   145,   377,   420,   256,
      26,   419,   357,   386,   367,   215,   312,   216,    46,   368,
     414,   484,   469,   274,    16,    30,    31,   394,   337,    17,
      18,   261,    19,    91,   287,    22,   266,    23,    24,   268,
       1,     2,     3,    26,     4,   133,   269,     5,   291,   267,
       6,   270,     7,     8,   403,   405,   385,   398,    30,    31,
     146,   488,   466,   486,   363,     9,   241,    10,    11,    12,
     276,   485,   472,    13,    14,   452,   417,   442,    15,    16,
     428,   490,   476,   471,    17,    18,   448,    19,    20,    21,
      22,     0,    23,    24,     0,    25,   340,     0,    26,     0,
      27,    28,     0,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,    31,    32,     0,    33,    34,    35,
       1,     2,     3,     0,     4,     0,     0,     5,     0,     0,
       6,     0,     7,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,     0,    10,    11,    12,
       0,     0,     0,    13,    14,     0,     0,     0,    15,    16,
       0,     0,     0,     0,    17,    18,     0,    19,    91,   140,
      22,     0,    23,    24,     0,    25,     0,     0,    26,     0,
      27,    28,     0,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,    31,    32,     0,    33,    34,    35,
       1,     2,     3,     0,     4,     0,     0,     5,     0,     0,
       6,   429,     7,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,     0,    10,    11,    12,
       0,     0,     0,    13,    14,     0,     0,     0,    15,    16,
       0,     0,     0,     0,    17,    18,     0,    19,    91,     0,
      22,     0,    23,    24,     0,    25,     0,     0,    26,     0,
      27,    28,     0,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,    31,    32,     0,    33,    34,    35,
       1,     0,     3,     0,     4,     0,     0,     0,     0,     0,
       6,     0,     0,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,     0,     0,    11,    12,
       0,     0,     0,     0,    14,     0,     0,     0,    15,    16,
       0,     0,     0,     0,    17,    18,     0,    19,    91,   249,
      22,     0,    23,    24,     0,    25,     0,     0,    26,     0,
      27,    28,     1,    29,     3,     0,     4,     0,     0,     0,
       0,     0,     6,    30,    31,     8,     0,     0,     0,    35,
       0,     0,     0,     0,     0,     0,     0,     9,     0,     0,
      11,    12,     0,     0,     0,     0,    14,     0,     0,     0,
      15,    16,     0,     3,     0,     0,    17,    18,     0,    19,
      91,     0,    22,     0,    23,    24,     0,    25,   273,     0,
      26,     3,    27,    28,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    30,    31,     0,     0,    15,
      16,    35,     0,     0,     0,    17,    18,     0,    19,    91,
       0,    22,     3,    23,    24,     0,     0,    15,    16,    26,
       0,     0,     0,    17,    18,     0,    19,    91,     0,    22,
       0,    23,    24,     0,    30,    31,     0,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   422,    16,
       0,     0,    30,    31,    17,    18,     0,    19,    91,     0,
      22,   156,    23,    24,     0,     0,     0,     0,    26,   157,
     158,   159,     0,     0,   160,     0,   161,     0,     0,     0,
       0,   162,   163,    30,    31,     0,     0,     0,     0,   164,
     165
};

static const yytype_int16 yycheck[] =
{
       1,     0,     3,    39,    10,   152,   112,   117,    29,    22,
     120,   299,    13,    82,    35,    16,    17,    18,     2,   384,
      15,    17,   350,   208,   350,     3,     9,    28,    15,     8,
       9,    10,    33,    34,   219,    13,   117,    47,    24,   120,
      39,    10,     6,     6,   125,    23,    27,    25,    16,    10,
      22,    55,    30,    16,    21,    16,    51,    21,    40,    34,
      55,    71,    45,    46,    51,    40,    34,   252,    51,    52,
      48,    54,    55,    42,    57,    53,    59,    60,    73,    61,
      61,    15,    65,    15,    51,    52,    64,     0,    66,   454,
       9,    63,    78,   458,    72,   460,    21,    80,    81,    77,
      55,    79,    21,    86,    76,    83,    78,    16,    51,    21,
     111,   180,    55,   441,   479,   441,    41,    51,    51,    51,
     104,    55,    55,    55,    34,    34,    45,    46,   129,   130,
      40,    55,    51,    52,   422,    54,    55,    21,    57,    51,
      59,    60,   155,    21,    56,    78,    65,    54,     0,   150,
      51,    61,     9,   338,    55,    74,    16,    41,    65,    16,
      30,    80,    81,    34,    34,   246,   276,    15,    16,    40,
     191,    14,    73,    31,    34,    33,    19,   362,   259,    55,
     201,   366,   183,   184,    71,    80,    34,   166,   209,    15,
       0,    28,     8,   214,     0,   191,    75,    16,    16,    10,
       5,   202,     4,   204,   389,   201,   207,   392,   314,    12,
      42,    41,   213,   323,    15,   321,    16,   286,    16,    15,
      69,    30,   407,    73,   225,    16,   232,    74,   229,    15,
     231,    16,   211,     6,   240,    56,   383,   384,    55,    51,
      24,    55,    57,    42,     9,    16,   247,    55,    55,    73,
      16,   436,   253,   232,    16,   440,    21,    15,    55,    16,
      55,   240,    43,    16,   449,   450,    21,    15,    15,    73,
      16,    30,   273,   274,    15,    15,   255,    16,    55,    73,
      45,    46,    74,   468,     9,    73,    51,    52,   473,    54,
      55,     6,    57,    16,    59,    60,    26,    16,    42,    42,
      65,    15,    15,    27,    21,    27,    56,   454,    15,    73,
      73,   458,    24,   460,    16,    80,    81,   464,    55,    27,
      15,    46,    33,    15,     9,   326,    51,    52,    16,    54,
      55,   332,   479,    15,    59,    60,    27,    15,    15,    24,
      65,   342,   489,    15,    15,   346,    55,    16,   349,   350,
      31,   387,   353,    15,   355,    80,    81,     9,    61,    15,
      45,    46,    16,   364,    39,    16,    51,    52,   204,    54,
      55,   372,    57,    41,    59,    60,    42,   321,   379,   147,
      65,   378,   288,   330,   304,   103,   220,   103,   387,   305,
     370,   474,   439,    78,    46,    80,    81,   337,   253,    51,
      52,   153,    54,    55,   186,    57,   167,    59,    60,   169,
       7,     8,     9,    65,    11,    30,   172,    14,   201,   168,
      17,   175,    19,    20,   353,   355,   427,   349,    80,    81,
      42,   480,   433,   477,   301,    32,   125,    34,    35,    36,
     441,   476,   443,    40,    41,   419,   374,   403,    45,    46,
     385,   481,   453,   441,    51,    52,   414,    54,    55,    56,
      57,    -1,    59,    60,    -1,    62,   256,    -1,    65,    -1,
      67,    68,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    -1,    84,    85,    86,
       7,     8,     9,    -1,    11,    -1,    -1,    14,    -1,    -1,
      17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    34,    35,    36,
      -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    -1,    51,    52,    -1,    54,    55,    56,
      57,    -1,    59,    60,    -1,    62,    -1,    -1,    65,    -1,
      67,    68,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    -1,    84,    85,    86,
       7,     8,     9,    -1,    11,    -1,    -1,    14,    -1,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    34,    35,    36,
      -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    -1,    51,    52,    -1,    54,    55,    -1,
      57,    -1,    59,    60,    -1,    62,    -1,    -1,    65,    -1,
      67,    68,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    -1,    84,    85,    86,
       7,    -1,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      17,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    36,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    -1,    51,    52,    -1,    54,    55,    56,
      57,    -1,    59,    60,    -1,    62,    -1,    -1,    65,    -1,
      67,    68,     7,    70,     9,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    17,    80,    81,    20,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      35,    36,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      45,    46,    -1,     9,    -1,    -1,    51,    52,    -1,    54,
      55,    -1,    57,    -1,    59,    60,    -1,    62,    24,    -1,
      65,     9,    67,    68,    -1,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    -1,    45,
      46,    86,    -1,    -1,    -1,    51,    52,    -1,    54,    55,
      -1,    57,     9,    59,    60,    -1,    -1,    45,    46,    65,
      -1,    -1,    -1,    51,    52,    -1,    54,    55,    -1,    57,
      -1,    59,    60,    -1,    80,    81,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    80,    81,    51,    52,    -1,    54,    55,    -1,
      57,    29,    59,    60,    -1,    -1,    -1,    -1,    65,    37,
      38,    39,    -1,    -1,    42,    -1,    44,    -1,    -1,    -1,
      -1,    49,    50,    80,    81,    -1,    -1,    -1,    -1,    57,
      58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,     8,     9,    11,    14,    17,    19,    20,    32,
      34,    35,    36,    40,    41,    45,    46,    51,    52,    54,
      55,    56,    57,    59,    60,    62,    65,    67,    68,    70,
      80,    81,    82,    84,    85,    86,    88,    89,    90,    91,
      92,    93,    95,    96,    97,   107,   108,   109,   110,   114,
     118,   119,   120,   121,   122,   123,   124,   125,   128,   129,
     130,   139,   140,   141,   142,   143,   145,   146,   147,   151,
     162,   164,   165,   166,   167,   169,   170,   171,   172,   174,
     176,   178,   179,   180,   182,   187,   190,   198,   202,   214,
     215,    55,   162,    55,   138,   162,   213,    55,    55,   169,
     197,   169,   197,    21,   131,   132,    55,   162,   135,   137,
     138,    15,    51,    55,   100,   102,   105,   162,   186,   199,
     162,   183,   184,   189,   215,   162,   185,   188,   166,    71,
     115,   162,   198,   187,    15,   162,   153,   162,   198,     0,
      56,    92,   107,    28,    95,    97,   202,    75,   228,    16,
      16,   219,    40,    61,   163,     5,    29,    37,    38,    39,
      42,    44,    49,    50,    57,    58,   168,    10,    12,     4,
      47,    71,   173,    54,    65,   175,    22,    63,    76,    78,
     177,   178,    21,    51,    52,   181,   191,     3,    13,    23,
      25,    30,    48,    53,    64,    66,    72,    77,    79,    83,
     112,   113,    16,    21,    51,    56,     9,    16,    15,    51,
      98,    16,   217,    42,    42,   131,   132,   138,    41,    15,
      16,     6,   162,   105,   106,    15,    24,    78,   104,    30,
     101,    15,    34,   201,   211,   219,    69,   211,   219,    73,
      34,   208,   219,    74,   162,   116,   162,    16,   127,    56,
     108,   157,    15,    16,   152,     6,   109,    56,    55,   162,
     164,   165,   166,    57,    42,   169,   170,   171,   172,   174,
     176,   178,    55,    24,    78,    94,   162,   204,   205,   225,
     226,    21,   162,   192,   193,   194,    24,   181,   111,   198,
     215,   111,   162,    55,    94,   162,   157,   198,   203,    51,
      99,   169,   162,   198,    41,    51,    55,    78,   133,   134,
     136,   157,   135,    55,    16,   216,    73,   162,    55,    55,
     162,    16,   218,   162,   197,   197,    16,   117,   223,   219,
     162,    43,    31,    33,   148,   154,   157,   153,    15,   169,
     228,   219,    27,   162,   162,    73,    30,   206,   211,    16,
      16,    21,    74,    16,   221,    15,   178,   112,    73,    73,
      73,   100,    15,   217,    16,   126,    15,   133,   136,     6,
      16,   222,    26,   144,   105,    16,   103,   102,   105,    16,
     200,   211,   220,    42,    42,   162,   126,   158,   162,    15,
      27,   149,    15,    27,   152,   157,   162,   162,   204,   205,
     225,   227,    21,   193,   162,   194,    56,    15,    73,   157,
     162,   157,    73,    55,   134,   162,    27,   216,    24,   101,
     162,   164,    45,   159,   160,   161,   164,    16,   223,    18,
     107,     6,    16,   155,   156,   157,    15,    33,   150,   157,
      15,    16,   221,    15,   195,   196,   157,    27,   222,    15,
      15,    55,   218,    15,    40,   210,   211,   212,    15,   100,
      40,   207,   208,   209,    16,   224,   162,   157,    15,   148,
     157,   227,   162,    15,   157,   157,   162,   160,   160,    15,
     160,   160,   157,   157,   144,   220,   210,   160,   207,    16,
     224
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    88,    89,    89,    90,    91,    91,
      92,    92,    93,    93,    94,    94,    95,    95,    96,    96,
      98,    97,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   104,   104,   105,   105,   106,   107,   107,   108,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   110,
     110,   111,   111,   112,   112,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   115,   114,   114,
     116,   116,   117,   117,   118,   119,   120,   120,   120,   120,
     120,   121,   122,   123,   123,   124,   125,   125,   126,   126,
     127,   127,   128,   128,   129,   130,   130,   131,   131,   132,
     132,   133,   133,   133,   134,   134,   135,   135,   136,   137,
     137,   138,   138,   139,   139,   140,   140,   141,   141,   142,
     142,   142,   142,   142,   142,   142,   142,   143,   143,   144,
     144,   145,   145,   146,   146,   147,   147,   148,   148,   149,
     149,   150,   150,   151,   152,   152,   153,   153,   154,   154,
     155,   155,   156,   156,   157,   157,   158,   158,   159,   159,
     160,   160,   161,   161,   162,   162,   163,   163,   164,   164,
     165,   165,   166,   166,   167,   167,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   169,   169,   170,
     170,   171,   171,   172,   172,   173,   173,   174,   174,   175,
     175,   176,   176,   177,   177,   177,   177,   178,   178,   179,
     179,   179,   180,   180,   181,   181,   182,   182,   182,   182,
     182,   182,   182,   182,   183,   183,   184,   184,   185,   185,
     186,   186,   187,   187,   188,   188,   189,   189,   190,   190,
     191,   191,   191,   192,   193,   193,   193,   194,   194,   195,
     195,   196,   196,   197,   198,   199,   199,   200,   200,   201,
     201,   202,   202,   203,   203,   204,   204,   204,   204,   204,
     204,   205,   205,   206,   206,   207,   207,   208,   208,   209,
     209,   210,   210,   211,   211,   212,   212,   213,   213,   214,
     215,   215,   216,   216,   216,   217,   217,   217,   218,   218,
     218,   219,   219,   219,   220,   220,   220,   221,   221,   221,
     222,   222,   222,   223,   223,   223,   224,   224,   224,   225,
     226,   227,   227,   227,   228,   228,   228
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     2,     1,     1,
       2,     0,     6,     3,     1,     0,     2,     1,     2,     2,
       0,     6,     3,     2,     2,     3,     2,     0,     4,     0,
       3,     0,     3,     2,     1,     3,     2,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     1,     1,     3,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     3,     4,
       2,     0,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     3,     1,     2,     0,
       3,     0,     1,     1,     2,     5,     4,     2,     0,     2,
       1,     1,     3,     1,     3,     1,     3,     1,     2,     1,
       3,     1,     3,     3,     2,     5,     2,     4,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     8,     5,     5,
       0,     7,     4,     9,     6,     6,     6,     4,     3,     3,
       0,     3,     0,     5,     3,     0,     3,     1,     3,     1,
       1,     1,     2,     0,     1,     4,     2,     0,     2,     1,
       1,     1,     4,     3,     2,     1,     4,     0,     1,     3,
       1,     3,     2,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     1,     1,     3,     1,
       1,     1,     3,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     4,     2,     2,     0,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     0,
       1,     0,     2,     1,     2,     2,     2,     2,     4,     3,
       3,     3,     2,     2,     3,     1,     4,     1,     0,     1,
       0,     2,     1,     2,     2,     4,     2,     1,     1,     1,
       1,     7,     4,     1,     0,     3,     2,     1,     3,     1,
       1,     2,     3,     1,     0,     1,     1,     5,     4,     3,
       2,     1,     1,     5,     4,     3,     2,     1,     3,     1,
       2,     1,     3,     1,     0,     3,     1,     0,     4,     1,
       0,     3,     1,     0,     5,     1,     0,     3,     1,     0,
       3,     1,     0,     3,     3,     2,     3,     3,     2,     2,
       2,     3,     1,     1,     3,     1,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 20:
#line 100 "parse.y" /* yacc.c:1646  */
    {level++;}
#line 1803 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 100 "parse.y" /* yacc.c:1646  */
    { 
        level--; 
        std::string str = std::string((yyvsp[-4].c));
        delete (yyvsp[-4].c); 
        (yyvsp[0].ast)->setLabel(str);        
        if(level ==0){
            SymbolTableManager::getInstance().addSymbol(str, (yyvsp[0].ast));
        }
        (yyval.ast) = (yyvsp[0].ast);
    }
#line 1818 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 162 "parse.y" /* yacc.c:1646  */
    {
        switch((yyvsp[-1].i)){
            case PLUSEQUAL: // +=
                (yyval.ast) = new PlusEqualNode((yyvsp[-2].ast), (yyvsp[0].ast)); 
                break; 

            case MINEQUAL: // -=
                (yyval.ast) = new MinusEqualNode((yyvsp[-2].ast), (yyvsp[0].ast)); 
                break;

            case STAREQUAL: // *=
                (yyval.ast) = new StarEqualNode((yyvsp[-2].ast), (yyvsp[0].ast)); 
                break;

            case SLASHEQUAL: // /=
                (yyval.ast) = new SlashEqualNode((yyvsp[-2].ast), (yyvsp[0].ast)); 
                break;

            case PERCENTEQUAL: // %=
                (yyval.ast) = new PercentEqualNode((yyvsp[-2].ast), (yyvsp[0].ast)); 
                break;

            case DOUBLESLASHEQUAL: // //=
                (yyval.ast) = new DoubleSlashEqualNode((yyvsp[-2].ast), (yyvsp[0].ast)); 
                break;

            default: break;
        }    
        if(level==0) (yyval.ast)->getVal();
    }
#line 1853 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 193 "parse.y" /* yacc.c:1646  */
    { 
        if((yyvsp[0].ast)!=NULL) {
            (yyval.ast) = new AssignNode((yyvsp[-1].ast), (yyvsp[0].ast));
            if(level == 0){
                SymbolTableManager::getInstance().addSymbol((yyvsp[-1].ast)->getLabel(), (yyvsp[0].ast));
            }
        }
    }
#line 1866 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 207 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast);  }
#line 1872 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 208 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = NULL ;}
#line 1878 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 211 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = PLUSEQUAL; }
#line 1884 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 212 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = MINEQUAL; }
#line 1890 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 213 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = STAREQUAL; }
#line 1896 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 214 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = SLASHEQUAL; }
#line 1902 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 215 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = PERCENTEQUAL; }
#line 1908 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 222 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = DOUBLESLASHEQUAL; }
#line 1914 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 225 "parse.y" /* yacc.c:1646  */
    {ifExeFunc++; }
#line 1920 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 225 "parse.y" /* yacc.c:1646  */
    {
        ifExeFunc--;
        (yyval.ast) = new PrintNode((yyvsp[0].ast));
        if(level==0) {
            (yyval.ast)->getVal();
        }
    }
#line 1932 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 232 "parse.y" /* yacc.c:1646  */
    {}
#line 1938 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 236 "parse.y" /* yacc.c:1646  */
    { }
#line 1944 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 240 "parse.y" /* yacc.c:1646  */
    {}
#line 1950 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 243 "parse.y" /* yacc.c:1646  */
    {}
#line 1956 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 246 "parse.y" /* yacc.c:1646  */
    {}
#line 1962 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 256 "parse.y" /* yacc.c:1646  */
    {}
#line 1968 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 259 "parse.y" /* yacc.c:1646  */
    {}
#line 1974 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 262 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new ReturnNode((yyvsp[0].ast)); }
#line 1980 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 263 "parse.y" /* yacc.c:1646  */
    { /*TODO*/}
#line 1986 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 269 "parse.y" /* yacc.c:1646  */
    {}
#line 1992 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 270 "parse.y" /* yacc.c:1646  */
    {}
#line 1998 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 281 "parse.y" /* yacc.c:1646  */
    {}
#line 2004 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 282 "parse.y" /* yacc.c:1646  */
    {}
#line 2010 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 324 "parse.y" /* yacc.c:1646  */
    {
        std::string str = std::string((yyvsp[0].c));
        delete (yyvsp[0].c); 
        (yyvsp[-2].ast)->addName(str);
        (yyval.ast) = (yyvsp[-2].ast);
    }
#line 2021 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 330 "parse.y" /* yacc.c:1646  */
    {  
        std::string str = std::string((yyvsp[0].c));
        delete (yyvsp[0].c); 
        (yyval.ast) = new GlobalNode("global"); 
        (yyval.ast)->addName(str);
    }
#line 2032 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 338 "parse.y" /* yacc.c:1646  */
    {/*TODO*/}
#line 2038 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 339 "parse.y" /* yacc.c:1646  */
    {}
#line 2044 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 342 "parse.y" /* yacc.c:1646  */
    {}
#line 2050 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 343 "parse.y" /* yacc.c:1646  */
    {}
#line 2056 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 348 "parse.y" /* yacc.c:1646  */
    {}
#line 2062 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 351 "parse.y" /* yacc.c:1646  */
    {}
#line 2068 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 352 "parse.y" /* yacc.c:1646  */
    {}
#line 2074 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 353 "parse.y" /* yacc.c:1646  */
    {}
#line 2080 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 356 "parse.y" /* yacc.c:1646  */
    {}
#line 2086 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 357 "parse.y" /* yacc.c:1646  */
    {}
#line 2092 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 364 "parse.y" /* yacc.c:1646  */
    {}
#line 2098 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 365 "parse.y" /* yacc.c:1646  */
    {}
#line 2104 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 372 "parse.y" /* yacc.c:1646  */
    {}
#line 2110 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 373 "parse.y" /* yacc.c:1646  */
    {}
#line 2116 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 388 "parse.y" /* yacc.c:1646  */
    {}
#line 2122 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 413 "parse.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new SuiteNode((yyvsp[-1].vec));
    }
#line 2130 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 418 "parse.y" /* yacc.c:1646  */
    { 
        (yyvsp[-1].vec)->push_back((yyvsp[0].ast));  
        (yyval.vec) = (yyvsp[-1].vec);
    }
#line 2139 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 422 "parse.y" /* yacc.c:1646  */
    { 
        (yyval.vec) = new std::vector<Ast*>; 
    }
#line 2147 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 461 "parse.y" /* yacc.c:1646  */
    {}
#line 2153 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 505 "parse.y" /* yacc.c:1646  */
    {
        if((yyvsp[-1].i) == PLUS){
            (yyval.ast) = new AddNode((yyvsp[-2].ast), (yyvsp[0].ast));
        }    
        else if((yyvsp[-1].i) == MINUS)  (yyval.ast) = new MinusNode((yyvsp[-2].ast), (yyvsp[0].ast)); 
    }
#line 2164 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 513 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = PLUS; }
#line 2170 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 514 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = MINUS; }
#line 2176 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 519 "parse.y" /* yacc.c:1646  */
    {   
        switch ((yyvsp[-1].i)){
            case STAR:
                (yyval.ast) = new MulNode((yyvsp[-2].ast), (yyvsp[0].ast));
                break;
            case SLASH:
                (yyval.ast) = new DividNode((yyvsp[-2].ast), (yyvsp[0].ast)); 
                break;
            case PERCENT:
                (yyval.ast) = new PercentNode((yyvsp[-2].ast), (yyvsp[0].ast)); 
                break;
            case DOUBLESLASH:
                (yyval.ast) = new DoubleDividNode((yyvsp[-2].ast), (yyvsp[0].ast)); 
                break;
            default: break;
        }
    }
#line 2198 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 538 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = STAR; }
#line 2204 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 539 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = SLASH; }
#line 2210 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 540 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = PERCENT; }
#line 2216 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 541 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = DOUBLESLASH; }
#line 2222 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 545 "parse.y" /* yacc.c:1646  */
    {
        if((yyvsp[-1].i) == PLUS) (yyval.ast) = (yyvsp[0].ast);              
        else if((yyvsp[-1].i) == MINUS) {(yyval.ast) = new SingleMinusNode((yyvsp[0].ast), NULL); }  
        else if((yyvsp[-1].i) == TILDE); 
    }
#line 2232 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 553 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = PLUS; }
#line 2238 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 554 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = MINUS; }
#line 2244 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 555 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = TILDE; }
#line 2250 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 558 "parse.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new ExponentNode((yyvsp[-3].ast), (yyvsp[0].ast)); 
    }
#line 2258 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 561 "parse.y" /* yacc.c:1646  */
    { 
        if((yyvsp[0].ast) != NULL) {
            (yyval.ast) = new FuncNode((yyvsp[-1].ast)->getLabel());
            if(level == 0 && ifExeFunc==0){
                (yyval.ast)->getVal();
            }
        }
        else (yyval.ast) = (yyvsp[-1].ast);
    }
#line 2272 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 572 "parse.y" /* yacc.c:1646  */
    {}
#line 2278 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 573 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = NULL; }
#line 2284 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 576 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2290 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 577 "parse.y" /* yacc.c:1646  */
    {}
#line 2296 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 578 "parse.y" /* yacc.c:1646  */
    {}
#line 2302 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 579 "parse.y" /* yacc.c:1646  */
    {}
#line 2308 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 580 "parse.y" /* yacc.c:1646  */
    {
        std::string str = std::string((yyvsp[0].c));
        delete (yyvsp[0].c); 
        (yyval.ast) = new StringNode(str);
    }
#line 2318 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 585 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new NumberNode((yyvsp[0].i), 'I'); }
#line 2324 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 586 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new NumberNode((yyvsp[0].d), 'D');  }
#line 2330 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 587 "parse.y" /* yacc.c:1646  */
    {}
#line 2336 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 594 "parse.y" /* yacc.c:1646  */
    { }
#line 2342 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 595 "parse.y" /* yacc.c:1646  */
    { }
#line 2348 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 618 "parse.y" /* yacc.c:1646  */
    {}
#line 2354 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 619 "parse.y" /* yacc.c:1646  */
    {}
#line 2360 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 723 "parse.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast); }
#line 2366 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 724 "parse.y" /* yacc.c:1646  */
    {}
#line 2372 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 742 "parse.y" /* yacc.c:1646  */
    {}
#line 2378 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 743 "parse.y" /* yacc.c:1646  */
    {}
#line 2384 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 744 "parse.y" /* yacc.c:1646  */
    {}
#line 2390 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 763 "parse.y" /* yacc.c:1646  */
    {}
#line 2396 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 764 "parse.y" /* yacc.c:1646  */
    {}
#line 2402 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 765 "parse.y" /* yacc.c:1646  */
    { }
#line 2408 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 784 "parse.y" /* yacc.c:1646  */
    {}
#line 2414 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 785 "parse.y" /* yacc.c:1646  */
    {}
#line 2420 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 786 "parse.y" /* yacc.c:1646  */
    {}
#line 2426 "parse.tab.c" /* yacc.c:1646  */
    break;


#line 2430 "parse.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 789 "parse.y" /* yacc.c:1906  */


#include <stdio.h>
void yyerror (char const *s) {
	fprintf (stderr, "%d: %s with [%s]\n", yylineno, s, yytext);
}

