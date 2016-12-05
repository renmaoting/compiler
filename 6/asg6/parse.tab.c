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
  #include <iomanip>
  #include "symbolTable.h" 
  #include "childNode.h" 
	int yylex (void);
	extern int yylineno;
	extern char *yytext;
    int level = 0;
	void yyerror (char const *);

#line 79 "parse.tab.c" /* yacc.c:339  */

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
#line 15 "parse.y" /* yacc.c:355  */

    Ast* ast;
    double d;
    int i;
    char* c;
    std::vector<Ast*>* vec;

#line 214 "parse.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 229 "parse.tab.c" /* yacc.c:358  */

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
#define YYFINAL  140
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   959

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  141
/* YYNRULES -- Number of rules.  */
#define YYNRULES  325
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
       0,    56,    56,    57,    58,    67,    68,    71,    74,    75,
      78,    79,    82,    83,    86,    87,    90,    91,    94,    95,
      98,    98,   109,   110,   113,   114,   117,   118,   121,   122,
     125,   126,   129,   130,   133,   134,   137,   140,   141,   144,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   158,
     202,   217,   218,   221,   222,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   239,   243,   246,
     247,   250,   251,   254,   257,   260,   261,   262,   263,   264,
     267,   270,   273,   274,   277,   280,   281,   284,   285,   288,
     289,   292,   293,   296,   299,   300,   303,   304,   307,   308,
     311,   312,   313,   316,   317,   320,   321,   324,   327,   328,
     331,   332,   335,   336,   341,   342,   345,   346,   349,   350,
     351,   352,   353,   354,   355,   356,   359,   360,   363,   364,
     367,   368,   371,   372,   375,   376,   379,   380,   383,   384,
     387,   388,   391,   394,   395,   398,   399,   402,   403,   406,
     407,   410,   411,   415,   416,   421,   425,   428,   429,   432,
     433,   436,   437,   446,   447,   450,   451,   454,   455,   458,
     459,   462,   463,   466,   467,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   484,   485,   488,   489,
     492,   493,   496,   497,   500,   501,   504,   505,   514,   515,
     518,   519,   542,   543,   544,   545,   548,   554,   557,   558,
     559,   562,   565,   576,   577,   580,   581,   582,   583,   584,
     589,   590,   591,   594,   595,   598,   599,   602,   603,   606,
     607,   610,   611,   614,   615,   618,   619,   622,   623,   626,
     627,   628,   631,   634,   635,   636,   639,   640,   643,   644,
     647,   648,   651,   655,   658,   659,   662,   663,   666,   667,
     670,   671,   674,   675,   678,   679,   680,   681,   682,   683,
     686,   687,   690,   691,   694,   695,   698,   699,   702,   703,
     706,   707,   711,   712,   715,   716,   719,   720,   723,   727,
     728,   731,   732,   733,   736,   737,   738,   741,   742,   743,
     746,   747,   748,   751,   752,   753,   756,   757,   758,   762,
     763,   764,   767,   768,   769,   772,   773,   774,   777,   780,
     783,   784,   785,   788,   789,   790
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
  "augassign", "print_stmt", "opt_test", "opt_test_2", "del_stmt",
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

#define YYPACT_NINF -360

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-360)))

