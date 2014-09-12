/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse ttlyyparse
#define yylex   ttlyylex
#define yyerror ttlyyerror
#define yylval  ttlyylval
#define yychar  ttlyychar
#define yydebug ttlyydebug
#define yynerrs ttlyynerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     __TTL_PUNCT_BEGIN = 258,
     _CARET_WS = 259,
     _CARET_NOWS = 260,
     _CARET_CARET = 261,
     _COLON = 262,
     _COMMA = 263,
     _DOT_WS = 264,
     _LBRA = 265,
     _LBRA_TOP_TRIG = 266,
     _LPAR = 267,
     _LSQBRA = 268,
     _LSQBRA_RSQBRA = 269,
     _RBRA = 270,
     _RPAR = 271,
     _RSQBRA = 272,
     _SEMI = 273,
     _EQ = 274,
     _EQ_TOP_TRIG = 275,
     _EQ_GT = 276,
     _LT_EQ = 277,
     _BANG = 278,
     _AT_a_L = 279,
     _AT_base_L = 280,
     _AT_has_L = 281,
     _AT_is_L = 282,
     _AT_keywords_L = 283,
     _AT_of_L = 284,
     _AT_prefix_L = 285,
     _AT_this_L = 286,
     _MINUS_INF_L = 287,
     INF_L = 288,
     NaN_L = 289,
     false_L = 290,
     true_L = 291,
     __TTL_PUNCT_END = 292,
     __TTL_NONPUNCT_START = 293,
     TURTLE_INTEGER = 294,
     TURTLE_DECIMAL = 295,
     TURTLE_DOUBLE = 296,
     TURTLE_STRING = 297,
     KEYWORD = 298,
     LANGTAG = 299,
     QNAME = 300,
     QNAME_NS = 301,
     VARIABLE = 302,
     BLANK_NODE_LABEL = 303,
     Q_IRI_REF = 304,
     _GARBAGE_BEFORE_DOT_WS = 305,
     TTL_RECOVERABLE_ERROR = 306,
     __TTL_NONPUNCT_END = 307
   };
#endif
/* Tokens.  */
#define __TTL_PUNCT_BEGIN 258
#define _CARET_WS 259
#define _CARET_NOWS 260
#define _CARET_CARET 261
#define _COLON 262
#define _COMMA 263
#define _DOT_WS 264
#define _LBRA 265
#define _LBRA_TOP_TRIG 266
#define _LPAR 267
#define _LSQBRA 268
#define _LSQBRA_RSQBRA 269
#define _RBRA 270
#define _RPAR 271
#define _RSQBRA 272
#define _SEMI 273
#define _EQ 274
#define _EQ_TOP_TRIG 275
#define _EQ_GT 276
#define _LT_EQ 277
#define _BANG 278
#define _AT_a_L 279
#define _AT_base_L 280
#define _AT_has_L 281
#define _AT_is_L 282
#define _AT_keywords_L 283
#define _AT_of_L 284
#define _AT_prefix_L 285
#define _AT_this_L 286
#define _MINUS_INF_L 287
#define INF_L 288
#define NaN_L 289
#define false_L 290
#define true_L 291
#define __TTL_PUNCT_END 292
#define __TTL_NONPUNCT_START 293
#define TURTLE_INTEGER 294
#define TURTLE_DECIMAL 295
#define TURTLE_DOUBLE 296
#define TURTLE_STRING 297
#define KEYWORD 298
#define LANGTAG 299
#define QNAME 300
#define QNAME_NS 301
#define VARIABLE 302
#define BLANK_NODE_LABEL 303
#define Q_IRI_REF 304
#define _GARBAGE_BEFORE_DOT_WS 305
#define TTL_RECOVERABLE_ERROR 306
#define __TTL_NONPUNCT_END 307




/* Copy the first part of user declarations.  */
#line 31 "./turtle_p.y"


#include "libutil.h"
#include "sqlnode.h"
#include "sqlparext.h"
#include "rdf_core.h"
#include "xmltree.h"
/*#include "langfunc.h"*/

#ifdef DEBUG
#define ttlyyerror(ttlp_arg,yyscan,strg) ttlyyerror_impl_1(ttlp_arg, NULL, yystate, yyssa, yyssp, (strg))
#define ttlyyerror_action(strg) ttlyyerror_impl_1(ttlp_arg, NULL, yystate, yyssa, yyssp, (strg))
#else
#define ttlyyerror(ttlp_arg,yyscan,strg) ttlyyerror_impl(ttlp_arg, NULL, (strg))
#define ttlyyerror_action(strg) ttlyyerror_impl(ttlp_arg, NULL, (strg))
#endif

#define TTLYYERROR_ACTION_COND(flag,strg) do { \
    if (!((flag) & ttlp_arg->ttlp_flags)) \
      ttlyyerror_action(strg); \
    else \
      tf_report (ttlp_arg->ttlp_tf, 'W', NULL, NULL, (strg)); \
  } while (0)


extern int ttlyylex (void *yylval_param, ttlp_t *ttlp_arg, yyscan_t yyscanner);


#ifdef TTLDEBUG
#define YYDEBUG 1
#endif

