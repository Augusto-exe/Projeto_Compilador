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
	string rotMain;
	lexic_val_type* val_lex_main;
	

		

#line 96 "parser.tab.c" /* yacc.c:339  */

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
#line 33 "parser.y" /* yacc.c:355  */

	struct lexic_val_type* valor_lexico;
	struct arvore* nodo;
	int tipo;	

#line 189 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 206 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   556

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  128
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  218

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
       0,   165,   165,   166,   167,   168,   170,   174,   175,   176,
     177,   179,   180,   181,   182,   183,   185,   186,   187,   188,
     190,   191,   192,   193,   195,   196,   198,   199,   201,   202,
     203,   206,   207,   209,   210,   211,   212,   215,   216,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   228,   230,
     231,   233,   234,   236,   237,   239,   240,   241,   242,   243,
     244,   246,   247,   248,   249,   251,   252,   254,   255,   256,
     258,   259,   260,   262,   264,   265,   268,   269,   270,   272,
     273,   275,   277,   279,   281,   282,   284,   285,   287,   288,
     289,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   316,   317,   318,   320,   321,   323,   325,
     327,   328,   329,   330,   331,   332,   333,   334,   335
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
  "'$'", "'^'", "'.'", "'?'", "PREC_UNA", "$accept", "prog", "programa",
  "decla", "tipo_stat", "tipo_cons", "tipo_nome", "tipo_stat_cons",
  "lista_var", "var", "bloco_fun", "lista_par_begin", "lista_par_end",
  "func_header", "func", "lista_par", "com_bloco", "fim_bloco", "bloco",
  "seq_comando", "comando", "decla_loc", "lista_var_loc", "var_loc",
  "id_lit", "literal", "literal_num_bool", "pos_int", "all_int",
  "all_float", "atrib", "var_vet", "ret_cont_break", "in_out",
  "shift_right", "shift_left", "fun_call", "lista_arg", "fun_input",
  "id_lit_exp", "exp", "comando_controle_fluxo", "comando_if",
  "comando_for", "comando_while", "op_unitario", "exp_unitaria", YY_NULLPTR
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

#define YYPACT_NINF -152

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-152)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -152,     5,    13,  -152,  -152,  -152,  -152,  -152,  -152,   293,
    -152,   -23,  -152,   -25,  -152,  -152,    15,    16,  -152,    31,
    -152,  -152,   -30,     8,    -1,  -152,     2,    27,    47,   117,
     486,   293,   206,    34,  -152,  -152,    30,  -152,  -152,  -152,
      62,    31,  -152,    45,    -5,   131,    63,    65,    20,    83,
      84,    85,    93,    94,    96,  -152,  -152,  -152,  -152,   111,
      99,   293,  -152,   108,  -152,  -152,   -40,   119,  -152,   486,
     486,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,    29,
      48,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,   486,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,   356,   486,  -152,  -152,   293,  -152,   124,   453,   486,
     141,   128,  -152,  -152,    -5,  -152,  -152,  -152,  -152,  -152,
     -30,   -30,   486,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,  -152,  -152,   211,  -152,   132,   173,  -152,  -152,  -152,
    -152,   214,   486,   486,   486,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   486,   486,   486,   486,   486,  -152,
    -152,   125,   129,   118,  -152,  -152,  -152,   133,   135,   356,
     255,   117,    62,  -152,  -152,  -152,   356,   142,   126,   183,
    -152,   236,   236,   195,   195,    39,   372,    43,    43,   411,
     130,   130,   236,   236,   422,   130,   130,   296,   486,  -152,
     453,  -152,  -152,  -152,  -152,   175,   126,   486,   315,  -152,
     126,  -152,   356,   124,  -152,   149,   126,  -152
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     2,     1,    11,    12,    14,    13,    15,     0,
       5,     0,     8,     0,     4,     7,    23,     0,    21,     0,
      30,    26,     0,     0,     0,     6,     0,     0,     0,     0,
       0,     0,     0,     0,    77,    78,    74,    33,    34,    19,
       0,     0,    24,     0,     0,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,   114,   115,    66,     0,
       0,     0,    27,     0,    10,    29,     0,    23,    20,     0,
       0,    79,    68,    71,    57,    58,    59,    60,    54,     0,
       0,    80,    53,    55,    56,    61,    62,    63,    64,     0,
     120,   121,   122,   123,   124,   125,   126,   127,    91,    92,
      93,    76,     0,    95,    17,     0,    18,     0,    86,     0,
      52,    48,    50,    35,     0,    39,    25,    37,    40,    41,
       0,     0,     0,    45,    42,    43,    44,    46,    47,    65,
      22,     9,    32,     0,    28,     0,     0,    69,    72,    67,
      70,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   128,
      16,    74,     0,     0,    88,    89,    87,     0,    85,    90,
       0,     0,     0,    36,    82,    81,    73,     0,     0,     0,
      94,   104,   105,   106,   107,   108,   109,    96,    97,   101,
      98,    99,   110,   111,   102,   100,   103,     0,     0,    83,
       0,    75,    51,    49,    31,   116,     0,     0,     0,    84,
       0,   119,   112,     0,   117,     0,     0,   118
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -152,  -152,  -152,  -152,  -152,    68,     0,  -152,  -152,   196,
    -152,  -152,   153,  -152,  -152,  -152,  -152,   -37,  -151,   -12,
    -152,  -152,  -152,    49,    53,  -152,  -152,   -31,  -152,  -152,
    -104,   -19,  -152,  -152,  -152,  -152,    33,    35,  -152,  -152,
     -29,  -152,  -152,  -152,  -152,  -152,  -152
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    10,    11,    63,    39,    40,    17,    18,
      20,    23,    65,    13,    14,    66,    41,    42,    43,    44,
      45,    46,   111,   112,    81,    82,    98,    60,    83,    84,
      47,    99,    49,    50,    51,    52,   100,   166,   167,   168,
     169,    54,    55,    56,    57,   102,   103
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      48,   101,    12,   162,   113,     3,   133,   116,    58,    15,
      62,     4,     5,     6,     7,     8,     4,     5,     6,     7,
       8,    16,    48,    64,    61,    59,    48,   205,    19,   114,
       9,   104,   106,   117,     4,     5,     6,     7,     8,    26,
     135,   136,    27,    67,    28,    29,    30,    31,    32,    38,
      33,    69,    53,    34,    35,   211,   120,   121,    62,   214,
     141,   131,    24,    25,    21,   217,    22,   137,   138,   142,
     143,   144,   145,   159,    53,    36,    70,   173,    53,   108,
     170,   109,   122,   107,    37,    38,   139,   140,   163,   174,
     175,    71,   115,   176,   148,   149,   150,   151,   152,   153,
     154,   151,   152,   155,   156,   160,   110,   157,   156,   215,
     118,   157,   119,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     123,   124,   125,    64,     4,     5,     6,     7,     8,    26,
     126,   127,    27,   128,    28,    29,    30,    31,    32,   129,
      33,   130,   132,    34,    35,    72,    73,    74,    75,    76,
      77,    78,   142,   143,   144,   145,   146,   147,   161,   208,
      22,   171,    79,    80,   172,    36,   109,   198,   212,    37,
     122,   200,   178,   199,    37,   210,   204,   148,   149,   150,
     151,   152,   153,   154,   163,   206,   155,   156,   157,   216,
     157,   177,   158,   142,   143,   144,   145,   146,   147,     4,
       5,     6,     7,     8,     4,     5,     6,     7,     8,   134,
      68,   203,   105,   179,   202,   142,   143,    61,   148,   149,
     150,   151,   152,   153,   154,   209,     0,   155,   156,     0,
       0,   157,     0,   158,   142,   143,   144,   145,   146,   147,
     148,   149,     0,   151,   152,   153,   154,     0,     0,     0,
     156,     0,     0,   157,   180,     0,     0,     0,     0,   148,
     149,   150,   151,   152,   153,   154,     0,     0,   155,   156,
       0,     0,   157,     0,   158,   142,   143,   144,   145,   146,
     147,   148,   149,     0,   151,   152,     4,     5,     6,     7,
       8,   156,     0,     0,   157,     0,     0,   201,     0,     0,
     148,   149,   150,   151,   152,   153,   154,     0,     0,   155,
     156,     0,     0,   157,     0,   158,   142,   143,   144,   145,
     146,   147,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   207,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,     0,     0,
     155,   156,     0,   213,   157,     0,   158,     0,     0,     0,
     148,   149,   150,   151,   152,   153,   154,     0,     0,   155,
     156,     0,     0,   157,     0,   158,   142,   143,   144,   145,
     146,   147,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   142,   143,   144,   145,   146,     0,     0,     0,
       0,   148,   149,   150,   151,   152,   153,   154,     0,     0,
     155,   156,     0,     0,   157,     0,   158,   148,   149,   150,
     151,   152,   153,   154,     0,     0,   155,   156,     0,     0,
     157,   142,   143,   144,   145,     0,     0,     0,     0,     0,
       0,     0,   142,   143,   144,   145,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   148,   149,     0,   151,
     152,   153,   154,     0,     0,   155,   156,   148,   149,   157,
     151,   152,   153,   154,     0,     0,     0,   156,     0,     0,
     157,    85,    86,    87,    88,   164,   165,    36,     0,     0,
       0,     0,    89,     0,     0,     0,     0,     0,    90,    91,
      92,    93,     0,     0,     0,     0,    94,    95,     0,    96,
       0,     0,     0,    97,    85,    86,    87,    88,     0,     0,
      36,     0,     0,     0,     0,    89,     0,     0,     0,     0,
       0,    90,    91,    92,    93,     0,     0,     0,     0,    94,
      95,     0,    96,     0,     0,     0,    97
};