#define YYTABLE_NINF -308

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     349,   811,    -2,   811,  -360,    33,  -360,    41,   878,   878,
     878,    76,    59,   811,    -2,    28,   811,    72,   811,  -360,
     148,   162,   860,  -360,  -360,  -360,  -360,   722,   811,   811,
      86,  -360,   152,   811,   811,   811,   168,  -360,  -360,   430,
     141,   163,   132,  -360,  -360,   172,  -360,    98,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,   158,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
     159,    93,   173,  -360,   212,   167,   169,   176,     0,    51,
      15,  -360,   878,  -360,    90,  -360,  -360,    36,  -360,  -360,
    -360,  -360,   166,  -360,    17,  -360,    48,    26,  -360,    46,
    -360,    25,   143,    39,    -2,   147,  -360,   174,  -360,   175,
     134,   811,   110,  -360,   177,    20,   165,    88,   124,  -360,
      29,  -360,   123,  -360,  -360,    56,   127,  -360,  -360,   811,
    -360,   159,   181,  -360,  -360,   590,   183,   187,   200,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,   652,   153,
     157,   811,  -360,   860,   860,  -360,   860,  -360,  -360,  -360,
    -360,  -360,   160,  -360,  -360,   178,  -360,   878,   878,   878,
     878,  -360,  -360,   878,  -360,  -360,   878,  -360,  -360,  -360,
    -360,   878,  -360,   161,   231,   762,   194,    90,  -360,  -360,
    -360,  -360,    72,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,    72,   811,   164,   231,  -360,  -360,   811,   590,
     811,   170,   878,  -360,   811,   811,  -360,  -360,    66,    -3,
     590,    -2,   171,  -360,   206,   150,   811,   182,   184,  -360,
     811,   214,   811,   878,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,   878,  -360,  -360,  -360,   220,  -360,   811,  -360,   185,
    -360,   116,   590,   811,   227,   878,    98,  -360,  -360,   159,
      24,   173,  -360,  -360,  -360,   167,   169,   176,     0,    51,
      15,  -360,  -360,   811,   811,   186,   126,  -360,   228,  -360,
     241,   222,   243,   189,   244,   249,   878,  -360,   235,  -360,
    -360,  -360,  -360,  -360,   195,  -360,  -360,  -360,   201,     3,
     260,    46,   262,   264,    -3,   225,   275,  -360,  -360,   268,
    -360,   261,  -360,  -360,   110,  -360,  -360,  -360,  -360,   273,
    -360,    19,  -360,    78,   250,   251,   811,  -360,  -360,   262,
     510,   811,   279,   270,   280,   271,   187,   590,   167,  -360,
    -360,   811,  -360,  -360,  -360,   811,  -360,  -360,   231,   780,
     278,  -360,   704,  -360,   811,  -360,  -360,   245,   285,  -360,
     229,   590,  -360,   811,  -360,   590,  -360,   230,   252,   225,
    -360,   811,   286,   206,   281,  -360,  -360,   165,   811,  -360,
    -360,  -360,   860,   829,   290,  -360,   510,   297,    49,   590,
     301,   284,   590,   303,  -360,  -360,  -360,  -360,  -360,   304,
    -360,  -360,  -360,   244,  -360,   306,  -360,   590,  -360,  -360,
    -360,   292,  -360,  -360,   268,   307,   308,  -360,   269,   214,
     311,    96,    31,   104,   312,  -360,   266,   811,  -360,  -360,
    -360,  -360,  -360,   811,  -360,  -360,   590,   317,  -360,   302,
     590,   780,  -360,   811,  -360,  -360,  -360,   319,  -360,   590,
     590,  -360,  -360,   811,   829,  -360,  -360,  -360,   829,   320,
     829,  -360,  -360,  -360,   829,  -360,  -360,  -360,   590,  -360,
    -360,  -360,  -360,   590,   261,  -360,   321,   105,  -360,   829,
     104,   322,  -360,  -360,  -360,  -360,  -360,  -360,  -360,   829,
    -360
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      11,     0,     0,     0,    80,     0,    81,     0,     0,     0,
       0,    97,     0,     0,     0,    29,   230,   226,   228,   209,
     219,     8,     0,   220,   221,    74,   208,    70,    86,    83,
     232,   210,     0,     0,     0,   290,     0,     4,     2,    11,
       0,    17,     0,   125,   123,     9,    37,   325,    40,    41,
      42,    43,    44,    75,    76,    77,    79,    78,    45,    91,
      92,    46,    47,    48,    38,   118,   119,   120,   121,   122,
     302,   166,   167,   169,   172,   173,   186,   188,   190,   192,
     196,   200,     0,   207,   214,   222,   164,    54,   124,     3,
      84,   219,   117,   110,     0,   286,     0,     0,    20,   296,
      73,   115,     0,    97,     0,     0,   113,     0,   108,    93,
     106,     0,     0,    34,     0,     0,    27,   302,     0,   229,
     302,   225,     0,   224,   223,   302,     0,   227,   171,     0,
      67,   302,    90,    82,   231,     0,     0,   144,   146,   289,
       1,     8,    10,     9,     7,    16,    19,    18,   324,     0,
       0,   301,   253,     0,     0,   163,     0,   177,   176,   178,
     180,   182,   184,   175,   179,     0,   181,     0,     0,     0,
       0,   194,   195,     0,   199,   198,     0,   205,   204,   203,
     202,     0,   206,     0,    15,   247,   212,   214,    60,    62,
      66,    65,     0,    63,    56,    59,    55,    64,    58,    57,
      61,    50,     0,     0,     0,    15,    13,   218,     0,     0,
     263,     0,   295,   252,     0,     0,    96,    98,     0,     0,
       0,     0,     0,   238,   293,     0,     0,     0,     0,    24,
       0,   299,     0,     0,   255,   258,   259,   217,   235,   236,
     215,     0,   233,   234,   216,    72,    69,     0,    85,     0,
     153,     0,     0,     0,     0,     0,   325,    39,   112,   302,
       0,   168,   170,   185,   183,   174,   187,   189,   191,   193,
     197,   201,   241,     0,     0,     0,   273,    14,   266,   269,
     268,     0,   244,     0,   308,     0,     0,   213,    54,    52,
      51,    49,   116,   111,     0,   287,   261,   262,     0,    29,
       0,   296,    88,     0,     0,     0,   104,   100,    95,   311,
     102,   129,   109,   105,   292,    36,    35,   237,    33,    31,
      26,    29,    25,   305,     0,     0,     0,    68,    71,    88,
       0,   148,     0,   139,     0,   131,   144,     0,   145,   323,
     300,     0,   318,   319,   239,     0,   270,   272,   265,     0,
       0,   240,   247,   242,   247,   211,    53,     0,     0,    23,
       0,     0,   294,     0,   114,     0,    94,     0,     0,   310,
     107,     0,   127,   293,     0,    32,    28,    27,   304,   254,
     256,   257,     0,     0,   314,    89,   156,     0,   152,     0,
       0,   141,     0,     0,   143,   142,   165,   271,   264,   322,
     321,   267,   243,   308,   246,   249,    12,     0,    22,    21,
      87,   133,   101,   103,   311,     0,     0,   291,     0,   299,
       0,   283,    29,   277,   158,   160,   159,   313,   312,   155,
     154,   149,   150,     0,   147,   135,     0,     0,   134,   137,
       0,     0,   306,   251,   245,   248,   260,     0,   309,     0,
       0,    30,   297,     0,     0,   282,   280,   281,     0,     0,
       0,   276,   274,   275,     0,   157,   151,   138,     0,   136,
     130,   320,   250,     0,   129,   126,   305,   285,   162,     0,
     279,   317,   140,   132,   128,   303,   284,   161,   278,   316,
     315
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -360,  -360,  -360,  -360,  -360,   310,  -360,   131,   300,  -360,
     313,  -360,  -360,  -288,   -35,    22,  -360,  -360,  -106,  -360,
      30,     1,   197,  -360,   144,    62,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,    23,  -360,
    -360,  -360,  -360,   256,   258,    50,    -5,   146,    60,  -360,
      21,  -360,  -360,  -360,  -360,  -360,  -103,  -360,  -360,  -360,
     -67,  -360,  -360,  -360,    37,   121,  -360,  -360,  -360,  -202,
     -11,  -360,  -359,  -360,    -1,  -360,  -150,   224,   -13,  -360,
    -360,    12,   208,   210,   216,  -360,   207,  -360,   215,  -360,
     -72,  -360,  -360,   205,  -360,  -360,  -360,  -360,  -360,   352,
    -360,  -360,  -360,  -360,  -360,    44,    34,  -360,  -360,    -6,
     -16,  -360,  -360,  -360,   351,  -360,    54,  -335,  -360,   -83,
     274,  -360,   -79,  -112,  -360,  -360,  -360,     8,    40,   106,
      -9,   -89,   -64,    18,     4,    38,   -66,  -320,  -360,   -21,
     180
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    36,    37,    38,    39,    40,    41,   275,    42,    43,
      44,   211,   300,   114,   231,   115,   375,   229,   116,   225,
     386,   250,    47,    48,   288,   201,   202,    49,   130,   327,
      50,    51,    52,    53,    54,    55,    56,    57,   364,   248,
      58,    59,    60,   104,   105,   308,   309,   108,   310,   109,
     110,    61,    62,    63,    64,    65,   372,    66,    67,    68,
     333,   391,   438,    69,   254,   137,   334,   433,   434,   251,
     387,   423,   481,   425,    70,   155,    71,    72,    73,    74,
     167,    75,    76,    77,    78,   173,    79,   176,    80,   181,
      81,    82,    83,   186,    84,   121,   122,   126,   118,    85,
     127,   123,    86,   187,   283,   284,   285,   444,   445,   100,
      87,   119,   379,   234,    88,   298,   277,   278,   346,   461,
     462,   463,   455,   456,   457,    96,    89,    90,   315,   213,
     322,   152,   381,   353,   370,   328,   465,   279,   280,   401,
     149
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      92,    46,    95,   260,   102,   235,   224,   296,   238,   128,
     182,   360,   107,   133,   399,   117,   120,   125,   311,   139,
      99,   101,    99,    94,   424,   124,   131,   132,   236,   400,
      45,   239,   136,   138,  -298,   168,   243,   177,   204,   188,
      46,   209,   246,   111,   227,   151,   458,   171,   305,   189,
     335,   341,   306,    93,   112,   431,   168,   207,   113,   190,
     103,   191,   212,   233,   208,   432,   192,   214,   205,   143,
     112,   172,   151,   206,   113,   307,   359,   210,   178,   112,
     -99,     3,   112,   113,   193,   154,   113,   204,    97,   194,
     241,   179,  -298,   180,   378,   477,    98,   103,   228,   478,
     195,   480,   196,   232,   151,   174,   399,   304,   197,   271,
     223,   183,   233,   198,   106,   199,   175,    15,    16,   200,
     487,   400,   233,    17,    18,   218,    19,    91,   245,    22,
     233,    23,    24,   153,   459,   395,   454,    26,   241,   233,
     222,   184,   185,   262,   460,   454,     5,   331,  -288,   332,
     259,     7,    30,    31,   154,   204,   345,   154,    35,   409,
     233,   112,    -5,   411,   347,   113,    30,   135,   140,   144,
     340,     2,    -6,   148,   150,   151,   289,   168,   156,   265,
     170,   169,   203,   276,   282,   215,   289,   435,   219,   220,
     439,   221,   226,   237,   297,   230,   240,   247,   252,   303,
     290,   244,   292,   253,   276,   446,   255,   295,   373,   257,
     290,   380,   258,   302,   355,   377,   272,   263,   286,   293,
     264,   299,   314,   316,   301,   317,   313,   324,   330,   320,
     321,   323,   421,   426,   467,   325,   326,   318,   470,   319,
       3,   157,   337,   350,   348,    99,   329,   474,   475,   158,
     159,   160,   138,    99,   161,   273,   162,   349,  -246,   344,
     352,   163,   164,   351,   354,   192,   482,   338,   357,   165,
     166,   483,   342,   343,   358,   361,    15,    16,   363,   365,
     306,   368,    17,    18,   369,    19,    91,   371,    22,   374,
      23,    24,   382,   383,   389,   392,    26,   390,   393,   402,
     407,   406,   408,   412,   426,   418,   427,   413,   426,   274,
     426,    30,    31,   416,   426,   430,   436,   437,   440,   447,
     441,   443,   449,   450,   451,   384,   453,   154,   464,   426,
     388,    46,   468,   331,   473,   479,   294,   378,   489,   426,
     396,   145,   419,   376,   397,   256,   291,   276,   276,   142,
     356,   282,   385,   404,   366,   146,     1,     2,     3,   216,
       4,   217,   410,     5,   414,   367,     6,   312,     7,     8,
     415,   484,   469,   394,   336,   429,   266,   420,   261,   267,
     269,     9,   134,    10,    11,    12,   268,    46,   405,    13,
      14,   270,   287,   147,    15,    16,   403,   488,   486,   242,
      17,    18,   398,    19,    20,    21,    22,   362,    23,    24,
     452,    25,   485,   417,    26,   490,    27,    28,   448,    29,
     471,   442,   428,     0,     0,     0,   384,     0,     0,    30,
      31,    32,   466,    33,    34,    35,   339,     1,     2,     3,
     276,     4,   472,     0,     5,     0,     0,     6,     0,     7,
       8,     0,   476,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,     0,    10,    11,    12,     0,     0,     0,
      13,    14,     0,     0,     0,    15,    16,     0,     0,     0,
       0,    17,    18,     0,    19,    91,   141,    22,     0,    23,
      24,     0,    25,     0,     0,    26,     0,    27,    28,     0,
      29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,    31,    32,     0,    33,    34,    35,     1,     2,     3,
       0,     4,     0,     0,     5,     0,     0,     6,     0,     7,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,     0,    10,    11,    12,     0,     0,     0,
      13,    14,     0,     0,     0,    15,    16,     0,     0,     0,
       0,    17,    18,     0,    19,    91,     0,    22,     0,    23,
      24,     0,    25,     0,     0,    26,     0,    27,    28,     0,
      29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,    31,    32,     0,    33,    34,    35,     1,     0,     3,
       0,     4,     0,     0,     0,     0,     0,     6,     0,     0,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,     0,     0,    11,    12,     0,     0,     0,
       0,    14,     0,     0,     0,    15,    16,     0,     0,     0,
       0,    17,    18,     0,    19,    91,   249,    22,     0,    23,
      24,     0,    25,     0,     0,    26,     0,    27,    28,     1,
      29,     3,     0,     4,     0,     0,     0,     0,     0,     6,
      30,    31,     8,     0,     0,     0,    35,     0,     0,     0,
       0,     0,     0,     0,     9,     0,     0,    11,    12,     0,
       0,     0,     0,    14,     0,     0,     0,    15,    16,     0,
       0,     0,     0,    17,    18,     0,    19,    91,     0,    22,
       0,    23,    24,     3,    25,     0,     0,    26,     0,    27,
      28,     0,    29,     0,     0,   281,     0,     0,     0,     0,
       0,     3,    30,    31,     0,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    15,
      16,     0,     0,     0,     0,    17,    18,     0,    19,    91,
       0,    22,     0,    23,    24,     0,     0,    15,    16,    26,
       0,     3,     0,    17,    18,     0,    19,    91,  -307,    22,
       0,    23,    24,   281,    30,    31,     0,    26,     0,     3,
       0,     0,     0,   129,     0,     0,     0,     0,     0,     0,
       0,     0,    30,    31,   273,     0,     0,    15,    16,     0,
       0,     0,     0,    17,    18,     0,    19,    91,     0,    22,
       3,    23,    24,     0,     0,    15,    16,    26,     0,     0,
       0,    17,    18,     0,    19,    91,     0,    22,     3,    23,
      24,     0,    30,    31,     0,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    15,    16,     0,     0,
      30,    31,    17,    18,     0,    19,    91,     0,    22,     3,
      23,    24,     0,     0,   422,    16,    26,     0,     0,     0,
      17,    18,     0,    19,    91,     0,    22,     3,    23,    24,
       0,    30,    31,     0,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    16,     0,     0,    30,
      31,    17,    18,     0,    19,    91,     0,    22,     0,    23,
      24,     0,     0,     0,    16,    26,     0,     0,     0,    17,
      18,     0,    19,    91,     0,     0,     0,    23,    24,     0,
      30,    31,     0,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,    31
};

