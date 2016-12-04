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
	int yylex (void);
	extern int yylineno;
	extern char *yytext;
	void yyerror (char const *);

#line 77 "parse.tab.c" /* yacc.c:339  */

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
#line 13 "parse.y" /* yacc.c:355  */

    Ast* ast;
    double d;
    int i;
    char* c;
    std::vector<Ast*>* vec;

#line 212 "parse.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 227 "parse.tab.c" /* yacc.c:358  */

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
#define YYLAST   969

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  140
/* YYNRULES -- Number of rules.  */
#define YYNRULES  324
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
       0,    54,    54,    55,    56,    65,    66,    69,    72,    73,
      76,    77,    80,    81,    84,    85,    88,    89,    92,    93,
      96,    99,   100,   103,   104,   107,   108,   111,   112,   115,
     116,   119,   120,   123,   124,   127,   130,   131,   134,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   148,   192,
     200,   201,   204,   205,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   222,   230,   233,   234,
     237,   238,   241,   244,   247,   248,   249,   250,   251,   254,
     257,   260,   261,   264,   267,   268,   271,   272,   275,   276,
     279,   280,   283,   286,   287,   290,   291,   294,   295,   298,
     299,   300,   303,   304,   307,   308,   311,   314,   315,   318,
     319,   322,   323,   328,   329,   332,   333,   336,   337,   338,
     339,   340,   341,   342,   343,   346,   347,   350,   351,   354,
     355,   358,   359,   362,   363,   366,   367,   370,   371,   374,
     375,   378,   381,   382,   385,   386,   389,   390,   393,   394,
     397,   398,   402,   403,   409,   410,   413,   414,   417,   418,
     421,   422,   431,   432,   435,   436,   439,   440,   443,   444,
     447,   448,   451,   452,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   469,   470,   473,   474,   477,
     478,   481,   482,   485,   486,   489,   490,   499,   500,   503,
     504,   527,   528,   529,   530,   533,   539,   542,   543,   544,
     547,   550,   553,   554,   557,   558,   559,   560,   561,   571,
     572,   573,   576,   577,   580,   581,   584,   585,   588,   589,
     592,   593,   596,   597,   600,   601,   604,   605,   608,   609,
     610,   613,   616,   617,   618,   621,   622,   625,   626,   629,
     630,   633,   637,   640,   641,   644,   645,   648,   649,   652,
     653,   656,   657,   660,   661,   662,   663,   664,   665,   668,
     669,   672,   673,   676,   677,   680,   681,   684,   685,   688,
     689,   693,   694,   697,   698,   701,   702,   705,   709,   710,
     713,   714,   715,   718,   719,   720,   723,   724,   725,   728,
     729,   730,   733,   734,   735,   738,   739,   740,   744,   745,
     746,   749,   750,   751,   754,   755,   756,   759,   762,   765,
     766,   767,   770,   771,   772
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
  "decorators", "decorated", "funcdef", "parameters", "varargslist",
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

