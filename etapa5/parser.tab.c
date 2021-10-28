/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 3 "parser.y" /* yacc.c:339  */

	#include <stdlib.h>
	#include <stdio.h>
	#include <string>
	
	#include "pilhaContexto.hpp"
	using namespace std;

	extern "C" {
		int yyparse(void);
		int yylex(void);  
		int yywrap() {
			return 1;
		}
	}
	int yyerror (char const *s);
	extern int get_line_number (void);
	extern char *yytext;
	extern void *arvore;
	extern PilhaContexto tabelas;
	int ultimoRotulo=-1;
	int ultimoReg=-1;
	int instId =-1;

		

#line 93 "parser.tab.c" /* yacc.c:339  */

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
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TK_PR_INT = 258,
    TK_PR_FLOAT = 259,
    TK_PR_BOOL = 260,
    TK_PR_CHAR = 261,
    TK_PR_STRING = 262,
    TK_PR_IF = 263,
    TK_PR_THEN = 264,
    TK_PR_ELSE = 265,
    TK_PR_WHILE = 266,
    TK_PR_DO = 267,
    TK_PR_INPUT = 268,
    TK_PR_OUTPUT = 269,
    TK_PR_RETURN = 270,
    TK_PR_CONST = 271,
    TK_PR_STATIC = 272,
    TK_PR_FOREACH = 273,
    TK_PR_FOR = 274,
    TK_PR_SWITCH = 275,
    TK_PR_CASE = 276,
    TK_PR_BREAK = 277,
    TK_PR_CONTINUE = 278,
    TK_PR_CLASS = 279,
    TK_PR_PRIVATE = 280,
    TK_PR_PUBLIC = 281,
    TK_PR_PROTECTED = 282,
    TK_PR_END = 283,
    TK_PR_DEFAULT = 284,
    TK_OC_LE = 285,
    TK_OC_GE = 286,
    TK_OC_EQ = 287,
    TK_OC_NE = 288,
    TK_OC_AND = 289,
    TK_OC_OR = 290,
    TK_OC_SL = 291,
    TK_OC_SR = 292,
    TK_LIT_INT = 293,
    TK_LIT_FLOAT = 294,
    TK_LIT_FALSE = 295,
    TK_LIT_TRUE = 296,
    TK_LIT_CHAR = 297,
    TK_LIT_STRING = 298,
    TK_IDENTIFICADOR = 299,
    TOKEN_ERRO = 300,
    PREC_UNA = 301
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 30 "parser.y" /* yacc.c:355  */

	struct lexic_val_type* valor_lexico;
	struct arvore* nodo;
	int tipo;	

#line 186 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 203 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   556

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  127
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  217

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    63,     2,    66,    67,    65,    64,     2,
      49,    50,    58,    55,    46,    56,    69,    59,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    48,    47,
      60,    62,    61,    70,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,     2,    52,    68,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    53,    57,    54,     2,     2,     2,     2,
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
      45,    71
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   163,   163,   164,   165,   167,   171,   172,   173,   174,
     176,   177,   178,   179,   180,   182,   183,   184,   185,   187,
     188,   189,   190,   192,   193,   195,   196,   198,   199,   200,
     203,   204,   206,   207,   208,   209,   212,   213,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   225,   227,   228,
     230,   231,   233,   234,   236,   237,   238,   239,   240,   241,
     243,   244,   245,   246,   248,   249,   251,   252,   253,   255,
     256,   257,   259,   261,   262,   265,   266,   267,   269,   270,
     272,   274,   276,   278,   279,   281,   282,   284,   285,   286,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   313,   314,   315,   317,   318,   320,   322,   324,
     325,   326,   327,   328,   329,   330,   331,   332
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_PR_INT", "TK_PR_FLOAT", "TK_PR_BOOL",
  "TK_PR_CHAR", "TK_PR_STRING", "TK_PR_IF", "TK_PR_THEN", "TK_PR_ELSE",
  "TK_PR_WHILE", "TK_PR_DO", "TK_PR_INPUT", "TK_PR_OUTPUT", "TK_PR_RETURN",
  "TK_PR_CONST", "TK_PR_STATIC", "TK_PR_FOREACH", "TK_PR_FOR",
  "TK_PR_SWITCH", "TK_PR_CASE", "TK_PR_BREAK", "TK_PR_CONTINUE",
  "TK_PR_CLASS", "TK_PR_PRIVATE", "TK_PR_PUBLIC", "TK_PR_PROTECTED",
  "TK_PR_END", "TK_PR_DEFAULT", "TK_OC_LE", "TK_OC_GE", "TK_OC_EQ",
  "TK_OC_NE", "TK_OC_AND", "TK_OC_OR", "TK_OC_SL", "TK_OC_SR",
  "TK_LIT_INT", "TK_LIT_FLOAT", "TK_LIT_FALSE", "TK_LIT_TRUE",
  "TK_LIT_CHAR", "TK_LIT_STRING", "TK_IDENTIFICADOR", "TOKEN_ERRO", "','",
  "';'", "':'", "'('", "')'", "'['", "']'", "'{'", "'}'", "'+'", "'-'",
  "'|'", "'*'", "'/'", "'<'", "'>'", "'='", "'!'", "'&'", "'%'", "'#'",
  "'$'", "'^'", "'.'", "'?'", "PREC_UNA", "$accept", "programa", "decla",
  "tipo_stat", "tipo_cons", "tipo_nome", "tipo_stat_cons", "lista_var",
  "var", "bloco_fun", "lista_par_begin", "lista_par_end", "func_header",
  "func", "lista_par", "com_bloco", "fim_bloco", "bloco", "seq_comando",
  "comando", "decla_loc", "lista_var_loc", "var_loc", "id_lit", "literal",
  "literal_num_bool", "pos_int", "all_int", "all_float", "atrib",
  "var_vet", "ret_cont_break", "in_out", "shift_right", "shift_left",
  "fun_call", "lista_arg", "fun_input", "id_lit_exp", "exp",
  "comando_controle_fluxo", "comando_if", "comando_for", "comando_while",
  "op_unitario", "exp_unitaria", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,    44,    59,    58,    40,
      41,    91,    93,   123,   125,    43,    45,   124,    42,    47,
      60,    62,    61,    33,    38,    37,    35,    36,    94,    46,
      63,   301
};
# endif