static const yytype_int16 yycheck[] =
{
       1,     0,     3,   153,    10,   117,   112,   209,   120,    22,
      82,   299,    13,    29,   349,    16,    17,    18,   220,    35,
       8,     9,    10,     2,   383,    17,    27,    28,   117,   349,
       0,   120,    33,    34,    15,    10,   125,    22,    21,     3,
      39,    15,   131,    15,    24,    16,    15,    47,    51,    13,
     252,    27,    55,    55,    51,     6,    10,     9,    55,    23,
      21,    25,    16,    34,    16,    16,    30,    42,    51,    39,
      51,    71,    16,    56,    55,    78,    73,    51,    63,    51,
      41,     9,    51,    55,    48,    61,    55,    21,    55,    53,
      34,    76,    73,    78,    16,   454,    55,    21,    78,   458,
      64,   460,    66,    15,    16,    54,   441,    41,    72,   181,
     111,    21,    34,    77,    55,    79,    65,    45,    46,    83,
     479,   441,    34,    51,    52,   104,    54,    55,   129,    57,
      34,    59,    60,    40,   422,   337,    40,    65,    34,    34,
       6,    51,    52,   156,    40,    40,    14,    31,     0,    33,
     151,    19,    80,    81,    61,    21,    30,    61,    86,   361,
      34,    51,     0,   365,   276,    55,    80,    15,     0,    28,
     259,     8,     0,    75,    16,    16,   192,    10,     5,   167,
       4,    12,    16,   184,   185,    42,   202,   389,    41,    15,
     392,    16,    15,    69,   210,    30,    73,    16,    15,   215,
     192,    74,   203,    16,   205,   407,     6,   208,   314,    56,
     202,   323,    55,   214,   286,   321,    55,    57,    24,    55,
      42,    51,    16,    73,   212,   226,    55,   233,    43,   230,
      16,   232,   382,   383,   436,   241,    16,    55,   440,    55,
       9,    29,    15,    21,    16,   233,   247,   449,   450,    37,
      38,    39,   253,   241,    42,    24,    44,    16,    15,    73,
      16,    49,    50,    74,    15,    30,   468,   255,    73,    57,
      58,   473,   273,   274,    73,    15,    45,    46,    16,    15,
      55,     6,    51,    52,    16,    54,    55,    26,    57,    16,
      59,    60,    42,    42,    15,    15,    65,    27,    27,    21,
      15,    56,    73,    73,   454,    24,    16,    55,   458,    78,
     460,    80,    81,    27,   464,    18,    15,    33,    15,    27,
      16,    15,    15,    15,    55,   326,    15,    61,    16,   479,
     331,   330,    15,    31,    15,    15,   205,    16,    16,   489,
     341,    41,   377,   321,   345,   148,   202,   348,   349,    39,
     288,   352,   329,   354,   304,    42,     7,     8,     9,   103,
      11,   103,   363,    14,   369,   305,    17,   221,    19,    20,
     371,   474,   439,   336,   253,   386,   168,   378,   154,   169,
     173,    32,    30,    34,    35,    36,   170,   386,   354,    40,
      41,   176,   187,    42,    45,    46,   352,   480,   477,   125,
      51,    52,   348,    54,    55,    56,    57,   301,    59,    60,
     419,    62,   476,   373,    65,   481,    67,    68,   414,    70,
     441,   403,   384,    -1,    -1,    -1,   427,    -1,    -1,    80,
      81,    82,   433,    84,    85,    86,   256,     7,     8,     9,
     441,    11,   443,    -1,    14,    -1,    -1,    17,    -1,    19,
      20,    -1,   453,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    34,    35,    36,    -1,    -1,    -1,
      40,    41,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    51,    52,    -1,    54,    55,    56,    57,    -1,    59,
      60,    -1,    62,    -1,    -1,    65,    -1,    67,    68,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    -1,    84,    85,    86,     7,     8,     9,
      -1,    11,    -1,    -1,    14,    -1,    -1,    17,    -1,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    34,    35,    36,    -1,    -1,    -1,
      40,    41,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    51,    52,    -1,    54,    55,    -1,    57,    -1,    59,
      60,    -1,    62,    -1,    -1,    65,    -1,    67,    68,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    -1,    84,    85,    86,     7,    -1,     9,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    51,    52,    -1,    54,    55,    56,    57,    -1,    59,
      60,    -1,    62,    -1,    -1,    65,    -1,    67,    68,     7,
      70,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    17,
      80,    81,    20,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    -1,    51,    52,    -1,    54,    55,    -1,    57,
      -1,    59,    60,     9,    62,    -1,    -1,    65,    -1,    67,
      68,    -1,    70,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      -1,     9,    80,    81,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    51,    52,    -1,    54,    55,
      -1,    57,    -1,    59,    60,    -1,    -1,    45,    46,    65,
      -1,     9,    -1,    51,    52,    -1,    54,    55,    74,    57,
      -1,    59,    60,    21,    80,    81,    -1,    65,    -1,     9,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    24,    -1,    -1,    45,    46,    -1,
      -1,    -1,    -1,    51,    52,    -1,    54,    55,    -1,    57,
       9,    59,    60,    -1,    -1,    45,    46,    65,    -1,    -1,
      -1,    51,    52,    -1,    54,    55,    -1,    57,     9,    59,
      60,    -1,    80,    81,    -1,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,
      80,    81,    51,    52,    -1,    54,    55,    -1,    57,     9,
      59,    60,    -1,    -1,    45,    46,    65,    -1,    -1,    -1,
      51,    52,    -1,    54,    55,    -1,    57,     9,    59,    60,
      -1,    80,    81,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    80,
      81,    51,    52,    -1,    54,    55,    -1,    57,    -1,    59,
      60,    -1,    -1,    -1,    46,    65,    -1,    -1,    -1,    51,
      52,    -1,    54,    55,    -1,    -1,    -1,    59,    60,    -1,
      80,    81,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81
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
     117,   118,   119,   120,   121,   122,   123,   124,   127,   128,
     129,   138,   139,   140,   141,   142,   144,   145,   146,   150,
     161,   163,   164,   165,   166,   168,   169,   170,   171,   173,
     175,   177,   178,   179,   181,   186,   189,   197,   201,   213,
     214,    55,   161,    55,   137,   161,   212,    55,    55,   168,
     196,   168,   196,    21,   130,   131,    55,   161,   134,   136,
     137,    15,    51,    55,   100,   102,   105,   161,   185,   198,
     161,   182,   183,   188,   214,   161,   184,   187,   165,    71,
     115,   161,   161,   197,   186,    15,   161,   152,   161,   197,
       0,    56,    92,   107,    28,    95,    97,   201,    75,   227,
      16,    16,   218,    40,    61,   162,     5,    29,    37,    38,
      39,    42,    44,    49,    50,    57,    58,   167,    10,    12,
       4,    47,    71,   172,    54,    65,   174,    22,    63,    76,
      78,   176,   177,    21,    51,    52,   180,   190,     3,    13,
      23,    25,    30,    48,    53,    64,    66,    72,    77,    79,
      83,   112,   113,    16,    21,    51,    56,     9,    16,    15,
      51,    98,    16,   216,    42,    42,   130,   131,   137,    41,
      15,    16,     6,   161,   105,   106,    15,    24,    78,   104,
      30,   101,    15,    34,   200,   210,   218,    69,   210,   218,
      73,    34,   207,   218,    74,   161,   218,    16,   126,    56,
     108,   156,    15,    16,   151,     6,   109,    56,    55,   161,
     163,   164,   165,    57,    42,   168,   169,   170,   171,   173,
     175,   177,    55,    24,    78,    94,   161,   203,   204,   224,
     225,    21,   161,   191,   192,   193,    24,   180,   111,   197,
     214,   111,   161,    55,    94,   161,   156,   197,   202,    51,
      99,   168,   161,   197,    41,    51,    55,    78,   132,   133,
     135,   156,   134,    55,    16,   215,    73,   161,    55,    55,
     161,    16,   217,   161,   196,   196,    16,   116,   222,   161,
      43,    31,    33,   147,   153,   156,   152,    15,   168,   227,
     218,    27,   161,   161,    73,    30,   205,   210,    16,    16,
      21,    74,    16,   220,    15,   177,   112,    73,    73,    73,
     100,    15,   216,    16,   125,    15,   132,   135,     6,    16,
     221,    26,   143,   105,    16,   103,   102,   105,    16,   199,
     210,   219,    42,    42,   161,   125,   107,   157,   161,    15,
      27,   148,    15,    27,   151,   156,   161,   161,   203,   204,
     224,   226,    21,   192,   161,   193,    56,    15,    73,   156,
     161,   156,    73,    55,   133,   161,    27,   215,    24,   101,
     161,   163,    45,   158,   159,   160,   163,    16,   222,   157,
      18,     6,    16,   154,   155,   156,    15,    33,   149,   156,
      15,    16,   220,    15,   194,   195,   156,    27,   221,    15,
      15,    55,   217,    15,    40,   209,   210,   211,    15,   100,
      40,   206,   207,   208,    16,   223,   161,   156,    15,   147,
     156,   226,   161,    15,   156,   156,   161,   159,   159,    15,
     159,   159,   156,   156,   143,   219,   209,   159,   206,    16,
     223
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
     113,   113,   113,   113,   113,   113,   113,   114,   114,   115,
     115,   116,   116,   117,   118,   119,   119,   119,   119,   119,
     120,   121,   122,   122,   123,   124,   124,   125,   125,   126,
     126,   127,   127,   128,   129,   129,   130,   130,   131,   131,
     132,   132,   132,   133,   133,   134,   134,   135,   136,   136,
     137,   137,   138,   138,   139,   139,   140,   140,   141,   141,
     141,   141,   141,   141,   141,   141,   142,   142,   143,   143,
     144,   144,   145,   145,   146,   146,   147,   147,   148,   148,
     149,   149,   150,   151,   151,   152,   152,   153,   153,   154,
     154,   155,   155,   156,   156,   157,   157,   158,   158,   159,
     159,   160,   160,   161,   161,   162,   162,   163,   163,   164,
     164,   165,   165,   166,   166,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   168,   168,   169,   169,
     170,   170,   171,   171,   172,   172,   173,   173,   174,   174,
     175,   175,   176,   176,   176,   176,   177,   177,   178,   178,
     178,   179,   179,   180,   180,   181,   181,   181,   181,   181,
     181,   181,   181,   182,   182,   183,   183,   184,   184,   185,
     185,   186,   186,   187,   187,   188,   188,   189,   189,   190,
     190,   190,   191,   192,   192,   192,   193,   193,   194,   194,
     195,   195,   196,   197,   198,   198,   199,   199,   200,   200,
     201,   201,   202,   202,   203,   203,   203,   203,   203,   203,
     204,   204,   205,   205,   206,   206,   207,   207,   208,   208,
     209,   209,   210,   210,   211,   211,   212,   212,   213,   214,
     214,   215,   215,   215,   216,   216,   216,   217,   217,   217,
     218,   218,   218,   219,   219,   219,   220,   220,   220,   221,
     221,   221,   222,   222,   222,   223,   223,   223,   224,   225,
     226,   226,   226,   227,   227,   227
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
       1,     1,     1,     1,     1,     1,     1,     2,     4,     2,
       0,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     3,     1,     2,     0,     3,
       0,     1,     1,     2,     5,     4,     2,     0,     2,     1,
       1,     3,     1,     3,     1,     3,     1,     2,     1,     3,
       1,     3,     3,     2,     5,     2,     4,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     8,     5,     5,     0,
       7,     4,     9,     6,     6,     6,     4,     3,     3,     0,
       3,     0,     5,     3,     0,     3,     1,     3,     1,     1,
       1,     2,     0,     1,     4,     2,     1,     2,     1,     1,
       1,     4,     3,     2,     1,     4,     0,     1,     3,     1,
       3,     2,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     3,     1,     1,
       1,     3,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     4,     2,     2,     0,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     0,     1,
       0,     2,     1,     2,     2,     2,     2,     4,     3,     3,
       3,     2,     2,     3,     1,     4,     1,     0,     1,     0,
       2,     1,     2,     2,     4,     2,     1,     1,     1,     1,
       7,     4,     1,     0,     3,     2,     1,     3,     1,     1,
       2,     3,     1,     0,     1,     1,     5,     4,     3,     2,
       1,     1,     5,     4,     3,     2,     1,     3,     1,     2,
       1,     3,     1,     0,     3,     1,     0,     4,     1,     0,
       3,     1,     0,     5,     1,     0,     3,     1,     0,     3,
       1,     0,     3,     3,     2,     3,     3,     2,     2,     2,
       3,     1,     1,     3,     1,     0
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
#line 98 "parse.y" /* yacc.c:1646  */
    {level++;}
#line 1815 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 98 "parse.y" /* yacc.c:1646  */
    { 
        level--; 
        std::string str = std::string((yyvsp[-4].c));
        delete (yyvsp[-4].c); 
        (yyvsp[0].ast)->setLabel(str);        
        if(level ==0){
            SymbolTableManager::getInstance().getScope().addSymbol(str, (yyvsp[0].ast));
        }
    }
#line 1829 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 159 "parse.y" /* yacc.c:1646  */
    {
        // firstly get the ast node from SymbolTable, then get the type and value of this two number
        char leftType = (yyvsp[-2].ast)->getType(), rightType = (yyvsp[0].ast)->getType();
        int flag = (leftType=='D'||rightType=='D')?1:0;
        flag?(yyvsp[-2].ast)->setType('D'):(yyvsp[-2].ast)->setType('I');
        double leftValue = (yyvsp[-2].ast)->getVal(), rightValue = (yyvsp[0].ast)->getVal();            

        switch((yyvsp[-1].i)){
            case PLUSEQUAL: // +=
                leftValue += rightValue;
                break; 

            case MINEQUAL: // -=
                leftValue -= rightValue;
                break;

            case STAREQUAL: // *=
                leftValue *= rightValue;
                break;

            case SLASHEQUAL: // /=
                if(rightValue ==0){
                    std::cerr << "denominator should not be 0" << std::endl;
                    exit(0);
                }
                leftValue /= rightValue;
                break;

            case PERCENTEQUAL: // %=
                leftValue = leftValue-rightValue*floor(leftValue/rightValue);
                break;

            case DOUBLESLASHEQUAL: // //=
                (yyvsp[-2].ast)->setType('I');
                leftValue = floor(leftValue/rightValue); 
                break;

            default: break;
        }    
        if(flag==0)
            (yyvsp[-2].ast)->setVal((int)leftValue); 
        else (yyvsp[-2].ast)->setVal(leftValue);
    }
#line 1877 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 203 "parse.y" /* yacc.c:1646  */
    { 
        if((yyvsp[0].ast)==NULL) {
            (yyval.ast) = (yyvsp[-1].ast);
            std::cout << "$2 == NULL" << std::endl;
        }
        else{
            (yyval.ast) = new AssignNode((yyvsp[-1].ast), (yyvsp[0].ast));
            if(level == 0){
                SymbolTableManager::getInstance().getScope().addSymbol((yyvsp[-1].ast)->getLabel(), (yyvsp[0].ast));
            }
        }
    }
#line 1894 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 221 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast);  }
#line 1900 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 222 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = NULL ;}
#line 1906 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 225 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = PLUSEQUAL; }
#line 1912 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 226 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = MINEQUAL; }
#line 1918 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 227 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = STAREQUAL; }
#line 1924 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 228 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = SLASHEQUAL; }
#line 1930 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 229 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = PERCENTEQUAL; }
#line 1936 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 236 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = DOUBLESLASHEQUAL; }
#line 1942 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 239 "parse.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new PrintNode((yyvsp[0].ast));
        if(level==0) (yyval.ast)->getVal();
    }
