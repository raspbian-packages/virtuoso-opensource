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
     false_L = 287,
     true_L = 288,
     __TTL_PUNCT_END = 289,
     __TTL_NONPUNCT_START = 290,
     TURTLE_INTEGER = 291,
     TURTLE_DECIMAL = 292,
     TURTLE_DOUBLE = 293,
     TURTLE_STRING = 294,
     KEYWORD = 295,
     LANGTAG = 296,
     QNAME = 297,
     QNAME_NS = 298,
     VARIABLE = 299,
     BLANK_NODE_LABEL = 300,
     Q_IRI_REF = 301,
     _GARBAGE_BEFORE_DOT_WS = 302,
     TTL_RECOVERABLE_ERROR = 303,
     __TTL_NONPUNCT_END = 304
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
#define false_L 287
#define true_L 288
#define __TTL_PUNCT_END 289
#define __TTL_NONPUNCT_START 290
#define TURTLE_INTEGER 291
#define TURTLE_DECIMAL 292
#define TURTLE_DOUBLE 293
#define TURTLE_STRING 294
#define KEYWORD 295
#define LANGTAG 296
#define QNAME 297
#define QNAME_NS 298
#define VARIABLE 299
#define BLANK_NODE_LABEL 300
#define Q_IRI_REF 301
#define _GARBAGE_BEFORE_DOT_WS 302
#define TTL_RECOVERABLE_ERROR 303
#define __TTL_NONPUNCT_END 304




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
/* Line 187 of yacc.c.  */
#line 249 "turtle_p.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 262 "turtle_p.c"

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
# if YYENABLE_NLS
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
#define YYLAST   514

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  61
/* YYNRULES -- Number of rules.  */
#define YYNRULES  156
/* YYNRULES -- Number of states.  */
#define YYNSTATES  217

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

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
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     8,    13,    17,    22,    27,
      28,    32,    34,    35,    41,    43,    44,    46,    49,    51,
      54,    55,    61,    63,    66,    69,    71,    75,    76,    81,
      83,    84,    88,    89,    93,    94,    98,    99,   103,   105,
     106,   111,   112,   116,   117,   122,   123,   128,   131,   133,
     137,   139,   141,   143,   145,   147,   149,   150,   152,   154,
     155,   159,   163,   168,   170,   173,   176,   180,   182,   184,
     188,   190,   192,   194,   196,   200,   202,   204,   206,   208,
     210,   213,   215,   216,   220,   221,   225,   226,   230,   232,
     234,   236,   240,   242,   244,   246,   248,   250,   252,   254,
     256,   258,   260,   262,   263,   267,   268,   272,   276,   280,
     282,   284,   286,   288,   290,   292,   294,   297,   298,   303,
     305,   307,   309,   311,   313,   315,   317,   319,   321,   323,
     325,   328,   332,   334,   338,   342,   346,   348,   350,   351,
     355,   356,   360,   361,   365,   366,   369,   373,   375,   376,
     380,   381,   384,   385,   389,   391,   393
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      51,     0,    -1,    -1,    51,    52,    -1,    -1,    28,    53,
      74,    56,    -1,    25,    46,    56,    -1,    30,    43,    46,
      56,    -1,    30,     7,    46,    56,    -1,    -1,   110,    54,
      58,    -1,    69,    -1,    -1,    11,    55,    61,    57,    56,
      -1,     1,    -1,    -1,     9,    -1,     9,    15,    -1,    15,
      -1,    80,     9,    -1,    -1,    60,    59,    61,    57,    56,
      -1,    11,    -1,    20,    11,    -1,    20,     1,    -1,    62,
      -1,    61,     9,    62,    -1,    -1,   110,    63,    77,    76,
      -1,    64,    -1,    -1,    44,    65,    80,    -1,    -1,    98,
      66,    80,    -1,    -1,    94,    67,    80,    -1,    -1,    48,
      68,    80,    -1,    47,    -1,    -1,    44,    70,    80,     9,
      -1,    -1,    98,    71,    79,    -1,    -1,    94,    72,    80,
       9,    -1,    -1,    48,    73,    80,     9,    -1,    47,     9,
      -1,    75,    -1,    74,     8,    75,    -1,    42,    -1,    24,
      -1,    26,    -1,    27,    -1,    29,    -1,    31,    -1,    -1,
      18,    -1,    82,    -1,    -1,    10,    78,   108,    -1,    81,
      76,     9,    -1,    81,    76,    47,     9,    -1,     9,    -1,
      47,     9,    -1,    82,    76,    -1,    82,    76,    47,    -1,
      47,    -1,    84,    -1,    81,    18,    83,    -1,     8,    -1,
      18,    -1,     1,    -1,    84,    -1,    82,    18,    83,    -1,
       8,    -1,    18,    -1,     9,    -1,     1,    -1,    84,    -1,
      84,    47,    -1,    47,    -1,    -1,    90,    85,    88,    -1,
      -1,    93,    86,    88,    -1,    -1,    48,    87,    88,    -1,
      89,    -1,    47,    -1,    97,    -1,    89,     8,    96,    -1,
       8,    -1,    18,    -1,     9,    -1,     1,    -1,   110,    -1,
      44,    -1,    24,    -1,    19,    -1,    21,    -1,    14,    -1,
      45,    -1,    -1,    13,    91,   102,    -1,    -1,    12,    92,
     105,    -1,    27,   110,    29,    -1,    27,    44,    29,    -1,
      22,    -1,    33,    -1,    32,    -1,    36,    -1,    37,    -1,
      38,    -1,    39,    -1,    39,    41,    -1,    -1,    39,    95,
       6,   110,    -1,    97,    -1,    47,    -1,   110,    -1,    44,
      -1,    98,    -1,    33,    -1,    32,    -1,    36,    -1,    37,
      -1,    38,    -1,    39,    -1,    39,    41,    -1,    39,     6,
     110,    -1,    48,    -1,    39,     6,    48,    -1,    48,     6,
     110,    -1,    48,     6,    48,    -1,    45,    -1,    14,    -1,
      -1,    13,    99,   102,    -1,    -1,    12,   100,   105,    -1,
      -1,    10,   101,   108,    -1,    -1,   103,   104,    -1,    82,
      76,    17,    -1,    17,    -1,    -1,   106,   107,    16,    -1,
      -1,   107,    97,    -1,    -1,   109,    61,    15,    -1,    46,
      -1,    42,    -1,    43,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   151,   151,   153,   157,   157,   158,   159,   178,   181,
     181,   185,   186,   186,   192,   195,   197,   201,   202,   206,
     207,   207,   217,   218,   219,   223,   224,   228,   228,   232,
     236,   236,   239,   239,   242,   242,   246,   246,   249,   253,
     253,   256,   256,   259,   259,   263,   263,   266,   270,   271,
     275,   276,   277,   278,   279,   280,   283,   285,   289,   291,
     290,   297,   298,   299,   300,   304,   305,   306,   310,   311,
     312,   313,   314,   318,   319,   320,   321,   322,   323,   327,
     328,   329,   334,   333,   337,   336,   340,   340,   347,   348,
     352,   353,   354,   355,   356,   357,   361,   362,   363,   364,
     365,   366,   373,   384,   383,   396,   395,   410,   411,   412,
     416,   417,   418,   419,   420,   421,   422,   423,   423,   429,
     430,   434,   439,   443,   447,   449,   451,   455,   459,   463,
     467,   473,   480,   481,   484,   487,   491,   500,   507,   506,
     518,   517,   529,   528,   543,   543,   553,   559,   568,   568,
     602,   603,   622,   622,   642,   649,   657
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
  "_AT_of_L", "_AT_prefix_L", "_AT_this_L", "false_L", "true_L",
  "__TTL_PUNCT_END", "__TTL_NONPUNCT_START", "TURTLE_INTEGER",
  "TURTLE_DECIMAL", "TURTLE_DOUBLE", "TURTLE_STRING", "KEYWORD", "LANGTAG",
  "QNAME", "QNAME_NS", "VARIABLE", "BLANK_NODE_LABEL", "Q_IRI_REF",
  "_GARBAGE_BEFORE_DOT_WS", "TTL_RECOVERABLE_ERROR", "__TTL_NONPUNCT_END",
  "$accept", "turtledoc", "clause", "@1", "@2", "@3", "dot_opt",
  "trig_group_end", "trig_block_or_predicate_object_list", "@4",
  "opt_eq_lbra", "inner_triple_clauses", "inner_triple_clause", "@5",
  "triple_clause_with_nonq_subj", "@6", "@7", "@8", "@9",
  "top_triple_clause_with_nonq_subj", "@10", "@11", "@12", "@13",
  "keyword_list", "keyword", "semicolon_opt",
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    51,    53,    52,    52,    52,    52,    54,
      52,    52,    55,    52,    52,    56,    56,    57,    57,    58,
      59,    58,    60,    60,    60,    61,    61,    63,    62,    62,
      65,    64,    66,    64,    67,    64,    68,    64,    64,    70,
      69,    71,    69,    72,    69,    73,    69,    69,    74,    74,
      75,    75,    75,    75,    75,    75,    76,    76,    77,    78,
      77,    79,    79,    79,    79,    80,    80,    80,    81,    81,
      81,    81,    81,    82,    82,    82,    82,    82,    82,    83,
      83,    83,    85,    84,    86,    84,    87,    84,    88,    88,
      89,    89,    89,    89,    89,    89,    90,    90,    90,    90,
      90,    90,    90,    91,    90,    92,    90,    93,    93,    93,
      94,    94,    94,    94,    94,    94,    94,    95,    94,    96,
      96,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    98,    98,    99,    98,
     100,    98,   101,    98,   103,   102,   104,   104,   106,   105,
     107,   107,   109,   108,   110,   110,   110
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     4,     3,     4,     4,     0,
       3,     1,     0,     5,     1,     0,     1,     2,     1,     2,
       0,     5,     1,     2,     2,     1,     3,     0,     4,     1,
       0,     3,     0,     3,     0,     3,     0,     3,     1,     0,
       4,     0,     3,     0,     4,     0,     4,     2,     1,     3,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     0,
       3,     3,     4,     1,     2,     2,     3,     1,     1,     3,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       2,     1,     0,     3,     0,     3,     0,     3,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     3,     0,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     2,     0,     4,     1,
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
       2,     0,     1,    14,   142,    12,   140,   138,   137,     0,
       4,     0,   111,   110,   112,   113,   114,   115,   155,   156,
      39,   136,   154,     0,    45,     3,    11,    43,    41,     9,
     152,     0,   148,   144,    15,     0,     0,     0,   116,     0,
       0,    47,     0,     0,     0,     0,   143,     0,    30,    38,
      36,     0,    25,    29,    34,    32,    27,   141,   150,   139,
       0,    16,     6,    51,    52,    53,    54,    55,    50,    15,
      48,    15,    15,     0,    78,    75,    77,   105,   103,   101,
      76,    99,   100,   109,    98,     0,    97,   102,    67,    86,
       0,    56,    73,    82,    84,    96,     0,     0,    72,    70,
      63,    71,     0,    42,    56,    68,    22,     0,    10,    20,
       0,     0,     0,     0,     0,    18,    15,     0,     0,     0,
       0,   147,    56,   145,     0,     5,     8,     7,   118,   148,
     144,     0,     0,     0,    40,    57,    65,     0,     0,    46,
      44,    64,    57,     0,    24,    23,     0,    19,     0,   153,
      31,    37,    17,    26,    13,    35,    33,    59,    56,    58,
     149,   125,   124,   126,   127,   128,   129,   122,   132,   151,
     123,   121,     0,    49,   106,   104,   108,   107,    95,    92,
      94,    93,    89,    87,    88,    90,    81,    74,    79,    66,
      83,    85,    69,    61,     0,     0,   152,    57,    28,     0,
       0,   130,     0,   146,     0,    80,    62,    15,    60,   133,
     131,   135,   134,   120,    91,   119,    21
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    25,    35,    45,    31,    62,   116,   108,   146,
     109,    51,    52,   119,    53,   112,   118,   117,   113,    26,
      40,    44,    43,    42,    69,    70,   136,   158,   196,   103,
      90,   104,    91,   187,    92,   137,   138,   133,   183,   184,
      93,   130,   129,    94,    54,    39,   214,   185,    55,    33,
      32,    30,    59,    60,   123,    57,    58,   120,    46,    47,
      95
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -117
static const yytype_int16 yypact[] =
{
    -117,   148,  -117,  -117,  -117,  -117,  -117,  -117,  -117,   -23,
    -117,     8,  -117,  -117,  -117,  -117,  -117,     6,  -117,  -117,
    -117,  -117,  -117,    16,  -117,  -117,  -117,  -117,  -117,  -117,
    -117,   262,  -117,  -117,    28,     2,    -7,    -5,  -117,    37,
     269,  -117,   269,   269,   317,   199,  -117,   262,  -117,  -117,
    -117,     9,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,
      52,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,    40,
    -117,    28,    28,   -26,  -117,  -117,  -117,  -117,  -117,  -117,
    -117,  -117,  -117,  -117,  -117,    47,  -117,  -117,  -117,  -117,
      36,    41,  -117,  -117,  -117,  -117,    49,    53,  -117,  -117,
    -117,  -117,    66,  -117,    50,  -117,  -117,    21,  -117,  -117,
      68,    27,   269,   269,   383,  -117,    28,   269,   269,   365,
     422,  -117,    41,  -117,     2,  -117,  -117,  -117,  -117,  -117,
    -117,    54,    58,   221,  -117,   466,    31,   221,   221,  -117,
    -117,  -117,   466,     5,  -117,  -117,   262,  -117,   262,  -117,
    -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,    64,    85,
    -117,  -117,  -117,  -117,  -117,  -117,    13,  -117,    98,  -117,
    -117,  -117,    91,  -117,  -117,  -117,  -117,  -117,  -117,  -117,
    -117,  -117,  -117,  -117,   101,  -117,  -117,  -117,    63,  -117,
    -117,  -117,  -117,  -117,   102,     9,  -117,  -117,  -117,   429,
      -8,  -117,    59,  -117,   310,  -117,  -117,    28,  -117,  -117,
    -117,  -117,  -117,  -117,  -117,  -117,  -117
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -117,  -117,  -117,  -117,  -117,  -117,   -66,   -83,  -117,  -117,
    -117,   -40,   -93,  -117,  -117,  -117,  -117,  -117,  -117,  -117,
    -117,  -117,  -117,  -117,  -117,   -10,   -95,  -117,  -117,  -117,
     -32,  -117,   -52,   -27,   -43,  -117,  -117,  -117,   -81,  -117,
    -117,  -117,  -117,  -117,   115,  -117,  -117,  -116,     1,  -117,
    -117,  -117,   -13,  -117,  -117,   -11,  -117,  -117,   -76,  -117,
      -1
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -118
static const yytype_int16 yytable[] =
{
      29,   105,    28,   125,   169,   126,   127,   111,   122,   143,
      96,    97,  -117,   110,   193,    36,    18,    19,   114,   200,
      22,   153,   144,    34,   115,    41,    63,   172,    64,    65,
      56,    66,   145,    67,    18,    19,   148,    61,    22,    71,
     209,    72,   149,    73,    68,   134,    56,    38,   124,    61,
     154,    37,   194,    74,   201,   153,   190,   191,   139,   135,
      75,    76,   140,   198,    77,    78,    79,   159,   142,   121,
      80,    81,   128,    82,    83,   141,    84,   147,   189,    85,
     150,   151,   197,   176,   132,   155,   156,   177,   215,    18,
      19,   131,   188,    22,    18,    19,    86,    87,    22,   188,
      89,    18,    19,   199,   202,    22,   195,   211,   203,   204,
     205,   206,   207,    56,   173,   192,    27,   175,   174,   171,
     208,   170,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   171,     0,   170,     0,   171,   171,   170,   170,
       0,   216,     0,     0,     0,    56,     0,    56,     2,     3,
       0,     0,     0,     0,     0,     0,   188,     0,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,     0,     0,    10,     0,    11,     0,
      12,    13,     0,     0,    14,    15,    16,    17,     0,     0,
      18,    19,    20,    21,    22,    23,    24,     0,     0,   210,
      74,   212,     0,   171,     0,   170,     0,    75,    76,     0,
     106,    77,    78,    79,     0,     0,     0,    80,    81,   107,
      82,    83,   178,    84,     0,     0,    85,     0,     0,   179,
     180,     4,     0,     6,     7,     8,     0,     0,     0,   181,
       0,    18,    19,    86,    87,    22,    88,    89,     0,     0,
       0,     0,     0,   161,   162,     0,     0,   163,   164,   165,
     166,     0,     0,    18,    19,   167,    21,    22,   182,   168,
      74,     0,     4,     0,     6,     7,     8,    75,    76,     0,
       0,    77,    78,    79,     0,     0,     0,    80,    81,     0,
      82,    83,     0,    84,    12,    13,    85,     0,    14,    15,
      16,    17,     0,     0,    18,    19,    48,    21,    22,    49,
      50,    18,    19,    86,    87,    22,    88,    89,    98,     0,
       4,     0,     6,     7,     8,    99,   100,     0,     0,    77,
      78,    79,     0,     0,     0,   101,    81,     0,    82,    83,
       0,    84,   161,   162,    85,     0,   163,   164,   165,   166,
       0,     0,    18,    19,   167,    21,    22,   213,   168,    18,
      19,    86,    87,    22,   102,    89,    74,     0,     0,     0,
       0,     0,     0,    75,    76,   157,     0,    77,    78,    79,
       0,     0,     0,    80,    81,     0,    82,    83,     0,    84,
       0,     0,    85,     4,     0,     6,     7,     8,   152,     0,
       0,     0,     0,     0,     0,     0,     0,    18,    19,    86,
      87,    22,     0,    89,     0,    12,    13,     0,     0,    14,
      15,    16,    17,     0,     0,    18,    19,    48,    21,    22,
      49,    50,     4,     0,     6,     7,     8,     0,   160,     0,
       0,    77,    78,    79,     0,     0,     0,     0,    81,     0,
      82,    83,     0,    84,   161,   162,    85,     0,   163,   164,
     165,   166,     0,     0,    18,    19,   167,    21,    22,     0,
     168,    18,    19,    86,    87,    22,   186,    89,    77,    78,
      79,     0,     0,     0,     0,    81,     0,    82,    83,     0,
      84,     0,     0,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    18,    19,
      86,    87,    22,     0,    89
};

static const yytype_int16 yycheck[] =
{
       1,    44,     1,    69,   120,    71,    72,    47,    60,   104,
      42,    43,     6,    45,     9,     7,    42,    43,     9,     6,
      46,   114,     1,    46,    15,     9,    24,   122,    26,    27,
      31,    29,    11,    31,    42,    43,     9,     9,    46,    46,
      48,    46,    15,     6,    42,     9,    47,    41,     8,     9,
     116,    43,    47,     1,    41,   148,   137,   138,     9,    18,
       8,     9,     9,   158,    12,    13,    14,   119,    18,    17,
      18,    19,    73,    21,    22,     9,    24,     9,    47,    27,
     112,   113,    18,    29,    85,   117,   118,    29,   204,    42,
      43,    44,   135,    46,    42,    43,    44,    45,    46,   142,
      48,    42,    43,    18,     6,    46,   146,    48,    17,     8,
      47,     9,   195,   114,   124,   142,     1,   130,   129,   120,
     196,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   133,    -1,   133,    -1,   137,   138,   137,   138,
      -1,   207,    -1,    -1,    -1,   146,    -1,   148,     0,     1,
      -1,    -1,    -1,    -1,    -1,    -1,   199,    -1,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    28,    -1,    30,    -1,
      32,    33,    -1,    -1,    36,    37,    38,    39,    -1,    -1,
      42,    43,    44,    45,    46,    47,    48,    -1,    -1,   200,
       1,   202,    -1,   204,    -1,   204,    -1,     8,     9,    -1,
      11,    12,    13,    14,    -1,    -1,    -1,    18,    19,    20,
      21,    22,     1,    24,    -1,    -1,    27,    -1,    -1,     8,
       9,    10,    -1,    12,    13,    14,    -1,    -1,    -1,    18,
      -1,    42,    43,    44,    45,    46,    47,    48,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    -1,    36,    37,    38,
      39,    -1,    -1,    42,    43,    44,    45,    46,    47,    48,
       1,    -1,    10,    -1,    12,    13,    14,     8,     9,    -1,
      -1,    12,    13,    14,    -1,    -1,    -1,    18,    19,    -1,
      21,    22,    -1,    24,    32,    33,    27,    -1,    36,    37,
      38,    39,    -1,    -1,    42,    43,    44,    45,    46,    47,
      48,    42,    43,    44,    45,    46,    47,    48,     1,    -1,
      10,    -1,    12,    13,    14,     8,     9,    -1,    -1,    12,
      13,    14,    -1,    -1,    -1,    18,    19,    -1,    21,    22,
      -1,    24,    32,    33,    27,    -1,    36,    37,    38,    39,
      -1,    -1,    42,    43,    44,    45,    46,    47,    48,    42,
      43,    44,    45,    46,    47,    48,     1,    -1,    -1,    -1,
      -1,    -1,    -1,     8,     9,    10,    -1,    12,    13,    14,
      -1,    -1,    -1,    18,    19,    -1,    21,    22,    -1,    24,
      -1,    -1,    27,    10,    -1,    12,    13,    14,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,
      45,    46,    -1,    48,    -1,    32,    33,    -1,    -1,    36,
      37,    38,    39,    -1,    -1,    42,    43,    44,    45,    46,
      47,    48,    10,    -1,    12,    13,    14,    -1,    16,    -1,
      -1,    12,    13,    14,    -1,    -1,    -1,    -1,    19,    -1,
      21,    22,    -1,    24,    32,    33,    27,    -1,    36,    37,
      38,    39,    -1,    -1,    42,    43,    44,    45,    46,    -1,
      48,    42,    43,    44,    45,    46,    47,    48,    12,    13,
      14,    -1,    -1,    -1,    -1,    19,    -1,    21,    22,    -1,
      24,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    -1,    48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    51,     0,     1,    10,    11,    12,    13,    14,    25,
      28,    30,    32,    33,    36,    37,    38,    39,    42,    43,
      44,    45,    46,    47,    48,    52,    69,    94,    98,   110,
     101,    55,   100,    99,    46,    53,     7,    43,    41,    95,
      70,     9,    73,    72,    71,    54,   108,   109,    44,    47,
      48,    61,    62,    64,    94,    98,   110,   105,   106,   102,
     103,     9,    56,    24,    26,    27,    29,    31,    42,    74,
      75,    46,    46,     6,     1,     8,     9,    12,    13,    14,
      18,    19,    21,    22,    24,    27,    44,    45,    47,    48,
      80,    82,    84,    90,    93,   110,    80,    80,     1,     8,
       9,    18,    47,    79,    81,    84,    11,    20,    58,    60,
      80,    61,    65,    68,     9,    15,    57,    67,    66,    63,
     107,    17,    82,   104,     8,    56,    56,    56,   110,    92,
      91,    44,   110,    87,     9,    18,    76,    85,    86,     9,
       9,     9,    18,    76,     1,    11,    59,     9,     9,    15,
      80,    80,    15,    62,    56,    80,    80,    10,    77,    82,
      16,    32,    33,    36,    37,    38,    39,    44,    48,    97,
      98,   110,    76,    75,   105,   102,    29,    29,     1,     8,
       9,    18,    47,    88,    89,    97,    47,    83,    84,    47,
      88,    88,    83,     9,    47,    61,    78,    18,    76,    18,
       6,    41,     6,    17,     8,    47,     9,    57,   108,    48,
     110,    48,   110,    47,    96,    97,    56
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
# if YYLTYPE_IS_TRIVIAL
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
#line 157 "./turtle_p.y"
    { ttlp_arg->ttlp_special_qnames = ~0; }
    break;

  case 6:
#line 158 "./turtle_p.y"
    { TF_CHANGE_BASE_AND_DEFAULT_GRAPH(ttlp_arg->ttlp_tf,(yyvsp[(2) - (3)].box)); }
    break;

  case 7:
#line 159 "./turtle_p.y"
    {
		caddr_t *old_uri_ptr;
		if (NULL != ttlp_arg->ttlp_namespaces_prefix2iri)
		  old_uri_ptr = (caddr_t *)id_hash_get (ttlp_arg->ttlp_namespaces_prefix2iri, &((yyvsp[(2) - (4)].box)));
		else
		  {
		    ttlp_arg->ttlp_namespaces_prefix2iri = (id_hash_t *)box_dv_dict_hashtable (31);
		    old_uri_ptr = NULL;
		  }
		if (NULL != old_uri_ptr)
		  {
		    int err = strcmp (old_uri_ptr[0], (yyvsp[(3) - (4)].box));
		    dk_free_box ((yyvsp[(2) - (4)].box));
		    dk_free_box ((yyvsp[(3) - (4)].box));
		    if (err)
		      ttlyyerror_action ("Namespace prefix is re-used for a different namespace IRI");
		  }
		else
		  id_hash_set (ttlp_arg->ttlp_namespaces_prefix2iri, &((yyvsp[(2) - (4)].box)), &((yyvsp[(3) - (4)].box))); }
    break;

  case 8:
#line 178 "./turtle_p.y"
    {
		dk_free_box (ttlp_arg->ttlp_default_ns_uri);
		ttlp_arg->ttlp_default_ns_uri = (yyvsp[(3) - (4)].box); }
    break;

  case 9:
#line 181 "./turtle_p.y"
    { dk_free_tree (ttlp_arg->ttlp_subj_uri);
		ttlp_arg->ttlp_subj_uri = ttlp_arg->ttlp_last_complete_uri;
		ttlp_arg->ttlp_last_complete_uri = NULL; }
    break;

  case 12:
#line 186 "./turtle_p.y"
    {
		triple_feed_t *tf = ttlp_arg->ttlp_tf;
		TF_CHANGE_GRAPH_TO_DEFAULT (tf); }
    break;

  case 13:
#line 189 "./turtle_p.y"
    {
		triple_feed_t *tf = ttlp_arg->ttlp_tf; }
    break;

  case 14:
#line 192 "./turtle_p.y"
    { ttlyyerror_action ("Only a triple or a special clause (like prefix declaration) is allowed here"); }
    break;

  case 20:
#line 207 "./turtle_p.y"
    {
		triple_feed_t *tf = ttlp_arg->ttlp_tf;
		TTLYYERROR_ACTION_COND (TTLP_ALLOW_TRIG, "Left curly brace can appear here only if the source text is TriG");
                TF_CHANGE_GRAPH (tf, ttlp_arg->ttlp_subj_uri); }
    break;

  case 21:
#line 211 "./turtle_p.y"
    {
		triple_feed_t *tf = ttlp_arg->ttlp_tf;
		TF_CHANGE_GRAPH_TO_DEFAULT (tf); }
    break;

  case 24:
#line 219 "./turtle_p.y"
    { ttlyyerror_action ("No '{' after an equality sign in TriG"); }
    break;

  case 27:
#line 228 "./turtle_p.y"
    { dk_free_tree (ttlp_arg->ttlp_subj_uri);
		ttlp_arg->ttlp_subj_uri = ttlp_arg->ttlp_last_complete_uri;
		ttlp_arg->ttlp_last_complete_uri = NULL; }
    break;

  case 30:
#line 236 "./turtle_p.y"
    { dk_free_tree (ttlp_arg->ttlp_subj_uri);
		ttlp_arg->ttlp_subj_uri = (yyvsp[(1) - (1)].box); }
    break;

  case 32:
#line 239 "./turtle_p.y"
    { dk_free_tree (ttlp_arg->ttlp_subj_uri);
		ttlp_arg->ttlp_subj_uri = (yyvsp[(1) - (1)].box); }
    break;

  case 34:
#line 242 "./turtle_p.y"
    {
		TTLYYERROR_ACTION_COND (TTLP_SKIP_LITERAL_SUBJECTS, "Virtuoso does not support literal subjects");
		dk_free_tree (ttlp_arg->ttlp_subj_uri); ttlp_arg->ttlp_subj_uri = NULL; }
    break;

  case 36:
#line 246 "./turtle_p.y"
    { dk_free_tree (ttlp_arg->ttlp_subj_uri);
		ttlp_arg->ttlp_subj_uri = NULL; }
    break;

  case 39:
#line 253 "./turtle_p.y"
    { dk_free_tree (ttlp_arg->ttlp_subj_uri);
		ttlp_arg->ttlp_subj_uri = (yyvsp[(1) - (1)].box); }
    break;

  case 41:
#line 256 "./turtle_p.y"
    { dk_free_tree (ttlp_arg->ttlp_subj_uri);
		ttlp_arg->ttlp_subj_uri = (yyvsp[(1) - (1)].box); }
    break;

  case 43:
#line 259 "./turtle_p.y"
    {
		TTLYYERROR_ACTION_COND (TTLP_SKIP_LITERAL_SUBJECTS, "Virtuoso does not support literal subjects");
		dk_free_tree (ttlp_arg->ttlp_subj_uri); ttlp_arg->ttlp_subj_uri = NULL; }
    break;

  case 45:
#line 263 "./turtle_p.y"
    { dk_free_tree (ttlp_arg->ttlp_subj_uri);
		ttlp_arg->ttlp_subj_uri = NULL; }
    break;

  case 48:
#line 270 "./turtle_p.y"
    { ttlp_arg->ttlp_special_qnames &= ~((yyvsp[(1) - (1)].token_type)); }
    break;

  case 49:
#line 271 "./turtle_p.y"
    { ttlp_arg->ttlp_special_qnames &= ~((yyvsp[(3) - (3)].token_type)); }
    break;

  case 50:
#line 275 "./turtle_p.y"
    { (yyval.token_type) = ttlp_bit_of_special_qname ((yyvsp[(1) - (1)].box)); }
    break;

  case 51:
#line 276 "./turtle_p.y"
    { (yyval.token_type) = TTLP_ALLOW_QNAME_A; }
    break;

  case 52:
#line 277 "./turtle_p.y"
    { (yyval.token_type) = TTLP_ALLOW_QNAME_HAS; }
    break;

  case 53:
#line 278 "./turtle_p.y"
    { (yyval.token_type) = TTLP_ALLOW_QNAME_IS; }
    break;

  case 54:
#line 279 "./turtle_p.y"
    { (yyval.token_type) = TTLP_ALLOW_QNAME_OF; }
    break;

  case 55:
#line 280 "./turtle_p.y"
    { (yyval.token_type) = TTLP_ALLOW_QNAME_THIS; }
    break;

  case 59:
#line 291 "./turtle_p.y"
    {
		  TTLYYERROR_ACTION_COND (TTLP_VERB_MAY_BE_BLANK, "Sequence blank node (written as '{...}' formula) can not be used as a predicate"); }
    break;

  case 63:
#line 299 "./turtle_p.y"
    { TTLYYERROR_ACTION_COND (TTLP_ACCEPT_DIRTY_SYNTAX, "Missing predicate and object between top-level blank node subject and a dot"); }
    break;

  case 70:
#line 312 "./turtle_p.y"
    { ttlyyerror_action ("Missing object between top-level blank node and a comma"); }
    break;

  case 71:
#line 313 "./turtle_p.y"
    { ttlyyerror_action ("Missing predicate and object between top-level blank node and a semicolon"); }
    break;

  case 72:
#line 314 "./turtle_p.y"
    { ttlyyerror_action ("Predicate expected after top-level blank node"); }
    break;

  case 75:
#line 320 "./turtle_p.y"
    { ttlyyerror_action ("Missing object before comma"); }
    break;

  case 76:
#line 321 "./turtle_p.y"
    { ttlyyerror_action ("Missing predicate and object before semicolon"); }
    break;

  case 77:
#line 322 "./turtle_p.y"
    { ttlyyerror_action ("Missing predicate and object before dot"); }
    break;

  case 78:
#line 323 "./turtle_p.y"
    { ttlyyerror_action ("Predicate expected"); }
    break;

  case 82:
#line 334 "./turtle_p.y"
    { dk_free_tree (ttlp_arg->ttlp_pred_uri); ttlp_arg->ttlp_pred_uri = (yyvsp[(1) - (1)].box); }
    break;

  case 84:
#line 337 "./turtle_p.y"
    { dk_free_tree (ttlp_arg->ttlp_pred_uri); ttlp_arg->ttlp_pred_uri = (yyvsp[(1) - (1)].box);
		  ttlp_arg->ttlp_pred_is_reverse = 1; }
    break;

  case 85:
#line 339 "./turtle_p.y"
    { ttlp_arg->ttlp_pred_is_reverse = 0; }
    break;

  case 86:
#line 340 "./turtle_p.y"
    {
		  dk_free_tree (ttlp_arg->ttlp_pred_uri);
		  ttlp_arg->ttlp_pred_uri = NULL; }
    break;

  case 90:
#line 352 "./turtle_p.y"
    {; /* triple is made by object */ }
    break;

  case 91:
#line 353 "./turtle_p.y"
    {; /* triple is made by object */ }
    break;

  case 92:
#line 354 "./turtle_p.y"
    { ttlyyerror_action ("Missing object before comma"); }
    break;

  case 93:
#line 355 "./turtle_p.y"
    { ttlyyerror_action ("Missing object before semicolon"); }
    break;

  case 94:
#line 356 "./turtle_p.y"
    { ttlyyerror_action ("Missing object before dot"); }
    break;

  case 95:
#line 357 "./turtle_p.y"
    { ttlyyerror_action ("Object expected"); }
    break;

  case 96:
#line 361 "./turtle_p.y"
    { (yyval.box) = ttlp_arg->ttlp_last_complete_uri; ttlp_arg->ttlp_last_complete_uri = NULL; }
    break;

  case 97:
#line 362 "./turtle_p.y"
    { (yyval.box) = (yyvsp[(1) - (1)].box); }
    break;

  case 98:
#line 363 "./turtle_p.y"
    { (yyval.box) = uname_rdf_ns_uri_type; }
    break;

  case 99:
#line 364 "./turtle_p.y"
    { (yyval.box) = box_dv_uname_string ("http://www.w3.org/2002/07/owl#sameAs"); }
    break;

  case 100:
#line 365 "./turtle_p.y"
    { (yyval.box) = box_dv_uname_string ("http://www.w3.org/2000/10/swap/log#implies"); }
    break;

  case 101:
#line 367 "./turtle_p.y"
    {
		  TTLYYERROR_ACTION_COND (TTLP_VERB_MAY_BE_BLANK, "Blank node (written as '[]') can not be used as a predicate");
		  (yyval.box) = tf_bnode_iid (ttlp_arg->ttlp_tf, NULL);
		  if (TTLP_DEBUG_BNODES & ttlp_arg->ttlp_flags)
		    ttlp_triples_for_bnodes_debug (ttlp_arg, (yyval.box), ttlp_arg->ttlp_lexlineno, NULL);
		}
    break;

  case 102:
#line 374 "./turtle_p.y"
    {
		  TTLYYERROR_ACTION_COND (TTLP_VERB_MAY_BE_BLANK, "Blank node (written as '_:...' label) can not be used as a predicate");
                  if (ttlp_arg->ttlp_formula_iid)
		    (yyval.box) = tf_formula_bnode_iid (ttlp_arg, (yyvsp[(1) - (1)].box));
                  else
		    (yyval.box) = tf_bnode_iid (ttlp_arg->ttlp_tf, (yyvsp[(1) - (1)].box));
		  if (TTLP_DEBUG_BNODES & ttlp_arg->ttlp_flags)
		    ttlp_triples_for_bnodes_debug (ttlp_arg, (yyval.box), ttlp_arg->ttlp_lexlineno, (yyvsp[(1) - (1)].box));
		}
    break;

  case 103:
#line 384 "./turtle_p.y"
    {
		  TTLYYERROR_ACTION_COND (TTLP_VERB_MAY_BE_BLANK, "Blank node (written as '[...]' block) can not be used as a predicate");
		  if (TTLP_DEBUG_BNODES & ttlp_arg->ttlp_flags)
		    (yyval.lexlineno) = ttlp_arg->ttlp_lexlineno;
		}
    break;

  case 104:
#line 390 "./turtle_p.y"
    {
		  (yyval.box) = (yyvsp[(3) - (3)].box);
		  if (TTLP_DEBUG_BNODES & ttlp_arg->ttlp_flags)
		    ttlp_triples_for_bnodes_debug (ttlp_arg, (yyval.box), (yyvsp[(2) - (3)].lexlineno), NULL);
		}
    break;

  case 105:
#line 396 "./turtle_p.y"
    {
		  TTLYYERROR_ACTION_COND (TTLP_VERB_MAY_BE_BLANK, "Sequence blank node (written as list in parenthesis) can not be used as a predicate");
		  if (TTLP_DEBUG_BNODES & ttlp_arg->ttlp_flags)
		    (yyval.lexlineno) = ttlp_arg->ttlp_lexlineno;
		}
    break;

  case 106:
#line 402 "./turtle_p.y"
    {
		  (yyval.box) = (yyvsp[(3) - (3)].box);
		  if (TTLP_DEBUG_BNODES & ttlp_arg->ttlp_flags)
		    ttlp_triples_for_bnodes_debug (ttlp_arg, (yyval.box), (yyvsp[(2) - (3)].lexlineno), NULL);
		}
    break;

  case 107:
#line 410 "./turtle_p.y"
    { (yyval.box) = ttlp_arg->ttlp_last_complete_uri; ttlp_arg->ttlp_last_complete_uri = NULL; }
    break;

  case 108:
#line 411 "./turtle_p.y"
    { (yyval.box) = (yyvsp[(2) - (3)].box); }
    break;

  case 109:
#line 412 "./turtle_p.y"
    { (yyval.box) = box_dv_uname_string ("http://www.w3.org/2000/10/swap/log#implies"); /* Note this 'double reversed' meaning :) */ }
    break;

  case 112:
#line 418 "./turtle_p.y"
    { dk_free_tree ((yyvsp[(1) - (1)].box)); }
    break;

  case 113:
#line 419 "./turtle_p.y"
    { dk_free_tree ((yyvsp[(1) - (1)].box)); }
    break;

  case 114:
#line 420 "./turtle_p.y"
    { dk_free_tree ((yyvsp[(1) - (1)].box)); }
    break;

  case 115:
#line 421 "./turtle_p.y"
    { dk_free_tree ((yyvsp[(1) - (1)].box)); }
    break;

  case 116:
#line 422 "./turtle_p.y"
    { dk_free_tree ((yyvsp[(1) - (2)].box)); dk_free_tree ((yyvsp[(2) - (2)].box)); }
    break;

  case 117:
#line 423 "./turtle_p.y"
    { dk_free_tree ((yyvsp[(1) - (1)].box)); }
    break;

  case 118:
#line 423 "./turtle_p.y"
    {
			dk_free_tree (ttlp_arg->ttlp_last_complete_uri);
			ttlp_arg->ttlp_last_complete_uri = NULL; }
    break;

  case 121:
#line 434 "./turtle_p.y"
    {
		dk_free_tree (ttlp_arg->ttlp_obj);
		ttlp_arg->ttlp_obj = ttlp_arg->ttlp_last_complete_uri;
		ttlp_arg->ttlp_last_complete_uri = NULL;
		ttlp_triple_and_inf (ttlp_arg, ttlp_arg->ttlp_obj); }
    break;

  case 122:
#line 439 "./turtle_p.y"
    {
		dk_free_tree (ttlp_arg->ttlp_obj);
		ttlp_arg->ttlp_obj = (yyvsp[(1) - (1)].box);
		ttlp_triple_and_inf (ttlp_arg, (yyvsp[(1) - (1)].box)); }
    break;

  case 123:
#line 443 "./turtle_p.y"
    {
		dk_free_tree (ttlp_arg->ttlp_obj);
		ttlp_arg->ttlp_obj = (yyvsp[(1) - (1)].box);
		ttlp_triple_and_inf (ttlp_arg, (yyvsp[(1) - (1)].box)); }
    break;

  case 124:
#line 447 "./turtle_p.y"
    {
		ttlp_triple_l_and_inf (ttlp_arg, (caddr_t)((ptrlong)1), uname_xmlschema_ns_uri_hash_boolean, NULL); }
    break;

  case 125:
#line 449 "./turtle_p.y"
    {
		ttlp_triple_l_and_inf (ttlp_arg, (caddr_t)((ptrlong)0), uname_xmlschema_ns_uri_hash_boolean, NULL); }
    break;

  case 126:
#line 451 "./turtle_p.y"
    {
		dk_free_tree (ttlp_arg->ttlp_obj);
		ttlp_arg->ttlp_obj = (yyvsp[(1) - (1)].box);
		ttlp_triple_l_and_inf (ttlp_arg, (yyvsp[(1) - (1)].box), uname_xmlschema_ns_uri_hash_integer, NULL); }
    break;

  case 127:
#line 455 "./turtle_p.y"
    {
		dk_free_tree (ttlp_arg->ttlp_obj);
		ttlp_arg->ttlp_obj = (yyvsp[(1) - (1)].box);
		ttlp_triple_l_and_inf (ttlp_arg, (yyvsp[(1) - (1)].box), uname_xmlschema_ns_uri_hash_decimal, NULL); }
    break;

  case 128:
#line 459 "./turtle_p.y"
    {
		dk_free_tree (ttlp_arg->ttlp_obj);
		ttlp_arg->ttlp_obj = (yyvsp[(1) - (1)].box);
		ttlp_triple_l_and_inf (ttlp_arg, (yyvsp[(1) - (1)].box), uname_xmlschema_ns_uri_hash_double, NULL);	}
    break;

  case 129:
#line 463 "./turtle_p.y"
    {
		dk_free_tree (ttlp_arg->ttlp_obj);
		ttlp_arg->ttlp_obj = (yyvsp[(1) - (1)].box);
		ttlp_triple_l_and_inf (ttlp_arg, (yyvsp[(1) - (1)].box), NULL, NULL); }
    break;

  case 130:
#line 467 "./turtle_p.y"
    {
		dk_free_tree (ttlp_arg->ttlp_obj);
		ttlp_arg->ttlp_obj = (yyvsp[(1) - (2)].box);
		dk_free_tree (ttlp_arg->ttlp_obj_lang);
		ttlp_arg->ttlp_obj_lang = (yyvsp[(2) - (2)].box);
		ttlp_triple_l_and_inf (ttlp_arg, (yyvsp[(1) - (2)].box), NULL, (yyvsp[(2) - (2)].box));	}
    break;

  case 131:
#line 473 "./turtle_p.y"
    {
		dk_free_tree (ttlp_arg->ttlp_obj);
		ttlp_arg->ttlp_obj = (yyvsp[(1) - (3)].box);
		dk_free_tree (ttlp_arg->ttlp_obj_type);
		ttlp_arg->ttlp_obj_type = ttlp_arg->ttlp_last_complete_uri;
		ttlp_arg->ttlp_last_complete_uri = NULL;
		ttlp_triple_l_and_inf (ttlp_arg, ttlp_arg->ttlp_obj, ttlp_arg->ttlp_obj_type, NULL);	}
    break;

  case 132:
#line 480 "./turtle_p.y"
    { }
    break;

  case 133:
#line 481 "./turtle_p.y"
    {
		dk_free_tree (ttlp_arg->ttlp_obj);
		ttlp_arg->ttlp_obj = (yyvsp[(1) - (3)].box); }
    break;

  case 134:
#line 484 "./turtle_p.y"
    {
		dk_free_tree (ttlp_arg->ttlp_last_complete_uri);
		ttlp_arg->ttlp_last_complete_uri = NULL; }
    break;

  case 135:
#line 487 "./turtle_p.y"
    { }
    break;

  case 136:
#line 492 "./turtle_p.y"
    {
                  if (ttlp_arg->ttlp_formula_iid)
		    (yyval.box) = tf_formula_bnode_iid (ttlp_arg, (yyvsp[(1) - (1)].box));
                  else
		    (yyval.box) = tf_bnode_iid (ttlp_arg->ttlp_tf, (yyvsp[(1) - (1)].box));
		  if (TTLP_DEBUG_BNODES & ttlp_arg->ttlp_flags)
		    ttlp_triples_for_bnodes_debug (ttlp_arg, (yyval.box), ttlp_arg->ttlp_lexlineno, (yyvsp[(1) - (1)].box));
		}
    break;

  case 137:
#line 501 "./turtle_p.y"
    {
		  (yyval.box) = tf_bnode_iid (ttlp_arg->ttlp_tf, NULL);
		  if (TTLP_DEBUG_BNODES & ttlp_arg->ttlp_flags)
		    ttlp_triples_for_bnodes_debug (ttlp_arg, (yyval.box), ttlp_arg->ttlp_lexlineno, NULL);
		}
    break;

  case 138:
#line 507 "./turtle_p.y"
    {
		  if (TTLP_DEBUG_BNODES & ttlp_arg->ttlp_flags)
		    (yyval.lexlineno) = ttlp_arg->ttlp_lexlineno;
		}
    break;

  case 139:
#line 512 "./turtle_p.y"
    {
		  (yyval.box) = (yyvsp[(3) - (3)].box);
		  if (TTLP_DEBUG_BNODES & ttlp_arg->ttlp_flags)
		    ttlp_triples_for_bnodes_debug (ttlp_arg, (yyval.box), (yyvsp[(2) - (3)].lexlineno), NULL);
		}
    break;

  case 140:
#line 518 "./turtle_p.y"
    {
		  if (TTLP_DEBUG_BNODES & ttlp_arg->ttlp_flags)
		    (yyval.lexlineno) = ttlp_arg->ttlp_lexlineno;
		}
    break;

  case 141:
#line 523 "./turtle_p.y"
    {
		  (yyval.box) = (yyvsp[(3) - (3)].box);
		  if (TTLP_DEBUG_BNODES & ttlp_arg->ttlp_flags)
		    ttlp_triples_for_bnodes_debug (ttlp_arg, (yyval.box), (yyvsp[(2) - (3)].lexlineno), NULL);
		}
    break;

  case 142:
#line 529 "./turtle_p.y"
    {
		  if (TTLP_DEBUG_BNODES & ttlp_arg->ttlp_flags)
		    (yyval.lexlineno) = ttlp_arg->ttlp_lexlineno;
		}
    break;

  case 143:
#line 534 "./turtle_p.y"
    {
		  (yyval.box) = (yyvsp[(3) - (3)].box);
		  if (TTLP_DEBUG_BNODES & ttlp_arg->ttlp_flags)
		    ttlp_triples_for_bnodes_debug (ttlp_arg, (yyval.box), (yyvsp[(2) - (3)].lexlineno), NULL);
		}
    break;

  case 144:
#line 543 "./turtle_p.y"
    { dk_set_push (&(ttlp_arg->ttlp_saved_uris), (void *)(ptrlong)ttlp_arg->ttlp_pred_is_reverse);
                  dk_set_push (&(ttlp_arg->ttlp_saved_uris), ttlp_arg->ttlp_subj_uri);
		  dk_set_push (&(ttlp_arg->ttlp_saved_uris), ttlp_arg->ttlp_pred_uri);
		  ttlp_arg->ttlp_pred_is_reverse = 0;
		  ttlp_arg->ttlp_subj_uri = tf_bnode_iid (ttlp_arg->ttlp_tf, NULL);
		  ttlp_arg->ttlp_pred_uri = NULL; }
    break;

  case 145:
#line 549 "./turtle_p.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 146:
#line 554 "./turtle_p.y"
    { (yyval.box) = ttlp_arg->ttlp_subj_uri;
		  dk_free_tree (ttlp_arg->ttlp_pred_uri);
		  ttlp_arg->ttlp_pred_uri = dk_set_pop (&(ttlp_arg->ttlp_saved_uris));
		  ttlp_arg->ttlp_subj_uri = dk_set_pop (&(ttlp_arg->ttlp_saved_uris));
                  ttlp_arg->ttlp_pred_is_reverse = (ptrlong)dk_set_pop (&(ttlp_arg->ttlp_saved_uris)); }
    break;

  case 147:
#line 560 "./turtle_p.y"
    { (yyval.box) = ttlp_arg->ttlp_subj_uri;
		  dk_free_tree (ttlp_arg->ttlp_pred_uri);
		  ttlp_arg->ttlp_pred_uri = dk_set_pop (&(ttlp_arg->ttlp_saved_uris));
		  ttlp_arg->ttlp_subj_uri = dk_set_pop (&(ttlp_arg->ttlp_saved_uris));
                  ttlp_arg->ttlp_pred_is_reverse = (ptrlong)dk_set_pop (&(ttlp_arg->ttlp_saved_uris)); }
    break;

  case 148:
#line 568 "./turtle_p.y"
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

  case 149:
#line 580 "./turtle_p.y"
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

  case 150:
#line 602 "./turtle_p.y"
    {}
    break;

  case 151:
#line 603 "./turtle_p.y"
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

  case 152:
#line 622 "./turtle_p.y"
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

  case 153:
#line 632 "./turtle_p.y"
    { (yyval.box) = ttlp_arg->ttlp_formula_iid;
		  dk_free_tree (ttlp_arg->ttlp_subj_uri);
		  dk_free_tree (ttlp_arg->ttlp_pred_uri);
		  ttlp_arg->ttlp_pred_uri = dk_set_pop (&(ttlp_arg->ttlp_saved_uris));
		  ttlp_arg->ttlp_subj_uri = dk_set_pop (&(ttlp_arg->ttlp_saved_uris));
		  ttlp_arg->ttlp_pred_is_reverse = (ptrlong)dk_set_pop (&(ttlp_arg->ttlp_saved_uris));
		  ttlp_arg->ttlp_formula_iid = dk_set_pop (&(ttlp_arg->ttlp_saved_uris)); }
    break;

  case 154:
#line 643 "./turtle_p.y"
    {
                  if (NULL != ttlp_arg->ttlp_last_complete_uri)
		    ttlyyerror_action ("Internal error: proven memory leak");
		  ttlp_arg->ttlp_last_complete_uri = (yyvsp[(1) - (1)].box);
		  TTLP_URI_RESOLVE_IF_NEEDED(ttlp_arg->ttlp_last_complete_uri);
		 }
    break;

  case 155:
#line 650 "./turtle_p.y"
    {
                  if (NULL != ttlp_arg->ttlp_last_complete_uri)
		    ttlyyerror_action ("Internal error: proven memory leak");
		  ttlp_arg->ttlp_last_complete_uri = (yyvsp[(1) - (1)].box);
		  ttlp_arg->ttlp_last_complete_uri = ttlp_expand_qname_prefix (ttlp_arg, ttlp_arg->ttlp_last_complete_uri);
		  TTLP_URI_RESOLVE_IF_NEEDED(ttlp_arg->ttlp_last_complete_uri);
		}
    break;

  case 156:
#line 658 "./turtle_p.y"
    {
                  if (NULL != ttlp_arg->ttlp_last_complete_uri)
		    ttlyyerror_action ("Internal error: proven memory leak");
		  ttlp_arg->ttlp_last_complete_uri = (yyvsp[(1) - (1)].box);
		  ttlp_arg->ttlp_last_complete_uri = ttlp_expand_qname_prefix (ttlp_arg, ttlp_arg->ttlp_last_complete_uri);
		  TTLP_URI_RESOLVE_IF_NEEDED(ttlp_arg->ttlp_last_complete_uri);
		}
    break;


/* Line 1267 of yacc.c.  */
#line 2517 "turtle_p.c"
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



