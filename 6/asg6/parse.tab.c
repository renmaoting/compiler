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
	void yyerror (char const *);

#line 80 "parse.tab.c" /* yacc.c:339  */

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
#line 16 "parse.y" /* yacc.c:355  */

    Ast* ast;
    double d;
    int i;
    char* c;
    std::vector<Ast*>* vec;

#line 215 "parse.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 230 "parse.tab.c" /* yacc.c:358  */

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
#define YYLAST   957

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  141
/* YYNRULES -- Number of rules.  */
#define YYNRULES  325
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  490

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
       0,    57,    57,    58,    59,    68,    69,    72,    75,    76,
      79,    80,    83,    84,    87,    88,    91,    92,    95,    96,
      99,    99,   111,   112,   115,   116,   119,   120,   123,   124,
     127,   128,   131,   132,   135,   136,   139,   142,   143,   146,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   160,
     191,   202,   203,   206,   207,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   224,   230,   233,
     234,   237,   238,   241,   244,   247,   248,   249,   250,   251,
     254,   257,   260,   261,   264,   267,   268,   271,   272,   275,
     276,   279,   280,   283,   286,   287,   290,   291,   294,   295,
     298,   299,   300,   303,   304,   307,   308,   311,   314,   315,
     318,   319,   322,   328,   336,   337,   340,   341,   344,   345,
     346,   347,   348,   349,   350,   351,   354,   355,   358,   359,
     362,   363,   366,   367,   370,   371,   374,   375,   378,   379,
     382,   383,   386,   389,   390,   393,   394,   397,   398,   401,
     402,   405,   406,   410,   411,   416,   420,   425,   426,   429,
     430,   433,   434,   443,   444,   447,   448,   451,   452,   455,
     456,   459,   460,   463,   464,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   481,   482,   485,   486,
     489,   490,   493,   494,   497,   498,   501,   502,   511,   512,
     515,   516,   539,   540,   541,   542,   545,   551,   554,   555,
     556,   559,   562,   573,   574,   577,   578,   579,   580,   581,
     586,   587,   588,   591,   592,   595,   596,   599,   600,   603,
     604,   607,   608,   611,   612,   615,   616,   619,   620,   623,
     624,   625,   628,   631,   632,   633,   636,   637,   640,   641,
     644,   645,   648,   652,   655,   656,   659,   660,   663,   664,
     667,   668,   671,   672,   675,   676,   677,   678,   679,   680,
     683,   684,   687,   688,   691,   692,   695,   696,   699,   700,
     703,   704,   708,   709,   712,   713,   716,   717,   720,   724,
     725,   728,   729,   730,   733,   734,   735,   738,   739,   740,
     743,   744,   745,   748,   749,   750,   753,   754,   755,   759,
     760,   761,   764,   765,   766,   769,   770,   771,   774,   777,
     780,   781,   782,   785,   786,   787
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

#define YYPACT_NINF -363

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-363)))