#line 1951 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 243 "parse.y" /* yacc.c:1646  */
    {}
#line 1957 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 247 "parse.y" /* yacc.c:1646  */
    { }
#line 1963 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 251 "parse.y" /* yacc.c:1646  */
    {}
#line 1969 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 254 "parse.y" /* yacc.c:1646  */
    {}
#line 1975 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 257 "parse.y" /* yacc.c:1646  */
    {}
#line 1981 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 267 "parse.y" /* yacc.c:1646  */
    {}
#line 1987 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 270 "parse.y" /* yacc.c:1646  */
    {}
#line 1993 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 273 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new ReturnNode((yyvsp[0].ast)); }
#line 1999 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 274 "parse.y" /* yacc.c:1646  */
    { /*TODO*/}
#line 2005 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 280 "parse.y" /* yacc.c:1646  */
    {}
#line 2011 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 281 "parse.y" /* yacc.c:1646  */
    {}
#line 2017 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 292 "parse.y" /* yacc.c:1646  */
    {}
#line 2023 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 293 "parse.y" /* yacc.c:1646  */
    {}
#line 2029 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 336 "parse.y" /* yacc.c:1646  */
    { //todo; 
    
    }
#line 2037 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 341 "parse.y" /* yacc.c:1646  */
    {/*TODO*/}