#define TTLP_URI_RESOLVE_IF_NEEDED(rel) \
  do { \
    if ((NULL != ttlp_arg->ttlp_tf->tf_base_uri) && strncmp ((rel), "http://", 7)) \
      (rel) = ttlp_uri_resolve (ttlp_arg, (rel)); \
    } while (0)



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 72 "./turtle_p.y"
{
  caddr_t box;
  ptrlong token_type;
  void *nothing;
  ptrlong lexlineno;
}
/* Line 193 of yacc.c.  */
#line 255 "turtle_p.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 268 "turtle_p.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   635

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  166
/* YYNRULES -- Number of states.  */
#define YYNSTATES  226

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     8,    13,    16,    19,    20,
      24,    26,    27,    33,    35,    38,    42,    46,    47,    49,
      52,    54,    57,    58,    64,    66,    69,    72,    74,    78,
      80,    82,    84,    86,    90,    91,    96,    98,    99,   103,
     104,   108,   109,   113,   114,   118,   120,   121,   126,   127,
     131,   132,   137,   138,   143,   146,   148,   152,   154,   156,
     158,   160,   162,   164,   165,   167,   169,   170,   174,   178,
     183,   185,   188,   191,   195,   197,   199,   203,   205,   207,
     209,   211,   215,   217,   219,   221,   223,   225,   228,   230,
     231,   235,   236,   240,   241,   245,   247,   249,   251,   255,
     257,   259,   261,   263,   265,   267,   269,   271,   273,   275,
     277,   278,   282,   283,   287,   291,   295,   297,   299,   301,
     303,   305,   307,   309,   312,   313,   318,   320,   322,   324,
     326,   328,   330,   332,   334,   336,   338,   340,   342,   344,
     346,   349,   353,   355,   359,   363,   367,   369,   371,   372,
     376,   377,   381,   382,   386,   387,   390,   394,   396,   397,
     401,   402,   405,   406,   410,   412,   414
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    -1,    54,    55,    -1,    -1,    28,    56,
      81,    61,    -1,    59,    61,    -1,    60,    61,    -1,    -1,
     117,    57,    63,    -1,    76,    -1,    -1,    11,    58,    66,
      62,    61,    -1,     1,    -1,    25,    49,    -1,    30,    46,
      49,    -1,    30,     7,    49,    -1,    -1,     9,    -1,     9,
      15,    -1,    15,    -1,    87,     9,    -1,    -1,    65,    64,
      66,    62,    61,    -1,    11,    -1,    20,    11,    -1,    20,
       1,    -1,    67,    -1,    66,     9,    67,    -1,    59,    -1,
      60,    -1,    69,    -1,    69,    -1,    68,     9,    69,    -1,
      -1,   117,    70,    84,    83,    -1,    71,    -1,    -1,    47,
      72,    87,    -1,    -1,   105,    73,    87,    -1,    -1,   101,
      74,    87,    -1,    -1,    51,    75,    87,    -1,    50,    -1,
      -1,    47,    77,    87,     9,    -1,    -1,   105,    78,    86,
      -1,    -1,   101,    79,    87,     9,    -1,    -1,    51,    80,
      87,     9,    -1,    50,     9,    -1,    82,    -1,    81,     8,
      82,    -1,    45,    -1,    24,    -1,    26,    -1,    27,    -1,
      29,    -1,    31,    -1,    -1,    18,    -1,    89,    -1,    -1,
      10,    85,   115,    -1,    88,    83,     9,    -1,    88,    83,
      50,     9,    -1,     9,    -1,    50,     9,    -1,    89,    83,
      -1,    89,    83,    50,    -1,    50,    -1,    91,    -1,    88,
      18,    90,    -1,     8,    -1,    18,    -1,     1,    -1,    91,
      -1,    89,    18,    90,    -1,     8,    -1,    18,    -1,     9,
      -1,     1,    -1,    91,    -1,    91,    50,    -1,    50,    -1,
      -1,    97,    92,    95,    -1,    -1,   100,    93,    95,    -1,
      -1,    51,    94,    95,    -1,    96,    -1,    50,    -1,   104,
      -1,    96,     8,   103,    -1,     8,    -1,    18,    -1,     9,
      -1,     1,    -1,   117,    -1,    47,    -1,    24,    -1,    19,
      -1,    21,    -1,    14,    -1,    48,    -1,    -1,    13,    98,
     109,    -1,    -1,    12,    99,   112,    -1,    27,   117,    29,
      -1,    27,    47,    29,    -1,    22,    -1,    36,    -1,    35,
      -1,    39,    -1,    40,    -1,    41,    -1,    42,    -1,    42,
      44,    -1,    -1,    42,   102,     6,   117,    -1,   104,    -1,
      50,    -1,   117,    -1,    47,    -1,   105,    -1,    36,    -1,
      35,    -1,    39,    -1,    40,    -1,    41,    -1,    34,    -1,
      33,    -1,    32,    -1,    42,    -1,    42,    44,    -1,    42,
       6,   117,    -1,    51,    -1,    42,     6,    51,    -1,    51,
       6,   117,    -1,    51,     6,    51,    -1,    48,    -1,    14,
      -1,    -1,    13,   106,   109,    -1,    -1,    12,   107,   112,
      -1,    -1,    10,   108,   115,    -1,    -1,   110,   111,    -1,
      89,    83,    17,    -1,    17,    -1,    -1,   113,   114,    16,
      -1,    -1,   114,   104,    -1,    -1,   116,    68,    15,    -1,
      49,    -1,    45,    -1,    46,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   154,   154,   156,   160,   160,   161,   162,   163,   163,
     167,   168,   168,   174,   178,   186,   208,   215,   217,   221,
     222,   226,   227,   227,   239,   240,   241,   245,   246,   250,
     251,   252,   256,   257,   261,   261,   265,   269,   269,   272,
     272,   275,   275,   279,   279,   282,   286,   286,   289,   289,
     292,   292,   296,   296,   299,   303,   304,   308,   309,   310,
     311,   312,   313,   316,   318,   322,   324,   323,   330,   331,
     332,   333,   337,   338,   339,   343,   344,   345,   346,   347,
     351,   352,   353,   354,   355,   356,   360,   361,   362,   367,
     366,   370,   369,   373,   373,   380,   381,   385,   386,   387,
     388,   389,   390,   394,   395,   396,   397,   398,   399,   406,
     420,   419,   432,   431,   446,   447,   448,   452,   453,   454,
     455,   456,   457,   458,   459,   459,   465,   466,   470,   475,
     479,   483,   485,   487,   491,   495,   499,   505,   511,   517,
     521,   527,   534,   535,   538,   541,   545,   557,   564,   563,
     575,   574,   586,   585,   600,   600,   610,   616,   625,   625,
     659,   660,   679,   679,   699,   706,   714
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "__TTL_PUNCT_BEGIN", "_CARET_WS",
  "_CARET_NOWS", "_CARET_CARET", "_COLON", "_COMMA", "_DOT_WS", "_LBRA",
  "_LBRA_TOP_TRIG", "_LPAR", "_LSQBRA", "_LSQBRA_RSQBRA", "_RBRA", "_RPAR",
  "_RSQBRA", "_SEMI", "_EQ", "_EQ_TOP_TRIG", "_EQ_GT", "_LT_EQ", "_BANG",
  "_AT_a_L", "_AT_base_L", "_AT_has_L", "_AT_is_L", "_AT_keywords_L",
  "_AT_of_L", "_AT_prefix_L", "_AT_this_L", "_MINUS_INF_L", "INF_L",
  "NaN_L", "false_L", "true_L", "__TTL_PUNCT_END", "__TTL_NONPUNCT_START",
  "TURTLE_INTEGER", "TURTLE_DECIMAL", "TURTLE_DOUBLE", "TURTLE_STRING",
  "KEYWORD", "LANGTAG", "QNAME", "QNAME_NS", "VARIABLE",
  "BLANK_NODE_LABEL", "Q_IRI_REF", "_GARBAGE_BEFORE_DOT_WS",
  "TTL_RECOVERABLE_ERROR", "__TTL_NONPUNCT_END", "$accept", "turtledoc",
  "clause", "@1", "@2", "@3", "base_clause", "prefix_clause", "dot_opt",
  "trig_group_end", "trig_block_or_predicate_object_list", "@4",
  "opt_eq_lbra", "base_or_prefix_or_inner_triple_clauses",
  "base_or_prefix_or_inner_triple_clause", "inner_triple_clauses",
  "inner_triple_clause", "@5", "triple_clause_with_nonq_subj", "@6", "@7",
  "@8", "@9", "top_triple_clause_with_nonq_subj", "@10", "@11", "@12",
  "@13", "keyword_list", "keyword", "semicolon_opt",
  "inner_predicate_object_list", "@14",
  "top_blank_predicate_object_list_or_garbage_with_dot",
  "predicate_object_list_or_garbage", "top_blank_predicate_object_list",
  "predicate_object_list", "verb_and_object_list_or_garbage",
  "verb_and_object_list", "@15", "@16", "@17", "object_list_or_garbage",
  "object_list", "verb", "@18", "@19", "rev_verb", "literal_subject",
  "@20", "object_or_garbage", "object", "blank", "@21", "@22", "@23",
  "blank_block_subj", "@24", "blank_block_subj_tail", "blank_block_seq",
  "@25", "items", "blank_block_formula", "@26", "q_complete", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    54,    56,    55,    55,    55,    57,    55,
      55,    58,    55,    55,    59,    60,    60,    61,    61,    62,
      62,    63,    64,    63,    65,    65,    65,    66,    66,    67,
      67,    67,    68,    68,    70,    69,    69,    72,    71,    73,
      71,    74,    71,    75,    71,    71,    77,    76,    78,    76,
      79,    76,    80,    76,    76,    81,    81,    82,    82,    82,
      82,    82,    82,    83,    83,    84,    85,    84,    86,    86,
      86,    86,    87,    87,    87,    88,    88,    88,    88,    88,
      89,    89,    89,    89,    89,    89,    90,    90,    90,    92,
      91,    93,    91,    94,    91,    95,    95,    96,    96,    96,
      96,    96,    96,    97,    97,    97,    97,    97,    97,    97,
      98,    97,    99,    97,   100,   100,   100,   101,   101,   101,
     101,   101,   101,   101,   102,   101,   103,   103,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   105,   105,   106,   105,
     107,   105,   108,   105,   110,   109,   111,   111,   113,   112,
     114,   114,   116,   115,   117,   117,   117
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     4,     2,     2,     0,     3,
       1,     0,     5,     1,     2,     3,     3,     0,     1,     2,
       1,     2,     0,     5,     1,     2,     2,     1,     3,     1,
       1,     1,     1,     3,     0,     4,     1,     0,     3,     0,
       3,     0,     3,     0,     3,     1,     0,     4,     0,     3,
       0,     4,     0,     4,     2,     1,     3,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     0,     3,     3,     4,
       1,     2,     2,     3,     1,     1,     3,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     2,     1,     0,
       3,     0,     3,     0,     3,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     3,     0,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     2,     0,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     1,     3,     3,     3,     1,     1,     0,     3,
       0,     3,     0,     3,     0,     2,     3,     1,     0,     3,
       0,     2,     0,     3,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    13,   152,    11,   150,   148,   147,     0,
       4,     0,   118,   117,   119,   120,   121,   122,   165,   166,
      46,   146,   164,     0,    52,     3,    17,    17,    10,    50,
      48,     8,   162,     0,   158,   154,    14,     0,     0,     0,
     123,     0,     0,    54,     0,    18,     6,     7,     0,     0,
       0,   153,     0,    37,    45,    43,    29,    30,     0,    27,
      31,    36,    41,    39,    34,   151,   160,   149,     0,    58,
      59,    60,    61,    62,    57,    17,    55,    16,    15,     0,
      85,    82,    84,   112,   110,   108,    83,   106,   107,   116,
     105,     0,   104,   109,    74,    93,     0,    63,    80,    89,
      91,   103,     0,     0,    79,    77,    70,    78,     0,    49,
      63,    75,    24,     0,     9,    22,     0,     0,    32,     0,
       0,     0,    20,    17,     0,     0,     0,     0,   157,    63,
     155,     0,     5,   125,   158,   154,     0,     0,     0,    47,
      64,    72,     0,     0,    53,    51,    71,    64,     0,    26,
      25,     0,    21,     0,   163,    38,    44,    19,    28,    12,
      42,    40,    66,    63,    65,   159,   138,   137,   136,   132,
     131,   133,   134,   135,   139,   129,   142,   161,   130,   128,
       0,    56,   113,   111,   115,   114,   102,    99,   101,   100,
      96,    94,    95,    97,    88,    81,    86,    73,    90,    92,
      76,    68,     0,     0,    33,   162,    64,    35,     0,     0,
     140,     0,   156,     0,    87,    69,    17,    67,   143,   141,
     145,   144,   127,    98,   126,    23
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    25,    37,    50,    33,    56,    57,    46,   123,
     114,   151,   115,    58,    59,   117,    60,   126,    61,   119,
     125,   124,   120,    28,    42,    49,    48,    44,    75,    76,
     141,   163,   205,   109,    96,   110,    97,   195,    98,   142,
     143,   138,   191,   192,    99,   135,   134,   100,    62,    41,
     223,   193,    63,    35,    34,    32,    67,    68,   130,    65,
      66,   127,    51,    52,   101
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -123
static const yytype_int16 yypact[] =
{
    -123,   135,  -123,  -123,  -123,  -123,  -123,  -123,  -123,   -30,
    -123,     6,  -123,  -123,  -123,  -123,  -123,     9,  -123,  -123,
    -123,  -123,  -123,     2,  -123,  -123,    19,    19,  -123,  -123,
    -123,  -123,  -123,   537,  -123,  -123,  -123,    31,   -13,    -5,
    -123,    50,    21,  -123,    21,  -123,  -123,  -123,    21,   288,
     237,  -123,   230,  -123,  -123,  -123,  -123,  -123,    11,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,   339,  -123,
    -123,  -123,  -123,  -123,  -123,    38,  -123,  -123,  -123,    -8,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,    53,  -123,  -123,  -123,  -123,    66,    41,  -123,  -123,
    -123,  -123,    71,    74,  -123,  -123,  -123,  -123,    75,  -123,
      67,  -123,  -123,    13,  -123,  -123,    79,    16,  -123,    21,
      21,   413,  -123,    19,    21,    21,   388,   455,  -123,    41,
    -123,    31,  -123,  -123,  -123,  -123,    60,    63,   186,  -123,
     584,    43,   186,   186,  -123,  -123,  -123,   584,     0,  -123,
    -123,   537,  -123,   230,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,    77,    78,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,  -123,    10,  -123,    97,  -123,  -123,  -123,
      87,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,    98,  -123,  -123,  -123,    57,  -123,  -123,  -123,
    -123,  -123,    99,    11,  -123,  -123,  -123,  -123,   544,   -28,
    -123,    28,  -123,   495,  -123,  -123,    19,  -123,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,  -123
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -123,  -123,  -123,  -123,  -123,  -123,   108,   109,   -26,   -92,
    -123,  -123,  -123,   -39,    -7,  -123,   -48,  -123,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,   -18,
    -102,  -123,  -123,  -123,   -38,  -123,   -61,   -32,   -46,  -123,
    -123,  -123,   -79,  -123,  -123,  -123,  -123,  -123,   115,  -123,
    -123,  -122,     1,  -123,  -123,  -123,   -17,  -123,  -123,   -15,
    -123,  -123,   -88,  -123,    -1
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -125
static const yytype_int16 yytable[] =
{
      31,    47,    30,   111,   118,   177,   102,   129,   148,   201,
     103,    43,   116,    38,   149,  -124,   209,    18,    19,    36,
     121,    22,    80,   218,   150,   153,   122,   180,    45,    81,
      82,   154,    64,    83,    84,    85,    77,    18,    19,    86,
      87,    22,    88,    89,    78,    90,   131,    45,    91,   132,
     202,    64,    39,    40,   210,    69,    79,    70,    71,   140,
      72,   207,    73,   198,   199,   164,    18,    19,    92,    93,
      22,    94,    95,    18,    19,   139,    74,    22,   133,   220,
     144,   155,   156,   145,   146,   147,   160,   161,   152,   184,
     137,   224,   185,   197,   196,   206,   208,   159,    18,    19,
     136,   196,    22,   211,   212,   204,   213,   214,   215,    26,
      27,   216,   203,   181,   158,   200,    29,   217,   183,   182,
      64,     0,     0,     0,     0,     0,   179,     0,   178,     0,
       0,     0,     0,     0,     0,     2,     3,   179,     0,   178,
       0,   179,   179,   178,   178,     4,     5,     6,     7,     8,
      64,     0,    64,     0,     0,     0,     0,     0,     0,     0,
       9,     0,   196,    10,     0,    11,     0,     0,     0,     0,
      12,    13,     0,     0,    14,    15,    16,    17,     0,     0,
      18,    19,    20,    21,    22,    23,    24,   186,     0,     0,
     225,     0,     0,     0,   187,   188,     4,     0,     6,     7,
       8,     0,     0,     0,   189,     0,     0,     0,   219,     0,
     221,     0,   179,     0,   178,     0,     0,     0,   166,   167,
     168,   169,   170,     0,     0,   171,   172,   173,   174,     0,
       0,    18,    19,   175,    21,    22,   190,   176,    80,     0,
       4,     0,     6,     7,     8,    81,    82,     0,   112,    83,
      84,    85,     0,     0,     0,    86,    87,   113,    88,    89,
       0,    90,     0,     0,    91,    12,    13,     0,     0,    14,
      15,    16,    17,     0,     0,    18,    19,    53,    21,    22,
      54,    55,    18,    19,    92,    93,    22,    94,    95,   104,
       0,     0,     0,     0,     0,     0,   105,   106,     0,     0,
      83,    84,    85,     0,     0,     0,   107,    87,     0,    88,
      89,     0,    90,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,    19,    92,    93,    22,   108,    95,
      80,     0,     0,     0,     0,     0,     0,    81,    82,     0,
       0,    83,    84,    85,     0,     0,   128,    86,    87,     0,
      88,    89,     0,    90,     0,     0,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    18,    19,    92,    93,    22,    80,
      95,     0,     0,     0,     0,     0,    81,    82,   162,     0,
      83,    84,    85,     0,     0,     0,    86,    87,     0,    88,
      89,     0,    90,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     4,     0,     6,     7,     8,   157,     0,
       0,     0,     0,    18,    19,    92,    93,    22,     9,    95,
       0,     0,     0,    11,     0,     0,     0,     0,    12,    13,
       0,     0,    14,    15,    16,    17,     0,     0,    18,    19,
      53,    21,    22,    54,    55,     4,     0,     6,     7,     8,
       0,   165,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   166,   167,   168,
     169,   170,     0,     0,   171,   172,   173,   174,     0,     0,
      18,    19,   175,    21,    22,     4,   176,     6,     7,     8,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   166,   167,   168,
     169,   170,     0,     0,   171,   172,   173,   174,     0,     0,
      18,    19,   175,    21,    22,   222,   176,     4,     0,     6,
       7,     8,     0,     0,     0,     0,    83,    84,    85,     0,
       0,     0,     9,    87,     0,    88,    89,    11,    90,     0,
       0,    91,    12,    13,     0,     0,    14,    15,    16,    17,
       0,     0,    18,    19,    53,    21,    22,    54,    55,    18,
      19,    92,    93,    22,   194,    95,    83,    84,    85,     0,
       0,     0,     0,    87,     0,    88,    89,     0,    90,     0,
       0,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    18,
      19,    92,    93,    22,     0,    95
};

static const yytype_int16 yycheck[] =
{
       1,    27,     1,    49,    52,   127,    44,    68,   110,     9,
      48,     9,    50,     7,     1,     6,     6,    45,    46,    49,
       9,    49,     1,    51,    11,     9,    15,   129,     9,     8,
       9,    15,    33,    12,    13,    14,    49,    45,    46,    18,
      19,    49,    21,    22,    49,    24,     8,     9,    27,    75,
      50,    52,    46,    44,    44,    24,     6,    26,    27,    18,
      29,   163,    31,   142,   143,   126,    45,    46,    47,    48,
      49,    50,    51,    45,    46,     9,    45,    49,    79,    51,
       9,   119,   120,     9,     9,    18,   124,   125,     9,    29,
      91,   213,    29,    50,   140,    18,    18,   123,    45,    46,
      47,   147,    49,     6,    17,   153,     8,    50,     9,     1,
       1,   203,   151,   131,   121,   147,     1,   205,   135,   134,
     121,    -1,    -1,    -1,    -1,    -1,   127,    -1,   127,    -1,
      -1,    -1,    -1,    -1,    -1,     0,     1,   138,    -1,   138,
      -1,   142,   143,   142,   143,    10,    11,    12,    13,    14,
     151,    -1,   153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,   208,    28,    -1,    30,    -1,    -1,    -1,    -1,
      35,    36,    -1,    -1,    39,    40,    41,    42,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,     1,    -1,    -1,
     216,    -1,    -1,    -1,     8,     9,    10,    -1,    12,    13,
      14,    -1,    -1,    -1,    18,    -1,    -1,    -1,   209,    -1,
     211,    -1,   213,    -1,   213,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    -1,    -1,    39,    40,    41,    42,    -1,
      -1,    45,    46,    47,    48,    49,    50,    51,     1,    -1,
      10,    -1,    12,    13,    14,     8,     9,    -1,    11,    12,
      13,    14,    -1,    -1,    -1,    18,    19,    20,    21,    22,
      -1,    24,    -1,    -1,    27,    35,    36,    -1,    -1,    39,
      40,    41,    42,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    45,    46,    47,    48,    49,    50,    51,     1,
      -1,    -1,    -1,    -1,    -1,    -1,     8,     9,    -1,    -1,
      12,    13,    14,    -1,    -1,    -1,    18,    19,    -1,    21,
      22,    -1,    24,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
       1,    -1,    -1,    -1,    -1,    -1,    -1,     8,     9,    -1,
      -1,    12,    13,    14,    -1,    -1,    17,    18,    19,    -1,
      21,    22,    -1,    24,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,     1,
      51,    -1,    -1,    -1,    -1,    -1,     8,     9,    10,    -1,
      12,    13,    14,    -1,    -1,    -1,    18,    19,    -1,    21,
      22,    -1,    24,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    -1,    12,    13,    14,    15,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    25,    51,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    35,    36,
      -1,    -1,    39,    40,    41,    42,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    10,    -1,    12,    13,    14,
      -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,    42,    -1,    -1,
      45,    46,    47,    48,    49,    10,    51,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    -1,    -1,    39,    40,    41,    42,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    10,    -1,    12,
      13,    14,    -1,    -1,    -1,    -1,    12,    13,    14,    -1,
      -1,    -1,    25,    19,    -1,    21,    22,    30,    24,    -1,
      -1,    27,    35,    36,    -1,    -1,    39,    40,    41,    42,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    45,
      46,    47,    48,    49,    50,    51,    12,    13,    14,    -1,
      -1,    -1,    -1,    19,    -1,    21,    22,    -1,    24,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    -1,    51
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    54,     0,     1,    10,    11,    12,    13,    14,    25,
      28,    30,    35,    36,    39,    40,    41,    42,    45,    46,
      47,    48,    49,    50,    51,    55,    59,    60,    76,   101,
     105,   117,   108,    58,   107,   106,    49,    56,     7,    46,
      44,   102,    77,     9,    80,     9,    61,    61,    79,    78,
      57,   115,   116,    47,    50,    51,    59,    60,    66,    67,
      69,    71,   101,   105,   117,   112,   113,   109,   110,    24,
      26,    27,    29,    31,    45,    81,    82,    49,    49,     6,
       1,     8,     9,    12,    13,    14,    18,    19,    21,    22,
      24,    27,    47,    48,    50,    51,    87,    89,    91,    97,
     100,   117,    87,    87,     1,     8,     9,    18,    50,    86,
      88,    91,    11,    20,    63,    65,    87,    68,    69,    72,
      75,     9,    15,    62,    74,    73,    70,   114,    17,    89,
     111,     8,    61,   117,    99,    98,    47,   117,    94,     9,
      18,    83,    92,    93,     9,     9,     9,    18,    83,     1,
      11,    64,     9,     9,    15,    87,    87,    15,    67,    61,
      87,    87,    10,    84,    89,    16,    32,    33,    34,    35,
      36,    39,    40,    41,    42,    47,    51,   104,   105,   117,
      83,    82,   112,   109,    29,    29,     1,     8,     9,    18,
      50,    95,    96,   104,    50,    90,    91,    50,    95,    95,
      90,     9,    50,    66,    69,    85,    18,    83,    18,     6,
      44,     6,    17,     8,    50,     9,    62,   115,    51,   117,
      51,   117,    50,   103,   104,    61
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (ttlp_arg, yyscanner, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, ttlp_arg, yyscanner)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, ttlp_arg, yyscanner); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, ttlp_t * ttlp_arg, yyscan_t yyscanner)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, ttlp_arg, yyscanner)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    ttlp_t * ttlp_arg;
    yyscan_t yyscanner;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (ttlp_arg);
  YYUSE (yyscanner);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, ttlp_t * ttlp_arg, yyscan_t yyscanner)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, ttlp_arg, yyscanner)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    ttlp_t * ttlp_arg;
    yyscan_t yyscanner;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, ttlp_arg, yyscanner);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, ttlp_t * ttlp_arg, yyscan_t yyscanner)