#define YYTABLE_NINF -308

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     402,   805,   -16,   805,  -363,    52,  -363,    79,   866,   866,
     866,    75,    90,   805,   -16,    20,   805,    92,   805,  -363,
     155,   158,   854,  -363,  -363,  -363,  -363,   347,   805,   805,
      80,  -363,   144,   805,   805,   805,   161,  -363,  -363,   482,
     134,   156,    41,  -363,  -363,   166,  -363,    93,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,   153,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
     159,    11,   169,  -363,   899,   167,   164,   175,    -6,     4,
      26,  -363,   866,  -363,    42,  -363,  -363,    34,  -363,  -363,
    -363,  -363,   170,  -363,    17,  -363,   115,    29,  -363,   116,
    -363,    36,   138,    45,   -16,   146,  -363,   176,  -363,   179,
      56,   805,    72,  -363,   177,    21,   171,    99,   127,  -363,
      74,  -363,   112,  -363,  -363,    96,   125,  -363,  -363,   805,
    -363,   159,   181,  -363,  -363,   642,   185,   187,   199,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,   704,   150,
     160,   805,  -363,   854,   854,  -363,   854,  -363,  -363,  -363,
    -363,  -363,   154,  -363,  -363,   168,  -363,   866,   866,   866,
     866,  -363,  -363,   866,  -363,  -363,   866,  -363,  -363,  -363,
    -363,   866,  -363,   162,   231,   756,   194,    42,  -363,  -363,
    -363,  -363,    92,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,    92,   805,   165,   231,  -363,  -363,   805,   642,
     805,   172,   866,  -363,   805,   805,  -363,  -363,    84,    -2,
     642,   -16,   180,  -363,   203,   148,   805,   183,   184,  -363,
     805,   206,   805,   866,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,   866,  -363,  -363,  -363,   208,  -363,   805,  -363,   189,
    -363,   123,   642,   805,   211,   866,    93,  -363,  -363,   159,
      23,   169,  -363,  -363,  -363,   167,   164,   175,    -6,     4,
      26,  -363,  -363,   805,   805,   157,    22,  -363,   226,  -363,
     227,   223,   230,   173,   233,   238,   866,  -363,   224,  -363,
    -363,  -363,  -363,  -363,   186,  -363,  -363,  -363,   188,    30,
     242,   116,   244,   243,    -2,   207,   257,  -363,  -363,   248,
    -363,   239,  -363,  -363,    72,  -363,  -363,  -363,  -363,   250,
    -363,    19,  -363,   102,   225,   229,   805,  -363,  -363,   244,
    -363,   805,   253,   251,   260,   252,   187,   642,   167,  -363,
    -363,   805,  -363,  -363,  -363,   805,  -363,  -363,   231,   773,
     259,  -363,   314,  -363,   805,  -363,  -363,   228,   266,  -363,
     214,   642,  -363,   805,  -363,   642,  -363,   216,   237,   207,
    -363,   805,   267,   203,   269,  -363,  -363,   171,   805,  -363,
    -363,  -363,   854,   822,   279,  -363,   562,   113,   642,   282,
     265,   642,   284,  -363,  -363,  -363,  -363,  -363,   285,  -363,
    -363,  -363,   233,  -363,   287,  -363,   642,  -363,  -363,  -363,
     273,  -363,  -363,   248,   288,   290,  -363,   258,   206,   291,
      27,    28,   101,   299,  -363,   246,   805,  -363,  -363,  -363,
    -363,  -363,   805,  -363,  -363,   642,   301,  -363,   286,   642,
     773,  -363,   805,  -363,  -363,  -363,   303,  -363,   642,   642,
    -363,  -363,   805,   822,  -363,  -363,  -363,   822,   304,   822,
    -363,  -363,  -363,   822,  -363,  -363,  -363,   642,  -363,  -363,
    -363,  -363,   642,   239,  -363,   305,   108,  -363,   822,   101,
     306,  -363,  -363,  -363,  -363,  -363,  -363,  -363,   822,  -363
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
     156,   148,     0,   139,     0,   131,   144,     0,   145,   323,
     300,     0,   318,   319,   239,     0,   270,   272,   265,     0,
       0,   240,   247,   242,   247,   211,    53,     0,     0,    23,
       0,     0,   294,     0,   114,     0,    94,     0,     0,   310,
     107,     0,   127,   293,     0,    32,    28,    27,   304,   254,
     256,   257,     0,     0,   314,    89,     0,   152,     0,     0,
     141,     0,     0,   143,   142,   165,   271,   264,   322,   321,
     267,   243,   308,   246,   249,    12,     0,    22,    21,    87,
     133,   101,   103,   311,     0,     0,   291,     0,   299,     0,
     283,    29,   277,   158,   160,   159,   313,   312,   154,   155,
     149,   150,     0,   147,   135,     0,     0,   134,   137,     0,
       0,   306,   251,   245,   248,   260,     0,   309,     0,     0,
      30,   297,     0,     0,   282,   280,   281,     0,     0,     0,
     276,   274,   275,     0,   157,   151,   138,     0,   136,   130,
     320,   250,     0,   129,   126,   305,   285,   162,     0,   279,
     317,   140,   132,   128,   303,   284,   161,   278,   316,   315
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -363,  -363,  -363,  -363,  -363,   281,  -363,   119,   292,  -363,
     289,  -363,  -363,  -281,   -51,     6,  -363,  -363,  -105,  -363,
     -36,     1,   190,  -363,   126,    44,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,     5,  -363,
    -363,  -363,  -363,   234,   240,    32,   -28,   121,    40,  -363,
      18,  -363,  -363,  -363,  -363,  -363,  -127,  -363,  -363,  -363,
     -86,  -363,  -363,  -363,    13,   104,  -363,  -363,  -363,  -198,
    -363,  -363,  -362,  -363,    -1,  -363,  -149,   200,    -3,  -363,
    -363,    15,   193,   195,   197,  -363,   182,  -363,   196,  -363,
     -72,  -363,  -363,   191,  -363,  -363,  -363,  -363,  -363,   328,
    -363,  -363,  -363,  -363,  -363,    24,     9,  -363,  -363,    -5,
     -21,  -363,  -363,  -363,   333,  -363,    33,  -320,  -363,   -99,
     261,  -363,   -94,  -111,  -363,  -363,  -363,    -4,    10,    83,
     -33,   -89,   -85,   -13,   -22,    12,   -83,  -319,  -363,   -40,
     147
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    36,    37,    38,    39,    40,    41,   275,    42,    43,
      44,   211,   300,   114,   231,   115,   375,   229,   116,   225,
      45,   250,    47,    48,   288,   201,   202,    49,   130,   327,
      50,    51,    52,    53,    54,    55,    56,    57,   364,   248,
      58,    59,    60,   104,   105,   308,   309,   108,   310,   109,
     110,    61,    62,    63,    64,    65,   372,    66,    67,    68,
     333,   390,   437,    69,   254,   137,   334,   432,   433,   251,
     386,   422,   480,   424,    70,   155,    71,    72,    73,    74,
     167,    75,    76,    77,    78,   173,    79,   176,    80,   181,
      81,    82,    83,   186,    84,   121,   122,   126,   118,    85,
     127,   123,    86,   187,   283,   284,   285,   443,   444,   100,
      87,   119,   379,   234,    88,   298,   277,   278,   346,   460,
     461,   462,   454,   455,   456,    96,    89,    90,   315,   213,
     322,   152,   381,   353,   370,   328,   464,   279,   280,   400,
     149
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      92,    46,    95,   143,   260,   102,   235,   224,   133,   238,
     182,   296,   107,   124,   139,   117,   120,   125,   360,   128,
      94,   423,   311,    99,   101,    99,   131,   132,   236,   398,
     399,   239,   136,   138,  -298,   111,   243,   188,   204,    93,
      46,   171,   246,   457,   209,   227,   168,   189,   177,   305,
     341,   153,   345,   306,   335,     5,   233,   190,   174,   191,
       7,   233,   222,   183,   192,   172,   103,   453,   205,   175,
     112,   112,   154,   206,   113,   113,   307,   204,   214,   112,
     210,   112,   193,   113,   154,   113,   -99,   194,   154,   178,
     151,   476,  -298,   184,   185,   477,   103,   479,   195,   228,
     196,     3,   179,   359,   180,   204,   197,    97,   233,   271,
     223,   198,   151,   199,   232,   151,   486,   200,   378,   430,
     398,   399,   218,   112,   207,   304,   168,   113,   245,   431,
     241,   208,   212,   233,    98,   241,   233,    15,    16,   394,
     458,   459,   233,    17,    18,   106,    19,    91,   453,    22,
     259,    23,    24,   262,   331,  -288,   332,    26,    -5,   135,
      30,   140,   144,   408,     2,   347,    -6,   410,   148,   150,
     340,   289,    30,    31,   156,   151,   169,   168,    35,   170,
     215,   289,   265,   276,   282,   240,   203,   219,   290,   297,
     434,   220,   226,   438,   303,   221,   237,   247,   290,   244,
     252,   230,   292,   253,   276,   255,   257,   295,   445,   373,
     264,   263,   380,   302,   355,   258,   377,   272,   286,   314,
     293,   316,   321,   299,   326,   317,   337,   301,   324,   320,
     344,   323,   330,   420,   425,   313,   325,   466,   318,   319,
       3,   469,   348,   349,   350,  -246,   329,   351,    99,   352,
     473,   474,   138,   354,   192,   273,    99,   361,   365,   357,
     363,   358,   306,   368,   369,   371,   374,   382,   388,   481,
     338,   383,   342,   343,   482,   391,    15,    16,   389,   392,
     401,   406,    17,    18,   405,    19,    91,   407,    22,   411,
      23,    24,   412,   417,   415,   426,    26,   435,   436,   439,
     446,   440,   442,   448,   425,   449,   452,   154,   425,   274,
     425,    30,    31,   450,   425,   463,   467,   331,   472,   478,
     142,   378,   488,     3,   294,   384,   418,   376,   291,   425,
     387,   146,   356,   145,   385,   281,   366,   216,   256,   425,
     395,   413,   312,   217,   396,   367,   483,   276,   276,   393,
     429,   282,   468,   403,   261,   269,     3,   336,   134,    15,
      16,   266,   409,   404,   267,    17,    18,   268,    19,    91,
     414,    22,   270,    23,    24,   147,   402,   419,   287,    26,
     487,   397,   485,   416,   362,   451,   242,    46,  -307,   441,
     484,   447,    15,    16,    30,    31,   427,   489,    17,    18,
     470,    19,    91,   339,    22,     0,    23,    24,     0,     1,
       2,     3,    26,     4,     0,     0,     5,     0,   129,     6,
       0,     7,     8,     0,     0,   384,     0,    30,    31,     0,
       0,   465,     0,     0,     9,     0,    10,    11,    12,   276,
       0,   471,    13,    14,     0,     0,     0,    15,    16,     0,
       0,   475,     0,    17,    18,     0,    19,    20,    21,    22,
       0,    23,    24,     0,    25,     0,     0,    26,     0,    27,
      28,     0,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    30,    31,    32,     0,    33,    34,    35,     1,
       2,     3,     0,     4,     0,     0,     5,     0,     0,     6,
       0,     7,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,     0,    10,    11,    12,     0,
       0,     0,    13,    14,     0,     0,     0,    15,    16,     0,
       0,     0,     0,    17,    18,     0,    19,    91,   141,    22,
       0,    23,    24,     0,    25,     0,     0,    26,     0,    27,
      28,     0,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    30,    31,    32,     0,    33,    34,    35,     1,
       2,     3,     0,     4,     0,     0,     5,     0,     0,     6,
     428,     7,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,     0,    10,    11,    12,     0,
       0,     0,    13,    14,     0,     0,     0,    15,    16,     0,
       0,     0,     0,    17,    18,     0,    19,    91,     0,    22,
       0,    23,    24,     0,    25,     0,     0,    26,     0,    27,
      28,     0,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    30,    31,    32,     0,    33,    34,    35,     1,
       0,     3,     0,     4,     0,     0,     0,     0,     0,     6,
       0,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,     0,     0,    11,    12,     0,
       0,     0,     0,    14,     0,     0,     0,    15,    16,     0,
       0,     0,     0,    17,    18,     0,    19,    91,   249,    22,
       0,    23,    24,     0,    25,     0,     0,    26,     0,    27,
      28,     1,    29,     3,     0,     4,     0,     0,     0,     0,
       0,     6,    30,    31,     8,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     9,     0,     0,    11,
      12,     0,     0,     0,     0,    14,     0,     0,     0,    15,
      16,     0,     0,     0,     0,    17,    18,     0,    19,    91,
       0,    22,     0,    23,    24,     3,    25,     0,     0,    26,
       0,    27,    28,     0,    29,     0,     0,   281,     0,     0,
       0,     0,     3,     0,    30,    31,     0,     0,     0,     0,
      35,     0,     0,     0,     0,     0,     0,   273,     0,     0,
       0,    15,    16,     0,     0,     0,     0,    17,    18,     0,
      19,    91,     0,    22,     3,    23,    24,     0,    15,    16,
       0,    26,     0,     0,    17,    18,     0,    19,    91,     0,
      22,     3,    23,    24,     0,     0,    30,    31,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      15,    16,     0,    30,    31,     0,    17,    18,     0,    19,
      91,     0,    22,     3,    23,    24,     0,   421,    16,     0,
      26,     0,     0,    17,    18,     3,    19,    91,     0,    22,
       0,    23,    24,     0,     0,    30,    31,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      16,     0,    30,    31,     0,    17,    18,     0,    19,    91,
       0,    22,    16,    23,    24,     0,     0,    17,    18,    26,
      19,    91,     0,     0,     0,    23,    24,     0,   157,     0,
       0,    26,     0,     0,    30,    31,   158,   159,   160,     0,
       0,   161,     0,   162,     0,     0,    30,    31,   163,   164,
       0,     0,     0,     0,     0,     0,   165,   166
};