#line 2043 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 342 "parse.y" /* yacc.c:1646  */
    {}
#line 2049 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 345 "parse.y" /* yacc.c:1646  */
    {}
#line 2055 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 346 "parse.y" /* yacc.c:1646  */
    {}
#line 2061 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 351 "parse.y" /* yacc.c:1646  */
    {}
#line 2067 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 354 "parse.y" /* yacc.c:1646  */
    {}
#line 2073 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 355 "parse.y" /* yacc.c:1646  */
    {}
#line 2079 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 356 "parse.y" /* yacc.c:1646  */
    {}
#line 2085 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 359 "parse.y" /* yacc.c:1646  */
    {}
#line 2091 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 360 "parse.y" /* yacc.c:1646  */
    {}
#line 2097 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 367 "parse.y" /* yacc.c:1646  */
    {}
#line 2103 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 368 "parse.y" /* yacc.c:1646  */
    {}
#line 2109 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 375 "parse.y" /* yacc.c:1646  */
    {}
#line 2115 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 376 "parse.y" /* yacc.c:1646  */
    {}
#line 2121 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 391 "parse.y" /* yacc.c:1646  */
    {}
#line 2127 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 416 "parse.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new SuiteNode((yyvsp[-1].vec));
    }
#line 2135 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 421 "parse.y" /* yacc.c:1646  */
    { 
        (yyvsp[0].vec)->push_back((yyvsp[-1].ast));  
        (yyval.vec) = (yyvsp[0].vec);
    }