#define YYPACT_NINF -151

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-151)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -151,   210,  -151,  -151,  -151,  -151,  -151,  -151,   215,  -151,
     -39,  -151,   -34,  -151,  -151,     0,    20,  -151,    31,  -151,
    -151,   -30,     8,   -23,  -151,   -16,    14,    30,   117,   486,
     215,   288,    19,  -151,  -151,    13,  -151,  -151,  -151,    32,
      31,  -151,    10,    27,   131,    43,    44,   -19,    54,    55,
      59,    61,    63,    64,  -151,  -151,  -151,  -151,    74,    78,
     215,  -151,    87,  -151,  -151,   -40,    81,  -151,   486,   486,
    -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,   -10,    40,
    -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,   486,  -151,
    -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,
     356,   486,  -151,  -151,   215,  -151,    96,   453,   486,   111,
      97,  -151,  -151,    27,  -151,  -151,  -151,  -151,  -151,   -30,
     -30,   486,  -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,
    -151,  -151,   293,  -151,   132,   173,  -151,  -151,  -151,  -151,
     214,   486,   486,   486,   486,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   486,   486,   486,   486,  -151,  -151,
      98,   103,    90,  -151,  -151,  -151,   118,   124,   356,   255,
     117,    32,  -151,  -151,  -151,   356,   127,   121,   164,  -151,
     342,   342,   195,   195,    39,   372,    24,    24,   411,   109,
     109,   342,   342,   422,   109,   109,   296,   486,  -151,   453,
    -151,  -151,  -151,  -151,   169,   121,   486,   315,  -151,   121,
    -151,   356,    96,  -151,   130,   121,  -151
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    10,    11,    13,    12,    14,     0,     4,
       0,     7,     0,     3,     6,    22,     0,    20,     0,    29,
      25,     0,     0,     0,     5,     0,     0,     0,     0,     0,
       0,     0,     0,    76,    77,    73,    32,    33,    18,     0,
       0,    23,     0,     0,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   112,   113,   114,    65,     0,     0,
       0,    26,     0,     9,    28,     0,    22,    19,     0,     0,
      78,    67,    70,    56,    57,    58,    59,    53,     0,     0,
      79,    52,    54,    55,    60,    61,    62,    63,     0,   119,
     120,   121,   122,   123,   124,   125,   126,    90,    91,    92,
      75,     0,    94,    16,     0,    17,     0,    85,     0,    51,
      47,    49,    34,     0,    38,    24,    36,    39,    40,     0,
       0,     0,    44,    41,    42,    43,    45,    46,    64,    21,
       8,    31,     0,    27,     0,     0,    68,    71,    66,    69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   127,    15,
      73,     0,     0,    87,    88,    86,     0,    84,    89,     0,
       0,     0,    35,    81,    80,    72,     0,     0,     0,    93,
     103,   104,   105,   106,   107,   108,    95,    96,   100,    97,
      98,   109,   110,   101,    99,   102,     0,     0,    82,     0,
      74,    50,    48,    30,   115,     0,     0,     0,    83,     0,
     118,   111,     0,   116,     0,     0,   117
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -151,  -151,  -151,  -151,    49,     1,  -151,  -151,   160,  -151,
    -151,   120,  -151,  -151,  -151,  -151,   -36,  -150,   -24,  -151,
    -151,  -151,    15,    25,  -151,  -151,   -33,  -151,  -151,  -103,
     -18,  -151,  -151,  -151,  -151,    12,    -1,  -151,  -151,   -28,
    -151,  -151,  -151,  -151,  -151,  -151
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     9,    10,    62,    38,    39,    16,    17,    19,
      22,    64,    12,    13,    65,    40,    41,    42,    43,    44,
      45,   110,   111,    80,    81,    97,    59,    82,    83,    46,
      98,    48,    49,    50,    51,    99,   165,   166,   167,   168,
      53,    54,    55,    56,   101,   102
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      47,   100,    11,   161,   112,    15,   132,   115,    57,    14,
      61,     3,     4,     5,     6,     7,   113,   119,   120,    18,
     116,    66,    47,    63,    60,    58,    47,   204,   136,   137,
      52,   103,   105,    68,     3,     4,     5,     6,     7,    25,
     134,   135,    26,   121,    27,    28,    29,    30,    31,    20,
      32,    21,    52,    33,    34,   210,    52,   114,    61,   213,
     140,   130,   107,    69,   108,   216,    23,    24,   106,   141,
     142,   143,   144,   158,    70,    35,   109,   172,   138,   139,
     169,    37,   150,   151,    36,    37,   173,   174,   162,   155,
     117,   118,   156,   175,   147,   148,   149,   150,   151,   152,
     153,   122,   123,   154,   155,   159,   124,   156,   125,   214,
     126,   127,   128,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     129,   131,    21,    63,     3,     4,     5,     6,     7,    25,
     160,   170,    26,   171,    27,    28,    29,    30,    31,   108,
      32,   197,   121,    33,    34,    71,    72,    73,    74,    75,
      76,    77,   141,   142,   143,   144,   145,   146,   198,   207,
     199,   203,    78,    79,    36,    35,   205,   156,   211,   209,
     215,   176,   177,    67,    36,   133,   202,   147,   148,   149,
     150,   151,   152,   153,   162,   201,   154,   155,   208,     0,
     156,     0,   157,   141,   142,   143,   144,   145,   146,     0,
       2,     0,     0,     3,     4,     5,     6,     7,     3,     4,
       5,     6,     7,   178,     0,   141,   142,     8,   147,   148,
     149,   150,   151,   152,   153,     0,     0,   154,   155,     0,
       0,   156,     0,   157,   141,   142,   143,   144,   145,   146,
     147,   148,     0,   150,   151,   152,   153,     0,     0,     0,
     155,     0,     0,   156,   179,     0,     0,     0,     0,   147,
     148,   149,   150,   151,   152,   153,     0,     0,   154,   155,
       0,     0,   156,     0,   157,   141,   142,   143,   144,   145,
     146,     3,     4,     5,     6,     7,     3,     4,     5,     6,
       7,     0,     0,     0,   104,     0,     0,   200,     0,    60,
     147,   148,   149,   150,   151,   152,   153,     0,     0,   154,
     155,     0,     0,   156,     0,   157,   141,   142,   143,   144,
     145,   146,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   206,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,     0,     0,
     154,   155,     0,   212,   156,     0,   157,     0,     0,     0,
     147,   148,   149,   150,   151,   152,   153,     0,     0,   154,
     155,     0,     0,   156,     0,   157,   141,   142,   143,   144,
     145,   146,     0,     0,     0,     0,     0,   147,   148,     0,
     150,   151,   141,   142,   143,   144,   145,   155,     0,     0,
     156,   147,   148,   149,   150,   151,   152,   153,     0,     0,
     154,   155,     0,     0,   156,     0,   157,   147,   148,   149,
     150,   151,   152,   153,     0,     0,   154,   155,     0,     0,
     156,   141,   142,   143,   144,     0,     0,     0,     0,     0,
       0,     0,   141,   142,   143,   144,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   147,   148,     0,   150,
     151,   152,   153,     0,     0,   154,   155,   147,   148,   156,
     150,   151,   152,   153,     0,     0,     0,   155,     0,     0,
     156,    84,    85,    86,    87,   163,   164,    35,     0,     0,
       0,     0,    88,     0,     0,     0,     0,     0,    89,    90,
      91,    92,     0,     0,     0,     0,    93,    94,     0,    95,
       0,     0,     0,    96,    84,    85,    86,    87,     0,     0,
      35,     0,     0,     0,     0,    88,     0,     0,     0,     0,
       0,    89,    90,    91,    92,     0,     0,     0,     0,    93,
      94,     0,    95,     0,     0,     0,    96
};