static const yytype_int16 yycheck[] =
{
      19,    30,     2,   107,    41,     0,    46,    44,    38,     9,
      50,     3,     4,     5,     6,     7,     3,     4,     5,     6,
       7,    44,    41,    23,    16,    55,    45,   178,    53,    41,
      17,    31,    32,    45,     3,     4,     5,     6,     7,     8,
      69,    70,    11,    44,    13,    14,    15,    16,    17,    54,
      19,    49,    19,    22,    23,   206,    36,    37,    50,   210,
      89,    61,    46,    47,    49,   216,    51,    38,    39,    30,
      31,    32,    33,   102,    41,    44,    49,   114,    45,    49,
     109,    51,    62,    49,    53,    54,    38,    39,   107,   120,
     121,    44,    47,   122,    55,    56,    57,    58,    59,    60,
      61,    58,    59,    64,    65,   105,    44,    68,    65,   213,
      47,    68,    47,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
      47,    47,    47,   133,     3,     4,     5,     6,     7,     8,
      47,    47,    11,    47,    13,    14,    15,    16,    17,    38,
      19,    52,    44,    22,    23,    38,    39,    40,    41,    42,
      43,    44,    30,    31,    32,    33,    34,    35,    44,   198,
      51,    30,    55,    56,    46,    44,    51,    48,   207,    53,
      62,    46,    50,    50,    53,    10,    44,    55,    56,    57,
      58,    59,    60,    61,   213,    12,    64,    65,    68,    50,
      68,   133,    70,    30,    31,    32,    33,    34,    35,     3,
       4,     5,     6,     7,     3,     4,     5,     6,     7,    66,
      24,   172,    16,    50,   171,    30,    31,    16,    55,    56,
      57,    58,    59,    60,    61,   200,    -1,    64,    65,    -1,
      -1,    68,    -1,    70,    30,    31,    32,    33,    34,    35,
      55,    56,    -1,    58,    59,    60,    61,    -1,    -1,    -1,
      65,    -1,    -1,    68,    50,    -1,    -1,    -1,    -1,    55,
      56,    57,    58,    59,    60,    61,    -1,    -1,    64,    65,
      -1,    -1,    68,    -1,    70,    30,    31,    32,    33,    34,
      35,    55,    56,    -1,    58,    59,     3,     4,     5,     6,
       7,    65,    -1,    -1,    68,    -1,    -1,    52,    -1,    -1,
      55,    56,    57,    58,    59,    60,    61,    -1,    -1,    64,
      65,    -1,    -1,    68,    -1,    70,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    30,    31,    32,    33,    34,
      35,    55,    56,    57,    58,    59,    60,    61,    -1,    -1,
      64,    65,    -1,    48,    68,    -1,    70,    -1,    -1,    -1,
      55,    56,    57,    58,    59,    60,    61,    -1,    -1,    64,
      65,    -1,    -1,    68,    -1,    70,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    55,    56,    57,    58,    59,    60,    61,    -1,    -1,
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
       0,    73,    74,     0,     3,     4,     5,     6,     7,    17,
      75,    76,    78,    85,    86,    78,    44,    80,    81,    53,
      82,    49,    51,    83,    46,    47,     8,    11,    13,    14,
      15,    16,    17,    19,    22,    23,    44,    53,    54,    78,
      79,    88,    89,    90,    91,    92,    93,   102,   103,   104,
     105,   106,   107,   108,   113,   114,   115,   116,    38,    55,
      99,    16,    50,    77,    78,    84,    87,    44,    81,    49,
      49,    44,    38,    39,    40,    41,    42,    43,    44,    55,
      56,    96,    97,   100,   101,    38,    39,    40,    41,    49,
      55,    56,    57,    58,    63,    64,    66,    70,    98,   103,
     108,   112,   117,   118,    78,    16,    78,    49,    49,    51,
      44,    94,    95,    89,    91,    47,    89,    91,    47,    47,
      36,    37,    62,    47,    47,    47,    47,    47,    47,    38,
      52,    78,    44,    46,    84,   112,   112,    38,    39,    38,
      39,   112,    30,    31,    32,    33,    34,    35,    55,    56,
      57,    58,    59,    60,    61,    64,    65,    68,    70,   112,
      78,    44,   102,   103,    42,    43,   109,   110,   111,   112,
     112,    30,    46,    89,    99,    99,   112,    77,    50,    50,
      50,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,    48,    50,
      46,    52,    96,    95,    44,    90,    12,    48,   112,   109,
      10,    90,   112,    48,    90,   102,    50,    90
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    72,    73,    74,    74,    74,    75,    76,    76,    77,
      77,    78,    78,    78,    78,    78,    79,    79,    79,    79,
      80,    80,    81,    81,    82,    82,    83,    84,    85,    85,
      86,    87,    87,    88,    89,    90,    90,    91,    91,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    93,    94,
      94,    95,    95,    96,    96,    97,    97,    97,    97,    97,
      97,    98,    98,    98,    98,    99,    99,   100,   100,   100,
     101,   101,   101,   102,   103,   103,   104,   104,   104,   105,
     105,   106,   107,   108,   109,   109,   110,   110,   111,   111,
     111,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   113,   113,   113,   114,   114,   115,   116,
     117,   117,   117,   117,   117,   117,   117,   117,   118
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     3,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     3,     2,     2,     1,
       3,     1,     4,     1,     2,     3,     1,     1,     5,     4,
       2,     4,     2,     1,     1,     2,     3,     2,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     1,     2,
       2,     1,     2,     3,     1,     4,     2,     1,     1,     2,
       2,     3,     3,     4,     3,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     5,     1,     1,     1,     5,     7,     9,     6,
       1,     1,     1,     1,     1,     1,     1,     1,     2
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
#line 165 "parser.y" /* yacc.c:1646  */
    {if(arvore != NULL){ string regAux = geraRegistrador(&ultimoReg); ((a_nodo*)arvore)->cod.appendInstCodigo(geraInst2op("","","",INST_HALT,&instId)); ((a_nodo*)arvore)->cod.appendCodigoInicio(geraCodigoInicial(rotMain,regAux,&instId));}}
#line 1520 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 166 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = NULL; arvore = (yyval.nodo);}
#line 1526 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 167 "parser.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].nodo) == NULL){ (yyval.nodo) = (yyvsp[0].nodo); arvore = (yyvsp[0].nodo);} else{insere_filho((yyvsp[-1].nodo),(yyvsp[0].nodo));((a_nodo*)arvore)->cod.appendCodigoFim((yyvsp[0].nodo)->cod.getCodigo()); (yyval.nodo)=(yyvsp[0].nodo); }}
#line 1532 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 168 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-1].nodo);}
#line 1538 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 170 "parser.y" /* yacc.c:1646  */
    { libera_val((yyvsp[0].valor_lexico));tabelas.atualizaTipoTamanho((yyvsp[-2].tipo),&instId);}
#line 1544 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 174 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = (yyvsp[0].tipo);}
#line 1550 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 175 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = (yyvsp[0].tipo);}
#line 1556 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 176 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) =(yyvsp[0].tipo);}
#line 1562 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 177 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) =(yyvsp[0].tipo);}
#line 1568 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 179 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = ID_INT;}
#line 1574 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 180 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = ID_FLOAT;}
#line 1580 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 181 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = ID_CHAR;}
#line 1586 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 182 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = ID_BOOL;}
#line 1592 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 183 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = ID_STRING;}
#line 1598 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 185 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = (yyvsp[0].tipo);}
#line 1604 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 186 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = (yyvsp[0].tipo);}
#line 1610 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 187 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = (yyvsp[0].tipo);}
#line 1616 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 188 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = (yyvsp[0].tipo);}
#line 1622 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 192 "parser.y" /* yacc.c:1646  */
    {tabelas.insereSimboloVet(get_line_number(),NAT_VET,(yyvsp[-3].valor_lexico),INDEF,(yyvsp[-1].nodo)->valor_lexico->tk_value.vInt,ESC_GLOBAL);libera_val((yyvsp[-3].valor_lexico)); libera_val((yyvsp[-2].valor_lexico)); libera((yyvsp[-1].nodo));libera_val((yyvsp[0].valor_lexico));}
#line 1628 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 193 "parser.y" /* yacc.c:1646  */
    {tabelas.insereSimboloNonVet(get_line_number(),NAT_VAR,(yyvsp[0].valor_lexico),INDEF,&instId,ESC_GLOBAL);libera_val((yyvsp[0].valor_lexico));}
#line 1634 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 195 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) =NULL; }
#line 1640 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 196 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[-1].nodo);}
#line 1646 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 198 "parser.y" /* yacc.c:1646  */
    {tabelas.insereContexto(); tabelas.setDeslocamentoAtual(16); libera_val((yyvsp[0].valor_lexico));}
#line 1652 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 199 "parser.y" /* yacc.c:1646  */
    {libera_val((yyvsp[0].valor_lexico));}
#line 1658 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 201 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[-3].valor_lexico));(yyval.nodo)->reg = geraRotulo(&ultimoRotulo);tabelas.insereFun(get_line_number(),(yyvsp[-3].valor_lexico),ultimoRotulo);tabelas.atualizaFunTipoPar((yyvsp[-3].valor_lexico),(yyvsp[-4].tipo));tabelas.setRotuloFun((yyvsp[-3].valor_lexico),(yyval.nodo)->reg); ListaInst ListI; if((yyvsp[-1].nodo)==NULL){ListI = ListaInst();}else{ListI = (yyvsp[-1].nodo)->cod;} (yyval.nodo)->cod.appendCodigoInicio(geraDeclaFunc((yyval.nodo)->reg,&ultimoReg,&instId,ListI)); atualiza_tipo_semantico((yyval.nodo),(yyvsp[-4].tipo)); }
#line 1664 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 202 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[-2].valor_lexico));(yyval.nodo)->reg = geraRotulo(&ultimoRotulo);tabelas.insereFun(get_line_number(),(yyvsp[-2].valor_lexico),ultimoRotulo);tabelas.atualizaFunTipoPar((yyvsp[-2].valor_lexico),(yyvsp[-3].tipo)); tabelas.setRotuloFun((yyvsp[-2].valor_lexico),(yyval.nodo)->reg); (yyval.nodo)->cod.appendCodigoInicio(geraDeclaFunc((yyval.nodo)->reg,&ultimoReg,&instId,ListaInst())); atualiza_tipo_semantico((yyval.nodo),(yyvsp[-3].tipo));}
#line 1670 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 203 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_filho( (yyvsp[-1].nodo),(yyvsp[0].nodo)); (yyval.nodo)->cod.appendInstCodigo(geraInst2op((yyvsp[-1].nodo)->reg,"","",INST_NOP_ROT,&instId)); if("main" == string((yyval.nodo)->valor_lexico->tk_value.vStr)) {rotMain = (yyvsp[-1].nodo)->reg; val_lex_main = (yyval.nodo)->valor_lexico;} if((yyvsp[0].nodo) != NULL){(yyval.nodo)->cod.appendCodigoFim((yyvsp[0].nodo)->cod.getCodigo()); }}
#line 1676 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 206 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-3].nodo); Instrucao instAux = tabelas.insereSimboloNonVet(get_line_number(),NAT_VAR,(yyvsp[0].valor_lexico),(yyvsp[-1].tipo),&instId); (yyval.nodo)->cod.appendInstCodigo(instAux); tabelas.empilhaParametro((yyvsp[0].valor_lexico));libera_val((yyvsp[-2].valor_lexico)); libera_val((yyvsp[0].valor_lexico));/* $$->cod.appendCodigoInicio(geraInstList(&ultimoReg,&instId,"rfp"));*/}
#line 1682 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 207 "parser.y" /* yacc.c:1646  */
    {Instrucao instAux =tabelas.insereSimboloNonVet(get_line_number(),NAT_VAR,(yyvsp[0].valor_lexico),(yyvsp[-1].tipo),&instId); tabelas.empilhaParametro((yyvsp[0].valor_lexico)); (yyval.nodo)=insere_nodo(NULL,(yyvsp[0].valor_lexico)); libera_val((yyvsp[0].valor_lexico));(yyval.nodo)->cod.appendInstCodigo(instAux);/* $$->cod.appendCodigoInicio(geraInstList(&ultimoReg,&instId,"rfp"));*/}
#line 1688 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 209 "parser.y" /* yacc.c:1646  */
    {int desloc = tabelas.getDeslocamentoAtual(); tabelas.insereContexto();tabelas.setDeslocamentoAtual(desloc);libera_val((yyvsp[0].valor_lexico));}
#line 1694 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 210 "parser.y" /* yacc.c:1646  */
    {libera_val((yyvsp[0].valor_lexico)); int desloc = tabelas.getDeslocamentoAtual();tabelas.popContexto();tabelas.setDeslocamentoAtual(desloc);}
#line 1700 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 211 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) =NULL; }
#line 1706 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 212 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[-1].nodo);}
#line 1712 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 215 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[-1].nodo); (yyval.nodo) = insere_filho((yyval.nodo),(yyvsp[0].nodo));if((yyvsp[0].nodo)!=NULL){(yyval.nodo)->cod.appendCodigoFim((yyvsp[0].nodo)->cod.getCodigo());}}
#line 1718 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 216 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); }
#line 1724 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 218 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-1].nodo); libera_val((yyvsp[0].valor_lexico));}
#line 1730 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 219 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-1].nodo); libera_val((yyvsp[0].valor_lexico));}
#line 1736 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 220 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-1].nodo); libera_val((yyvsp[0].valor_lexico));}
#line 1742 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 221 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-1].nodo); libera_val((yyvsp[0].valor_lexico));}
#line 1748 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 222 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-1].nodo); libera_val((yyvsp[0].valor_lexico));}
#line 1754 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 223 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-1].nodo); libera_val((yyvsp[0].valor_lexico));}
#line 1760 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 224 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-1].nodo); libera_val((yyvsp[0].valor_lexico));}
#line 1766 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 225 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-1].nodo); libera_val((yyvsp[0].valor_lexico));}
#line 1772 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 226 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-1].nodo); libera_val((yyvsp[0].valor_lexico));}
#line 1778 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 228 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo);list<Instrucao> listaI = tabelas.atualizaTipoTamanho((yyvsp[-1].tipo),&instId); if((yyval.nodo)!=NULL){(yyval.nodo)->cod.appendCodigoInicio(tabelas.fazInic(&ultimoReg,&ultimoRotulo,&instId));(yyval.nodo)->cod.appendCodigoInicio(listaI);}else{(yyval.nodo) = insere_nodo_tipo(NULL,NULL,NO_TEMP);(yyval.nodo)->cod.appendCodigoInicio(listaI); }}
#line 1784 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 230 "parser.y" /* yacc.c:1646  */
    {libera_val((yyvsp[-1].valor_lexico)); (yyval.nodo) = insere_filho((yyvsp[-2].nodo),(yyvsp[0].nodo));}
#line 1790 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 231 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo);}
#line 1796 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 233 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); (yyval.nodo)= insere_filho((yyval.nodo),insere_nodo(NULL,(yyvsp[-2].valor_lexico)));(yyval.nodo)= insere_filho((yyval.nodo),(yyvsp[0].nodo));tabelas.insereSimboloNonVet(get_line_number(),NAT_VAR,(yyvsp[-2].valor_lexico),INDEF,&instId);tabelas.insereInicPendente((yyvsp[-2].valor_lexico),(yyvsp[0].nodo)->valor_lexico);}
#line 1802 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 234 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = NULL;tabelas.insereSimboloNonVet(get_line_number(),NAT_VAR,(yyvsp[0].valor_lexico),INDEF,&instId); libera_val((yyvsp[0].valor_lexico));}
#line 1808 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 236 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);}
#line 1814 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 237 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));atualiza_tipo_semantico((yyval.nodo),tabelas.getTipoPorValorLex((yyvsp[0].valor_lexico)));}
#line 1820 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 239 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);atualiza_tipo_semantico((yyval.nodo),ID_INT);}
#line 1826 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 240 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);atualiza_tipo_semantico((yyval.nodo),ID_FLOAT);}
#line 1832 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 241 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));atualiza_tipo_semantico((yyval.nodo),ID_BOOL);tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,(yyvsp[0].valor_lexico),ID_BOOL,&instId);}
#line 1838 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 242 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));atualiza_tipo_semantico((yyval.nodo),ID_BOOL);tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,(yyvsp[0].valor_lexico),ID_BOOL,&instId);}
#line 1844 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 243 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));atualiza_tipo_semantico((yyval.nodo),ID_CHAR);tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,(yyvsp[0].valor_lexico),ID_CHAR,&instId);}
#line 1850 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 244 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));atualiza_tipo_semantico((yyval.nodo),ID_STRING);tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,(yyvsp[0].valor_lexico),ID_STRING,&instId);}
#line 1856 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 246 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,(yyvsp[0].valor_lexico),ID_INT,&instId);atualiza_tipo_semantico((yyval.nodo),ID_INT);(yyval.nodo)->reg =geraRegistrador(&ultimoReg);(yyval.nodo)->cod.appendInstCodigo(geraInst2op("loadI",to_string((yyval.nodo)->valor_lexico->tk_value.vInt),(yyval.nodo)->reg,INST_LOADI,&instId));}
#line 1862 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 247 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,(yyvsp[0].valor_lexico),ID_FLOAT,&instId);atualiza_tipo_semantico((yyval.nodo),ID_FLOAT);}
#line 1868 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 248 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,(yyvsp[0].valor_lexico),ID_BOOL,&instId);atualiza_tipo_semantico((yyval.nodo),ID_BOOL);}
#line 1874 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 249 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,(yyvsp[0].valor_lexico),ID_BOOL,&instId);atualiza_tipo_semantico((yyval.nodo),ID_BOOL);}
#line 1880 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 251 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico)); libera_val((yyvsp[-1].valor_lexico));tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,(yyvsp[0].valor_lexico),ID_INT,&instId);atualiza_tipo_semantico((yyval.nodo),ID_INT);}
#line 1886 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 252 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,(yyvsp[0].valor_lexico),ID_INT,&instId);atualiza_tipo_semantico((yyval.nodo),ID_INT);}
#line 1892 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 254 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,inverte_sinal((yyvsp[0].valor_lexico))); libera_val((yyvsp[-1].valor_lexico));tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,inverte_sinal((yyvsp[0].valor_lexico)),ID_INT,&instId);atualiza_tipo_semantico((yyval.nodo),ID_INT);}
#line 1898 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 255 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,(yyvsp[0].valor_lexico),ID_INT,&instId);atualiza_tipo_semantico((yyval.nodo),ID_INT);}
#line 1904 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 256 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico)); libera_val((yyvsp[-1].valor_lexico));tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,(yyvsp[0].valor_lexico),ID_INT,&instId);atualiza_tipo_semantico((yyval.nodo),ID_INT);}
#line 1910 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 258 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,inverte_sinal((yyvsp[0].valor_lexico)));libera_val((yyvsp[-1].valor_lexico));tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,inverte_sinal((yyvsp[0].valor_lexico)),ID_FLOAT,&instId);atualiza_tipo_semantico((yyval.nodo),ID_FLOAT);}
#line 1916 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 259 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,(yyvsp[0].valor_lexico),ID_FLOAT,&instId);atualiza_tipo_semantico((yyval.nodo),ID_FLOAT);}
#line 1922 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 260 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico)); libera_val((yyvsp[-1].valor_lexico));tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,(yyvsp[0].valor_lexico),ID_FLOAT,&instId);atualiza_tipo_semantico((yyval.nodo),ID_FLOAT);}
#line 1928 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 262 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));tabelas.verificaAtrib((yyvsp[-2].nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),(yyvsp[-2].nodo)->tipo_valor_semantico);DadoTabelaSimbolos dado = tabelas.getSimboloPorValorLex((yyvsp[-2].nodo)->valor_lexico); (yyval.nodo)->cod.appendCodigoInicio(geraInstAtribTipoDesloc(dado.deslocamento, dado.escopo ,(yyvsp[0].nodo)->tipo_valor_semantico,(yyvsp[0].nodo)->reg ,&((yyvsp[0].nodo)->cod),(yyvsp[0].nodo)->idRemendosTrue,(yyvsp[0].nodo)->idRemendosFalse,&ultimoReg,&ultimoRotulo,&instId));}
#line 1934 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 264 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo)= insere_nodo(NULL,(yyvsp[0].valor_lexico));atualiza_tipo_semantico((yyval.nodo),tabelas.getTipoPorValorLex((yyvsp[0].valor_lexico)));tabelas.verificaVar((yyvsp[0].valor_lexico));}
#line 1940 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 265 "parser.y" /* yacc.c:1646  */
    { libera_val((yyvsp[-2].valor_lexico));libera_val((yyvsp[0].valor_lexico));
(yyval.nodo) = insere_nodo(NULL,geraVal(TIPO_VET,NOT_LIT,get_line_number(),(char*)"[]")); insere_filho((yyval.nodo),insere_nodo(NULL,(yyvsp[-3].valor_lexico))); insere_filho((yyval.nodo),(yyvsp[-1].nodo));atualiza_tipo_semantico((yyval.nodo),tabelas.getTipoPorValorLex((yyvsp[-3].valor_lexico)));tabelas.verificaVetor((yyvsp[-3].valor_lexico),(yyvsp[-1].nodo));}
#line 1947 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 268 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo((yyvsp[0].nodo),geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"return"));tabelas.verificaReturn((yyvsp[0].nodo)->tipo_valor_semantico,get_line_number());(yyval.nodo)->cod.appendCodigoInicio(geraInstReturn((yyvsp[0].nodo)->reg,&ultimoReg,&instId)); (yyval.nodo)->cod.appendCodigoInicio((yyvsp[0].nodo)->cod.getCodigo());}
#line 1953 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 269 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"break"));}
#line 1959 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 270 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"continue"));}
#line 1965 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 272 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(insere_nodo(NULL,(yyvsp[0].valor_lexico)),geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"input"));tabelas.avaliaInput((yyvsp[0].valor_lexico));}
#line 1971 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 273 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo((yyvsp[0].nodo),geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"output")); tabelas.avaliaOutput((yyvsp[0].nodo)->valor_lexico);}
#line 1977 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 275 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo((yyvsp[-2].nodo),(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[0].nodo));tabelas.avaliaShift((yyvsp[0].nodo)->valor_lexico); }
#line 1983 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 277 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo((yyvsp[-2].nodo),(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[0].nodo)); tabelas.avaliaShift((yyvsp[0].nodo)->valor_lexico);}
#line 1989 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 279 "parser.y" /* yacc.c:1646  */
    { libera_val((yyvsp[-2].valor_lexico)); libera_val((yyvsp[0].valor_lexico)); string regFun = geraRegistrador(&ultimoReg);  string rotFun = tabelas.getRotuloFun((yyvsp[-3].valor_lexico)); (yyval.nodo) = insere_nodo_tipo((yyvsp[-1].nodo),(yyvsp[-3].valor_lexico),NO_FUN_CALL); (yyval.nodo)->reg = regFun;list<Instrucao> ListI = tabelas.verificaFuncao((yyvsp[-3].valor_lexico),(yyvsp[-1].nodo),get_line_number(),&instId,&ultimoRotulo,&ultimoReg,regFun,rotFun); int tipo = tabelas.getTipoFuncao((yyvsp[-3].valor_lexico)); atualiza_tipo_semantico((yyval.nodo),tipo); (yyval.nodo)->cod.appendCodigoInicio(ListI); if((yyvsp[-1].nodo) != NULL) (yyval.nodo)->cod.appendCodigoInicio((yyvsp[-1].nodo)->cod.getCodigo());}
#line 1995 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 281 "parser.y" /* yacc.c:1646  */
    { libera_val((yyvsp[-1].valor_lexico)); (yyval.nodo) = insere_filho((yyvsp[-2].nodo),(yyvsp[0].nodo)); (yyvsp[-2].nodo)->is_arg = true; (yyval.nodo)->cod.appendCodigoFim((yyvsp[0].nodo)->cod.getCodigo()); }
#line 2001 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 282 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo); (yyval.nodo)->is_arg =true; }
#line 2007 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 284 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo)=NULL;}
#line 2013 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 285 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo)=(yyvsp[0].nodo); /*$$->cod.appendCodigoInicio(geraInstList(&ultimoReg,&instId,"rsp"));*/}
#line 2019 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 287 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));atualiza_tipo_semantico((yyval.nodo),ID_CHAR);tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,(yyvsp[0].valor_lexico),ID_CHAR,&instId);}
#line 2025 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 288 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));atualiza_tipo_semantico((yyval.nodo),ID_STRING);tabelas.insereSimboloNonVet(get_line_number(),NAT_VAR,(yyvsp[0].valor_lexico),ID_STRING,&instId);}
#line 2031 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 289 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo);}
#line 2037 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 293 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2043 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 294 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);(yyval.nodo)->reg = geraRegistrador(&ultimoReg);DadoTabelaSimbolos dado = tabelas.getSimboloPorValorLex((yyvsp[0].nodo)->valor_lexico); (yyval.nodo)->cod.appendCodigoInicio(geraLeituraVar((yyval.nodo)->reg,dado.deslocamento,dado.escopo,&ultimoReg,&ultimoRotulo,&instId));}
#line 2049 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 295 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2055 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 296 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-1].nodo); libera_val((yyvsp[-2].valor_lexico)); libera_val((yyvsp[0].valor_lexico));}
#line 2061 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 297 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2067 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 298 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),tabelas.infereTipo((yyvsp[-2].nodo),(yyvsp[0].nodo)));(yyval.nodo)->reg =geraRegistrador(&ultimoReg);(yyval.nodo)->cod.appendInstCodigo(geraInst3op("add",(yyvsp[-2].nodo)->reg,(yyvsp[0].nodo)->reg,(yyval.nodo)->reg,INST_ARITLOG,&instId));(yyval.nodo)->cod.appendCodigoInicio((yyvsp[0].nodo)->cod.getCodigo());(yyval.nodo)->cod.appendCodigoInicio((yyvsp[-2].nodo)->cod.getCodigo());}
#line 2073 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 299 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),tabelas.infereTipo((yyvsp[-2].nodo),(yyvsp[0].nodo)));(yyval.nodo)->reg =geraRegistrador(&ultimoReg);(yyval.nodo)->cod.appendInstCodigo(geraInst3op("sub",(yyvsp[-2].nodo)->reg,(yyvsp[0].nodo)->reg,(yyval.nodo)->reg,INST_ARITLOG,&instId));(yyval.nodo)->cod.appendCodigoInicio((yyvsp[0].nodo)->cod.getCodigo());(yyval.nodo)->cod.appendCodigoInicio((yyvsp[-2].nodo)->cod.getCodigo());}
#line 2079 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 300 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),tabelas.infereTipo((yyvsp[-2].nodo),(yyvsp[0].nodo)));(yyval.nodo)->reg =geraRegistrador(&ultimoReg);(yyval.nodo)->cod.appendInstCodigo(geraInst3op("mult",(yyvsp[-2].nodo)->reg,(yyvsp[0].nodo)->reg,(yyval.nodo)->reg,INST_ARITLOG,&instId));(yyval.nodo)->cod.appendCodigoInicio((yyvsp[0].nodo)->cod.getCodigo());(yyval.nodo)->cod.appendCodigoInicio((yyvsp[-2].nodo)->cod.getCodigo());}
#line 2085 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 301 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),tabelas.infereTipo((yyvsp[-2].nodo),(yyvsp[0].nodo)));(yyval.nodo)->reg =geraRegistrador(&ultimoReg);(yyval.nodo)->cod.appendInstCodigo(geraInst3op("div",(yyvsp[-2].nodo)->reg,(yyvsp[0].nodo)->reg,(yyval.nodo)->reg,INST_ARITLOG,&instId));(yyval.nodo)->cod.appendCodigoInicio((yyvsp[0].nodo)->cod.getCodigo());(yyval.nodo)->cod.appendCodigoInicio((yyvsp[-2].nodo)->cod.getCodigo());}
#line 2091 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 302 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),tabelas.infereTipo((yyvsp[-2].nodo),(yyvsp[0].nodo)));}
#line 2097 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 303 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),tabelas.infereTipo((yyvsp[-2].nodo),(yyvsp[0].nodo)));}
#line 2103 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 304 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),tabelas.infereTipo((yyvsp[-2].nodo),(yyvsp[0].nodo)));}
#line 2109 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 305 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),tabelas.infereTipo((yyvsp[-2].nodo),(yyvsp[0].nodo)));}
#line 2115 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 306 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),ID_BOOL);(yyval.nodo)->reg = geraRegistrador(&ultimoReg);Instrucao inst =geraInst3op("cbr","x","y",(yyval.nodo)->reg,INST_CBR,&instId);(yyval.nodo)->idRemendosTrue.push_front(inst.id);(yyval.nodo)->idRemendosFalse.push_front(inst.id);(yyval.nodo)->cod.appendInstCodigo(inst);(yyval.nodo)->cod.appendInstCodigo(geraInst3op("cmp_LE",(yyvsp[-2].nodo)->reg,(yyvsp[0].nodo)->reg,(yyval.nodo)->reg,INST_REL,&instId));(yyval.nodo)->cod.appendCodigoInicio((yyvsp[0].nodo)->cod.getCodigo());(yyval.nodo)->cod.appendCodigoInicio((yyvsp[-2].nodo)->cod.getCodigo());}
#line 2121 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 307 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),ID_BOOL);(yyval.nodo)->reg = geraRegistrador(&ultimoReg);Instrucao inst =geraInst3op("cbr","x","y",(yyval.nodo)->reg,INST_CBR,&instId);(yyval.nodo)->idRemendosTrue.push_front(inst.id);(yyval.nodo)->idRemendosFalse.push_front(inst.id);(yyval.nodo)->cod.appendInstCodigo(inst);(yyval.nodo)->cod.appendInstCodigo(geraInst3op("cmp_GE",(yyvsp[-2].nodo)->reg,(yyvsp[0].nodo)->reg,(yyval.nodo)->reg,INST_REL,&instId));(yyval.nodo)->cod.appendCodigoInicio((yyvsp[0].nodo)->cod.getCodigo());(yyval.nodo)->cod.appendCodigoInicio((yyvsp[-2].nodo)->cod.getCodigo());}
#line 2127 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 308 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),ID_BOOL);(yyval.nodo)->reg = geraRegistrador(&ultimoReg);Instrucao inst =geraInst3op("cbr","x","y",(yyval.nodo)->reg,INST_CBR,&instId);(yyval.nodo)->idRemendosTrue.push_front(inst.id);(yyval.nodo)->idRemendosFalse.push_front(inst.id);(yyval.nodo)->cod.appendInstCodigo(inst);(yyval.nodo)->cod.appendInstCodigo(geraInst3op("cmp_EQ",(yyvsp[-2].nodo)->reg,(yyvsp[0].nodo)->reg,(yyval.nodo)->reg,INST_REL,&instId));(yyval.nodo)->cod.appendCodigoInicio((yyvsp[0].nodo)->cod.getCodigo());(yyval.nodo)->cod.appendCodigoInicio((yyvsp[-2].nodo)->cod.getCodigo());}
#line 2133 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 309 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),ID_BOOL);(yyval.nodo)->reg = geraRegistrador(&ultimoReg);Instrucao inst =geraInst3op("cbr","x","y",(yyval.nodo)->reg,INST_CBR,&instId);(yyval.nodo)->idRemendosTrue.push_front(inst.id);(yyval.nodo)->idRemendosFalse.push_front(inst.id);(yyval.nodo)->cod.appendInstCodigo(inst);(yyval.nodo)->cod.appendInstCodigo(geraInst3op("cmp_NE",(yyvsp[-2].nodo)->reg,(yyvsp[0].nodo)->reg,(yyval.nodo)->reg,INST_REL,&instId));(yyval.nodo)->cod.appendCodigoInicio((yyvsp[0].nodo)->cod.getCodigo());(yyval.nodo)->cod.appendCodigoInicio((yyvsp[-2].nodo)->cod.getCodigo());}
#line 2139 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 310 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),ID_BOOL);string rotTrue = geraRotulo(&ultimoRotulo); Instrucao nopInst = geraInst2op(rotTrue,"","",INST_NOP_ROT,&instId); (yyval.nodo)->cod.appendCodigoInicio((yyvsp[0].nodo)->cod.getCodigo());(yyval.nodo)->cod.appendInstCodigo(nopInst);(yyvsp[-2].nodo)->cod.remendaTrue((yyvsp[-2].nodo)->idRemendosTrue,rotTrue);(yyvsp[-2].nodo)->idRemendosTrue.clear();(yyval.nodo)->cod.appendCodigoInicio((yyvsp[-2].nodo)->cod.getCodigo());appendListaTrue((yyval.nodo),(yyvsp[0].nodo)->idRemendosTrue);appendListaFalse((yyval.nodo),(yyvsp[0].nodo)->idRemendosFalse); appendListaFalse((yyval.nodo),(yyvsp[-2].nodo)->idRemendosFalse); }
#line 2145 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 311 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),ID_BOOL);string rotFalse = geraRotulo(&ultimoRotulo); Instrucao nopInst = geraInst2op(rotFalse,"","",INST_NOP_ROT,&instId); (yyval.nodo)->cod.appendCodigoInicio((yyvsp[0].nodo)->cod.getCodigo());(yyval.nodo)->cod.appendInstCodigo(nopInst);(yyvsp[-2].nodo)->cod.remendaFalse((yyvsp[-2].nodo)->idRemendosFalse,rotFalse);(yyvsp[-2].nodo)->idRemendosFalse.clear();(yyval.nodo)->cod.appendCodigoInicio((yyvsp[-2].nodo)->cod.getCodigo());appendListaTrue((yyval.nodo),(yyvsp[0].nodo)->idRemendosTrue);appendListaFalse((yyval.nodo),(yyvsp[0].nodo)->idRemendosFalse); appendListaTrue((yyval.nodo),(yyvsp[-2].nodo)->idRemendosTrue);}
#line 2151 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 312 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),ID_BOOL);(yyval.nodo)->reg = geraRegistrador(&ultimoReg);Instrucao inst =geraInst3op("cbr","x","y",(yyval.nodo)->reg,INST_CBR,&instId);(yyval.nodo)->idRemendosTrue.push_front(inst.id);(yyval.nodo)->idRemendosFalse.push_front(inst.id);(yyval.nodo)->cod.appendInstCodigo(inst);(yyval.nodo)->cod.appendInstCodigo(geraInst3op("cmp_LT",(yyvsp[-2].nodo)->reg,(yyvsp[0].nodo)->reg,(yyval.nodo)->reg,INST_REL,&instId));(yyval.nodo)->cod.appendCodigoInicio((yyvsp[0].nodo)->cod.getCodigo());(yyval.nodo)->cod.appendCodigoInicio((yyvsp[-2].nodo)->cod.getCodigo());}
#line 2157 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 313 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),ID_BOOL);(yyval.nodo)->reg = geraRegistrador(&ultimoReg);Instrucao inst =geraInst3op("cbr","x","y",(yyval.nodo)->reg,INST_CBR,&instId);(yyval.nodo)->idRemendosTrue.push_front(inst.id);(yyval.nodo)->idRemendosFalse.push_front(inst.id);(yyval.nodo)->cod.appendInstCodigo(inst);(yyval.nodo)->cod.appendInstCodigo(geraInst3op("cmp_GT",(yyvsp[-2].nodo)->reg,(yyvsp[0].nodo)->reg,(yyval.nodo)->reg,INST_REL,&instId));(yyval.nodo)->cod.appendCodigoInicio((yyvsp[0].nodo)->cod.getCodigo());(yyval.nodo)->cod.appendCodigoInicio((yyvsp[-2].nodo)->cod.getCodigo());}
#line 2163 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 314 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,geraVal(TIPO_CHAR_ESP,NOT_LIT,get_line_number(),(char*)"?:")); insere_filho((yyval.nodo),(yyvsp[-4].nodo)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));libera_val((yyvsp[-3].valor_lexico));libera_val((yyvsp[-1].valor_lexico));atualiza_tipo_semantico((yyval.nodo),tabelas.infereTipo((yyvsp[-2].nodo),(yyvsp[0].nodo)));}
#line 2169 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 316 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2175 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 317 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2181 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 318 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2187 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 320 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo_tipo(NULL,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"if"),NO_IF); (yyval.nodo)= insere_filho((yyval.nodo),(yyvsp[-2].nodo)); (yyval.nodo)= insere_filho((yyval.nodo),(yyvsp[0].nodo)); libera_val((yyvsp[-3].valor_lexico)); libera_val((yyvsp[-1].valor_lexico)); string rotT = geraRotulo(&ultimoRotulo);string rotF = geraRotulo(&ultimoRotulo);ListaInst ListI; if((yyvsp[0].nodo)==NULL){ListI = ListaInst();}else{ListI = (yyvsp[0].nodo)->cod;}(yyval.nodo)->cod.appendCodigoInicio(geraInstIfElse((yyvsp[-2].nodo)->tipo_valor_semantico,(yyvsp[-2].nodo)->reg,&((yyvsp[-2].nodo)->cod),ListI,ListI,(yyvsp[-2].nodo)->idRemendosTrue,(yyvsp[-2].nodo)->idRemendosFalse,&ultimoReg,&ultimoRotulo,&instId,rotT,rotF,rotF));(yyvsp[-2].nodo)->idRemendosFalse.clear();(yyvsp[-2].nodo)->idRemendosTrue.clear();}
#line 2193 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 321 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo_tipo(NULL,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"if"),NO_IF); (yyval.nodo) = insere_filho((yyval.nodo),(yyvsp[-4].nodo)); (yyval.nodo) = insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo)); libera_val((yyvsp[-5].valor_lexico)); libera_val((yyvsp[-3].valor_lexico)); string rotT = geraRotulo(&ultimoRotulo);string rotF = geraRotulo(&ultimoRotulo); string rotEnd = geraRotulo(&ultimoRotulo); ListaInst ListT,ListF; if((yyvsp[-2].nodo)==NULL){ListT = ListaInst();}else{ListT = (yyvsp[-2].nodo)->cod;} if((yyvsp[0].nodo)==NULL){ListF = ListaInst();}else{ListF = (yyvsp[0].nodo)->cod;} (yyval.nodo)->cod.appendCodigoInicio(geraInstIfElse((yyvsp[-4].nodo)->tipo_valor_semantico,(yyvsp[-4].nodo)->reg,&((yyvsp[-4].nodo)->cod),ListT,ListF,(yyvsp[-4].nodo)->idRemendosTrue,(yyvsp[-4].nodo)->idRemendosFalse,&ultimoReg,&ultimoRotulo,&instId,rotT,rotF,rotEnd));(yyvsp[-4].nodo)->idRemendosFalse.clear();}
#line 2199 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 323 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo_tipo(NULL,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"for"),NO_FOR); (yyval.nodo) = insere_filho((yyval.nodo),(yyvsp[-6].nodo)); (yyval.nodo) = insere_filho((yyval.nodo),(yyvsp[-4].nodo)); (yyval.nodo) = insere_filho((yyval.nodo),(yyvsp[-2].nodo)); (yyval.nodo) = insere_filho((yyval.nodo),(yyvsp[0].nodo)); libera_val((yyvsp[-3].valor_lexico)); libera_val((yyvsp[-5].valor_lexico)); libera_val ((yyvsp[-7].valor_lexico));libera_val((yyvsp[-1].valor_lexico)); string rotT = geraRotulo(&ultimoRotulo);string rotEnd = geraRotulo(&ultimoRotulo);ListaInst ListI; if((yyvsp[0].nodo)==NULL){ListI = ListaInst();}else{ListI = (yyvsp[0].nodo)->cod;}(yyval.nodo)->cod.appendCodigoInicio(geraInstFor((yyvsp[-4].nodo)->tipo_valor_semantico,(yyvsp[-4].nodo)->reg,&((yyvsp[-4].nodo)->cod),ListI,(yyvsp[-6].nodo)->cod,(yyvsp[-2].nodo)->cod,(yyvsp[-4].nodo)->idRemendosTrue,(yyvsp[-4].nodo)->idRemendosFalse,&ultimoReg,&ultimoRotulo,&instId,rotT,rotEnd));(yyvsp[-4].nodo)->idRemendosFalse.clear();(yyvsp[-4].nodo)->idRemendosTrue.clear();(yyvsp[-6].nodo)->idRemendosTrue.clear();}
#line 2205 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 325 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) =  insere_nodo_tipo(NULL,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"while"),NO_WHILE); (yyval.nodo) = insere_filho((yyval.nodo),(yyvsp[-3].nodo)); (yyval.nodo) = insere_filho((yyval.nodo),(yyvsp[0].nodo)); libera_val((yyvsp[-4].valor_lexico)); libera_val((yyvsp[-2].valor_lexico)); string rotT = geraRotulo(&ultimoRotulo);string rotEnd = geraRotulo(&ultimoRotulo);ListaInst ListI; if((yyvsp[0].nodo)==NULL){ListI = ListaInst();}else{ListI = (yyvsp[0].nodo)->cod;}(yyval.nodo)->cod.appendCodigoInicio(geraInstWhile((yyvsp[-3].nodo)->tipo_valor_semantico,(yyvsp[-3].nodo)->reg,&((yyvsp[-3].nodo)->cod),ListI,(yyvsp[-3].nodo)->idRemendosTrue,(yyvsp[-3].nodo)->idRemendosFalse,&ultimoReg,&ultimoRotulo,&instId,rotT,rotEnd));(yyvsp[-3].nodo)->idRemendosFalse.clear();(yyvsp[-3].nodo)->idRemendosTrue.clear();}
#line 2211 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 327 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 2217 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 328 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 2223 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 329 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 2229 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 330 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 2235 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 331 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 2241 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 332 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 2247 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 333 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 2253 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 334 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 2259 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 335 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[-1].nodo); insere_filho((yyval.nodo),(yyvsp[0].nodo));atualiza_tipo_semantico((yyval.nodo),(yyvsp[0].nodo)->tipo_valor_semantico); if(string ((yyvsp[-1].nodo)->valor_lexico->tk_value.vStr) == "-") (yyval.nodo)->reg =geraRegistrador(&ultimoReg);string reg0 = geraRegistrador(&ultimoReg); (yyval.nodo)->cod.appendInstCodigo(geraInst3op("sub",reg0,(yyvsp[0].nodo)->reg,(yyval.nodo)->reg,INST_ARITLOG,&instId));(yyval.nodo)->cod.appendCodigoInicio((yyvsp[0].nodo)->cod.getCodigo());(yyval.nodo)->cod.appendInstCodigo(geraInst2op("loadI","0",reg0,INST_LOADI,&instId));}
#line 2265 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2269 "parser.tab.c" /* yacc.c:1646  */
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
#line 336 "parser.y" /* yacc.c:1906  */


int yyerror(char const *s){
	printf("%s at line %d UNEXPECTED token \"%s\" \n", s,get_line_number(), yytext);
	return 1;
}