#line 2144 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 425 "parse.y" /* yacc.c:1646  */
    { (yyval.vec) = new std::vector<Ast*>{(yyvsp[0].ast)}; }
#line 2150 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 462 "parse.y" /* yacc.c:1646  */
    {}
#line 2156 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 506 "parse.y" /* yacc.c:1646  */
    {
        if((yyvsp[-1].i) == PLUS){
            (yyval.ast) = new AddNode((yyvsp[-2].ast), (yyvsp[0].ast));
        }    
        else if((yyvsp[-1].i) == MINUS)  (yyval.ast) = new MinusNode((yyvsp[-2].ast), (yyvsp[0].ast)); 
    }
#line 2167 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 514 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = PLUS; }
#line 2173 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 515 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = MINUS; }
#line 2179 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 520 "parse.y" /* yacc.c:1646  */
    {   
        switch ((yyvsp[-1].i)){
            case STAR:
                (yyval.ast) = new MulNode((yyvsp[-2].ast), (yyvsp[0].ast));
                break;
            case SLASH:
                if((yyvsp[0].ast)==0 || (yyvsp[-2].ast) == 0) (yyval.ast) = 0;
                else (yyval.ast) = new DividNode((yyvsp[-2].ast), (yyvsp[0].ast)); 
                break;
            case PERCENT:
                if((yyvsp[0].ast)==0 || (yyvsp[-2].ast) == 0) (yyval.ast) = 0;
                else (yyval.ast) =  new PercentNode((yyvsp[-2].ast), (yyvsp[0].ast)); 
                break;
            case DOUBLESLASH:
                if((yyvsp[0].ast)==0 || (yyvsp[-2].ast) == 0) (yyval.ast) = 0;
                else (yyval.ast) = new DoubleDividNode((yyvsp[-2].ast), (yyvsp[0].ast)); 
                break;
            default: break;
        }
    }