static const yytype_int16 yycheck[] =
{
      18,    29,     1,   106,    40,    44,    46,    43,    38,     8,
      50,     3,     4,     5,     6,     7,    40,    36,    37,    53,
      44,    44,    40,    22,    16,    55,    44,   177,    38,    39,
      18,    30,    31,    49,     3,     4,     5,     6,     7,     8,
      68,    69,    11,    62,    13,    14,    15,    16,    17,    49,
      19,    51,    40,    22,    23,   205,    44,    47,    50,   209,
      88,    60,    49,    49,    51,   215,    46,    47,    49,    30,
      31,    32,    33,   101,    44,    44,    44,   113,    38,    39,
     108,    54,    58,    59,    53,    54,   119,   120,   106,    65,
      47,    47,    68,   121,    55,    56,    57,    58,    59,    60,
      61,    47,    47,    64,    65,   104,    47,    68,    47,   212,
      47,    47,    38,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
      52,    44,    51,   132,     3,     4,     5,     6,     7,     8,
      44,    30,    11,    46,    13,    14,    15,    16,    17,    51,
      19,    48,    62,    22,    23,    38,    39,    40,    41,    42,
      43,    44,    30,    31,    32,    33,    34,    35,    50,   197,
      46,    44,    55,    56,    53,    44,    12,    68,   206,    10,
      50,   132,    50,    23,    53,    65,   171,    55,    56,    57,
      58,    59,    60,    61,   212,   170,    64,    65,   199,    -1,
      68,    -1,    70,    30,    31,    32,    33,    34,    35,    -1,
       0,    -1,    -1,     3,     4,     5,     6,     7,     3,     4,
       5,     6,     7,    50,    -1,    30,    31,    17,    55,    56,
      57,    58,    59,    60,    61,    -1,    -1,    64,    65,    -1,
      -1,    68,    -1,    70,    30,    31,    32,    33,    34,    35,
      55,    56,    -1,    58,    59,    60,    61,    -1,    -1,    -1,
      65,    -1,    -1,    68,    50,    -1,    -1,    -1,    -1,    55,
      56,    57,    58,    59,    60,    61,    -1,    -1,    64,    65,
      -1,    -1,    68,    -1,    70,    30,    31,    32,    33,    34,
      35,     3,     4,     5,     6,     7,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    16,    -1,    -1,    52,    -1,    16,
      55,    56,    57,    58,    59,    60,    61,    -1,    -1,    64,
      65,    -1,    -1,    68,    -1,    70,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    30,    31,    32,    33,    34,
      35,    55,    56,    57,    58,    59,    60,    61,    -1,    -1,
      64,    65,    -1,    48,    68,    -1,    70,    -1,    -1,    -1,
      55,    56,    57,    58,    59,    60,    61,    -1,    -1,    64,
      65,    -1,    -1,    68,    -1,    70,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,
      58,    59,    30,    31,    32,    33,    34,    65,    -1,    -1,
      68,    55,    56,    57,    58,    59,    60,    61,    -1,    -1,
      64,    65,    -1,    -1,    68,    -1,    70,    55,    56,    57,
      58,    59,    60,    61,    -1,    -1,    64,    65,    -1,    -1,
      68,    30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    58,
      59,    60,    61,    -1,    -1,    64,    65,    55,    56,    68,
      58,    59,    60,    61,    -1,    -1,    -1,    65,    -1,    -1,
      68,    38,    39,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    58,    -1,    -1,    -1,    -1,    63,    64,    -1,    66,
      -1,    -1,    -1,    70,    38,    39,    40,    41,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    58,    -1,    -1,    -1,    -1,    63,
      64,    -1,    66,    -1,    -1,    -1,    70
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    73,     0,     3,     4,     5,     6,     7,    17,    74,
      75,    77,    84,    85,    77,    44,    79,    80,    53,    81,
      49,    51,    82,    46,    47,     8,    11,    13,    14,    15,
      16,    17,    19,    22,    23,    44,    53,    54,    77,    78,
      87,    88,    89,    90,    91,    92,   101,   102,   103,   104,
     105,   106,   107,   112,   113,   114,   115,    38,    55,    98,
      16,    50,    76,    77,    83,    86,    44,    80,    49,    49,
      44,    38,    39,    40,    41,    42,    43,    44,    55,    56,
      95,    96,    99,   100,    38,    39,    40,    41,    49,    55,
      56,    57,    58,    63,    64,    66,    70,    97,   102,   107,
     111,   116,   117,    77,    16,    77,    49,    49,    51,    44,
      93,    94,    88,    90,    47,    88,    90,    47,    47,    36,
      37,    62,    47,    47,    47,    47,    47,    47,    38,    52,
      77,    44,    46,    83,   111,   111,    38,    39,    38,    39,
     111,    30,    31,    32,    33,    34,    35,    55,    56,    57,
      58,    59,    60,    61,    64,    65,    68,    70,   111,    77,
      44,   101,   102,    42,    43,   108,   109,   110,   111,   111,
      30,    46,    88,    98,    98,   111,    76,    50,    50,    50,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,    48,    50,    46,
      52,    95,    94,    44,    89,    12,    48,   111,   108,    10,
      89,   111,    48,    89,   101,    50,    89
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    72,    73,    73,    73,    74,    75,    75,    76,    76,
      77,    77,    77,    77,    77,    78,    78,    78,    78,    79,
      79,    80,    80,    81,    81,    82,    83,    84,    84,    85,
      86,    86,    87,    88,    89,    89,    90,    90,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    92,    93,    93,
      94,    94,    95,    95,    96,    96,    96,    96,    96,    96,
      97,    97,    97,    97,    98,    98,    99,    99,    99,   100,
     100,   100,   101,   102,   102,   103,   103,   103,   104,   104,
     105,   106,   107,   108,   108,   109,   109,   110,   110,   110,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   112,   112,   112,   113,   113,   114,   115,   116,
     116,   116,   116,   116,   116,   116,   116,   117
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     3,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     3,     2,     2,     1,     3,
       1,     4,     1,     2,     3,     1,     1,     5,     4,     2,
       4,     2,     1,     1,     2,     3,     2,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     1,     2,     2,
       1,     2,     3,     1,     4,     2,     1,     1,     2,     2,
       3,     3,     4,     3,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     5,     1,     1,     1,     5,     7,     9,     6,     1,
       1,     1,     1,     1,     1,     1,     1,     2
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
        case 2:
#line 163 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = NULL; arvore = (yyval.nodo);}
#line 1517 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 164 "parser.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].nodo) == NULL){ (yyval.nodo) = (yyvsp[0].nodo); arvore = (yyvsp[0].nodo);} else{ insere_filho((yyvsp[-1].nodo),(yyvsp[0].nodo)); (yyval.nodo)=(yyvsp[0].nodo); } }
#line 1523 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 165 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-1].nodo);}
#line 1529 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 167 "parser.y" /* yacc.c:1646  */
    { libera_val((yyvsp[0].valor_lexico));tabelas.atualizaTipoTamanho((yyvsp[-2].tipo));}
#line 1535 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 171 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = (yyvsp[0].tipo);}
#line 1541 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 172 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = (yyvsp[0].tipo);}
#line 1547 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 173 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) =(yyvsp[0].tipo);}
#line 1553 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 174 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) =(yyvsp[0].tipo);}
#line 1559 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 176 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = ID_INT;}
#line 1565 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 177 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = ID_FLOAT;}
#line 1571 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 178 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = ID_CHAR;}
#line 1577 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 179 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = ID_BOOL;}
#line 1583 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 180 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = ID_STRING;}
#line 1589 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 182 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = (yyvsp[0].tipo);}
#line 1595 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 183 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = (yyvsp[0].tipo);}
#line 1601 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 184 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = (yyvsp[0].tipo);}
#line 1607 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 185 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = (yyvsp[0].tipo);}
#line 1613 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 189 "parser.y" /* yacc.c:1646  */
    {tabelas.insereSimboloVet(get_line_number(),NAT_VET,(yyvsp[-3].valor_lexico),INDEF,(yyvsp[-1].nodo)->valor_lexico->tk_value.vInt,ESC_GLOBAL);libera_val((yyvsp[-3].valor_lexico)); libera_val((yyvsp[-2].valor_lexico)); libera((yyvsp[-1].nodo));libera_val((yyvsp[0].valor_lexico));}
#line 1619 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 190 "parser.y" /* yacc.c:1646  */
    {tabelas.insereSimboloNonVet(get_line_number(),NAT_VAR,(yyvsp[0].valor_lexico),INDEF,ESC_GLOBAL);libera_val((yyvsp[0].valor_lexico));}
#line 1625 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 192 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) =NULL; }
#line 1631 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 193 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[-1].nodo);}
#line 1637 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 195 "parser.y" /* yacc.c:1646  */
    {tabelas.insereContexto(); libera_val((yyvsp[0].valor_lexico));}
#line 1643 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 196 "parser.y" /* yacc.c:1646  */
    {libera_val((yyvsp[0].valor_lexico));}
#line 1649 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 198 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[-3].valor_lexico));(yyval.nodo)->reg = geraRotulo(&ultimoRotulo);tabelas.insereFun(get_line_number(),(yyvsp[-3].valor_lexico),ultimoRotulo);tabelas.atualizaFunTipoPar((yyvsp[-3].valor_lexico),(yyvsp[-4].tipo)); atualiza_tipo_semantico((yyval.nodo),(yyvsp[-4].tipo));}
#line 1655 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 199 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[-2].valor_lexico));(yyval.nodo)->reg = geraRotulo(&ultimoRotulo);tabelas.insereFun(get_line_number(),(yyvsp[-2].valor_lexico),ultimoRotulo);tabelas.atualizaFunTipoPar((yyvsp[-2].valor_lexico),(yyvsp[-3].tipo)); atualiza_tipo_semantico((yyval.nodo),(yyvsp[-3].tipo));}
#line 1661 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 200 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_filho( (yyvsp[-1].nodo),(yyvsp[0].nodo)); }
#line 1667 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 203 "parser.y" /* yacc.c:1646  */
    {tabelas.insereSimboloNonVet(get_line_number(),NAT_VAR,(yyvsp[0].valor_lexico),(yyvsp[-1].tipo));tabelas.empilhaParametro((yyvsp[0].valor_lexico));libera_val((yyvsp[-2].valor_lexico)); libera_val((yyvsp[0].valor_lexico)); }
#line 1673 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 204 "parser.y" /* yacc.c:1646  */
    {tabelas.insereSimboloNonVet(get_line_number(),NAT_VAR,(yyvsp[0].valor_lexico),(yyvsp[-1].tipo)); tabelas.empilhaParametro((yyvsp[0].valor_lexico));libera_val((yyvsp[0].valor_lexico));}
#line 1679 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 206 "parser.y" /* yacc.c:1646  */
    {tabelas.insereContexto();libera_val((yyvsp[0].valor_lexico));}
#line 1685 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 207 "parser.y" /* yacc.c:1646  */
    {libera_val((yyvsp[0].valor_lexico)); tabelas.popContexto();}
#line 1691 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 208 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) =NULL; }
#line 1697 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 209 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[-1].nodo);}
#line 1703 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 212 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[-1].nodo); (yyval.nodo) = insere_filho((yyval.nodo),(yyvsp[0].nodo)); }
#line 1709 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 213 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); }
#line 1715 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 215 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = NULL; libera_val((yyvsp[0].valor_lexico));}
#line 1721 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 216 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-1].nodo); libera_val((yyvsp[0].valor_lexico));}
#line 1727 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 217 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-1].nodo); libera_val((yyvsp[0].valor_lexico));}
#line 1733 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 218 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-1].nodo); libera_val((yyvsp[0].valor_lexico));}
#line 1739 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 219 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-1].nodo); libera_val((yyvsp[0].valor_lexico));}
#line 1745 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 220 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-1].nodo); libera_val((yyvsp[0].valor_lexico));}
#line 1751 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 221 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-1].nodo); libera_val((yyvsp[0].valor_lexico));}
#line 1757 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 222 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-1].nodo); libera_val((yyvsp[0].valor_lexico));}
#line 1763 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 223 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-1].nodo); libera_val((yyvsp[0].valor_lexico));}
#line 1769 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 225 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo);tabelas.atualizaTipoTamanho((yyvsp[-1].tipo));tabelas.fazInic();}
#line 1775 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 227 "parser.y" /* yacc.c:1646  */
    {libera_val((yyvsp[-1].valor_lexico)); (yyval.nodo) = insere_filho((yyvsp[-2].nodo),(yyvsp[0].nodo));}
#line 1781 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 228 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); }
#line 1787 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 230 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); (yyval.nodo)= insere_filho((yyval.nodo),insere_nodo(NULL,(yyvsp[-2].valor_lexico)));(yyval.nodo)= insere_filho((yyval.nodo),(yyvsp[0].nodo));tabelas.insereSimboloNonVet(get_line_number(),NAT_VAR,(yyvsp[-2].valor_lexico),INDEF);tabelas.insereInicPendente((yyvsp[-2].valor_lexico),(yyvsp[0].nodo)->valor_lexico);}
#line 1793 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 231 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = NULL;tabelas.insereSimboloNonVet(get_line_number(),NAT_VAR,(yyvsp[0].valor_lexico),INDEF); libera_val((yyvsp[0].valor_lexico));}
#line 1799 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 233 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);}
#line 1805 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 234 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));atualiza_tipo_semantico((yyval.nodo),tabelas.getTipoPorValorLex((yyvsp[0].valor_lexico)));}
#line 1811 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 236 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);atualiza_tipo_semantico((yyval.nodo),ID_INT);}
#line 1817 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 237 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);atualiza_tipo_semantico((yyval.nodo),ID_FLOAT);}
#line 1823 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 238 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));atualiza_tipo_semantico((yyval.nodo),ID_BOOL);tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,(yyvsp[0].valor_lexico),ID_BOOL);}
#line 1829 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 239 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));atualiza_tipo_semantico((yyval.nodo),ID_BOOL);tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,(yyvsp[0].valor_lexico),ID_BOOL);}
#line 1835 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 240 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));atualiza_tipo_semantico((yyval.nodo),ID_CHAR);tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,(yyvsp[0].valor_lexico),ID_CHAR);}
#line 1841 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 241 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));atualiza_tipo_semantico((yyval.nodo),ID_STRING);tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,(yyvsp[0].valor_lexico),ID_STRING);}
#line 1847 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 243 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,(yyvsp[0].valor_lexico),ID_INT);atualiza_tipo_semantico((yyval.nodo),ID_INT);(yyval.nodo)->reg =geraRegistrador(&ultimoReg);(yyval.nodo)->cod.appendInstCodigo(geraInst2op("LoadI",to_string((yyval.nodo)->valor_lexico->tk_value.vInt),(yyval.nodo)->reg,INST_LOADI,&instId));}
#line 1853 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 244 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,(yyvsp[0].valor_lexico),ID_FLOAT);atualiza_tipo_semantico((yyval.nodo),ID_FLOAT);}
#line 1859 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 245 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,(yyvsp[0].valor_lexico),ID_BOOL);atualiza_tipo_semantico((yyval.nodo),ID_BOOL);}
#line 1865 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 246 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,(yyvsp[0].valor_lexico),ID_BOOL);atualiza_tipo_semantico((yyval.nodo),ID_BOOL);}
#line 1871 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 248 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico)); libera_val((yyvsp[-1].valor_lexico));tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,(yyvsp[0].valor_lexico),ID_INT);atualiza_tipo_semantico((yyval.nodo),ID_INT);}
#line 1877 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 249 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,(yyvsp[0].valor_lexico),ID_INT);atualiza_tipo_semantico((yyval.nodo),ID_INT);}
#line 1883 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 251 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,inverte_sinal((yyvsp[0].valor_lexico))); libera_val((yyvsp[-1].valor_lexico));tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,inverte_sinal((yyvsp[0].valor_lexico)),ID_INT);atualiza_tipo_semantico((yyval.nodo),ID_INT);}
#line 1889 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 252 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,(yyvsp[0].valor_lexico),ID_INT);atualiza_tipo_semantico((yyval.nodo),ID_INT);}
#line 1895 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 253 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico)); libera_val((yyvsp[-1].valor_lexico));tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,(yyvsp[0].valor_lexico),ID_INT);atualiza_tipo_semantico((yyval.nodo),ID_INT);}
#line 1901 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 255 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,inverte_sinal((yyvsp[0].valor_lexico)));libera_val((yyvsp[-1].valor_lexico));tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,inverte_sinal((yyvsp[0].valor_lexico)),ID_FLOAT);atualiza_tipo_semantico((yyval.nodo),ID_FLOAT);}
#line 1907 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 256 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,(yyvsp[0].valor_lexico),ID_FLOAT);atualiza_tipo_semantico((yyval.nodo),ID_FLOAT);}
#line 1913 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 257 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico)); libera_val((yyvsp[-1].valor_lexico));tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,(yyvsp[0].valor_lexico),ID_FLOAT);atualiza_tipo_semantico((yyval.nodo),ID_FLOAT);}
#line 1919 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 259 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));tabelas.verificaAtrib((yyvsp[-2].nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),(yyvsp[-2].nodo)->tipo_valor_semantico);DadoTabelaSimbolos dado = tabelas.getSimboloPorValorLex((yyvsp[-2].nodo)->valor_lexico); (yyval.nodo)->cod.appendCodigoInicio(geraInstAtribTipoDesloc(dado.deslocamento, dado.escopo ,(yyvsp[0].nodo)->tipo_valor_semantico,(yyvsp[0].nodo)->reg ,&((yyvsp[0].nodo)->cod),(yyvsp[0].nodo)->idRemendosTrue,(yyvsp[0].nodo)->idRemendosFalse,&ultimoReg,&ultimoRotulo,&instId));printf("\n\nATRIB:\n");(yyval.nodo)->cod.exportaCod();}
#line 1925 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 261 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo)= insere_nodo(NULL,(yyvsp[0].valor_lexico));atualiza_tipo_semantico((yyval.nodo),tabelas.getTipoPorValorLex((yyvsp[0].valor_lexico)));tabelas.verificaVar((yyvsp[0].valor_lexico));}
#line 1931 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 262 "parser.y" /* yacc.c:1646  */
    { libera_val((yyvsp[-2].valor_lexico));libera_val((yyvsp[0].valor_lexico));
(yyval.nodo) = insere_nodo(NULL,geraVal(TIPO_VET,NOT_LIT,get_line_number(),(char*)"[]")); insere_filho((yyval.nodo),insere_nodo(NULL,(yyvsp[-3].valor_lexico))); insere_filho((yyval.nodo),(yyvsp[-1].nodo));atualiza_tipo_semantico((yyval.nodo),tabelas.getTipoPorValorLex((yyvsp[-3].valor_lexico)));tabelas.verificaVetor((yyvsp[-3].valor_lexico),(yyvsp[-1].nodo));}
#line 1938 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 265 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo((yyvsp[0].nodo),geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"return"));tabelas.verificaReturn((yyvsp[0].nodo)->tipo_valor_semantico,get_line_number());}
#line 1944 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 266 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"break"));}
#line 1950 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 267 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"continue"));}
#line 1956 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 269 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(insere_nodo(NULL,(yyvsp[0].valor_lexico)),geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"input"));tabelas.avaliaInput((yyvsp[0].valor_lexico));}
#line 1962 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 270 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo((yyvsp[0].nodo),geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"output")); tabelas.avaliaOutput((yyvsp[0].nodo)->valor_lexico);}
#line 1968 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 272 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo((yyvsp[-2].nodo),(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[0].nodo));tabelas.avaliaShift((yyvsp[0].nodo)->valor_lexico); }
#line 1974 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 274 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo((yyvsp[-2].nodo),(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[0].nodo)); tabelas.avaliaShift((yyvsp[0].nodo)->valor_lexico);}
#line 1980 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 276 "parser.y" /* yacc.c:1646  */
    { libera_val((yyvsp[-2].valor_lexico)); libera_val((yyvsp[0].valor_lexico)); (yyval.nodo) = insere_nodo_tipo((yyvsp[-1].nodo),(yyvsp[-3].valor_lexico),NO_FUN_CALL);int tipo = tabelas.verificaFuncao((yyvsp[-3].valor_lexico),(yyvsp[-1].nodo),get_line_number()); atualiza_tipo_semantico((yyval.nodo),tipo);}
#line 1986 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 278 "parser.y" /* yacc.c:1646  */
    { libera_val((yyvsp[-1].valor_lexico)); (yyval.nodo) = insere_filho((yyvsp[-2].nodo),(yyvsp[0].nodo)); (yyvsp[-2].nodo)->is_arg = true; }
#line 1992 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 279 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo); (yyval.nodo)->is_arg =true;}
#line 1998 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 281 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo)=NULL;}
#line 2004 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 282 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo)=(yyvsp[0].nodo);}
#line 2010 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 284 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));atualiza_tipo_semantico((yyval.nodo),ID_CHAR);tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,(yyvsp[0].valor_lexico),ID_CHAR);}
#line 2016 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 285 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));atualiza_tipo_semantico((yyval.nodo),ID_STRING);tabelas.insereSimboloNonVet(get_line_number(),NAT_VAR,(yyvsp[0].valor_lexico),ID_STRING);}
#line 2022 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 286 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo);}
#line 2028 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 290 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2034 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 291 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2040 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 292 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2046 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 293 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-1].nodo); libera_val((yyvsp[-2].valor_lexico)); libera_val((yyvsp[0].valor_lexico));}
#line 2052 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 294 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2058 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 295 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),tabelas.infereTipo((yyvsp[-2].nodo),(yyvsp[0].nodo)));(yyval.nodo)->reg =geraRegistrador(&ultimoReg);(yyval.nodo)->cod.appendInstCodigo(geraInst3op("add",(yyvsp[-2].nodo)->reg,(yyvsp[0].nodo)->reg,(yyval.nodo)->reg,INST_ARITLOG,&instId));(yyval.nodo)->cod.appendCodigoInicio((yyvsp[0].nodo)->cod.getCodigo());(yyval.nodo)->cod.appendCodigoInicio((yyvsp[-2].nodo)->cod.getCodigo());}
#line 2064 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 296 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),tabelas.infereTipo((yyvsp[-2].nodo),(yyvsp[0].nodo)));(yyval.nodo)->reg =geraRegistrador(&ultimoReg);(yyval.nodo)->cod.appendInstCodigo(geraInst3op("sub",(yyvsp[-2].nodo)->reg,(yyvsp[0].nodo)->reg,(yyval.nodo)->reg,INST_ARITLOG,&instId));(yyval.nodo)->cod.appendCodigoInicio((yyvsp[0].nodo)->cod.getCodigo());(yyval.nodo)->cod.appendCodigoInicio((yyvsp[-2].nodo)->cod.getCodigo());}
#line 2070 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 297 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),tabelas.infereTipo((yyvsp[-2].nodo),(yyvsp[0].nodo)));(yyval.nodo)->reg =geraRegistrador(&ultimoReg);(yyval.nodo)->cod.appendInstCodigo(geraInst3op("mult",(yyvsp[-2].nodo)->reg,(yyvsp[0].nodo)->reg,(yyval.nodo)->reg,INST_ARITLOG,&instId));(yyval.nodo)->cod.appendCodigoInicio((yyvsp[0].nodo)->cod.getCodigo());(yyval.nodo)->cod.appendCodigoInicio((yyvsp[-2].nodo)->cod.getCodigo());}
#line 2076 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 298 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),tabelas.infereTipo((yyvsp[-2].nodo),(yyvsp[0].nodo)));(yyval.nodo)->reg =geraRegistrador(&ultimoReg);(yyval.nodo)->cod.appendInstCodigo(geraInst3op("div",(yyvsp[-2].nodo)->reg,(yyvsp[0].nodo)->reg,(yyval.nodo)->reg,INST_ARITLOG,&instId));(yyval.nodo)->cod.appendCodigoInicio((yyvsp[0].nodo)->cod.getCodigo());(yyval.nodo)->cod.appendCodigoInicio((yyvsp[-2].nodo)->cod.getCodigo());}
#line 2082 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 299 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),tabelas.infereTipo((yyvsp[-2].nodo),(yyvsp[0].nodo)));}
#line 2088 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 300 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),tabelas.infereTipo((yyvsp[-2].nodo),(yyvsp[0].nodo)));}
#line 2094 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 301 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),tabelas.infereTipo((yyvsp[-2].nodo),(yyvsp[0].nodo)));}
#line 2100 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 302 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),tabelas.infereTipo((yyvsp[-2].nodo),(yyvsp[0].nodo)));}
#line 2106 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 303 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),ID_BOOL);(yyval.nodo)->reg = geraRegistrador(&ultimoReg);Instrucao inst =geraInst3op("cbr","x","y",(yyval.nodo)->reg,INST_CBR,&instId);(yyval.nodo)->idRemendosTrue.push_front(inst.id);(yyval.nodo)->idRemendosFalse.push_front(inst.id);(yyval.nodo)->cod.appendInstCodigo(inst);(yyval.nodo)->cod.appendInstCodigo(geraInst3op("cmp_LE",(yyvsp[-2].nodo)->reg,(yyvsp[0].nodo)->reg,(yyval.nodo)->reg,INST_REL,&instId));(yyval.nodo)->cod.appendCodigoInicio((yyvsp[0].nodo)->cod.getCodigo());(yyval.nodo)->cod.appendCodigoInicio((yyvsp[-2].nodo)->cod.getCodigo());}
#line 2112 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 304 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),ID_BOOL);(yyval.nodo)->reg = geraRegistrador(&ultimoReg);Instrucao inst =geraInst3op("cbr","x","y",(yyval.nodo)->reg,INST_CBR,&instId);(yyval.nodo)->idRemendosTrue.push_front(inst.id);(yyval.nodo)->idRemendosFalse.push_front(inst.id);(yyval.nodo)->cod.appendInstCodigo(inst);(yyval.nodo)->cod.appendInstCodigo(geraInst3op("cmp_GE",(yyvsp[-2].nodo)->reg,(yyvsp[0].nodo)->reg,(yyval.nodo)->reg,INST_REL,&instId));(yyval.nodo)->cod.appendCodigoInicio((yyvsp[0].nodo)->cod.getCodigo());(yyval.nodo)->cod.appendCodigoInicio((yyvsp[-2].nodo)->cod.getCodigo());}
#line 2118 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 305 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),ID_BOOL);(yyval.nodo)->reg = geraRegistrador(&ultimoReg);Instrucao inst =geraInst3op("cbr","x","y",(yyval.nodo)->reg,INST_CBR,&instId);(yyval.nodo)->idRemendosTrue.push_front(inst.id);(yyval.nodo)->idRemendosFalse.push_front(inst.id);(yyval.nodo)->cod.appendInstCodigo(inst);(yyval.nodo)->cod.appendInstCodigo(geraInst3op("cmp_EQ",(yyvsp[-2].nodo)->reg,(yyvsp[0].nodo)->reg,(yyval.nodo)->reg,INST_REL,&instId));(yyval.nodo)->cod.appendCodigoInicio((yyvsp[0].nodo)->cod.getCodigo());(yyval.nodo)->cod.appendCodigoInicio((yyvsp[-2].nodo)->cod.getCodigo());}
#line 2124 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 306 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),ID_BOOL);(yyval.nodo)->reg = geraRegistrador(&ultimoReg);Instrucao inst =geraInst3op("cbr","x","y",(yyval.nodo)->reg,INST_CBR,&instId);(yyval.nodo)->idRemendosTrue.push_front(inst.id);(yyval.nodo)->idRemendosFalse.push_front(inst.id);(yyval.nodo)->cod.appendInstCodigo(inst);(yyval.nodo)->cod.appendInstCodigo(geraInst3op("cmp_NE",(yyvsp[-2].nodo)->reg,(yyvsp[0].nodo)->reg,(yyval.nodo)->reg,INST_REL,&instId));(yyval.nodo)->cod.appendCodigoInicio((yyvsp[0].nodo)->cod.getCodigo());(yyval.nodo)->cod.appendCodigoInicio((yyvsp[-2].nodo)->cod.getCodigo());}
#line 2130 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 307 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),ID_BOOL);string rotTrue = geraRotulo(&ultimoRotulo); Instrucao nopInst = geraInst2op(rotTrue,"","",INST_NOP_ROT,&instId); (yyval.nodo)->cod.appendCodigoInicio((yyvsp[0].nodo)->cod.getCodigo());(yyval.nodo)->cod.appendInstCodigo(nopInst);(yyvsp[-2].nodo)->cod.remendaTrue((yyvsp[-2].nodo)->idRemendosTrue,rotTrue);(yyvsp[-2].nodo)->idRemendosTrue.clear();(yyval.nodo)->cod.appendCodigoInicio((yyvsp[-2].nodo)->cod.getCodigo());appendListaTrue((yyval.nodo),(yyvsp[0].nodo)->idRemendosTrue);appendListaFalse((yyval.nodo),(yyvsp[0].nodo)->idRemendosFalse); appendListaFalse((yyval.nodo),(yyvsp[-2].nodo)->idRemendosFalse);printf("\n\nAND:\n");(yyval.nodo)->cod.exportaCod(); }
#line 2136 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 308 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),ID_BOOL);string rotFalse = geraRotulo(&ultimoRotulo); Instrucao nopInst = geraInst2op(rotFalse,"","",INST_NOP_ROT,&instId); (yyval.nodo)->cod.appendCodigoInicio((yyvsp[0].nodo)->cod.getCodigo());(yyval.nodo)->cod.appendInstCodigo(nopInst);(yyvsp[-2].nodo)->cod.remendaFalse((yyvsp[-2].nodo)->idRemendosFalse,rotFalse);(yyvsp[-2].nodo)->idRemendosFalse.clear();(yyval.nodo)->cod.appendCodigoInicio((yyvsp[-2].nodo)->cod.getCodigo());appendListaTrue((yyval.nodo),(yyvsp[0].nodo)->idRemendosTrue);appendListaFalse((yyval.nodo),(yyvsp[0].nodo)->idRemendosFalse); appendListaTrue((yyval.nodo),(yyvsp[-2].nodo)->idRemendosTrue);printf("\n\nOR:\n");(yyval.nodo)->cod.exportaCod();}
#line 2142 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 309 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),ID_BOOL);(yyval.nodo)->reg = geraRegistrador(&ultimoReg);Instrucao inst =geraInst3op("cbr","x","y",(yyval.nodo)->reg,INST_CBR,&instId);(yyval.nodo)->idRemendosTrue.push_front(inst.id);(yyval.nodo)->idRemendosFalse.push_front(inst.id);(yyval.nodo)->cod.appendInstCodigo(inst);(yyval.nodo)->cod.appendInstCodigo(geraInst3op("cmp_LT",(yyvsp[-2].nodo)->reg,(yyvsp[0].nodo)->reg,(yyval.nodo)->reg,INST_REL,&instId));(yyval.nodo)->cod.appendCodigoInicio((yyvsp[0].nodo)->cod.getCodigo());(yyval.nodo)->cod.appendCodigoInicio((yyvsp[-2].nodo)->cod.getCodigo());}
#line 2148 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 310 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),ID_BOOL);(yyval.nodo)->reg = geraRegistrador(&ultimoReg);Instrucao inst =geraInst3op("cbr","x","y",(yyval.nodo)->reg,INST_CBR,&instId);(yyval.nodo)->idRemendosTrue.push_front(inst.id);(yyval.nodo)->idRemendosFalse.push_front(inst.id);(yyval.nodo)->cod.appendInstCodigo(inst);(yyval.nodo)->cod.appendInstCodigo(geraInst3op("cmp_GT",(yyvsp[-2].nodo)->reg,(yyvsp[0].nodo)->reg,(yyval.nodo)->reg,INST_REL,&instId));(yyval.nodo)->cod.appendCodigoInicio((yyvsp[0].nodo)->cod.getCodigo());(yyval.nodo)->cod.appendCodigoInicio((yyvsp[-2].nodo)->cod.getCodigo());}
#line 2154 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 311 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,geraVal(TIPO_CHAR_ESP,NOT_LIT,get_line_number(),(char*)"?:")); insere_filho((yyval.nodo),(yyvsp[-4].nodo)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));libera_val((yyvsp[-3].valor_lexico));libera_val((yyvsp[-1].valor_lexico));atualiza_tipo_semantico((yyval.nodo),tabelas.infereTipoTern((yyvsp[-4].nodo),(yyvsp[-2].nodo),(yyvsp[0].nodo)));}
#line 2160 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 313 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2166 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 314 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2172 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 315 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2178 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 317 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo_tipo(NULL,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"if"),NO_IF); (yyval.nodo)= insere_filho((yyval.nodo),(yyvsp[-2].nodo)); (yyval.nodo)= insere_filho((yyval.nodo),(yyvsp[0].nodo)); libera_val((yyvsp[-3].valor_lexico)); libera_val((yyvsp[-1].valor_lexico));}
#line 2184 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 318 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo_tipo(NULL,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"if"),NO_IF); (yyval.nodo) = insere_filho((yyval.nodo),(yyvsp[-4].nodo)); (yyval.nodo) = insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo)); libera_val((yyvsp[-5].valor_lexico)); libera_val((yyvsp[-3].valor_lexico));}
#line 2190 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 320 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo_tipo(NULL,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"for"),NO_FOR); (yyval.nodo) = insere_filho((yyval.nodo),(yyvsp[-6].nodo)); (yyval.nodo) = insere_filho((yyval.nodo),(yyvsp[-4].nodo)); (yyval.nodo) = insere_filho((yyval.nodo),(yyvsp[-2].nodo)); (yyval.nodo) = insere_filho((yyval.nodo),(yyvsp[0].nodo)); libera_val((yyvsp[-3].valor_lexico)); libera_val((yyvsp[-5].valor_lexico)); libera_val ((yyvsp[-7].valor_lexico));libera_val((yyvsp[-1].valor_lexico));}
#line 2196 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 322 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) =  insere_nodo_tipo(NULL,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"while"),NO_WHILE); (yyval.nodo) = insere_filho((yyval.nodo),(yyvsp[-3].nodo)); (yyval.nodo) = insere_filho((yyval.nodo),(yyvsp[0].nodo)); libera_val((yyvsp[-4].valor_lexico)); libera_val((yyvsp[-2].valor_lexico));}
#line 2202 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 324 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 2208 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 325 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 2214 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 326 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 2220 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 327 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 2226 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 328 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 2232 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 329 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 2238 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 330 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 2244 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 331 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 2250 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 332 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[-1].nodo); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),(yyvsp[0].nodo)->tipo_valor_semantico);}
#line 2256 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2260 "parser.tab.c" /* yacc.c:1646  */
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
#line 333 "parser.y" /* yacc.c:1906  */


int yyerror(char const *s){
	printf("%s at line %d UNEXPECTED token \"%s\" \n", s,get_line_number(), yytext);
	return 1;
}
