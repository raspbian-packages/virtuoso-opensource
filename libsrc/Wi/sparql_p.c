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
#define yyparse sparyyparse
#define yylex   sparyylex
#define yyerror sparyyerror
#define yylval  sparyylval
#define yychar  sparyychar
#define yydebug sparyydebug
#define yynerrs sparyynerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     __SPAR_PUNCT_BEGIN = 258,
     _AMP_AMP = 259,
     _BACKQUOTE = 260,
     _BANG = 261,
     _BAR_BAR = 262,
     _CARET_CARET = 263,
     _COMMA = 264,
     _DOT = 265,
     _EQ = 266,
     _GE = 267,
     _GT = 268,
     _LBRA = 269,
     _LE = 270,
     _LPAR = 271,
     _LSQBRA = 272,
     _LT = 273,
     _MINUS = 274,
     _NOT_EQ = 275,
     _PLUS = 276,
     _PLUS_GT = 277,
     _RBRA = 278,
     _RPAR = 279,
     _RSQBRA = 280,
     _SEMI = 281,
     _SLASH = 282,
     _STAR = 283,
     _STAR_GT = 284,
     a_L = 285,
     ALTER_L = 286,
     AS_L = 287,
     ASC_L = 288,
     ASK_L = 289,
     AVG_L = 290,
     BASE_L = 291,
     BIJECTION_L = 292,
     BINDINGS_L = 293,
     BOUND_L = 294,
     BY_L = 295,
     CLASS_L = 296,
     CLEAR_L = 297,
     CREATE_L = 298,
     COALESCE_L = 299,
     CONSTRUCT_L = 300,
     COUNT_LPAR = 301,
     COUNT_DISTINCT_L = 302,
     DATA_L = 303,
     DATATYPE_L = 304,
     DEFAULT_L = 305,
     DEFINE_L = 306,
     DELETE_L = 307,
     DEREF_L = 308,
     DESC_L = 309,
     DESCRIBE_L = 310,
     DISTINCT_L = 311,
     DROP_L = 312,
     EXCLUSIVE_L = 313,
     EXISTS_L = 314,
     false_L = 315,
     FILTER_L = 316,
     FROM_L = 317,
     FUNCTION_L = 318,
     GRAPH_L = 319,
     GROUP_L = 320,
     HAVING_L = 321,
     IDENTIFIED_L = 322,
     IF_L = 323,
     IFP_L = 324,
     IN_L = 325,
     INDEX_L = 326,
     INFERENCE_L = 327,
     INSERT_L = 328,
     INTO_L = 329,
     IRI_L = 330,
     isBLANK_L = 331,
     isIRI_L = 332,
     isLITERAL_L = 333,
     isREF_L = 334,
     isURI_L = 335,
     LANG_L = 336,
     LANGMATCHES_L = 337,
     LIKE_L = 338,
     LIMIT_L = 339,
     LITERAL_L = 340,
     LOAD_L = 341,
     MAKE_L = 342,
     MAP_L = 343,
     MAX_L = 344,
     MIN_L = 345,
     MINUS_L = 346,
     MODIFY_L = 347,
     NAMED_L = 348,
     NIL_L = 349,
     NOT_L = 350,
     NOT_FROM_L = 351,
     NULL_L = 352,
     OBJECT_L = 353,
     OF_L = 354,
     OFFBAND_L = 355,
     OFFSET_L = 356,
     OPTIONAL_L = 357,
     OPTION_L = 358,
     ORDER_L = 359,
     PREDICATE_L = 360,
     PREFIX_L = 361,
     QUAD_L = 362,
     REGEX_L = 363,
     REDUCED_L = 364,
     RETURNS_L = 365,
     SAME_AS_L = 366,
     SAME_AS_O_L = 367,
     SAME_AS_P_L = 368,
     SAME_AS_S_L = 369,
     SAME_AS_S_O_L = 370,
     SAMETERM_L = 371,
     SCORE_L = 372,
     SCORE_LIMIT_L = 373,
     SELECT_L = 374,
     SERVICE_L = 375,
     SILENT_L = 376,
     SOFT_L = 377,
     SQLQUERY_L = 378,
     STORAGE_L = 379,
     STR_L = 380,
     SUBCLASS_L = 381,
     SUBJECT_L = 382,
     SUM_L = 383,
     TABLE_OPTION_L = 384,
     T_CYCLES_ONLY_L = 385,
     T_DIRECTION_L = 386,
     T_DISTINCT_L = 387,
     T_END_FLAG_L = 388,
     T_EXISTS_L = 389,
     T_FINAL_AS_L = 390,
     T_IN_L = 391,
     T_MAX_L = 392,
     T_MIN_L = 393,
     T_OUT_L = 394,
     T_NO_CYCLES_L = 395,
     T_NO_ORDER_L = 396,
     T_SHORTEST_ONLY_L = 397,
     T_STEP_L = 398,
     TRANSITIVE_L = 399,
     true_L = 400,
     UNBOUND_L = 401,
     UNION_L = 402,
     USING_L = 403,
     WHERE_L = 404,
     WITH_L = 405,
     __SPAR_PUNCT_END = 406,
     START_OF_SPARQL_TEXT = 407,
     END_OF_SPARQL_TEXT = 408,
     SPARUL_RUN_SUBTYPE = 409,
     SPARUL_INSERT_DATA = 410,
     SPARUL_DELETE_DATA = 411,
     __SPAR_NONPUNCT_START = 412,
     TEXT_BL = 413,
     XML_BL = 414,
     SPARQL_INTEGER = 415,
     SPARQL_DECIMAL = 416,
     SPARQL_DOUBLE = 417,
     SPARQL_STRING = 418,
     SPARQL_SQLTEXT = 419,
     LANGTAG = 420,
     QNAME = 421,
     QNAME_NS = 422,
     BLANK_NODE_LABEL = 423,
     Q_IRI_REF = 424,
     QUEST_VARNAME = 425,
     DOLLAR_VARNAME = 426,
     QUEST_COLON_PARAMNAME = 427,
     DOLLAR_COLON_PARAMNAME = 428,
     QUEST_COLON_PARAMNUM = 429,
     DOLLAR_COLON_PARAMNUM = 430,
     SPARQL_PLAIN_ID = 431,
     SPARQL_SQL_ALIASCOLNAME = 432,
     SPARQL_SQL_QTABLENAME = 433,
     SPARQL_SQL_QTABLECOLNAME = 434,
     __SPAR_NONPUNCT_END = 435,
     _COLON = 436,
     UMINUS = 437,
     UPLUS = 438
   };
#endif
/* Tokens.  */
#define __SPAR_PUNCT_BEGIN 258
#define _AMP_AMP 259
#define _BACKQUOTE 260
#define _BANG 261
#define _BAR_BAR 262
#define _CARET_CARET 263
#define _COMMA 264
#define _DOT 265
#define _EQ 266
#define _GE 267
#define _GT 268
#define _LBRA 269
#define _LE 270
#define _LPAR 271
#define _LSQBRA 272
#define _LT 273
#define _MINUS 274
#define _NOT_EQ 275
#define _PLUS 276
#define _PLUS_GT 277
#define _RBRA 278
#define _RPAR 279
#define _RSQBRA 280
#define _SEMI 281
#define _SLASH 282
#define _STAR 283
#define _STAR_GT 284
#define a_L 285
#define ALTER_L 286
#define AS_L 287
#define ASC_L 288
#define ASK_L 289
#define AVG_L 290
#define BASE_L 291
#define BIJECTION_L 292
#define BINDINGS_L 293
#define BOUND_L 294
#define BY_L 295
#define CLASS_L 296
#define CLEAR_L 297
#define CREATE_L 298
#define COALESCE_L 299
#define CONSTRUCT_L 300
#define COUNT_LPAR 301
#define COUNT_DISTINCT_L 302
#define DATA_L 303
#define DATATYPE_L 304
#define DEFAULT_L 305
#define DEFINE_L 306
#define DELETE_L 307
#define DEREF_L 308
#define DESC_L 309
#define DESCRIBE_L 310
#define DISTINCT_L 311
#define DROP_L 312
#define EXCLUSIVE_L 313
#define EXISTS_L 314
#define false_L 315
#define FILTER_L 316
#define FROM_L 317
#define FUNCTION_L 318
#define GRAPH_L 319
#define GROUP_L 320
#define HAVING_L 321
#define IDENTIFIED_L 322
#define IF_L 323
#define IFP_L 324
#define IN_L 325
#define INDEX_L 326
#define INFERENCE_L 327
#define INSERT_L 328
#define INTO_L 329
#define IRI_L 330
#define isBLANK_L 331
#define isIRI_L 332
#define isLITERAL_L 333
#define isREF_L 334
#define isURI_L 335
#define LANG_L 336
#define LANGMATCHES_L 337
#define LIKE_L 338
#define LIMIT_L 339
#define LITERAL_L 340
#define LOAD_L 341
#define MAKE_L 342
#define MAP_L 343
#define MAX_L 344
#define MIN_L 345
#define MINUS_L 346
#define MODIFY_L 347
#define NAMED_L 348
#define NIL_L 349
#define NOT_L 350
#define NOT_FROM_L 351
#define NULL_L 352
#define OBJECT_L 353
#define OF_L 354
#define OFFBAND_L 355
#define OFFSET_L 356
#define OPTIONAL_L 357
#define OPTION_L 358
#define ORDER_L 359
#define PREDICATE_L 360
#define PREFIX_L 361
#define QUAD_L 362
#define REGEX_L 363
#define REDUCED_L 364
#define RETURNS_L 365
#define SAME_AS_L 366
#define SAME_AS_O_L 367
#define SAME_AS_P_L 368
#define SAME_AS_S_L 369
#define SAME_AS_S_O_L 370
#define SAMETERM_L 371
#define SCORE_L 372
#define SCORE_LIMIT_L 373
#define SELECT_L 374
#define SERVICE_L 375
#define SILENT_L 376
#define SOFT_L 377
#define SQLQUERY_L 378
#define STORAGE_L 379
#define STR_L 380
#define SUBCLASS_L 381
#define SUBJECT_L 382
#define SUM_L 383
#define TABLE_OPTION_L 384
#define T_CYCLES_ONLY_L 385
#define T_DIRECTION_L 386
#define T_DISTINCT_L 387
#define T_END_FLAG_L 388
#define T_EXISTS_L 389
#define T_FINAL_AS_L 390
#define T_IN_L 391
#define T_MAX_L 392
#define T_MIN_L 393
#define T_OUT_L 394
#define T_NO_CYCLES_L 395
#define T_NO_ORDER_L 396
#define T_SHORTEST_ONLY_L 397
#define T_STEP_L 398
#define TRANSITIVE_L 399
#define true_L 400
#define UNBOUND_L 401
#define UNION_L 402
#define USING_L 403
#define WHERE_L 404
#define WITH_L 405
#define __SPAR_PUNCT_END 406
#define START_OF_SPARQL_TEXT 407
#define END_OF_SPARQL_TEXT 408
#define SPARUL_RUN_SUBTYPE 409
#define SPARUL_INSERT_DATA 410
#define SPARUL_DELETE_DATA 411
#define __SPAR_NONPUNCT_START 412
#define TEXT_BL 413
#define XML_BL 414
#define SPARQL_INTEGER 415
#define SPARQL_DECIMAL 416
#define SPARQL_DOUBLE 417
#define SPARQL_STRING 418
#define SPARQL_SQLTEXT 419
#define LANGTAG 420
#define QNAME 421
#define QNAME_NS 422
#define BLANK_NODE_LABEL 423
#define Q_IRI_REF 424
#define QUEST_VARNAME 425
#define DOLLAR_VARNAME 426
#define QUEST_COLON_PARAMNAME 427
#define DOLLAR_COLON_PARAMNAME 428
#define QUEST_COLON_PARAMNUM 429
#define DOLLAR_COLON_PARAMNUM 430
#define SPARQL_PLAIN_ID 431
#define SPARQL_SQL_ALIASCOLNAME 432
#define SPARQL_SQL_QTABLENAME 433
#define SPARQL_SQL_QTABLECOLNAME 434
#define __SPAR_NONPUNCT_END 435
#define _COLON 436
#define UMINUS 437
#define UPLUS 438




/* Copy the first part of user declarations.  */
#line 41 "./sparql_p.y"


#define YYPARSE_PARAM sparp_as_void
#define YYLEX_PARAM YYPARSE_PARAM
#include "libutil.h"
#include "sqlnode.h"
#include "sqlparext.h"
#include "sparql.h"
#include "sparql2sql.h"
#include "xmltree.h"
/*#include "langfunc.h"*/

#define sparp_arg ((sparp_t *)(sparp_as_void))

#ifdef DEBUG
#define sparyyerror(strg) sparyyerror_impl_1(sparp_arg, NULL, yystate, yyssa, yyssp, (strg))
#else
#define sparyyerror(strg) sparyyerror_impl(sparp_arg, NULL, (strg))
#endif

#ifdef XPYYDEBUG
#define YYDEBUG 1
#endif

#define sparyylex(lval_ptr, param) sparyylex_from_sparp_bufs ((caddr_t *)(lval_ptr), ((sparp_t *)(param)))

#define SPAR_BIN_OP(dst,op,l,r) (dst) = spartlist (sparp_arg, 3, (op), (l), (r))


#define bmk_offset sparp_curr_lexem_bmk.sparlb_offset
#define bmk_bufs_tail sparp_curr_lexem_bmk.sparlb_lexem_bufs_tail

