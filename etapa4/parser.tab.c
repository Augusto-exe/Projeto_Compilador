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


		

#line 91 "parser.tab.c" /* yacc.c:339  */

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
#line 28 "parser.y" /* yacc.c:355  */

	struct lexic_val_type* valor_lexico;
	struct arvore* nodo;
	int tipo;	

#line 184 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 201 "parser.tab.c" /* yacc.c:358  */

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
#define YYLAST   597

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  122
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  211

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
       0,   157,   157,   158,   159,   161,   165,   166,   167,   168,
     170,   171,   172,   173,   174,   176,   177,   178,   179,   181,
     182,   183,   184,   186,   187,   189,   190,   192,   193,   194,
     195,   198,   199,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   211,   213,   214,   216,   217,   219,   220,   222,
     223,   224,   225,   226,   227,   229,   230,   231,   232,   234,
     235,   237,   238,   239,   241,   242,   243,   245,   247,   248,
     251,   252,   253,   255,   256,   258,   260,   262,   264,   265,
     267,   268,   270,   271,   272,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   299,   300,   301,
     303,   304,   306,   308,   310,   311,   312,   313,   314,   315,
     316,   317,   318
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
  "var", "func", "lista_par", "com_bloco", "fim_bloco", "bloco",
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

#define YYPACT_NINF -93

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-93)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -93,    39,   -93,   -93,   -93,   -93,   -93,   -93,    69,   -93,
     -25,   -93,   -93,   -93,   -21,    16,   -93,     7,   -34,   -17,
     -93,    69,   -36,    -4,   -93,   -26,   -93,   -16,    -3,     1,
     -93,   -93,   -93,   114,   -93,   -93,    31,   -36,   -93,   -93,
       6,    41,    33,   100,   527,    69,    63,    66,   -93,   -93,
      -1,   -93,   -93,    47,   -93,    76,    70,   185,    79,    85,
     -29,    87,    88,    98,    99,   102,   106,   -93,   -93,   -93,
     108,   -93,   527,   527,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -33,    42,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   527,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   408,   527,   -93,   -93,    69,   -93,
     118,   494,   527,   135,   120,   -93,   -93,   -93,   -93,   -93,
     -93,   -34,   -34,   527,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   184,   225,   -93,   -93,   -93,   -93,   266,   527,   527,
     527,   527,   527,   527,   527,   527,   527,   527,   527,   527,
     527,   527,   527,   527,   527,   -93,   -93,   121,   123,   107,
     -93,   -93,   -93,   125,   130,   408,   307,   100,    47,   -93,
     -93,   408,   -36,   166,   -93,   105,   105,   206,   206,    28,
      28,    89,    89,   424,   111,   111,   105,   105,   463,   111,
     111,   348,   527,   -93,   494,   -93,   -93,   -93,   170,   -36,
     527,   367,   -93,   -36,   -93,   408,   118,   -93,   132,   -36,
     -93
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    10,    11,    13,    12,    14,     0,     4,
       0,     7,     3,     6,    22,     0,    20,     0,     0,     0,
       5,     0,     0,     0,     9,     0,    60,     0,     0,    22,
      19,     8,    27,     0,    24,    26,     0,     0,    59,    21,
       0,     0,     0,     0,     0,     0,     0,     0,    71,    72,
      68,    28,    18,     0,    29,     0,     0,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   107,   108,   109,
       0,    23,     0,     0,    73,    62,    65,    51,    52,    53,
      54,    48,     0,     0,    74,    47,    49,    50,    55,    56,
      57,    58,     0,   114,   115,   116,   117,   118,   119,   120,
     121,    85,    86,    87,    70,     0,    89,    16,     0,    17,
       0,    80,     0,    46,    42,    44,    33,    30,    31,    34,
      35,     0,     0,     0,    39,    36,    37,    38,    40,    41,
      25,     0,     0,    63,    66,    61,    64,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,    15,    68,     0,     0,
      82,    83,    81,     0,    79,    84,     0,     0,     0,    76,
      75,    67,     0,     0,    88,    98,    99,   100,   101,   102,
     103,    90,    91,    95,    92,    93,   104,   105,    96,    94,
      97,     0,     0,    77,     0,    69,    45,    43,   110,     0,
       0,     0,    78,     0,   113,   106,     0,   111,     0,     0,
     112
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -93,   -93,   -93,   -93,   147,     8,   -93,   -93,   165,   -93,
     -93,   -93,   129,   -22,   137,   -93,   -93,   -93,    18,    30,
     -93,   -93,   -27,   -93,   -93,   -92,   -32,   -93,   -93,   -93,
     -93,   -31,     9,   -93,   -93,   -41,   -93,   -93,   -93,   -93,
     -93,   -93
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     9,    10,    23,    24,    53,    15,    16,    12,
      25,    33,    54,    55,    56,    57,    58,   114,   115,    84,
      85,   101,    28,    86,    87,    59,   102,    61,    62,    63,
      64,   103,   162,   163,   164,   165,    66,    67,    68,    69,
     105,   106
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      34,    60,    65,   104,    26,   133,   134,   121,   122,    11,
       3,     4,     5,     6,     7,    71,    13,    32,   158,    14,
      36,    27,    38,    21,    37,    60,    65,    29,    17,    31,
      18,   131,   132,   123,     3,     4,     5,     6,     7,     2,
      35,    52,     3,     4,     5,     6,     7,    21,   111,    39,
     112,   137,    18,   107,   109,    72,     8,    22,   138,   139,
     140,   141,    19,    20,   155,    52,     3,     4,     5,     6,
       7,   166,     3,     4,     5,     6,     7,    74,   159,   108,
     135,   136,   171,   144,   145,   146,   147,   148,   149,   150,
      73,   113,   151,   152,   169,   170,   153,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   208,   110,   156,     3,     4,     5,
       6,     7,    40,   116,    51,    41,   119,    42,    43,    44,
      45,    46,   120,    47,   124,   125,    48,    49,    75,    76,
      77,    78,    79,    80,    81,   126,   127,   147,   148,   128,
     198,   201,   130,   129,   152,    82,    83,   153,    50,   205,
     144,   145,   157,   147,   148,   167,   168,    32,    51,   123,
     152,   192,   112,   153,   159,   193,   194,   204,   199,   153,
     203,   207,   209,    70,    30,   117,   197,   210,     3,     4,
       5,     6,     7,    40,   118,     0,    41,   196,    42,    43,
      44,    45,    46,   202,    47,     0,     0,    48,    49,     0,
       0,     0,     0,     0,   138,   139,   140,   141,   142,   143,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,     0,   172,     0,   138,   139,    32,   144,
     145,   146,   147,   148,   149,   150,     0,     0,   151,   152,
       0,     0,   153,     0,   154,   138,   139,   140,   141,   142,
     143,   144,   145,     0,   147,   148,   149,   150,     0,     0,
       0,   152,     0,     0,   153,   173,     0,     0,     0,     0,
     144,   145,   146,   147,   148,   149,   150,     0,     0,   151,
     152,     0,     0,   153,     0,   154,   138,   139,   140,   141,
     142,   143,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   174,     0,     0,     0,
       0,   144,   145,   146,   147,   148,   149,   150,     0,     0,
     151,   152,     0,     0,   153,     0,   154,   138,   139,   140,
     141,   142,   143,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   195,
       0,     0,   144,   145,   146,   147,   148,   149,   150,     0,
       0,   151,   152,     0,     0,   153,     0,   154,   138,   139,
     140,   141,   142,   143,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   200,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
       0,     0,   151,   152,     0,   206,   153,     0,   154,     0,
       0,     0,   144,   145,   146,   147,   148,   149,   150,     0,
       0,   151,   152,     0,     0,   153,     0,   154,   138,   139,
     140,   141,   142,   143,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   138,   139,   140,   141,     0,     0,
       0,     0,     0,   144,   145,   146,   147,   148,   149,   150,
       0,     0,   151,   152,     0,     0,   153,     0,   154,   144,
     145,     0,   147,   148,   149,   150,     0,     0,   151,   152,
       0,     0,   153,   138,   139,   140,   141,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   144,   145,
       0,   147,   148,   149,   150,     0,     0,     0,   152,     0,
       0,   153,    88,    89,    90,    91,   160,   161,    50,     0,
       0,     0,     0,    92,     0,     0,     0,     0,     0,    93,
      94,    95,    96,     0,     0,     0,     0,    97,    98,     0,
      99,     0,     0,     0,   100,    88,    89,    90,    91,     0,
       0,    50,     0,     0,     0,     0,    92,     0,     0,     0,
       0,     0,    93,    94,    95,    96,     0,     0,     0,     0,
      97,    98,     0,    99,     0,     0,     0,   100
};