static const yytype_int16 yycheck[] =
{
       1,     0,     3,    39,   153,    10,   117,   112,    29,   120,
      82,   209,    13,    17,    35,    16,    17,    18,   299,    22,
       2,   383,   220,     8,     9,    10,    27,    28,   117,   349,
     349,   120,    33,    34,    15,    15,   125,     3,    21,    55,
      39,    47,   131,    15,    15,    24,    10,    13,    22,    51,
      27,    40,    30,    55,   252,    14,    34,    23,    54,    25,
      19,    34,     6,    21,    30,    71,    21,    40,    51,    65,
      51,    51,    61,    56,    55,    55,    78,    21,    42,    51,
      51,    51,    48,    55,    61,    55,    41,    53,    61,    63,
      16,   453,    73,    51,    52,   457,    21,   459,    64,    78,
      66,     9,    76,    73,    78,    21,    72,    55,    34,   181,
     111,    77,    16,    79,    15,    16,   478,    83,    16,     6,
     440,   440,   104,    51,     9,    41,    10,    55,   129,    16,
      34,    16,    16,    34,    55,    34,    34,    45,    46,   337,
     421,    40,    34,    51,    52,    55,    54,    55,    40,    57,
     151,    59,    60,   156,    31,     0,    33,    65,     0,    15,
      80,     0,    28,   361,     8,   276,     0,   365,    75,    16,
     259,   192,    80,    81,     5,    16,    12,    10,    86,     4,
      42,   202,   167,   184,   185,    73,    16,    41,   192,   210,
     388,    15,    15,   391,   215,    16,    69,    16,   202,    74,
      15,    30,   203,    16,   205,     6,    56,   208,   406,   314,
      42,    57,   323,   214,   286,    55,   321,    55,    24,    16,
      55,    73,    16,    51,    16,   226,    15,   212,   233,   230,
      73,   232,    43,   382,   383,    55,   241,   435,    55,    55,
       9,   439,    16,    16,    21,    15,   247,    74,   233,    16,
     448,   449,   253,    15,    30,    24,   241,    15,    15,    73,
      16,    73,    55,     6,    16,    26,    16,    42,    15,   467,
     255,    42,   273,   274,   472,    15,    45,    46,    27,    27,
      21,    15,    51,    52,    56,    54,    55,    73,    57,    73,
      59,    60,    55,    24,    27,    16,    65,    15,    33,    15,
      27,    16,    15,    15,   453,    15,    15,    61,   457,    78,
     459,    80,    81,    55,   463,    16,    15,    31,    15,    15,
      39,    16,    16,     9,   205,   326,   377,   321,   202,   478,
     331,    42,   288,    41,   329,    21,   304,   103,   148,   488,
     341,   369,   221,   103,   345,   305,   473,   348,   349,   336,
     386,   352,   438,   354,   154,   173,     9,   253,    30,    45,
      46,   168,   363,   354,   169,    51,    52,   170,    54,    55,
     371,    57,   176,    59,    60,    42,   352,   378,   187,    65,
     479,   348,   476,   373,   301,   418,   125,   386,    74,   402,
     475,   413,    45,    46,    80,    81,   384,   480,    51,    52,
     440,    54,    55,   256,    57,    -1,    59,    60,    -1,     7,
       8,     9,    65,    11,    -1,    -1,    14,    -1,    71,    17,
      -1,    19,    20,    -1,    -1,   426,    -1,    80,    81,    -1,
      -1,   432,    -1,    -1,    32,    -1,    34,    35,    36,   440,
      -1,   442,    40,    41,    -1,    -1,    -1,    45,    46,    -1,
      -1,   452,    -1,    51,    52,    -1,    54,    55,    56,    57,
      -1,    59,    60,    -1,    62,    -1,    -1,    65,    -1,    67,
      68,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    82,    -1,    84,    85,    86,     7,
       8,     9,    -1,    11,    -1,    -1,    14,    -1,    -1,    17,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    34,    35,    36,    -1,
      -1,    -1,    40,    41,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    -1,    51,    52,    -1,    54,    55,    56,    57,
      -1,    59,    60,    -1,    62,    -1,    -1,    65,    -1,    67,
      68,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    82,    -1,    84,    85,    86,     7,
       8,     9,    -1,    11,    -1,    -1,    14,    -1,    -1,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    34,    35,    36,    -1,
      -1,    -1,    40,    41,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    -1,    51,    52,    -1,    54,    55,    -1,    57,
      -1,    59,    60,    -1,    62,    -1,    -1,    65,    -1,    67,
      68,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    82,    -1,    84,    85,    86,     7,
      -1,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    17,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    -1,    51,    52,    -1,    54,    55,    56,    57,
      -1,    59,    60,    -1,    62,    -1,    -1,    65,    -1,    67,
      68,     7,    70,     9,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    17,    80,    81,    20,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,
      36,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    51,    52,    -1,    54,    55,
      -1,    57,    -1,    59,    60,     9,    62,    -1,    -1,    65,
      -1,    67,    68,    -1,    70,    -1,    -1,    21,    -1,    -1,
      -1,    -1,     9,    -1,    80,    81,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    45,    46,    -1,    -1,    -1,    -1,    51,    52,    -1,
      54,    55,    -1,    57,     9,    59,    60,    -1,    45,    46,
      -1,    65,    -1,    -1,    51,    52,    -1,    54,    55,    -1,
      57,     9,    59,    60,    -1,    -1,    80,    81,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    80,    81,    -1,    51,    52,    -1,    54,
      55,    -1,    57,     9,    59,    60,    -1,    45,    46,    -1,
      65,    -1,    -1,    51,    52,     9,    54,    55,    -1,    57,
      -1,    59,    60,    -1,    -1,    80,    81,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    80,    81,    -1,    51,    52,    -1,    54,    55,
      -1,    57,    46,    59,    60,    -1,    -1,    51,    52,    65,
      54,    55,    -1,    -1,    -1,    59,    60,    -1,    29,    -1,
      -1,    65,    -1,    -1,    80,    81,    37,    38,    39,    -1,
      -1,    42,    -1,    44,    -1,    -1,    80,    81,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58
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
     210,   219,    42,    42,   161,   125,   157,   161,    15,    27,
     148,    15,    27,   151,   156,   161,   161,   203,   204,   224,
     226,    21,   192,   161,   193,    56,    15,    73,   156,   161,
     156,    73,    55,   133,   161,    27,   215,    24,   101,   161,
     163,    45,   158,   159,   160,   163,    16,   222,    18,   107,
       6,    16,   154,   155,   156,    15,    33,   149,   156,    15,
      16,   220,    15,   194,   195,   156,    27,   221,    15,    15,
      55,   217,    15,    40,   209,   210,   211,    15,   100,    40,
     206,   207,   208,    16,   223,   161,   156,    15,   147,   156,
     226,   161,    15,   156,   156,   161,   159,   159,    15,   159,
     159,   156,   156,   143,   219,   209,   159,   206,    16,   223
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
       1,     2,     0,     1,     4,     2,     0,     2,     1,     1,
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
#line 99 "parse.y" /* yacc.c:1646  */
    {level++;}
#line 1813 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 99 "parse.y" /* yacc.c:1646  */
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
#line 1828 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 161 "parse.y" /* yacc.c:1646  */
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
#line 1863 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 192 "parse.y" /* yacc.c:1646  */
    { 
        if((yyvsp[0].ast)!=NULL) {
            (yyval.ast) = new AssignNode((yyvsp[-1].ast), (yyvsp[0].ast));
            if(level == 0){
                SymbolTableManager::getInstance().addSymbol((yyvsp[-1].ast)->getLabel(), (yyvsp[0].ast));
            }
        }
    }
#line 1876 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 206 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast);  }
#line 1882 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 207 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = NULL ;}
#line 1888 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 210 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = PLUSEQUAL; }
#line 1894 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 211 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = MINEQUAL; }
#line 1900 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 212 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = STAREQUAL; }
#line 1906 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 213 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = SLASHEQUAL; }
#line 1912 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 214 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = PERCENTEQUAL; }
#line 1918 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 221 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = DOUBLESLASHEQUAL; }
#line 1924 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 224 "parse.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new PrintNode((yyvsp[0].ast));
        if(level==0) {
            (yyval.ast)->getVal();
        }
    }