#line 2204 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 542 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = STAR; }
#line 2210 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 543 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = SLASH; }
#line 2216 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 544 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = PERCENT; }
#line 2222 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 545 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = DOUBLESLASH; }
#line 2228 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 549 "parse.y" /* yacc.c:1646  */
    {
        if((yyvsp[-1].i) == PLUS) (yyval.ast) = (yyvsp[0].ast);              
        else if((yyvsp[-1].i) == MINUS) {(yyval.ast) = new SingleMinusNode((yyvsp[0].ast), NULL); }  
        else if((yyvsp[-1].i) == TILDE); 
    }
#line 2238 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 557 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = PLUS; }
#line 2244 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 558 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = MINUS; }
#line 2250 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 559 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = TILDE; }
#line 2256 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 562 "parse.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new ExponentNode((yyvsp[-3].ast), (yyvsp[0].ast)); 
    }
#line 2264 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 565 "parse.y" /* yacc.c:1646  */
    { 
        if((yyvsp[0].ast) != NULL) {
            (yyval.ast) = new FuncNode((yyvsp[-1].ast)->getLabel());
            if(level == 0){
                (yyval.ast)->getVal();
            }
            std::cout << "end power" << std::endl;
        }
    }
#line 2278 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 576 "parse.y" /* yacc.c:1646  */
    {}