static const yytype_int16 yycheck[] =
{
      22,    33,    33,    44,    38,    38,    39,    36,    37,     1,
       3,     4,     5,     6,     7,    37,     8,    53,   110,    44,
      46,    55,    38,    16,    50,    57,    57,    44,    49,    21,
      51,    72,    73,    62,     3,     4,     5,     6,     7,     0,
      44,    33,     3,     4,     5,     6,     7,    16,    49,    52,
      51,    92,    51,    45,    46,    49,    17,    50,    30,    31,
      32,    33,    46,    47,   105,    57,     3,     4,     5,     6,
       7,   112,     3,     4,     5,     6,     7,    44,   110,    16,
      38,    39,   123,    55,    56,    57,    58,    59,    60,    61,
      49,    44,    64,    65,   121,   122,    68,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   206,    49,   108,     3,     4,     5,
       6,     7,     8,    47,    54,    11,    47,    13,    14,    15,
      16,    17,    47,    19,    47,    47,    22,    23,    38,    39,
      40,    41,    42,    43,    44,    47,    47,    58,    59,    47,
     172,   192,    44,    47,    65,    55,    56,    68,    44,   200,
      55,    56,    44,    58,    59,    30,    46,    53,    54,    62,
      65,    48,    51,    68,   206,    50,    46,   199,    12,    68,
      10,   203,    50,    36,    19,    56,   168,   209,     3,     4,
       5,     6,     7,     8,    57,    -1,    11,   167,    13,    14,
      15,    16,    17,   194,    19,    -1,    -1,    22,    23,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      -1,    -1,    -1,    -1,    50,    -1,    30,    31,    53,    55,
      56,    57,    58,    59,    60,    61,    -1,    -1,    64,    65,
      -1,    -1,    68,    -1,    70,    30,    31,    32,    33,    34,
      35,    55,    56,    -1,    58,    59,    60,    61,    -1,    -1,
      -1,    65,    -1,    -1,    68,    50,    -1,    -1,    -1,    -1,
      55,    56,    57,    58,    59,    60,    61,    -1,    -1,    64,
      65,    -1,    -1,    68,    -1,    70,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    55,    56,    57,    58,    59,    60,    61,    -1,    -1,
      64,    65,    -1,    -1,    68,    -1,    70,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    55,    56,    57,    58,    59,    60,    61,    -1,
      -1,    64,    65,    -1,    -1,    68,    -1,    70,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    30,    31,    32,
      33,    34,    35,    55,    56,    57,    58,    59,    60,    61,
      -1,    -1,    64,    65,    -1,    48,    68,    -1,    70,    -1,
      -1,    -1,    55,    56,    57,    58,    59,    60,    61,    -1,
      -1,    64,    65,    -1,    -1,    68,    -1,    70,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    58,    59,    60,    61,
      -1,    -1,    64,    65,    -1,    -1,    68,    -1,    70,    55,
      56,    -1,    58,    59,    60,    61,    -1,    -1,    64,    65,
      -1,    -1,    68,    30,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      -1,    58,    59,    60,    61,    -1,    -1,    -1,    65,    -1,
      -1,    68,    38,    39,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    63,    64,    -1,
      66,    -1,    -1,    -1,    70,    38,    39,    40,    41,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    58,    -1,    -1,    -1,    -1,
      63,    64,    -1,    66,    -1,    -1,    -1,    70
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    73,     0,     3,     4,     5,     6,     7,    17,    74,
      75,    77,    81,    77,    44,    79,    80,    49,    51,    46,
      47,    16,    50,    76,    77,    82,    38,    55,    94,    44,
      80,    77,    53,    83,    85,    44,    46,    50,    38,    52,
       8,    11,    13,    14,    15,    16,    17,    19,    22,    23,
      44,    54,    77,    78,    84,    85,    86,    87,    88,    97,
      98,    99,   100,   101,   102,   103,   108,   109,   110,   111,
      76,    85,    49,    49,    44,    38,    39,    40,    41,    42,
      43,    44,    55,    56,    91,    92,    95,    96,    38,    39,
      40,    41,    49,    55,    56,    57,    58,    63,    64,    66,
      70,    93,    98,   103,   107,   112,   113,    77,    16,    77,
      49,    49,    51,    44,    89,    90,    47,    84,    86,    47,
      47,    36,    37,    62,    47,    47,    47,    47,    47,    47,
      44,   107,   107,    38,    39,    38,    39,   107,    30,    31,
      32,    33,    34,    35,    55,    56,    57,    58,    59,    60,
      61,    64,    65,    68,    70,   107,    77,    44,    97,    98,
      42,    43,   104,   105,   106,   107,   107,    30,    46,    94,
      94,   107,    50,    50,    50,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,    48,    50,    46,    52,    91,    90,    85,    12,
      48,   107,   104,    10,    85,   107,    48,    85,    97,    50,
      85
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    72,    73,    73,    73,    74,    75,    75,    76,    76,
      77,    77,    77,    77,    77,    78,    78,    78,    78,    79,
      79,    80,    80,    81,    81,    82,    82,    83,    84,    85,
      85,    86,    86,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    88,    89,    89,    90,    90,    91,    91,    92,
      92,    92,    92,    92,    92,    93,    93,    93,    93,    94,
      94,    95,    95,    95,    96,    96,    96,    97,    98,    98,
      99,    99,    99,   100,   100,   101,   102,   103,   104,   104,
     105,   105,   106,   106,   106,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   108,   108,   108,
     109,   109,   110,   111,   112,   112,   112,   112,   112,   112,
     112,   112,   113
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     3,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     3,     2,     2,     1,     3,
       1,     4,     1,     6,     5,     4,     2,     1,     1,     2,
       3,     2,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     1,     2,     2,     1,     2,     3,     1,     4,
       2,     1,     1,     2,     2,     3,     3,     4,     3,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     5,     1,     1,     1,
       5,     7,     9,     6,     1,     1,     1,     1,     1,     1,
       1,     1,     2
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
#line 157 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = NULL; arvore = (yyval.nodo);}
#line 1522 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 158 "parser.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].nodo) == NULL){ (yyval.nodo) = (yyvsp[0].nodo); arvore = (yyvsp[0].nodo);} else{ insere_filho((yyvsp[-1].nodo),(yyvsp[0].nodo)); (yyval.nodo)=(yyvsp[0].nodo); } }
#line 1528 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 159 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-1].nodo);}
#line 1534 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 161 "parser.y" /* yacc.c:1646  */
    { libera_val((yyvsp[0].valor_lexico));tabelas.atualizaTipoTamanho((yyvsp[-2].tipo));}
#line 1540 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 165 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = (yyvsp[0].tipo);}
#line 1546 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 166 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = (yyvsp[0].tipo);}
#line 1552 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 167 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) =(yyvsp[0].tipo);}
#line 1558 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 168 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) =(yyvsp[0].tipo);}
#line 1564 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 170 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = ID_INT;}
#line 1570 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 171 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = ID_FLOAT;}
#line 1576 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 172 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = ID_CHAR;}
#line 1582 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 173 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = ID_BOOL;}
#line 1588 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 174 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = ID_STRING;}
#line 1594 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 176 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = (yyvsp[0].tipo);}
#line 1600 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 177 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = (yyvsp[0].tipo);}
#line 1606 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 178 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = (yyvsp[0].tipo);}
#line 1612 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 179 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo) = (yyvsp[0].tipo);}
#line 1618 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 183 "parser.y" /* yacc.c:1646  */
    {tabelas.insereSimboloVet(get_line_number(),NAT_VET,(yyvsp[-3].valor_lexico),INDEF,(yyvsp[-1].nodo)->valor_lexico->tk_value.vInt);libera_val((yyvsp[-3].valor_lexico)); libera_val((yyvsp[-2].valor_lexico)); libera((yyvsp[-1].nodo));libera_val((yyvsp[0].valor_lexico));}
#line 1624 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 184 "parser.y" /* yacc.c:1646  */
    {tabelas.insereSimboloNonVet(get_line_number(),NAT_VAR,(yyvsp[0].valor_lexico),INDEF);libera_val((yyvsp[0].valor_lexico));}
#line 1630 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 186 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo( (yyvsp[0].nodo),(yyvsp[-4].valor_lexico)); libera_val((yyvsp[-3].valor_lexico)); libera_val((yyvsp[-1].valor_lexico)); }
#line 1636 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 187 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo( (yyvsp[0].nodo), (yyvsp[-3].valor_lexico)); libera_val((yyvsp[-2].valor_lexico)); libera_val((yyvsp[-1].valor_lexico)); }
#line 1642 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 189 "parser.y" /* yacc.c:1646  */
    {libera_val((yyvsp[-2].valor_lexico)); libera_val((yyvsp[0].valor_lexico)); }
#line 1648 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 190 "parser.y" /* yacc.c:1646  */
    {libera_val((yyvsp[0].valor_lexico));}
#line 1654 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 192 "parser.y" /* yacc.c:1646  */
    {tabelas.insereContexto();libera_val((yyvsp[0].valor_lexico));}
#line 1660 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 193 "parser.y" /* yacc.c:1646  */
    {libera_val((yyvsp[0].valor_lexico));tabelas.popContexto();}
#line 1666 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 194 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) =NULL; }
#line 1672 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 195 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[-1].nodo);}
#line 1678 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 198 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[-1].nodo); (yyval.nodo) = insere_filho((yyval.nodo),(yyvsp[0].nodo)); }
#line 1684 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 199 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); }
#line 1690 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 201 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = NULL; libera_val((yyvsp[0].valor_lexico));}
#line 1696 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 202 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-1].nodo); libera_val((yyvsp[0].valor_lexico));}
#line 1702 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 203 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-1].nodo); libera_val((yyvsp[0].valor_lexico));}
#line 1708 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 204 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-1].nodo); libera_val((yyvsp[0].valor_lexico));}
#line 1714 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 205 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-1].nodo); libera_val((yyvsp[0].valor_lexico));}
#line 1720 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 206 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-1].nodo); libera_val((yyvsp[0].valor_lexico));}
#line 1726 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 207 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-1].nodo); libera_val((yyvsp[0].valor_lexico));}
#line 1732 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 208 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-1].nodo); libera_val((yyvsp[0].valor_lexico));}
#line 1738 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 209 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-1].nodo); libera_val((yyvsp[0].valor_lexico));}
#line 1744 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 211 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo);tabelas.atualizaTipoTamanho((yyvsp[-1].tipo));}
#line 1750 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 213 "parser.y" /* yacc.c:1646  */
    {libera_val((yyvsp[-1].valor_lexico)); (yyval.nodo) = insere_filho((yyvsp[-2].nodo),(yyvsp[0].nodo));}
#line 1756 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 214 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo); }
#line 1762 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 216 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); (yyval.nodo)= insere_filho((yyval.nodo),insere_nodo(NULL,(yyvsp[-2].valor_lexico)));(yyval.nodo)= insere_filho((yyval.nodo),(yyvsp[0].nodo));tabelas.insereSimboloNonVet(get_line_number(),NAT_VAR,(yyvsp[-2].valor_lexico),INDEF);}
#line 1768 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 217 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = NULL;tabelas.insereSimboloNonVet(get_line_number(),NAT_VAR,(yyvsp[0].valor_lexico),INDEF); libera_val((yyvsp[0].valor_lexico));}
#line 1774 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 219 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);}
#line 1780 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 220 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 1786 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 222 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);}
#line 1792 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 223 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);}
#line 1798 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 224 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 1804 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 225 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 1810 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 226 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 1816 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 227 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 1822 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 229 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 1828 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 230 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 1834 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 231 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 1840 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 232 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 1846 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 234 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico)); libera_val((yyvsp[-1].valor_lexico));}
#line 1852 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 235 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 1858 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 237 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,inverte_sinal((yyvsp[0].valor_lexico))); libera_val((yyvsp[-1].valor_lexico));}
#line 1864 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 238 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 1870 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 239 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico)); libera_val((yyvsp[-1].valor_lexico));}
#line 1876 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 241 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,inverte_sinal((yyvsp[0].valor_lexico)));libera_val((yyvsp[-1].valor_lexico));}
#line 1882 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 242 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 1888 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 243 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico)); libera_val((yyvsp[-1].valor_lexico));}
#line 1894 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 245 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));}
#line 1900 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 247 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo)= insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 1906 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 248 "parser.y" /* yacc.c:1646  */
    { libera_val((yyvsp[-2].valor_lexico));libera_val((yyvsp[0].valor_lexico));
(yyval.nodo) = insere_nodo(NULL,geraVal(TIPO_VET,NOT_LIT,get_line_number(),(char*)"[]")); insere_filho((yyval.nodo),insere_nodo(NULL,(yyvsp[-3].valor_lexico))); insere_filho((yyval.nodo),(yyvsp[-1].nodo));}
#line 1913 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 251 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo((yyvsp[0].nodo),geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"return"));}
#line 1919 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 252 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"break"));}
#line 1925 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 253 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(NULL,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"continue"));}
#line 1931 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 255 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo(insere_nodo(NULL,(yyvsp[0].valor_lexico)),geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"input"));}
#line 1937 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 256 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = insere_nodo((yyvsp[0].nodo),geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"output"));}
#line 1943 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 258 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo((yyvsp[-2].nodo),(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[0].nodo)); }
#line 1949 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 260 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo((yyvsp[-2].nodo),(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[0].nodo)); }
#line 1955 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 262 "parser.y" /* yacc.c:1646  */
    { libera_val((yyvsp[-2].valor_lexico)); libera_val((yyvsp[0].valor_lexico)); (yyval.nodo) = insere_nodo_tipo((yyvsp[-1].nodo),(yyvsp[-3].valor_lexico),NO_FUN_CALL);}
#line 1961 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 264 "parser.y" /* yacc.c:1646  */
    { libera_val((yyvsp[-1].valor_lexico)); (yyval.nodo) = insere_filho((yyvsp[-2].nodo),(yyvsp[0].nodo)); }
#line 1967 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 265 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);}
#line 1973 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 267 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo)=NULL;}
#line 1979 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 268 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo)=(yyvsp[0].nodo);}
#line 1985 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 270 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 1991 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 271 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 1997 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 272 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[0].nodo);}
#line 2003 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 276 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2009 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 277 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2015 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 278 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2021 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 279 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[-1].nodo); libera_val((yyvsp[-2].valor_lexico)); libera_val((yyvsp[0].valor_lexico));}
#line 2027 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 280 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2033 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 281 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));}
#line 2039 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 282 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));}
#line 2045 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 283 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));}
#line 2051 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 284 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));}
#line 2057 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 285 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));}
#line 2063 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 286 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));}
#line 2069 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 287 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));}
#line 2075 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 288 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));}
#line 2081 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 289 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));}
#line 2087 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 290 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));}
#line 2093 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 291 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));}
#line 2099 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 292 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));}
#line 2105 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 293 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));}
#line 2111 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 294 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));}
#line 2117 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 295 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));}
#line 2123 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 296 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[-1].valor_lexico)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));}
#line 2129 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 297 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,geraVal(TIPO_CHAR_ESP,NOT_LIT,get_line_number(),(char*)"?:")); insere_filho((yyval.nodo),(yyvsp[-4].nodo)); insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo));libera_val((yyvsp[-3].valor_lexico));libera_val((yyvsp[-1].valor_lexico));}
#line 2135 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 299 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2141 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 300 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2147 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 301 "parser.y" /* yacc.c:1646  */
    {(yyval.nodo) = (yyvsp[0].nodo);}
#line 2153 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 303 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo_tipo(NULL,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"if"),NO_IF); (yyval.nodo)= insere_filho((yyval.nodo),(yyvsp[-2].nodo)); (yyval.nodo)= insere_filho((yyval.nodo),(yyvsp[0].nodo)); libera_val((yyvsp[-3].valor_lexico)); libera_val((yyvsp[-1].valor_lexico));}
#line 2159 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 304 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo_tipo(NULL,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"if"),NO_IF); (yyval.nodo) = insere_filho((yyval.nodo),(yyvsp[-4].nodo)); (yyval.nodo) = insere_filho((yyval.nodo),(yyvsp[-2].nodo)); insere_filho((yyval.nodo),(yyvsp[0].nodo)); libera_val((yyvsp[-5].valor_lexico)); libera_val((yyvsp[-3].valor_lexico));}
#line 2165 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 306 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo_tipo(NULL,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"for"),NO_FOR); (yyval.nodo) = insere_filho((yyval.nodo),(yyvsp[-6].nodo)); (yyval.nodo) = insere_filho((yyval.nodo),(yyvsp[-4].nodo)); (yyval.nodo) = insere_filho((yyval.nodo),(yyvsp[-2].nodo)); (yyval.nodo) = insere_filho((yyval.nodo),(yyvsp[0].nodo)); libera_val((yyvsp[-3].valor_lexico)); libera_val((yyvsp[-5].valor_lexico)); libera_val ((yyvsp[-7].valor_lexico));libera_val((yyvsp[-1].valor_lexico));}
#line 2171 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 308 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) =  insere_nodo_tipo(NULL,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"while"),NO_WHILE); (yyval.nodo) = insere_filho((yyval.nodo),(yyvsp[-3].nodo)); (yyval.nodo) = insere_filho((yyval.nodo),(yyvsp[0].nodo)); libera_val((yyvsp[-4].valor_lexico)); libera_val((yyvsp[-2].valor_lexico));}
#line 2177 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 310 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 2183 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 311 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 2189 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 312 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 2195 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 313 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 2201 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 314 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 2207 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 315 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 2213 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 316 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 2219 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 317 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = insere_nodo(NULL,(yyvsp[0].valor_lexico));}
#line 2225 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 318 "parser.y" /* yacc.c:1646  */
    { (yyval.nodo) = (yyvsp[-1].nodo); insere_filho((yyval.nodo),(yyvsp[0].nodo));}
#line 2231 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2235 "parser.tab.c" /* yacc.c:1646  */
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
#line 319 "parser.y" /* yacc.c:1906  */


int yyerror(char const *s){
	printf("%s at line %d UNEXPECTED token \"%s\" \n", s,get_line_number(), yytext);
	return 1;
}