#line 1935 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 230 "parse.y" /* yacc.c:1646  */
    {}
#line 1941 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 234 "parse.y" /* yacc.c:1646  */
    { }
#line 1947 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 238 "parse.y" /* yacc.c:1646  */
    {}
#line 1953 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 241 "parse.y" /* yacc.c:1646  */
    {}
#line 1959 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 244 "parse.y" /* yacc.c:1646  */
    {}
#line 1965 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 254 "parse.y" /* yacc.c:1646  */
    {}
#line 1971 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 257 "parse.y" /* yacc.c:1646  */
    {}
#line 1977 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 260 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new ReturnNode((yyvsp[0].ast)); }
#line 1983 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 261 "parse.y" /* yacc.c:1646  */
    { /*TODO*/}
#line 1989 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 267 "parse.y" /* yacc.c:1646  */
    {}
#line 1995 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 268 "parse.y" /* yacc.c:1646  */
    {}
#line 2001 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 279 "parse.y" /* yacc.c:1646  */
    {}
#line 2007 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 280 "parse.y" /* yacc.c:1646  */
    {}
#line 2013 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 322 "parse.y" /* yacc.c:1646  */
    {
        std::string str = std::string((yyvsp[0].c));
        delete (yyvsp[0].c); 
        (yyvsp[-2].ast)->addName(str);
        (yyval.ast) = (yyvsp[-2].ast);
    }