#define YYTABLE_NINF -307

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     378,   839,    -5,   839,  -363,     7,  -363,    49,   888,   888,
     888,   130,   103,   839,    -5,    14,   839,    89,   839,  -363,
     159,   163,   310,  -363,  -363,  -363,  -363,   750,   839,   839,
      88,  -363,   149,   839,   839,   839,   174,  -363,  -363,   458,
     148,   171,   112,  -363,  -363,   182,  -363,   111,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,   173,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
     175,    47,   187,  -363,   123,   177,   184,   190,    38,    57,
      12,  -363,   888,  -363,    42,  -363,  -363,    53,  -363,  -363,
    -363,  -363,   181,  -363,    23,  -363,    83,    21,   150,    35,
    -363,    29,   157,    79,    -5,   162,  -363,   185,  -363,   189,
      40,   839,     3,  -363,   195,     6,   183,   122,   146,  -363,
      26,  -363,   145,  -363,  -363,    73,   147,  -363,  -363,   839,
    -363,   175,   204,  -363,  -363,   618,   207,   208,   219,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,   680,   186,
     172,   839,  -363,   310,   310,  -363,   310,  -363,  -363,  -363,
    -363,  -363,   180,  -363,  -363,   196,  -363,   888,   888,   888,
     888,  -363,  -363,   888,  -363,  -363,   888,  -363,  -363,  -363,
    -363,   888,  -363,   176,   234,   790,   205,    42,  -363,  -363,
    -363,  -363,    89,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,    89,   839,   191,   234,  -363,  -363,   839,   618,
     839,    -3,   225,   888,  -363,   839,   839,  -363,  -363,    82,
       4,   618,    -5,   199,  -363,   229,   168,   839,   200,   201,
    -363,   839,   235,   839,   888,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,   888,  -363,  -363,  -363,   241,  -363,   839,  -363,
     216,  -363,   124,   618,   839,   245,   888,   111,  -363,  -363,
     175,    20,   187,  -363,  -363,  -363,   177,   184,   190,    38,
      57,    12,  -363,  -363,   839,   839,   188,    99,  -363,   246,
    -363,   247,   243,   250,   194,   253,   255,   888,  -363,   220,
    -363,  -363,  -363,  -363,  -363,   198,  -363,  -363,  -363,   202,
    -363,   203,   618,    35,   261,   263,     4,   226,   276,  -363,
    -363,   267,  -363,   258,  -363,  -363,     3,  -363,  -363,  -363,
    -363,   271,  -363,    13,  -363,    80,   248,   254,   839,  -363,
    -363,   261,   538,   839,   277,   268,   282,   273,   208,   618,
     177,  -363,  -363,   839,  -363,  -363,  -363,   839,  -363,  -363,
     234,   808,   280,  -363,   732,  -363,   839,  -363,  -363,   242,
     287,  -363,  -363,  -363,   839,  -363,   618,  -363,   231,   251,
     226,  -363,   839,   278,   229,   284,  -363,  -363,   183,   839,
    -363,  -363,  -363,   310,   857,   294,  -363,   538,   293,    51,
     618,   301,   285,   618,   302,  -363,  -363,  -363,  -363,  -363,
     304,  -363,  -363,  -363,   253,  -363,   306,  -363,   618,  -363,
     295,  -363,  -363,   267,   308,   309,  -363,   270,   235,   311,
      84,    22,    87,   313,  -363,   269,   839,  -363,  -363,  -363,
    -363,  -363,   839,  -363,  -363,   618,   316,  -363,   303,   618,
     808,  -363,   839,  -363,  -363,  -363,   320,  -363,   618,   618,
    -363,  -363,   839,   857,  -363,  -363,  -363,   857,   321,   857,
    -363,  -363,  -363,   857,  -363,  -363,  -363,   618,  -363,  -363,
    -363,  -363,   618,   258,  -363,   323,   113,  -363,   857,    87,
     324,  -363,  -363,  -363,  -363,  -363,  -363,  -363,   857,  -363
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      11,     0,     0,     0,    79,     0,    80,     0,     0,     0,
       0,    96,     0,     0,     0,    28,   229,   225,   227,   208,
     218,     8,     0,   219,   220,    73,   207,    69,    85,    82,
     231,   209,     0,     0,     0,   289,     0,     4,     2,    11,
       0,    17,     0,   124,   122,     9,    36,   324,    39,    40,
      41,    42,    43,    74,    75,    76,    78,    77,    44,    90,
      91,    45,    46,    47,    37,   117,   118,   119,   120,   121,
     301,   165,   166,   168,   171,   172,   185,   187,   189,   191,
     195,   199,     0,   206,   213,   221,   163,    53,   123,     3,
      83,   218,   116,   109,     0,   285,     0,     0,     0,   295,
      72,   114,     0,    96,     0,     0,   112,     0,   107,    92,
     105,     0,     0,    33,     0,     0,    26,   301,     0,   228,
     301,   224,     0,   223,   222,   301,     0,   226,   170,     0,
      66,   301,    89,    81,   230,     0,     0,   143,   145,   288,
       1,     8,    10,     9,     7,    16,    19,    18,   323,     0,
       0,   300,   252,     0,     0,   162,     0,   176,   175,   177,
     179,   181,   183,   174,   178,     0,   180,     0,     0,     0,
       0,   193,   194,     0,   198,   197,     0,   204,   203,   202,
     201,     0,   205,     0,    15,   246,   211,   213,    59,    61,
      65,    64,     0,    62,    55,    58,    54,    63,    57,    56,
      60,    49,     0,     0,     0,    15,    13,   217,     0,     0,
     262,    28,     0,   294,   251,     0,     0,    95,    97,     0,
       0,     0,     0,     0,   237,   292,     0,     0,     0,     0,
      23,     0,   298,     0,     0,   254,   257,   258,   216,   234,
     235,   214,     0,   232,   233,   215,    71,    68,     0,    84,
       0,   152,     0,     0,     0,     0,     0,   324,    38,   111,
     301,     0,   167,   169,   184,   182,   173,   186,   188,   190,
     192,   196,   200,   240,     0,     0,     0,   272,    14,   265,
     268,   267,     0,   243,     0,   307,     0,     0,   212,    53,
      51,    50,    48,   115,   110,     0,   286,   260,   261,     0,
      22,     0,     0,   295,    87,     0,     0,     0,   103,    99,
      94,   310,   101,   128,   108,   104,   291,    35,    34,   236,
      32,    30,    25,    28,    24,   304,     0,     0,     0,    67,
      70,    87,     0,   147,     0,   138,     0,   130,   143,     0,
     144,   322,   299,     0,   317,   318,   238,     0,   269,   271,
     264,     0,     0,   239,   246,   241,   246,   210,    52,     0,
       0,    21,    20,   293,     0,   113,     0,    93,     0,     0,
     309,   106,     0,   126,   292,     0,    31,    27,    26,   303,
     253,   255,   256,     0,     0,   313,    88,   155,     0,   151,
       0,     0,   140,     0,     0,   142,   141,   164,   270,   263,
     321,   320,   266,   242,   307,   245,   248,    12,     0,    86,
     132,   100,   102,   310,     0,     0,   290,     0,   298,     0,
     282,    28,   276,   157,   159,   158,   312,   311,   154,   153,
     148,   149,     0,   146,   134,     0,     0,   133,   136,     0,
       0,   305,   250,   244,   247,   259,     0,   308,     0,     0,
      29,   296,     0,     0,   281,   279,   280,     0,     0,     0,
     275,   273,   274,     0,   156,   150,   137,     0,   135,   129,
     319,   249,     0,   128,   125,   304,   284,   161,     0,   278,
     316,   139,   131,   127,   302,   283,   160,   277,   315,   314
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -363,  -363,  -363,  -363,  -363,   298,  -363,   136,   307,  -363,
     305,  -363,  -204,   -35,    28,  -363,  -363,  -107,  -363,    41,
       1,   197,  -363,   142,    63,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,    27,  -363,  -363,
    -363,  -363,   256,   257,    48,   -13,   144,    61,  -363,    11,
    -363,  -363,  -363,  -363,  -363,  -101,  -363,  -363,  -363,   -65,
    -363,  -363,  -363,    36,   125,  -363,  -363,  -363,  -200,   -11,
    -363,  -362,  -363,    -1,  -363,  -150,   223,   -14,  -363,  -363,
      10,   212,   213,   211,  -363,   210,  -363,   217,  -363,   -76,
    -363,  -363,   209,  -363,  -363,  -363,  -363,  -363,   354,  -363,
    -363,  -363,  -363,  -363,    45,    44,  -363,  -363,    -6,    -4,
    -363,  -363,  -363,   352,  -363,    52,  -328,  -363,   -78,   279,
    -363,   -73,  -106,  -363,  -363,  -363,    -7,    31,   104,   -12,
     -82,   -67,     5,    -2,    30,   -64,  -327,  -363,   -23,   164
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    36,    37,    38,    39,    40,    41,   276,    42,    43,
      44,   212,   114,   232,   115,   376,   230,   116,   226,   387,
     251,    47,    48,   289,   201,   202,    49,   130,   329,    50,
      51,    52,    53,    54,    55,    56,    57,   365,   249,    58,
      59,    60,   104,   105,   310,   311,   108,   312,   109,   110,
      61,    62,    63,    64,    65,   373,    66,    67,    68,   335,
     392,   437,    69,   255,   137,   336,   432,   433,   252,   388,
     422,   480,   424,    70,   155,    71,    72,    73,    74,   167,
      75,    76,    77,    78,   173,    79,   176,    80,   181,    81,
      82,    83,   186,    84,   121,   122,   126,   118,    85,   127,
     123,    86,   187,   284,   285,   286,   443,   444,   100,    87,
     119,   380,   235,    88,   299,   278,   279,   348,   460,   461,
     462,   454,   455,   456,    96,    89,    90,   317,   214,   324,
     152,   382,   355,   371,   330,   464,   280,   281,   402,   149
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      92,    46,    95,   261,   102,   225,   182,   301,   128,   297,
     124,   236,   107,    94,   239,   117,   120,   125,    99,   101,
      99,   313,   423,   400,   401,   133,   131,   132,  -297,   111,
     228,   139,   136,   138,   177,   237,   209,   457,   240,   168,
      46,    45,   151,   244,   204,   168,   223,   343,   112,   247,
      93,   213,   113,   337,   112,   307,   188,   430,   113,   308,
     234,   204,    97,   183,   112,   112,   189,   431,   113,   113,
     300,   215,   210,   112,   205,   178,   190,   113,   191,   206,
     143,   154,   309,   192,   229,   171,  -297,   153,   179,   151,
     180,   476,   207,   184,   185,   477,   379,   479,     3,   208,
     103,   193,   362,   204,    98,   272,   194,   242,   154,   172,
     224,   174,   400,   401,   234,   219,   486,   195,   234,   196,
     -98,   242,   175,   306,   453,   197,     5,   459,   246,   347,
     198,     7,   199,   234,    15,    16,   200,   233,   151,   396,
      17,    18,   263,    19,    91,   154,    22,   234,    23,    24,
     260,   103,   157,   453,    26,   333,   234,   334,   106,  -287,
     158,   159,   160,    -5,   135,   161,   410,   162,    30,    30,
      31,   349,   163,   164,   140,    35,   144,   266,   342,     2,
     165,   166,    -6,   277,   283,   291,   148,   168,   290,   150,
     434,   151,   156,   438,   170,   291,   169,   203,   290,   216,
     221,   211,   293,   220,   277,   222,   298,   296,   445,   374,
     227,   357,   305,   231,   304,   238,   378,   458,   241,   381,
     248,   245,   253,   303,   254,   256,   319,   259,   326,   287,
     322,   273,   325,   420,   425,   466,   327,   264,   265,   469,
     302,   318,   258,     3,    99,   316,   294,   331,   473,   474,
     192,   323,    99,   138,   315,   320,   321,   328,   274,   332,
     339,   346,   350,   351,   352,  -245,   340,   481,   353,   354,
     356,   359,   482,   344,   345,   360,   361,   364,   366,    15,
      16,   308,   369,   370,   372,    17,    18,   375,    19,    91,
     383,    22,   390,    23,    24,   391,   384,   393,   407,    26,
     394,   403,   408,   425,   411,   415,   412,   425,   417,   425,
     426,   429,   275,   425,    30,    31,   435,   439,   436,     3,
     440,   442,   446,   448,   449,   450,   452,   385,   425,   463,
     154,   467,   389,    46,   333,   472,   478,   142,   425,   379,
     488,   295,   397,   418,   292,   257,   398,   146,   145,   277,
     277,   377,   358,   283,   367,   405,    16,   413,   386,   217,
     218,    17,    18,   409,    19,    91,   314,    22,   368,    23,
      24,   414,   483,   468,   395,    26,   428,   262,   419,   338,
     267,   269,   268,   270,   134,     1,     2,     3,    46,     4,
      30,    31,     5,   271,   147,     6,   288,     7,     8,   404,
     406,   487,   399,   485,   243,   416,   451,   363,   484,   441,
       9,   447,    10,    11,    12,   427,   489,   470,    13,    14,
       0,   341,     0,    15,    16,   385,     0,     0,     0,    17,
      18,   465,    19,    20,    21,    22,     0,    23,    24,   277,
      25,   471,     0,    26,     0,    27,    28,     0,    29,     0,
       0,   475,     0,     0,     0,     0,     0,     0,    30,    31,
      32,     0,    33,    34,    35,     1,     2,     3,     0,     4,
       0,     0,     5,     0,     0,     6,     0,     7,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,     0,    10,    11,    12,     0,     0,     0,    13,    14,
       0,     0,     0,    15,    16,     0,     0,     0,     0,    17,
      18,     0,    19,    91,   141,    22,     0,    23,    24,     0,
      25,     0,     0,    26,     0,    27,    28,     0,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,    31,
      32,     0,    33,    34,    35,     1,     2,     3,     0,     4,
       0,     0,     5,     0,     0,     6,     0,     7,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,     0,    10,    11,    12,     0,     0,     0,    13,    14,
       0,     0,     0,    15,    16,     0,     0,     0,     0,    17,
      18,     0,    19,    91,     0,    22,     0,    23,    24,     0,
      25,     0,     0,    26,     0,    27,    28,     0,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,    31,
      32,     0,    33,    34,    35,     1,     0,     3,     0,     4,
       0,     0,     0,     0,     0,     6,     0,     0,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,     0,     0,    11,    12,     0,     0,     0,     0,    14,
       0,     0,     0,    15,    16,     0,     0,     0,     0,    17,
      18,     0,    19,    91,   250,    22,     0,    23,    24,     0,
      25,     0,     0,    26,     0,    27,    28,     1,    29,     3,
       0,     4,     0,     0,     0,     0,     0,     6,    30,    31,
       8,     0,     0,     0,    35,     0,     0,     0,     0,     0,
       0,     0,     9,     0,     0,    11,    12,     0,     0,     0,
       0,    14,     0,     0,     0,    15,    16,     0,     0,     0,
       0,    17,    18,     0,    19,    91,     0,    22,     0,    23,
      24,     3,    25,     0,     0,    26,     0,    27,    28,     0,
      29,     0,     0,   282,     0,     0,     0,     0,     0,     3,
      30,    31,     0,     0,     0,     0,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    15,    16,     0,
       0,     0,     0,    17,    18,     0,    19,    91,     0,    22,
       0,    23,    24,     0,     0,    15,    16,    26,     0,     3,
       0,    17,    18,     0,    19,    91,  -306,    22,     0,    23,
      24,   282,    30,    31,     0,    26,     0,     3,     0,     0,
       0,   129,     0,     0,     0,     0,     0,     0,     0,     0,
      30,    31,   274,     0,     0,    15,    16,     0,     0,     0,
       0,    17,    18,     0,    19,    91,     0,    22,     3,    23,
      24,     0,     0,    15,    16,    26,     0,     0,     0,    17,
      18,     0,    19,    91,     0,    22,     3,    23,    24,     0,
      30,    31,     0,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    15,    16,     0,     0,    30,    31,
      17,    18,     0,    19,    91,     0,    22,     3,    23,    24,
       0,     0,   421,    16,    26,     0,     0,     0,    17,    18,
       0,    19,    91,     0,    22,     0,    23,    24,     0,    30,
      31,     0,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    16,     0,     0,    30,    31,    17,
      18,     0,    19,    91,     0,     0,     0,    23,    24,     0,
       0,     0,     0,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,    31
};