#else
static void
yy_reduce_print (yyvsp, yyrule, ttlp_arg, yyscanner)
    YYSTYPE *yyvsp;
    int yyrule;
    ttlp_t * ttlp_arg;
    yyscan_t yyscanner;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , ttlp_arg, yyscanner);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, ttlp_arg, yyscanner); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, ttlp_t * ttlp_arg, yyscan_t yyscanner)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, ttlp_arg, yyscanner)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    ttlp_t * ttlp_arg;
    yyscan_t yyscanner;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (ttlp_arg);
  YYUSE (yyscanner);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (ttlp_t * ttlp_arg, yyscan_t yyscanner);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (ttlp_t * ttlp_arg, yyscan_t yyscanner)
#else
int
yyparse (ttlp_arg, yyscanner)
    ttlp_t * ttlp_arg;
    yyscan_t yyscanner;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 160 "./turtle_p.y"
    { ttlp_arg->ttlp_special_qnames = ~0; }
    break;

  case 8:
#line 163 "./turtle_p.y"
    { dk_free_tree (ttlp_arg->ttlp_subj_uri);
		ttlp_arg->ttlp_subj_uri = ttlp_arg->ttlp_last_complete_uri;
		ttlp_arg->ttlp_last_complete_uri = NULL; }
    break;

  case 11:
#line 168 "./turtle_p.y"
    {
		triple_feed_t *tf = ttlp_arg->ttlp_tf;
		ttlp_enter_trig_group (ttlp_arg);
		TF_CHANGE_GRAPH_TO_DEFAULT (tf); }
    break;

  case 12:
#line 172 "./turtle_p.y"
    {
		ttlp_leave_trig_group (ttlp_arg); }
    break;

  case 13:
#line 174 "./turtle_p.y"
    { ttlyyerror_action ("Only a triple or a special clause (like prefix declaration) is allowed here"); }
    break;

  case 14:
#line 178 "./turtle_p.y"
    {
		  if (ttlp_arg->ttlp_base_uri != ttlp_arg->ttlp_base_uri_saved)
		    dk_free_box (ttlp_arg->ttlp_base_uri);
		  ttlp_arg->ttlp_base_uri = (yyvsp[(2) - (2)].box);
		  TF_CHANGE_BASE_AND_DEFAULT_GRAPH(ttlp_arg->ttlp_tf, box_copy ((yyvsp[(2) - (2)].box))); }
    break;

  case 15:
#line 186 "./turtle_p.y"
    {
		id_hash_t **local_hash_ptr = (ttlp_arg->ttlp_in_trig_graph ?
		  &(ttlp_arg->ttlp_inner_namespaces_prefix2iri) :
		  &(ttlp_arg->ttlp_namespaces_prefix2iri) );
		caddr_t *old_uri_ptr;
		if (NULL != local_hash_ptr[0])
		  old_uri_ptr = (caddr_t *)id_hash_get (local_hash_ptr[0], (caddr_t)(&((yyvsp[(2) - (3)].box))));
		else
		  {
		    local_hash_ptr[0] = (id_hash_t *)box_dv_dict_hashtable (31);
		    old_uri_ptr = NULL;
		  }
		if (NULL != old_uri_ptr)
		  {
		    int err = strcmp (old_uri_ptr[0], (yyvsp[(3) - (3)].box));
		    dk_free_box ((yyvsp[(2) - (3)].box));
		    dk_free_box ((yyvsp[(3) - (3)].box));
		    if (err)
		      ttlyyerror_action ("Namespace prefix is re-used for a different namespace IRI");
		  }
		else
		  id_hash_set (local_hash_ptr[0], (caddr_t)(&((yyvsp[(2) - (3)].box))), (caddr_t)(&((yyvsp[(3) - (3)].box)))); }
    break;

  case 16:
#line 208 "./turtle_p.y"
    {
		if (ttlp_arg->ttlp_default_ns_uri != ttlp_arg->ttlp_default_ns_uri_saved)
		  dk_free_box (ttlp_arg->ttlp_default_ns_uri);
		ttlp_arg->ttlp_default_ns_uri = (yyvsp[(3) - (3)].box); }
    break;

  case 22:
#line 227 "./turtle_p.y"
    {
		triple_feed_t *tf = ttlp_arg->ttlp_tf;
		TTLYYERROR_ACTION_COND (TTLP_ALLOW_TRIG, "Left curly brace can appear here only if the source text is TriG");
		ttlp_enter_trig_group (ttlp_arg);
		TF_CHANGE_GRAPH (tf, ttlp_arg->ttlp_subj_uri); }
    break;

  case 23:
#line 232 "./turtle_p.y"
    {
		triple_feed_t *tf = ttlp_arg->ttlp_tf;
		ttlp_leave_trig_group (ttlp_arg);
		TF_CHANGE_GRAPH_TO_DEFAULT (tf); }
    break;

  case 26:
#line 241 "./turtle_p.y"
    { ttlyyerror_action ("No '{' after an equality sign in TriG"); }
    break;

  case 34:
#line 261 "./turtle_p.y"
    { dk_free_tree (ttlp_arg->ttlp_subj_uri);
		ttlp_arg->ttlp_subj_uri = ttlp_arg->ttlp_last_complete_uri;
		ttlp_arg->ttlp_last_complete_uri = NULL; }
    break;

  case 37:
#line 269 "./turtle_p.y"
    { dk_free_tree (ttlp_arg->ttlp_subj_uri);
		ttlp_arg->ttlp_subj_uri = (yyvsp[(1) - (1)].box); }
    break;

  case 39:
#line 272 "./turtle_p.y"
    { dk_free_tree (ttlp_arg->ttlp_subj_uri);
		ttlp_arg->ttlp_subj_uri = (yyvsp[(1) - (1)].box); }
    break;

  case 41:
#line 275 "./turtle_p.y"
    {
		TTLYYERROR_ACTION_COND (TTLP_SKIP_LITERAL_SUBJECTS, "Virtuoso does not support literal subjects");
		dk_free_tree (ttlp_arg->ttlp_subj_uri); ttlp_arg->ttlp_subj_uri = NULL; }
    break;

  case 43:
#line 279 "./turtle_p.y"
    { dk_free_tree (ttlp_arg->ttlp_subj_uri);
		ttlp_arg->ttlp_subj_uri = NULL; }
    break;

  case 46:
#line 286 "./turtle_p.y"
    { dk_free_tree (ttlp_arg->ttlp_subj_uri);
		ttlp_arg->ttlp_subj_uri = (yyvsp[(1) - (1)].box); }
    break;

  case 48:
#line 289 "./turtle_p.y"
    { dk_free_tree (ttlp_arg->ttlp_subj_uri);
		ttlp_arg->ttlp_subj_uri = (yyvsp[(1) - (1)].box); }
    break;

  case 50:
#line 292 "./turtle_p.y"
    {
		TTLYYERROR_ACTION_COND (TTLP_SKIP_LITERAL_SUBJECTS, "Virtuoso does not support literal subjects");
		dk_free_tree (ttlp_arg->ttlp_subj_uri); ttlp_arg->ttlp_subj_uri = NULL; }
    break;

  case 52:
#line 296 "./turtle_p.y"
    { dk_free_tree (ttlp_arg->ttlp_subj_uri);
		ttlp_arg->ttlp_subj_uri = NULL; }
    break;

  case 55:
#line 303 "./turtle_p.y"
    { ttlp_arg->ttlp_special_qnames &= ~((yyvsp[(1) - (1)].token_type)); }
    break;

  case 56:
#line 304 "./turtle_p.y"
    { ttlp_arg->ttlp_special_qnames &= ~((yyvsp[(3) - (3)].token_type)); }
    break;

  case 57:
#line 308 "./turtle_p.y"
    { (yyval.token_type) = ttlp_bit_of_special_qname ((yyvsp[(1) - (1)].box)); }
    break;

  case 58:
#line 309 "./turtle_p.y"
    { (yyval.token_type) = TTLP_ALLOW_QNAME_A; }
    break;

  case 59:
#line 310 "./turtle_p.y"
    { (yyval.token_type) = TTLP_ALLOW_QNAME_HAS; }
    break;

  case 60:
#line 311 "./turtle_p.y"
    { (yyval.token_type) = TTLP_ALLOW_QNAME_IS; }
    break;

  case 61:
#line 312 "./turtle_p.y"
    { (yyval.token_type) = TTLP_ALLOW_QNAME_OF; }
    break;

  case 62:
#line 313 "./turtle_p.y"
    { (yyval.token_type) = TTLP_ALLOW_QNAME_THIS; }
    break;

  case 66:
#line 324 "./turtle_p.y"
    {
		  TTLYYERROR_ACTION_COND (TTLP_VERB_MAY_BE_BLANK, "Sequence blank node (written as '{...}' formula) can not be used as a predicate"); }
    break;

  case 70:
#line 332 "./turtle_p.y"
    { TTLYYERROR_ACTION_COND (TTLP_ACCEPT_DIRTY_SYNTAX, "Missing predicate and object between top-level blank node subject and a dot"); }
    break;

  case 77:
#line 345 "./turtle_p.y"
    { ttlyyerror_action ("Missing object between top-level blank node and a comma"); }
    break;

  case 78:
#line 346 "./turtle_p.y"
    { ttlyyerror_action ("Missing predicate and object between top-level blank node and a semicolon"); }
    break;

  case 79:
#line 347 "./turtle_p.y"
    { ttlyyerror_action ("Predicate expected after top-level blank node"); }
    break;

  case 82:
#line 353 "./turtle_p.y"
    { ttlyyerror_action ("Missing object before comma"); }
    break;

  case 83:
#line 354 "./turtle_p.y"
    { ttlyyerror_action ("Missing predicate and object before semicolon"); }
    break;

  case 84:
#line 355 "./turtle_p.y"
    { ttlyyerror_action ("Missing predicate and object before dot"); }
    break;

  case 85:
#line 356 "./turtle_p.y"
    { ttlyyerror_action ("Predicate expected"); }
    break;

  case 89:
#line 367 "./turtle_p.y"
    { dk_free_tree (ttlp_arg->ttlp_pred_uri); ttlp_arg->ttlp_pred_uri = (yyvsp[(1) - (1)].box); }
    break;

  case 91:
#line 370 "./turtle_p.y"
    { dk_free_tree (ttlp_arg->ttlp_pred_uri); ttlp_arg->ttlp_pred_uri = (yyvsp[(1) - (1)].box);
		  ttlp_arg->ttlp_pred_is_reverse = 1; }
    break;

  case 92:
#line 372 "./turtle_p.y"
    { ttlp_arg->ttlp_pred_is_reverse = 0; }
    break;

  case 93:
#line 373 "./turtle_p.y"
    {
		  dk_free_tree (ttlp_arg->ttlp_pred_uri);
		  ttlp_arg->ttlp_pred_uri = NULL; }
    break;

  case 97:
#line 385 "./turtle_p.y"
    {; /* triple is made by object */ }
    break;

  case 98:
#line 386 "./turtle_p.y"
    {; /* triple is made by object */ }
    break;

  case 99:
#line 387 "./turtle_p.y"
    { ttlyyerror_action ("Missing object before comma"); }
    break;

  case 100:
#line 388 "./turtle_p.y"
    { ttlyyerror_action ("Missing object before semicolon"); }
    break;

  case 101:
#line 389 "./turtle_p.y"
    { ttlyyerror_action ("Missing object before dot"); }
    break;

  case 102:
#line 390 "./turtle_p.y"
    { ttlyyerror_action ("Object expected"); }
    break;

  case 103:
#line 394 "./turtle_p.y"
    { (yyval.box) = ttlp_arg->ttlp_last_complete_uri; ttlp_arg->ttlp_last_complete_uri = NULL; }
    break;

  case 104:
#line 395 "./turtle_p.y"
    { (yyval.box) = (yyvsp[(1) - (1)].box); }
    break;

  case 105:
#line 396 "./turtle_p.y"
    { (yyval.box) = uname_rdf_ns_uri_type; }
    break;

  case 106:
#line 397 "./turtle_p.y"
    { (yyval.box) = box_dv_uname_string ("http://www.w3.org/2002/07/owl#sameAs"); }
    break;

  case 107:
#line 398 "./turtle_p.y"
    { (yyval.box) = box_dv_uname_string ("http://www.w3.org/2000/10/swap/log#implies"); }
    break;

  case 108:
#line 400 "./turtle_p.y"
    {
		  TTLYYERROR_ACTION_COND (TTLP_VERB_MAY_BE_BLANK, "Blank node (written as '[]') can not be used as a predicate");
		  (yyval.box) = tf_bnode_iid (ttlp_arg->ttlp_tf, NULL);
		  if (TTLP_DEBUG_BNODES & ttlp_arg->ttlp_flags)
		    ttlp_triples_for_bnodes_debug (ttlp_arg, (yyval.box), ttlp_arg->ttlp_lexlineno, NULL);
		}
    break;

  case 109:
#line 407 "./turtle_p.y"
    {
		  caddr_t label_copy_for_debug = NULL;
		  TTLYYERROR_ACTION_COND (TTLP_VERB_MAY_BE_BLANK, "Blank node (written as '_:...' label) can not be used as a predicate");
		  if (TTLP_DEBUG_BNODES & ttlp_arg->ttlp_flags)
		    label_copy_for_debug = box_copy ((yyvsp[(1) - (1)].box));
		  if (ttlp_arg->ttlp_formula_iid)
		    (yyval.box) = tf_formula_bnode_iid (ttlp_arg, (yyvsp[(1) - (1)].box));
		  else
		    (yyval.box) = tf_bnode_iid (ttlp_arg->ttlp_tf, (yyvsp[(1) - (1)].box));
		  if (TTLP_DEBUG_BNODES & ttlp_arg->ttlp_flags)
		    ttlp_triples_for_bnodes_debug (ttlp_arg, (yyval.box), ttlp_arg->ttlp_lexlineno, label_copy_for_debug);
		}
    break;

  case 110:
#line 420 "./turtle_p.y"
    {
		  TTLYYERROR_ACTION_COND (TTLP_VERB_MAY_BE_BLANK, "Blank node (written as '[...]' block) can not be used as a predicate");
		  if (TTLP_DEBUG_BNODES & ttlp_arg->ttlp_flags)
		    (yyval.lexlineno) = ttlp_arg->ttlp_lexlineno;
		}
    break;

  case 111:
#line 426 "./turtle_p.y"
    {
		  (yyval.box) = (yyvsp[(3) - (3)].box);
		  if (TTLP_DEBUG_BNODES & ttlp_arg->ttlp_flags)
		    ttlp_triples_for_bnodes_debug (ttlp_arg, (yyval.box), (yyvsp[(2) - (3)].lexlineno), NULL);
		}
    break;

  case 112:
#line 432 "./turtle_p.y"
    {
		  TTLYYERROR_ACTION_COND (TTLP_VERB_MAY_BE_BLANK, "Sequence blank node (written as list in parenthesis) can not be used as a predicate");
		  if (TTLP_DEBUG_BNODES & ttlp_arg->ttlp_flags)
		    (yyval.lexlineno) = ttlp_arg->ttlp_lexlineno;
		}
    break;

  case 113:
#line 438 "./turtle_p.y"
    {
		  (yyval.box) = (yyvsp[(3) - (3)].box);
		  if (TTLP_DEBUG_BNODES & ttlp_arg->ttlp_flags)
		    ttlp_triples_for_bnodes_debug (ttlp_arg, (yyval.box), (yyvsp[(2) - (3)].lexlineno), NULL);
		}
    break;

  case 114:
#line 446 "./turtle_p.y"
    { (yyval.box) = ttlp_arg->ttlp_last_complete_uri; ttlp_arg->ttlp_last_complete_uri = NULL; }
    break;

  case 115:
#line 447 "./turtle_p.y"
    { (yyval.box) = (yyvsp[(2) - (3)].box); }
    break;

  case 116:
#line 448 "./turtle_p.y"
    { (yyval.box) = box_dv_uname_string ("http://www.w3.org/2000/10/swap/log#implies"); /* Note this 'double reversed' meaning :) */ }
    break;

  case 119:
#line 454 "./turtle_p.y"
    { dk_free_tree ((yyvsp[(1) - (1)].box)); }
    break;

  case 120:
#line 455 "./turtle_p.y"
    { dk_free_tree ((yyvsp[(1) - (1)].box)); }
    break;

  case 121:
#line 456 "./turtle_p.y"
    { dk_free_tree ((yyvsp[(1) - (1)].box)); }
    break;

  case 122:
#line 457 "./turtle_p.y"
    { dk_free_tree ((yyvsp[(1) - (1)].box)); }
    break;

  case 123:
#line 458 "./turtle_p.y"
    { dk_free_tree ((yyvsp[(1) - (2)].box)); dk_free_tree ((yyvsp[(2) - (2)].box)); }
    break;

  case 124:
#line 459 "./turtle_p.y"
    { dk_free_tree ((yyvsp[(1) - (1)].box)); }
    break;

  case 125:
#line 459 "./turtle_p.y"
    {
			dk_free_tree (ttlp_arg->ttlp_last_complete_uri);
			ttlp_arg->ttlp_last_complete_uri = NULL; }
    break;

  case 128:
#line 470 "./turtle_p.y"
    {
		dk_free_tree (ttlp_arg->ttlp_obj);
		ttlp_arg->ttlp_obj = ttlp_arg->ttlp_last_complete_uri;
		ttlp_arg->ttlp_last_complete_uri = NULL;
		ttlp_triple_and_inf (ttlp_arg, ttlp_arg->ttlp_obj); }
    break;

  case 129:
#line 475 "./turtle_p.y"
    {
		dk_free_tree (ttlp_arg->ttlp_obj);
		ttlp_arg->ttlp_obj = (yyvsp[(1) - (1)].box);
		ttlp_triple_and_inf (ttlp_arg, (yyvsp[(1) - (1)].box)); }
    break;

  case 130:
#line 479 "./turtle_p.y"
    {
		dk_free_tree (ttlp_arg->ttlp_obj);
		ttlp_arg->ttlp_obj = (yyvsp[(1) - (1)].box);
		ttlp_triple_and_inf (ttlp_arg, (yyvsp[(1) - (1)].box)); }
    break;

  case 131:
#line 483 "./turtle_p.y"
    {
		ttlp_triple_l_and_inf (ttlp_arg, (caddr_t)((ptrlong)1), uname_xmlschema_ns_uri_hash_boolean, NULL); }
    break;

  case 132:
#line 485 "./turtle_p.y"
    {
		ttlp_triple_l_and_inf (ttlp_arg, (caddr_t)((ptrlong)0), uname_xmlschema_ns_uri_hash_boolean, NULL); }
    break;

  case 133:
#line 487 "./turtle_p.y"
    {
		dk_free_tree (ttlp_arg->ttlp_obj);
		ttlp_arg->ttlp_obj = (yyvsp[(1) - (1)].box);
		ttlp_triple_l_and_inf (ttlp_arg, (yyvsp[(1) - (1)].box), uname_xmlschema_ns_uri_hash_integer, NULL); }
    break;

  case 134:
#line 491 "./turtle_p.y"
    {
		dk_free_tree (ttlp_arg->ttlp_obj);
		ttlp_arg->ttlp_obj = (yyvsp[(1) - (1)].box);
		ttlp_triple_l_and_inf (ttlp_arg, (yyvsp[(1) - (1)].box), uname_xmlschema_ns_uri_hash_decimal, NULL); }
    break;

  case 135:
#line 495 "./turtle_p.y"
    {
		dk_free_tree (ttlp_arg->ttlp_obj);
		ttlp_arg->ttlp_obj = (yyvsp[(1) - (1)].box);
		ttlp_triple_l_and_inf (ttlp_arg, (yyvsp[(1) - (1)].box), uname_xmlschema_ns_uri_hash_double, NULL);	}
    break;

  case 136:
#line 499 "./turtle_p.y"
    {
	  	double myZERO = 0.0;
		double myNAN_d = 0.0/myZERO;
		dk_free_tree (ttlp_arg->ttlp_obj);
		ttlp_arg->ttlp_obj = box_double (myNAN_d);
		ttlp_triple_l_and_inf (ttlp_arg, ttlp_arg->ttlp_obj, uname_xmlschema_ns_uri_hash_double, NULL);	}
    break;

  case 137:
#line 505 "./turtle_p.y"
    {
	  	double myZERO = 0.0;
		double myPOSINF_d = 1.0/myZERO;
		dk_free_tree (ttlp_arg->ttlp_obj);
		ttlp_arg->ttlp_obj = box_double (myPOSINF_d);
		ttlp_triple_l_and_inf (ttlp_arg, ttlp_arg->ttlp_obj, uname_xmlschema_ns_uri_hash_double, NULL);	}
    break;

  case 138:
#line 511 "./turtle_p.y"
    {
	  	double myZERO = 0.0;
		double myNEGINF_d = -1.0/myZERO;
		dk_free_tree (ttlp_arg->ttlp_obj);
		ttlp_arg->ttlp_obj = box_double (myNEGINF_d);
		ttlp_triple_l_and_inf (ttlp_arg, ttlp_arg->ttlp_obj, uname_xmlschema_ns_uri_hash_double, NULL);	}
    break;

  case 139:
#line 517 "./turtle_p.y"
    {
		dk_free_tree (ttlp_arg->ttlp_obj);
		ttlp_arg->ttlp_obj = (yyvsp[(1) - (1)].box);
		ttlp_triple_l_and_inf (ttlp_arg, (yyvsp[(1) - (1)].box), NULL, NULL); }
    break;

  case 140:
#line 521 "./turtle_p.y"
    {
		dk_free_tree (ttlp_arg->ttlp_obj);
		ttlp_arg->ttlp_obj = (yyvsp[(1) - (2)].box);
		dk_free_tree (ttlp_arg->ttlp_obj_lang);
		ttlp_arg->ttlp_obj_lang = (yyvsp[(2) - (2)].box);
		ttlp_triple_l_and_inf (ttlp_arg, (yyvsp[(1) - (2)].box), NULL, (yyvsp[(2) - (2)].box));	}
    break;

  case 141:
#line 527 "./turtle_p.y"
    {
		dk_free_tree (ttlp_arg->ttlp_obj);
		ttlp_arg->ttlp_obj = (yyvsp[(1) - (3)].box);
		dk_free_tree (ttlp_arg->ttlp_obj_type);
		ttlp_arg->ttlp_obj_type = ttlp_arg->ttlp_last_complete_uri;
		ttlp_arg->ttlp_last_complete_uri = NULL;
		ttlp_triple_l_and_inf (ttlp_arg, ttlp_arg->ttlp_obj, ttlp_arg->ttlp_obj_type, NULL);	}
    break;

  case 142:
#line 534 "./turtle_p.y"
    { }
    break;

  case 143:
#line 535 "./turtle_p.y"
    {
		dk_free_tree (ttlp_arg->ttlp_obj);
		ttlp_arg->ttlp_obj = (yyvsp[(1) - (3)].box); }
    break;

  case 144:
#line 538 "./turtle_p.y"
    {
		dk_free_tree (ttlp_arg->ttlp_last_complete_uri);
		ttlp_arg->ttlp_last_complete_uri = NULL; }
    break;

  case 145:
#line 541 "./turtle_p.y"
    { }
    break;

  case 146:
#line 546 "./turtle_p.y"
    {
		  caddr_t label_copy_for_debug = NULL;
		  if (TTLP_DEBUG_BNODES & ttlp_arg->ttlp_flags)
		    label_copy_for_debug = box_copy ((yyvsp[(1) - (1)].box));
		  if (ttlp_arg->ttlp_formula_iid)
		    (yyval.box) = tf_formula_bnode_iid (ttlp_arg, (yyvsp[(1) - (1)].box));
		  else
		    (yyval.box) = tf_bnode_iid (ttlp_arg->ttlp_tf, (yyvsp[(1) - (1)].box));
		  if (TTLP_DEBUG_BNODES & ttlp_arg->ttlp_flags)
		    ttlp_triples_for_bnodes_debug (ttlp_arg, (yyval.box), ttlp_arg->ttlp_lexlineno, label_copy_for_debug);
		}
    break;

  case 147:
#line 558 "./turtle_p.y"
    {
		  (yyval.box) = tf_bnode_iid (ttlp_arg->ttlp_tf, NULL);
		  if (TTLP_DEBUG_BNODES & ttlp_arg->ttlp_flags)
		    ttlp_triples_for_bnodes_debug (ttlp_arg, (yyval.box), ttlp_arg->ttlp_lexlineno, NULL);
		}
    break;

  case 148:
#line 564 "./turtle_p.y"
    {
		  if (TTLP_DEBUG_BNODES & ttlp_arg->ttlp_flags)
		    (yyval.lexlineno) = ttlp_arg->ttlp_lexlineno;
		}
    break;

  case 149:
#line 569 "./turtle_p.y"
    {
		  (yyval.box) = (yyvsp[(3) - (3)].box);
		  if (TTLP_DEBUG_BNODES & ttlp_arg->ttlp_flags)
		    ttlp_triples_for_bnodes_debug (ttlp_arg, (yyval.box), (yyvsp[(2) - (3)].lexlineno), NULL);
		}
    break;

  case 150:
#line 575 "./turtle_p.y"
    {
		  if (TTLP_DEBUG_BNODES & ttlp_arg->ttlp_flags)
		    (yyval.lexlineno) = ttlp_arg->ttlp_lexlineno;
		}
    break;

  case 151:
#line 580 "./turtle_p.y"
    {
		  (yyval.box) = (yyvsp[(3) - (3)].box);
		  if (TTLP_DEBUG_BNODES & ttlp_arg->ttlp_flags)
		    ttlp_triples_for_bnodes_debug (ttlp_arg, (yyval.box), (yyvsp[(2) - (3)].lexlineno), NULL);
		}
    break;

  case 152:
#line 586 "./turtle_p.y"
    {
		  if (TTLP_DEBUG_BNODES & ttlp_arg->ttlp_flags)
		    (yyval.lexlineno) = ttlp_arg->ttlp_lexlineno;
		}
    break;

  case 153:
#line 591 "./turtle_p.y"
    {
		  (yyval.box) = (yyvsp[(3) - (3)].box);
		  if (TTLP_DEBUG_BNODES & ttlp_arg->ttlp_flags)
		    ttlp_triples_for_bnodes_debug (ttlp_arg, (yyval.box), (yyvsp[(2) - (3)].lexlineno), NULL);
		}
    break;

  case 154:
#line 600 "./turtle_p.y"
    { dk_set_push (&(ttlp_arg->ttlp_saved_uris), (void *)(ptrlong)ttlp_arg->ttlp_pred_is_reverse);
		  dk_set_push (&(ttlp_arg->ttlp_saved_uris), ttlp_arg->ttlp_subj_uri);
		  dk_set_push (&(ttlp_arg->ttlp_saved_uris), ttlp_arg->ttlp_pred_uri);
		  ttlp_arg->ttlp_pred_is_reverse = 0;
		  ttlp_arg->ttlp_subj_uri = tf_bnode_iid (ttlp_arg->ttlp_tf, NULL);
		  ttlp_arg->ttlp_pred_uri = NULL; }
    break;

  case 155:
#line 606 "./turtle_p.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 156:
#line 611 "./turtle_p.y"
    { (yyval.box) = ttlp_arg->ttlp_subj_uri;
		  dk_free_tree (ttlp_arg->ttlp_pred_uri);
		  ttlp_arg->ttlp_pred_uri = dk_set_pop (&(ttlp_arg->ttlp_saved_uris));
		  ttlp_arg->ttlp_subj_uri = dk_set_pop (&(ttlp_arg->ttlp_saved_uris));
		  ttlp_arg->ttlp_pred_is_reverse = (ptrlong)dk_set_pop (&(ttlp_arg->ttlp_saved_uris)); }
    break;

  case 157:
#line 617 "./turtle_p.y"
    { (yyval.box) = ttlp_arg->ttlp_subj_uri;
		  dk_free_tree (ttlp_arg->ttlp_pred_uri);
		  ttlp_arg->ttlp_pred_uri = dk_set_pop (&(ttlp_arg->ttlp_saved_uris));
		  ttlp_arg->ttlp_subj_uri = dk_set_pop (&(ttlp_arg->ttlp_saved_uris));
		  ttlp_arg->ttlp_pred_is_reverse = (ptrlong)dk_set_pop (&(ttlp_arg->ttlp_saved_uris)); }
    break;

  case 158:
#line 625 "./turtle_p.y"
    {
		  dk_set_push (&(ttlp_arg->ttlp_saved_uris), (void *)(ptrlong)(ttlp_arg->ttlp_pred_is_reverse));
		  dk_set_push (&(ttlp_arg->ttlp_saved_uris), ttlp_arg->ttlp_subj_uri);
		  dk_set_push (&(ttlp_arg->ttlp_saved_uris), ttlp_arg->ttlp_pred_uri);
		  ttlp_arg->ttlp_pred_is_reverse = 0;
		  if (NULL == ttlp_arg->ttlp_unused_seq_bnodes)
		    ttlp_arg->ttlp_subj_uri = tf_bnode_iid (ttlp_arg->ttlp_tf, NULL);
		  else
		    ttlp_arg->ttlp_subj_uri = dk_set_pop (&(ttlp_arg->ttlp_unused_seq_bnodes));
		  dk_set_push (&(ttlp_arg->ttlp_saved_uris), box_copy_tree (ttlp_arg->ttlp_subj_uri)); /* copy of first node */
		  dk_set_push (&(ttlp_arg->ttlp_saved_uris), NULL); /* last incomplete node */
		  ttlp_arg->ttlp_pred_uri = uname_rdf_ns_uri_first; }
    break;

  case 159:
#line 637 "./turtle_p.y"
    {
		  caddr_t first_node;
		  dk_set_push (&(ttlp_arg->ttlp_unused_seq_bnodes), ttlp_arg->ttlp_subj_uri);
		  if (NULL == ttlp_arg->ttlp_saved_uris->data) /* empty list */
		    {
		      dk_set_pop (&(ttlp_arg->ttlp_saved_uris)); /* pop last incomplete node, it's NULL in this case */
		      dk_free_tree (dk_set_pop (&(ttlp_arg->ttlp_saved_uris))); /* pop copy of first node and delete */
		      first_node = uname_rdf_ns_uri_nil; }
		  else
		    {
		      ttlp_arg->ttlp_subj_uri = dk_set_pop (&(ttlp_arg->ttlp_saved_uris));
		      ttlp_arg->ttlp_pred_uri = uname_rdf_ns_uri_rest;
		      ttlp_triple_and_inf (ttlp_arg, uname_rdf_ns_uri_nil);
		      dk_free_tree (ttlp_arg->ttlp_subj_uri);
		      first_node = dk_set_pop (&(ttlp_arg->ttlp_saved_uris)); }
		  ttlp_arg->ttlp_pred_uri = dk_set_pop (&(ttlp_arg->ttlp_saved_uris));
		  ttlp_arg->ttlp_subj_uri = dk_set_pop (&(ttlp_arg->ttlp_saved_uris));
		  ttlp_arg->ttlp_pred_is_reverse = (ptrlong)dk_set_pop (&(ttlp_arg->ttlp_saved_uris));
		  (yyval.box) = first_node; }
    break;

  case 160:
#line 659 "./turtle_p.y"
    {}
    break;

  case 161:
#line 660 "./turtle_p.y"
    {
		  caddr_t last_node = ttlp_arg->ttlp_subj_uri;
		  ttlp_arg->ttlp_subj_uri = dk_set_pop (&(ttlp_arg->ttlp_saved_uris));
		  dk_set_push (&(ttlp_arg->ttlp_saved_uris), last_node);
		  if (NULL != ttlp_arg->ttlp_subj_uri)
		    {
		      ttlp_arg->ttlp_pred_uri = uname_rdf_ns_uri_rest;
		      ttlp_triple_and_inf (ttlp_arg, last_node);
		      dk_free_tree (ttlp_arg->ttlp_subj_uri);
		      ttlp_arg->ttlp_subj_uri = NULL; }
		  if (NULL == ttlp_arg->ttlp_unused_seq_bnodes)
		    ttlp_arg->ttlp_subj_uri = tf_bnode_iid (ttlp_arg->ttlp_tf, NULL);
		  else
		    ttlp_arg->ttlp_subj_uri = dk_set_pop (&(ttlp_arg->ttlp_unused_seq_bnodes));
		  ttlp_arg->ttlp_pred_uri = uname_rdf_ns_uri_first; }
    break;

  case 162:
#line 679 "./turtle_p.y"
    {
		  dk_set_push (&(ttlp_arg->ttlp_saved_uris), ttlp_arg->ttlp_formula_iid);
		  dk_set_push (&(ttlp_arg->ttlp_saved_uris), (void *)(ptrlong)ttlp_arg->ttlp_pred_is_reverse);
		  dk_set_push (&(ttlp_arg->ttlp_saved_uris), ttlp_arg->ttlp_subj_uri);
		  dk_set_push (&(ttlp_arg->ttlp_saved_uris), ttlp_arg->ttlp_pred_uri);
		  ttlp_arg->ttlp_formula_iid = tf_bnode_iid (ttlp_arg->ttlp_tf, NULL);
		  ttlp_arg->ttlp_pred_is_reverse = 0;
		  ttlp_arg->ttlp_subj_uri = NULL;
		  ttlp_arg->ttlp_pred_uri = NULL; }
    break;

  case 163:
#line 689 "./turtle_p.y"
    { (yyval.box) = ttlp_arg->ttlp_formula_iid;
		  dk_free_tree (ttlp_arg->ttlp_subj_uri);
		  dk_free_tree (ttlp_arg->ttlp_pred_uri);
		  ttlp_arg->ttlp_pred_uri = dk_set_pop (&(ttlp_arg->ttlp_saved_uris));
		  ttlp_arg->ttlp_subj_uri = dk_set_pop (&(ttlp_arg->ttlp_saved_uris));
		  ttlp_arg->ttlp_pred_is_reverse = (ptrlong)dk_set_pop (&(ttlp_arg->ttlp_saved_uris));
		  ttlp_arg->ttlp_formula_iid = dk_set_pop (&(ttlp_arg->ttlp_saved_uris)); }
    break;

  case 164:
#line 700 "./turtle_p.y"
    {
		  if (NULL != ttlp_arg->ttlp_last_complete_uri)
		    ttlyyerror_action ("Internal error: proven memory leak");
		  ttlp_arg->ttlp_last_complete_uri = (yyvsp[(1) - (1)].box);
		  TTLP_URI_RESOLVE_IF_NEEDED(ttlp_arg->ttlp_last_complete_uri);
		 }
    break;

  case 165:
#line 707 "./turtle_p.y"
    {
		  if (NULL != ttlp_arg->ttlp_last_complete_uri)
		    ttlyyerror_action ("Internal error: proven memory leak");
		  ttlp_arg->ttlp_last_complete_uri = (yyvsp[(1) - (1)].box);
		  ttlp_arg->ttlp_last_complete_uri = ttlp_expand_qname_prefix (ttlp_arg, ttlp_arg->ttlp_last_complete_uri);
		  TTLP_URI_RESOLVE_IF_NEEDED(ttlp_arg->ttlp_last_complete_uri);
		}
    break;

  case 166:
#line 715 "./turtle_p.y"
    {
		  if (NULL != ttlp_arg->ttlp_last_complete_uri)
		    ttlyyerror_action ("Internal error: proven memory leak");
		  ttlp_arg->ttlp_last_complete_uri = (yyvsp[(1) - (1)].box);
		  ttlp_arg->ttlp_last_complete_uri = ttlp_expand_qname_prefix (ttlp_arg, ttlp_arg->ttlp_last_complete_uri);
		  TTLP_URI_RESOLVE_IF_NEEDED(ttlp_arg->ttlp_last_complete_uri);
		}
    break;


/* Line 1267 of yacc.c.  */
#line 2606 "turtle_p.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (ttlp_arg, yyscanner, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (ttlp_arg, yyscanner, yymsg);
	  }
	else
	  {
	    yyerror (ttlp_arg, yyscanner, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval, ttlp_arg, yyscanner);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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
		  yystos[yystate], yyvsp, ttlp_arg, yyscanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (ttlp_arg, yyscanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, ttlp_arg, yyscanner);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, ttlp_arg, yyscanner);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