#line 2024 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 328 "parse.y" /* yacc.c:1646  */
    {  
        std::string str = std::string((yyvsp[0].c));
        delete (yyvsp[0].c); 
        (yyval.ast) = new GlobalNode("global"); 
        (yyval.ast)->addName(str);
    }
#line 2035 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 336 "parse.y" /* yacc.c:1646  */
    {/*TODO*/}
#line 2041 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 337 "parse.y" /* yacc.c:1646  */
    {}
#line 2047 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 340 "parse.y" /* yacc.c:1646  */
    {}
#line 2053 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 341 "parse.y" /* yacc.c:1646  */
    {}
#line 2059 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 346 "parse.y" /* yacc.c:1646  */
    {}
#line 2065 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 349 "parse.y" /* yacc.c:1646  */
    {}
#line 2071 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 350 "parse.y" /* yacc.c:1646  */
    {}
#line 2077 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 351 "parse.y" /* yacc.c:1646  */
    {}
#line 2083 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 354 "parse.y" /* yacc.c:1646  */
    {}
#line 2089 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 355 "parse.y" /* yacc.c:1646  */
    {}
#line 2095 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 362 "parse.y" /* yacc.c:1646  */
    {}
#line 2101 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 363 "parse.y" /* yacc.c:1646  */
    {}