#line 2284 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 577 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = NULL; }
#line 2290 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 580 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2296 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 581 "parse.y" /* yacc.c:1646  */
    {}
#line 2302 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 582 "parse.y" /* yacc.c:1646  */
    {}
#line 2308 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 583 "parse.y" /* yacc.c:1646  */
    {}
#line 2314 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 584 "parse.y" /* yacc.c:1646  */
    {
        std::string str = std::string((yyvsp[0].c));
        delete (yyvsp[0].c); 
        (yyval.ast) = new StringNode(str);
    }
#line 2324 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 589 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new NumberNode((yyvsp[0].i), 'I'); }
#line 2330 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 590 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new NumberNode((yyvsp[0].d), 'D'); }
#line 2336 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 591 "parse.y" /* yacc.c:1646  */
    {}
#line 2342 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 598 "parse.y" /* yacc.c:1646  */
    { }
#line 2348 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 599 "parse.y" /* yacc.c:1646  */
    { }
#line 2354 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 622 "parse.y" /* yacc.c:1646  */
    {}
#line 2360 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 623 "parse.y" /* yacc.c:1646  */
    {}
#line 2366 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 727 "parse.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast); }
#line 2372 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 728 "parse.y" /* yacc.c:1646  */
    {}
#line 2378 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 746 "parse.y" /* yacc.c:1646  */
    {}
#line 2384 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 747 "parse.y" /* yacc.c:1646  */
    {}
#line 2390 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 748 "parse.y" /* yacc.c:1646  */
    {}
#line 2396 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 767 "parse.y" /* yacc.c:1646  */
    {}
#line 2402 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 768 "parse.y" /* yacc.c:1646  */
    {}
#line 2408 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 769 "parse.y" /* yacc.c:1646  */
    { }
#line 2414 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 788 "parse.y" /* yacc.c:1646  */
    {}
#line 2420 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 789 "parse.y" /* yacc.c:1646  */
    {}
#line 2426 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 790 "parse.y" /* yacc.c:1646  */
    {}
#line 2432 "parse.tab.c" /* yacc.c:1646  */
    break;


#line 2436 "parse.tab.c" /* yacc.c:1646  */
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
#line 793 "parse.y" /* yacc.c:1906  */


#include <stdio.h>
void yyerror (char const *s) {
	fprintf (stderr, "%d: %s with [%s]\n", yylineno, s, yytext);
}