static const yytype_int16 yycheck[] =
{
       1,     0,     3,   153,    10,   112,    82,   211,    22,   209,
      17,   117,    13,     2,   120,    16,    17,    18,     8,     9,
      10,   221,   384,   351,   351,    29,    27,    28,    15,    15,
      24,    35,    33,    34,    22,   117,    15,    15,   120,    10,
      39,     0,    16,   125,    21,    10,     6,    27,    51,   131,
      55,    16,    55,   253,    51,    51,     3,     6,    55,    55,
      34,    21,    55,    21,    51,    51,    13,    16,    55,    55,
      73,    42,    51,    51,    51,    63,    23,    55,    25,    56,
      39,    61,    78,    30,    78,    47,    73,    40,    76,    16,
      78,   453,     9,    51,    52,   457,    16,   459,     9,    16,
      21,    48,   302,    21,    55,   181,    53,    34,    61,    71,
     111,    54,   440,   440,    34,   104,   478,    64,    34,    66,
      41,    34,    65,    41,    40,    72,    14,    40,   129,    30,
      77,    19,    79,    34,    45,    46,    83,    15,    16,   339,
      51,    52,   156,    54,    55,    61,    57,    34,    59,    60,
     151,    21,    29,    40,    65,    31,    34,    33,    55,     0,
      37,    38,    39,     0,    15,    42,   366,    44,    80,    80,
      81,   277,    49,    50,     0,    86,    28,   167,   260,     8,
      57,    58,     0,   184,   185,   192,    75,    10,   192,    16,
     390,    16,     5,   393,     4,   202,    12,    16,   202,    42,
      15,    51,   203,    41,   205,    16,   210,   208,   408,   316,
      15,   287,   216,    30,   215,    69,   323,   421,    73,   325,
      16,    74,    15,   213,    16,     6,   227,    55,   234,    24,
     231,    55,   233,   383,   384,   435,   242,    57,    42,   439,
      15,    73,    56,     9,   234,    16,    55,   248,   448,   449,
      30,    16,   242,   254,    55,    55,    55,    16,    24,    43,
      15,    73,    16,    16,    21,    15,   256,   467,    74,    16,
      15,    73,   472,   274,   275,    73,    73,    16,    15,    45,
      46,    55,     6,    16,    26,    51,    52,    16,    54,    55,
      42,    57,    15,    59,    60,    27,    42,    15,    56,    65,
      27,    21,    15,   453,    73,    27,    55,   457,    24,   459,
      16,    18,    78,   463,    80,    81,    15,    15,    33,     9,
      16,    15,    27,    15,    15,    55,    15,   328,   478,    16,
      61,    15,   333,   332,    31,    15,    15,    39,   488,    16,
      16,   205,   343,   378,   202,   148,   347,    42,    41,   350,
     351,   323,   289,   354,   306,   356,    46,   370,   331,   103,
     103,    51,    52,   364,    54,    55,   222,    57,   307,    59,
      60,   372,   473,   438,   338,    65,   387,   154,   379,   254,
     168,   170,   169,   173,    30,     7,     8,     9,   387,    11,
      80,    81,    14,   176,    42,    17,   187,    19,    20,   354,
     356,   479,   350,   476,   125,   374,   418,   303,   475,   404,
      32,   413,    34,    35,    36,   385,   480,   440,    40,    41,
      -1,   257,    -1,    45,    46,   426,    -1,    -1,    -1,    51,
      52,   432,    54,    55,    56,    57,    -1,    59,    60,   440,
      62,   442,    -1,    65,    -1,    67,    68,    -1,    70,    -1,
      -1,   452,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      82,    -1,    84,    85,    86,     7,     8,     9,    -1,    11,
      -1,    -1,    14,    -1,    -1,    17,    -1,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    34,    35,    36,    -1,    -1,    -1,    40,    41,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    51,
      52,    -1,    54,    55,    56,    57,    -1,    59,    60,    -1,
      62,    -1,    -1,    65,    -1,    67,    68,    -1,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      82,    -1,    84,    85,    86,     7,     8,     9,    -1,    11,
      -1,    -1,    14,    -1,    -1,    17,    -1,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    34,    35,    36,    -1,    -1,    -1,    40,    41,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    51,
      52,    -1,    54,    55,    -1,    57,    -1,    59,    60,    -1,
      62,    -1,    -1,    65,    -1,    67,    68,    -1,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      82,    -1,    84,    85,    86,     7,    -1,     9,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    51,
      52,    -1,    54,    55,    56,    57,    -1,    59,    60,    -1,
      62,    -1,    -1,    65,    -1,    67,    68,     7,    70,     9,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    17,    80,    81,
      20,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    51,    52,    -1,    54,    55,    -1,    57,    -1,    59,
      60,     9,    62,    -1,    -1,    65,    -1,    67,    68,    -1,
      70,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,     9,
      80,    81,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    -1,    51,    52,    -1,    54,    55,    -1,    57,
      -1,    59,    60,    -1,    -1,    45,    46,    65,    -1,     9,
      -1,    51,    52,    -1,    54,    55,    74,    57,    -1,    59,
      60,    21,    80,    81,    -1,    65,    -1,     9,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    24,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    51,    52,    -1,    54,    55,    -1,    57,     9,    59,
      60,    -1,    -1,    45,    46,    65,    -1,    -1,    -1,    51,
      52,    -1,    54,    55,    -1,    57,     9,    59,    60,    -1,
      80,    81,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    80,    81,
      51,    52,    -1,    54,    55,    -1,    57,     9,    59,    60,
      -1,    -1,    45,    46,    65,    -1,    -1,    -1,    51,    52,
      -1,    54,    55,    -1,    57,    -1,    59,    60,    -1,    80,
      81,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    80,    81,    51,
      52,    -1,    54,    55,    -1,    -1,    -1,    59,    60,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,
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
      92,    93,    95,    96,    97,   106,   107,   108,   109,   113,
     116,   117,   118,   119,   120,   121,   122,   123,   126,   127,
     128,   137,   138,   139,   140,   141,   143,   144,   145,   149,
     160,   162,   163,   164,   165,   167,   168,   169,   170,   172,
     174,   176,   177,   178,   180,   185,   188,   196,   200,   212,
     213,    55,   160,    55,   136,   160,   211,    55,    55,   167,
     195,   167,   195,    21,   129,   130,    55,   160,   133,   135,
     136,    15,    51,    55,    99,   101,   104,   160,   184,   197,
     160,   181,   182,   187,   213,   160,   183,   186,   164,    71,
     114,   160,   160,   196,   185,    15,   160,   151,   160,   196,
       0,    56,    92,   106,    28,    95,    97,   200,    75,   226,
      16,    16,   217,    40,    61,   161,     5,    29,    37,    38,
      39,    42,    44,    49,    50,    57,    58,   166,    10,    12,
       4,    47,    71,   171,    54,    65,   173,    22,    63,    76,
      78,   175,   176,    21,    51,    52,   179,   189,     3,    13,
      23,    25,    30,    48,    53,    64,    66,    72,    77,    79,
      83,   111,   112,    16,    21,    51,    56,     9,    16,    15,
      51,    51,    98,    16,   215,    42,    42,   129,   130,   136,
      41,    15,    16,     6,   160,   104,   105,    15,    24,    78,
     103,    30,   100,    15,    34,   199,   209,   217,    69,   209,
     217,    73,    34,   206,   217,    74,   160,   217,    16,   125,
      56,   107,   155,    15,    16,   150,     6,   108,    56,    55,
     160,   162,   163,   164,    57,    42,   167,   168,   169,   170,
     172,   174,   176,    55,    24,    78,    94,   160,   202,   203,
     223,   224,    21,   160,   190,   191,   192,    24,   179,   110,
     196,   213,   110,   160,    55,    94,   160,   155,   196,   201,
      73,    99,    15,   167,   160,   196,    41,    51,    55,    78,
     131,   132,   134,   155,   133,    55,    16,   214,    73,   160,
      55,    55,   160,    16,   216,   160,   195,   195,    16,   115,
     221,   160,    43,    31,    33,   146,   152,   155,   151,    15,
     167,   226,   217,    27,   160,   160,    73,    30,   204,   209,
      16,    16,    21,    74,    16,   219,    15,   176,   111,    73,
      73,    73,   155,   215,    16,   124,    15,   131,   134,     6,
      16,   220,    26,   142,   104,    16,   102,   101,   104,    16,
     198,   209,   218,    42,    42,   160,   124,   106,   156,   160,
      15,    27,   147,    15,    27,   150,   155,   160,   160,   202,
     203,   223,   225,    21,   191,   160,   192,    56,    15,   160,
     155,    73,    55,   132,   160,    27,   214,    24,   100,   160,
     162,    45,   157,   158,   159,   162,    16,   221,   156,    18,
       6,    16,   153,   154,   155,    15,    33,   148,   155,    15,
      16,   219,    15,   193,   194,   155,    27,   220,    15,    15,
      55,   216,    15,    40,   208,   209,   210,    15,    99,    40,
     205,   206,   207,    16,   222,   160,   155,    15,   146,   155,
     225,   160,    15,   155,   155,   160,   158,   158,    15,   158,
     158,   155,   155,   142,   218,   208,   158,   205,    16,   222
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    88,    89,    89,    90,    91,    91,
      92,    92,    93,    93,    94,    94,    95,    95,    96,    96,
      97,    98,    98,    99,    99,   100,   100,   101,   101,   102,
     102,   103,   103,   104,   104,   105,   106,   106,   107,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   113,   113,   114,   114,
     115,   115,   116,   117,   118,   118,   118,   118,   118,   119,
     120,   121,   121,   122,   123,   123,   124,   124,   125,   125,
     126,   126,   127,   128,   128,   129,   129,   130,   130,   131,
     131,   131,   132,   132,   133,   133,   134,   135,   135,   136,
     136,   137,   137,   138,   138,   139,   139,   140,   140,   140,
     140,   140,   140,   140,   140,   141,   141,   142,   142,   143,
     143,   144,   144,   145,   145,   146,   146,   147,   147,   148,
     148,   149,   150,   150,   151,   151,   152,   152,   153,   153,
     154,   154,   155,   155,   156,   156,   157,   157,   158,   158,
     159,   159,   160,   160,   161,   161,   162,   162,   163,   163,
     164,   164,   165,   165,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   167,   167,   168,   168,   169,
     169,   170,   170,   171,   171,   172,   172,   173,   173,   174,
     174,   175,   175,   175,   175,   176,   176,   177,   177,   177,
     178,   178,   179,   179,   180,   180,   180,   180,   180,   180,
     180,   180,   181,   181,   182,   182,   183,   183,   184,   184,
     185,   185,   186,   186,   187,   187,   188,   188,   189,   189,
     189,   190,   191,   191,   191,   192,   192,   193,   193,   194,
     194,   195,   196,   197,   197,   198,   198,   199,   199,   200,
     200,   201,   201,   202,   202,   202,   202,   202,   202,   203,
     203,   204,   204,   205,   205,   206,   206,   207,   207,   208,
     208,   209,   209,   210,   210,   211,   211,   212,   213,   213,
     214,   214,   214,   215,   215,   215,   216,   216,   216,   217,
     217,   217,   218,   218,   218,   219,   219,   219,   220,   220,
     220,   221,   221,   221,   222,   222,   222,   223,   224,   225,
     225,   225,   226,   226,   226
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     2,     1,     1,
       2,     0,     6,     3,     1,     0,     2,     1,     2,     2,
       5,     3,     2,     2,     3,     2,     0,     4,     0,     3,
       0,     3,     2,     1,     3,     2,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       1,     1,     3,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     2,     0,
       1,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     3,     1,     2,     0,     3,     0,
       1,     1,     2,     5,     4,     2,     0,     2,     1,     1,
       3,     1,     3,     1,     3,     1,     2,     1,     3,     1,
       3,     3,     2,     5,     2,     4,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     8,     5,     5,     0,     7,
       4,     9,     6,     6,     6,     4,     3,     3,     0,     3,
       0,     5,     3,     0,     3,     1,     3,     1,     1,     1,
       2,     0,     1,     4,     2,     1,     2,     1,     1,     1,
       4,     3,     2,     1,     4,     0,     1,     3,     1,     3,
       2,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     3,     1,     1,     1,
       3,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       4,     2,     2,     0,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     0,     1,     0,
       2,     1,     2,     2,     2,     2,     4,     3,     3,     3,
       2,     2,     3,     1,     4,     1,     0,     1,     0,     2,
       1,     2,     2,     4,     2,     1,     1,     1,     1,     7,
       4,     1,     0,     3,     2,     1,     3,     1,     1,     2,
       3,     1,     0,     1,     1,     5,     4,     3,     2,     1,
       1,     5,     4,     3,     2,     1,     3,     1,     2,     1,
       3,     1,     0,     3,     1,     0,     4,     1,     0,     3,
       1,     0,     5,     1,     0,     3,     1,     0,     3,     1,
       0,     3,     3,     2,     3,     3,     2,     2,     2,     3,
       1,     1,     3,     1,     0
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
        case 48:
#line 149 "parse.y" /* yacc.c:1646  */
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
#line 1852 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 193 "parse.y" /* yacc.c:1646  */
    { 
        (yyvsp[-1].ast)->setVal((yyvsp[0].ast)->getVal());
        (yyvsp[-1].ast)->setType((yyvsp[0].ast)->getType());
        //if($2->getRef()==0) delete $2;
    }
#line 1862 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 204 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast);  }
#line 1868 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 205 "parse.y" /* yacc.c:1646  */
    {}
#line 1874 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 208 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = PLUSEQUAL; }
#line 1880 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 209 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = MINEQUAL; }
#line 1886 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 210 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = STAREQUAL; }
#line 1892 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 211 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = SLASHEQUAL; }
#line 1898 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 212 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = PERCENTEQUAL; }
#line 1904 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 219 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = DOUBLESLASHEQUAL; }
#line 1910 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 222 "parse.y" /* yacc.c:1646  */
    {
        double val = (yyvsp[0].ast)->getVal();
        std::cout << std::setprecision(12);
        if((yyvsp[0].ast)->getType()=='D' && val == (int)val){
            std::cout << val << ".0" << std::endl;
        } 
        else std::cout << val << std::endl;
    }
#line 1923 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 230 "parse.y" /* yacc.c:1646  */
    {}
#line 1929 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 234 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new Ast(); }
#line 1935 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 238 "parse.y" /* yacc.c:1646  */
    {}
#line 1941 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 241 "parse.y" /* yacc.c:1646  */
    {}
#line 1947 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 244 "parse.y" /* yacc.c:1646  */
    {}
#line 1953 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 254 "parse.y" /* yacc.c:1646  */
    {}
#line 1959 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 257 "parse.y" /* yacc.c:1646  */
    {}
#line 1965 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 260 "parse.y" /* yacc.c:1646  */
    {/*todo*/}
#line 1971 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 261 "parse.y" /* yacc.c:1646  */
    { /*TODO*/}
#line 1977 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 267 "parse.y" /* yacc.c:1646  */
    {}
#line 1983 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 268 "parse.y" /* yacc.c:1646  */
    {}
#line 1989 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 279 "parse.y" /* yacc.c:1646  */
    {}
#line 1995 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 280 "parse.y" /* yacc.c:1646  */
    {}
#line 2001 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 323 "parse.y" /* yacc.c:1646  */
    { //todo; 
    
    }
#line 2009 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 328 "parse.y" /* yacc.c:1646  */
    {/*TODO*/}
#line 2015 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 329 "parse.y" /* yacc.c:1646  */
    {}
#line 2021 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 332 "parse.y" /* yacc.c:1646  */
    {}
#line 2027 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 333 "parse.y" /* yacc.c:1646  */
    {}
#line 2033 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 338 "parse.y" /* yacc.c:1646  */
    {}
#line 2039 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 341 "parse.y" /* yacc.c:1646  */
    {}
#line 2045 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 342 "parse.y" /* yacc.c:1646  */
    {}
#line 2051 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 343 "parse.y" /* yacc.c:1646  */
    {}
#line 2057 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 346 "parse.y" /* yacc.c:1646  */
    {}
#line 2063 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 347 "parse.y" /* yacc.c:1646  */
    {}
#line 2069 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 354 "parse.y" /* yacc.c:1646  */
    {}
#line 2075 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 355 "parse.y" /* yacc.c:1646  */
    {}
#line 2081 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 362 "parse.y" /* yacc.c:1646  */
    {}
#line 2087 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 363 "parse.y" /* yacc.c:1646  */
    {}
#line 2093 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 378 "parse.y" /* yacc.c:1646  */
    {}
#line 2099 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 403 "parse.y" /* yacc.c:1646  */
    {
        //$$ = new SuiteNode($3);
        std::cout << "suite" << std::endl; 
    }
#line 2108 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 409 "parse.y" /* yacc.c:1646  */
    { std::cout << "evol" << std::endl; }
#line 2114 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 410 "parse.y" /* yacc.c:1646  */
    { std::cout << "hello " << std::endl; }
#line 2120 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 447 "parse.y" /* yacc.c:1646  */
    {}
#line 2126 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 491 "parse.y" /* yacc.c:1646  */
    {
        if((yyvsp[-1].i) == PLUS){
            (yyval.ast) = new AddNode((yyvsp[-2].ast), (yyvsp[0].ast));
        }    
        else if((yyvsp[-1].i) == MINUS)  (yyval.ast) = new MinusNode((yyvsp[-2].ast), (yyvsp[0].ast)); 
    }
#line 2137 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 499 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = PLUS; }
#line 2143 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 500 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = MINUS; }
#line 2149 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 505 "parse.y" /* yacc.c:1646  */
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
#line 2174 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 527 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = STAR; }
#line 2180 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 528 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = SLASH; }
#line 2186 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 529 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = PERCENT; }
#line 2192 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 530 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = DOUBLESLASH; }
#line 2198 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 534 "parse.y" /* yacc.c:1646  */
    {
        if((yyvsp[-1].i) == PLUS) (yyval.ast) = (yyvsp[0].ast);              
        else if((yyvsp[-1].i) == MINUS) {(yyval.ast) = new SingleMinusNode((yyvsp[0].ast), NULL); }  
        else if((yyvsp[-1].i) == TILDE); 
    }
#line 2208 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 542 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = PLUS; }
#line 2214 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 543 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = MINUS; }
#line 2220 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 544 "parse.y" /* yacc.c:1646  */
    { (yyval.i) = TILDE; }
#line 2226 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 547 "parse.y" /* yacc.c:1646  */
    {
        (yyval.ast) = new ExponentNode((yyvsp[-3].ast), (yyvsp[0].ast)); 
    }
#line 2234 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 557 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[-1].ast); }
#line 2240 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 558 "parse.y" /* yacc.c:1646  */
    {}
#line 2246 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 559 "parse.y" /* yacc.c:1646  */
    {}
#line 2252 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 560 "parse.y" /* yacc.c:1646  */
    {}
#line 2258 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 561 "parse.y" /* yacc.c:1646  */
    {
        std::string str = std::string((yyvsp[0].c));
        delete (yyvsp[0].c); 
    //    Ast* node = SymbolTable::getInstance().getAstNode(str);
    //    if(node) $$ = node;
    //    else{// change the type of node, indicate this symbol has not been initialized
    //        $$ = new NumberNode(0, 'S');
    //        SymbolTable::getInstance().addSymbol(str, $$);
    //    }*/
    }
#line 2273 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 571 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new NumberNode((yyvsp[0].i), 'I'); }
#line 2279 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 572 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = new NumberNode((yyvsp[0].d), 'D'); }
#line 2285 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 573 "parse.y" /* yacc.c:1646  */
    {}
#line 2291 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 580 "parse.y" /* yacc.c:1646  */
    { }
#line 2297 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 581 "parse.y" /* yacc.c:1646  */
    { }
#line 2303 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 604 "parse.y" /* yacc.c:1646  */
    {}
#line 2309 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 605 "parse.y" /* yacc.c:1646  */
    {}
#line 2315 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 709 "parse.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast); }
#line 2321 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 710 "parse.y" /* yacc.c:1646  */
    {}
#line 2327 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 728 "parse.y" /* yacc.c:1646  */
    {}
#line 2333 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 729 "parse.y" /* yacc.c:1646  */
    {}
#line 2339 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 730 "parse.y" /* yacc.c:1646  */
    {}
#line 2345 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 749 "parse.y" /* yacc.c:1646  */
    {}
#line 2351 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 750 "parse.y" /* yacc.c:1646  */
    {}
#line 2357 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 751 "parse.y" /* yacc.c:1646  */
    { }
#line 2363 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 770 "parse.y" /* yacc.c:1646  */
    {}
#line 2369 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 771 "parse.y" /* yacc.c:1646  */
    {}
#line 2375 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 772 "parse.y" /* yacc.c:1646  */
    {}
#line 2381 "parse.tab.c" /* yacc.c:1646  */
    break;


#line 2385 "parse.tab.c" /* yacc.c:1646  */
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
#line 775 "parse.y" /* yacc.c:1906  */


#include <stdio.h>
void yyerror (char const *s) {
	fprintf (stderr, "%d: %s with [%s]\n", yylineno, s, yytext);
}