#line 2107 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 370 "parse.y" /* yacc.c:1646  */
    {}
#line 2113 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 371 "parse.y" /* yacc.c:1646  */
    {}
#line 2119 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 386 "parse.y" /* yacc.c:1646  */
    {}
#line 2125 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 411 "parse.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new SuiteNode((yyvsp[-1].vec));
    }
#line 2133 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 416 "parse.y" /* yacc.c:1646  */
    { 
        (yyvsp[-1].vec)->push_back((yyvsp[0].ast));  
        (yyval.vec) = (yyvsp[-1].vec);
    }
#line 2142 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 420 "parse.y" /* yacc.c:1646  */
    { 
        (yyval.vec) = new std::vector<Ast*>; 
    }
#line 2150 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 459 "parse.y" /* yacc.c:1646  */
    {}
#line 2156 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 503 "parse.y" /* yacc.c:1646  */
    {
        if((yyvsp[-1].i) == PLUS){
            (yyval.ast) = new AddNode((yyvsp[-2].ast), (yyvsp[0].ast));
        }    
        else if((yyvsp[-1].i) == MINUS)  (yyval.ast) = new MinusNode((yyvsp[-2].ast), (yyvsp[0].ast)); 
    }
#line 2167 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 511 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = PLUS; }
#line 2173 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 512 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = MINUS; }
#line 2179 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 517 "parse.y" /* yacc.c:1646  */
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
#line 539 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = STAR; }
#line 2210 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 540 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = SLASH; }
#line 2216 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 541 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = PERCENT; }
#line 2222 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 542 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = DOUBLESLASH; }
#line 2228 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 546 "parse.y" /* yacc.c:1646  */
    {
        if((yyvsp[-1].i) == PLUS) (yyval.ast) = (yyvsp[0].ast);              
        else if((yyvsp[-1].i) == MINUS) {(yyval.ast) = new SingleMinusNode((yyvsp[0].ast), NULL); }  
        else if((yyvsp[-1].i) == TILDE); 
    }