int sparyylex_from_sparp_bufs (caddr_t *yylval, sparp_t *sparp)
{
  spar_lexem_t *sparl;
  while (sparp->bmk_offset >= sparp->sparp_lexem_buf_len)
    {
      sparp->bmk_bufs_tail = sparp->bmk_bufs_tail->next;
      if (NULL == sparp->bmk_bufs_tail)
	{
	  /*sparp->sparp_curr_lexem = NULL; -- commented out to have at least 'some' current lexem */
	  return 0;
	}
      sparp->sparp_lexem_buf_len = box_length (sparp->bmk_bufs_tail->data) / sizeof (spar_lexem_t);
      sparp->bmk_offset = 0;
    }
  sparl = ((spar_lexem_t *)(sparp->bmk_bufs_tail->data)) + sparp->bmk_offset;
  yylval[0] = sparl->sparl_sem_value;
  sparp->sparp_curr_lexem = sparl;
  sparp->bmk_offset += 1;
  return (int) sparl->sparl_lex_value;
}



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
#line 97 "./sparql_p.y"
{
  caddr_t box;
  caddr_t *boxes;
  ptrlong token_type;
  SPART *tree;
  SPART **trees;
  dk_set_t list;
  dk_set_t backstack;
  spar_lexbmk_t *bookmark;
  void *nothing;
}
/* Line 187 of yacc.c.  */
#line 537 "sparql_p.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 550 "sparql_p.c"

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3778

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  184
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  271
/* YYNRULES -- Number of rules.  */
#define YYNRULES  619
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1036

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   438

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    13,    16,    21,    23,    25,    27,
      29,    31,    35,    36,    39,    40,    45,    47,    51,    53,
      55,    57,    59,    61,    62,    65,    68,    69,    72,    76,
      79,    82,    83,    90,    92,    95,    98,   101,   102,   105,
     107,   109,   111,   112,   120,   121,   129,   131,   133,   134,
     139,   140,   143,   147,   149,   152,   155,   159,   161,   164,
     165,   166,   171,   173,   176,   179,   184,   185,   188,   189,
     191,   192,   199,   200,   205,   208,   209,   211,   212,   213,
     221,   223,   226,   228,   230,   232,   233,   235,   237,   240,
     244,   246,   249,   251,   253,   255,   257,   259,   261,   265,
     271,   277,   278,   279,   284,   286,   289,   293,   297,   299,
     301,   303,   304,   305,   309,   310,   311,   316,   318,   321,
     326,   331,   334,   336,   338,   340,   341,   343,   345,   346,
     348,   351,   352,   354,   357,   361,   362,   371,   373,   377,
     382,   384,   386,   388,   390,   392,   394,   395,   400,   403,
     404,   405,   406,   415,   416,   417,   424,   425,   429,   430,
     436,   441,   444,   447,   451,   454,   456,   459,   460,   465,
     466,   467,   468,   478,   479,   483,   485,   488,   491,   495,
     498,   501,   502,   507,   508,   510,   513,   515,   519,   520,
     522,   524,   528,   529,   533,   534,   538,   539,   541,   544,
     548,   549,   553,   554,   560,   564,   568,   570,   572,   576,
     580,   584,   588,   590,   593,   594,   595,   601,   603,   607,
     609,   612,   615,   618,   621,   624,   627,   630,   633,   635,
     638,   640,   643,   645,   648,   653,   656,   659,   661,   663,
     668,   670,   677,   684,   686,   691,   693,   695,   699,   701,
     703,   705,   707,   709,   711,   713,   715,   716,   721,   722,
     727,   730,   732,   735,   737,   740,   742,   744,   746,   748,
     750,   753,   755,   757,   759,   763,   765,   767,   769,   771,
     773,   775,   777,   781,   785,   787,   790,   794,   798,   803,
     805,   807,   810,   813,   816,   819,   821,   823,   825,   828,
     830,   832,   834,   836,   838,   840,   842,   844,   847,   850,
     852,   854,   856,   858,   859,   864,   868,   872,   876,   880,
     884,   888,   889,   894,   895,   902,   906,   910,   914,   918,
     922,   926,   930,   934,   937,   940,   943,   946,   950,   951,
     959,   960,   970,   972,   974,   977,   979,   981,   983,   985,
     987,   992,   997,  1004,  1009,  1014,  1021,  1026,  1031,  1036,
    1041,  1043,  1044,  1050,  1051,  1057,  1066,  1071,  1078,  1087,
    1090,  1091,  1093,  1095,  1098,  1102,  1104,  1108,  1112,  1115,
    1117,  1119,  1121,  1123,  1126,  1130,  1132,  1134,  1136,  1138,
    1140,  1142,  1144,  1147,  1150,  1153,  1156,  1158,  1160,  1162,
    1164,  1166,  1169,  1171,  1174,  1176,  1178,  1180,  1182,  1184,
    1186,  1188,  1190,  1192,  1193,  1199,  1200,  1206,  1207,  1213,
    1214,  1220,  1221,  1230,  1233,  1236,  1242,  1247,  1252,  1253,
    1258,  1259,  1263,  1264,  1268,  1269,  1272,  1274,  1276,  1277,
    1279,  1281,  1282,  1287,  1289,  1291,  1293,  1295,  1297,  1299,
    1301,  1303,  1311,  1319,  1325,  1333,  1339,  1340,  1344,  1349,
    1351,  1355,  1358,  1361,  1364,  1366,  1368,  1371,  1373,  1377,
    1378,  1379,  1389,  1391,  1393,  1394,  1395,  1405,  1411,  1417,
    1424,  1428,  1433,  1434,  1435,  1443,  1449,  1450,  1459,  1462,
    1463,  1466,  1473,  1474,  1476,  1477,  1482,  1483,  1488,  1490,
    1494,  1496,  1499,  1501,  1504,  1508,  1510,  1511,  1516,  1518,
    1520,  1522,  1524,  1527,  1531,  1533,  1534,  1539,  1540,  1546,
    1553,  1561,  1562,  1568,  1570,  1572,  1573,  1579,  1583,  1584,
    1588,  1590,  1593,  1596,  1599,  1602,  1603,  1604,  1611,  1613,
    1614,  1619,  1620,  1624,  1626,  1629,  1630,  1636,  1637,  1638,
    1639,  1640,  1650,  1652,  1653,  1656,  1657,  1660,  1666,  1669,
    1670,  1673,  1676,  1678,  1681,  1683,  1685,  1688,  1690,  1692,
    1694,  1699,  1701,  1702,  1704,  1706,  1709,  1713,  1716,  1719,
    1721,  1722,  1726,  1731,  1733,  1737,  1740,  1742,  1745,  1748,
    1749,  1751,  1753,  1757,  1759,  1763,  1769,  1773,  1774,  1776,
    1778,  1782,  1786,  1788,  1792,  1794,  1796,  1798,  1800,  1802,
    1804,  1806,  1808,  1810,  1815,  1816,  1818,  1820,  1824,  1826
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     185,     0,    -1,   152,   187,   186,   153,    -1,   152,   187,
     343,   153,    -1,   152,   153,    -1,   152,   187,   365,   454,
      -1,     1,    -1,   196,    -1,   202,    -1,   204,    -1,   207,
      -1,   188,   193,   194,    -1,    -1,   188,   189,    -1,    -1,
      51,   190,   166,   191,    -1,   192,    -1,   191,     9,   192,
      -1,   166,    -1,   169,    -1,   163,    -1,   160,    -1,   316,
      -1,    -1,    36,   169,    -1,    36,     1,    -1,    -1,   194,
     195,    -1,   106,   167,   169,    -1,   106,   167,    -1,   106,
       1,    -1,    -1,   198,   197,   199,   209,   219,   234,    -1,
     119,    -1,   119,   109,    -1,   119,    56,    -1,   119,    47,
      -1,    -1,   200,   201,    -1,    28,    -1,   311,    -1,   310,
      -1,    -1,    45,   203,   277,   209,   222,   234,   223,    -1,
      -1,    55,   205,   206,   209,   218,   234,   223,    -1,    28,
      -1,   306,    -1,    -1,    34,   208,   209,   222,    -1,    -1,
     209,   210,    -1,   211,   340,   212,    -1,    62,    -1,    62,
      93,    -1,    95,    62,    -1,    95,    62,    93,    -1,    96,
      -1,    96,    93,    -1,    -1,    -1,   103,    16,   213,   214,
      -1,    24,    -1,   215,    24,    -1,   166,   216,    -1,   215,
       9,   166,   216,    -1,    -1,   217,   321,    -1,    -1,   222,
      -1,    -1,   149,    14,   220,   252,    23,   223,    -1,    -1,
      14,   221,   252,    23,    -1,   219,   223,    -1,    -1,   224,
      -1,    -1,    -1,    38,   225,   227,    14,   226,   229,    23,
      -1,   228,    -1,   227,   228,    -1,   170,    -1,   171,    -1,
     316,    -1,    -1,   230,    -1,   231,    -1,   230,   231,    -1,
      16,   232,    24,    -1,   233,    -1,   232,   233,    -1,   340,
      -1,   334,    -1,   335,    -1,   336,    -1,   342,    -1,   146,
      -1,   235,   239,   241,    -1,   235,   239,   241,   247,   248,
      -1,   235,   239,   241,   249,   246,    -1,    -1,    -1,    65,
      40,   236,   237,    -1,   238,    -1,   237,   238,    -1,    16,
     321,    24,    -1,    17,   321,    25,    -1,   326,    -1,   330,
      -1,   315,    -1,    -1,    -1,    66,   240,   321,    -1,    -1,
      -1,   104,    40,   242,   243,    -1,   244,    -1,   243,   244,
      -1,   245,    16,   321,    24,    -1,   245,    17,   321,    25,
      -1,   245,   160,    -1,   326,    -1,   330,    -1,   315,    -1,
      -1,    33,    -1,    54,    -1,    -1,   247,    -1,    84,   216,
      -1,    -1,   249,    -1,   101,   216,    -1,   252,    23,   292,
      -1,    -1,   198,   251,   199,   209,   219,   234,    23,   292,
      -1,   281,    -1,   281,   253,   252,    -1,   281,   253,    10,
     252,    -1,   256,    -1,   254,    -1,   263,    -1,   260,    -1,
     270,    -1,   266,    -1,    -1,   102,    14,   255,   250,    -1,
     102,     1,    -1,    -1,    -1,    -1,   107,    88,   257,   337,
     258,    14,   259,   250,    -1,    -1,    -1,    64,   309,   261,
      14,   262,   250,    -1,    -1,    14,   264,   250,    -1,    -1,
     263,   147,    14,   265,   250,    -1,    61,    16,   321,    24,
      -1,    61,   326,    -1,    61,   330,    -1,    61,   267,   268,
      -1,    91,   268,    -1,    59,    -1,    95,    59,    -1,    -1,
     269,   209,   222,   292,    -1,    -1,    -1,    -1,   120,   451,
     271,   274,   272,   209,    14,   273,   250,    -1,    -1,    16,
     275,    24,    -1,   276,    -1,   275,   276,    -1,   166,   191,
      -1,    51,   166,   191,    -1,    70,   296,    -1,    70,    28,
      -1,    -1,    14,   278,   279,    23,    -1,    -1,   280,    -1,
     280,    10,    -1,   283,    -1,   280,    10,   283,    -1,    -1,
     282,    -1,   283,    -1,   283,    10,   281,    -1,    -1,   305,
     284,   287,    -1,    -1,   299,   285,   286,    -1,    -1,   287,
      -1,   287,    26,    -1,   287,    26,    10,    -1,    -1,   298,
     288,   290,    -1,    -1,   287,    26,   298,   289,   290,    -1,
     287,    26,    10,    -1,   287,    26,     1,    -1,     1,    -1,
     291,    -1,   290,     9,   291,    -1,   290,     9,    26,    -1,
     290,     9,    10,    -1,   290,     9,     1,    -1,     1,    -1,
     304,   292,    -1,    -1,    -1,   103,    16,   293,   294,    24,
      -1,   295,    -1,   294,     9,   295,    -1,    69,    -1,    72,
     176,    -1,    72,   166,    -1,    72,   169,    -1,    72,   163,
      -1,   100,   315,    -1,   117,   315,    -1,   118,   321,    -1,
     129,   163,    -1,   130,    -1,   131,   160,    -1,   132,    -1,
     133,   160,    -1,   134,    -1,   135,   315,    -1,   136,    16,
     296,    24,    -1,   138,   321,    -1,   137,   321,    -1,   140,
      -1,   141,    -1,   139,    16,   296,    24,    -1,   142,    -1,
     143,    16,   315,    24,    32,   315,    -1,   143,    16,   163,
      24,    32,   315,    -1,   144,    -1,   297,    16,   333,    24,
      -1,   297,    -1,   315,    -1,   296,     9,   315,    -1,   111,
      -1,   112,    -1,   113,    -1,   114,    -1,   115,    -1,   308,
      -1,    30,    -1,     1,    -1,    -1,    17,   300,   287,   302,
      -1,    -1,    16,   301,   303,    24,    -1,    16,    24,    -1,
      25,    -1,    26,    25,    -1,   304,    -1,   303,   304,    -1,
     305,    -1,   299,    -1,   315,    -1,   318,    -1,   307,    -1,
     306,   307,    -1,   315,    -1,   340,    -1,   319,    -1,    16,
     321,    24,    -1,   315,    -1,   340,    -1,   319,    -1,   315,
      -1,   342,    -1,   340,    -1,   319,    -1,   321,     9,   321,
      -1,   310,     9,   321,    -1,   321,    -1,   311,   321,    -1,
     313,   321,    24,    -1,   313,    28,    24,    -1,   313,    56,
     321,    24,    -1,   314,    -1,    46,    -1,    35,    16,    -1,
      90,    16,    -1,    89,    16,    -1,   128,    16,    -1,   170,
      -1,   171,    -1,   316,    -1,   315,   339,    -1,   317,    -1,
     172,    -1,   173,    -1,   174,    -1,   175,    -1,   340,    -1,
     335,    -1,   334,    -1,    21,   334,    -1,    19,   334,    -1,
     336,    -1,   342,    -1,    94,    -1,   319,    -1,    -1,     5,
     320,   321,     5,    -1,   321,    32,   170,    -1,   321,    32,
     171,    -1,   321,     7,   321,    -1,   321,     4,   321,    -1,
     321,    11,   321,    -1,   321,    20,   321,    -1,    -1,   321,
      83,   322,   321,    -1,    -1,   321,    70,   323,    16,   333,
      24,    -1,   321,    18,   321,    -1,   321,    13,   321,    -1,
     321,    15,   321,    -1,   321,    12,   321,    -1,   321,    21,
     321,    -1,   321,    19,   321,    -1,   321,    28,   321,    -1,
     321,    27,   321,    -1,     6,   321,    -1,    95,   321,    -1,
      21,   321,    -1,    19,   321,    -1,    16,   321,    24,    -1,
      -1,    16,    34,   324,   209,   222,    24,   292,    -1,    -1,
      16,   198,   325,   199,   209,   219,   234,    24,   292,    -1,
     312,    -1,   326,    -1,   340,   331,    -1,   335,    -1,   334,
      -1,   336,    -1,   342,    -1,   315,    -1,   125,    16,   321,
      24,    -1,    81,    16,   321,    24,    -1,    82,    16,   321,
       9,   321,    24,    -1,    49,    16,   321,    24,    -1,    39,
      16,   315,    24,    -1,   116,    16,   321,     9,   321,    24,
      -1,    77,    16,   321,    24,    -1,    80,    16,   321,    24,
      -1,    76,    16,   321,    24,    -1,    78,    16,   321,    24,
      -1,   329,    -1,    -1,    75,   327,    16,   321,    24,    -1,
      -1,    79,   328,    16,   321,    24,    -1,    68,    16,   321,
       9,   321,     9,   321,    24,    -1,    44,    16,   333,    24,
      -1,   108,    16,   321,     9,   321,    24,    -1,   108,    16,
     321,     9,   321,     9,   321,    24,    -1,   340,   332,    -1,
      -1,   332,    -1,    94,    -1,    16,    24,    -1,    16,   333,
      24,    -1,   321,    -1,   333,     9,   321,    -1,   333,     9,
       1,    -1,   333,     1,    -1,   160,    -1,   161,    -1,   162,
      -1,   163,    -1,   163,   165,    -1,   163,     8,   340,    -1,
     145,    -1,    60,    -1,   340,    -1,    28,    -1,    50,    -1,
      22,    -1,    29,    -1,   338,   169,    -1,   338,   166,    -1,
     338,   167,    -1,   338,     1,    -1,   169,    -1,   341,    -1,
     166,    -1,   167,    -1,   168,    -1,    17,    25,    -1,   344,
      -1,   343,   344,    -1,   345,    -1,   347,    -1,   349,    -1,
     351,    -1,   353,    -1,   355,    -1,   356,    -1,   357,    -1,
     358,    -1,    -1,    73,   360,   346,   277,   359,    -1,    -1,
      73,    48,   360,   348,   277,    -1,    -1,    52,   361,   350,
     277,   359,    -1,    -1,    52,    48,   361,   352,   277,    -1,
      -1,    92,   362,   354,    52,   277,    73,   277,   359,    -1,
      42,   362,    -1,    86,   216,    -1,    86,   216,   363,   452,
     216,    -1,    43,   364,   453,   216,    -1,    57,   364,   453,
     216,    -1,    -1,   209,   222,   234,   223,    -1,    -1,   363,
     452,   216,    -1,    -1,    62,   452,   216,    -1,    -1,   452,
     216,    -1,    70,    -1,    74,    -1,    -1,   121,    -1,   367,
      -1,    -1,   365,    10,   366,   367,    -1,   368,    -1,   376,
      -1,   380,    -1,   369,    -1,   370,    -1,   371,    -1,   383,
      -1,   384,    -1,    43,   379,    41,   451,   163,   443,   372,
      -1,    43,   379,    41,   451,   148,   441,   372,    -1,    57,
     364,   379,    41,   451,    -1,    87,    75,    41,   451,   126,
      99,   451,    -1,    87,   451,   126,    99,   451,    -1,    -1,
     103,    16,    24,    -1,   103,    16,   373,    24,    -1,   374,
      -1,   373,     9,   374,    -1,    49,   451,    -1,    81,   163,
      -1,    81,   450,    -1,    37,    -1,    53,    -1,   110,   375,
      -1,   163,    -1,   375,   147,   163,    -1,    -1,    -1,    43,
     107,   124,   451,   377,   386,    14,   378,   396,    -1,    75,
      -1,    85,    -1,    -1,    -1,    31,   107,   124,   451,   381,
     386,    14,   382,   396,    -1,    57,   364,   107,   124,   451,
      -1,    57,   364,   107,    88,   451,    -1,    57,   364,   107,
      88,   453,   451,    -1,    57,   364,   451,    -1,    57,   364,
     453,   451,    -1,    -1,    -1,   386,    62,   178,    32,   176,
     387,   389,    -1,   386,    62,   176,    32,   176,    -1,    -1,
     386,    62,   123,   435,    32,   176,   388,   389,    -1,   386,
     434,    -1,    -1,   389,   390,    -1,   158,   391,    85,   449,
     392,   393,    -1,    -1,   159,    -1,    -1,    99,    16,   440,
      24,    -1,    -1,   103,    16,   394,    24,    -1,   395,    -1,
     394,     9,   395,    -1,   176,    -1,   176,   163,    -1,    23,
      -1,   397,    23,    -1,   397,    10,    23,    -1,   399,    -1,
      -1,   397,    10,   398,   399,    -1,   403,    -1,   385,    -1,
     384,    -1,    23,    -1,   401,    23,    -1,   401,    10,    23,
      -1,   403,    -1,    -1,   401,    10,   402,   403,    -1,    -1,
      43,   451,    32,   404,   406,    -1,    43,   451,   148,   124,
     451,   436,    -1,    43,   453,   451,   148,   124,   451,   436,
      -1,    -1,   411,   436,    14,   405,   400,    -1,   409,    -1,
     408,    -1,    -1,   411,   436,    14,   407,   400,    -1,   430,
     429,   421,    -1,    -1,   430,   410,   415,    -1,   412,    -1,
     411,   412,    -1,    64,   431,    -1,   127,   431,    -1,   105,
     431,    -1,    -1,    -1,    98,   431,   413,   427,   414,   428,
      -1,   417,    -1,    -1,   415,    26,   416,   417,    -1,    -1,
     429,   418,   419,    -1,     1,    -1,   421,   426,    -1,    -1,
     419,     9,   420,   421,   426,    -1,    -1,    -1,    -1,    -1,
     430,   422,   427,   423,   428,   424,   432,   425,   436,    -1,
       1,    -1,    -1,    32,   451,    -1,    -1,    49,   340,    -1,
      49,    75,    16,   163,    24,    -1,    49,   449,    -1,    -1,
      81,   163,    -1,    81,   449,    -1,   431,    -1,    17,    25,
      -1,    30,    -1,   431,    -1,    17,    25,    -1,   451,    -1,
     334,    -1,   335,    -1,   451,    16,   439,    24,    -1,   449,
      -1,    -1,   433,    -1,   434,    -1,   433,   434,    -1,   149,
      16,   164,    -1,   149,   163,    -1,    16,   164,    -1,   163,
      -1,    -1,   103,    16,    24,    -1,   103,    16,   437,    24,
      -1,   438,    -1,   437,     9,   438,    -1,   122,    58,    -1,
      58,    -1,   104,   160,    -1,   148,   176,    -1,    -1,   440,
      -1,   449,    -1,   440,     9,   449,    -1,   442,    -1,   441,
       9,   442,    -1,    63,   178,   443,   110,   447,    -1,    16,
     444,    24,    -1,    -1,   445,    -1,   446,    -1,   445,     9,
     446,    -1,   448,   450,   447,    -1,   450,    -1,   450,    95,
      97,    -1,    70,    -1,   450,    -1,   450,    -1,   177,    -1,
     179,    -1,   176,    -1,   158,    -1,   159,    -1,   340,    -1,
      75,    16,   163,    24,    -1,    -1,   453,    -1,    64,    -1,
      64,    67,    40,    -1,   153,    -1,    10,   153,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   520,   520,   526,   529,   532,   535,   541,   542,   543,
     544,   548,   552,   553,   557,   557,   567,   568,   572,   573,
     574,   575,   576,   580,   581,   585,   589,   590,   594,   599,
     600,   605,   605,   621,   622,   623,   624,   628,   628,   633,
     635,   636,   642,   642,   660,   660,   676,   677,   681,   681,
     692,   693,   701,   706,   707,   708,   709,   710,   711,   715,
     716,   716,   721,   722,   726,   728,   733,   733,   739,   742,
     746,   746,   750,   750,   757,   761,   762,   766,   770,   766,
     782,   783,   787,   788,   789,   793,   794,   798,   799,   803,
     810,   811,   815,   816,   817,   818,   819,   820,   825,   826,
     827,   831,   832,   832,   841,   842,   847,   848,   849,   850,
     851,   855,   856,   856,   865,   866,   866,   875,   876,   881,
     882,   883,   884,   885,   886,   890,   891,   892,   896,   897,
     901,   905,   906,   910,   914,   917,   917,   955,   956,   957,
     961,   962,   963,   964,   965,   966,   970,   970,   971,   975,
     976,   977,   975,   984,   985,   983,   992,   992,   993,   993,
    1004,  1005,  1006,  1007,  1012,  1018,  1019,  1023,  1023,  1044,
    1049,  1053,  1044,  1072,  1073,  1077,  1078,  1082,  1083,  1093,
    1094,  1098,  1098,  1103,  1104,  1105,  1109,  1110,  1114,  1115,
    1119,  1120,  1124,  1124,  1126,  1126,  1131,  1132,  1133,  1134,
    1138,  1138,  1141,  1140,  1143,  1144,  1145,  1149,  1150,  1151,
    1152,  1153,  1154,  1158,  1163,  1164,  1164,  1172,  1173,  1177,
    1178,  1183,  1185,  1186,  1187,  1188,  1189,  1190,  1191,  1192,
    1193,  1194,  1195,  1196,  1197,  1198,  1199,  1200,  1201,  1202,
    1203,  1204,  1205,  1206,  1207,  1208,  1212,  1213,  1217,  1218,
    1219,  1220,  1221,  1225,  1226,  1227,  1231,  1231,  1236,  1236,
    1248,  1252,  1253,  1257,  1261,  1274,  1275,  1279,  1280,  1284,
    1285,  1289,  1290,  1291,  1292,  1296,  1297,  1298,  1302,  1303,
    1304,  1305,  1309,  1310,  1314,  1315,  1319,  1320,  1321,  1325,
    1329,  1330,  1331,  1332,  1333,  1337,  1338,  1339,  1340,  1344,
    1349,  1350,  1351,  1352,  1357,  1358,  1359,  1360,  1361,  1362,
    1363,  1364,  1365,  1369,  1369,  1389,  1390,  1391,  1393,  1396,
    1400,  1401,  1401,  1404,  1404,  1418,  1419,  1420,  1421,  1422,
    1426,  1430,  1432,  1433,  1435,  1437,  1440,  1463,  1466,  1466,
    1484,  1484,  1509,  1515,  1516,  1526,  1527,  1528,  1529,  1530,
    1534,  1536,  1538,  1540,  1542,  1544,  1546,  1548,  1550,  1552,
    1554,  1556,  1555,  1560,  1559,  1563,  1566,  1572,  1574,  1579,
    1587,  1588,  1592,  1593,  1594,  1598,  1599,  1600,  1601,  1605,
    1606,  1607,  1611,  1612,  1613,  1617,  1618,  1622,  1623,  1624,
    1628,  1629,  1633,  1637,  1641,  1645,  1649,  1650,  1654,  1655,
    1659,  1660,  1666,  1667,  1674,  1675,  1676,  1677,  1678,  1679,
    1680,  1681,  1682,  1688,  1688,  1700,  1700,  1715,  1715,  1727,
    1727,  1743,  1743,  1754,  1759,  1761,  1766,  1771,  1776,  1777,
    1784,  1785,  1789,  1790,  1794,  1795,  1799,  1800,  1804,  1805,
    1811,  1812,  1812,  1818,  1819,  1820,  1826,  1827,  1828,  1829,
    1830,  1836,  1846,  1859,  1870,  1874,  1881,  1882,  1883,  1887,
    1891,  1898,  1900,  1902,  1904,  1906,  1908,  1914,  1915,  1919,
    1933,  1919,  1944,  1945,  1949,  1956,  1949,  1967,  1978,  1984,
    1993,  1999,  2008,  2009,  2009,  2014,  2017,  2017,  2023,  2028,
    2029,  2033,  2040,  2041,  2045,  2046,  2050,  2051,  2055,  2059,
    2066,  2067,  2071,  2072,  2073,  2077,  2078,  2078,  2085,  2086,
    2088,  2093,  2094,  2095,  2099,  2100,  2100,  2108,  2107,  2110,
    2117,  2125,  2124,  2134,  2138,  2140,  2139,  2154,  2168,  2168,
    2173,  2174,  2178,  2179,  2180,  2181,  2182,  2181,  2190,  2191,
    2191,  2197,  2197,  2202,  2206,  2209,  2209,  2217,  2221,  2223,
    2225,  2217,  2228,  2232,  2233,  2237,  2238,  2239,  2240,  2244,
    2245,  2246,  2250,  2251,  2252,  2256,  2257,  2261,  2262,  2263,
    2264,  2267,  2272,  2273,  2277,  2278,  2282,  2283,  2287,  2288,
    2292,  2293,  2294,  2298,  2302,  2309,  2310,  2311,  2312,  2316,
    2317,  2321,  2322,  2326,  2327,  2331,  2337,  2341,  2342,  2346,
    2347,  2351,  2357,  2358,  2362,  2363,  2367,  2368,  2369,  2373,
    2374,  2375,  2380,  2381,  2386,  2387,  2391,  2392,  2396,  2397
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "__SPAR_PUNCT_BEGIN", "_AMP_AMP",
  "_BACKQUOTE", "_BANG", "_BAR_BAR", "_CARET_CARET", "_COMMA", "_DOT",
  "_EQ", "_GE", "_GT", "_LBRA", "_LE", "_LPAR", "_LSQBRA", "_LT", "_MINUS",
  "_NOT_EQ", "_PLUS", "_PLUS_GT", "_RBRA", "_RPAR", "_RSQBRA", "_SEMI",
  "_SLASH", "_STAR", "_STAR_GT", "a_L", "ALTER_L", "AS_L", "ASC_L",
  "ASK_L", "AVG_L", "BASE_L", "BIJECTION_L", "BINDINGS_L", "BOUND_L",
  "BY_L", "CLASS_L", "CLEAR_L", "CREATE_L", "COALESCE_L", "CONSTRUCT_L",
  "COUNT_LPAR", "COUNT_DISTINCT_L", "DATA_L", "DATATYPE_L", "DEFAULT_L",
  "DEFINE_L", "DELETE_L", "DEREF_L", "DESC_L", "DESCRIBE_L", "DISTINCT_L",
  "DROP_L", "EXCLUSIVE_L", "EXISTS_L", "false_L", "FILTER_L", "FROM_L",
  "FUNCTION_L", "GRAPH_L", "GROUP_L", "HAVING_L", "IDENTIFIED_L", "IF_L",
  "IFP_L", "IN_L", "INDEX_L", "INFERENCE_L", "INSERT_L", "INTO_L", "IRI_L",
  "isBLANK_L", "isIRI_L", "isLITERAL_L", "isREF_L", "isURI_L", "LANG_L",
  "LANGMATCHES_L", "LIKE_L", "LIMIT_L", "LITERAL_L", "LOAD_L", "MAKE_L",
  "MAP_L", "MAX_L", "MIN_L", "MINUS_L", "MODIFY_L", "NAMED_L", "NIL_L",
  "NOT_L", "NOT_FROM_L", "NULL_L", "OBJECT_L", "OF_L", "OFFBAND_L",
  "OFFSET_L", "OPTIONAL_L", "OPTION_L", "ORDER_L", "PREDICATE_L",
  "PREFIX_L", "QUAD_L", "REGEX_L", "REDUCED_L", "RETURNS_L", "SAME_AS_L",
  "SAME_AS_O_L", "SAME_AS_P_L", "SAME_AS_S_L", "SAME_AS_S_O_L",
  "SAMETERM_L", "SCORE_L", "SCORE_LIMIT_L", "SELECT_L", "SERVICE_L",
  "SILENT_L", "SOFT_L", "SQLQUERY_L", "STORAGE_L", "STR_L", "SUBCLASS_L",
  "SUBJECT_L", "SUM_L", "TABLE_OPTION_L", "T_CYCLES_ONLY_L",
  "T_DIRECTION_L", "T_DISTINCT_L", "T_END_FLAG_L", "T_EXISTS_L",
  "T_FINAL_AS_L", "T_IN_L", "T_MAX_L", "T_MIN_L", "T_OUT_L",
  "T_NO_CYCLES_L", "T_NO_ORDER_L", "T_SHORTEST_ONLY_L", "T_STEP_L",
  "TRANSITIVE_L", "true_L", "UNBOUND_L", "UNION_L", "USING_L", "WHERE_L",
  "WITH_L", "__SPAR_PUNCT_END", "START_OF_SPARQL_TEXT",
  "END_OF_SPARQL_TEXT", "SPARUL_RUN_SUBTYPE", "SPARUL_INSERT_DATA",
  "SPARUL_DELETE_DATA", "__SPAR_NONPUNCT_START", "TEXT_BL", "XML_BL",
  "SPARQL_INTEGER", "SPARQL_DECIMAL", "SPARQL_DOUBLE", "SPARQL_STRING",
  "SPARQL_SQLTEXT", "LANGTAG", "QNAME", "QNAME_NS", "BLANK_NODE_LABEL",
  "Q_IRI_REF", "QUEST_VARNAME", "DOLLAR_VARNAME", "QUEST_COLON_PARAMNAME",
  "DOLLAR_COLON_PARAMNAME", "QUEST_COLON_PARAMNUM",
  "DOLLAR_COLON_PARAMNUM", "SPARQL_PLAIN_ID", "SPARQL_SQL_ALIASCOLNAME",
  "SPARQL_SQL_QTABLENAME", "SPARQL_SQL_QTABLECOLNAME",
  "__SPAR_NONPUNCT_END", "_COLON", "UMINUS", "UPLUS", "$accept", "sparql",
  "spar_query_body", "spar_prolog", "spar_defines_opt", "spar_define",
  "@1", "spar_define_val_commalist", "spar_define_val",
  "spar_base_decl_opt", "spar_prefix_decls_opt", "spar_prefix_decl",
  "spar_select_query", "@2", "spar_select_query_mode", "spar_select_rset",
  "@3", "spar_select_rset_1", "spar_construct_query", "@4",
  "spar_describe_query", "@5", "spar_describe_rset", "spar_ask_query",
  "@6", "spar_dataset_clauses_opt", "spar_dataset_clause",
  "spar_dataset_clause_subtype", "spar_sponge_optionlist_opt", "@7",
  "spar_sponge_option_commalist_opt_rpar", "spar_sponge_option_commalist",
  "spar_precode_expn", "@8", "spar_wherebindings_clause_opt",
  "spar_where_clause", "@9", "@10", "spar_wherebindings_clause",
  "spar_bindings_clause_opt", "spar_bindings_clause", "@11", "@12",
  "spar_bindings_vars", "spar_bindings_var", "spar_bindings_opt",
  "spar_bindings", "spar_binding", "spar_bindvals", "spar_bindval",
  "spar_solution_modifier", "spar_group_clause_opt", "@13",
  "spar_group_expns", "spar_group_expn", "spar_having_clause_opt", "@14",
  "spar_order_clause_opt", "@15", "spar_order_conditions",
  "spar_order_condition", "spar_asc_or_desc_opt", "spar_limit_clause_opt",
  "spar_limit_clause", "spar_offset_clause_opt", "spar_offset_clause",
  "spar_group_gp", "@16", "spar_gp", "spar_gp_not_triples",
  "spar_optional_gp", "@17", "spar_quad_map_gp", "@18", "@19", "@20",
  "spar_graph_gp", "@21", "@22", "spar_group_or_union_gp", "@23", "@24",
  "spar_constraint", "spar_exists_or_not_exists",
  "spar_constraint_exists_int", "@25", "spar_service_req", "@26", "@27",
  "@28", "spar_service_options_list_opt", "spar_service_options",
  "spar_service_option", "spar_ctor_template", "@29",
  "spar_ctor_triples_opt", "spar_ctor_triples", "spar_triples_opt",
  "spar_triples", "spar_triples1", "@30", "@31", "spar_props_opt",
  "spar_props", "@32", "@33", "spar_objects", "spar_ograph_node",
  "spar_triple_optionlist_opt", "@34", "spar_triple_option_commalist",
  "spar_triple_option", "spar_triple_option_var_commalist",
  "spar_same_as_option", "spar_verb", "spar_triples_node", "@35", "@36",
  "spar_triples_opt_semi_rsqbra", "spar_cons_collection",
  "spar_graph_node", "spar_var_or_term",
  "spar_var_or_iriref_or_pexpn_or_backquoteds",
  "spar_var_or_iriref_or_pexpn_or_backquoted",
  "spar_var_or_iriref_or_backquoted",
  "spar_var_or_blank_node_or_iriref_or_backquoted",
  "spar_retcol_commalist", "spar_retcols", "spar_ret_agg_call",
  "spar_agg_name", "spar_agg_name_int", "spar_var", "spar_global_var",
  "spar_global_var_int", "spar_graph_term", "spar_backquoted", "@37",
  "spar_expn", "@38", "@39", "@40", "@41", "spar_built_in_call", "@42",
  "@43", "spar_built_in_regex", "spar_function_call", "spar_arg_list_opt",
  "spar_arg_list", "spar_expns", "spar_numeric_literal",
  "spar_rdf_literal", "spar_boolean_literal",
  "spar_iriref_or_star_or_default", "spar_arrow", "spar_arrow_iriref",
  "spar_iriref", "spar_qname", "spar_blank_node", "spar_sparul_actions",
  "spar_sparul_action", "spar_sparul_insert", "@44",
  "spar_sparul_insertdata", "@45", "spar_sparul_delete", "@46",
  "spar_sparul_deletedata", "@47", "spar_sparul_modify", "@48",
  "spar_sparul_clear", "spar_sparul_load", "spar_sparul_create",
  "spar_sparul_drop", "spar_action_solution", "spar_in_graph_precode_opt",
  "spar_from_graph_precode_opt", "spar_graph_precode_opt",
  "spar_in_or_into", "spar_silent_opt", "spar_qm_stmts", "@49",
  "spar_qm_stmt", "spar_qm_simple_stmt", "spar_qm_create_iol_class",
  "spar_qm_drop_iol_class", "spar_qm_create_iri_subclass",
  "spar_qm_iol_class_optionlist_opt", "spar_qm_iol_class_option_commalist",
  "spar_qm_iol_class_option", "spar_qm_sprintff_list",
  "spar_qm_create_quad_storage", "@50", "@51", "spar_iol",
  "spar_qm_alter_quad_storage", "@52", "@53", "spar_qm_drop_quad_storage",
  "spar_qm_drop_quad_map_mapping", "spar_qm_drop_mapping",
  "spar_qm_from_where_list_opt", "@54", "@55",
  "spar_qm_text_literal_list_opt", "spar_qm_text_literal_decl",
  "spar_xml_opt", "spar_of_sqlcol_opt", "spar_qm_text_literal_options_opt",
  "spar_qm_text_literal_option_commalist", "spar_qm_text_literal_option",
  "spar_qm_map_top_group", "spar_qm_map_top_dotlist", "@56",
  "spar_qm_map_top_op", "spar_qm_map_group", "spar_qm_map_dotlist", "@57",
  "spar_qm_map_op", "@58", "@59", "spar_qm_map_iddef", "@60",
  "spar_qm_map_single", "spar_qm_triples1", "@61", "spar_qm_named_fields",
  "spar_qm_named_field", "@62", "@63", "spar_qm_props", "@64",
  "spar_qm_prop", "@65", "spar_qm_obj_field_commalist", "@66",
  "spar_qm_obj_field", "@67", "@68", "@69", "@70", "spar_qm_as_id_opt",
  "spar_qm_obj_datatype_opt", "spar_qm_obj_language_opt", "spar_qm_verb",
  "spar_qm_field_or_blank", "spar_qm_field", "spar_qm_where_list_opt",
  "spar_qm_where_list", "spar_qm_where", "spar_qm_sqlquery",
  "spar_qm_options_opt", "spar_qm_option_commalist", "spar_qm_option",
  "spar_qm_sqlcol_commalist_opt", "spar_qm_sqlcol_commalist",
  "spar_qm_sqlfunc_header_commalist", "spar_qm_sqlfunc_header",
  "spar_qm_sqlfunc_arglist", "spar_qm_sqlfunc_arg_commalist_opt",
  "spar_qm_sqlfunc_arg_commalist", "spar_qm_sqlfunc_arg",
  "spar_qm_sqltype", "spar_qm_sql_in_out_inout", "spar_qm_sqlcol",
  "spar_qm_sql_id", "spar_qm_iriref_const_expn",
  "spar_graph_identified_by_opt", "spar_graph_identified_by",
  "spar_opt_dot_and_end", 0
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   184,   185,   185,   185,   185,   185,   186,   186,   186,
     186,   187,   188,   188,   190,   189,   191,   191,   192,   192,
     192,   192,   192,   193,   193,   193,   194,   194,   195,   195,
     195,   197,   196,   198,   198,   198,   198,   200,   199,   201,
     201,   201,   203,   202,   205,   204,   206,   206,   208,   207,
     209,   209,   210,   211,   211,   211,   211,   211,   211,   212,
     213,   212,   214,   214,   215,   215,   217,   216,   218,   218,
     220,   219,   221,   219,   222,   223,   223,   225,   226,   224,
     227,   227,   228,   228,   228,   229,   229,   230,   230,   231,
     232,   232,   233,   233,   233,   233,   233,   233,   234,   234,
     234,   235,   236,   235,   237,   237,   238,   238,   238,   238,
     238,   239,   240,   239,   241,   242,   241,   243,   243,   244,
     244,   244,   244,   244,   244,   245,   245,   245,   246,   246,
     247,   248,   248,   249,   250,   251,   250,   252,   252,   252,
     253,   253,   253,   253,   253,   253,   255,   254,   254,   257,
     258,   259,   256,   261,   262,   260,   264,   263,   265,   263,
     266,   266,   266,   266,   266,   267,   267,   269,   268,   271,
     272,   273,   270,   274,   274,   275,   275,   276,   276,   276,
     276,   278,   277,   279,   279,   279,   280,   280,   281,   281,
     282,   282,   284,   283,   285,   283,   286,   286,   286,   286,
     288,   287,   289,   287,   287,   287,   287,   290,   290,   290,
     290,   290,   290,   291,   292,   293,   292,   294,   294,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   296,   296,   297,   297,
     297,   297,   297,   298,   298,   298,   300,   299,   301,   299,
     299,   302,   302,   303,   303,   304,   304,   305,   305,   306,
     306,   307,   307,   307,   307,   308,   308,   308,   309,   309,
     309,   309,   310,   310,   311,   311,   312,   312,   312,   313,
     314,   314,   314,   314,   314,   315,   315,   315,   315,   316,
     317,   317,   317,   317,   318,   318,   318,   318,   318,   318,
     318,   318,   318,   320,   319,   321,   321,   321,   321,   321,
     321,   322,   321,   323,   321,   321,   321,   321,   321,   321,
     321,   321,   321,   321,   321,   321,   321,   321,   324,   321,
     325,   321,   321,   321,   321,   321,   321,   321,   321,   321,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   327,   326,   328,   326,   326,   326,   329,   329,   330,
     331,   331,   332,   332,   332,   333,   333,   333,   333,   334,
     334,   334,   335,   335,   335,   336,   336,   337,   337,   337,
     338,   338,   339,   339,   339,   339,   340,   340,   341,   341,
     342,   342,   343,   343,   344,   344,   344,   344,   344,   344,
     344,   344,   344,   346,   345,   348,   347,   350,   349,   352,
     351,   354,   353,   355,   356,   356,   357,   358,   359,   359,
     360,   360,   361,   361,   362,   362,   363,   363,   364,   364,
     365,   366,   365,   367,   367,   367,   368,   368,   368,   368,
     368,   369,   369,   370,   371,   371,   372,   372,   372,   373,
     373,   374,   374,   374,   374,   374,   374,   375,   375,   377,
     378,   376,   379,   379,   381,   382,   380,   383,   384,   384,
     385,   385,   386,   387,   386,   386,   388,   386,   386,   389,
     389,   390,   391,   391,   392,   392,   393,   393,   394,   394,
     395,   395,   396,   396,   396,   397,   398,   397,   399,   399,
     399,   400,   400,   400,   401,   402,   401,   404,   403,   403,
     403,   405,   403,   403,   406,   407,   406,   408,   410,   409,
     411,   411,   412,   412,   412,   413,   414,   412,   415,   416,
     415,   418,   417,   417,   419,   420,   419,   422,   423,   424,
     425,   421,   421,   426,   426,   427,   427,   427,   427,   428,
     428,   428,   429,   429,   429,   430,   430,   431,   431,   431,
     431,   431,   432,   432,   433,   433,   434,   434,   435,   435,
     436,   436,   436,   437,   437,   438,   438,   438,   438,   439,
     439,   440,   440,   441,   441,   442,   443,   444,   444,   445,
     445,   446,   447,   447,   448,   448,   449,   449,   449,   450,
     450,   450,   451,   451,   452,   452,   453,   453,   454,   454
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     4,     2,     4,     1,     1,     1,     1,
       1,     3,     0,     2,     0,     4,     1,     3,     1,     1,
       1,     1,     1,     0,     2,     2,     0,     2,     3,     2,
       2,     0,     6,     1,     2,     2,     2,     0,     2,     1,
       1,     1,     0,     7,     0,     7,     1,     1,     0,     4,
       0,     2,     3,     1,     2,     2,     3,     1,     2,     0,
       0,     4,     1,     2,     2,     4,     0,     2,     0,     1,
       0,     6,     0,     4,     2,     0,     1,     0,     0,     7,
       1,     2,     1,     1,     1,     0,     1,     1,     2,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     3,     5,
       5,     0,     0,     4,     1,     2,     3,     3,     1,     1,
       1,     0,     0,     3,     0,     0,     4,     1,     2,     4,
       4,     2,     1,     1,     1,     0,     1,     1,     0,     1,
       2,     0,     1,     2,     3,     0,     8,     1,     3,     4,
       1,     1,     1,     1,     1,     1,     0,     4,     2,     0,
       0,     0,     8,     0,     0,     6,     0,     3,     0,     5,
       4,     2,     2,     3,     2,     1,     2,     0,     4,     0,
       0,     0,     9,     0,     3,     1,     2,     2,     3,     2,
       2,     0,     4,     0,     1,     2,     1,     3,     0,     1,
       1,     3,     0,     3,     0,     3,     0,     1,     2,     3,
       0,     3,     0,     5,     3,     3,     1,     1,     3,     3,
       3,     3,     1,     2,     0,     0,     5,     1,     3,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     2,
       1,     2,     1,     2,     4,     2,     2,     1,     1,     4,
       1,     6,     6,     1,     4,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     4,     0,     4,
       2,     1,     2,     1,     2,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     1,     2,     3,     3,     4,     1,
       1,     2,     2,     2,     2,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       1,     1,     1,     0,     4,     3,     3,     3,     3,     3,
       3,     0,     4,     0,     6,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     3,     0,     7,
       0,     9,     1,     1,     2,     1,     1,     1,     1,     1,
       4,     4,     6,     4,     4,     6,     4,     4,     4,     4,
       1,     0,     5,     0,     5,     8,     4,     6,     8,     2,
       0,     1,     1,     2,     3,     1,     3,     3,     2,     1,
       1,     1,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     5,     0,     5,     0,     5,     0,
       5,     0,     8,     2,     2,     5,     4,     4,     0,     4,
       0,     3,     0,     3,     0,     2,     1,     1,     0,     1,
       1,     0,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     7,     7,     5,     7,     5,     0,     3,     4,     1,
       3,     2,     2,     2,     1,     1,     2,     1,     3,     0,
       0,     9,     1,     1,     0,     0,     9,     5,     5,     6,
       3,     4,     0,     0,     7,     5,     0,     8,     2,     0,
       2,     6,     0,     1,     0,     4,     0,     4,     1,     3,
       1,     2,     1,     2,     3,     1,     0,     4,     1,     1,
       1,     1,     2,     3,     1,     0,     4,     0,     5,     6,
       7,     0,     5,     1,     1,     0,     5,     3,     0,     3,
       1,     2,     2,     2,     2,     0,     0,     6,     1,     0,
       4,     0,     3,     1,     2,     0,     5,     0,     0,     0,
       0,     9,     1,     0,     2,     0,     2,     5,     2,     0,
       2,     2,     1,     2,     1,     1,     2,     1,     1,     1,
       4,     1,     0,     1,     1,     2,     3,     2,     2,     1,
       0,     3,     4,     1,     3,     2,     1,     2,     2,     0,
       1,     1,     3,     1,     3,     5,     3,     0,     1,     1,
       3,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     0,     1,     1,     3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     6,    12,     0,     4,     0,    23,     1,     0,    48,
     614,   438,    42,   432,    44,   438,   430,    66,     0,   614,
      33,     0,     7,    31,     8,     9,    10,     0,   402,   404,
     405,   406,   407,   408,   409,   410,   411,   412,     0,   440,
     443,   446,   447,   448,   444,   445,   449,   450,     0,    14,
      13,    26,     0,    50,   616,   423,    66,   615,   472,   473,
       0,   439,     0,     0,     0,   432,   614,   417,     0,     0,
     430,   436,   437,   413,   614,   424,     0,     0,   398,   399,
     396,   612,   397,     0,   421,    36,    35,    34,     2,    37,
     438,   438,     3,   403,   441,   618,     5,    25,    24,     0,
      11,     0,     0,     0,   435,     0,    66,     0,   181,    50,
     419,    66,     0,   313,     0,    46,   295,   296,   300,   301,
     302,   303,    50,    47,   269,   271,   297,   299,   273,   272,
       0,     0,    66,   415,     0,    66,   614,     0,     0,     0,
       0,     0,     0,     0,     0,   290,     0,   386,     0,   361,
       0,     0,     0,   363,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   385,   379,   380,   381,   382,   400,
     342,     0,   289,   349,    67,   343,   360,   346,   345,   347,
     370,   348,     0,     0,     0,     0,    50,     0,     0,   619,
       0,     0,     0,    27,     0,   474,    72,    53,     0,    57,
       0,    51,     0,    75,    49,   617,   469,   426,     0,   183,
       0,     0,   433,   428,     0,     0,    68,   270,   390,   391,
       0,   298,     0,     0,     0,   427,     0,   428,   431,    66,
     333,   338,   340,     0,   401,   336,   335,   291,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     293,   292,   334,     0,     0,     0,   294,     0,   383,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   323,   321,     0,   372,   344,
     371,     0,     0,     0,     0,     0,    39,    38,    41,    40,
     284,     0,   438,   442,    21,    20,    18,    19,    15,    16,
      22,    30,    29,   482,   188,    54,    55,    58,    70,    59,
      77,    74,    76,   482,     0,     0,   258,   256,     0,     0,
     311,     0,   184,   186,   194,   192,   267,   268,   312,   306,
     305,   309,   304,   310,   101,   420,     0,   418,     0,   274,
     101,    69,   395,   393,   394,   392,   478,     0,   477,   453,
     416,   414,   425,    50,    37,   337,     0,   375,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   384,   287,     0,   286,   318,   317,   319,   328,
     326,   327,   325,   330,   320,   329,   332,   331,   315,   316,
       0,     0,   373,     0,   613,     0,   455,     0,   101,     0,
     285,     0,     0,     0,    28,     0,     0,   137,   189,   190,
      56,   188,     0,    52,     0,     0,     0,   456,   593,   597,
     456,   260,     0,     0,   308,   307,   182,   185,     0,     0,
       0,    75,   111,   101,   314,    75,   479,     0,    50,   354,
     378,     0,   366,   353,     0,     0,   358,   356,   359,     0,
     357,   351,     0,     0,     0,   350,   288,     0,   322,   374,
       0,     0,    32,   283,   282,    17,   475,     0,     0,   488,
      73,   156,     0,     0,   167,     0,     0,     0,   188,   141,
     140,   143,   142,   145,   144,   188,     0,    60,    82,    83,
       0,    80,    84,   470,     0,     0,     0,   452,   604,   610,
     611,   609,     0,   598,   599,     0,   605,   451,   266,     0,
     263,   265,   255,   254,     0,   200,   253,   275,   277,   276,
     187,   195,   197,   193,   102,    43,   112,   114,    75,    45,
       0,     0,   377,   376,     0,   362,   364,     0,     0,     0,
       0,   454,   428,     0,     0,     0,     0,     0,   577,   188,
       0,   165,     0,   167,   161,   162,     0,   153,   278,   281,
     280,   279,   164,    50,   148,   146,   149,   169,   188,   138,
       0,   191,    75,     0,    78,    81,     0,     0,   594,     0,
     596,     0,     0,   259,   264,   261,     0,   257,     0,     0,
       0,     0,     0,     0,    98,   429,   214,   101,     0,   352,
       0,   367,   355,   324,   422,     0,   502,     0,   438,     0,
       0,     0,     0,   607,   608,   568,   569,   510,   509,   476,
       0,   505,   508,   523,   580,   530,   528,   565,   571,   606,
     567,     0,   579,     0,     0,     0,   576,   135,   157,     0,
       0,   166,   163,   369,     0,     0,   188,     0,   173,   139,
     158,    71,    62,    66,    61,     0,    85,   471,     0,   457,
     464,     0,   465,     0,     0,     0,   459,   600,   601,   602,
     255,   204,   262,   202,   212,   201,   207,   214,   199,     0,
       0,   103,   104,   110,   108,   109,   113,   115,    66,    66,
     131,   128,     0,   339,     0,     0,     0,   566,     0,     0,
       0,   532,   535,   534,   533,   506,   503,     0,   531,     0,
       0,   589,   578,     0,   485,   483,    37,   214,   160,   154,
     214,   147,   388,   389,   150,   387,     0,   170,   188,    64,
       0,    63,     0,     0,    86,    87,   595,   461,   462,   463,
     467,   466,     0,   458,     0,     0,     0,   213,     0,     0,
     105,   125,   130,   133,    99,   132,   100,   129,   215,   214,
     365,   368,   517,     0,     0,     0,   480,     0,   555,   504,
       0,     0,   521,   543,     0,   564,   529,   538,   541,   562,
       0,   590,   591,   486,   489,    50,   134,   188,   168,     0,
       0,     0,     0,     0,   175,    50,   159,    66,    97,     0,
      90,    93,    94,    95,    92,    96,    79,    88,     0,   460,
     603,   203,   211,   210,   209,   208,   106,   107,   126,   127,
     116,   117,     0,   124,   122,   123,     0,   341,     0,     0,
       0,   481,     0,   536,   507,   581,   586,     0,     0,     0,
       0,   583,     0,   563,   539,     0,   570,     0,   489,   484,
       0,   155,   151,     0,   180,   179,   246,   177,   174,   176,
       0,    65,    89,    91,   468,   118,     0,     0,   121,   219,
       0,     0,   248,   249,   250,   251,   252,     0,     0,     0,
     228,     0,   230,     0,   232,     0,     0,     0,     0,     0,
     237,   238,   240,     0,   243,     0,   217,   245,   518,   524,
     580,     0,   580,     0,     0,   556,   558,   559,   587,   585,
     588,     0,   582,   511,   522,     0,   514,     0,   552,   542,
     553,   547,   592,   487,   492,   490,   101,   188,   178,     0,
     171,     0,     0,   223,   221,   222,   220,   224,   225,   226,
     227,   229,   231,   233,     0,   236,   235,     0,     0,     0,
     216,     0,     0,     0,   519,   580,     0,     0,   537,   584,
     515,   512,   540,   545,     0,   544,   555,   493,     0,     0,
     152,   247,   188,   119,   120,     0,     0,     0,     0,   218,
       0,   525,   527,   520,     0,   560,   561,   513,     0,     0,
     554,   548,     0,   214,   172,   234,   239,     0,     0,   244,
       0,   557,   516,   553,   559,   494,   136,     0,     0,   526,
     546,   549,     0,   496,   242,   241,   572,     0,     0,   491,
     550,   573,   574,     0,     0,   580,   575,   495,   500,     0,
     498,   551,   501,     0,   497,   499
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    21,     5,     6,    50,    99,   298,   299,    51,
     100,   193,    22,    89,   637,   186,   187,   287,    24,    64,
      25,    68,   122,    26,    53,   336,   201,   202,   413,   573,
     654,   655,    75,    76,   340,   203,   411,   304,   204,   311,
     312,   414,   656,   490,   491,   733,   734,   735,   799,   800,
     431,   432,   591,   681,   682,   527,   592,   594,   751,   820,
     821,   822,   756,   690,   754,   691,   638,   716,   639,   478,
     479,   646,   480,   647,   789,   927,   481,   644,   787,   482,
     549,   728,   483,   553,   562,   563,   484,   648,   795,   972,
     727,   793,   794,   109,   209,   321,   322,   407,   408,   409,
     429,   428,   521,   514,   588,   745,   675,   676,   693,   826,
     895,   896,   855,   897,   515,   324,   423,   422,   587,   509,
     677,   325,   123,   124,   516,   557,   288,   289,   170,   171,
     172,   173,   126,   127,   327,   328,   214,   357,   391,   390,
     353,   354,   175,   242,   246,   176,   685,   279,   280,   358,
     177,   178,   179,   724,   220,   221,   180,    82,   181,    27,
      28,    29,   134,    30,   226,    31,   112,    32,   211,    33,
     185,    34,    35,    36,    37,   337,    73,    67,    55,    74,
      62,    38,   190,    39,    40,    41,    42,    43,   497,   665,
     666,   741,    44,   313,   576,    63,    45,   303,   543,    46,
     617,   618,   405,   784,   848,   849,   925,   968,  1013,  1019,
    1029,  1030,   619,   620,   770,   621,   914,   915,   988,   622,
     828,   842,   898,  1000,   899,   623,   710,   624,   625,   768,
     907,   776,   917,   777,   845,   919,   989,   920,   966,  1004,
    1016,  1025,   965,   833,   958,   778,   626,   627,  1020,  1021,
     469,   633,   709,   840,   841,   780,   781,   417,   418,   420,
     502,   503,   504,   668,   505,   628,   629,   630,    56,    57,
      96
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -942
static const yytype_int16 yypact[] =
{
      56,  -942,   -45,   120,  -942,  1867,   180,  -942,    23,  -942,
    1042,   285,  -942,   106,  -942,     1,   219,  -942,   -23,    62,
     173,    65,  -942,  -942,  -942,  -942,  -942,  1087,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,    25,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,    31,  -942,
    -942,  -942,   103,  -942,   113,  -942,  -942,  -942,  -942,  -942,
     150,  -942,   221,   250,   291,   273,   221,  -942,   205,   332,
     364,  -942,  -942,  -942,   221,   364,  2533,    60,  -942,  -942,
    -942,  -942,  -942,   231,  -942,  -942,  -942,  -942,  -942,  -942,
       1,     1,  -942,  -942,   209,  -942,  -942,  -942,  -942,   198,
     323,    77,   245,   400,  -942,    77,  -942,    77,  -942,  -942,
    -942,  -942,   291,  -942,  2533,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,   908,  -942,   240,  -942,  -942,  -942,  -942,
     -14,   405,  -942,  -942,   291,  -942,   221,  2533,  1853,   427,
    2533,  2533,   447,   453,   457,  -942,   468,  -942,   469,  -942,
     472,   474,   487,  -942,   489,   502,   504,   513,   514,  2533,
     523,   526,   529,   533,  -942,  -942,  -942,  -942,    33,  -942,
    -942,  2023,  -942,   240,  3672,  -942,  -942,  -942,  -942,  -942,
      37,  -942,   380,    77,   365,   507,  -942,  2193,   221,  -942,
     282,   681,    36,  -942,   539,  -942,  -942,   471,   499,   481,
     548,  -942,   357,   541,  -942,  -942,  -942,  -942,   146,  1683,
     245,   291,  -942,   294,  2533,  2143,   245,  -942,  -942,  -942,
      27,  -942,     4,    77,    77,  -942,   291,   294,  -942,  -942,
    2662,  -942,  -942,  2313,  -942,  -942,  -942,  -942,   634,  2533,
    2533,  2533,   561,  2533,  2533,  2533,   574,  2533,  2533,  2533,
    -942,  -942,  2662,  2533,  2533,  2533,  -942,   357,  -942,   571,
    2533,  2483,  2533,  2533,  2533,  2533,  2533,  2533,  2533,  2533,
    2533,  2533,  2533,  2533,   174,  -942,  -942,  2363,  -942,  -942,
    -942,   575,   439,    77,   291,   245,  -942,  -942,   598,  2533,
     861,   140,     1,  -942,  -942,  -942,  -942,  -942,   603,  -942,
    -942,  -942,   444,  -942,  1683,  -942,   530,  -942,  -942,   522,
    -942,  -942,  -942,  -942,   564,   624,   617,   427,   475,   475,
    -942,   619,   637,  -942,  -942,  -942,   240,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,   583,  -942,   245,  -942,  2968,  -942,
     583,  -942,  -942,  -942,  -942,  -942,  -942,    77,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,   478,  3672,   318,  3004,
    3064,  2533,  3082,  3100,  3118,  2533,  3178,  3196,  3218,  3263,
    3285,  3303,  -942,  -942,  3330,  -942,  2662,  2627,  2794,  1175,
    1175,  1175,  1175,   147,  2794,   147,  -942,  -942,  -942,  -942,
     636,  2533,  -942,   319,  -942,   563,  -942,   591,   583,  2533,
    3672,  2533,   157,   681,  -942,    85,   642,   431,  -942,   658,
    -942,  1683,   653,  -942,   949,    88,   496,    39,  -942,   -21,
     576,  -942,  1683,   665,  -942,  -942,  -942,  1683,  1316,   665,
     638,   541,   611,   583,  -942,   541,  -942,   245,  -942,  -942,
    -942,  1502,  -942,  -942,  2533,  3363,  -942,  -942,  -942,  3390,
    -942,  -942,  2533,  2533,  2533,  -942,  -942,  2533,  1978,  -942,
      77,   291,  -942,  3672,  3672,  -942,  -942,   -25,    24,  -942,
    -942,  -942,  2837,   895,  -942,   234,   592,    77,  1547,  -942,
    -942,  -942,   536,  -942,  -942,  1683,   661,  -942,  -942,  -942,
     105,  -942,  -942,  -942,   624,   564,   669,  -942,  -942,  -942,
    -942,  -942,   662,   682,  -942,   -10,  -942,  -942,  -942,  1596,
    -942,  -942,  1264,  -942,   387,  -942,  -942,   240,  -942,  -942,
    -942,  -942,   664,   677,  -942,  -942,  -942,   607,   541,  -942,
     692,   245,  -942,  3672,  3416,  -942,  -942,  3438,  1806,  3464,
     497,  -942,   294,   800,    26,   685,   686,   555,  -942,  1633,
    2533,  -942,   667,  -942,  -942,  -942,    37,  -942,   240,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  1683,  -942,
     707,  -942,   541,    15,  -942,  -942,   800,   614,  -942,   551,
    -942,   -21,   -10,  -942,  -942,  -942,   527,  -942,  1132,  1512,
     621,  2718,  2533,   689,    28,  -942,   627,   583,  2533,  -942,
    2533,  -942,  -942,  -942,  -942,   706,  -942,     4,     1,  1297,
    1297,  1297,  1297,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
     228,  -942,  -942,  -942,   185,  -942,  -942,  -942,  -942,  -942,
     716,   570,  -942,   704,   565,   566,  -942,  -942,  -942,   717,
    3491,  -942,  -942,  -942,   725,   245,  1633,    57,   730,  -942,
    -942,  -942,  -942,  -942,  -942,   307,   731,  -942,   -10,  -942,
    -942,    77,  -942,   299,   585,   309,  -942,  -942,  -942,   655,
    1324,  -942,  -942,  -942,  -942,   742,  -942,   627,   734,  2533,
    2533,  2718,  -942,   240,  -942,  -942,  3672,  -942,  -942,  -942,
     656,   680,   745,  -942,   743,  3518,  3544,  -942,    19,    77,
     284,  -942,  -942,  -942,  -942,   747,  -942,   750,  -942,   754,
      94,   408,  -942,   595,  -942,  -942,  -942,   627,  -942,  -942,
     627,  -942,  -942,  -942,  -942,  -942,    -6,  -942,  1633,  -942,
     608,  -942,   348,   753,   731,  -942,  -942,  -942,  -942,  -942,
    -942,   630,   549,  -942,   683,  1132,  1086,  -942,  3566,  3592,
    -942,  2889,  -942,  -942,  -942,  -942,  -942,  -942,  -942,   627,
    -942,  -942,  -942,   654,   641,   694,  -942,    77,   735,  -942,
    2561,   326,  -942,  -942,   760,  -942,   771,  -942,  -942,  -942,
     762,   789,  -942,  -942,  -942,  -942,  -942,  1633,  -942,   785,
     635,   253,   681,    22,  -942,  -942,  -942,  -942,  -942,   835,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,   640,  -942,
    -942,   742,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    2700,  -942,    49,   240,  -942,  -942,  3634,  -942,  2306,    77,
     695,  -942,   596,  -942,  -942,  -942,  -942,   660,   755,   645,
     314,  -942,  1966,  -942,  -942,   320,  -942,   408,  -942,   668,
     245,  -942,  -942,   681,  -942,   807,   240,   603,  -942,  -942,
      63,  -942,  -942,  -942,  -942,  -942,  2533,  2533,  -942,  -942,
     448,   634,  -942,  -942,  -942,  -942,  -942,   634,  2533,   659,
    -942,   670,  -942,   673,  -942,   634,   809,  2533,  2533,   812,
    -942,  -942,  -942,   813,  -942,   374,  -942,   832,  -942,  -942,
     185,   546,   746,    77,   842,  -942,  -942,   780,  -942,  -942,
    -942,    35,  -942,  -942,  -942,   301,  -942,    94,  -942,   857,
     839,  -942,  -942,   668,   719,  -942,   583,  1633,   603,   634,
    -942,  3619,  3646,  -942,  -942,  -942,  -942,   240,   240,  3672,
    -942,  -942,  -942,   240,   634,  3672,  3672,   634,   483,  3634,
    -942,  2533,   872,   320,  -942,   746,   724,   377,  -942,  -942,
     867,  -942,  -942,  -942,    77,  -942,   735,  -942,   806,   871,
    -942,   240,  1633,  -942,  -942,   376,   392,   873,   586,  -942,
     503,  -942,  -942,  -942,   877,  -942,  -942,  -942,  2136,   320,
    -942,  -942,   408,   627,  -942,  -942,  -942,   864,   870,  -942,
    1966,  -942,  -942,   839,   780,   804,  -942,   634,   634,  -942,
    -942,  -942,   888,   803,   240,   240,   765,   408,   899,  -942,
    -942,   765,  -942,   409,   740,   746,  -942,  -942,   757,   423,
    -942,  -942,  -942,   740,  -942,  -942
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -708,   519,  -942,
    -942,  -942,  -942,  -942,    38,  -348,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,   -50,  -942,  -942,  -942,  -942,
    -942,  -942,   -44,  -942,  -942,  -281,  -942,  -942,  -201,  -314,
    -942,  -942,  -942,  -942,   433,  -942,  -942,   183,  -942,   127,
    -329,  -942,  -942,  -942,   247,  -942,  -942,  -942,  -942,  -942,
     110,  -942,  -942,   241,  -942,   243,  -625,  -942,  -271,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,   381,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,   145,   -98,  -942,  -942,  -942,   458,  -942,  -182,
    -942,  -942,  -942,     7,  -942,  -942,   197,   199,  -659,  -942,
    -942,    -2,  -545,  -942,  -118,  -393,  -942,  -942,  -942,  -942,
    -375,  -391,  -942,   825,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,    -8,  -186,  -942,  -942,   -42,  -942,   770,  -942,  -942,
    -942,  -942,  -459,  -942,  -942,  -942,  -453,  -942,   394,  -275,
     440,   633,  -112,  -942,  -942,  -942,   -18,  -942,  -127,  -942,
     924,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -210,   882,   890,   937,   893,
      -5,  -942,  -942,   775,  -942,  -942,  -942,  -942,   552,  -942,
     232,  -942,  -942,  -942,  -942,   -53,  -942,  -942,  -942,  -942,
      29,  -942,   672,  -942,  -942,   125,  -942,  -942,  -942,  -942,
    -942,   -58,   402,  -942,  -942,   216,   -13,  -942,  -942,  -798,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,   160,  -594,  -942,
    -942,  -942,  -942,    73,  -942,  -942,  -942,  -883,  -942,  -942,
    -942,  -942,   -12,    40,     3,    91,  -790,  -587,  -942,  -942,
    -941,  -942,  -846,  -942,    82,  -942,     5,  -942,   510,   500,
    -942,  -942,   428,   354,  -942,  -691,  -341,   -11,    -3,   -61,
    -942
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -435
static const yytype_int16 yytable[] =
{
      81,   106,   393,   102,   398,   300,   438,    83,   132,   334,
      69,   435,   104,   554,   213,   341,   131,   351,   747,   555,
     782,   721,   701,   702,   703,   704,   128,   323,   342,   508,
     708,   511,    97,   406,    47,    94,   227,   301,   901,   652,
     547,   257,   631,    23,   916,   790,   858,   510,   495,   498,
     129,   762,    77,   277,   952,   921,   954,     1,   786,   210,
     125,   788,   207,   111,   791,   866,   867,   212,    54,   462,
     982,   135,   216,   790,   222,  1022,   182,   930,   506,   194,
    1026,   128,   333,    81,   857,   722,   188,    81,   225,    81,
     195,   228,   791,   836,   206,   773,   208,   331,   544,   466,
     827,   183,   493,   796,   528,   129,  1003,   723,     4,   983,
     223,   774,   688,   335,  -434,   125,   508,   525,   511,   574,
       7,   529,    61,   779,   775,   197,    54,   132,   350,   689,
      52,   278,   684,   229,   584,   433,   285,   499,   500,   837,
     486,   906,   496,    78,    79,   928,    80,   467,   499,   500,
     467,   545,   194,   546,    65,   501,   922,   838,   198,   199,
     792,   347,   851,   921,   582,    81,   501,   763,    66,   194,
      78,    79,   282,    80,   272,   273,   232,   333,    95,  1031,
     103,   653,   540,   839,   309,   352,   397,   548,   792,   632,
    1002,   332,   331,   343,   344,   508,   345,   511,   258,   921,
      98,   326,   916,   302,    81,    81,    81,   569,     2,   868,
     113,   346,   348,   349,   595,    58,    48,   300,    88,    47,
      85,   114,   684,    78,    79,    59,    80,   101,   492,    86,
     356,    49,    58,   115,   468,   564,   530,   468,   705,   372,
     506,   669,    59,    78,    79,   520,    80,    60,   565,   609,
     597,   706,   499,   500,   165,   166,   167,   168,   651,   196,
      78,    79,   218,    80,   130,    81,   986,    70,   694,   219,
     501,   613,   396,   614,   105,   488,   489,   118,   119,   120,
     121,   854,    87,   610,   333,    54,   332,   402,   707,    71,
     611,   107,   824,    72,   314,   333,   326,   649,   825,   331,
     333,  1005,   970,   437,   492,   108,   708,   197,   -50,   315,
     331,   960,   612,     8,   779,   331,   730,   669,   742,   440,
     440,   918,   739,   911,   961,   291,   782,   441,   441,    81,
     779,   731,   604,   743,  1006,    66,   436,   605,   912,   292,
     198,   199,   442,   459,   388,   389,   561,   994,    54,   131,
     835,   333,   508,   508,   511,   511,   -50,   184,   333,   194,
      58,   824,   189,   542,   191,   139,   331,   825,   785,    18,
      59,    78,    79,   331,    80,   116,   117,   118,   119,   120,
     121,   518,   333,   949,   836,   929,   518,   518,   531,   -50,
     -50,   765,    60,   332,   200,   194,    54,   331,   950,   975,
     995,   929,   976,   326,   332,   519,    61,    58,   147,   332,
     519,   519,   585,   586,   326,   517,   996,    59,   847,   326,
     517,   517,   333,   116,   117,   118,   119,   120,   121,   192,
     837,   559,  1033,  1027,    71,   522,   523,   331,    72,   130,
     205,   333,    81,   -50,   720,   471,   224,  1034,   838,   541,
      78,    79,   234,    80,   556,   560,   331,   499,   500,    81,
     332,   333,   738,   237,   283,   558,   567,   332,   673,   238,
     326,   673,   673,   239,   839,   501,   331,   326,   499,   500,
     165,   166,   167,   168,   240,   241,    78,    79,   243,    80,
     244,   332,   472,   164,   798,   473,   501,   613,   440,   614,
     218,   326,   439,   245,   440,   247,   441,   219,   165,   166,
     167,   168,   441,   645,    78,    79,   169,    80,   248,   333,
     249,   603,   474,    78,    79,    81,    80,   999,   670,   250,
     251,   332,   113,   475,   331,   499,   500,   671,   476,   253,
     985,   326,   254,   281,   518,   255,   699,   518,   518,   256,
     332,   477,   672,   501,   613,   182,   614,   513,    81,   284,
     326,   306,   308,   774,   305,   395,   499,   500,   519,   926,
     332,   519,   519,   556,   307,   659,   775,   361,   517,   310,
     326,   517,   517,   683,   501,   613,   660,   614,   660,    81,
     365,    81,    81,    81,    81,   373,   698,   969,   661,   394,
     661,   333,   662,   700,   662,   805,   300,   399,   218,   729,
     998,   933,   403,   404,   934,   219,   331,   935,   333,   333,
     803,   194,   670,   410,   936,   412,   113,   416,   332,   725,
     663,   671,   663,   331,   331,   165,   166,   167,   326,   767,
     419,   421,   426,    81,   752,   753,   977,   427,   430,   329,
     737,   513,   457,   116,   117,   118,   119,   120,   121,   664,
     333,   664,   460,   556,   461,   470,   512,   300,   485,   487,
     113,   904,   805,   683,   494,   331,   980,   526,   524,   496,
     566,    81,    81,   570,   572,   579,   580,   803,   764,   766,
     589,   581,    81,    78,    79,   513,    80,   116,   117,   118,
     119,   120,   121,   590,   499,   500,   165,   166,   167,   168,
     332,   593,    78,    79,   804,    80,   596,   634,   635,   636,
     326,   650,   501,   613,   658,   614,   641,   332,   332,   687,
     692,   697,   711,   556,   712,   850,   713,   326,   326,   719,
     717,   714,   715,   823,   329,   860,   726,   732,   740,    81,
     744,   746,    81,   861,   499,   500,   831,   689,   424,   425,
    -204,   758,    78,    79,   688,    80,   771,   759,   772,   332,
     769,   783,   501,   613,   797,   614,   806,   808,   829,   326,
     810,   804,   222,   856,   832,   843,   846,    78,    79,   830,
      80,   116,   117,   118,   119,   120,   121,   844,   847,   852,
     333,   853,   556,   864,   116,   117,   118,   119,   120,   121,
      81,    81,   823,   909,   905,   331,   929,   605,   902,   903,
     908,   910,   940,   606,    81,   944,   924,    81,   947,   948,
     941,    78,    79,   942,    80,   116,   117,   118,   119,   120,
     121,   294,   330,   607,   295,   333,   174,   296,   951,   707,
     297,   329,   139,   118,   119,   120,   121,   608,   956,   862,
     331,   957,   329,   937,   609,   262,   963,   329,   263,   938,
     401,   964,   264,   265,   266,   194,   267,   943,   967,   268,
     269,   270,   271,    81,   215,    81,   981,   984,   272,   273,
     987,   992,   955,   274,   993,   147,  1007,   997,   610,    81,
     113,  1001,  1008,  1012,  1017,   611,  1018,   230,   233,   332,
     235,   236,   139,   113,   468,  1024,  1028,   807,   329,   326,
    1032,   971,   465,   575,   114,   329,   863,   612,   750,   252,
     865,   275,   757,   755,   642,    81,   856,   330,   859,   856,
     978,   261,   811,   571,   276,   815,    81,   979,   217,   329,
     643,    93,   133,   990,   332,   110,    84,   290,   499,   500,
     165,   166,   167,   168,   326,   293,    78,    79,   136,    80,
      81,    81,   507,   923,   809,  1035,   501,   613,   657,   614,
     164,   798,    81,   615,   338,   415,   834,  1009,   900,   329,
     962,  1010,   953,   959,   577,   165,   166,   167,   168,  1014,
    1015,    78,    79,   169,    80,   578,   991,  1011,   329,   667,
     359,   360,   736,   362,   363,   364,   615,   366,   367,   368,
       0,     0,  1023,   369,   370,   371,     0,     0,   329,     0,
     374,     0,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   330,     0,     0,     0,     0,   615,
     615,   615,   615,     0,     0,   330,     0,     0,     0,   400,
     330,    78,    79,   169,    80,   116,   117,   118,   119,   120,
     121,     0,     0,     0,    78,    79,     0,    80,   116,   117,
     118,   119,   120,   121,  -434,  -434,   329,   812,     0,     0,
       0,   113,     0,     0,  -434,     0,   813,     0,     0,  -434,
       0,     0,   316,   317,     0,   318,    54,   319,     0,     0,
       0,   330,   814,     0,     0,  -434,     0,     0,   330,   488,
     489,   118,   119,   120,   121,     0,     0,     0,  -434,    10,
      90,   445,     0,   674,  -434,   449,     0,   113,     0,    13,
       0,     0,   330,     0,    91,     0,   147,     0,   316,   317,
     615,   318,     0,   319,     0,     0,     0,     0,     0,     0,
      16,   458,     0,     0,     0,     0,     0,     0,   329,   463,
       0,   464,   801,    17,     0,     0,   616,     0,     0,    19,
     320,     0,   330,     0,     0,   329,   329,  -435,  -435,     0,
    -435,     0,   147,  -435,   269,  -434,   271,     0,     0,     0,
       0,   330,   272,   273,     0,     0,     0,     0,     0,   616,
     615,   533,     0,     0,   534,     0,     0,     0,     0,     0,
       0,   330,   537,   538,   539,     0,   320,   329,     0,     0,
       0,   164,     0,     0,     0,     0,     0,     0,     0,   801,
      92,     0,   616,   616,   616,   616,   165,   166,   167,   168,
       0,     0,    78,    79,   169,    80,   116,   117,   118,   119,
     120,   121,     0,     0,     0,     0,     0,     0,   615,     0,
       0,     0,     0,     0,  -206,     0,     0,   164,  -206,   330,
       0,     0,   615,     0,     0,   615,     0,  -206,     0,  -206,
    -206,     0,   165,   166,   167,   168,     0,     0,    78,    79,
     169,    80,   116,   117,   118,   119,   120,   121,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   512,     0,     0,
     640,   113,     0,     0,     0,  -206,  -196,     0,  -206,     0,
    -196,     0,     0,     0,  -205,     0,     0,     0,  -205,  -196,
       0,   615,     0,   616,     0,     0,   513,  -205,     0,  -205,
    -205,     0,     0,     0,     0,  -206,     0,   615,     0,     0,
       0,   330,   686,     0,     0,   802,  -206,   329,   695,     0,
     696,  -206,   194,     0,     0,     0,     0,  -196,   330,   330,
    -196,     0,     0,     0,  -206,  -205,     0,     0,  -205,     0,
       0,     0,     0,   615,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   616,     0,     0,     0,  -196,     0,     0,
       0,     0,   329,     0,     0,  -205,     0,     0,  -196,     0,
     330,     0,     0,  -196,     0,     0,  -205,     0,   615,   615,
       0,  -205,   802,     0,     0,     0,  -196,     0,     0,     0,
     615,     0,     0,     0,  -205,     0,     0,     0,     0,   748,
     749,     0,     0,     0,     0,   499,   500,   165,   166,   167,
     168,   616,     0,    78,    79,     0,    80,     0,     0,     0,
       0,     0,     0,   501,   613,   616,   614,     0,   616,     0,
       0,     0,    78,    79,     0,    80,   116,   117,   118,   119,
     120,   121,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   532,     0,     0,     0,     0,   137,     0,
       0,     0,     0,   670,     0,     0,     0,   113,   138,   139,
       0,   140,   678,   141,     0,     0,  -198,     0,     0,     0,
       0,     0,     0,     0,   616,  -198,     0,   142,     0,     0,
       0,   143,   513,     0,     0,     0,   144,     0,   145,     0,
     616,   146,   113,     0,     0,     0,     0,   568,     0,     0,
     330,     0,   147,   316,   317,     0,   318,     0,   319,     0,
     148,     0,     0,  -198,     0,     0,  -198,   149,   150,   151,
     152,   153,   154,   155,   156,     0,   616,     0,     0,     0,
       0,   157,   158,     0,     0,     0,     0,   159,     0,     0,
       0,   113,     0,  -198,     0,   330,     0,   147,     0,     0,
     160,     0,   316,   317,  -198,   318,     0,   319,   161,  -198,
     583,   616,   616,     0,     0,     0,     0,   162,     0,     0,
     163,     0,  -198,   616,     0,     0,   931,   932,   113,     0,
       0,   320,     0,     0,     0,     0,     0,   164,   939,   316,
     317,     0,   318,     0,   319,     0,   147,   945,   946,     0,
       0,     0,   165,   166,   167,   168,     0,     0,    78,    79,
     169,    80,   116,   117,   118,   119,   120,   121,    78,    79,
       0,    80,   116,   117,   118,   119,   120,   121,   113,     0,
     320,     0,   164,   147,     0,     0,     0,     0,     0,   316,
     317,     0,   318,     0,   319,     0,     0,   165,   166,   167,
     168,     0,     0,    78,    79,   169,    80,   116,   117,   118,
     119,   120,   121,     0,     0,     0,     0,   320,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   164,     0,   147,     0,     0,     0,     0,     0,     0,
       0,     0,    20,     0,     0,     0,   165,   166,   167,   168,
       0,     0,    78,    79,   169,    80,   116,   117,   118,   119,
     120,   121,     0,     0,     0,     0,     0,   320,   164,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   165,   166,   167,   168,     0,     0,    78,
      79,   169,    80,   116,   117,   118,   119,   120,   121,     0,
     262,     0,     0,   263,     0,   600,     0,   264,   265,   266,
       0,   267,     0,     0,   268,   269,   270,   271,   164,     0,
     601,     0,     0,   272,   273,     0,     0,     0,   274,     0,
       0,     0,     0,   165,   166,   167,   168,     0,     0,    78,
      79,   169,    80,   116,   117,   118,   119,   120,   121,   137,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   138,
     139,     0,   140,     0,   141,     0,   275,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   231,   142,   276,
       0,     0,   143,     0,     0,     0,     0,   144,     8,   145,
       0,     9,   146,     0,     0,     0,     0,     0,     0,    10,
      11,     0,    12,   147,     0,     0,     0,     0,     0,    13,
       0,   148,    14,     0,    15,     0,     0,     0,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,     0,
      16,     0,   157,   158,     0,     0,     0,     0,   159,     0,
       0,     0,     0,    17,    18,     0,     0,     0,     0,    19,
       0,   160,     0,     0,     0,     0,     0,     0,     0,   161,
       0,     0,    20,     0,     0,     0,     0,     0,   162,     0,
       0,   163,     0,   605,     0,     0,    20,     0,     0,   913,
     265,   266,     0,   267,     0,     0,   268,   269,   164,   271,
       0,     0,     0,     0,     0,   272,   273,     0,     0,   607,
       0,     0,     0,   165,   166,   167,   168,     0,     0,    78,
      79,   169,    80,   116,   117,   118,   119,   120,   121,   137,
     609,     0,     0,     0,     0,     0,     0,     0,     0,   138,
     139,   194,   140,     0,   141,     0,     0,     0,  -435,     0,
       0,   259,     0,     0,     0,     0,     0,     0,   142,     0,
       0,  -435,   143,     0,   610,     0,     0,   144,     0,   145,
       0,   611,   146,     0,     0,     0,     0,     0,     0,   260,
       0,     0,     0,   147,     0,     0,     0,     0,     0,     0,
       0,   148,     0,   612,     0,     0,     0,     0,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,     0,
       0,     0,   157,   158,     0,     0,     0,     0,   159,     0,
       0,     0,     0,     0,   499,   500,   165,   166,   167,   168,
       0,   160,    78,    79,     0,    80,     0,     0,     0,   161,
       0,     0,   501,   613,     0,   614,     0,   262,   162,     0,
     263,   163,     0,   605,   264,   265,   266,     0,   267,     0,
       0,   268,   269,   270,   271,     0,     0,   339,   164,     0,
     272,   273,     0,     0,     0,   274,     0,     0,     0,   607,
       0,     0,     0,   165,   166,   167,   168,     0,     0,    78,
      79,   169,    80,   116,   117,   118,   119,   120,   121,   137,
     609,     0,     0,     0,     0,     0,     0,     0,     0,   138,
     139,   194,   140,   275,   141,     0,     0,     0,     0,     0,
       0,   286,     0,     0,     0,     0,   276,     0,   142,     0,
       0,     0,   143,     0,   610,     0,     0,   144,     0,   145,
       0,   611,   146,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   147,     0,     0,     0,     0,     0,     0,
       0,   148,     0,   612,     0,     0,     0,     0,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,     0,
       0,     0,   157,   158,     0,     0,     0,     0,   159,     0,
       0,     0,     0,     0,   499,   500,   165,   166,   167,   168,
       0,   160,    78,    79,     0,    80,     0,     0,     0,   161,
       0,     0,   501,   613,     0,   614,     0,   262,   162,     0,
     263,   163,     0,   605,   264,   265,   266,     0,   267,     0,
       0,   268,   269,   270,   271,     0,     0,   355,   164,     0,
     272,   273,     0,     0,     0,   274,     0,     0,     0,     0,
       0,     0,     0,   165,   166,   167,   168,     0,     0,    78,
      79,   169,    80,   116,   117,   118,   119,   120,   121,   137,
     609,     0,     0,     0,     0,     0,     0,     0,     0,   138,
     139,   194,   140,   275,   141,     0,     0,   392,     0,     0,
       0,     0,     0,     0,     0,     0,   276,     0,   142,     0,
       0,     0,   143,     0,   610,     0,     0,   144,     0,   145,
       0,   611,   146,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   147,     0,     0,     0,     0,     0,     0,
       0,   148,     0,   612,     0,     0,     0,     0,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,     0,
       0,     0,   157,   158,     0,     0,     0,     0,   159,     0,
       0,     0,     0,     0,   499,   500,   165,   166,   167,   168,
       0,   160,    78,    79,     0,    80,     0,     0,     0,   161,
       0,     0,   501,   613,     0,   614,     0,   262,   162,     0,
     263,   163,     0,     0,   264,   265,   266,     0,   267,     0,
       0,   268,   269,   270,   271,     0,     0,   375,   164,     0,
     272,   273,     0,     0,     0,   274,     0,     0,     0,     0,
       0,     0,     0,   165,   166,   167,   168,     0,     0,    78,
      79,   169,    80,   116,   117,   118,   119,   120,   121,   137,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   138,
     139,     0,   140,   275,   141,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   276,     0,   142,     0,
       0,     0,   143,     0,     0,     0,     0,   144,   605,   145,
       0,     0,   146,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   147,     0,     0,     0,     0,     0,     0,
       0,   148,     0,     0,   607,     0,     0,     0,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,   608,     0,
       0,     0,   157,   158,     0,   609,     0,     0,   159,     0,
       0,   262,     0,     0,     0,     0,   194,     0,   264,   265,
     266,   160,   267,     0,     0,   268,   269,   270,   271,   161,
       0,     0,     0,     0,   272,   273,     0,     0,   162,   610,
       0,   163,     0,     0,     0,     0,   611,     0,     0,     0,
       0,     0,     0,   264,   265,   266,     0,   267,   164,     0,
     268,   269,   270,   271,     0,     0,     0,     0,   612,   272,
     273,     0,     0,   165,   166,   167,   168,   275,     0,    78,
      79,   169,    80,   116,   117,   118,   119,   120,   121,     0,
     276,     0,     0,     0,     0,     0,  -125,  -125,     0,   499,
     500,   165,   166,   167,   168,     0,     0,    78,    79,     0,
      80,     0,   275,   818,   679,   680,     0,   501,   613,   143,
     614,     0,     0,     0,   144,   276,     0,     0,     0,   146,
       0,     0,     0,     0,   819,     0,     0,   143,     0,     0,
       0,     0,   144,     0,     0,     0,     0,   146,   148,     0,
       0,     0,     0,     0,     0,   149,   150,   151,   152,   153,
     154,   155,   156,     0,     0,     0,   148,     0,     0,     0,
       0,     0,     0,   149,   150,   151,   152,   153,   154,   155,
     156,     0,     0,     0,     0,  -435,   265,   266,   160,   267,
       0,     0,   268,   269,  -435,   271,   161,     0,     0,     0,
       0,   272,   273,     0,     0,   162,   160,     0,     0,     0,
       0,     0,     0,     0,   161,     0,     0,     0,     0,     0,
       0,     0,     0,   162,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   550,     0,     0,     0,     0,     0,     0,
    -125,     0,     0,     0,   275,     0,    78,    79,     0,    80,
     116,   117,   118,   119,   120,   121,   143,   276,     0,     0,
       0,   144,     0,     0,    78,    79,   146,    80,   116,   117,
     118,   119,   120,   121,     0,     0,   551,     0,     0,     0,
       0,     0,     0,     0,     0,   148,     0,     0,     0,     0,
       0,     0,   149,   150,   151,   152,   153,   154,   155,   156,
       0,     0,   818,     0,     0,     0,     0,     0,   143,     0,
       0,     0,   552,   144,     0,     0,     0,     0,   146,     0,
       0,     0,     0,   819,     0,   160,     0,     0,     0,     0,
       0,     0,     0,   161,     0,     0,     0,   148,     0,     0,
       0,     0,   162,     0,   149,   150,   151,   152,   153,   154,
     155,   156,   262,   434,     0,   263,     0,     0,     0,   264,
     265,   266,     0,   267,     0,     0,   268,   269,   270,   271,
       0,     0,     0,     0,     0,   272,   273,   160,     0,     0,
     274,     0,     0,    78,    79,   161,    80,     0,   262,     0,
       0,   263,     0,     0,   162,   264,   265,   266,     0,   267,
       0,     0,   268,   269,   270,   271,     0,     0,   443,     0,
       0,   272,   273,     0,     0,     0,   274,     0,   275,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   276,     0,     0,     0,    78,    79,     0,    80,   116,
     117,   118,   119,   120,   121,     0,     0,     0,   262,     0,
       0,   263,     0,   444,   275,   264,   265,   266,     0,   267,
       0,     0,   268,   269,   270,   271,   262,   276,     0,   263,
       0,   272,   273,   264,   265,   266,   274,   267,     0,     0,
     268,   269,   270,   271,   262,     0,   446,   263,     0,   272,
     273,   264,   265,   266,   274,   267,     0,     0,   268,   269,
     270,   271,   262,     0,   447,   263,     0,   272,   273,   264,
     265,   266,   274,   267,   275,     0,   268,   269,   270,   271,
       0,     0,   448,     0,     0,   272,   273,   276,     0,     0,
     274,     0,   275,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   276,     0,     0,     0,     0,
     275,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   262,   276,     0,   263,     0,     0,   275,   264,
     265,   266,     0,   267,     0,     0,   268,   269,   270,   271,
     262,   276,   450,   263,     0,   272,   273,   264,   265,   266,
     274,   267,     0,     0,   268,   269,   270,   271,     0,     0,
     451,     0,   262,   272,   273,   263,     0,   452,   274,   264,
     265,   266,     0,   267,     0,     0,   268,   269,   270,   271,
       0,     0,     0,     0,     0,   272,   273,     0,   275,     0,
     274,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   276,     0,     0,     0,     0,   275,   262,     0,     0,
     263,     0,   453,     0,   264,   265,   266,     0,   267,   276,
       0,   268,   269,   270,   271,     0,     0,     0,   275,   262,
     272,   273,   263,     0,   454,   274,   264,   265,   266,     0,
     267,   276,     0,   268,   269,   270,   271,   262,     0,     0,
     263,     0,   272,   273,   264,   265,   266,   274,   267,     0,
       0,   268,   269,   270,   271,     0,     0,   455,     0,     0,
     272,   273,     0,   275,   262,   274,     0,   263,     0,     0,
       0,   264,   265,   266,     0,   267,   276,     0,   268,   269,
     270,   271,     0,     0,   456,   275,     0,   272,   273,     0,
       0,     0,   274,     0,     0,     0,     0,   262,   276,     0,
     263,     0,     0,   275,   264,   265,   266,     0,   267,     0,
       0,   268,   269,   270,   271,     0,   276,   535,     0,     0,
     272,   273,     0,     0,   262,   274,     0,   263,     0,     0,
     275,   264,   265,   266,     0,   267,     0,     0,   268,   269,
     270,   271,     0,   276,   536,     0,     0,   272,   273,     0,
     262,     0,   274,   263,     0,   598,     0,   264,   265,   266,
       0,   267,     0,   275,   268,   269,   270,   271,     0,     0,
       0,     0,   262,   272,   273,   263,   276,     0,   274,   264,
     265,   266,     0,   267,     0,     0,   268,   269,   270,   271,
     275,     0,   599,     0,     0,   272,   273,     0,   262,     0,
     274,   263,     0,   276,     0,   264,   265,   266,     0,   267,
       0,     0,   268,   269,   270,   271,   275,     0,   602,     0,
       0,   272,   273,     0,     0,   262,   274,     0,   263,   276,
       0,     0,   264,   265,   266,     0,   267,     0,   275,   268,
     269,   270,   271,     0,     0,   718,     0,     0,   272,   273,
       0,   276,   262,   274,     0,   263,     0,     0,     0,   264,
     265,   266,     0,   267,   275,     0,   268,   269,   270,   271,
       0,     0,   760,     0,     0,   272,   273,   276,   262,     0,
     274,   263,     0,     0,     0,   264,   265,   266,     0,   267,
       0,   275,   268,   269,   270,   271,     0,     0,   761,     0,
     262,   272,   273,   263,   276,     0,   274,   264,   265,   266,
       0,   267,     0,     0,   268,   269,   270,   271,   275,     0,
     816,     0,     0,   272,   273,     0,   262,     0,   274,   263,
       0,   276,     0,   264,   265,   266,     0,   267,     0,     0,
     268,   269,   270,   271,   275,     0,     0,   817,     0,   272,
     273,     0,     0,   262,   274,     0,   263,   276,     0,     0,
     264,   265,   266,     0,   267,     0,   275,   268,   269,   270,
     271,     0,     0,   973,     0,     0,   272,   273,     0,   276,
     262,   274,     0,   263,     0,     0,     0,   264,   265,   266,
       0,   267,   275,     0,   268,   269,   270,   271,     0,     0,
       0,   974,     0,   272,   273,   276,   262,     0,   274,   263,
       0,     0,     0,   264,   265,   266,     0,   267,     0,   275,
     268,   269,   270,   271,     0,     0,     0,     0,     0,   272,
     273,     0,   276,   869,   274,     0,   870,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   275,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   276,
       0,     0,     0,     0,   871,     0,     0,     0,     0,     0,
       0,     0,   275,     0,     0,   872,   873,   874,   875,   876,
       0,   877,   878,     0,     0,   276,     0,     0,     0,     0,
       0,     0,     0,   879,   880,   881,   882,   883,   884,   885,
     886,   887,   888,   889,   890,   891,   892,   893,   894
};

static const yytype_int16 yycheck[] =
{
      18,    62,   277,    53,   285,   191,   354,    18,    69,   210,
      15,   340,    56,   472,   112,   216,    69,   227,   677,   472,
     711,   646,   609,   610,   611,   612,    68,   209,     1,   422,
     624,   422,     1,   304,     5,    10,   134,     1,   828,    24,
      16,     8,    16,     5,   842,    51,    24,   422,     9,    70,
      68,    32,    75,    16,   900,   845,   902,     1,   717,   109,
      68,   720,   106,    66,    70,    16,    17,   111,    64,   398,
     953,    74,   122,    51,    88,  1016,    16,    14,   419,    75,
    1021,   123,   209,   101,   792,    28,    91,   105,   132,   107,
     101,   135,    70,    58,   105,     1,   107,   209,   123,    14,
     759,    41,    14,   728,   433,   123,   989,    50,   153,   955,
     124,    17,    84,   211,    52,   123,   509,   431,   509,    14,
       0,   435,   121,   710,    30,    62,    64,   188,   226,   101,
     107,    94,   591,   136,   509,   336,   186,   158,   159,   104,
     411,   832,   103,   166,   167,   853,   169,    62,   158,   159,
      62,   176,    75,   178,    48,   176,   847,   122,    95,    96,
     166,   222,   787,   953,   505,   183,   176,   148,    62,    75,
     166,   167,   183,   169,    27,    28,   138,   304,   153,  1025,
      67,   166,   457,   148,   202,   229,   284,   163,   166,   163,
     988,   209,   304,   166,   167,   588,   169,   588,   165,   989,
     169,   209,  1000,   167,   222,   223,   224,   478,   152,   160,
       5,   222,   223,   224,   528,    75,    36,   403,   153,   190,
      47,    16,   681,   166,   167,    85,   169,   124,   414,    56,
     238,    51,    75,    28,   149,     1,   437,   149,    10,   257,
     581,   582,    85,   166,   167,   427,   169,   107,    14,    64,
     531,    23,   158,   159,   160,   161,   162,   163,   572,    14,
     166,   167,    22,   169,   107,   283,   957,    48,   597,    29,
     176,   177,   283,   179,   124,   170,   171,   172,   173,   174,
     175,    28,   109,    98,   411,    64,   304,   292,   103,    70,
     105,    41,   751,    74,   148,   422,   304,   568,   751,   411,
     427,   992,   927,   353,   490,    14,   900,    62,    14,   163,
     422,    10,   127,    31,   901,   427,     9,   658,     9,     1,
       1,     1,   663,     9,    23,    43,  1017,     9,     9,   347,
     917,    24,   542,    24,   993,    62,   347,    17,    24,    57,
      95,    96,    24,    24,   170,   171,   473,   972,    64,   402,
      24,   478,   745,   746,   745,   746,    62,   126,   485,    75,
      75,   820,   153,   461,   166,    17,   478,   820,   716,    87,
      85,   166,   167,   485,   169,   170,   171,   172,   173,   174,
     175,   423,   509,     9,    58,     9,   428,   429,   438,    95,
      96,   107,   107,   411,   149,    75,    64,   509,    24,   944,
      24,     9,   947,   411,   422,   423,   121,    75,    60,   427,
     428,   429,    25,    26,   422,   423,    24,    85,     9,   427,
     428,   429,   549,   170,   171,   172,   173,   174,   175,   106,
     104,   473,     9,    24,    70,   428,   429,   549,    74,   107,
      40,   568,   460,   149,   645,    14,    41,    24,   122,   460,
     166,   167,    25,   169,   472,   473,   568,   158,   159,   477,
     478,   588,   163,    16,    99,   473,   477,   485,   586,    16,
     478,   589,   590,    16,   148,   176,   588,   485,   158,   159,
     160,   161,   162,   163,    16,    16,   166,   167,    16,   169,
      16,   509,    61,   145,   146,    64,   176,   177,     1,   179,
      22,   509,    24,    16,     1,    16,     9,    29,   160,   161,
     162,   163,     9,   563,   166,   167,   168,   169,    16,   646,
      16,    24,    91,   166,   167,   543,   169,    24,     1,    16,
      16,   549,     5,   102,   646,   158,   159,    10,   107,    16,
     163,   549,    16,   163,   586,    16,   607,   589,   590,    16,
     568,   120,    25,   176,   177,    16,   179,    30,   576,    52,
     568,    62,    14,    17,    93,   126,   158,   159,   586,   850,
     588,   589,   590,   591,    93,    24,    30,    16,   586,    38,
     588,   589,   590,   591,   176,   177,    37,   179,    37,   607,
      16,   609,   610,   611,   612,    24,   607,   926,    49,    24,
      49,   728,    53,   608,    53,   732,   792,     9,    22,   653,
      24,   163,     9,   169,   166,    29,   728,   169,   745,   746,
     732,    75,     1,    93,   176,   103,     5,    63,   646,   647,
      81,    10,    81,   745,   746,   160,   161,   162,   646,   700,
      16,    24,    23,   661,   688,   689,   163,    10,    65,   209,
     661,    30,    16,   170,   171,   172,   173,   174,   175,   110,
     787,   110,    99,   681,    73,    23,     1,   853,    10,    16,
       5,    75,   799,   681,   178,   787,   951,    66,    40,   103,
      88,   699,   700,   147,    23,    16,    24,   799,   699,   700,
      26,     9,   710,   166,   167,    30,   169,   170,   171,   172,
     173,   174,   175,    26,   158,   159,   160,   161,   162,   163,
     728,   104,   166,   167,   732,   169,    24,    32,    32,   164,
     728,    14,   176,   177,   110,   179,    59,   745,   746,    40,
     103,    25,    16,   751,   164,   785,    32,   745,   746,    14,
      23,   176,   176,   751,   304,   795,    16,    16,   163,   767,
      95,     9,   770,   797,   158,   159,   767,   101,   318,   319,
      26,    16,   166,   167,    84,   169,    16,    24,    14,   787,
      23,   176,   176,   177,   166,   179,    23,   147,   124,   787,
      97,   799,    88,   791,    49,    25,    24,   166,   167,   148,
     169,   170,   171,   172,   173,   174,   175,    26,     9,    14,
     927,   166,   820,   163,   170,   171,   172,   173,   174,   175,
     828,   829,   820,    58,   832,   927,     9,    17,   829,   124,
     160,   176,   163,    23,   842,    16,   158,   845,    16,    16,
     160,   166,   167,   160,   169,   170,   171,   172,   173,   174,
     175,   160,   209,    43,   163,   972,    76,   166,    16,   103,
     169,   411,    17,   172,   173,   174,   175,    57,    16,    24,
     972,    81,   422,   871,    64,     4,     9,   427,     7,   877,
       9,    32,    11,    12,    13,    75,    15,   885,   159,    18,
      19,    20,    21,   901,   114,   903,    14,   163,    27,    28,
      23,    85,   903,    32,    23,    60,    32,    24,    98,   917,
       5,    24,    32,    99,    16,   105,   103,   137,   138,   927,
     140,   141,    17,     5,   149,    16,   176,   734,   478,   927,
     163,   929,   403,   490,    16,   485,   799,   127,   681,   159,
     820,    70,   691,   690,   553,   953,   944,   304,   793,   947,
     948,   171,   745,   485,    83,   746,   964,   949,   123,   509,
     556,    27,    70,   964,   972,    65,    19,   187,   158,   159,
     160,   161,   162,   163,   972,   190,   166,   167,    75,   169,
     988,   989,   420,   848,   742,  1033,   176,   177,   576,   179,
     145,   146,  1000,   543,   214,   313,   770,  1000,   828,   549,
     917,  1003,   901,   911,   494,   160,   161,   162,   163,  1007,
    1008,   166,   167,   168,   169,   495,   966,  1004,   568,   581,
     240,   241,   658,   243,   244,   245,   576,   247,   248,   249,
      -1,    -1,  1017,   253,   254,   255,    -1,    -1,   588,    -1,
     260,    -1,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   411,    -1,    -1,    -1,    -1,   609,
     610,   611,   612,    -1,    -1,   422,    -1,    -1,    -1,   289,
     427,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,    -1,    -1,    -1,   166,   167,    -1,   169,   170,   171,
     172,   173,   174,   175,    42,    43,   646,     1,    -1,    -1,
      -1,     5,    -1,    -1,    52,    -1,    10,    -1,    -1,    57,
      -1,    -1,    16,    17,    -1,    19,    64,    21,    -1,    -1,
      -1,   478,    26,    -1,    -1,    73,    -1,    -1,   485,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    86,    42,
      43,   361,    -1,     1,    92,   365,    -1,     5,    -1,    52,
      -1,    -1,   509,    -1,    57,    -1,    60,    -1,    16,    17,
     710,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      73,   391,    -1,    -1,    -1,    -1,    -1,    -1,   728,   399,
      -1,   401,   732,    86,    -1,    -1,   543,    -1,    -1,    92,
      94,    -1,   549,    -1,    -1,   745,   746,    12,    13,    -1,
      15,    -1,    60,    18,    19,   153,    21,    -1,    -1,    -1,
      -1,   568,    27,    28,    -1,    -1,    -1,    -1,    -1,   576,
     770,   441,    -1,    -1,   444,    -1,    -1,    -1,    -1,    -1,
      -1,   588,   452,   453,   454,    -1,    94,   787,    -1,    -1,
      -1,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   799,
     153,    -1,   609,   610,   611,   612,   160,   161,   162,   163,
      -1,    -1,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,    -1,   828,    -1,
      -1,    -1,    -1,    -1,    10,    -1,    -1,   145,    14,   646,
      -1,    -1,   842,    -1,    -1,   845,    -1,    23,    -1,    25,
      26,    -1,   160,   161,   162,   163,    -1,    -1,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
     550,     5,    -1,    -1,    -1,    61,    10,    -1,    64,    -1,
      14,    -1,    -1,    -1,    10,    -1,    -1,    -1,    14,    23,
      -1,   901,    -1,   710,    -1,    -1,    30,    23,    -1,    25,
      26,    -1,    -1,    -1,    -1,    91,    -1,   917,    -1,    -1,
      -1,   728,   592,    -1,    -1,   732,   102,   927,   598,    -1,
     600,   107,    75,    -1,    -1,    -1,    -1,    61,   745,   746,
      64,    -1,    -1,    -1,   120,    61,    -1,    -1,    64,    -1,
      -1,    -1,    -1,   953,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   770,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,   972,    -1,    -1,    91,    -1,    -1,   102,    -1,
     787,    -1,    -1,   107,    -1,    -1,   102,    -1,   988,   989,
      -1,   107,   799,    -1,    -1,    -1,   120,    -1,    -1,    -1,
    1000,    -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,   679,
     680,    -1,    -1,    -1,    -1,   158,   159,   160,   161,   162,
     163,   828,    -1,   166,   167,    -1,   169,    -1,    -1,    -1,
      -1,    -1,    -1,   176,   177,   842,   179,    -1,   845,    -1,
      -1,    -1,   166,   167,    -1,   169,   170,   171,   172,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,     6,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    -1,     5,    16,    17,
      -1,    19,    10,    21,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   901,    23,    -1,    35,    -1,    -1,
      -1,    39,    30,    -1,    -1,    -1,    44,    -1,    46,    -1,
     917,    49,     5,    -1,    -1,    -1,    -1,    10,    -1,    -1,
     927,    -1,    60,    16,    17,    -1,    19,    -1,    21,    -1,
      68,    -1,    -1,    61,    -1,    -1,    64,    75,    76,    77,
      78,    79,    80,    81,    82,    -1,   953,    -1,    -1,    -1,
      -1,    89,    90,    -1,    -1,    -1,    -1,    95,    -1,    -1,
      -1,     5,    -1,    91,    -1,   972,    -1,    60,    -1,    -1,
     108,    -1,    16,    17,   102,    19,    -1,    21,   116,   107,
      24,   988,   989,    -1,    -1,    -1,    -1,   125,    -1,    -1,
     128,    -1,   120,  1000,    -1,    -1,   866,   867,     5,    -1,
      -1,    94,    -1,    -1,    -1,    -1,    -1,   145,   878,    16,
      17,    -1,    19,    -1,    21,    -1,    60,   887,   888,    -1,
      -1,    -1,   160,   161,   162,   163,    -1,    -1,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   166,   167,
      -1,   169,   170,   171,   172,   173,   174,   175,     5,    -1,
      94,    -1,   145,    60,    -1,    -1,    -1,    -1,    -1,    16,
      17,    -1,    19,    -1,    21,    -1,    -1,   160,   161,   162,
     163,    -1,    -1,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,    -1,    -1,    -1,    -1,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   145,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   119,    -1,    -1,    -1,   160,   161,   162,   163,
      -1,    -1,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,    94,   145,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   160,   161,   162,   163,    -1,    -1,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,    -1,
       4,    -1,    -1,     7,    -1,     9,    -1,    11,    12,    13,
      -1,    15,    -1,    -1,    18,    19,    20,    21,   145,    -1,
      24,    -1,    -1,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,   160,   161,   162,   163,    -1,    -1,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      17,    -1,    19,    -1,    21,    -1,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    83,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    44,    31,    46,
      -1,    34,    49,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    45,    60,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    68,    55,    -1,    57,    -1,    -1,    -1,    75,    76,
      77,    78,    79,    80,    81,    82,    -1,    -1,    -1,    -1,
      73,    -1,    89,    90,    -1,    -1,    -1,    -1,    95,    -1,
      -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    92,
      -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,
      -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,   125,    -1,
      -1,   128,    -1,    17,    -1,    -1,   119,    -1,    -1,    23,
      12,    13,    -1,    15,    -1,    -1,    18,    19,   145,    21,
      -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    43,
      -1,    -1,    -1,   160,   161,   162,   163,    -1,    -1,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,     6,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      17,    75,    19,    -1,    21,    -1,    -1,    -1,    70,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    83,    39,    -1,    98,    -1,    -1,    44,    -1,    46,
      -1,   105,    49,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,   127,    -1,    -1,    -1,    -1,    75,    76,
      77,    78,    79,    80,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    90,    -1,    -1,    -1,    -1,    95,    -1,
      -1,    -1,    -1,    -1,   158,   159,   160,   161,   162,   163,
      -1,   108,   166,   167,    -1,   169,    -1,    -1,    -1,   116,
      -1,    -1,   176,   177,    -1,   179,    -1,     4,   125,    -1,
       7,   128,    -1,    17,    11,    12,    13,    -1,    15,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,   145,    -1,
      27,    28,    -1,    -1,    -1,    32,    -1,    -1,    -1,    43,
      -1,    -1,    -1,   160,   161,   162,   163,    -1,    -1,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,     6,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      17,    75,    19,    70,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    83,    -1,    35,    -1,
      -1,    -1,    39,    -1,    98,    -1,    -1,    44,    -1,    46,
      -1,   105,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,   127,    -1,    -1,    -1,    -1,    75,    76,
      77,    78,    79,    80,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    90,    -1,    -1,    -1,    -1,    95,    -1,
      -1,    -1,    -1,    -1,   158,   159,   160,   161,   162,   163,
      -1,   108,   166,   167,    -1,   169,    -1,    -1,    -1,   116,
      -1,    -1,   176,   177,    -1,   179,    -1,     4,   125,    -1,
       7,   128,    -1,    17,    11,    12,    13,    -1,    15,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,   145,    -1,
      27,    28,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   160,   161,   162,   163,    -1,    -1,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,     6,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      17,    75,    19,    70,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    35,    -1,
      -1,    -1,    39,    -1,    98,    -1,    -1,    44,    -1,    46,
      -1,   105,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,   127,    -1,    -1,    -1,    -1,    75,    76,
      77,    78,    79,    80,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    90,    -1,    -1,    -1,    -1,    95,    -1,
      -1,    -1,    -1,    -1,   158,   159,   160,   161,   162,   163,
      -1,   108,   166,   167,    -1,   169,    -1,    -1,    -1,   116,
      -1,    -1,   176,   177,    -1,   179,    -1,     4,   125,    -1,
       7,   128,    -1,    -1,    11,    12,    13,    -1,    15,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,   145,    -1,
      27,    28,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   160,   161,   162,   163,    -1,    -1,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      17,    -1,    19,    70,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    35,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    44,    17,    46,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    43,    -1,    -1,    -1,    75,    76,
      77,    78,    79,    80,    81,    82,    -1,    -1,    57,    -1,
      -1,    -1,    89,    90,    -1,    64,    -1,    -1,    95,    -1,
      -1,     4,    -1,    -1,    -1,    -1,    75,    -1,    11,    12,
      13,   108,    15,    -1,    -1,    18,    19,    20,    21,   116,
      -1,    -1,    -1,    -1,    27,    28,    -1,    -1,   125,    98,
      -1,   128,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    11,    12,    13,    -1,    15,   145,    -1,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,   127,    27,
      28,    -1,    -1,   160,   161,   162,   163,    70,    -1,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,   158,
     159,   160,   161,   162,   163,    -1,    -1,   166,   167,    -1,
     169,    -1,    70,    33,    16,    17,    -1,   176,   177,    39,
     179,    -1,    -1,    -1,    44,    83,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    49,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,
      80,    81,    82,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    77,    78,    79,    80,    81,
      82,    -1,    -1,    -1,    -1,    11,    12,    13,   108,    15,
      -1,    -1,    18,    19,    20,    21,   116,    -1,    -1,    -1,
      -1,    27,    28,    -1,    -1,   125,   108,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,
     160,    -1,    -1,    -1,    70,    -1,   166,   167,    -1,   169,
     170,   171,   172,   173,   174,   175,    39,    83,    -1,    -1,
      -1,    44,    -1,    -1,   166,   167,    49,   169,   170,   171,
     172,   173,   174,   175,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    77,    78,    79,    80,    81,    82,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    95,    44,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    54,    -1,   108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   116,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,   125,    -1,    75,    76,    77,    78,    79,    80,
      81,    82,     4,     5,    -1,     7,    -1,    -1,    -1,    11,
      12,    13,    -1,    15,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    27,    28,   108,    -1,    -1,
      32,    -1,    -1,   166,   167,   116,   169,    -1,     4,    -1,
      -1,     7,    -1,    -1,   125,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,    -1,
      -1,    27,    28,    -1,    -1,    -1,    32,    -1,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    -1,   166,   167,    -1,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,     4,    -1,
      -1,     7,    -1,     9,    70,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    19,    20,    21,     4,    83,    -1,     7,
      -1,    27,    28,    11,    12,    13,    32,    15,    -1,    -1,
      18,    19,    20,    21,     4,    -1,    24,     7,    -1,    27,
      28,    11,    12,    13,    32,    15,    -1,    -1,    18,    19,
      20,    21,     4,    -1,    24,     7,    -1,    27,    28,    11,
      12,    13,    32,    15,    70,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    -1,    27,    28,    83,    -1,    -1,
      32,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,    83,    -1,     7,    -1,    -1,    70,    11,
      12,    13,    -1,    15,    -1,    -1,    18,    19,    20,    21,
       4,    83,    24,     7,    -1,    27,    28,    11,    12,    13,
      32,    15,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    -1,     4,    27,    28,     7,    -1,     9,    32,    11,
      12,    13,    -1,    15,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    70,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    70,     4,    -1,    -1,
       7,    -1,     9,    -1,    11,    12,    13,    -1,    15,    83,
      -1,    18,    19,    20,    21,    -1,    -1,    -1,    70,     4,
      27,    28,     7,    -1,     9,    32,    11,    12,    13,    -1,
      15,    83,    -1,    18,    19,    20,    21,     4,    -1,    -1,
       7,    -1,    27,    28,    11,    12,    13,    32,    15,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    -1,    -1,
      27,    28,    -1,    70,     4,    32,    -1,     7,    -1,    -1,
      -1,    11,    12,    13,    -1,    15,    83,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    70,    -1,    27,    28,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,     4,    83,    -1,
       7,    -1,    -1,    70,    11,    12,    13,    -1,    15,    -1,
      -1,    18,    19,    20,    21,    -1,    83,    24,    -1,    -1,
      27,    28,    -1,    -1,     4,    32,    -1,     7,    -1,    -1,
      70,    11,    12,    13,    -1,    15,    -1,    -1,    18,    19,
      20,    21,    -1,    83,    24,    -1,    -1,    27,    28,    -1,
       4,    -1,    32,     7,    -1,     9,    -1,    11,    12,    13,
      -1,    15,    -1,    70,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,     4,    27,    28,     7,    83,    -1,    32,    11,
      12,    13,    -1,    15,    -1,    -1,    18,    19,    20,    21,
      70,    -1,    24,    -1,    -1,    27,    28,    -1,     4,    -1,
      32,     7,    -1,    83,    -1,    11,    12,    13,    -1,    15,
      -1,    -1,    18,    19,    20,    21,    70,    -1,    24,    -1,
      -1,    27,    28,    -1,    -1,     4,    32,    -1,     7,    83,
      -1,    -1,    11,    12,    13,    -1,    15,    -1,    70,    18,
      19,    20,    21,    -1,    -1,    24,    -1,    -1,    27,    28,
      -1,    83,     4,    32,    -1,     7,    -1,    -1,    -1,    11,
      12,    13,    -1,    15,    70,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    -1,    27,    28,    83,     4,    -1,
      32,     7,    -1,    -1,    -1,    11,    12,    13,    -1,    15,
      -1,    70,    18,    19,    20,    21,    -1,    -1,    24,    -1,
       4,    27,    28,     7,    83,    -1,    32,    11,    12,    13,
      -1,    15,    -1,    -1,    18,    19,    20,    21,    70,    -1,
      24,    -1,    -1,    27,    28,    -1,     4,    -1,    32,     7,
      -1,    83,    -1,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    19,    20,    21,    70,    -1,    -1,    25,    -1,    27,
      28,    -1,    -1,     4,    32,    -1,     7,    83,    -1,    -1,
      11,    12,    13,    -1,    15,    -1,    70,    18,    19,    20,
      21,    -1,    -1,    24,    -1,    -1,    27,    28,    -1,    83,
       4,    32,    -1,     7,    -1,    -1,    -1,    11,    12,    13,
      -1,    15,    70,    -1,    18,    19,    20,    21,    -1,    -1,
      -1,    25,    -1,    27,    28,    83,     4,    -1,    32,     7,
      -1,    -1,    -1,    11,    12,    13,    -1,    15,    -1,    70,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    83,    69,    32,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    -1,   111,   112,   113,   114,   115,
      -1,   117,   118,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,   152,   185,   153,   187,   188,     0,    31,    34,
      42,    43,    45,    52,    55,    57,    73,    86,    87,    92,
     119,   186,   196,   198,   202,   204,   207,   343,   344,   345,
     347,   349,   351,   353,   355,   356,   357,   358,   365,   367,
     368,   369,   370,   371,   376,   380,   383,   384,    36,    51,
     189,   193,   107,   208,    64,   362,   452,   453,    75,    85,
     107,   121,   364,   379,   203,    48,    62,   361,   205,   364,
      48,    70,    74,   360,   363,   216,   217,    75,   166,   167,
     169,   340,   341,   451,   362,    47,    56,   109,   153,   197,
      43,    57,   153,   344,    10,   153,   454,     1,   169,   190,
     194,   124,   209,    67,   216,   124,   453,    41,    14,   277,
     361,   452,   350,     5,    16,    28,   170,   171,   172,   173,
     174,   175,   206,   306,   307,   315,   316,   317,   319,   340,
     107,   379,   453,   360,   346,   452,   363,     6,    16,    17,
      19,    21,    35,    39,    44,    46,    49,    60,    68,    75,
      76,    77,    78,    79,    80,    81,    82,    89,    90,    95,
     108,   116,   125,   128,   145,   160,   161,   162,   163,   168,
     312,   313,   314,   315,   321,   326,   329,   334,   335,   336,
     340,   342,    16,    41,   126,   354,   199,   200,   364,   153,
     366,   166,   106,   195,    75,   451,    14,    62,    95,    96,
     149,   210,   211,   219,   222,    40,   451,   216,   451,   278,
     209,   352,   216,   277,   320,   321,   209,   307,    22,    29,
     338,   339,    88,   124,    41,   216,   348,   277,   216,   452,
     321,    34,   198,   321,    25,   321,   321,    16,    16,    16,
      16,    16,   327,    16,    16,    16,   328,    16,    16,    16,
      16,    16,   321,    16,    16,    16,    16,     8,   165,    28,
      56,   321,     4,     7,    11,    12,    13,    15,    18,    19,
      20,    21,    27,    28,    32,    70,    83,    16,    94,   331,
     332,   163,   451,    99,    52,   209,    28,   201,   310,   311,
     321,    43,    57,   367,   160,   163,   166,   169,   191,   192,
     316,     1,   167,   381,   221,    93,    62,    93,    14,   340,
      38,   223,   224,   377,   148,   163,    16,    17,    19,    21,
      94,   279,   280,   283,   299,   305,   315,   318,   319,   334,
     335,   336,   340,   342,   222,   277,   209,   359,   321,    24,
     218,   222,     1,   166,   167,   169,   451,   453,   451,   451,
     277,   359,   216,   324,   325,    24,   315,   321,   333,   321,
     321,    16,   321,   321,   321,    16,   321,   321,   321,   321,
     321,   321,   340,    24,   321,    24,   321,   321,   321,   321,
     321,   321,   321,   321,   321,   321,   321,   321,   170,   171,
     323,   322,    24,   333,    24,   126,   451,   277,   219,     9,
     321,     9,   364,     9,   169,   386,   252,   281,   282,   283,
      93,   220,   103,   212,   225,   386,    63,   441,   442,    16,
     443,    24,   301,   300,   334,   334,    23,    10,   285,   284,
      65,   234,   235,   222,     5,   234,   451,   209,   199,    24,
       1,     9,    24,    24,     9,   321,    24,    24,    24,   321,
      24,    24,     9,     9,     9,    24,    24,    16,   321,    24,
      99,    73,   234,   321,   321,   192,    14,    62,   149,   434,
      23,    14,    61,    64,    91,   102,   107,   120,   253,   254,
     256,   260,   263,   266,   270,    10,   252,    16,   170,   171,
     227,   228,   316,    14,   178,     9,   103,   372,    70,   158,
     159,   176,   444,   445,   446,   448,   450,   372,   299,   303,
     304,   305,     1,    30,   287,   298,   308,   315,   319,   340,
     283,   286,   287,   287,    40,   223,    66,   239,   234,   223,
     222,   209,     1,   321,   321,    24,    24,   321,   321,   321,
     333,   451,   277,   382,   123,   176,   178,    16,   163,   264,
      16,    59,    95,   267,   326,   330,   340,   309,   315,   319,
     340,   342,   268,   269,     1,    14,    88,   451,    10,   252,
     147,   281,    23,   213,    14,   228,   378,   443,   442,    16,
      24,     9,   450,    24,   304,    25,    26,   302,   288,    26,
      26,   236,   240,   104,   241,   223,    24,   219,     9,    24,
       9,    24,    24,    24,   359,    17,    23,    43,    57,    64,
      98,   105,   127,   177,   179,   334,   335,   384,   385,   396,
     397,   399,   403,   409,   411,   412,   430,   431,   449,   450,
     451,    16,   163,   435,    32,    32,   164,   198,   250,   252,
     321,    59,   268,   332,   261,   209,   255,   257,   271,   252,
      14,   223,    24,   166,   214,   215,   226,   396,   110,    24,
      37,    49,    53,    81,   110,   373,   374,   446,   447,   450,
       1,    10,    25,   298,     1,   290,   291,   304,    10,    16,
      17,   237,   238,   315,   326,   330,   321,    40,    84,   101,
     247,   249,   103,   292,   234,   321,   321,    25,   451,   453,
     364,   431,   431,   431,   431,    10,    23,   103,   412,   436,
     410,    16,   164,    32,   176,   176,   251,    23,    24,    14,
     222,   250,    28,    50,   337,   340,    16,   274,   265,   216,
       9,    24,    16,   229,   230,   231,   447,   451,   163,   450,
     163,   375,     9,    24,    95,   289,     9,   292,   321,   321,
     238,   242,   216,   216,   248,   249,   246,   247,    16,    24,
      24,    24,    32,   148,   451,   107,   451,   453,   413,    23,
     398,    16,    14,     1,    17,    30,   415,   417,   429,   431,
     439,   440,   449,   176,   387,   199,   292,   262,   292,   258,
      51,    70,   166,   275,   276,   272,   250,   166,   146,   232,
     233,   334,   335,   336,   340,   342,    23,   231,   147,   374,
      97,   290,     1,    10,    26,   291,    24,    25,    33,    54,
     243,   244,   245,   315,   326,   330,   293,   292,   404,   124,
     148,   451,    49,   427,   399,    24,    58,   104,   122,   148,
     437,   438,   405,    25,    26,   418,    24,     9,   388,   389,
     209,   250,    14,   166,    28,   296,   315,   191,    24,   276,
     209,   216,    24,   233,   163,   244,    16,    17,   160,    69,
      72,   100,   111,   112,   113,   114,   115,   117,   118,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   294,   295,   297,   406,   408,
     411,   430,   451,   124,    75,   340,   449,   414,   160,    58,
     176,     9,    24,    23,   400,   401,   403,   416,     1,   419,
     421,   430,   449,   389,   158,   390,   219,   259,   191,     9,
      14,   321,   321,   163,   166,   169,   176,   315,   315,   321,
     163,   160,   160,   315,    16,   321,   321,    16,    16,     9,
      24,    16,   436,   429,   436,   451,    16,    81,   428,   438,
      10,    23,   417,     9,    32,   426,   422,   159,   391,   234,
     250,   315,   273,    24,    25,   296,   296,   163,   315,   295,
     333,    14,   421,   436,   163,   163,   449,    23,   402,   420,
     451,   427,    85,    23,   250,    24,    24,    24,    24,    24,
     407,    24,   403,   421,   423,   449,   292,    32,    32,   400,
     426,   428,    99,   392,   315,   315,   424,    16,   103,   393,
     432,   433,   434,   440,    16,   425,   434,    24,   176,   394,
     395,   436,   163,     9,    24,   395
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
      yyerror (YY_("syntax error: cannot back up")); \
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
# define YYLEX yylex (&yylval)
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
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
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

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
int yyparse (void);
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
yyparse (void)
#else
int
yyparse ()

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
        case 2:
#line 525 "./sparql_p.y"
    { sparp_arg->sparp_expr = (yyval.tree) = (yyvsp[(3) - (4)].tree); }
    break;

  case 3:
#line 526 "./sparql_p.y"
    {
		sparp_arg->sparp_expr = (yyval.tree) = spar_make_topmost_sparul_sql (sparp_arg,
		  (SPART **)t_revlist_to_array ((yyvsp[(3) - (4)].backstack)) ); }
    break;

  case 4:
#line 529 "./sparql_p.y"
    {
		sparp_arg->sparp_expr = (yyval.tree) = spar_make_topmost_sparul_sql (sparp_arg,
		  (SPART **)t_list (0) ); }
    break;

  case 5:
#line 532 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_topmost_qm_sql (sparp_arg);
		sparp_arg->sparp_expr = (yyval.tree); }
    break;

  case 6:
#line 535 "./sparql_p.y"
    { sparyyerror ("(internal SPARQL processing error) SPARQL mark expected"); }
    break;

  case 12:
#line 552 "./sparql_p.y"
    { ; }
    break;

  case 13:
#line 553 "./sparql_p.y"
    { ; }
    break;

  case 14:
#line 557 "./sparql_p.y"
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_VIRTSPECIFIC, "DEFINE"); }
    break;

  case 15:
#line 558 "./sparql_p.y"
    {
		dk_set_t vals = (yyvsp[(4) - (4)].backstack);
		while (NULL != vals) {
		    caddr_t *val = (caddr_t *)t_set_pop (&vals);
		    sparp_define (sparp_arg, (yyvsp[(3) - (4)].box), (ptrlong)(val[0]), val[1]);
		  } }
    break;

  case 16:
#line 567 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 17:
#line 568 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (3)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].tree)); }
    break;

  case 18:
#line 572 "./sparql_p.y"
    { (yyval.tree) = (SPART *)t_list (2, QNAME, (yyvsp[(1) - (1)].box)); }
    break;

  case 19:
#line 573 "./sparql_p.y"
    { (yyval.tree) = (SPART *)t_list (2, Q_IRI_REF, (yyvsp[(1) - (1)].box)); }
    break;

  case 20:
#line 574 "./sparql_p.y"
    { (yyval.tree) = (SPART *)t_list (2, SPARQL_STRING, (yyvsp[(1) - (1)].box)); }
    break;

  case 21:
#line 575 "./sparql_p.y"
    { (yyval.tree) = (SPART *)t_list (2, SPARQL_INTEGER, (yyvsp[(1) - (1)].box)); }
    break;

  case 22:
#line 576 "./sparql_p.y"
    { (yyval.tree) = (SPART *)t_list (2, SPAR_VARIABLE, (caddr_t)(yyvsp[(1) - (1)].tree)); }
    break;

  case 23:
#line 580 "./sparql_p.y"
    { ; }
    break;

  case 24:
#line 581 "./sparql_p.y"
    {
		if (NULL != sparp_env()->spare_base_uri)
		  sparyyerror ("Only one base declaration is allowed");
		sparp_env()->spare_base_uri = (yyvsp[(2) - (2)].box); }
    break;

  case 25:
#line 585 "./sparql_p.y"
    { sparyyerror ("Missing <iri-string> after BASE keyword"); }
    break;

  case 26:
#line 589 "./sparql_p.y"
    { ; }
    break;

  case 27:
#line 590 "./sparql_p.y"
    { ; }
    break;

  case 28:
#line 594 "./sparql_p.y"
    {
		if ((!strcmp ("sql:", (yyvsp[(2) - (3)].box)) && strcmp ("sql:", (yyvsp[(3) - (3)].box))) || (!strcmp ("bif:", (yyvsp[(2) - (3)].box)) && strcmp ("bif:", (yyvsp[(3) - (3)].box))))
		  sparyyerror ("Prefixes 'sql:' and 'bif:' are reserved for SQL names");
		t_set_push (&(sparp_env()->spare_namespace_prefixes), sparp_expand_q_iri_ref (sparp_arg, (yyvsp[(3) - (3)].box)));
		t_set_push (&(sparp_env()->spare_namespace_prefixes), t_box_dv_short_nchars ((yyvsp[(2) - (3)].box), box_length ((yyvsp[(2) - (3)].box))-2)); }
    break;

  case 29:
#line 599 "./sparql_p.y"
    { sparyyerror ("Missing <namespace-iri-string> in PREFIX declaration"); }
    break;

  case 30:
#line 600 "./sparql_p.y"
    { sparyyerror ("Missing namespace prefix after PREFIX keyword"); }
    break;

  case 31:
#line 605 "./sparql_p.y"
    {
		sparp_arg->sparp_env->spare_top_retval_selid = spar_selid_push (sparp_arg);
                t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL);
		sparp_arg->sparp_allow_aggregates_in_expn |= 1; }
    break;

  case 32:
#line 610 "./sparql_p.y"
    {
		SPART *where_gp = spar_gp_finalize (sparp_arg, NULL);
		SPART *wm = (yyvsp[(6) - (6)].tree);
		caddr_t retselid = spar_selid_pop (sparp_arg);
		wm->_.wm.where_gp = where_gp;
		(yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, (yyvsp[(1) - (6)].token_type), (yyvsp[(3) - (6)].trees), retselid, wm );
		if (SPAR_REQ_TOP == (yyval.tree)->type)
		  sparp_expand_top_retvals (sparp_arg, (yyval.tree), 0 /* never cloned, hence 0 == safely_copy_all_vars */); }
    break;

  case 33:
#line 621 "./sparql_p.y"
    { (yyval.token_type) = SELECT_L; }
    break;

  case 34:
#line 622 "./sparql_p.y"
    { (yyval.token_type) = SELECT_L; }
    break;

  case 35:
#line 623 "./sparql_p.y"
    { (yyval.token_type) = DISTINCT_L; }
    break;

  case 36:
#line 624 "./sparql_p.y"
    { (yyval.token_type) = COUNT_DISTINCT_L; }
    break;

  case 37:
#line 628 "./sparql_p.y"
    { (yyval.token_type) = sparp_arg->sparp_rset_lexdepth_plus_1; sparp_arg->sparp_rset_lexdepth_plus_1 = sparp_arg->sparp_lexdepth + 1; }
    break;

  case 38:
#line 629 "./sparql_p.y"
    { sparp_arg->sparp_rset_lexdepth_plus_1 = (yyvsp[(1) - (2)].token_type); (yyval.trees) = (yyvsp[(2) - (2)].trees); }
    break;

  case 39:
#line 633 "./sparql_p.y"
    { (yyval.trees) = (SPART **) _STAR; }
    break;

  case 40:
#line 635 "./sparql_p.y"
    { (yyval.trees) = (SPART **) t_revlist_to_array ((yyvsp[(1) - (1)].backstack)); }
    break;

  case 41:
#line 636 "./sparql_p.y"
    {
		SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_VIRTSPECIFIC, "comma-delimited list of result set expressions");
		(yyval.trees) = (SPART **) t_revlist_to_array ((yyvsp[(1) - (1)].backstack)); }
    break;

  case 42:
#line 642 "./sparql_p.y"
    {
		sparp_arg->sparp_env->spare_top_retval_selid = spar_selid_push (sparp_arg);
                t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL); }
    break;

  case 43:
#line 646 "./sparql_p.y"
    {
                const char *formatter, *agg_formatter, *agg_mdata;
		SPART *where_gp = spar_gp_finalize (sparp_arg, NULL);
		SPART *wm = (yyvsp[(6) - (7)].tree);
		caddr_t retselid = spar_selid_pop (sparp_arg);
		wm->_.wm.where_gp = where_gp;
		(yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, CONSTRUCT_L, NULL,
                  retselid, wm );
                ssg_find_formatter_by_name_and_subtype ((yyval.tree)->_.req_top.formatmode_name, CONSTRUCT_L, &formatter, &agg_formatter, &agg_mdata);
                spar_compose_retvals_of_construct (sparp_arg, (yyval.tree), (yyvsp[(3) - (7)].tree), formatter, agg_formatter, agg_mdata); }
    break;

  case 44:
#line 660 "./sparql_p.y"
    {
		sparp_arg->sparp_env->spare_top_retval_selid = spar_selid_push (sparp_arg);
                t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL); }
    break;

  case 45:
#line 664 "./sparql_p.y"
    {
		SPART * where_gp = spar_gp_finalize (sparp_arg, NULL);
		SPART *wm = (yyvsp[(6) - (7)].tree);
		caddr_t retselid = spar_selid_pop (sparp_arg);
		wm->_.wm.where_gp = where_gp;
		(yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, DESCRIBE_L, (yyvsp[(3) - (7)].trees),
                  retselid, wm );
		if (((SPART **)_STAR == (yyvsp[(3) - (7)].trees)) && (SPAR_REQ_TOP == (yyval.tree)->type))
		  sparp_expand_top_retvals (sparp_arg, (yyval.tree), 0 /* never cloned, hence 0 == safely_copy_all_vars */); }
    break;

  case 46:
#line 676 "./sparql_p.y"
    { (yyval.trees) = (SPART **) _STAR; }
    break;

  case 47:
#line 677 "./sparql_p.y"
    { (yyval.trees) = (SPART **) t_list_to_array ((yyvsp[(1) - (1)].backstack)); }
    break;

  case 48:
#line 681 "./sparql_p.y"
    {
		sparp_arg->sparp_env->spare_top_retval_selid = spar_selid_push (sparp_arg);
                t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL); }
    break;

  case 49:
#line 685 "./sparql_p.y"
    {
		SPART * where_gp = spar_gp_finalize (sparp_arg, NULL);
		(yyval.tree) = spar_make_top (sparp_arg, ASK_L, (SPART **)t_list(0), spar_selid_pop (sparp_arg),
		  where_gp, NULL, NULL, NULL, (SPART *)t_box_num(1), (SPART *)t_box_num(0) ); }
    break;

  case 50:
#line 692 "./sparql_p.y"
    { }
    break;

  case 51:
#line 693 "./sparql_p.y"
    { }
    break;

  case 52:
#line 701 "./sparql_p.y"
    {
		sparp_make_and_push_new_graph_source (sparp_arg, (yyvsp[(1) - (3)].token_type), (yyvsp[(2) - (3)].tree), (yyvsp[(3) - (3)].trees)); }
    break;

  case 53:
#line 706 "./sparql_p.y"
    { (yyval.token_type) = SPART_GRAPH_FROM; }
    break;

  case 54:
#line 707 "./sparql_p.y"
    { (yyval.token_type) = SPART_GRAPH_NAMED; }
    break;

  case 55:
#line 708 "./sparql_p.y"
    { (yyval.token_type) = SPART_GRAPH_NOT_FROM; }
    break;

  case 56:
#line 709 "./sparql_p.y"
    { (yyval.token_type) = SPART_GRAPH_NOT_NAMED; }
    break;

  case 57:
#line 710 "./sparql_p.y"
    { (yyval.token_type) = SPART_GRAPH_NOT_FROM; }
    break;

  case 58:
#line 711 "./sparql_p.y"
    { (yyval.token_type) = SPART_GRAPH_NOT_NAMED; }
    break;

  case 59:
#line 715 "./sparql_p.y"
    { (yyval.trees) = NULL; }
    break;

  case 60:
#line 716 "./sparql_p.y"
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_OPTION, "OPTION () sponge configuration"); }
    break;

  case 61:
#line 717 "./sparql_p.y"
    { (yyval.trees) = (yyvsp[(4) - (4)].trees); }
    break;

  case 62:
#line 721 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (0); }
    break;

  case 63:
#line 722 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_revlist_to_array ((yyvsp[(1) - (2)].backstack)); }
    break;

  case 64:
#line 726 "./sparql_p.y"
    {	/* [Virt]	SpongeOption	 ::=  QNAME PrecodeExpn */
		(yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (2)].box)); t_set_push (&((yyval.backstack)), (yyvsp[(2) - (2)].tree)); }
    break;

  case 65:
#line 728 "./sparql_p.y"
    {
		(yyval.backstack) = (yyvsp[(1) - (4)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(3) - (4)].box)); t_set_push (&((yyval.backstack)), (yyvsp[(4) - (4)].tree)); }
    break;

  case 66:
#line 733 "./sparql_p.y"
    { sparp_arg->sparp_in_precode_expn = 1; }
    break;

  case 67:
#line 735 "./sparql_p.y"
    { sparp_arg->sparp_in_precode_expn = 0; (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 68:
#line 739 "./sparql_p.y"
    {
		sparp_arg->sparp_allow_aggregates_in_expn &= ~1;
		spar_gp_init (sparp_arg, WHERE_L); }
    break;

  case 69:
#line 742 "./sparql_p.y"
    {;}
    break;

  case 70:
#line 746 "./sparql_p.y"
    {
		sparp_arg->sparp_allow_aggregates_in_expn &= ~1;
		spar_gp_init (sparp_arg, WHERE_L); }
    break;

  case 71:
#line 749 "./sparql_p.y"
    {;}
    break;

  case 72:
#line 750 "./sparql_p.y"
    {
		sparp_arg->sparp_allow_aggregates_in_expn &= ~1;
		spar_gp_init (sparp_arg, WHERE_L); }
    break;

  case 73:
#line 753 "./sparql_p.y"
    {;}
    break;

  case 74:
#line 757 "./sparql_p.y"
    {;}
    break;

  case 75:
#line 761 "./sparql_p.y"
    { (yyval.tree) = NULL; }
    break;

  case 76:
#line 762 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 77:
#line 766 "./sparql_p.y"
    {
		if (NULL != sparp_arg->sparp_env->spare_bindings_vars)
		  sparyyerror ("Only one BINDINGS clause per query is allowed");
		spar_selid_push (sparp_arg); }
    break;

  case 78:
#line 770 "./sparql_p.y"
    {
		spar_selid_pop (sparp_arg);
		sparp_arg->sparp_env->spare_bindings_vars = (SPART **)t_revlist_to_array ((yyvsp[(3) - (4)].backstack)); }
    break;

  case 79:
#line 773 "./sparql_p.y"
    {
		sparp_arg->sparp_env->spare_bindings_rowset = (SPART ***)t_revlist_to_array ((yyvsp[(6) - (7)].backstack));
		(yyval.tree) = spartlist (sparp_arg, 4, SPAR_BINDINGS_INV, 0,
			sparp_arg->sparp_env->spare_bindings_vars,
			sparp_arg->sparp_env->spare_bindings_rowset );
		spar_alloc_fake_equivs_for_bindings_inv (sparp_arg, (yyval.tree)); }
    break;

  case 80:
#line 782 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), spar_make_variable (sparp_arg, (yyvsp[(1) - (1)].box))); }
    break;

  case 81:
#line 783 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (2)].backstack); t_set_push (&((yyval.backstack)), spar_make_variable (sparp_arg, (yyvsp[(2) - (2)].box))); }
    break;

  case 82:
#line 787 "./sparql_p.y"
    { ; }
    break;

  case 83:
#line 788 "./sparql_p.y"
    { ; }
    break;

  case 84:
#line 789 "./sparql_p.y"
    { sparyyerror ("Global variable can not be used in the header of BINDINGS"); }
    break;

  case 85:
#line 793 "./sparql_p.y"
    { (yyval.backstack) = NULL; }
    break;

  case 86:
#line 794 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (1)].backstack); }
    break;

  case 87:
#line 798 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].trees)); }
    break;

  case 88:
#line 799 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (2)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(2) - (2)].trees)); }
    break;

  case 89:
#line 803 "./sparql_p.y"
    {
		(yyval.trees) = t_revlist_to_array ((yyvsp[(2) - (3)].backstack));
		if (BOX_ELEMENTS ((yyval.trees)) != BOX_ELEMENTS (sparp_arg->sparp_env->spare_bindings_vars))
		  sparyyerror ("Number of values in a binding does not match number of variables to bind"); }
    break;

  case 90:
#line 810 "./sparql_p.y"
    {(yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 91:
#line 811 "./sparql_p.y"
    {(yyval.backstack) = (yyvsp[(1) - (2)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(2) - (2)].tree)); }
    break;

  case 97:
#line 820 "./sparql_p.y"
    {(yyval.tree) = NULL; }
    break;

  case 98:
#line 825 "./sparql_p.y"
    { (yyval.tree) = spar_make_wm (sparp_arg, NULL, (SPART **)t_revlist_to_array ((yyvsp[(1) - (3)].backstack)), (yyvsp[(2) - (3)].tree), (SPART **)t_revlist_to_array ((yyvsp[(3) - (3)].backstack)), (SPART *)t_box_num (SPARP_MAXLIMIT), (SPART *)t_box_num (0)); }
    break;

  case 99:
#line 826 "./sparql_p.y"
    { (yyval.tree) = spar_make_wm (sparp_arg, NULL, (SPART **)t_revlist_to_array ((yyvsp[(1) - (5)].backstack)), (yyvsp[(2) - (5)].tree), (SPART **)t_revlist_to_array ((yyvsp[(3) - (5)].backstack)), (yyvsp[(4) - (5)].tree), (yyvsp[(5) - (5)].tree)); }
    break;

  case 100:
#line 827 "./sparql_p.y"
    { (yyval.tree) = spar_make_wm (sparp_arg, NULL, (SPART **)t_revlist_to_array ((yyvsp[(1) - (5)].backstack)), (yyvsp[(2) - (5)].tree), (SPART **)t_revlist_to_array ((yyvsp[(3) - (5)].backstack)), (yyvsp[(5) - (5)].tree), (yyvsp[(4) - (5)].tree)); }
    break;

  case 101:
#line 831 "./sparql_p.y"
    { (yyval.backstack) = NULL; }
    break;

  case 102:
#line 832 "./sparql_p.y"
    {
		spar_selid_push_reused (sparp_arg, sparp_arg->sparp_env->spare_top_retval_selid);
		sparp_arg->sparp_allow_aggregates_in_expn |= 1; }
    break;

  case 103:
#line 835 "./sparql_p.y"
    {
		spar_selid_pop (sparp_arg); (yyval.backstack) = (yyvsp[(4) - (4)].backstack);
		sparp_arg->sparp_allow_aggregates_in_expn &= ~1; }
    break;

  case 104:
#line 841 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 105:
#line 842 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (2)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(2) - (2)].tree)); }
    break;

  case 106:
#line 847 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(2) - (3)].tree); }
    break;

  case 107:
#line 848 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(2) - (3)].tree); }
    break;

  case 111:
#line 855 "./sparql_p.y"
    { (yyval.tree) = NULL; }
    break;

  case 112:
#line 856 "./sparql_p.y"
    {
		spar_selid_push_reused (sparp_arg, sparp_arg->sparp_env->spare_top_retval_selid);
		sparp_arg->sparp_allow_aggregates_in_expn |= 1; }
    break;

  case 113:
#line 859 "./sparql_p.y"
    {
		spar_selid_pop (sparp_arg); (yyval.tree) = (yyvsp[(3) - (3)].tree);
		sparp_arg->sparp_allow_aggregates_in_expn &= ~1; }
    break;

  case 114:
#line 865 "./sparql_p.y"
    { (yyval.backstack) = NULL; }
    break;

  case 115:
#line 866 "./sparql_p.y"
    {
		spar_selid_push_reused (sparp_arg, sparp_arg->sparp_env->spare_top_retval_selid);
		sparp_arg->sparp_allow_aggregates_in_expn |= 1; }
    break;

  case 116:
#line 869 "./sparql_p.y"
    {
		spar_selid_pop (sparp_arg); (yyval.backstack) = (yyvsp[(4) - (4)].backstack);
		sparp_arg->sparp_allow_aggregates_in_expn &= ~1; }
    break;

  case 117:
#line 875 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 118:
#line 876 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (2)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(2) - (2)].tree)); }
    break;

  case 119:
#line 881 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 3, ORDER_L, (ptrlong)(yyvsp[(1) - (4)].token_type), (yyvsp[(3) - (4)].tree)); }
    break;

  case 120:
#line 882 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 3, ORDER_L, (ptrlong)(yyvsp[(1) - (4)].token_type), (yyvsp[(3) - (4)].tree)); }
    break;

  case 121:
#line 883 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 3, ORDER_L, (ptrlong)(yyvsp[(1) - (2)].token_type), (yyvsp[(2) - (2)].box)); }
    break;

  case 122:
#line 884 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 3, ORDER_L, (ptrlong)ASC_L, (yyvsp[(1) - (1)].tree)); }
    break;

  case 123:
#line 885 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 3, ORDER_L, (ptrlong)ASC_L, (yyvsp[(1) - (1)].tree)); }
    break;

  case 124:
#line 886 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 3, ORDER_L, (ptrlong)ASC_L, (yyvsp[(1) - (1)].tree)); }
    break;

  case 125:
#line 890 "./sparql_p.y"
    { (yyval.token_type) = ASC_L; }
    break;

  case 126:
#line 891 "./sparql_p.y"
    { (yyval.token_type) = ASC_L; }
    break;

  case 127:
#line 892 "./sparql_p.y"
    { (yyval.token_type) = DESC_L; }
    break;

  case 128:
#line 896 "./sparql_p.y"
    { (yyval.tree) = (SPART *)t_box_num (SPARP_MAXLIMIT); }
    break;

  case 130:
#line 901 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 131:
#line 905 "./sparql_p.y"
    { (yyval.tree) = (SPART *)t_box_num (0); }
    break;

  case 133:
#line 910 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 134:
#line 914 "./sparql_p.y"
    {
		(yyval.tree) = spar_gp_finalize (sparp_arg, (yyvsp[(3) - (3)].trees));
		sparp_validate_options_of_tree (sparp_arg, (yyval.tree), (yyval.tree)->_.gp.options); }
    break;

  case 135:
#line 917 "./sparql_p.y"
    {
		(yyval.token_type) = (ptrlong)(sparp_env()->spare_context_gp_subtypes->data);
		if (NULL == sparp_env()->spare_context_sinvs) { /* There's an exception related to codegen-time optimization SERVICE { SELECT {x}} like it is SERVICE {x}, so no error right here. */
		    SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_BI, "subquery"); }
		if (SERVICE_L == (yyval.token_type))
		  spar_gp_init (sparp_arg, SELECT_L);
		spar_env_push (sparp_arg);
		spar_selid_push (sparp_arg);
                t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL);
		sparp_arg->sparp_allow_aggregates_in_expn <<= 1;
		sparp_arg->sparp_allow_aggregates_in_expn |= 1; }
    break;

  case 136:
#line 930 "./sparql_p.y"
    {
		SPART *subselect_top;
		SPART *where_gp;
	        caddr_t retselid;
		SPART *wm = (yyvsp[(6) - (8)].tree);
		SPART *res;
		where_gp = spar_gp_finalize (sparp_arg, NULL);
		retselid = spar_selid_pop (sparp_arg);
		wm->_.wm.where_gp = where_gp;
		subselect_top = spar_make_top_or_special_case_from_wm (sparp_arg,
		  (yyvsp[(1) - (8)].token_type), (yyvsp[(3) - (8)].trees), retselid, wm );
		if (SPAR_REQ_TOP == subselect_top->type)
		  sparp_expand_top_retvals (sparp_arg, subselect_top, 1 /* safely_copy_all_vars */);
		spar_env_pop (sparp_arg);
		res = spar_gp_finalize_with_subquery (sparp_arg, (yyvsp[(8) - (8)].trees), subselect_top);
		if (SERVICE_L == (yyvsp[(2) - (8)].token_type))
		  {
		    spar_gp_add_member (sparp_arg, res);
		    res = spar_gp_finalize (sparp_arg, NULL);
		  }
		(yyval.tree) = res;
		sparp_arg->sparp_allow_aggregates_in_expn >>= 1; }
    break;

  case 137:
#line 955 "./sparql_p.y"
    { }
    break;

  case 138:
#line 956 "./sparql_p.y"
    { }
    break;

  case 139:
#line 957 "./sparql_p.y"
    { }
    break;

  case 140:
#line 961 "./sparql_p.y"
    { spar_gp_add_member (sparp_arg, (yyvsp[(1) - (1)].tree)); }
    break;

  case 141:
#line 962 "./sparql_p.y"
    { spar_gp_add_member (sparp_arg, (yyvsp[(1) - (1)].tree)); }
    break;

  case 142:
#line 963 "./sparql_p.y"
    { spar_gp_add_member (sparp_arg, (yyvsp[(1) - (1)].tree)); }
    break;

  case 143:
#line 964 "./sparql_p.y"
    { spar_gp_add_member (sparp_arg, (yyvsp[(1) - (1)].tree)); }
    break;

  case 144:
#line 965 "./sparql_p.y"
    { spar_gp_add_member (sparp_arg, (yyvsp[(1) - (1)].tree)); }
    break;

  case 145:
#line 966 "./sparql_p.y"
    { spar_gp_add_filter (sparp_arg, (yyvsp[(1) - (1)].tree)); }
    break;

  case 146:
#line 970 "./sparql_p.y"
    { spar_gp_init (sparp_arg, OPTIONAL_L); }
    break;

  case 147:
#line 970 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(4) - (4)].tree); }
    break;

  case 148:
#line 971 "./sparql_p.y"
    { sparyyerror ("Missing '{' after OPTIONAL keyword"); }
    break;

  case 149:
#line 975 "./sparql_p.y"
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_QUAD_MAP, "QUAD MAP { ... } group pattern"); }
    break;

  case 150:
#line 976 "./sparql_p.y"
    { t_set_push (&(sparp_env()->spare_context_qms), (yyvsp[(4) - (4)].tree)); }
    break;

  case 151:
#line 977 "./sparql_p.y"
    {
		spar_gp_init (sparp_arg, 0); }
    break;

  case 152:
#line 979 "./sparql_p.y"
    { t_set_pop (&(sparp_env()->spare_context_qms)); (yyval.tree) = (yyvsp[(8) - (8)].tree); }
    break;

  case 153:
#line 984 "./sparql_p.y"
    { t_set_push (&(sparp_env()->spare_context_graphs), (yyvsp[(2) - (2)].tree)); }
    break;

  case 154:
#line 985 "./sparql_p.y"
    {
		spar_gp_init (sparp_arg, 0);
		spar_gp_add_filters_for_named_graph (sparp_arg); }
    break;

  case 155:
#line 988 "./sparql_p.y"
    { t_set_pop (&(sparp_env()->spare_context_graphs)); (yyval.tree) = (yyvsp[(6) - (6)].tree); }
    break;

  case 156:
#line 992 "./sparql_p.y"
    { spar_gp_init (sparp_arg, 0); }
    break;

  case 157:
#line 992 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(3) - (3)].tree); }
    break;

  case 158:
#line 993 "./sparql_p.y"
    {
                sparp_env()->spare_good_graph_varnames = sparp_env()->spare_good_graph_bmk;
		spar_gp_init (sparp_arg, UNION_L);
		spar_gp_add_member (sparp_arg, (yyvsp[(1) - (3)].tree));
		spar_gp_init (sparp_arg, 0); }
    break;

  case 159:
#line 998 "./sparql_p.y"
    {
		spar_gp_add_member (sparp_arg, (yyvsp[(5) - (5)].tree));
		(yyval.tree) = spar_gp_finalize (sparp_arg, NULL); }
    break;

  case 160:
#line 1004 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(3) - (4)].tree); }
    break;

  case 161:
#line 1005 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 162:
#line 1006 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 163:
#line 1007 "./sparql_p.y"
    {		/*... | 'NOT'? 'EXISTS' DatasetClause* WhereClause */
		if ((yyvsp[(2) - (3)].token_type))
		  (yyval.tree) = (yyvsp[(3) - (3)].tree);
		else
		  SPAR_BIN_OP ((yyval.tree), BOP_NOT, (yyvsp[(3) - (3)].tree), NULL); }
    break;

  case 164:
#line 1012 "./sparql_p.y"
    {		/*... | 'NOT'? 'EXISTS' DatasetClause* WhereClause */
		/*!!! Dirty hack! Works wrong if MINUS is at the middle of the GP (before smth or not a 2-nd item) */
		  SPAR_BIN_OP ((yyval.tree), BOP_NOT, (yyvsp[(2) - (2)].tree), NULL); }
    break;

  case 165:
#line 1018 "./sparql_p.y"
    { (yyval.token_type) = 1; }
    break;

  case 166:
#line 1019 "./sparql_p.y"
    { (yyval.token_type) = 0; }
    break;

  case 167:
#line 1023 "./sparql_p.y"
    {
		SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_SPARQL11, "SPARQL 1.1 FILTER EXISTS / FILTER NOT EXISTS test");
		spar_gp_init (sparp_arg, SELECT_L);
		spar_env_push (sparp_arg);
		spar_selid_push (sparp_arg);
		t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL);
		sparp_arg->sparp_allow_aggregates_in_expn <<= 1; }
    break;

  case 168:
#line 1032 "./sparql_p.y"
    {
		SPART *subselect_top;
		SPART *where_gp;
		where_gp = spar_gp_finalize (sparp_arg, NULL);
		subselect_top = spar_make_top (sparp_arg, ASK_L, (SPART **)t_list(0), spar_selid_pop (sparp_arg),
		  where_gp, NULL, NULL, NULL, (SPART *)t_box_num(1), (SPART *)t_box_num(0) );
		spar_env_pop (sparp_arg);
		(yyval.tree) = spar_gp_finalize_with_subquery (sparp_arg, (yyvsp[(4) - (4)].trees), subselect_top);
		sparp_arg->sparp_allow_aggregates_in_expn >>= 1; }
    break;

  case 169:
#line 1044 "./sparql_p.y"
    {
		sparp_arg->sparp_query_uses_sinvs++;
		(yyval.token_type) = sparp_arg->sparp_permitted_syntax;
		sparp_arg->sparp_permitted_syntax = SSG_SD_GLOBALS; /*!!! TBD config */
		}
    break;

  case 170:
#line 1049 "./sparql_p.y"
    {
		(yyval.box) = t_alloc (sizeof (sparp_sources_t));
		memcpy ((yyval.box), &(sparp_arg->sparp_env->spare_src), sizeof (sparp_sources_t));
		memset (&(sparp_arg->sparp_env->spare_src), 0, sizeof (sparp_sources_t)); }
    break;

  case 171:
#line 1053 "./sparql_p.y"
    {
		SPART **sources;
		caddr_t sinv_storage_uri = uname_virtrdf_ns_uri_DefaultServiceStorage /*!!! TBD config */;
		SPART *sinv;
		if ((NULL == sparp_arg->sparp_env->spare_default_graphs) && (NULL == sparp_arg->sparp_env->spare_named_graphs))
		  memcpy (&(sparp_arg->sparp_env->spare_src), (yyvsp[(5) - (7)].box), sizeof (sparp_sources_t));
		sources = spar_make_sources_like_top (sparp_arg);
		sinv = spar_make_service_inv (sparp_arg, (yyvsp[(2) - (7)].box), (yyvsp[(4) - (7)].backstack), sparp_arg->sparp_permitted_syntax, sources, sinv_storage_uri);
		t_set_push (&(sparp_env()->spare_context_sinvs), sinv);
		spar_gp_init (sparp_arg, SERVICE_L); }
    break;

  case 172:
#line 1063 "./sparql_p.y"
    {
		sparp_arg->sparp_permitted_syntax = (yyvsp[(3) - (9)].token_type);
		(yyvsp[(9) - (9)].tree)->_.gp.options = (SPART **)t_list_concat_tail (
		  (caddr_t)((yyvsp[(9) - (9)].tree)->_.gp.options), 2,
		  SPAR_SERVICE_INV, t_set_pop (&(sparp_env()->spare_context_sinvs)) );
		memcpy (&(sparp_arg->sparp_env->spare_src), (yyvsp[(5) - (9)].box), sizeof (sparp_sources_t));
		(yyval.tree) = (yyvsp[(9) - (9)].tree); }
    break;

  case 173:
#line 1072 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (SPART *)((ptrlong)IN_L)); t_set_push (&((yyval.backstack)), (SPART *)((ptrlong)_STAR)); }
    break;

  case 174:
#line 1073 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(2) - (3)].backstack); }
    break;

  case 175:
#line 1077 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].trees)[0]); t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].trees)[1]); }
    break;

  case 176:
#line 1078 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (2)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(2) - (2)].trees)[0]); t_set_push (&((yyval.backstack)), (yyvsp[(2) - (2)].trees)[1]); }
    break;

  case 177:
#line 1082 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (yyvsp[(1) - (2)].box), (yyvsp[(2) - (2)].backstack)); }
    break;

  case 178:
#line 1083 "./sparql_p.y"
    {
		caddr_t defname = (yyvsp[(2) - (3)].box);
		dk_set_t defvals = (yyvsp[(3) - (3)].backstack);
		if (!strcmp (defname, "lang:dialect"))
		  {
		    if ((NULL == defvals) || (NULL != defvals->next) || (SPARQL_INTEGER != ((ptrlong *)(defvals->data))[0]))
		      sparyyerror ("define lang:dialect needs an integer");
		    sparp_arg->sparp_permitted_syntax = unbox (((caddr_t *)(defvals->data))[1]) | SSG_SD_GLOBALS;
		  }
		(yyval.trees) = (SPART **)t_list (2, (SPART *)((ptrlong)DEFINE_L), t_list (2, defname, t_revlist_to_array(defvals))); }
    break;

  case 179:
#line 1093 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (SPART *)((ptrlong)IN_L), (yyvsp[(2) - (2)].backstack)); }
    break;

  case 180:
#line 1094 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (SPART *)((ptrlong)IN_L), (SPART *)((ptrlong)_STAR)); }
    break;

  case 181:
#line 1098 "./sparql_p.y"
    { spar_gp_init (sparp_arg, CONSTRUCT_L); }
    break;

  case 182:
#line 1099 "./sparql_p.y"
    { (yyval.tree) = spar_gp_finalize (sparp_arg, NULL); }
    break;

  case 183:
#line 1103 "./sparql_p.y"
    { }
    break;

  case 184:
#line 1104 "./sparql_p.y"
    { }
    break;

  case 185:
#line 1105 "./sparql_p.y"
    { }
    break;

  case 186:
#line 1109 "./sparql_p.y"
    { }
    break;

  case 187:
#line 1110 "./sparql_p.y"
    { }
    break;

  case 188:
#line 1114 "./sparql_p.y"
    { }
    break;

  case 189:
#line 1115 "./sparql_p.y"
    { }
    break;

  case 190:
#line 1119 "./sparql_p.y"
    { }
    break;

  case 191:
#line 1120 "./sparql_p.y"
    { }
    break;

  case 192:
#line 1124 "./sparql_p.y"
    { t_set_push (&(sparp_env()->spare_context_subjects), (yyvsp[(1) - (1)].tree)); }
    break;

  case 193:
#line 1125 "./sparql_p.y"
    { t_set_pop (&(sparp_env()->spare_context_subjects)); (yyval.nothing) = (yyvsp[(3) - (3)].nothing); }
    break;

  case 194:
#line 1126 "./sparql_p.y"
    { t_set_push (&(sparp_env()->spare_context_subjects), (yyvsp[(1) - (1)].tree)); }
    break;

  case 195:
#line 1127 "./sparql_p.y"
    { t_set_pop (&(sparp_env()->spare_context_subjects)); }
    break;

  case 196:
#line 1131 "./sparql_p.y"
    { }
    break;

  case 197:
#line 1132 "./sparql_p.y"
    { }
    break;

  case 198:
#line 1133 "./sparql_p.y"
    { }
    break;

  case 199:
#line 1134 "./sparql_p.y"
    { sparyyerror ("Dot immediately after semicolon is permitted in pure SPARQL but not in SPARQL-BI"); }
    break;

  case 200:
#line 1138 "./sparql_p.y"
    { t_set_push (&(sparp_env()->spare_context_predicates), (yyvsp[(1) - (1)].tree)); }
    break;

  case 201:
#line 1139 "./sparql_p.y"
    { t_set_pop (&(sparp_env()->spare_context_predicates)); }
    break;

  case 202:
#line 1141 "./sparql_p.y"
    { t_set_push (&(sparp_env()->spare_context_predicates), (yyvsp[(3) - (3)].tree)); }
    break;

  case 203:
#line 1142 "./sparql_p.y"
    { t_set_pop (&(sparp_env()->spare_context_predicates)); }
    break;

  case 204:
#line 1143 "./sparql_p.y"
    { sparyyerror ("Dot immediately after semicolon is permitted in pure SPARQL but not in SPARQL-BI"); }
    break;

  case 205:
#line 1144 "./sparql_p.y"
    { sparyyerror ("Predicate expected after semicolon"); }
    break;

  case 206:
#line 1145 "./sparql_p.y"
    { sparyyerror ("Predicate expected"); }
    break;

  case 207:
#line 1149 "./sparql_p.y"
    { }
    break;

  case 208:
#line 1150 "./sparql_p.y"
    { }
    break;

  case 209:
#line 1151 "./sparql_p.y"
    { sparyyerror ("Semicolon immediately after colon is permitted in pure SPARQL but not in SPARQL-BI"); }
    break;

  case 210:
#line 1152 "./sparql_p.y"
    { sparyyerror ("Dot immediately after colon is permitted in pure SPARQL but not in SPARQL-BI"); }
    break;

  case 211:
#line 1153 "./sparql_p.y"
    { sparyyerror ("Object expected after comma"); }
    break;

  case 212:
#line 1154 "./sparql_p.y"
    { sparyyerror ("Object expected"); }
    break;

  case 213:
#line 1158 "./sparql_p.y"
    {
		spar_gp_add_triple_or_special_filter (sparp_arg, NULL, NULL, NULL, (yyvsp[(1) - (2)].tree), NULL, (yyvsp[(2) - (2)].trees), 0x0); }
    break;

  case 214:
#line 1163 "./sparql_p.y"
    { (yyval.trees) = NULL; }
    break;

  case 215:
#line 1164 "./sparql_p.y"
    {
		if (CONSTRUCT_L == SPARP_ENV_CONTEXT_GP_SUBTYPE(sparp_arg))
		  sparyyerror ("Triple options are not allowed in contructor template");
		SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_OPTION, "OPTION () triple matching configuration"); }
    break;

  case 216:
#line 1168 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_revlist_to_array ((yyvsp[(4) - (5)].backstack)); }
    break;

  case 217:
#line 1172 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), ((SPART **)((yyvsp[(1) - (1)].trees)))[0]); t_set_push (&((yyval.backstack)), ((SPART **)((yyvsp[(1) - (1)].trees)))[1]); }
    break;

  case 218:
#line 1173 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (3)].backstack);  t_set_push (&((yyval.backstack)), ((SPART **)((yyvsp[(3) - (3)].trees)))[0]); t_set_push (&((yyval.backstack)), ((SPART **)((yyvsp[(3) - (3)].trees)))[1]); }
    break;

  case 219:
#line 1177 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)IFP_L, (ptrlong)1); }
    break;

  case 220:
#line 1178 "./sparql_p.y"
    {
		if (strcasecmp ((yyvsp[(2) - (2)].box), "none"))
		  (yyval.trees) = (SPART **)t_list (2, (ptrlong)INFERENCE_L, (yyvsp[(2) - (2)].box));
		else
		  (yyval.trees) = (SPART **)t_list (2, (ptrlong)INFERENCE_L, (ptrlong)1); }
    break;

  case 221:
#line 1183 "./sparql_p.y"
    {
		  (yyval.trees) = (SPART **)t_list (2, (ptrlong)INFERENCE_L, sparp_expand_qname_prefix (sparp_arg, (yyvsp[(2) - (2)].box))); }
    break;

  case 222:
#line 1185 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)INFERENCE_L, sparp_expand_q_iri_ref (sparp_arg, (yyvsp[(2) - (2)].box))); }
    break;

  case 223:
#line 1186 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)INFERENCE_L, (yyvsp[(2) - (2)].box)); }
    break;

  case 224:
#line 1187 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)OFFBAND_L, (yyvsp[(2) - (2)].tree)); }
    break;

  case 225:
#line 1188 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)SCORE_L, (yyvsp[(2) - (2)].tree)); }
    break;

  case 226:
#line 1189 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)SCORE_LIMIT_L, (yyvsp[(2) - (2)].tree)); }
    break;

  case 227:
#line 1190 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)TABLE_OPTION_L, (yyvsp[(2) - (2)].box)); }
    break;

  case 228:
#line 1191 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)T_CYCLES_ONLY_L, (ptrlong)1); }
    break;

  case 229:
#line 1192 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)T_DIRECTION_L, (yyvsp[(2) - (2)].box)); }
    break;

  case 230:
#line 1193 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)T_DISTINCT_L, (ptrlong)1); }
    break;

  case 231:
#line 1194 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)T_END_FLAG_L, (yyvsp[(2) - (2)].box)); }
    break;

  case 232:
#line 1195 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)T_EXISTS_L, (ptrlong)1); }
    break;

  case 233:
#line 1196 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)T_FINAL_AS_L, (yyvsp[(2) - (2)].tree)); }
    break;

  case 234:
#line 1197 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)T_IN_L, spartlist (sparp_arg, 2, SPAR_LIST, t_revlist_to_array ((yyvsp[(3) - (4)].backstack)))); }
    break;

  case 235:
#line 1198 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)T_MIN_L, (yyvsp[(2) - (2)].tree)); }
    break;

  case 236:
#line 1199 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)T_MAX_L, (yyvsp[(2) - (2)].tree)); }
    break;

  case 237:
#line 1200 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)T_NO_CYCLES_L, (ptrlong)1); }
    break;

  case 238:
#line 1201 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)T_NO_ORDER_L, (ptrlong)1); }
    break;

  case 239:
#line 1202 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)T_OUT_L, spartlist (sparp_arg, 2, SPAR_LIST, t_revlist_to_array ((yyvsp[(3) - (4)].backstack)))); }
    break;

  case 240:
#line 1203 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)T_SHORTEST_ONLY_L, (ptrlong)1); }
    break;

  case 241:
#line 1204 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)T_STEP_L, spartlist (sparp_arg, 4, SPAR_ALIAS, (yyvsp[(3) - (6)].tree), (yyvsp[(6) - (6)].tree)->_.var.vname, SSG_VALMODE_AUTO)); }
    break;

  case 242:
#line 1205 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)T_STEP_L, spartlist (sparp_arg, 4, SPAR_ALIAS, (yyvsp[(3) - (6)].box), (yyvsp[(6) - (6)].tree)->_.var.vname, SSG_VALMODE_AUTO)); }
    break;

  case 243:
#line 1206 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)TRANSITIVE_L, (ptrlong)1); }
    break;

  case 244:
#line 1207 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (yyvsp[(1) - (4)].token_type), spartlist (sparp_arg, 2, SPAR_LIST, t_revlist_to_array ((yyvsp[(3) - (4)].backstack)))); }
    break;

  case 245:
#line 1208 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (yyvsp[(1) - (1)].token_type), (ptrlong)1); }
    break;

  case 246:
#line 1212 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 247:
#line 1213 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (3)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].tree)); }
    break;

  case 248:
#line 1217 "./sparql_p.y"
    { (yyval.token_type) = SAME_AS_L; }
    break;

  case 249:
#line 1218 "./sparql_p.y"
    { (yyval.token_type) = SAME_AS_O_L; }
    break;

  case 250:
#line 1219 "./sparql_p.y"
    { (yyval.token_type) = SAME_AS_P_L; }
    break;

  case 251:
#line 1220 "./sparql_p.y"
    { (yyval.token_type) = SAME_AS_S_L; }
    break;

  case 252:
#line 1221 "./sparql_p.y"
    { (yyval.token_type) = SAME_AS_S_O_L; }
    break;

  case 254:
#line 1226 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 2, SPAR_QNAME, uname_rdf_ns_uri_type); }
    break;

  case 255:
#line 1227 "./sparql_p.y"
    { sparyyerror ("Predicate expected (i.e., variable or IRI ref or a backquoted expn or 'a' keyword)"); }
    break;

  case 256:
#line 1231 "./sparql_p.y"
    {	/* [35]	BlankNodePropertyList	 ::=  '[' PropertyListNotEmpty ']'	*/
		SPART *bn = spar_make_blank_node (sparp_arg, spar_mkid (sparp_arg, "_:lsqbra"), 1);
		t_set_push (&(sparp_env()->spare_context_subjects), bn); }
    break;

  case 257:
#line 1234 "./sparql_p.y"
    {
		(yyval.tree) = t_set_pop (&(sparp_env()->spare_context_subjects)); }
    break;

  case 258:
#line 1236 "./sparql_p.y"
    {	/* [36]	Collection	 ::=  '(' GraphNode* ')'	*/
		SPART *bn = spar_make_blank_node (sparp_arg, spar_mkid (sparp_arg, "_:topcons"), 1);
		t_set_push (&(sparp_env()->spare_context_subjects), bn);
		t_set_push (&(sparp_env()->spare_context_subjects), bn); }
    break;

  case 259:
#line 1240 "./sparql_p.y"
    {
		spar_gp_add_triple_or_special_filter (sparp_arg,
		  NULL, NULL,
		  spartlist (sparp_arg, 2, SPAR_QNAME, uname_rdf_ns_uri_rest),
		  spartlist (sparp_arg, 2, SPAR_QNAME, uname_rdf_ns_uri_nil),
		  NULL, NULL, 0x0 );
		t_set_pop (&(sparp_env()->spare_context_subjects));
		(yyval.tree) = t_set_pop (&(sparp_env()->spare_context_subjects)); }
    break;

  case 260:
#line 1248 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 2, SPAR_QNAME, uname_rdf_ns_uri_nil); }
    break;

  case 261:
#line 1252 "./sparql_p.y"
    {}
    break;

  case 262:
#line 1253 "./sparql_p.y"
    {}
    break;

  case 263:
#line 1257 "./sparql_p.y"
    {
		spar_gp_add_triple_or_special_filter (sparp_arg, NULL, NULL,
		  spartlist (sparp_arg, 2, SPAR_QNAME, uname_rdf_ns_uri_first),
		  (yyvsp[(1) - (1)].tree), NULL, NULL, 0x0 ); }
    break;

  case 264:
#line 1261 "./sparql_p.y"
    {
		SPART *bn = spar_make_blank_node (sparp_arg, spar_mkid (sparp_arg, "_:cons"), 1);
		spar_gp_add_triple_or_special_filter (sparp_arg,
		  NULL, NULL,
		  spartlist (sparp_arg, 2, SPAR_QNAME, uname_rdf_ns_uri_rest),
		  bn, NULL, NULL, 0x0 );
		sparp_env()->spare_context_subjects->data = bn;
		spar_gp_add_triple_or_special_filter (sparp_arg, NULL, NULL,
		  spartlist (sparp_arg, 2, SPAR_QNAME, uname_rdf_ns_uri_first),
		  (yyvsp[(2) - (2)].tree), NULL, NULL, 0x0 ); }
    break;

  case 269:
#line 1284 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 270:
#line 1285 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (2)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(2) - (2)].tree)); }
    break;

  case 274:
#line 1292 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(2) - (3)].tree); }
    break;

  case 282:
#line 1309 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (3)].tree)); t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].tree)); }
    break;

  case 283:
#line 1310 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (3)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].tree)); }
    break;

  case 284:
#line 1314 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 285:
#line 1315 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (2)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(2) - (2)].tree)); }
    break;

  case 286:
#line 1319 "./sparql_p.y"
    { (yyval.tree) = spar_make_funcall (sparp_arg, 1, (yyvsp[(1) - (3)].box), (SPART **)t_list (1, (yyvsp[(2) - (3)].tree))); }
    break;

  case 287:
#line 1320 "./sparql_p.y"
    { (yyval.tree) = spar_make_funcall (sparp_arg, 1, (yyvsp[(1) - (3)].box), (SPART **)t_list (1, (ptrlong)1)); }
    break;

  case 288:
#line 1321 "./sparql_p.y"
    { (yyval.tree) = spar_make_funcall (sparp_arg, DISTINCT_L, (yyvsp[(1) - (4)].box), (SPART **)t_list (1, (yyvsp[(3) - (4)].tree))); }
    break;

  case 289:
#line 1325 "./sparql_p.y"
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_BI, "aggregate function call"); (yyval.box) = (yyvsp[(1) - (1)].box); }
    break;

  case 290:
#line 1329 "./sparql_p.y"
    { (yyval.box) = t_box_dv_uname_string ("SPECIAL::bif:COUNT"); }
    break;

  case 291:
#line 1330 "./sparql_p.y"
    { (yyval.box) = t_box_dv_uname_string ("SPECIAL::bif:AVG"); }
    break;

  case 292:
#line 1331 "./sparql_p.y"
    { (yyval.box) = t_box_dv_uname_string ("SPECIAL::bif:MIN"); }
    break;

  case 293:
#line 1332 "./sparql_p.y"
    { (yyval.box) = t_box_dv_uname_string ("SPECIAL::bif:MAX"); }
    break;

  case 294:
#line 1333 "./sparql_p.y"
    { (yyval.box) = t_box_dv_uname_string ("SPECIAL::bif:SUM"); }
    break;

  case 295:
#line 1337 "./sparql_p.y"
    { (yyval.tree) = spar_make_param_or_variable (sparp_arg, (yyvsp[(1) - (1)].box)); }
    break;

  case 296:
#line 1338 "./sparql_p.y"
    { (yyval.tree) = spar_make_param_or_variable (sparp_arg, (yyvsp[(1) - (1)].box)); }
    break;

  case 297:
#line 1339 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 298:
#line 1340 "./sparql_p.y"
    { (yyval.tree) = spar_add_propvariable (sparp_arg, (yyvsp[(1) - (2)].tree), (ptrlong)((yyvsp[(2) - (2)].trees)[0]), (yyvsp[(2) - (2)].trees)[1], (ptrlong)((yyvsp[(2) - (2)].trees)[2]), (caddr_t)((yyvsp[(2) - (2)].trees)[3]) ); }
    break;

  case 299:
#line 1344 "./sparql_p.y"
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_GLOBALS, "global variable"); (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 300:
#line 1349 "./sparql_p.y"
    { (yyval.tree) = spar_make_variable (sparp_arg, (yyvsp[(1) - (1)].box)); }
    break;

  case 301:
#line 1350 "./sparql_p.y"
    { (yyval.tree) = spar_make_variable (sparp_arg, (yyvsp[(1) - (1)].box)); }
    break;

  case 302:
#line 1351 "./sparql_p.y"
    { (yyval.tree) = spar_make_variable (sparp_arg, (yyvsp[(1) - (1)].box)); }
    break;

  case 303:
#line 1352 "./sparql_p.y"
    { (yyval.tree) = spar_make_variable (sparp_arg, (yyvsp[(1) - (1)].box)); }
    break;

  case 304:
#line 1357 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 305:
#line 1358 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 306:
#line 1359 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 307:
#line 1360 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 308:
#line 1361 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); spar_change_sign (&((yyvsp[(2) - (2)].tree)->_.lit.val)); }
    break;

  case 309:
#line 1362 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 310:
#line 1363 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 311:
#line 1364 "./sparql_p.y"
    { (yyval.tree) = (SPART *)t_box_dv_uname_string ("http://www.w3.org/1999/02/22-rdf-syntax-ns#nil"); }
    break;

  case 313:
#line 1369 "./sparql_p.y"
    {
		SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_BI, "backquoted expression");
		if (2 & sparp_arg->sparp_in_precode_expn)
		  spar_error (sparp_arg, "Backquoted expressions are not allowed in constant clauses"); }
    break;

  case 314:
#line 1373 "./sparql_p.y"
    {
		  dk_set_t gp_st = sparp_env()->spare_context_gp_subtypes;
                  if ((NULL == gp_st) || (CONSTRUCT_L == (ptrlong)(gp_st->data)))
                    (yyval.tree) = (yyvsp[(3) - (4)].tree); /* redundant backquotes in retlist or backquotes to bypass syntax limitation in CONSTRUCT gp */
                  else
		    {
		      SPART *bn = spar_make_blank_node (sparp_arg, spar_mkid (sparp_arg, "_:calc"), 1);
		      SPART *eq;
		      SPAR_BIN_OP (eq, BOP_EQ, t_full_box_copy_tree ((caddr_t)bn), (yyvsp[(3) - (4)].tree));
                      spar_gp_add_filter (sparp_arg, eq);
		      (yyval.tree) = bn;
                    }
		}
    break;

  case 315:
#line 1389 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 4, SPAR_ALIAS, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].box), SSG_VALMODE_AUTO); }
    break;

  case 316:
#line 1390 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 4, SPAR_ALIAS, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].box), SSG_VALMODE_AUTO); }
    break;

  case 317:
#line 1391 "./sparql_p.y"
    { /* [44]	ConditionalOrExpn	 ::=  ConditionalAndExpn ( '||' ConditionalAndExpn )*	*/
		  SPAR_BIN_OP ((yyval.tree), BOP_OR, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 318:
#line 1393 "./sparql_p.y"
    { /* [45]	ConditionalAndExpn	 ::=  ValueLogical ( '&&' ValueLogical )*	*/
					/* [46]	ValueLogical	 ::=  RelationalExpn	*/
		  SPAR_BIN_OP ((yyval.tree), BOP_AND, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 319:
#line 1396 "./sparql_p.y"
    {	/* [47]*	RelationalExpn	 ::=  NumericExpn	*/
					/*... ( ( ('='|'!='|'<'|'>'|'<='|'>='|'LIKE') NumericExpn ) */
					/*...   | ( 'IN' '(' Expns ')' ) )?	*/
		  SPAR_BIN_OP ((yyval.tree), BOP_EQ, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 320:
#line 1400 "./sparql_p.y"
    { SPAR_BIN_OP ((yyval.tree), BOP_NEQ, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 321:
#line 1401 "./sparql_p.y"
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_LIKE, "LIKE operator"); }
    break;

  case 322:
#line 1402 "./sparql_p.y"
    {	/* Virtuoso-specific extension of [47] */
		(yyval.tree) = spartlist (sparp_arg, 3, SPAR_BUILT_IN_CALL, (ptrlong)LIKE_L, t_list (2, (yyvsp[(1) - (4)].tree), (yyvsp[(4) - (4)].tree))); }
    break;

  case 323:
#line 1404 "./sparql_p.y"
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_IN, "IN operator"); }
    break;

  case 324:
#line 1405 "./sparql_p.y"
    {	/* Virtuoso-specific extension of [47] */
		  dk_set_t args = (yyvsp[(5) - (6)].backstack);
                  if (1 == dk_set_length (args))
                    {
		      SPAR_BIN_OP ((yyval.tree), BOP_EQ, (yyvsp[(1) - (6)].tree), args->data);
                    }
                  else
                    {
                      t_set_push (&args, (yyvsp[(1) - (6)].tree));
		      (yyval.tree) = spartlist (sparp_arg, 3, SPAR_BUILT_IN_CALL,  (SPART *) t_box_num(IN_L),
                        t_list_to_array (args) /* NOT t_revlist_to_array (args), note special first element pushed */ );
                    }
		}
    break;

  case 325:
#line 1418 "./sparql_p.y"
    { SPAR_BIN_OP ((yyval.tree), BOP_LT, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 326:
#line 1419 "./sparql_p.y"
    { SPAR_BIN_OP ((yyval.tree), BOP_LT, (yyvsp[(3) - (3)].tree), (yyvsp[(1) - (3)].tree)); }
    break;

  case 327:
#line 1420 "./sparql_p.y"
    { SPAR_BIN_OP ((yyval.tree), BOP_LTE, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 328:
#line 1421 "./sparql_p.y"
    { SPAR_BIN_OP ((yyval.tree), BOP_LTE, (yyvsp[(3) - (3)].tree), (yyvsp[(1) - (3)].tree)); }
    break;

  case 329:
#line 1422 "./sparql_p.y"
    {	/* [49]	AdditiveExpn	 ::=  MultiplicativeExpn ( ('+'|'-') MultiplicativeExpn )*	*/
		if (sparp_arg->sparp_rset_lexdepth_plus_1 == (yyvsp[(2) - (3)].token_type) + 1)
		  sparyyerror ("Ambiguous (unary or binary) plus operator in result list, please add \"(\" and \")\"");
		  SPAR_BIN_OP ((yyval.tree), BOP_PLUS, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 330:
#line 1426 "./sparql_p.y"
    {
		if (sparp_arg->sparp_rset_lexdepth_plus_1 == (yyvsp[(2) - (3)].token_type) + 1)
		  sparyyerror ("Ambiguous (unary or binary) minus operator in result list, please add \"(\" and \")\"");
		SPAR_BIN_OP ((yyval.tree), BOP_MINUS, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 331:
#line 1430 "./sparql_p.y"
    {	/* [50]	MultiplicativeExpn	 ::=  UnaryExpn ( ('*'|'/') UnaryExpn )*	*/
		  SPAR_BIN_OP ((yyval.tree), BOP_TIMES, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 332:
#line 1432 "./sparql_p.y"
    { SPAR_BIN_OP ((yyval.tree), BOP_DIV, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 333:
#line 1433 "./sparql_p.y"
    {		/* [51]*	UnaryExpn	 ::=   ('!'|'NOT'|'+'|'-')? PrimaryExpn */
		SPAR_BIN_OP ((yyval.tree), BOP_NOT, (yyvsp[(2) - (2)].tree), NULL); }
    break;

  case 334:
#line 1435 "./sparql_p.y"
    {
		SPAR_BIN_OP ((yyval.tree), BOP_NOT, (yyvsp[(2) - (2)].tree), NULL); }
    break;

  case 335:
#line 1437 "./sparql_p.y"
    {
		SPAR_BIN_OP ((yyval.tree), BOP_PLUS,
		  spartlist (sparp_arg, 4, SPAR_LIT, (SPART *) t_box_num_nonull(0), uname_xmlschema_ns_uri_hash_integer, NULL), (yyvsp[(2) - (2)].tree)); }
    break;

  case 336:
#line 1440 "./sparql_p.y"
    {
		caddr_t *val_ptr = NULL;
		if (DV_ARRAY_OF_POINTER == DV_TYPE_OF ((yyvsp[(2) - (2)].tree))) {
		    if (SPAR_LIT == (yyvsp[(2) - (2)].tree)->type)
		      val_ptr = &((yyvsp[(2) - (2)].tree)->_.lit.val); }
		else
		  val_ptr = (caddr_t *)((yyvsp[(2) - (2)].tree));
		if (NULL != val_ptr) {
		    dtp_t val_dtp = DV_TYPE_OF (val_ptr[0]);
		    if (DV_LONG_INT == val_dtp)
		      val_ptr[0] = t_box_num_nonull (-unbox (val_ptr[0]));
		    else if (DV_DOUBLE_FLOAT == val_dtp)
		      ((double *)(val_ptr[0]))[0] = -((double *)(val_ptr[0]))[0];
		    else if (DV_NUMERIC == val_dtp)
		      ((struct numeric_s *)(val_ptr[0]))->n_neg = (((struct numeric_s *)(val_ptr[0]))->n_neg ? 0 : 1);
		    else
		      val_ptr = NULL; }
		if (NULL == val_ptr)
		SPAR_BIN_OP ((yyval.tree), BOP_MINUS,
		    spartlist (sparp_arg, 4, SPAR_LIT, (SPART *) t_box_num_nonull(0), uname_xmlschema_ns_uri_hash_integer, NULL),
		  (yyvsp[(2) - (2)].tree) );
		else
		  (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 337:
#line 1463 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(2) - (3)].tree); }
    break;

  case 338:
#line 1466 "./sparql_p.y"
    {
		SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_BI, "scalar ASK subquery");
                spar_gp_init (sparp_arg, SELECT_L);
		spar_env_push (sparp_arg);
		spar_selid_push (sparp_arg);
		t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL);
		sparp_arg->sparp_allow_aggregates_in_expn <<= 1; }
    break;

  case 339:
#line 1475 "./sparql_p.y"
    {
		SPART *subselect_top;
		SPART *where_gp;
		where_gp = spar_gp_finalize (sparp_arg, NULL);
		subselect_top = spar_make_top (sparp_arg, ASK_L, (SPART **)t_list(0), spar_selid_pop (sparp_arg),
		  where_gp, NULL, NULL, NULL, (SPART *)t_box_num(1), (SPART *)t_box_num(0) );
		spar_env_pop (sparp_arg);
		(yyval.tree) = spar_gp_finalize_with_subquery (sparp_arg, (yyvsp[(7) - (7)].trees), subselect_top);
		sparp_arg->sparp_allow_aggregates_in_expn >>= 1; }
    break;

  case 340:
#line 1484 "./sparql_p.y"
    {
		SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_BI, "scalar subquery");
                spar_gp_init (sparp_arg, SELECT_L);
		spar_env_push (sparp_arg);
		spar_selid_push (sparp_arg);
                t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL);
		sparp_arg->sparp_allow_aggregates_in_expn <<= 1;
		sparp_arg->sparp_allow_aggregates_in_expn |= 1; }
    break;

  case 341:
#line 1494 "./sparql_p.y"
    {
		SPART *subselect_top;
		SPART *where_gp;
		SPART *wm = (yyvsp[(7) - (9)].tree);
		caddr_t retselid;
		where_gp = spar_gp_finalize (sparp_arg, NULL);
		retselid = spar_selid_pop (sparp_arg);
		wm->_.wm.where_gp = where_gp;
		subselect_top = spar_make_top_or_special_case_from_wm (sparp_arg,
		  (yyvsp[(2) - (9)].token_type), (yyvsp[(4) - (9)].trees), retselid, wm );
		if (SPAR_REQ_TOP == subselect_top->type)
		  sparp_expand_top_retvals (sparp_arg, subselect_top, 1 /* safely_copy_all_vars */);
		spar_env_pop (sparp_arg);
		(yyval.tree) = spar_gp_finalize_with_subquery (sparp_arg, (yyvsp[(9) - (9)].trees), subselect_top);
		sparp_arg->sparp_allow_aggregates_in_expn >>= 1; }
    break;

  case 342:
#line 1509 "./sparql_p.y"
    {
		(yyval.tree) = (yyvsp[(1) - (1)].tree);
		if (sparp_arg->sparp_in_precode_expn)
		  sparyyerror ("Aggregates are not allowed in 'precode' expressions that should be calculated before the result-set of the query");
		if (!(sparp_arg->sparp_allow_aggregates_in_expn & 1))
		  sparyyerror ("Aggregates are allowed only in result sets"); }
    break;

  case 344:
#line 1516 "./sparql_p.y"
    {	/* [55]	IRIrefOrFunction	 ::=  IRIref ArgList? */
                  if (NULL == (yyvsp[(2) - (2)].backstack))
		    (yyval.tree) = (yyvsp[(1) - (2)].tree);
		  else
		    {
		      SPART **args = (SPART **)(((dk_set_t)NIL_L == (yyvsp[(2) - (2)].backstack)) ? NULL : t_revlist_to_array ((yyvsp[(2) - (2)].backstack)));
                      caddr_t fname = (yyvsp[(1) - (2)].tree)->_.lit.val;
                      spar_verify_funcall_security (sparp_arg, fname, args);
		      (yyval.tree) = spar_make_funcall (sparp_arg, 0, fname, args);
		    } }
    break;

  case 345:
#line 1526 "./sparql_p.y"
    { (yyval.tree) = (SPART *)((yyvsp[(1) - (1)].tree)); }
    break;

  case 346:
#line 1527 "./sparql_p.y"
    { (yyval.tree) = (SPART *)((yyvsp[(1) - (1)].tree)); }
    break;

  case 347:
#line 1528 "./sparql_p.y"
    { (yyval.tree) = (SPART *)((yyvsp[(1) - (1)].tree)); }
    break;

  case 350:
#line 1535 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 3, SPAR_BUILT_IN_CALL, (ptrlong)STR_L, t_list (1, (yyvsp[(3) - (4)].tree))); }
    break;

  case 351:
#line 1537 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 3, SPAR_BUILT_IN_CALL, (ptrlong)LANG_L, t_list (1, (yyvsp[(3) - (4)].tree))); }
    break;

  case 352:
#line 1539 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 3, SPAR_BUILT_IN_CALL, (ptrlong)LANGMATCHES_L, t_list (2, (yyvsp[(3) - (6)].tree), (yyvsp[(5) - (6)].tree))); }
    break;

  case 353:
#line 1541 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 3, SPAR_BUILT_IN_CALL, (ptrlong)DATATYPE_L, t_list (1, (yyvsp[(3) - (4)].tree))); }
    break;

  case 354:
#line 1543 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 3, SPAR_BUILT_IN_CALL, (ptrlong)BOUND_L, t_list (1, (yyvsp[(3) - (4)].tree))); }
    break;

  case 355:
#line 1545 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 3, SPAR_BUILT_IN_CALL, (ptrlong)SAMETERM_L, t_list (2, (yyvsp[(3) - (6)].tree), (yyvsp[(5) - (6)].tree))); }
    break;

  case 356:
#line 1547 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 3, SPAR_BUILT_IN_CALL, (ptrlong)isIRI_L, t_list (1, (yyvsp[(3) - (4)].tree))); }
    break;

  case 357:
#line 1549 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 3, SPAR_BUILT_IN_CALL, (ptrlong)isURI_L, t_list (1, (yyvsp[(3) - (4)].tree))); }
    break;

  case 358:
#line 1551 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 3, SPAR_BUILT_IN_CALL, (ptrlong)isBLANK_L, t_list (1, (yyvsp[(3) - (4)].tree))); }
    break;

  case 359:
#line 1553 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 3, SPAR_BUILT_IN_CALL, (ptrlong)isLITERAL_L, t_list (1, (yyvsp[(3) - (4)].tree))); }
    break;

  case 361:
#line 1556 "./sparql_p.y"
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_BI, "IRI (built-in call)"); }
    break;

  case 362:
#line 1558 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 3, SPAR_BUILT_IN_CALL, (ptrlong)IRI_L, t_list (1, (yyvsp[(4) - (5)].tree))); }
    break;

  case 363:
#line 1560 "./sparql_p.y"
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_BI, "isREF (built-in call)"); }
    break;

  case 364:
#line 1562 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 3, SPAR_BUILT_IN_CALL, (ptrlong)isREF_L, t_list (1, (yyvsp[(4) - (5)].tree))); }
    break;

  case 365:
#line 1564 "./sparql_p.y"
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_SPARQL11, "IF (built-in call)");
		(yyval.tree) = spartlist (sparp_arg, 3, SPAR_BUILT_IN_CALL, (ptrlong)IF_L, t_list (3, (yyvsp[(3) - (8)].tree), (yyvsp[(5) - (8)].tree), (yyvsp[(7) - (8)].tree))); }
    break;

  case 366:
#line 1567 "./sparql_p.y"
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_SPARQL11, "COALESCE (built-in call)");
		(yyval.tree) = spartlist (sparp_arg, 3, SPAR_BUILT_IN_CALL, (ptrlong)COALESCE_L, t_revlist_to_array ((yyvsp[(3) - (4)].backstack))); }
    break;

  case 367:
#line 1573 "./sparql_p.y"
    { (yyval.tree) = spar_make_regex_or_like_or_eq (sparp_arg, (yyvsp[(3) - (6)].tree), (yyvsp[(5) - (6)].tree)); }
    break;

  case 368:
#line 1575 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 3, SPAR_BUILT_IN_CALL, (ptrlong)REGEX_L, t_list (3, (yyvsp[(3) - (8)].tree), (yyvsp[(5) - (8)].tree), (yyvsp[(7) - (8)].tree))); }
    break;

  case 369:
#line 1579 "./sparql_p.y"
    {
                  SPART **args = (SPART **)(((dk_set_t)NIL_L == (yyvsp[(2) - (2)].backstack)) ? NULL : t_revlist_to_array ((yyvsp[(2) - (2)].backstack)));
                  caddr_t fname = (yyvsp[(1) - (2)].tree)->_.lit.val;
                  spar_verify_funcall_security (sparp_arg, fname, args);
		  (yyval.tree) = spar_make_funcall (sparp_arg, 0, fname, args); }
    break;

  case 370:
#line 1587 "./sparql_p.y"
    { (yyval.backstack) = NULL; }
    break;

  case 371:
#line 1588 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (1)].backstack); }
    break;

  case 372:
#line 1592 "./sparql_p.y"
    { (yyval.backstack) = (dk_set_t)NIL_L; }
    break;

  case 373:
#line 1593 "./sparql_p.y"
    { (yyval.backstack) = (dk_set_t)NIL_L; }
    break;

  case 374:
#line 1594 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(2) - (3)].backstack); }
    break;

  case 375:
#line 1598 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 376:
#line 1599 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (3)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].tree)); }
    break;

  case 377:
#line 1600 "./sparql_p.y"
    { sparyyerror ("Argument expected after comma"); }
    break;

  case 378:
#line 1601 "./sparql_p.y"
    { sparyyerror ("Comma or ')' expected after function argument"); }
    break;

  case 379:
#line 1605 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 4, SPAR_LIT, (yyvsp[(1) - (1)].box), uname_xmlschema_ns_uri_hash_integer, NULL); }
    break;

  case 380:
#line 1606 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 4, SPAR_LIT, (yyvsp[(1) - (1)].box), uname_xmlschema_ns_uri_hash_decimal, NULL); }
    break;

  case 381:
#line 1607 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 4, SPAR_LIT, (yyvsp[(1) - (1)].box), uname_xmlschema_ns_uri_hash_double, NULL); }
    break;

  case 382:
#line 1611 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 4, SPAR_LIT, (yyvsp[(1) - (1)].box), NULL, NULL); }
    break;

  case 383:
#line 1612 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 4, SPAR_LIT, (yyvsp[(1) - (2)].box), NULL, (yyvsp[(2) - (2)].box)); }
    break;

  case 384:
#line 1613 "./sparql_p.y"
    { (yyval.tree) = spar_make_typed_literal (sparp_arg, (yyvsp[(1) - (3)].box), (yyvsp[(3) - (3)].tree)->_.lit.val, NULL); }
    break;

  case 385:
#line 1617 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 4, SPAR_LIT, (ptrlong)1, uname_xmlschema_ns_uri_hash_boolean, NULL); }
    break;

  case 386:
#line 1618 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 4, SPAR_LIT, (ptrlong)0, uname_xmlschema_ns_uri_hash_boolean, NULL); }
    break;

  case 387:
#line 1622 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 388:
#line 1623 "./sparql_p.y"
    { (yyval.tree) = (SPART *)((ptrlong)_STAR); }
    break;

  case 389:
#line 1624 "./sparql_p.y"
    { (yyval.tree) = (SPART *)((ptrlong)DEFAULT_L); }
    break;

  case 390:
#line 1628 "./sparql_p.y"
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_BI, "\"variable+>property\""); (yyval.token_type) = _PLUS_GT; }
    break;

  case 391:
#line 1629 "./sparql_p.y"
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_BI, "\"variable*>property\""); (yyval.token_type) = _STAR_GT; }
    break;

  case 392:
#line 1633 "./sparql_p.y"
    {
		(yyval.trees) = (SPART **) t_list ( 4, (yyvsp[(1) - (2)].token_type),
		  spartlist (sparp_arg, 2, SPAR_QNAME, sparp_expand_q_iri_ref (sparp_arg, (yyvsp[(2) - (2)].box))),
		  Q_IRI_REF, (yyvsp[(2) - (2)].box)); }
    break;

  case 393:
#line 1637 "./sparql_p.y"
    {
		(yyval.trees) = (SPART **) t_list ( 4, (yyvsp[(1) - (2)].token_type),
		  spartlist (sparp_arg, 2, SPAR_QNAME, sparp_expand_qname_prefix (sparp_arg, (yyvsp[(2) - (2)].box))),
		  QNAME, (yyvsp[(2) - (2)].box)); }
    break;

  case 394:
#line 1641 "./sparql_p.y"
    {
		(yyval.trees) = (SPART **) t_list ( 4, (yyvsp[(1) - (2)].token_type),
		  spartlist (sparp_arg, 2, SPAR_QNAME, sparp_expand_qname_prefix (sparp_arg, (yyvsp[(2) - (2)].box))),
		  QNAME_NS, (yyvsp[(2) - (2)].box)); }
    break;

  case 395:
#line 1645 "./sparql_p.y"
    { sparyyerror ("IRI reference expected after *> or +> operator"); }
    break;

  case 396:
#line 1649 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 2, SPAR_QNAME, sparp_expand_q_iri_ref (sparp_arg, (yyvsp[(1) - (1)].box))); }
    break;

  case 397:
#line 1650 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 398:
#line 1654 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 2, SPAR_QNAME, sparp_expand_qname_prefix (sparp_arg, (yyvsp[(1) - (1)].box))); }
    break;

  case 399:
#line 1655 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 2, SPAR_QNAME/*_NS*/, sparp_expand_qname_prefix (sparp_arg, (yyvsp[(1) - (1)].box))); }
    break;

  case 400:
#line 1659 "./sparql_p.y"
    { (yyval.tree) = spar_make_blank_node (sparp_arg, (yyvsp[(1) - (1)].box), 0); }
    break;

  case 401:
#line 1660 "./sparql_p.y"
    { (yyval.tree) = spar_make_blank_node (sparp_arg, spar_mkid (sparp_arg, "_:anon"), 1); }
    break;

  case 402:
#line 1666 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 403:
#line 1667 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (2)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(2) - (2)].tree)); }
    break;

  case 413:
#line 1688 "./sparql_p.y"
    {
		sparp_arg->sparp_env->spare_top_retval_selid = spar_selid_push (sparp_arg);
		t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL); }
    break;

  case 414:
#line 1691 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, INSERT_L, NULL,
                  spar_selid_pop (sparp_arg), (yyvsp[(5) - (5)].tree) );
                spar_compose_retvals_of_insert_or_delete (sparp_arg, (yyval.tree), (yyvsp[(2) - (5)].tree), (yyvsp[(4) - (5)].tree)); }
    break;

  case 415:
#line 1700 "./sparql_p.y"
    {
		sparp_arg->sparp_env->spare_top_retval_selid = spar_selid_push (sparp_arg);
		t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL);
		sparp_arg->sparp_in_precode_expn = 2; }
    break;

  case 416:
#line 1704 "./sparql_p.y"
    {
                SPART *fake = spar_make_fake_action_solution (sparp_arg);
		sparp_arg->sparp_in_precode_expn = 0;
		(yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, SPARUL_INSERT_DATA, NULL,
                  spar_selid_pop (sparp_arg), fake );
                spar_compose_retvals_of_insert_or_delete (sparp_arg, (yyval.tree), (yyvsp[(3) - (5)].tree), (yyvsp[(5) - (5)].tree)); }
    break;

  case 417:
#line 1715 "./sparql_p.y"
    {
		sparp_arg->sparp_env->spare_top_retval_selid = spar_selid_push (sparp_arg);
		t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL); }
    break;

  case 418:
#line 1718 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, DELETE_L, NULL,
                  spar_selid_pop (sparp_arg), (yyvsp[(5) - (5)].tree) );
                spar_compose_retvals_of_insert_or_delete (sparp_arg, (yyval.tree), (yyvsp[(2) - (5)].tree), (yyvsp[(4) - (5)].tree)); }
    break;

  case 419:
#line 1727 "./sparql_p.y"
    {
		sparp_arg->sparp_env->spare_top_retval_selid = spar_selid_push (sparp_arg);
		t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL);
		sparp_arg->sparp_in_precode_expn = 2; }
    break;

  case 420:
#line 1731 "./sparql_p.y"
    {
                SPART *fake = spar_make_fake_action_solution (sparp_arg);
		sparp_arg->sparp_in_precode_expn = 0;
		(yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, SPARUL_DELETE_DATA, NULL,
                  spar_selid_pop (sparp_arg), fake );
                spar_compose_retvals_of_insert_or_delete (sparp_arg, (yyval.tree), (yyvsp[(3) - (5)].tree), (yyvsp[(5) - (5)].tree)); }
    break;

  case 421:
#line 1743 "./sparql_p.y"
    {
		sparp_arg->sparp_env->spare_top_retval_selid = spar_selid_push (sparp_arg);
		t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL); }
    break;

  case 422:
#line 1747 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, MODIFY_L, NULL,
                  spar_selid_pop (sparp_arg), (yyvsp[(8) - (8)].tree) );
                spar_compose_retvals_of_modify (sparp_arg, (yyval.tree), (yyvsp[(2) - (8)].tree), (yyvsp[(5) - (8)].tree), (yyvsp[(7) - (8)].tree)); }
    break;

  case 423:
#line 1754 "./sparql_p.y"
    { (yyval.tree) = spar_make_sparul_clear (sparp_arg, (yyvsp[(2) - (2)].tree)); }
    break;

  case 424:
#line 1759 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_sparul_load (sparp_arg, (yyvsp[(2) - (2)].tree), (yyvsp[(2) - (2)].tree)); }
    break;

  case 425:
#line 1761 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_sparul_load (sparp_arg, (yyvsp[(5) - (5)].tree), (yyvsp[(2) - (5)].tree) /* yes, $2 after $3 */); }
    break;

  case 426:
#line 1766 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_sparul_create (sparp_arg, (yyvsp[(4) - (4)].tree), (yyvsp[(2) - (4)].token_type) /* yes, $2 after $4 */); }
    break;

  case 427:
#line 1771 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_sparul_drop (sparp_arg, (yyvsp[(4) - (4)].tree), (yyvsp[(2) - (4)].token_type) /* yes, $2 after $4 */); }
    break;

  case 428:
#line 1776 "./sparql_p.y"
    { (yyval.tree) = spar_make_fake_action_solution (sparp_arg); }
    break;

  case 429:
#line 1777 "./sparql_p.y"
    {
		SPART *where_gp = spar_gp_finalize (sparp_arg, NULL);
		(yyval.tree) = (yyvsp[(3) - (4)].tree);
		(yyvsp[(3) - (4)].tree)->_.wm.where_gp = where_gp; }
    break;

  case 430:
#line 1784 "./sparql_p.y"
    { (yyval.tree) = spar_default_sparul_target (sparp_arg, "INTO GRAPH IDENTIFIED BY clause"); }
    break;

  case 431:
#line 1785 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(3) - (3)].tree); }
    break;

  case 432:
#line 1789 "./sparql_p.y"
    { (yyval.tree) = spar_default_sparul_target (sparp_arg, "FROM GRAPH IDENTIFIED BY clause"); }
    break;

  case 433:
#line 1790 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(3) - (3)].tree); }
    break;

  case 434:
#line 1794 "./sparql_p.y"
    { (yyval.tree) = spar_default_sparul_target (sparp_arg, "GRAPH IDENTIFIED BY clause"); }
    break;

  case 435:
#line 1795 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 436:
#line 1799 "./sparql_p.y"
    {}
    break;

  case 437:
#line 1800 "./sparql_p.y"
    {}
    break;

  case 438:
#line 1804 "./sparql_p.y"
    { (yyval.token_type) = 0; }
    break;

  case 439:
#line 1805 "./sparql_p.y"
    { (yyval.token_type) = 1; }
    break;

  case 441:
#line 1812 "./sparql_p.y"
    {
		sparp_env()->spare_qm_default_table = NULL; }
    break;

  case 443:
#line 1818 "./sparql_p.y"
    { t_set_push (&(sparp_env()->spare_acc_qm_sqls), (yyvsp[(1) - (1)].tree)); }
    break;

  case 451:
#line 1836 "./sparql_p.y"
    {
		if (dk_set_get_keyword (sparp_arg->sparp_created_jsos, (yyvsp[(4) - (7)].box), NULL))
		  spar_error (sparp_arg, "The identifier of %s class %.100s is already used in the previous part of the statement",
		    ((IRI_L == (yyvsp[(2) - (7)].token_type)) ? "IRI" : "literal"), (yyvsp[(4) - (7)].box));
		t_set_push (&(sparp_arg->sparp_created_jsos), ((IRI_L == (yyvsp[(2) - (7)].token_type)) ? "IRI class" : "literal class"));
		t_set_push (&(sparp_arg->sparp_created_jsos), (yyvsp[(4) - (7)].box));
		(yyval.tree) = spar_make_qm_sql (sparp_arg,
		  ((IRI_L == (yyvsp[(2) - (7)].token_type)) ? "DB.DBA.RDF_QM_DEFINE_IRI_CLASS_FORMAT" : "DB.DBA.RDF_QM_DEFINE_LITERAL_CLASS_FORMAT"),
		  (SPART **)t_list (3, (yyvsp[(4) - (7)].box), (yyvsp[(5) - (7)].box), (yyvsp[(6) - (7)].tree)), (yyvsp[(7) - (7)].trees) );
                sparp_jso_push_affected (sparp_arg, uname_virtrdf_ns_uri_QuadStorage); }
    break;

  case 452:
#line 1846 "./sparql_p.y"
    {
		if (dk_set_get_keyword (sparp_arg->sparp_created_jsos, (yyvsp[(4) - (7)].box), NULL))
		  spar_error (sparp_arg, "The identifier of %s class %.100s is already used in the previous part of the statement",
		    ((IRI_L == (yyvsp[(2) - (7)].token_type)) ? "IRI" : "literal"), (yyvsp[(4) - (7)].box));
		t_set_push (&(sparp_arg->sparp_created_jsos), ((IRI_L == (yyvsp[(2) - (7)].token_type)) ? "IRI class" : "literal class"));
		t_set_push (&(sparp_arg->sparp_created_jsos), (yyvsp[(4) - (7)].box));
		(yyval.tree) = spar_make_qm_sql (sparp_arg,
		  ((IRI_L == (yyvsp[(2) - (7)].token_type)) ? "DB.DBA.RDF_QM_DEFINE_IRI_CLASS_FUNCTIONS" : "DB.DBA.RDF_QM_DEFINE_LITERAL_CLASS_FUNCTIONS"),
		  (SPART **)t_list (2, (yyvsp[(4) - (7)].box), spar_make_vector_qm_sql (sparp_arg, (SPART **)t_revlist_to_array ((yyvsp[(6) - (7)].backstack)))), (yyvsp[(7) - (7)].trees) );
                sparp_jso_push_affected (sparp_arg, uname_virtrdf_ns_uri_QuadStorage); }
    break;

  case 453:
#line 1859 "./sparql_p.y"
    {
		if (dk_set_get_keyword (sparp_arg->sparp_created_jsos, (yyvsp[(5) - (5)].box), NULL))
		  spar_error (sparp_arg, "The identifier of %s class %.100s is already used in the previous part of the statement",
		    ((IRI_L == (yyvsp[(3) - (5)].token_type)) ? "IRI" : "literal"), (yyvsp[(5) - (5)].box));
		(yyval.tree) = spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_DROP_CLASS",
		  (SPART **)t_list (2, (yyvsp[(5) - (5)].box), (yyvsp[(2) - (5)].token_type) /* yes, $2 after $5 */), NULL );
                sparp_jso_push_deleted (sparp_arg, uname_virtrdf_ns_uri_QuadMapFormat , (yyvsp[(5) - (5)].box));
                sparp_jso_push_affected (sparp_arg, uname_virtrdf_ns_uri_QuadStorage); }
    break;

  case 454:
#line 1870 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_DEFINE_SUBCLASS",
		  (SPART **)t_list (2, (yyvsp[(4) - (7)].box), (yyvsp[(7) - (7)].box)), NULL );
		sparp_jso_push_affected (sparp_arg, uname_virtrdf_ns_uri_QuadStorage); }
    break;

  case 455:
#line 1874 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_DEFINE_SUBCLASS",
		  (SPART **)t_list (2, (yyvsp[(2) - (5)].box), (yyvsp[(5) - (5)].box)), NULL );
		sparp_jso_push_affected (sparp_arg, uname_virtrdf_ns_uri_QuadStorage); }
    break;

  case 456:
#line 1881 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (0); }
    break;

  case 457:
#line 1882 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (0); }
    break;

  case 458:
#line 1883 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_revlist_to_array ((yyvsp[(3) - (4)].backstack)); }
    break;

  case 459:
#line 1887 "./sparql_p.y"
    {
		(yyval.backstack) = NULL;
		t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].trees)[0]);
		t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].trees)[1]); }
    break;

  case 460:
#line 1891 "./sparql_p.y"
    {
		(yyval.backstack) = (yyvsp[(1) - (3)].backstack);
		t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].trees)[0]);
		t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].trees)[1]); }
    break;

  case 461:
#line 1898 "./sparql_p.y"
    {	/*... ( 'DATATYPE' QmIRIrefConst )	*/
		(yyval.trees) = t_list (2, t_box_dv_uname_string ("DATATYPE"), t_box_dv_uname_string ((yyvsp[(2) - (2)].box))); }
    break;

  case 462:
#line 1900 "./sparql_p.y"
    {			/*... | ( 'LANG' STRING )	*/
		(yyval.trees) = t_list (2, t_box_dv_uname_string ("LANG"), t_box_dv_uname_string ((yyvsp[(2) - (2)].box))); }
    break;

  case 463:
#line 1902 "./sparql_p.y"
    {			/*... | ( 'LANG' STRING )	*/
		(yyval.trees) = t_list (2, t_box_dv_uname_string ("LANG"), t_box_dv_uname_string ((yyvsp[(2) - (2)].box))); }
    break;

  case 464:
#line 1904 "./sparql_p.y"
    {			/*... | 'BIJECTION'	*/
		(yyval.trees) = t_list (2, t_box_dv_uname_string ("BIJECTION"), (ptrlong)1); }
    break;

  case 465:
#line 1906 "./sparql_p.y"
    {			/*... | 'DEREF'	*/
		(yyval.trees) = t_list (2, t_box_dv_uname_string ("DEREF"), (ptrlong)1); }
    break;

  case 466:
#line 1908 "./sparql_p.y"
    {			/*... | 'RETURNS' STRING ('UNION' STRING)*	*/
		(yyval.trees) = t_list (2, t_box_dv_uname_string ("RETURNS"),
		    spar_make_vector_qm_sql (sparp_arg, (SPART **)t_revlist_to_array ((yyvsp[(2) - (2)].backstack))) ); }
    break;

  case 467:
#line 1914 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].box)); }
    break;

  case 468:
#line 1915 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (3)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].box)); }
    break;

  case 469:
#line 1919 "./sparql_p.y"
    {
		sparp_env()->spare_storage_name = (yyvsp[(4) - (4)].box);
		if (dk_set_get_keyword (sparp_arg->sparp_created_jsos, (yyvsp[(4) - (4)].box), NULL))
		  spar_error (sparp_arg, "The identifier of Quad Storage %.100s is already used in the previous part of the statement", (yyvsp[(4) - (4)].box));
		t_set_push (&(sparp_arg->sparp_created_jsos), "Quad Storage");
		t_set_push (&(sparp_arg->sparp_created_jsos), (yyvsp[(4) - (4)].box));
		t_set_push (&(sparp_env()->spare_acc_qm_sqls),
		  spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_DEFINE_QUAD_STORAGE",
                    (SPART **)t_list (1, t_box_copy (sparp_env()->spare_storage_name)), NULL ) );
		t_set_push (&(sparp_env()->spare_acc_qm_sqls),
		  spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_BEGIN_ALTER_QUAD_STORAGE",
                    (SPART **)t_list (1, t_box_copy (sparp_env()->spare_storage_name)), NULL ) );
                sparp_jso_push_affected (sparp_arg, (yyvsp[(4) - (4)].box)); }
    break;

  case 470:
#line 1933 "./sparql_p.y"
    {
		spar_qm_push_bookmark (sparp_arg); }
    break;

  case 471:
#line 1935 "./sparql_p.y"
    {
		t_set_push (&(sparp_env()->spare_acc_qm_sqls),
		  spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_END_ALTER_QUAD_STORAGE",
                    (SPART **)t_list (1, t_box_copy (sparp_env()->spare_storage_name)), NULL ) );
		spar_qm_pop_bookmark (sparp_arg);
		sparp_env()->spare_storage_name = NULL; }
    break;

  case 472:
#line 1944 "./sparql_p.y"
    { (yyval.token_type) = IRI_L; }
    break;

  case 473:
#line 1945 "./sparql_p.y"
    { (yyval.token_type) = LITERAL_L; }
    break;

  case 474:
#line 1949 "./sparql_p.y"
    {
		sparp_env()->spare_storage_name = (yyvsp[(4) - (4)].box);
		t_set_push (&(sparp_env()->spare_acc_qm_sqls),
		  spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_BEGIN_ALTER_QUAD_STORAGE",
                    (SPART **)t_list (1, t_box_copy (sparp_env()->spare_storage_name)), NULL ) );
                sparp_jso_push_affected (sparp_arg, (yyvsp[(4) - (4)].box)); }
    break;

  case 475:
#line 1956 "./sparql_p.y"
    {
		spar_qm_push_bookmark (sparp_arg); }
    break;

  case 476:
#line 1958 "./sparql_p.y"
    {
		t_set_push (&(sparp_env()->spare_acc_qm_sqls),
		  spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_END_ALTER_QUAD_STORAGE",
                    (SPART **)t_list (1, t_box_copy (sparp_env()->spare_storage_name)), NULL ) );
		spar_qm_pop_bookmark (sparp_arg);
		sparp_env()->spare_storage_name = NULL; }
    break;

  case 477:
#line 1967 "./sparql_p.y"
    {
		if (dk_set_get_keyword (sparp_arg->sparp_created_jsos, (yyvsp[(5) - (5)].box), NULL))
		  spar_error (sparp_arg, "The identifier of Quad Storage %.100s is already used in the previous part of the statement", (yyvsp[(5) - (5)].box));
		t_set_push (&(sparp_env()->spare_acc_qm_sqls),
		  spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_DROP_QUAD_STORAGE",
                    (SPART **)t_list (2, (yyvsp[(5) - (5)].box), (yyvsp[(2) - (5)].token_type) /* yes, $2 after $5 */), NULL ) );
                sparp_jso_push_deleted (sparp_arg, uname_virtrdf_ns_uri_QuadStorage , (yyvsp[(5) - (5)].box));
                sparp_jso_push_affected (sparp_arg, (yyvsp[(5) - (5)].box)); }
    break;

  case 478:
#line 1978 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_DROP_MAPPING",
                  (SPART **)t_list (1, t_box_copy (sparp_env()->spare_storage_name)),
		  (SPART **)t_list (4, t_box_dv_uname_string ("ID"), (yyvsp[(5) - (5)].box), t_box_dv_uname_string ("SILENT"), (SPART *)t_box_num_nonull ((yyvsp[(2) - (5)].token_type))) );
		if (NULL == sparp_env()->spare_storage_name)
                  sparp_jso_push_affected (sparp_arg, uname_virtrdf_ns_uri_QuadStorage); }
    break;

  case 479:
#line 1984 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_DROP_MAPPING",
                    (SPART **)t_list (1, t_box_copy (sparp_env()->spare_storage_name)),
		    (SPART **)t_list (4, t_box_dv_uname_string ("GRAPH"), (yyvsp[(6) - (6)].box), t_box_dv_uname_string ("SILENT"), (SPART *)t_box_num_nonull ((yyvsp[(2) - (6)].token_type))) );
		if (NULL == sparp_env()->spare_storage_name)
                  sparp_jso_push_affected (sparp_arg, uname_virtrdf_ns_uri_QuadStorage); }
    break;

  case 480:
#line 1993 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_DROP_MAPPING",
                  (SPART **)t_list (1, t_box_copy (sparp_env()->spare_storage_name)),
		  (SPART **)t_list (4, t_box_dv_uname_string ("ID"), (yyvsp[(3) - (3)].box), t_box_dv_uname_string ("SILENT"), (SPART *)t_box_num_nonull ((yyvsp[(2) - (3)].token_type))) );
		if (NULL == sparp_env()->spare_storage_name)
                  sparp_jso_push_affected (sparp_arg, uname_virtrdf_ns_uri_QuadStorage); }
    break;

  case 481:
#line 1999 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_DROP_MAPPING",
                    (SPART **)t_list (1, t_box_copy (sparp_env()->spare_storage_name)),
		    (SPART **)t_list (4, t_box_dv_uname_string ("GRAPH"), (yyvsp[(4) - (4)].box), t_box_dv_uname_string ("SILENT"), (SPART *)t_box_num_nonull ((yyvsp[(2) - (4)].token_type))) );
		if (NULL == sparp_env()->spare_storage_name)
                  sparp_jso_push_affected (sparp_arg, uname_virtrdf_ns_uri_QuadStorage); }
    break;

  case 482:
#line 2008 "./sparql_p.y"
    {}
    break;

  case 483:
#line 2009 "./sparql_p.y"
    {	/*... ( 'FROM' QTABLE 'AS' PLAIN_ID QmTextLiteral* )	*/
		spar_qm_add_aliased_table_or_sqlquery (sparp_arg, (yyvsp[(3) - (5)].box), (yyvsp[(5) - (5)].box));
		sparp_env()->spare_qm_current_table_alias = (yyvsp[(5) - (5)].box); }
    break;

  case 484:
#line 2012 "./sparql_p.y"
    {
		sparp_env()->spare_qm_current_table_alias = NULL; }
    break;

  case 485:
#line 2014 "./sparql_p.y"
    {		/*... | ( 'FROM' PLAIN_ID 'AS' PLAIN_ID QmTextLiteral* )	*/
		spar_qm_add_aliased_alias (sparp_arg, (yyvsp[(3) - (5)].box), (yyvsp[(5) - (5)].box));
		sparp_env()->spare_qm_current_table_alias = (yyvsp[(5) - (5)].box); }
    break;

  case 486:
#line 2017 "./sparql_p.y"
    {		/*... | ( 'FROM' 'SQLQUERY' QmSqlQuery 'AS' PLAIN_ID QmTextLiteral* )	*/
		caddr_t qry = t_box_sprintf (100 + strlen((yyvsp[(4) - (6)].box)), "/*???*/ %s", (yyvsp[(4) - (6)].box));
		spar_qm_add_aliased_table_or_sqlquery (sparp_arg, qry, (yyvsp[(6) - (6)].box));
		sparp_env()->spare_qm_current_table_alias = (yyvsp[(6) - (6)].box); }
    break;

  case 487:
#line 2021 "./sparql_p.y"
    {
		sparp_env()->spare_qm_current_table_alias = NULL; }
    break;

  case 488:
#line 2023 "./sparql_p.y"
    {						/*... | QmCondition	*/
		spar_qm_add_table_filter (sparp_arg, (yyvsp[(2) - (2)].box)); }
    break;

  case 489:
#line 2028 "./sparql_p.y"
    {}
    break;

  case 491:
#line 2033 "./sparql_p.y"
    {
		spar_qm_add_text_literal (sparp_arg,
		  sparp_env()->spare_qm_current_table_alias,
		  (yyvsp[(2) - (6)].box), (yyvsp[(4) - (6)].tree), (yyvsp[(5) - (6)].trees), (yyvsp[(6) - (6)].trees) ); }
    break;

  case 492:
#line 2040 "./sparql_p.y"
    { (yyval.box) = NULL; }
    break;

  case 493:
#line 2041 "./sparql_p.y"
    { (yyval.box) = (yyvsp[(1) - (1)].box); }
    break;

  case 494:
#line 2045 "./sparql_p.y"
    { (yyval.trees) = NULL; }
    break;

  case 495:
#line 2046 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_revlist_to_array ((yyvsp[(3) - (4)].backstack)); }
    break;

  case 496:
#line 2050 "./sparql_p.y"
    { (yyval.trees) = NULL; }
    break;

  case 497:
#line 2051 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_revlist_to_array ((yyvsp[(3) - (4)].backstack)); }
    break;

  case 498:
#line 2055 "./sparql_p.y"
    {
		(yyval.backstack) = NULL;
		t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].trees)[1]);
		t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].trees)[0]); }
    break;

  case 499:
#line 2059 "./sparql_p.y"
    {
		(yyval.backstack) = (yyvsp[(1) - (3)].backstack);
		t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].trees)[1]);
		t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].trees)[0]); }
    break;

  case 500:
#line 2066 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, t_box_dv_uname_string ((yyvsp[(1) - (1)].box)), NULL); }
    break;

  case 501:
#line 2067 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, t_box_dv_uname_string ((yyvsp[(1) - (2)].box)), (yyvsp[(2) - (2)].box)); }
    break;

  case 502:
#line 2071 "./sparql_p.y"
    {}
    break;

  case 503:
#line 2072 "./sparql_p.y"
    {}
    break;

  case 504:
#line 2073 "./sparql_p.y"
    {}
    break;

  case 505:
#line 2077 "./sparql_p.y"
    {}
    break;

  case 506:
#line 2078 "./sparql_p.y"
    {
		spar_qm_clean_locals (sparp_arg);
		sparp_env()->spare_qm_default_table = NULL; }
    break;

  case 507:
#line 2081 "./sparql_p.y"
    {}
    break;

  case 509:
#line 2086 "./sparql_p.y"
    {
		t_set_push (&(sparp_env()->spare_acc_qm_sqls), (yyvsp[(1) - (1)].tree)); }
    break;

  case 510:
#line 2088 "./sparql_p.y"
    {
		t_set_push (&(sparp_env()->spare_acc_qm_sqls), (yyvsp[(1) - (1)].tree)); }
    break;

  case 511:
#line 2093 "./sparql_p.y"
    {}
    break;

  case 512:
#line 2094 "./sparql_p.y"
    {}
    break;

  case 513:
#line 2095 "./sparql_p.y"
    {}
    break;

  case 515:
#line 2100 "./sparql_p.y"
    {
		spar_qm_clean_locals (sparp_arg);
		sparp_env()->spare_qm_default_table = NULL; }
    break;

  case 517:
#line 2108 "./sparql_p.y"
    { spar_qm_push_local (sparp_arg, CREATE_L, (SPART *)((yyvsp[(2) - (3)].box)), 1); }
    break;

  case 518:
#line 2109 "./sparql_p.y"
    {;}
    break;

  case 519:
#line 2111 "./sparql_p.y"
    {
		spar_qm_push_local (sparp_arg, CREATE_L, (SPART *)((yyvsp[(2) - (6)].box)), 1);
		t_set_push (&(sparp_env()->spare_acc_qm_sqls),
		  spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_ATTACH_MAPPING",
                    (SPART **)t_list (2, t_box_copy (sparp_env()->spare_storage_name), (yyvsp[(5) - (6)].box)),
		    (SPART **)t_list_concat ((caddr_t)(yyvsp[(6) - (6)].trees), (caddr_t)t_list (2, t_box_dv_uname_string ("ID"), (yyvsp[(2) - (6)].box))) ) ); }
    break;

  case 520:
#line 2118 "./sparql_p.y"
    {
		spar_qm_push_local (sparp_arg, GRAPH_L, (SPART *)((yyvsp[(3) - (7)].box)), 1);
		t_set_push (&(sparp_env()->spare_acc_qm_sqls),
		  spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_ATTACH_MAPPING",
                    (SPART **)t_list (2, t_box_copy (sparp_env()->spare_storage_name), (yyvsp[(6) - (7)].box)),
		    (SPART **)t_list_concat ((caddr_t)(yyvsp[(7) - (7)].trees), (caddr_t)t_list (2, t_box_dv_uname_string ("GRAPH"), (yyvsp[(3) - (7)].box))) ) ); }
    break;

  case 521:
#line 2125 "./sparql_p.y"
    {
		t_set_push (&(sparp_env()->spare_acc_qm_sqls),
		  spar_qm_make_empty_mapping (sparp_arg, NULL, (yyvsp[(2) - (3)].trees)) );
		spar_qm_push_local (sparp_arg, _LBRA,
		  spar_qm_get_local (sparp_arg, CREATE_L, 1), 1 );
		spar_qm_push_local (sparp_arg, CREATE_L, NULL, 1);
		spar_qm_push_bookmark (sparp_arg); }
    break;

  case 522:
#line 2132 "./sparql_p.y"
    {
		spar_qm_pop_bookmark (sparp_arg); }
    break;

  case 524:
#line 2138 "./sparql_p.y"
    {;}
    break;

  case 525:
#line 2140 "./sparql_p.y"
    {
		t_set_push (&(sparp_env()->spare_acc_qm_sqls),
		  spar_qm_make_empty_mapping (sparp_arg,
	            (caddr_t) spar_qm_get_local (sparp_arg, CREATE_L, 1),
	            (yyvsp[(2) - (3)].trees) ) );
		spar_qm_push_local (sparp_arg, _LBRA,
		  spar_qm_get_local (sparp_arg, CREATE_L, 1), 1 );
		spar_qm_push_local (sparp_arg, CREATE_L, NULL, 1);
		spar_qm_push_bookmark (sparp_arg); }
    break;

  case 526:
#line 2149 "./sparql_p.y"
    {
		spar_qm_pop_bookmark (sparp_arg); }
    break;

  case 527:
#line 2154 "./sparql_p.y"
    {
		spar_qm_push_local (sparp_arg, SUBJECT_L,
		  ((NULL != (yyvsp[(1) - (3)].tree)) ? ((SPART *)((yyvsp[(1) - (3)].tree))) : spar_qm_get_local (sparp_arg, SUBJECT_L, 1)),
		  0);
		spar_qm_push_local (sparp_arg, PREDICATE_L,
		  ((NULL != (yyvsp[(2) - (3)].tree)) ? ((SPART *)((yyvsp[(2) - (3)].tree))) : spar_qm_get_local (sparp_arg, PREDICATE_L, 1)),
		  0);
		t_set_push (&(sparp_env()->spare_acc_qm_sqls),
		  spar_qm_make_real_mapping (sparp_arg,
		    (caddr_t)spar_qm_get_local (sparp_arg, CREATE_L, 0),
		    (yyvsp[(3) - (3)].trees) ) ); }
    break;

  case 528:
#line 2168 "./sparql_p.y"
    { spar_qm_push_local (sparp_arg, SUBJECT_L, (yyvsp[(1) - (1)].tree), 0); }
    break;

  case 529:
#line 2169 "./sparql_p.y"
    {}
    break;

  case 532:
#line 2178 "./sparql_p.y"
    { spar_qm_push_local (sparp_arg, GRAPH_L, (yyvsp[(2) - (2)].tree), 0); }
    break;

  case 533:
#line 2179 "./sparql_p.y"
    { spar_qm_push_local (sparp_arg, SUBJECT_L, (yyvsp[(2) - (2)].tree), 0); }
    break;

  case 534:
#line 2180 "./sparql_p.y"
    { spar_qm_push_local (sparp_arg, PREDICATE_L, (yyvsp[(2) - (2)].tree), 0); }
    break;

  case 535:
#line 2181 "./sparql_p.y"
    { spar_qm_push_local (sparp_arg, OBJECT_L, (yyvsp[(2) - (2)].tree), 0); }
    break;

  case 536:
#line 2182 "./sparql_p.y"
    {
		spar_qm_push_local (sparp_arg, DATATYPE_L, (SPART *)((yyvsp[(4) - (4)].tree)), 0); }
    break;

  case 537:
#line 2184 "./sparql_p.y"
    {
		spar_qm_push_local (sparp_arg, LANG_L, (SPART *)((yyvsp[(6) - (6)].tree)), 0); }
    break;

  case 538:
#line 2190 "./sparql_p.y"
    {}
    break;

  case 539:
#line 2191 "./sparql_p.y"
    {
		spar_qm_pop_key (sparp_arg, PREDICATE_L); }
    break;

  case 541:
#line 2197 "./sparql_p.y"
    {
		spar_qm_push_local (sparp_arg, PREDICATE_L,
		  ((NULL != (yyvsp[(1) - (1)].tree)) ? ((SPART *)((yyvsp[(1) - (1)].tree))) : spar_qm_get_local (sparp_arg, PREDICATE_L, 1)),
		  0 ); }
    break;

  case 542:
#line 2201 "./sparql_p.y"
    {}
    break;

  case 543:
#line 2202 "./sparql_p.y"
    { sparyyerror ("Description of predicate field is expected here"); }
    break;

  case 544:
#line 2206 "./sparql_p.y"
    {
		t_set_push (&(sparp_env()->spare_acc_qm_sqls),
		  spar_qm_make_real_mapping (sparp_arg, (yyvsp[(2) - (2)].box), (yyvsp[(1) - (2)].trees)) ); }
    break;

  case 545:
#line 2209 "./sparql_p.y"
    {
		spar_qm_pop_key (sparp_arg, OBJECT_L); }
    break;

  case 546:
#line 2211 "./sparql_p.y"
    {
		t_set_push (&(sparp_env()->spare_acc_qm_sqls),
		  spar_qm_make_real_mapping (sparp_arg, (yyvsp[(5) - (5)].box), (yyvsp[(4) - (5)].trees)) ); }
    break;

  case 547:
#line 2217 "./sparql_p.y"
    {
		spar_qm_push_local (sparp_arg, OBJECT_L,
		  ((NULL != (yyvsp[(1) - (1)].tree)) ? ((SPART *)((yyvsp[(1) - (1)].tree))) : spar_qm_get_local (sparp_arg, OBJECT_L, 1)),
		  0 ); }
    break;

  case 548:
#line 2221 "./sparql_p.y"
    {
		spar_qm_push_local (sparp_arg, DATATYPE_L, (SPART *)((yyvsp[(3) - (3)].tree)), 0); }
    break;

  case 549:
#line 2223 "./sparql_p.y"
    {
		spar_qm_push_local (sparp_arg, LANG_L, (SPART *)((yyvsp[(5) - (5)].tree)), 0); }
    break;

  case 550:
#line 2225 "./sparql_p.y"
    {
		spar_qm_push_local (sparp_arg, WHERE_L, (SPART *)t_revlist_to_array ((yyvsp[(7) - (7)].backstack)), 0); }
    break;

  case 551:
#line 2227 "./sparql_p.y"
    { (yyval.trees) = (yyvsp[(9) - (9)].trees); }
    break;

  case 552:
#line 2228 "./sparql_p.y"
    { sparyyerror ("Description of object field is expected here"); }
    break;

  case 553:
#line 2232 "./sparql_p.y"
    { (yyval.box) = NULL; }
    break;

  case 554:
#line 2233 "./sparql_p.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 555:
#line 2237 "./sparql_p.y"
    { (yyval.tree) = NULL; }
    break;

  case 556:
#line 2238 "./sparql_p.y"
    { (yyval.tree) = (SPART *)(yyvsp[(2) - (2)].tree)->_.lit.val; }
    break;

  case 557:
#line 2239 "./sparql_p.y"
    { sparyyerror ("Datatype of object field should be either constant IRI or table field, not template IRI (string)"); }
    break;

  case 558:
#line 2240 "./sparql_p.y"
    { (yyval.tree) = spar_make_qm_col_desc (sparp_arg, (yyvsp[(2) - (2)].tree)); }
    break;

  case 559:
#line 2244 "./sparql_p.y"
    { (yyval.tree) = NULL; }
    break;

  case 560:
#line 2245 "./sparql_p.y"
    { (yyval.tree) = (SPART *)(yyvsp[(2) - (2)].box); }
    break;

  case 561:
#line 2246 "./sparql_p.y"
    { (yyval.tree) = spar_make_qm_col_desc (sparp_arg, (yyvsp[(2) - (2)].tree)); }
    break;

  case 562:
#line 2250 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 563:
#line 2251 "./sparql_p.y"
    { (yyval.tree) = NULL; }
    break;

  case 564:
#line 2252 "./sparql_p.y"
    { (yyval.tree) = (SPART *)uname_rdf_ns_uri_type; }
    break;

  case 565:
#line 2256 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 566:
#line 2257 "./sparql_p.y"
    { (yyval.tree) = NULL; }
    break;

  case 567:
#line 2261 "./sparql_p.y"
    { (yyval.tree) = (SPART *)(yyvsp[(1) - (1)].box); }
    break;

  case 568:
#line 2262 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 569:
#line 2263 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 570:
#line 2265 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_qm_value (sparp_arg, (yyvsp[(1) - (4)].box), (SPART **)t_revlist_to_array ((yyvsp[(3) - (4)].backstack))); }
    break;

  case 571:
#line 2267 "./sparql_p.y"
    {			/*... | QmSqlCol	*/
		(yyval.tree) = spar_make_qm_value (sparp_arg, box_dv_uname_string ("literal"), (SPART **)t_list (1, (yyvsp[(1) - (1)].tree))); }
    break;

  case 572:
#line 2272 "./sparql_p.y"
    { (yyval.backstack) = NULL; }
    break;

  case 573:
#line 2273 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (1)].backstack); }
    break;

  case 574:
#line 2277 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].box)); }
    break;

  case 575:
#line 2278 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (2)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(2) - (2)].box)); }
    break;

  case 576:
#line 2282 "./sparql_p.y"
    { (yyval.box) = (yyvsp[(3) - (3)].box); }
    break;

  case 577:
#line 2283 "./sparql_p.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 578:
#line 2287 "./sparql_p.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 579:
#line 2288 "./sparql_p.y"
    { (yyval.box) = (yyvsp[(1) - (1)].box); }
    break;

  case 580:
#line 2292 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (0); }
    break;

  case 581:
#line 2293 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (0); }
    break;

  case 582:
#line 2294 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_revlist_to_array ((yyvsp[(3) - (4)].backstack)); }
    break;

  case 583:
#line 2298 "./sparql_p.y"
    {
		(yyval.backstack) = NULL;
		t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].trees)[0]);
		t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].trees)[1]); }
    break;

  case 584:
#line 2302 "./sparql_p.y"
    {
		(yyval.backstack) = (yyvsp[(1) - (3)].backstack);
		t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].trees)[0]);
		t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].trees)[1]); }
    break;

  case 585:
#line 2309 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, t_box_dv_uname_string ("SOFT_EXCLUSIVE"), (ptrlong)1); }
    break;

  case 586:
#line 2310 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, t_box_dv_uname_string ("EXCLUSIVE"), (ptrlong)1); }
    break;

  case 587:
#line 2311 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, t_box_dv_uname_string ("ORDER"), (yyvsp[(2) - (2)].box)); }
    break;

  case 588:
#line 2312 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, t_box_dv_uname_string ("USING"), (yyvsp[(2) - (2)].box)); }
    break;

  case 589:
#line 2316 "./sparql_p.y"
    { (yyval.backstack) = NULL; }
    break;

  case 590:
#line 2317 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (1)].backstack); }
    break;

  case 591:
#line 2321 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 592:
#line 2322 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (3)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].tree)); }
    break;

  case 593:
#line 2326 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 594:
#line 2327 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (3)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].tree)); }
    break;

  case 595:
#line 2331 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_vector_qm_sql (sparp_arg,
		  (SPART **)t_list (4, (yyvsp[(2) - (5)].box), (yyvsp[(3) - (5)].tree), (yyvsp[(5) - (5)].boxes)[0], (yyvsp[(5) - (5)].boxes)[1]) ); }
    break;

  case 596:
#line 2337 "./sparql_p.y"
    { (yyval.tree) = spar_make_vector_qm_sql (sparp_arg, (SPART **)t_revlist_to_array ((yyvsp[(2) - (3)].backstack))); }
    break;

  case 597:
#line 2341 "./sparql_p.y"
    { (yyval.backstack) = NULL; }
    break;

  case 598:
#line 2342 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (1)].backstack); }
    break;

  case 599:
#line 2346 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 600:
#line 2347 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (3)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].tree)); }
    break;

  case 601:
#line 2351 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_vector_qm_sql (sparp_arg,
		  (SPART **)t_list (4, (yyvsp[(1) - (3)].box), (yyvsp[(2) - (3)].box), (yyvsp[(3) - (3)].boxes)[0], (yyvsp[(3) - (3)].boxes)[1]) ); }
    break;

  case 602:
#line 2357 "./sparql_p.y"
    { (yyval.boxes) = t_list (2, (yyvsp[(1) - (1)].box), (ptrlong)0); }
    break;

  case 603:
#line 2358 "./sparql_p.y"
    { (yyval.boxes) = t_list (2, (yyvsp[(1) - (3)].box), (ptrlong)1); }
    break;

  case 604:
#line 2362 "./sparql_p.y"
    { (yyval.box) = t_box_dv_uname_string ("in"); }
    break;

  case 605:
#line 2363 "./sparql_p.y"
    { (yyval.box) = t_box_dv_uname_string ((yyvsp[(1) - (1)].box)); }
    break;

  case 606:
#line 2367 "./sparql_p.y"
    { (yyval.tree) = sparp_make_qm_sqlcol (sparp_arg, SPARQL_PLAIN_ID, (yyvsp[(1) - (1)].box)); }
    break;

  case 607:
#line 2368 "./sparql_p.y"
    { (yyval.tree) = sparp_make_qm_sqlcol (sparp_arg, SPARQL_SQL_ALIASCOLNAME, (yyvsp[(1) - (1)].box)); }
    break;

  case 608:
#line 2369 "./sparql_p.y"
    { (yyval.tree) = sparp_make_qm_sqlcol (sparp_arg, SPARQL_SQL_QTABLECOLNAME, (yyvsp[(1) - (1)].box)); }
    break;

  case 609:
#line 2373 "./sparql_p.y"
    { (yyval.box) = (yyvsp[(1) - (1)].box); }
    break;

  case 610:
#line 2374 "./sparql_p.y"
    { (yyval.box) = (yyvsp[(1) - (1)].box); }
    break;

  case 611:
#line 2375 "./sparql_p.y"
    { (yyval.box) = (yyvsp[(1) - (1)].box); }
    break;

  case 612:
#line 2380 "./sparql_p.y"
    { (yyval.box) = (yyvsp[(1) - (1)].tree)->_.lit.val; }
    break;

  case 613:
#line 2381 "./sparql_p.y"
    {
		(yyval.box) = spar_make_iri_from_template (sparp_arg, (yyvsp[(3) - (4)].box)); }
    break;

  case 614:
#line 2386 "./sparql_p.y"
    {}
    break;

  case 615:
#line 2387 "./sparql_p.y"
    {}
    break;

  case 616:
#line 2391 "./sparql_p.y"
    {}
    break;

  case 617:
#line 2392 "./sparql_p.y"
    {}
    break;

  case 618:
#line 2396 "./sparql_p.y"
    {}
    break;

  case 619:
#line 2397 "./sparql_p.y"
    {}
    break;


/* Line 1267 of yacc.c.  */
#line 6789 "sparql_p.c"
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
      yyerror (YY_("syntax error"));
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
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
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
		      yytoken, &yylval);
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
		  yystos[yystate], yyvsp);
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
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