#line 2238 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 554 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = PLUS; }
#line 2244 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 555 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = MINUS; }
#line 2250 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 556 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = TILDE; }
#line 2256 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 559 "parse.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new ExponentNode((yyvsp[-3].ast), (yyvsp[0].ast)); 
    }
#line 2264 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 562 "parse.y" /* yacc.c:1646  */
    { 
        if((yyvsp[0].ast) != NULL) {
            (yyval.ast) = new FuncNode((yyvsp[-1].ast)->getLabel());
            if(level == 0){
                (yyval.ast)->getVal();
            }
        }
        else (yyval.ast) = (yyvsp[-1].ast);
    }
#line 2278 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 573 "parse.y" /* yacc.c:1646  */
    {}
#line 2284 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 574 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = NULL; }
#line 2290 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 577 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2296 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 578 "parse.y" /* yacc.c:1646  */
    {}
#line 2302 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 579 "parse.y" /* yacc.c:1646  */
    {}
#line 2308 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 580 "parse.y" /* yacc.c:1646  */
    {}
#line 2314 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 581 "parse.y" /* yacc.c:1646  */
    {
        std::string str = std::string((yyvsp[0].c));
        delete (yyvsp[0].c); 
        (yyval.ast) = new StringNode(str);
    }
#line 2324 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 586 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new NumberNode((yyvsp[0].i), 'I'); }
#line 2330 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 587 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new NumberNode((yyvsp[0].d), 'D'); }
#line 2336 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 588 "parse.y" /* yacc.c:1646  */
    {}
#line 2342 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 595 "parse.y" /* yacc.c:1646  */
    { }
#line 2348 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 596 "parse.y" /* yacc.c:1646  */
    { }
#line 2354 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 619 "parse.y" /* yacc.c:1646  */
    {}
#line 2360 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 620 "parse.y" /* yacc.c:1646  */
    {}
#line 2366 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 724 "parse.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast); }
#line 2372 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 725 "parse.y" /* yacc.c:1646  */
    {}
#line 2378 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 743 "parse.y" /* yacc.c:1646  */
    {}
#line 2384 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 744 "parse.y" /* yacc.c:1646  */
    {}
#line 2390 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 745 "parse.y" /* yacc.c:1646  */
    {}
#line 2396 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 764 "parse.y" /* yacc.c:1646  */
    {}
#line 2402 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 765 "parse.y" /* yacc.c:1646  */
    {}
#line 2408 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 766 "parse.y" /* yacc.c:1646  */
    { }
#line 2414 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 785 "parse.y" /* yacc.c:1646  */
    {}
#line 2420 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 786 "parse.y" /* yacc.c:1646  */
    {}
#line 2426 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 787 "parse.y" /* yacc.c:1646  */
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
#line 790 "parse.y" /* yacc.c:1906  */


#include <stdio.h>
void yyerror (char const *s) {
	fprintf (stderr, "%d: %s with [%s]\n", yylineno, s, yytext);
}

