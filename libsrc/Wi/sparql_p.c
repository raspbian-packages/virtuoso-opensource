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
     ADD_L = 286,
     ALL_L = 287,
     ALTER_L = 288,
     AS_L = 289,
     ASC_L = 290,
     ASK_L = 291,
     ATTACH_L = 292,
     AVG_L = 293,
     BASE_L = 294,
     BIJECTION_L = 295,
     BINDINGS_L = 296,
     BOUND_L = 297,
     BY_L = 298,
     CLASS_L = 299,
     CLEAR_L = 300,
     CREATE_L = 301,
     CONSTRUCT_L = 302,
     COPY_L = 303,
     COUNT_L = 304,
     COUNT_LPAR = 305,
     COUNT_DISTINCT_L = 306,
     DATA_L = 307,
     DATATYPE_L = 308,
     DEFAULT_L = 309,
     DEFINE_L = 310,
     DEFMACRO_L = 311,
     DELETE_L = 312,
     DEREF_L = 313,
     DESC_L = 314,
     DESCRIBE_L = 315,
     DETACH_L = 316,
     DISTINCT_L = 317,
     DROP_L = 318,
     EXCLUSIVE_L = 319,
     EXISTS_L = 320,
     false_L = 321,
     FILTER_L = 322,
     FROM_L = 323,
     FUNCTION_L = 324,
     GRAPH_L = 325,
     GROUP_L = 326,
     HAVING_L = 327,
     IDENTIFIED_L = 328,
     IFP_L = 329,
     IN_L = 330,
     INF_L = 331,
     INDEX_L = 332,
     INFERENCE_L = 333,
     INSERT_L = 334,
     INTO_L = 335,
     IRI_L = 336,
     LANG_L = 337,
     LIBRARY_L = 338,
     LIKE_L = 339,
     LIMIT_L = 340,
     LITERAL_L = 341,
     LOCAL_L = 342,
     LOAD_L = 343,
     MACRO_L = 344,
     MAKE_L = 345,
     MAP_L = 346,
     MAX_L = 347,
     MIN_L = 348,
     MINUS_L = 349,
     MODIFY_L = 350,
     MOVE_L = 351,
     NAMED_L = 352,
     NAN_L = 353,
     NIL_L = 354,
     NOT_L = 355,
     NULL_L = 356,
     OBJECT_L = 357,
     OF_L = 358,
     OFFBAND_L = 359,
     OFFSET_L = 360,
     OPTIONAL_L = 361,
     OPTION_L = 362,
     ORDER_L = 363,
     PREDICATE_L = 364,
     PREFIX_L = 365,
     QUAD_L = 366,
     REDUCED_L = 367,
     RETURNS_L = 368,
     SAME_AS_L = 369,
     SAME_AS_O_L = 370,
     SAME_AS_P_L = 371,
     SAME_AS_S_L = 372,
     SAME_AS_S_O_L = 373,
     SCORE_L = 374,
     SCORE_LIMIT_L = 375,
     SELECT_L = 376,
     SERVICE_L = 377,
     SILENT_L = 378,
     SOFT_L = 379,
     SQLQUERY_L = 380,
     STORAGE_L = 381,
     SUBCLASS_L = 382,
     SUBJECT_L = 383,
     SUM_L = 384,
     TABLE_OPTION_L = 385,
     TEXT_L = 386,
     T_CYCLES_ONLY_L = 387,
     T_DIRECTION_L = 388,
     T_DISTINCT_L = 389,
     T_END_FLAG_L = 390,
     T_EXISTS_L = 391,
     T_FINAL_AS_L = 392,
     T_IN_L = 393,
     T_MAX_L = 394,
     T_MIN_L = 395,
     T_OUT_L = 396,
     T_NO_CYCLES_L = 397,
     T_NO_ORDER_L = 398,
     T_SHORTEST_ONLY_L = 399,
     T_STEP_L = 400,
     TO_L = 401,
     TRANSITIVE_L = 402,
     true_L = 403,
     UNBOUND_L = 404,
     UNDEF_L = 405,
     UNION_L = 406,
     USING_L = 407,
     WHERE_L = 408,
     WITH_L = 409,
     XML_L = 410,
     __SPAR_PUNCT_END = 411,
     START_OF_SPARQL_TEXT = 412,
     END_OF_SPARQL_TEXT = 413,
     SPARUL_RUN_SUBTYPE = 414,
     SPARUL_INSERT_DATA = 415,
     SPARUL_DELETE_DATA = 416,
     __SPAR_NONPUNCT_START = 417,
     SPARQL_BIF = 418,
     SPARQL_INTEGER = 419,
     SPARQL_DECIMAL = 420,
     SPARQL_DOUBLE = 421,
     SPARQL_STRING = 422,
     SPARQL_SQLTEXT = 423,
     LANGTAG = 424,
     QNAME = 425,
     QNAME_NS = 426,
     BLANK_NODE_LABEL = 427,
     Q_IRI_REF = 428,
     QD_VARNAME = 429,
     QD_COLON_PARAMNAME = 430,
     QD_COLON_PARAMNUM = 431,
     SPARQL_PLAIN_ID = 432,
     SPARQL_SQL_ALIASCOLNAME = 433,
     SPARQL_SQL_QTABLENAME = 434,
     SPARQL_SQL_QTABLECOLNAME = 435,
     __SPAR_NONPUNCT_END = 436,
     PRECODE_EXPN_PREC = 437,
     _COLON = 438,
     UMINUS = 439,
     UPLUS = 440
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
#define ADD_L 286
#define ALL_L 287
#define ALTER_L 288
#define AS_L 289
#define ASC_L 290
#define ASK_L 291
#define ATTACH_L 292
#define AVG_L 293
#define BASE_L 294
#define BIJECTION_L 295
#define BINDINGS_L 296
#define BOUND_L 297
#define BY_L 298
#define CLASS_L 299
#define CLEAR_L 300
#define CREATE_L 301
#define CONSTRUCT_L 302
#define COPY_L 303
#define COUNT_L 304
#define COUNT_LPAR 305
#define COUNT_DISTINCT_L 306
#define DATA_L 307
#define DATATYPE_L 308
#define DEFAULT_L 309
#define DEFINE_L 310
#define DEFMACRO_L 311
#define DELETE_L 312
#define DEREF_L 313
#define DESC_L 314
#define DESCRIBE_L 315
#define DETACH_L 316
#define DISTINCT_L 317
#define DROP_L 318
#define EXCLUSIVE_L 319
#define EXISTS_L 320
#define false_L 321
#define FILTER_L 322
#define FROM_L 323
#define FUNCTION_L 324
#define GRAPH_L 325
#define GROUP_L 326
#define HAVING_L 327
#define IDENTIFIED_L 328
#define IFP_L 329
#define IN_L 330
#define INF_L 331
#define INDEX_L 332
#define INFERENCE_L 333
#define INSERT_L 334
#define INTO_L 335
#define IRI_L 336
#define LANG_L 337
#define LIBRARY_L 338
#define LIKE_L 339
#define LIMIT_L 340
#define LITERAL_L 341
#define LOCAL_L 342
#define LOAD_L 343
#define MACRO_L 344
#define MAKE_L 345
#define MAP_L 346
#define MAX_L 347
#define MIN_L 348
#define MINUS_L 349
#define MODIFY_L 350
#define MOVE_L 351
#define NAMED_L 352
#define NAN_L 353
#define NIL_L 354
#define NOT_L 355
#define NULL_L 356
#define OBJECT_L 357
#define OF_L 358
#define OFFBAND_L 359
#define OFFSET_L 360
#define OPTIONAL_L 361
#define OPTION_L 362
#define ORDER_L 363
#define PREDICATE_L 364
#define PREFIX_L 365
#define QUAD_L 366
#define REDUCED_L 367
#define RETURNS_L 368
#define SAME_AS_L 369
#define SAME_AS_O_L 370
#define SAME_AS_P_L 371
#define SAME_AS_S_L 372
#define SAME_AS_S_O_L 373
#define SCORE_L 374
#define SCORE_LIMIT_L 375
#define SELECT_L 376
#define SERVICE_L 377
#define SILENT_L 378
#define SOFT_L 379
#define SQLQUERY_L 380
#define STORAGE_L 381
#define SUBCLASS_L 382
#define SUBJECT_L 383
#define SUM_L 384
#define TABLE_OPTION_L 385
#define TEXT_L 386
#define T_CYCLES_ONLY_L 387
#define T_DIRECTION_L 388
#define T_DISTINCT_L 389
#define T_END_FLAG_L 390
#define T_EXISTS_L 391
#define T_FINAL_AS_L 392
#define T_IN_L 393
#define T_MAX_L 394
#define T_MIN_L 395
#define T_OUT_L 396
#define T_NO_CYCLES_L 397
#define T_NO_ORDER_L 398
#define T_SHORTEST_ONLY_L 399
#define T_STEP_L 400
#define TO_L 401
#define TRANSITIVE_L 402
#define true_L 403
#define UNBOUND_L 404
#define UNDEF_L 405
#define UNION_L 406
#define USING_L 407
#define WHERE_L 408
#define WITH_L 409
#define XML_L 410
#define __SPAR_PUNCT_END 411
#define START_OF_SPARQL_TEXT 412
#define END_OF_SPARQL_TEXT 413
#define SPARUL_RUN_SUBTYPE 414
#define SPARUL_INSERT_DATA 415
#define SPARUL_DELETE_DATA 416
#define __SPAR_NONPUNCT_START 417
#define SPARQL_BIF 418
#define SPARQL_INTEGER 419
#define SPARQL_DECIMAL 420
#define SPARQL_DOUBLE 421
#define SPARQL_STRING 422
#define SPARQL_SQLTEXT 423
#define LANGTAG 424
#define QNAME 425
#define QNAME_NS 426
#define BLANK_NODE_LABEL 427
#define Q_IRI_REF 428
#define QD_VARNAME 429
#define QD_COLON_PARAMNAME 430
#define QD_COLON_PARAMNUM 431
#define SPARQL_PLAIN_ID 432
#define SPARQL_SQL_ALIASCOLNAME 433
#define SPARQL_SQL_QTABLENAME 434
#define SPARQL_SQL_QTABLECOLNAME 435
#define __SPAR_NONPUNCT_END 436
#define PRECODE_EXPN_PREC 437
#define _COLON 438
#define UMINUS 439
#define UPLUS 440




/* Copy the first part of user declarations.  */
#line 44 "./sparql_p.y"

#include "libutil.h"
#include "sqlnode.h"
#include "sqlparext.h"
#include "sparql.h"
#include "sparql2sql.h"
#include "xmltree.h"
/*#include "langfunc.h"*/


#ifdef DEBUG
#define sparyyerror(sparp_arg, strg) sparyyerror_impl_1(sparp_arg, NULL, yystate, yyssa, yyssp, (strg))
#else
#define sparyyerror(sparp_arg, strg) sparyyerror_impl(sparp_arg, NULL, (strg))
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
#line 96 "./sparql_p.y"
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
/* Line 193 of yacc.c.  */
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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3621

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  186
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  317
/* YYNRULES -- Number of rules.  */
#define YYNRULES  705
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1157

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   440

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
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    14,    19,    22,    27,    29,    31,
      33,    35,    37,    43,    44,    47,    48,    53,    55,    59,
      61,    63,    65,    67,    69,    70,    73,    76,    77,    80,
      84,    87,    90,    91,    92,   101,   102,   105,   106,   111,
     112,   113,   121,   122,   123,   131,   133,   139,   147,   155,
     156,   161,   166,   167,   169,   171,   175,   179,   181,   184,
     186,   188,   190,   192,   194,   196,   198,   201,   204,   206,
     208,   210,   212,   213,   218,   220,   222,   223,   230,   232,
     235,   238,   241,   242,   245,   247,   249,   251,   252,   259,
     260,   267,   269,   271,   272,   277,   278,   281,   285,   287,
     289,   291,   294,   297,   301,   303,   306,   309,   313,   314,
     315,   320,   322,   325,   328,   333,   334,   337,   338,   340,
     341,   347,   348,   353,   358,   365,   372,   373,   374,   379,
     381,   384,   388,   392,   394,   396,   398,   399,   400,   404,
     405,   406,   411,   413,   416,   421,   426,   429,   431,   433,
     435,   436,   438,   440,   441,   443,   446,   447,   449,   452,
     453,   455,   456,   457,   465,   467,   470,   472,   474,   475,
     477,   479,   482,   486,   488,   491,   493,   495,   497,   499,
     501,   503,   505,   509,   510,   519,   521,   525,   530,   534,
     536,   538,   540,   542,   544,   546,   547,   552,   555,   556,
     557,   558,   567,   568,   569,   576,   577,   581,   582,   588,
     593,   596,   599,   603,   606,   608,   611,   612,   617,   618,
     619,   620,   630,   631,   635,   637,   640,   643,   647,   650,
     653,   654,   659,   660,   662,   664,   667,   669,   673,   676,
     678,   682,   685,   686,   688,   690,   694,   695,   696,   704,
     705,   709,   710,   714,   716,   717,   719,   720,   724,   725,
     731,   735,   739,   741,   743,   747,   751,   755,   759,   761,
     764,   765,   766,   772,   774,   778,   780,   783,   786,   789,
     792,   795,   798,   801,   804,   806,   809,   811,   814,   816,
     819,   824,   827,   830,   832,   834,   839,   841,   848,   855,
     857,   862,   864,   866,   870,   872,   874,   876,   878,   880,
     882,   884,   886,   887,   892,   893,   898,   901,   903,   906,
     908,   911,   913,   915,   917,   919,   921,   924,   926,   928,
     930,   934,   936,   938,   940,   942,   944,   946,   948,   952,
     956,   958,   961,   965,   969,   974,   976,   978,   981,   984,
     987,   990,   992,   994,   997,   999,  1001,  1003,  1005,  1007,
    1009,  1012,  1015,  1017,  1019,  1021,  1023,  1024,  1029,  1033,
    1037,  1041,  1045,  1049,  1050,  1055,  1056,  1063,  1067,  1071,
    1075,  1079,  1083,  1087,  1091,  1095,  1098,  1101,  1104,  1107,
    1111,  1112,  1120,  1121,  1131,  1133,  1135,  1136,  1140,  1142,
    1144,  1146,  1148,  1150,  1152,  1155,  1160,  1165,  1170,  1175,
    1176,  1180,  1181,  1186,  1187,  1189,  1191,  1194,  1198,  1200,
    1204,  1208,  1211,  1212,  1214,  1216,  1219,  1223,  1225,  1229,
    1233,  1236,  1238,  1239,  1244,  1246,  1248,  1250,  1252,  1254,
    1256,  1259,  1263,  1265,  1267,  1269,  1271,  1273,  1275,  1277,
    1280,  1283,  1286,  1289,  1291,  1293,  1295,  1297,  1299,  1302,
    1304,  1307,  1309,  1311,  1313,  1315,  1317,  1319,  1321,  1323,
    1325,  1327,  1329,  1335,  1336,  1342,  1343,  1349,  1350,  1356,
    1357,  1363,  1364,  1373,  1377,  1381,  1388,  1394,  1403,  1408,
    1412,  1413,  1417,  1421,  1425,  1427,  1429,  1431,  1434,  1436,
    1439,  1440,  1443,  1444,  1449,  1451,  1453,  1454,  1456,  1458,
    1460,  1462,  1463,  1469,  1470,  1475,  1476,  1479,  1485,  1487,
    1489,  1491,  1493,  1494,  1499,  1501,  1503,  1505,  1507,  1509,
    1511,  1513,  1515,  1523,  1531,  1537,  1545,  1551,  1552,  1556,
    1561,  1563,  1567,  1570,  1573,  1576,  1578,  1580,  1583,  1585,
    1589,  1590,  1591,  1601,  1603,  1605,  1606,  1607,  1617,  1623,
    1629,  1636,  1640,  1645,  1646,  1647,  1655,  1661,  1662,  1671,
    1674,  1675,  1678,  1685,  1686,  1688,  1689,  1694,  1695,  1700,
    1702,  1706,  1708,  1711,  1713,  1716,  1720,  1722,  1723,  1728,
    1730,  1732,  1734,  1736,  1738,  1743,  1749,  1754,  1756,  1759,
    1763,  1765,  1766,  1771,  1772,  1778,  1785,  1793,  1794,  1800,
    1802,  1804,  1805,  1811,  1815,  1816,  1820,  1822,  1825,  1828,
    1831,  1834,  1835,  1836,  1843,  1845,  1846,  1851,  1852,  1856,
    1858,  1861,  1862,  1868,  1869,  1870,  1871,  1872,  1882,  1884,
    1885,  1888,  1889,  1892,  1898,  1901,  1902,  1905,  1908,  1910,
    1913,  1915,  1917,  1920,  1922,  1924,  1926,  1931,  1933,  1934,
    1936,  1938,  1941,  1945,  1948,  1951,  1953,  1954,  1958,  1963,
    1965,  1969,  1972,  1974,  1977,  1980,  1981,  1983,  1985,  1989,
    1991,  1995,  2001,  2005,  2006,  2008,  2010,  2014,  2018,  2020,
    2024,  2026,  2028,  2030,  2032,  2034,  2036,  2038,  2040,  2042,
    2047,  2048,  2050,  2052,  2056,  2058
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     187,     0,    -1,   157,   189,   198,   188,   158,    -1,   157,
     189,   376,   158,    -1,   157,   189,   403,   158,    -1,   157,
     158,    -1,   157,   189,   411,   502,    -1,     1,    -1,   218,
      -1,   224,    -1,   226,    -1,   229,    -1,   190,   195,   196,
     200,   400,    -1,    -1,   190,   191,    -1,    -1,    55,   192,
     170,   193,    -1,   194,    -1,   193,     9,   194,    -1,   170,
      -1,   173,    -1,   167,    -1,   164,    -1,   343,    -1,    -1,
      39,   173,    -1,    39,     1,    -1,    -1,   196,   197,    -1,
     110,   171,   173,    -1,   110,   171,    -1,   110,     1,    -1,
      -1,    -1,    46,    89,    83,   373,   199,    14,   200,    23,
      -1,    -1,   200,   201,    -1,    -1,    56,   373,   202,   203,
      -1,    -1,    -1,    16,   210,    24,   204,   209,   205,   216,
      -1,    -1,    -1,   208,   206,   209,    14,   207,   275,    23,
      -1,     1,    -1,    14,   213,   214,   215,    23,    -1,    70,
     213,    14,   213,   214,   215,    23,    -1,    54,    70,    14,
     213,   214,   215,    23,    -1,    -1,    87,    16,   212,    24,
      -1,    87,    16,   211,    24,    -1,    -1,   212,    -1,   211,
      -1,   174,     9,   174,    -1,   211,     9,   174,    -1,   174,
      -1,   212,   174,    -1,   174,    -1,   373,    -1,   174,    -1,
      30,    -1,   373,    -1,   174,    -1,   367,    -1,    21,   367,
      -1,    19,   367,    -1,    99,    -1,   368,    -1,   369,    -1,
     373,    -1,    -1,    14,   217,   275,    23,    -1,   348,    -1,
       1,    -1,    -1,   220,   219,   221,   231,   243,   246,    -1,
     121,    -1,   121,   112,    -1,   121,    62,    -1,   121,    51,
      -1,    -1,   222,   223,    -1,    28,    -1,   338,    -1,   337,
      -1,    -1,    47,   225,   300,   231,   243,   246,    -1,    -1,
      60,   227,   228,   231,   242,   246,    -1,    28,    -1,   333,
      -1,    -1,    36,   230,   231,   243,    -1,    -1,   231,   232,
      -1,   233,   373,   236,    -1,   234,    -1,   235,    -1,    68,
      -1,    68,    97,    -1,   100,    68,    -1,   100,    68,    97,
      -1,   152,    -1,   152,    97,    -1,   100,   152,    -1,   100,
     152,    97,    -1,    -1,    -1,   107,    16,   237,   238,    -1,
      24,    -1,   239,    24,    -1,   170,   240,    -1,   239,     9,
     170,   240,    -1,    -1,   241,   348,    -1,    -1,   243,    -1,
      -1,   153,    14,   244,   275,    23,    -1,    -1,    14,   245,
     275,    23,    -1,   247,   251,   253,   262,    -1,   247,   251,
     253,   259,   260,   262,    -1,   247,   251,   253,   261,   258,
     262,    -1,    -1,    -1,    71,    43,   248,   249,    -1,   250,
      -1,   249,   250,    -1,    16,   348,    24,    -1,    17,   348,
      25,    -1,   354,    -1,   355,    -1,   342,    -1,    -1,    -1,
      72,   252,   348,    -1,    -1,    -1,   108,    43,   254,   255,
      -1,   256,    -1,   255,   256,    -1,   257,    16,   348,    24,
      -1,   257,    17,   348,    25,    -1,   257,   164,    -1,   354,
      -1,   355,    -1,   342,    -1,    -1,    35,    -1,    59,    -1,
      -1,   259,    -1,    85,   240,    -1,    -1,   261,    -1,   105,
     240,    -1,    -1,   263,    -1,    -1,    -1,    41,   264,   266,
      14,   265,   268,    23,    -1,   267,    -1,   266,   267,    -1,
     174,    -1,   343,    -1,    -1,   269,    -1,   270,    -1,   269,
     270,    -1,    16,   271,    24,    -1,   272,    -1,   271,   272,
      -1,   373,    -1,   367,    -1,   368,    -1,   369,    -1,   375,
      -1,   149,    -1,   150,    -1,   275,    23,   319,    -1,    -1,
     220,   274,   221,   231,   243,   246,    23,   319,    -1,   305,
      -1,   305,   276,   275,    -1,   305,   276,    10,   275,    -1,
     174,    10,   275,    -1,   279,    -1,   277,    -1,   286,    -1,
     283,    -1,   293,    -1,   289,    -1,    -1,   106,    14,   278,
     273,    -1,   106,     1,    -1,    -1,    -1,    -1,   111,    91,
     280,   370,   281,    14,   282,   273,    -1,    -1,    -1,    70,
     336,   284,    14,   285,   273,    -1,    -1,    14,   287,   273,
      -1,    -1,   286,   151,    14,   288,   273,    -1,    67,    16,
     348,    24,    -1,    67,   354,    -1,    67,   355,    -1,    67,
     290,   291,    -1,    94,   291,    -1,    65,    -1,   100,    65,
      -1,    -1,   292,   231,   243,   319,    -1,    -1,    -1,    -1,
     122,   499,   294,   297,   295,   231,    14,   296,   273,    -1,
      -1,    16,   298,    24,    -1,   299,    -1,   298,   299,    -1,
     170,   193,    -1,    55,   170,   193,    -1,    75,   323,    -1,
      75,    28,    -1,    -1,    14,   301,   302,    23,    -1,    -1,
     304,    -1,   303,    -1,   303,    10,    -1,   310,    -1,   303,
      10,   310,    -1,   304,   310,    -1,   307,    -1,   303,    10,
     307,    -1,   304,   307,    -1,    -1,   306,    -1,   310,    -1,
     310,    10,   305,    -1,    -1,    -1,    70,   308,   336,   309,
      14,   306,    23,    -1,    -1,   332,   311,   314,    -1,    -1,
     326,   312,   313,    -1,   357,    -1,    -1,   314,    -1,    -1,
     325,   315,   317,    -1,    -1,   314,    26,   325,   316,   317,
      -1,   314,    26,    10,    -1,   314,    26,     1,    -1,     1,
      -1,   318,    -1,   317,     9,   318,    -1,   317,     9,    26,
      -1,   317,     9,    10,    -1,   317,     9,     1,    -1,     1,
      -1,   331,   319,    -1,    -1,    -1,   107,    16,   320,   321,
      24,    -1,   322,    -1,   321,     9,   322,    -1,    74,    -1,
      78,   177,    -1,    78,   170,    -1,    78,   173,    -1,    78,
     167,    -1,   104,   342,    -1,   119,   342,    -1,   120,   348,
      -1,   130,   167,    -1,   132,    -1,   133,   164,    -1,   134,
      -1,   135,   164,    -1,   136,    -1,   137,   342,    -1,   138,
      16,   323,    24,    -1,   140,   348,    -1,   139,   348,    -1,
     142,    -1,   143,    -1,   141,    16,   323,    24,    -1,   144,
      -1,   145,    16,   342,    24,    34,   342,    -1,   145,    16,
     167,    24,    34,   342,    -1,   147,    -1,   324,    16,   361,
      24,    -1,   324,    -1,   342,    -1,   323,     9,   342,    -1,
     114,    -1,   115,    -1,   116,    -1,   117,    -1,   118,    -1,
     335,    -1,    30,    -1,     1,    -1,    -1,    17,   327,   314,
     329,    -1,    -1,    16,   328,   330,    24,    -1,    16,    24,
      -1,    25,    -1,    26,    25,    -1,   331,    -1,   330,   331,
      -1,   332,    -1,   326,    -1,   342,    -1,   345,    -1,   334,
      -1,   333,   334,    -1,   342,    -1,   373,    -1,   346,    -1,
      16,   348,    24,    -1,   342,    -1,   373,    -1,   346,    -1,
     342,    -1,   375,    -1,   373,    -1,   346,    -1,   348,     9,
     348,    -1,   337,     9,   348,    -1,   348,    -1,   338,   348,
      -1,   340,   348,    24,    -1,   340,    28,    24,    -1,   340,
      62,   348,    24,    -1,   341,    -1,    50,    -1,    38,    16,
      -1,    93,    16,    -1,    92,    16,    -1,   129,    16,    -1,
     174,    -1,   343,    -1,   342,   372,    -1,   344,    -1,   175,
      -1,   176,    -1,   373,    -1,   368,    -1,   367,    -1,    21,
     367,    -1,    19,   367,    -1,   369,    -1,   375,    -1,    99,
      -1,   346,    -1,    -1,     5,   347,   348,     5,    -1,   348,
      34,   174,    -1,   348,     7,   348,    -1,   348,     4,   348,
      -1,   348,    11,   348,    -1,   348,    20,   348,    -1,    -1,
     348,    84,   349,   348,    -1,    -1,   348,    75,   350,    16,
     361,    24,    -1,   348,    18,   348,    -1,   348,    13,   348,
      -1,   348,    15,   348,    -1,   348,    12,   348,    -1,   348,
      21,   348,    -1,   348,    19,   348,    -1,   348,    28,   348,
      -1,   348,    27,   348,    -1,     6,   348,    -1,   100,   348,
      -1,    21,   348,    -1,    19,   348,    -1,    16,   348,    24,
      -1,    -1,    16,    36,   351,   231,   243,   319,    24,    -1,
      -1,    16,   220,   352,   221,   231,   243,   246,   319,    24,
      -1,   339,    -1,   354,    -1,    -1,   373,   353,   359,    -1,
     368,    -1,   367,    -1,   369,    -1,   375,    -1,   342,    -1,
     357,    -1,   163,   360,    -1,    81,    16,   348,    24,    -1,
      82,    16,   348,    24,    -1,    53,    16,   348,    24,    -1,
      42,    16,   342,    24,    -1,    -1,   373,   356,   360,    -1,
      -1,    89,   373,   358,   362,    -1,    -1,   360,    -1,    99,
      -1,    16,    24,    -1,    16,   361,    24,    -1,   348,    -1,
     361,     9,   348,    -1,   361,     9,     1,    -1,   361,     1,
      -1,    -1,   363,    -1,    99,    -1,    16,    24,    -1,    16,
     364,    24,    -1,   365,    -1,   364,     9,   365,    -1,   364,
       9,     1,    -1,   364,     1,    -1,   348,    -1,    -1,    14,
     366,   275,    23,    -1,   164,    -1,   165,    -1,   166,    -1,
      76,    -1,    98,    -1,   167,    -1,   167,   169,    -1,   167,
       8,   373,    -1,   148,    -1,    66,    -1,   373,    -1,    28,
      -1,    54,    -1,    22,    -1,    29,    -1,   371,   173,    -1,
     371,   170,    -1,   371,   171,    -1,   371,     1,    -1,   173,
      -1,   374,    -1,   170,    -1,   171,    -1,   172,    -1,    17,
      25,    -1,   377,    -1,   376,   377,    -1,   379,    -1,   381,
      -1,   383,    -1,   385,    -1,   387,    -1,   389,    -1,   390,
      -1,   391,    -1,   392,    -1,   393,    -1,   378,    -1,    63,
     402,    89,    83,   240,    -1,    -1,    79,   395,   380,   300,
     394,    -1,    -1,    79,    52,   395,   382,   300,    -1,    -1,
      57,   396,   384,   300,   394,    -1,    -1,    57,    52,   396,
     386,   300,    -1,    -1,    95,   399,   388,    57,   300,    79,
     300,   394,    -1,    45,   402,   397,    -1,    88,   402,   240,
      -1,    88,   402,   240,   401,   500,   240,    -1,    88,   402,
     122,   240,    52,    -1,    88,   402,   122,   240,    52,   152,
     122,   240,    -1,    46,   402,   501,   240,    -1,    63,   402,
     397,    -1,    -1,   231,   243,   246,    -1,   401,   500,   240,
      -1,    68,   500,   240,    -1,    32,    -1,    54,    -1,    97,
      -1,   501,   240,    -1,    54,    -1,   500,   240,    -1,    -1,
     500,   240,    -1,    -1,   154,   500,   240,   236,    -1,    75,
      -1,    80,    -1,    -1,   123,    -1,   404,    -1,   406,    -1,
     409,    -1,    -1,    57,   405,   300,   408,   394,    -1,    -1,
      79,   407,   300,   394,    -1,    -1,    79,   300,    -1,   410,
     402,   398,   146,   398,    -1,    48,    -1,    96,    -1,    31,
      -1,   413,    -1,    -1,   411,    10,   412,   413,    -1,   414,
      -1,   422,    -1,   426,    -1,   415,    -1,   416,    -1,   417,
      -1,   429,    -1,   430,    -1,    46,   425,    44,   499,   167,
     491,   418,    -1,    46,   425,    44,   499,   152,   489,   418,
      -1,    63,   402,   425,    44,   499,    -1,    90,    81,    44,
     499,   127,   103,   499,    -1,    90,   499,   127,   103,   499,
      -1,    -1,   107,    16,    24,    -1,   107,    16,   419,    24,
      -1,   420,    -1,   419,     9,   420,    -1,    53,   499,    -1,
      82,   167,    -1,    82,   498,    -1,    40,    -1,    58,    -1,
     113,   421,    -1,   167,    -1,   421,   151,   167,    -1,    -1,
      -1,    46,   111,   126,   499,   423,   432,    14,   424,   442,
      -1,    81,    -1,    86,    -1,    -1,    -1,    33,   111,   126,
     499,   427,   432,    14,   428,   442,    -1,    63,   402,   111,
     126,   499,    -1,    63,   402,   111,    91,   499,    -1,    63,
     402,   111,    91,   501,   499,    -1,    63,   402,   499,    -1,
      63,   402,   501,   499,    -1,    -1,    -1,   432,    68,   179,
      34,   177,   433,   435,    -1,   432,    68,   177,    34,   177,
      -1,    -1,   432,    68,   125,   483,    34,   177,   434,   435,
      -1,   432,   482,    -1,    -1,   435,   436,    -1,   131,   437,
      86,   497,   438,   439,    -1,    -1,   155,    -1,    -1,   103,
      16,   488,    24,    -1,    -1,   107,    16,   440,    24,    -1,
     441,    -1,   440,     9,   441,    -1,   177,    -1,   177,   167,
      -1,    23,    -1,   443,    23,    -1,   443,    10,    23,    -1,
     445,    -1,    -1,   443,    10,   444,   445,    -1,   451,    -1,
     431,    -1,   430,    -1,   446,    -1,   447,    -1,    37,    89,
      83,   499,    -1,    61,   402,    89,    83,   499,    -1,    61,
     402,    89,    83,    -1,    23,    -1,   449,    23,    -1,   449,
      10,    23,    -1,   451,    -1,    -1,   449,    10,   450,   451,
      -1,    -1,    46,   499,    34,   452,   454,    -1,    46,   499,
     152,   126,   499,   484,    -1,    46,   501,   499,   152,   126,
     499,   484,    -1,    -1,   459,   484,    14,   453,   448,    -1,
     457,    -1,   456,    -1,    -1,   459,   484,    14,   455,   448,
      -1,   478,   477,   469,    -1,    -1,   478,   458,   463,    -1,
     460,    -1,   459,   460,    -1,    70,   479,    -1,   128,   479,
      -1,   109,   479,    -1,    -1,    -1,   102,   479,   461,   475,
     462,   476,    -1,   465,    -1,    -1,   463,    26,   464,   465,
      -1,    -1,   477,   466,   467,    -1,     1,    -1,   469,   474,
      -1,    -1,   467,     9,   468,   469,   474,    -1,    -1,    -1,
      -1,    -1,   478,   470,   475,   471,   476,   472,   480,   473,
     484,    -1,     1,    -1,    -1,    34,   499,    -1,    -1,    53,
     373,    -1,    53,    81,    16,   167,    24,    -1,    53,   497,
      -1,    -1,    82,   167,    -1,    82,   497,    -1,   479,    -1,
      17,    25,    -1,    30,    -1,   479,    -1,    17,    25,    -1,
     499,    -1,   367,    -1,   368,    -1,   499,    16,   487,    24,
      -1,   497,    -1,    -1,   481,    -1,   482,    -1,   481,   482,
      -1,   153,    16,   168,    -1,   153,   167,    -1,    16,   168,
      -1,   167,    -1,    -1,   107,    16,    24,    -1,   107,    16,
     485,    24,    -1,   486,    -1,   485,     9,   486,    -1,   124,
      64,    -1,    64,    -1,   108,   164,    -1,   152,   177,    -1,
      -1,   488,    -1,   497,    -1,   488,     9,   497,    -1,   490,
      -1,   489,     9,   490,    -1,    69,   179,   491,   113,   495,
      -1,    16,   492,    24,    -1,    -1,   493,    -1,   494,    -1,
     493,     9,   494,    -1,   496,   498,   495,    -1,   498,    -1,
     498,   100,   101,    -1,    75,    -1,   498,    -1,   498,    -1,
     178,    -1,   180,    -1,   177,    -1,   131,    -1,   155,    -1,
     373,    -1,    81,    16,   167,    24,    -1,    -1,   501,    -1,
      70,    -1,    70,    73,    43,    -1,   158,    -1,    10,   158,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   556,   556,   558,   561,   564,   567,   570,   576,   577,
     578,   579,   584,   588,   589,   593,   593,   603,   604,   608,
     609,   610,   611,   612,   616,   617,   621,   625,   626,   630,
     635,   636,   639,   641,   641,   650,   651,   657,   657,   673,
     675,   673,   681,   684,   681,   691,   696,   701,   706,   714,
     715,   716,   720,   721,   722,   726,   731,   738,   739,   746,
     747,   751,   752,   753,   758,   759,   760,   761,   762,   763,
     764,   765,   770,   770,   775,   776,   782,   782,   798,   799,
     800,   801,   805,   805,   810,   812,   813,   819,   819,   839,
     839,   855,   856,   860,   860,   871,   872,   880,   885,   889,
     895,   896,   897,   898,   902,   903,   904,   905,   909,   910,
     910,   915,   916,   920,   922,   927,   927,   933,   936,   940,
     940,   944,   944,   952,   953,   954,   958,   959,   959,   968,
     969,   974,   975,   976,   977,   978,   982,   983,   983,   992,
     993,   993,  1002,  1003,  1008,  1009,  1010,  1011,  1012,  1013,
    1017,  1018,  1019,  1023,  1024,  1028,  1032,  1033,  1037,  1041,
    1042,  1046,  1052,  1046,  1062,  1063,  1067,  1068,  1072,  1073,
    1077,  1078,  1082,  1089,  1090,  1094,  1095,  1096,  1097,  1098,
    1099,  1100,  1104,  1107,  1107,  1145,  1146,  1147,  1148,  1165,
    1166,  1167,  1168,  1169,  1170,  1174,  1174,  1175,  1179,  1180,
    1181,  1179,  1188,  1189,  1187,  1196,  1196,  1197,  1197,  1214,
    1215,  1216,  1217,  1222,  1228,  1229,  1233,  1233,  1254,  1265,
    1273,  1254,  1296,  1297,  1301,  1302,  1306,  1307,  1317,  1318,
    1322,  1322,  1342,  1343,  1344,  1345,  1349,  1350,  1351,  1355,
    1356,  1357,  1361,  1362,  1366,  1367,  1371,  1372,  1371,  1379,
    1379,  1381,  1381,  1383,  1387,  1388,  1394,  1394,  1397,  1396,
    1399,  1400,  1401,  1405,  1406,  1407,  1408,  1409,  1410,  1414,
    1419,  1420,  1420,  1428,  1429,  1433,  1434,  1439,  1441,  1442,
    1443,  1444,  1445,  1446,  1447,  1448,  1449,  1450,  1451,  1452,
    1453,  1454,  1455,  1456,  1457,  1458,  1459,  1460,  1461,  1462,
    1463,  1464,  1468,  1469,  1473,  1474,  1475,  1476,  1477,  1481,
    1482,  1483,  1487,  1487,  1492,  1492,  1504,  1508,  1509,  1513,
    1517,  1530,  1531,  1535,  1536,  1540,  1541,  1545,  1546,  1547,
    1548,  1552,  1553,  1554,  1558,  1559,  1560,  1561,  1565,  1566,
    1570,  1571,  1575,  1576,  1577,  1581,  1585,  1586,  1587,  1588,
    1589,  1593,  1610,  1615,  1623,  1628,  1629,  1634,  1635,  1636,
    1637,  1638,  1639,  1640,  1641,  1642,  1646,  1646,  1668,  1669,
    1671,  1674,  1678,  1679,  1679,  1682,  1682,  1696,  1697,  1698,
    1699,  1700,  1704,  1708,  1710,  1711,  1713,  1715,  1718,  1741,
    1744,  1744,  1762,  1762,  1787,  1793,  1794,  1794,  1826,  1827,
    1828,  1829,  1830,  1831,  1835,  1852,  1854,  1856,  1858,  1863,
    1863,  1893,  1893,  1915,  1916,  1920,  1921,  1922,  1926,  1927,
    1928,  1929,  1933,  1934,  1938,  1939,  1940,  1944,  1945,  1946,
    1947,  1951,  1952,  1952,  1958,  1959,  1960,  1961,  1964,  1970,
    1971,  1972,  1976,  1977,  1981,  1982,  1983,  1987,  1988,  1992,
    1996,  2000,  2004,  2008,  2009,  2013,  2014,  2018,  2019,  2025,
    2026,  2033,  2034,  2035,  2036,  2037,  2038,  2039,  2040,  2041,
    2042,  2043,  2047,  2054,  2054,  2066,  2066,  2081,  2081,  2093,
    2093,  2109,  2109,  2120,  2126,  2128,  2133,  2135,  2140,  2145,
    2150,  2151,  2158,  2162,  2166,  2167,  2168,  2169,  2173,  2174,
    2178,  2179,  2183,  2184,  2191,  2192,  2196,  2197,  2205,  2206,
    2207,  2214,  2214,  2236,  2236,  2248,  2249,  2253,  2259,  2260,
    2261,  2267,  2268,  2268,  2274,  2275,  2276,  2282,  2283,  2284,
    2285,  2286,  2292,  2301,  2313,  2323,  2326,  2332,  2333,  2334,
    2338,  2342,  2349,  2351,  2353,  2355,  2357,  2359,  2365,  2366,
    2370,  2384,  2370,  2395,  2396,  2400,  2407,  2400,  2418,  2429,
    2435,  2444,  2450,  2459,  2460,  2460,  2465,  2468,  2468,  2474,
    2479,  2480,  2484,  2491,  2492,  2496,  2497,  2501,  2502,  2506,
    2510,  2517,  2518,  2522,  2523,  2524,  2528,  2529,  2529,  2536,
    2537,  2539,  2541,  2543,  2548,  2557,  2563,  2572,  2573,  2574,
    2578,  2579,  2579,  2587,  2586,  2589,  2596,  2604,  2603,  2613,
    2617,  2619,  2618,  2633,  2647,  2647,  2652,  2653,  2657,  2658,
    2659,  2660,  2661,  2660,  2669,  2670,  2670,  2676,  2676,  2681,
    2685,  2688,  2688,  2696,  2700,  2702,  2704,  2696,  2707,  2711,
    2712,  2716,  2717,  2718,  2719,  2723,  2724,  2725,  2729,  2730,
    2731,  2735,  2736,  2740,  2741,  2742,  2743,  2746,  2751,  2752,
    2756,  2757,  2761,  2762,  2766,  2767,  2771,  2772,  2773,  2777,
    2781,  2788,  2789,  2790,  2791,  2795,  2796,  2800,  2801,  2805,
    2806,  2810,  2816,  2820,  2821,  2825,  2826,  2830,  2836,  2837,
    2841,  2842,  2846,  2847,  2848,  2852,  2853,  2854,  2859,  2860,
    2865,  2866,  2870,  2871,  2875,  2876
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
  "_SLASH", "_STAR", "_STAR_GT", "a_L", "ADD_L", "ALL_L", "ALTER_L",
  "AS_L", "ASC_L", "ASK_L", "ATTACH_L", "AVG_L", "BASE_L", "BIJECTION_L",
  "BINDINGS_L", "BOUND_L", "BY_L", "CLASS_L", "CLEAR_L", "CREATE_L",
  "CONSTRUCT_L", "COPY_L", "COUNT_L", "COUNT_LPAR", "COUNT_DISTINCT_L",
  "DATA_L", "DATATYPE_L", "DEFAULT_L", "DEFINE_L", "DEFMACRO_L",
  "DELETE_L", "DEREF_L", "DESC_L", "DESCRIBE_L", "DETACH_L", "DISTINCT_L",
  "DROP_L", "EXCLUSIVE_L", "EXISTS_L", "false_L", "FILTER_L", "FROM_L",
  "FUNCTION_L", "GRAPH_L", "GROUP_L", "HAVING_L", "IDENTIFIED_L", "IFP_L",
  "IN_L", "INF_L", "INDEX_L", "INFERENCE_L", "INSERT_L", "INTO_L", "IRI_L",
  "LANG_L", "LIBRARY_L", "LIKE_L", "LIMIT_L", "LITERAL_L", "LOCAL_L",
  "LOAD_L", "MACRO_L", "MAKE_L", "MAP_L", "MAX_L", "MIN_L", "MINUS_L",
  "MODIFY_L", "MOVE_L", "NAMED_L", "NAN_L", "NIL_L", "NOT_L", "NULL_L",
  "OBJECT_L", "OF_L", "OFFBAND_L", "OFFSET_L", "OPTIONAL_L", "OPTION_L",
  "ORDER_L", "PREDICATE_L", "PREFIX_L", "QUAD_L", "REDUCED_L", "RETURNS_L",
  "SAME_AS_L", "SAME_AS_O_L", "SAME_AS_P_L", "SAME_AS_S_L",
  "SAME_AS_S_O_L", "SCORE_L", "SCORE_LIMIT_L", "SELECT_L", "SERVICE_L",
  "SILENT_L", "SOFT_L", "SQLQUERY_L", "STORAGE_L", "SUBCLASS_L",
  "SUBJECT_L", "SUM_L", "TABLE_OPTION_L", "TEXT_L", "T_CYCLES_ONLY_L",
  "T_DIRECTION_L", "T_DISTINCT_L", "T_END_FLAG_L", "T_EXISTS_L",
  "T_FINAL_AS_L", "T_IN_L", "T_MAX_L", "T_MIN_L", "T_OUT_L",
  "T_NO_CYCLES_L", "T_NO_ORDER_L", "T_SHORTEST_ONLY_L", "T_STEP_L", "TO_L",
  "TRANSITIVE_L", "true_L", "UNBOUND_L", "UNDEF_L", "UNION_L", "USING_L",
  "WHERE_L", "WITH_L", "XML_L", "__SPAR_PUNCT_END", "START_OF_SPARQL_TEXT",
  "END_OF_SPARQL_TEXT", "SPARUL_RUN_SUBTYPE", "SPARUL_INSERT_DATA",
  "SPARUL_DELETE_DATA", "__SPAR_NONPUNCT_START", "SPARQL_BIF",
  "SPARQL_INTEGER", "SPARQL_DECIMAL", "SPARQL_DOUBLE", "SPARQL_STRING",
  "SPARQL_SQLTEXT", "LANGTAG", "QNAME", "QNAME_NS", "BLANK_NODE_LABEL",
  "Q_IRI_REF", "QD_VARNAME", "QD_COLON_PARAMNAME", "QD_COLON_PARAMNUM",
  "SPARQL_PLAIN_ID", "SPARQL_SQL_ALIASCOLNAME", "SPARQL_SQL_QTABLENAME",
  "SPARQL_SQL_QTABLECOLNAME", "__SPAR_NONPUNCT_END", "PRECODE_EXPN_PREC",
  "_COLON", "UMINUS", "UPLUS", "$accept", "sparql", "spar_query_body",
  "spar_prolog", "spar_defines_opt", "spar_define", "@1",
  "spar_define_val_commalist", "spar_define_val", "spar_base_decl_opt",
  "spar_prefix_decls_opt", "spar_prefix_decl", "spar_create_macro_lib_opt",
  "@2", "spar_defmacros_opt", "spar_defmacro", "@3",
  "spar_dm_args_and_body", "@4", "@5", "@6", "@7",
  "spar_dm_match_template", "spar_dm_local_args_opt", "spar_dm_args_opt",
  "spar_dm_arg_commalist", "spar_dm_args", "spar_dm_patitem_gs",
  "spar_dm_patitem_p", "spar_dm_patitem_o", "spar_dm_gp_or_expn", "@8",
  "spar_select_query", "@9", "spar_select_query_mode", "spar_select_rset",
  "@10", "spar_select_rset_1", "spar_construct_query", "@11",
  "spar_describe_query", "@12", "spar_describe_rset", "spar_ask_query",
  "@13", "spar_dataset_clauses_opt", "spar_dataset_clause",
  "spar_dataset_clause_subtype", "spar_dataset_clause_subtype_from",
  "spar_dataset_clause_subtype_using", "spar_sponge_optionlist_opt", "@14",
  "spar_sponge_option_commalist_opt_rpar", "spar_sponge_option_commalist",
  "spar_precode_expn", "@15", "spar_where_clause_opt", "spar_where_clause",
  "@16", "@17", "spar_solution_modifier", "spar_group_clause_opt", "@18",
  "spar_group_expns", "spar_group_expn", "spar_having_clause_opt", "@19",
  "spar_order_clause_opt", "@20", "spar_order_conditions",
  "spar_order_condition", "spar_asc_or_desc_opt", "spar_limit_clause_opt",
  "spar_limit_clause", "spar_offset_clause_opt", "spar_offset_clause",
  "spar_bindings_clause_opt", "spar_bindings_clause", "@21", "@22",
  "spar_bindings_vars", "spar_bindings_var", "spar_bindings_opt",
  "spar_bindings", "spar_binding", "spar_bindvals", "spar_bindval",
  "spar_group_gp", "@23", "spar_gp", "spar_gp_not_triples",
  "spar_optional_gp", "@24", "spar_quad_map_gp", "@25", "@26", "@27",
  "spar_graph_gp", "@28", "@29", "spar_group_or_union_gp", "@30", "@31",
  "spar_constraint", "spar_exists_or_not_exists",
  "spar_constraint_exists_int", "@32", "spar_service_req", "@33", "@34",
  "@35", "spar_service_options_list_opt", "spar_service_options",
  "spar_service_option", "spar_ctor_template", "@36",
  "spar_ctor_triples_or_quads_opt", "spar_ctor_triples_or_quads_triples",
  "spar_ctor_triples_or_quads_quads", "spar_triples_opt", "spar_triples",
  "spar_quads1", "@37", "@38", "spar_triples1", "@39", "@40",
  "spar_props_opt", "spar_props", "@41", "@42", "spar_objects",
  "spar_ograph_node", "spar_triple_optionlist_opt", "@43",
  "spar_triple_option_commalist", "spar_triple_option",
  "spar_triple_option_var_commalist", "spar_same_as_option", "spar_verb",
  "spar_triples_node", "@44", "@45", "spar_triples_opt_semi_rsqbra",
  "spar_cons_collection", "spar_graph_node", "spar_var_or_term",
  "spar_var_or_iriref_or_pexpn_or_backquoteds",
  "spar_var_or_iriref_or_pexpn_or_backquoted",
  "spar_var_or_iriref_or_backquoted",
  "spar_var_or_blank_node_or_iriref_or_backquoted",
  "spar_retcol_commalist", "spar_retcols", "spar_ret_agg_call",
  "spar_agg_name", "spar_agg_name_int", "spar_var", "spar_global_var",
  "spar_global_var_int", "spar_graph_term", "spar_backquoted", "@46",
  "spar_expn", "@47", "@48", "@49", "@50", "@51", "spar_built_in_call",
  "spar_function_call", "@52", "spar_macro_call", "@53",
  "spar_arg_list_opt", "spar_arg_list", "spar_expns",
  "spar_macro_arg_list_opt", "spar_macro_arg_list", "spar_expn_or_ggps",
  "spar_expn_or_ggp", "@54", "spar_numeric_literal", "spar_rdf_literal",
  "spar_boolean_literal", "spar_iriref_or_star_or_default", "spar_arrow",
  "spar_arrow_iriref", "spar_iriref", "spar_qname", "spar_blank_node",
  "spar_sparul_action_or_drop_macro_libs",
  "spar_sparul_action_or_drop_macro_lib", "spar_drop_macro_lib",
  "spar_sparul_insert", "@55", "spar_sparul_insertdata", "@56",
  "spar_sparul_delete", "@57", "spar_sparul_deletedata", "@58",
  "spar_sparul_modify", "@59", "spar_sparul_clear", "spar_sparul_load",
  "spar_sparul_load_service_data", "spar_sparul_create",
  "spar_sparul_drop", "spar_action_solution", "spar_in_graph_precode",
  "spar_from_graph_precode",
  "spar_all_or_named_or_default_or_graph_precode",
  "spar_default_or_graph_precode", "spar_graph_precode_opt",
  "spar_with_graph_precode_opt", "spar_in_or_into", "spar_silent_opt",
  "spar_sparul11_action", "spar_sparul11_deleteinsert", "@60",
  "spar_sparul11_insert", "@61", "spar_sparul11_insert_opt",
  "spar_sparul11_copymoveadd", "spar_sparul11_copymoveadd_op",
  "spar_qm_stmts", "@62", "spar_qm_stmt", "spar_qm_simple_stmt",
  "spar_qm_create_iol_class", "spar_qm_drop_iol_class",
  "spar_qm_create_iri_subclass", "spar_qm_iol_class_optionlist_opt",
  "spar_qm_iol_class_option_commalist", "spar_qm_iol_class_option",
  "spar_qm_sprintff_list", "spar_qm_create_quad_storage", "@63", "@64",
  "spar_iol", "spar_qm_alter_quad_storage", "@65", "@66",
  "spar_qm_drop_quad_storage", "spar_qm_drop_quad_map_mapping",
  "spar_qm_drop_mapping", "spar_qm_from_where_list_opt", "@67", "@68",
  "spar_qm_text_literal_list_opt", "spar_qm_text_literal_decl",
  "spar_xml_opt", "spar_of_sqlcol_opt", "spar_qm_text_literal_options_opt",
  "spar_qm_text_literal_option_commalist", "spar_qm_text_literal_option",
  "spar_qm_map_top_group", "spar_qm_map_top_dotlist", "@69",
  "spar_qm_map_top_op", "spar_qm_attach_macro_lib",
  "spar_qm_detach_macro_lib", "spar_qm_map_group", "spar_qm_map_dotlist",
  "@70", "spar_qm_map_op", "@71", "@72", "spar_qm_map_iddef", "@73",
  "spar_qm_map_single", "spar_qm_triples1", "@74", "spar_qm_named_fields",
  "spar_qm_named_field", "@75", "@76", "spar_qm_props", "@77",
  "spar_qm_prop", "@78", "spar_qm_obj_field_commalist", "@79",
  "spar_qm_obj_field", "@80", "@81", "@82", "@83", "spar_qm_as_id_opt",
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
     435,   436,   437,   438,   439,   440
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   186,   187,   187,   187,   187,   187,   187,   188,   188,
     188,   188,   189,   190,   190,   192,   191,   193,   193,   194,
     194,   194,   194,   194,   195,   195,   195,   196,   196,   197,
     197,   197,   198,   199,   198,   200,   200,   202,   201,   204,
     205,   203,   206,   207,   203,   203,   208,   208,   208,   209,
     209,   209,   210,   210,   210,   211,   211,   212,   212,   213,
     213,   214,   214,   214,   215,   215,   215,   215,   215,   215,
     215,   215,   217,   216,   216,   216,   219,   218,   220,   220,
     220,   220,   222,   221,   223,   223,   223,   225,   224,   227,
     226,   228,   228,   230,   229,   231,   231,   232,   233,   233,
     234,   234,   234,   234,   235,   235,   235,   235,   236,   237,
     236,   238,   238,   239,   239,   241,   240,   242,   242,   244,
     243,   245,   243,   246,   246,   246,   247,   248,   247,   249,
     249,   250,   250,   250,   250,   250,   251,   252,   251,   253,
     254,   253,   255,   255,   256,   256,   256,   256,   256,   256,
     257,   257,   257,   258,   258,   259,   260,   260,   261,   262,
     262,   264,   265,   263,   266,   266,   267,   267,   268,   268,
     269,   269,   270,   271,   271,   272,   272,   272,   272,   272,
     272,   272,   273,   274,   273,   275,   275,   275,   275,   276,
     276,   276,   276,   276,   276,   278,   277,   277,   280,   281,
     282,   279,   284,   285,   283,   287,   286,   288,   286,   289,
     289,   289,   289,   289,   290,   290,   292,   291,   294,   295,
     296,   293,   297,   297,   298,   298,   299,   299,   299,   299,
     301,   300,   302,   302,   302,   302,   303,   303,   303,   304,
     304,   304,   305,   305,   306,   306,   308,   309,   307,   311,
     310,   312,   310,   310,   313,   313,   315,   314,   316,   314,
     314,   314,   314,   317,   317,   317,   317,   317,   317,   318,
     319,   320,   319,   321,   321,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   323,   323,   324,   324,   324,   324,   324,   325,
     325,   325,   327,   326,   328,   326,   326,   329,   329,   330,
     330,   331,   331,   332,   332,   333,   333,   334,   334,   334,
     334,   335,   335,   335,   336,   336,   336,   336,   337,   337,
     338,   338,   339,   339,   339,   340,   341,   341,   341,   341,
     341,   342,   342,   342,   343,   344,   344,   345,   345,   345,
     345,   345,   345,   345,   345,   345,   347,   346,   348,   348,
     348,   348,   348,   349,   348,   350,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     351,   348,   352,   348,   348,   348,   353,   348,   348,   348,
     348,   348,   348,   348,   354,   354,   354,   354,   354,   356,
     355,   358,   357,   359,   359,   360,   360,   360,   361,   361,
     361,   361,   362,   362,   363,   363,   363,   364,   364,   364,
     364,   365,   366,   365,   367,   367,   367,   367,   367,   368,
     368,   368,   369,   369,   370,   370,   370,   371,   371,   372,
     372,   372,   372,   373,   373,   374,   374,   375,   375,   376,
     376,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   378,   380,   379,   382,   381,   384,   383,   386,
     385,   388,   387,   389,   390,   390,   391,   391,   392,   393,
     394,   394,   395,   396,   397,   397,   397,   397,   398,   398,
     399,   399,   400,   400,   401,   401,   402,   402,   403,   403,
     403,   405,   404,   407,   406,   408,   408,   409,   410,   410,
     410,   411,   412,   411,   413,   413,   413,   414,   414,   414,
     414,   414,   415,   415,   416,   417,   417,   418,   418,   418,
     419,   419,   420,   420,   420,   420,   420,   420,   421,   421,
     423,   424,   422,   425,   425,   427,   428,   426,   429,   430,
     430,   431,   431,   432,   433,   432,   432,   434,   432,   432,
     435,   435,   436,   437,   437,   438,   438,   439,   439,   440,
     440,   441,   441,   442,   442,   442,   443,   444,   443,   445,
     445,   445,   445,   445,   446,   447,   447,   448,   448,   448,
     449,   450,   449,   452,   451,   451,   451,   453,   451,   451,
     454,   455,   454,   456,   458,   457,   459,   459,   460,   460,
     460,   461,   462,   460,   463,   464,   463,   466,   465,   465,
     467,   468,   467,   470,   471,   472,   473,   469,   469,   474,
     474,   475,   475,   475,   475,   476,   476,   476,   477,   477,
     477,   478,   478,   479,   479,   479,   479,   479,   480,   480,
     481,   481,   482,   482,   483,   483,   484,   484,   484,   485,
     485,   486,   486,   486,   486,   487,   487,   488,   488,   489,
     489,   490,   491,   492,   492,   493,   493,   494,   495,   495,
     496,   496,   497,   497,   497,   498,   498,   498,   499,   499,
     500,   500,   501,   501,   502,   502
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     4,     4,     2,     4,     1,     1,     1,
       1,     1,     5,     0,     2,     0,     4,     1,     3,     1,
       1,     1,     1,     1,     0,     2,     2,     0,     2,     3,
       2,     2,     0,     0,     8,     0,     2,     0,     4,     0,
       0,     7,     0,     0,     7,     1,     5,     7,     7,     0,
       4,     4,     0,     1,     1,     3,     3,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       1,     1,     0,     4,     1,     1,     0,     6,     1,     2,
       2,     2,     0,     2,     1,     1,     1,     0,     6,     0,
       6,     1,     1,     0,     4,     0,     2,     3,     1,     1,
       1,     2,     2,     3,     1,     2,     2,     3,     0,     0,
       4,     1,     2,     2,     4,     0,     2,     0,     1,     0,
       5,     0,     4,     4,     6,     6,     0,     0,     4,     1,
       2,     3,     3,     1,     1,     1,     0,     0,     3,     0,
       0,     4,     1,     2,     4,     4,     2,     1,     1,     1,
       0,     1,     1,     0,     1,     2,     0,     1,     2,     0,
       1,     0,     0,     7,     1,     2,     1,     1,     0,     1,
       1,     2,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     3,     0,     8,     1,     3,     4,     3,     1,
       1,     1,     1,     1,     1,     0,     4,     2,     0,     0,
       0,     8,     0,     0,     6,     0,     3,     0,     5,     4,
       2,     2,     3,     2,     1,     2,     0,     4,     0,     0,
       0,     9,     0,     3,     1,     2,     2,     3,     2,     2,
       0,     4,     0,     1,     1,     2,     1,     3,     2,     1,
       3,     2,     0,     1,     1,     3,     0,     0,     7,     0,
       3,     0,     3,     1,     0,     1,     0,     3,     0,     5,
       3,     3,     1,     1,     3,     3,     3,     3,     1,     2,
       0,     0,     5,     1,     3,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     2,     1,     2,     1,     2,
       4,     2,     2,     1,     1,     4,     1,     6,     6,     1,
       4,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     4,     0,     4,     2,     1,     2,     1,
       2,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       1,     2,     3,     3,     4,     1,     1,     2,     2,     2,
       2,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     0,     4,     3,     3,
       3,     3,     3,     0,     4,     0,     6,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     3,
       0,     7,     0,     9,     1,     1,     0,     3,     1,     1,
       1,     1,     1,     1,     2,     4,     4,     4,     4,     0,
       3,     0,     4,     0,     1,     1,     2,     3,     1,     3,
       3,     2,     0,     1,     1,     2,     3,     1,     3,     3,
       2,     1,     0,     4,     1,     1,     1,     1,     1,     1,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     0,     5,     0,     5,     0,     5,     0,
       5,     0,     8,     3,     3,     6,     5,     8,     4,     3,
       0,     3,     3,     3,     1,     1,     1,     2,     1,     2,
       0,     2,     0,     4,     1,     1,     0,     1,     1,     1,
       1,     0,     5,     0,     4,     0,     2,     5,     1,     1,
       1,     1,     0,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     7,     7,     5,     7,     5,     0,     3,     4,
       1,     3,     2,     2,     2,     1,     1,     2,     1,     3,
       0,     0,     9,     1,     1,     0,     0,     9,     5,     5,
       6,     3,     4,     0,     0,     7,     5,     0,     8,     2,
       0,     2,     6,     0,     1,     0,     4,     0,     4,     1,
       3,     1,     2,     1,     2,     3,     1,     0,     4,     1,
       1,     1,     1,     1,     4,     5,     4,     1,     2,     3,
       1,     0,     4,     0,     5,     6,     7,     0,     5,     1,
       1,     0,     5,     3,     0,     3,     1,     2,     2,     2,
       2,     0,     0,     6,     1,     0,     4,     0,     3,     1,
       2,     0,     5,     0,     0,     0,     0,     9,     1,     0,
       2,     0,     2,     5,     2,     0,     2,     2,     1,     2,
       1,     1,     2,     1,     1,     1,     4,     1,     0,     1,
       1,     2,     3,     2,     2,     1,     0,     3,     4,     1,
       3,     2,     1,     2,     2,     0,     1,     1,     3,     1,
       3,     5,     3,     0,     1,     1,     3,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       0,     1,     1,     3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     7,    13,     0,     5,    32,    24,     1,   520,     0,
     506,   506,   518,   511,   506,   513,   506,     0,   700,   519,
       0,     0,   459,   471,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,     0,   508,   509,   510,   506,     0,
     521,   524,   527,   528,   529,   525,   526,   530,   531,     0,
      15,    14,    27,     0,   507,     0,   553,   554,     0,     0,
       0,     0,     0,   700,   477,     0,     0,     0,   504,   505,
     473,   700,     0,   115,     0,   455,   456,   453,   698,   454,
       0,   702,   481,   115,   701,    93,    87,    89,    78,     0,
       8,    76,     9,    10,    11,   506,     0,   506,     0,     3,
     460,     4,   700,   522,   704,     6,    26,    25,     0,    35,
       0,   494,   495,   496,   483,   115,     0,     0,   115,     0,
     479,   115,     0,   230,   515,     0,     0,   489,     0,   475,
       0,   115,    95,   115,   484,     0,     0,     0,     0,     0,
       0,   501,    95,     0,     0,    81,    80,    79,     2,    82,
       0,   498,     0,   115,   705,     0,     0,     0,    28,   502,
       0,   555,   497,    33,   550,   488,     0,     0,   493,   490,
     232,     0,    95,   115,     0,     0,     0,     0,   490,   492,
       0,   514,     0,   700,     0,     0,     0,     0,     0,     0,
       0,   346,     0,   443,   437,     0,     0,     0,     0,     0,
     438,     0,     0,   442,     0,   434,   435,   436,   439,   457,
     351,   355,   356,   394,     0,   345,   402,   352,   354,   116,
     395,   403,   399,   398,   400,   396,   401,     0,     0,     0,
     703,     0,     0,    95,   366,     0,    91,    95,    92,   325,
     327,   329,   328,    95,     0,   700,   499,     0,   506,   523,
      22,    21,    19,    20,    16,    17,    23,    31,    30,     0,
     700,    36,    12,   563,     0,   563,     0,     0,   480,   478,
     314,   312,     0,     0,   246,   364,     0,   234,   233,   239,
     236,   251,   249,   323,   324,   365,   253,   359,   358,   362,
     357,   363,   516,   512,   472,   559,     0,   558,   534,   476,
     474,   121,   100,     0,   104,     0,    96,     0,    98,    99,
     126,   486,   115,   385,   390,   392,     0,   458,   388,   387,
     347,     0,     0,     0,     0,   411,   349,   348,   386,   350,
       0,   415,   404,     0,   440,     0,     0,     0,   447,   448,
       0,   353,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   375,   373,   413,   699,     0,
     536,     0,    94,     0,     0,     0,   117,   326,     0,    84,
      83,    86,    85,   340,   517,     0,     0,    29,    37,   115,
       0,    35,     0,     0,   537,   679,   683,   537,   316,     0,
       0,   361,   360,     0,   231,   235,   241,   238,     0,     0,
     560,   242,   101,   102,   106,   105,   119,   108,     0,   491,
     136,     0,   485,    95,    82,   389,     0,     0,     0,     0,
     422,   416,   418,     0,   441,   343,     0,   342,   452,   450,
     451,   449,   370,   369,   371,   380,   378,   379,   377,   382,
     372,   381,   384,   383,   368,     0,     0,   397,   414,     0,
       0,   126,     0,   330,   126,   118,   126,     0,   341,     0,
      18,     0,   108,   556,     0,     0,   569,     0,   551,     0,
       0,     0,   533,   690,   696,   697,   695,     0,   684,   685,
       0,   691,   532,   322,     0,   319,   321,   311,   310,     0,
     256,   309,   331,   333,   332,   247,   334,   337,   336,   335,
     240,   237,   252,   255,   250,   351,     0,   185,   243,   244,
     103,   107,   242,     0,    97,   127,   137,   139,   115,     0,
      95,   408,   407,   405,   406,     0,   424,   412,   423,   421,
       0,   417,   344,     0,   374,   535,   490,    88,   367,    90,
      77,   339,   338,    45,     0,    52,     0,     0,    38,    42,
     503,     0,     0,     0,     0,     0,   663,    34,     0,     0,
     680,     0,   682,     0,     0,   315,   320,   317,     0,   313,
       0,     0,     0,   242,   122,   205,     0,     0,   216,     0,
       0,     0,   242,   190,   189,   192,   191,   194,   193,   242,
       0,   109,     0,     0,     0,   159,   487,   270,     0,   432,
     425,   431,     0,   427,   420,   419,     0,   482,    59,     0,
      60,    57,     0,    54,    53,     0,     0,    49,     0,   583,
       0,     0,   506,   506,     0,     0,     0,     0,   693,   694,
     654,   655,   591,   590,   557,     0,   586,   592,   593,   589,
     609,   666,   616,   614,   651,   657,   692,   653,     0,   665,
       0,     0,     0,   662,   552,     0,   538,   545,     0,   546,
       0,     0,     0,   540,   686,   687,   688,   311,   260,   318,
     258,   268,   257,   263,   270,     0,   188,   242,     0,   214,
       0,   216,   210,   211,   409,   202,   213,    95,   197,   195,
     198,   218,   242,   186,     0,   245,   120,     0,     0,     0,
     128,   129,   135,   133,   134,   138,   140,   161,   115,   115,
     156,   153,   123,   160,     0,     0,   126,   242,   430,     0,
     426,   376,    62,    61,     0,    63,     0,    39,     0,    58,
       0,     0,     0,     0,   652,     0,     0,     0,     0,     0,
     618,   621,   620,   619,   587,   584,     0,   617,     0,     0,
     675,   664,     0,   566,   564,   681,   542,   543,   544,   548,
     547,     0,   539,     0,     0,     0,   269,     0,   183,   206,
       0,     0,   215,   212,     0,     0,     0,   242,     0,   222,
     187,   207,   111,   115,   110,     0,     0,     0,   130,   150,
       0,   155,   158,   159,   157,   159,   154,   271,   391,   270,
       0,   429,   428,     0,     0,    68,    64,     0,    65,    69,
      70,    71,    55,    49,    56,     0,     0,     0,    43,     0,
     603,     0,     0,     0,     0,   561,     0,   641,   585,     0,
       0,   607,   629,     0,   650,   615,   624,   627,   648,     0,
     676,   677,   567,   570,     0,   541,   689,   259,   267,   266,
     265,   264,   248,    82,   270,   209,   410,   203,   270,   196,
     445,   446,   199,   444,     0,   219,   242,   113,     0,   112,
     131,   132,   151,   152,   141,   142,     0,   149,   147,   148,
     166,     0,   164,   167,   124,   125,     0,     0,   433,    67,
      66,    46,    40,     0,     0,     0,     0,   242,   594,     0,
       0,     0,   596,   562,     0,   622,   588,   667,   672,     0,
       0,     0,     0,   669,     0,   649,   625,     0,   656,     0,
     570,   565,   549,    95,   182,   242,   217,     0,     0,     0,
       0,     0,   224,    95,   208,   115,   143,     0,     0,   146,
     162,   165,   275,     0,     0,   304,   305,   306,   307,   308,
       0,     0,     0,   284,     0,   286,     0,   288,     0,     0,
       0,     0,     0,   293,   294,   296,     0,   299,     0,   273,
     301,   393,     0,     0,     0,    51,    50,     0,   604,   610,
     666,     0,   666,     0,   595,     0,   642,   644,   645,   673,
     671,   674,     0,   668,   597,   608,     0,   600,     0,   638,
     628,   639,   633,   678,   568,   573,   571,     0,   204,   200,
       0,   229,   228,   302,   226,   223,   225,     0,   114,     0,
       0,   168,   279,   277,   278,   276,   280,   281,   282,   283,
     285,   287,   289,     0,   292,   291,     0,     0,     0,   272,
       0,    75,    72,    41,    74,    48,    47,    44,     0,     0,
     605,   666,     0,     0,   623,   670,   601,   598,   626,   631,
       0,   630,   641,   574,     0,   126,   242,   227,     0,   220,
     144,   145,     0,     0,   169,   170,     0,     0,     0,     0,
     274,     0,   242,   611,   613,   606,     0,   646,   647,   599,
       0,     0,   640,   634,     0,     0,   201,   303,   242,   180,
     181,     0,   173,   176,   177,   178,   175,   179,   163,   171,
     290,   295,     0,     0,   300,     0,     0,   643,   602,   639,
     645,   575,   270,   221,   172,   174,     0,     0,    73,   612,
     632,   635,     0,   577,   184,   298,   297,   658,     0,     0,
     572,   636,   659,   660,     0,     0,   666,   661,   576,   581,
       0,   579,   637,   582,     0,   578,   580
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    89,     5,     6,    51,   108,   254,   255,    52,
     109,   158,    20,   264,   159,   261,   461,   548,   813,   972,
     617,   897,   549,   733,   612,   613,   614,   609,   724,   807,
    1043,  1082,    90,   149,   768,   243,   244,   370,    92,   143,
      93,   144,   237,    94,   142,   180,   306,   307,   308,   309,
     514,   697,   784,   785,   134,   135,   454,   310,   512,   401,
     409,   410,   592,   700,   701,   517,   593,   595,   789,   874,
     875,   876,   795,   710,   793,   711,   712,   713,   790,  1021,
     881,   882,  1073,  1074,  1075,  1101,  1102,   769,   853,   770,
     582,   583,   777,   584,   778,   927,  1066,   585,   775,   925,
     586,   677,   866,   587,   681,   686,   687,   588,   779,   933,
    1098,   865,   931,   932,   124,   170,   276,   277,   278,   507,
     508,   279,   393,   571,   509,   399,   398,   502,   489,   570,
     764,   672,   673,   715,   886,   968,   969,  1012,   970,   490,
     281,   390,   389,   569,   484,   674,   282,   238,   239,   491,
     495,   371,   372,   213,   214,   215,   216,   217,   218,   284,
     285,   364,   422,   446,   445,   413,   414,   357,   220,   704,
     774,   221,   420,   447,   332,   423,   527,   528,   602,   603,
     717,   222,   223,   224,   862,   340,   341,   225,    79,   226,
      21,    22,    23,    24,   130,    25,   177,    26,   122,    27,
     167,    28,   140,    29,    30,    31,    32,    33,   181,    70,
      64,   127,   152,    82,   262,    71,    60,    34,    35,    65,
      36,    72,   172,    37,    38,    39,   155,    40,    41,    42,
      43,    44,   472,   662,   663,   760,    45,   265,   558,    61,
      46,   263,   551,    47,   632,   633,   380,   843,   920,   921,
    1006,  1064,  1133,  1140,  1150,  1151,   634,   635,   829,   636,
     637,   638,   995,   996,  1090,   639,   899,   914,   978,  1116,
     979,   640,   749,   641,   642,   827,   988,   835,   998,   836,
     917,  1000,  1091,  1001,  1062,  1120,  1137,  1146,  1061,   905,
    1054,   837,   643,   644,  1141,  1142,   466,   650,   748,   912,
     913,   839,   840,   384,   385,   387,   477,   478,   479,   665,
     480,   645,   646,   647,   153,    84,   105
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -961
static const yytype_int16 yypact[] =
{
      54,  -961,   -62,   105,  -961,  1108,    36,  -961,  -961,    86,
      24,   613,  -961,    29,    24,   362,    24,   189,   187,  -961,
     419,   479,  -961,  -961,  -961,  -961,  -961,  -961,  -961,  -961,
    -961,  -961,  -961,  -961,    -3,  -961,  -961,  -961,    24,    66,
    -961,  -961,  -961,  -961,  -961,  -961,  -961,  -961,  -961,    37,
    -961,  -961,  -961,    78,  -961,   496,  -961,  -961,   181,   176,
     253,   293,   302,   253,  -961,   410,   847,   163,  -961,  -961,
    -961,   253,   410,   309,   257,  -961,  -961,  -961,  -961,  -961,
     341,   405,  -961,  -961,  -961,  -961,  -961,  -961,   313,   282,
    -961,  -961,  -961,  -961,  -961,    24,    29,    24,   362,  -961,
    -961,  -961,    80,   335,  -961,  -961,  -961,  -961,   315,   389,
     239,  -961,  -961,  -961,  -961,  -961,   478,   239,  -961,   239,
    -961,  -961,   410,  -961,   439,   452,    19,  -961,   503,  -961,
     410,  -961,   394,  -961,   163,  2839,   387,   239,   454,   528,
     519,  -961,  -961,   410,   337,  -961,  -961,  -961,  -961,  -961,
     296,  -961,   434,  -961,  -961,   622,   956,    22,  -961,    13,
     567,  -961,  -961,  -961,  -961,  -961,   -75,   410,  -961,   277,
    1981,   410,   394,  -961,   310,   239,   239,   410,   277,  -961,
     283,  -961,   538,   253,  2839,  2428,   580,  2839,  2839,   595,
     599,  -961,   620,  -961,  -961,   626,   647,   478,   650,   653,
    -961,  2839,   657,  -961,    88,  -961,  -961,  -961,    45,  -961,
    -961,  -961,  -961,  -961,  2480,  -961,    56,  -961,  -961,  3512,
    -961,  -961,  -961,  -961,  -961,  -961,  -961,   643,   553,   239,
    -961,   410,   283,  -961,  -961,  2839,  -961,  -961,   246,  -961,
      56,  -961,  -961,  -961,  2663,    80,  -961,   383,    24,  -961,
    -961,  -961,  -961,  -961,   680,  -961,  -961,  -961,   517,   478,
     253,  -961,  -961,  -961,   692,  -961,   639,   693,  -961,  -961,
     695,   580,   367,   367,  -961,  -961,   702,   706,  1981,  -961,
    -961,  -961,  -961,    56,  -961,  -961,  -961,  -961,  -961,  -961,
    -961,  -961,  -961,  -961,  -961,  -961,   239,  -961,  -961,  -961,
    -961,  -961,   629,    -9,   631,   716,  -961,   478,  -961,  -961,
     678,   601,  -961,  1663,  -961,  -961,  1887,  -961,  -961,  -961,
    -961,   286,  2839,  2839,  2839,  -961,  -961,  -961,  1663,  -961,
    2825,  -961,  -961,   478,  -961,   734,  2839,  2875,  -961,  -961,
      47,  -961,  2839,  2839,  2839,  2839,  2839,  2839,  2839,  2839,
    2839,  2839,  2839,  2839,   585,  -961,  -961,    88,  -961,   660,
    -961,   689,  -961,   283,  2839,  2951,   283,  -961,   283,  -961,
    -961,   762,  2839,  3037,  -961,   433,   956,  -961,  -961,  -961,
      81,  -961,   114,   598,    61,  -961,   134,   671,  -961,  2287,
     173,  -961,  -961,   300,  -961,  1981,  -961,  -961,  1436,   173,
    -961,  2165,  -961,   694,   703,  -961,  -961,   701,   767,  -961,
     742,   699,  -961,  -961,  -961,  -961,   572,  3242,  3341,  3359,
     102,  -961,  3512,   638,  -961,  -961,  3377,  -961,  -961,  -961,
    -961,  -961,  1663,  2775,  2056,   894,   894,   894,   894,   360,
    2056,   360,  -961,  -961,  -961,   801,  2839,  -961,  -961,   239,
     410,   678,  2532,  -961,   678,  -961,   678,  2839,  3512,  2839,
    -961,   602,   701,  -961,   -16,    35,  -961,   237,  -961,   693,
     639,   807,  -961,  -961,  -961,  -961,  -961,   800,   817,  -961,
     418,  -961,  -961,  -961,  2203,  -961,  -961,   651,  -961,   594,
    -961,  -961,    56,  -961,  -961,  -961,    56,  -961,  -961,  -961,
    -961,  -961,  -961,   802,   802,   819,   804,   476,  -961,   820,
    -961,  -961,  2165,   815,  -961,  -961,  -961,   725,  -961,   283,
    -961,  -961,  -961,  -961,  -961,  2643,  -961,  -961,  -961,  -961,
    1753,  -961,  -961,  2839,  1163,  -961,   277,  -961,  -961,  -961,
    -961,  3512,  3512,  -961,   619,   662,   768,   619,  -961,  -961,
    -961,  2999,    49,   803,   806,   673,  -961,  -961,  2999,   731,
    -961,   544,  -961,   134,   418,  -961,  -961,  -961,   159,  -961,
    1937,   832,   276,  2165,  -961,  -961,   753,   300,  -961,   317,
     756,   239,  2039,  -961,  -961,  -961,   700,  -961,  -961,  2257,
     827,  -961,   887,  2839,   812,    41,  -961,   752,   283,  -961,
    -961,  3512,   714,  -961,  -961,  3512,   755,  -961,  -961,    82,
    -961,   851,   837,   853,   691,   857,   859,   787,   850,  -961,
     789,   310,    24,    24,  1532,  1532,  1532,  1532,  -961,  -961,
    -961,  -961,  -961,  -961,  -961,   348,  -961,  -961,  -961,  -961,
    -961,   543,  -961,  -961,  -961,  -961,  -961,   865,   718,  -961,
     854,   707,   712,  -961,  -961,   418,  -961,  -961,   239,  -961,
     371,   723,   120,  -961,  -961,  -961,   791,  1417,  -961,  -961,
    -961,  -961,   885,  -961,   752,  2257,  -961,  2073,  2839,  -961,
     830,  -961,  -961,  -961,  -961,  -961,  -961,  -961,  -961,  -961,
    -961,  -961,  2165,  -961,   888,  -961,  -961,    62,  2839,  2839,
     887,  -961,    56,  -961,  -961,  3512,  -961,  -961,  -961,  -961,
     794,   825,  -961,  -961,   898,   895,   678,  2165,  -961,  1474,
    -961,  -961,  -961,  -961,   940,  -961,   751,  -961,   757,  -961,
     619,   619,   914,   918,  -961,   855,    38,   239,   845,   327,
    -961,  -961,  -961,  -961,   916,  -961,   925,  -961,   928,  1085,
     504,  -961,   769,  -961,  -961,  -961,  -961,  -961,  -961,  -961,
     797,   375,  -961,   844,  1937,  1867,  -961,   926,  -961,  -961,
     929,  3402,  -961,  -961,    88,   939,   283,  2073,   112,   938,
    -961,  -961,  -961,  -961,  -961,   254,  3420,  3438,  -961,  1153,
     591,  -961,  -961,   915,  -961,   915,  -961,  -961,  -961,   752,
     932,  -961,  -961,   367,   367,  -961,  -961,   934,  -961,  -961,
    -961,  -961,  -961,   787,  -961,    82,    82,   662,  -961,   239,
    -961,   836,   811,   889,   879,  -961,   239,   920,  -961,  3030,
     244,  -961,  -961,   946,  -961,   949,  -961,  -961,  -961,   952,
     968,  -961,  -961,  -961,   816,  -961,  -961,   885,  -961,  -961,
    -961,  -961,  -961,  -961,   752,  -961,  -961,  -961,   752,  -961,
    -961,  -961,  -961,  -961,    28,  -961,  2073,  -961,   808,  -961,
    -961,  -961,  -961,  -961,   611,  -961,    44,    56,  -961,  -961,
    -961,    52,  -961,  -961,  -961,  -961,  3474,   960,  -961,  -961,
    -961,  -961,  -961,   940,   940,   271,    32,  2165,  -961,  2217,
     239,   860,   239,  -961,   408,  -961,  -961,  -961,  -961,   821,
     923,   813,   275,  -961,  3128,  -961,  -961,  1133,  -961,   504,
    -961,   858,  -961,  -961,  -961,  2073,  -961,   974,   823,    73,
     956,   101,  -961,  -961,  -961,  -961,  -961,  2839,  2839,  -961,
    -961,  -961,  -961,   573,   286,  -961,  -961,  -961,  -961,  -961,
     286,  2839,   824,  -961,   831,  -961,   833,  -961,   286,   982,
    2839,  2839,   983,  -961,  -961,  -961,   984,  -961,   331,  -961,
     985,  -961,  1651,   979,   980,  -961,  -961,   986,  -961,  -961,
     543,  1814,   903,   239,  -961,   989,  -961,  -961,   931,  -961,
    -961,  -961,   186,  -961,  -961,  -961,   431,  -961,  1085,  -961,
    1005,   981,  -961,  -961,   858,   862,  -961,   283,  -961,  -961,
     956,  -961,  1009,    56,   680,  -961,  -961,   311,  -961,  3463,
    3481,  1003,  -961,  -961,  -961,  -961,    56,    56,  3512,  -961,
    -961,  -961,    56,   286,  3512,  3512,   286,   521,  3474,  -961,
    2839,  -961,  -961,  -961,  3512,  -961,  -961,  -961,  1010,  1133,
    -961,   903,   861,   574,  -961,  -961,  1004,  -961,  -961,  -961,
     239,  -961,   920,  -961,   943,   678,  2073,   680,   286,  -961,
    -961,  -961,  2465,  1007,  1003,  -961,   345,   365,  1012,   715,
    -961,   795,  2165,  -961,  -961,  -961,  1013,  -961,  -961,  -961,
    3169,  1133,  -961,  -961,   504,  1008,  -961,    56,  2073,  -961,
    -961,  1558,  -961,  -961,  -961,  -961,  -961,  -961,  -961,  -961,
    -961,  -961,   999,  1000,  -961,  1021,  3128,  -961,  -961,   981,
     931,   942,   752,  -961,  -961,  -961,   286,   286,  -961,  -961,
    -961,  -961,  1032,   944,  -961,    56,    56,   899,   504,  1038,
    -961,  -961,   899,  -961,   381,   882,   903,  -961,  -961,   897,
     468,  -961,  -961,  -961,   882,  -961,  -961
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -961,  -961,  -961,  -961,  -961,  -961,  -961,  -862,   690,  -961,
    -961,  -961,  -961,  -961,   686,  -961,  -961,  -961,  -961,  -961,
    -961,  -961,  -961,   255,  -961,   252,   258,  -500,  -311,  -294,
    -961,  -961,  -961,  -961,    30,  -397,  -961,  -961,  -961,  -961,
    -961,  -961,  -961,  -961,  -961,  -126,  -961,  -961,  -961,  -961,
     608,  -961,  -961,  -961,   -79,  -961,  -961,  -231,  -961,  -961,
    -444,  -961,  -961,  -961,   376,  -961,  -961,  -961,  -961,  -961,
     197,  -961,  -961,   372,  -961,   377,  -705,  -961,  -961,  -961,
    -961,   201,  -961,  -961,    18,  -961,   -11,  -742,  -961,  -396,
    -961,  -961,  -961,  -961,  -961,  -961,  -961,  -961,  -961,  -961,
    -961,  -961,  -961,  -961,  -961,   412,  -961,  -961,  -961,  -961,
    -961,  -961,  -961,   164,     8,  -961,  -961,  -961,  -961,   505,
     421,  -214,  -961,  -961,  -137,  -961,  -961,  -961,   226,  -961,
    -961,   334,   336,  -663,  -961,  -961,    65,  -641,  -961,  -372,
    -365,  -961,  -961,  -961,  -961,  -322,  -363,  -961,   870,  -961,
     523,  -961,  -961,  -961,  -961,  -961,   -86,  -147,  -961,  -961,
    -124,  -961,  1058,  -961,  -961,  -961,  -961,  -961,  -535,  -548,
    -961,  -155,  -961,  -961,  -351,  -531,  -961,  -961,  -961,   393,
    -961,   243,   453,   128,  -961,  -961,  -961,   -17,  -961,   696,
    -961,  1095,  -961,  -961,  -961,  -961,  -961,  -961,  -961,  -961,
    -961,  -961,  -961,  -961,  -961,  -961,  -961,  -961,  -132,  1050,
    1056,  1064,   876,  -961,  -961,   988,    11,  -961,  -961,  -961,
    -961,  -961,  -961,  -961,  -961,  -961,  -961,   969,  -961,  -961,
    -961,  -961,   738,  -961,   366,  -961,  -961,  -961,  -961,   -48,
    -961,  -961,  -961,  -961,    58,  -961,   868,  -961,  -961,   215,
    -961,  -961,  -961,  -961,  -961,   -10,   588,  -961,  -961,   314,
    -961,  -961,    31,  -961,  -961,  -871,  -961,  -961,  -961,  -961,
    -961,  -961,  -961,   249,  -619,  -961,  -961,  -961,  -961,   140,
    -961,  -961,  -961,  -960,  -961,  -961,  -961,  -961,    33,    87,
      39,   170,  -855,  -595,  -961,  -961,  -801,  -961,  -909,  -961,
     166,  -961,    17,  -961,   697,   704,  -961,  -961,   600,   507,
    -961,  -731,  -341,    -4,    16,   -52,  -961
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -501
static const yytype_int16 yytable[] =
{
      78,   362,   606,   115,   141,   506,   448,   537,   118,   256,
     539,   766,   540,    80,   115,   286,   232,   520,   128,   841,
     241,    55,   747,   257,   483,    66,   486,    73,   683,   740,
     741,   742,   743,   280,    83,   859,   162,   269,   106,   165,
     293,   682,   168,   997,   981,   481,   300,   616,   428,   102,
      91,   555,   179,   333,   182,     1,   976,   703,   240,   403,
     937,   938,  1002,    48,   396,   648,   940,   485,  1014,   259,
     470,  1048,   820,  1050,   246,    49,   103,   266,   338,   121,
     132,    62,   707,   928,   283,   339,   782,   131,   884,  1084,
     885,    50,   267,    78,   294,   463,     4,    63,   115,   163,
      78,  1011,    78,   929,   330,     7,   161,   363,   150,   552,
     174,   366,   722,   164,   241,   166,   590,   368,   525,   483,
      78,   486,   296,   286,   934,  1015,   708,   242,   468,   761,
     169,  1119,   451,   228,   151,   455,   887,   456,   178,   564,
     860,   397,  1085,   404,   762,   175,   709,    54,  1067,   464,
      81,   233,   240,   290,   838,   101,   928,    78,    78,    78,
     667,   553,   566,   554,   234,   703,   861,   260,   471,   668,
     295,   297,   298,   987,   487,   268,   929,   676,   234,   292,
     325,   500,   464,  1008,   669,   299,   693,   331,  1003,   488,
     821,   924,   283,   258,  1002,   926,   670,    53,   930,   312,
     670,   526,   556,   488,   110,   483,   729,   486,   939,   473,
     107,     2,    78,    48,   334,   315,   649,   429,   430,  1118,
     431,   242,   481,   666,   104,   360,   880,   211,   212,   256,
     815,   816,   783,   412,   465,   416,  1002,  1152,    68,   361,
     286,   879,   378,    69,  -500,   997,   286,   210,   211,   212,
     908,   234,    75,    76,   878,    77,   723,    81,   501,   375,
     557,   290,   235,   868,   116,   474,   493,   465,   907,   497,
      74,   930,   799,   136,   493,   493,   379,   667,   869,    78,
     728,   234,    75,    76,   992,    77,   668,   519,   597,   475,
     407,   -95,   400,   259,   909,   975,   780,   301,   289,   993,
     462,   137,   117,   283,   492,   234,   488,   496,   908,   283,
     910,   476,   492,   492,   666,   283,   424,   186,   688,   758,
     160,   800,  1088,    81,  1096,  1069,   879,   128,   111,    75,
      76,   689,    77,   210,   211,   212,  1143,   119,   911,   878,
    1038,  1147,   234,    75,    76,   -95,    77,   210,   211,   212,
     112,   302,   909,   235,  1068,  1039,  1123,   286,   744,    75,
      76,   747,    77,  1121,   145,   236,    81,   716,   910,  1110,
      63,   745,   290,   494,  1068,   146,   498,   -95,   290,   302,
      81,   494,   494,   303,   290,   125,   838,   352,   353,  1111,
     919,   160,  1076,   113,   598,  1077,   911,    81,   283,   483,
     483,   486,   486,   838,   607,  1148,   289,   841,   160,    75,
      76,   303,    77,   287,    67,   657,    75,    76,   286,    77,
     210,   211,   212,   856,   123,   147,   283,   286,   658,   -95,
     -95,   133,    78,   659,   286,   304,   305,    68,   824,   596,
     148,  1056,    69,   194,   493,   535,    75,    76,   493,    77,
     210,   211,   212,   497,  1057,    85,   923,   660,   536,  1134,
     210,   211,   212,   304,    56,   200,    86,   290,   138,    57,
      75,    76,   209,    77,   210,   211,   212,  1154,   139,    87,
      75,    76,   492,    77,   283,   156,   492,   283,   661,   985,
     575,   496,  1155,   154,    59,   290,   283,    75,    76,   157,
      77,   977,   474,   283,   893,   894,   702,    75,    76,  1081,
      77,   210,   211,   212,    56,   391,   392,   289,   171,    57,
     286,   287,   286,   289,    10,    95,   475,   610,   111,   289,
     610,   205,   206,   207,    78,   173,    96,   286,   757,   474,
      88,    78,    97,   576,   126,   858,   577,   176,   476,   474,
     112,   494,  -490,   290,   227,   494,   290,   229,    98,   684,
     498,   776,   286,   475,    78,   290,    81,    16,   656,   737,
     578,   230,   290,   475,    18,   684,   231,   691,    75,    76,
     245,    77,   579,   136,   657,   476,   628,   580,   629,   283,
     311,   283,   725,   113,   338,   476,   521,   658,   581,   973,
     974,   339,   659,   543,    78,   317,   283,    78,    78,    78,
      78,   320,   289,   624,   702,   321,   544,   736,   545,   567,
     568,  1095,   286,   288,   503,   504,   660,  -150,  -150,   791,
     792,   283,   287,   738,   739,   474,   322,    99,   287,   529,
     289,    78,   323,   883,   287,   625,   872,   530,    75,    76,
     746,    77,   626,   190,   756,     9,   546,   661,   290,   475,
     290,  -262,   531,   324,   192,  -262,   326,   358,   247,   327,
     873,   627,   547,   329,  -262,   290,  -262,  -262,   283,   283,
     359,   476,   628,   684,   629,   248,  1115,   826,  1078,   376,
     377,   283,   195,   196,    56,   210,   211,   212,   289,    57,
     290,   289,    58,   877,   867,   474,   381,   811,   383,   386,
     289,   286,    17,   610,   610,   718,   395,   289,  -262,   388,
      78,  -262,    78,   719,    59,   394,   402,   287,   405,   475,
     406,   288,    78,   822,   883,   825,    54,   338,   720,  1113,
    1022,  1087,   286,  1023,   339,  -262,  1024,   290,   290,   408,
    1025,   476,   628,   411,   629,   287,   529,  -262,   425,   444,
     290,   863,  -262,   449,   530,   880,   211,   212,   450,   678,
     286,   457,   684,  -262,   204,  -150,  1065,   469,   471,   721,
     283,    75,    76,   256,    77,   210,   211,   212,   877,    75,
      76,   510,    77,   608,   630,   190,   529,  1007,   725,   725,
     511,   630,    78,   289,   530,   289,   192,  1017,   513,    78,
     515,   283,    78,   287,   516,   898,   287,   533,   679,  1114,
     289,   518,   903,   561,   562,   287,   563,   574,   572,   573,
     589,   591,   287,   594,   195,   196,   611,   651,   615,   283,
     652,   653,   288,  1013,   655,   289,   675,   690,   288,   290,
     696,   694,   810,   680,   288,   706,  1018,   684,  1026,   714,
     726,   727,   728,   256,  1027,   729,   291,   630,   630,   630,
     630,   730,  1032,   731,   732,   734,   811,   811,   735,   111,
     290,   750,    78,    78,   753,    78,   751,   986,   752,   754,
     759,   763,   289,   289,   765,   772,   982,    78,   984,   709,
      78,   112,   781,   698,   699,   289,  -501,  -501,   290,  -501,
     708,   286,  -501,   349,   797,   351,   204,    81,   287,   798,
     287,   352,   353,    75,    76,   812,    77,   286,    56,   190,
     817,   814,   818,    57,   823,   287,   125,   288,   819,   828,
     192,   830,   831,   286,   113,   846,   842,  1013,   844,   852,
    1013,  1079,   854,   857,   864,   888,   707,   891,   126,   803,
     287,   804,   900,   901,    78,   288,    78,   808,   195,   196,
     174,   915,   902,   904,   291,   916,   918,   919,   935,  1051,
     283,    78,  1097,   922,   971,   989,   983,   990,  1009,  1005,
     991,  1029,   630,  1010,   289,  1030,   283,  1031,  1033,  1036,
    1037,  1040,  1045,  1046,   631,  1052,   193,   287,   287,  1047,
     746,   631,   283,  1053,  1059,  1060,   194,  1063,  1068,  1072,
     287,   810,   810,   288,  1083,   289,   288,  1089,  1086,  1094,
    1108,  1122,    78,  1126,  1127,   288,  1112,  1117,   200,   805,
    1135,  1136,   288,    78,  1128,  1132,   889,   890,  1138,   290,
     204,  1139,   465,   289,  1145,  1106,  1092,    75,    76,  1149,
      77,   210,   211,   212,  1153,   290,   460,   467,   892,   895,
     550,   936,   630,    78,    78,   896,   788,   631,   631,   631,
     631,   290,   941,   796,  1106,   291,   832,   794,   203,   499,
    1125,   291,  1109,   773,   695,  1016,   767,   291,   847,    78,
     685,   851,   833,  1080,   205,   206,   207,   208,   367,   287,
      75,    76,   802,    77,   806,   834,   100,   129,   120,   114,
     250,   374,   183,   251,   249,   482,   252,   845,   288,   253,
     288,   211,   212,   382,   999,  1004,   808,   808,  1058,     8,
     287,     9,   630,   906,  1156,   288,   654,  1129,   980,  1093,
     618,  1049,  1130,    10,    11,  1144,    12,   630,  1055,  1131,
     630,   194,   755,   664,     0,    13,   160,   560,   287,     0,
     288,    14,     0,   559,     0,   345,   346,   809,   347,     0,
     291,   348,   349,   200,   351,     0,     0,    15,   872,     0,
     352,   353,     0,   219,   289,   190,    16,     0,    17,     0,
    1105,     0,   631,    18,    19,     0,   192,     0,   291,   194,
     289,     0,   873,     0,   160,     0,   474,   288,   288,     0,
       0,     0,     0,     0,   630,     0,   289,     0,     0,  1105,
     288,   200,     0,     0,   195,   196,     0,     0,  -501,     0,
     475,   630,   313,   316,     0,   318,   319,  -501,     0,   205,
     206,   207,   208,     0,     0,    75,    76,     0,    77,   328,
       0,     0,   476,   628,   474,   629,   291,     0,     0,   291,
       0,     0,   337,   499,     0,     0,     0,     0,   291,     0,
       0,     0,   631,     0,     0,   291,     0,     0,   475,     0,
       0,     0,   630,   365,     0,     0,     0,   205,   206,   207,
     208,     0,   373,    75,    76,     0,    77,     0,     0,   287,
     476,   628,     0,   629,     0,  1103,   204,     0,     0,   288,
       0,     0,     0,    75,    76,   287,    77,   210,   211,   212,
       0,     0,     0,   630,   630,     0,     0,     0,     0,     0,
       0,   287,     0,     0,  1103,     0,   809,   809,     0,     0,
     288,     0,   631,     0,     0,     0,     0,     0,     0,   630,
       0,     0,     0,     0,     0,     0,     0,   631,     0,     0,
     631,   291,     0,   291,     0,     0,     0,     0,   288,     0,
     417,   418,   419,     0,     0,     0,     0,     0,   291,     0,
       0,     0,     0,     0,   426,     0,     0,     0,     0,     0,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,     0,   291,     0,     0,     0,     0,     0,     0,
       0,     0,   452,     0,     0,     0,     0,  -261,     0,     0,
     458,  -261,     0,     0,   631,     0,     0,   487,     0,     0,
    -261,   234,  -261,  -261,     0,     0,  -254,     0,     0,     0,
    -254,   631,     0,     0,     0,     0,     0,     0,     0,  -254,
     291,   291,     0,     0,     0,     0,   488,     0,     0,     0,
       0,     0,     0,   291,     0,   801,     0,     0,     0,     0,
     184,     0,     0,     0,  -261,     0,     0,  -261,   599,     0,
     185,   186,     0,   187,     0,   188,     0,     0,     0,     0,
       0,     0,   631,  -254,   534,     0,  -254,     0,     0,     0,
       0,  -261,   189,     0,     0,   541,   190,   542,     0,   288,
       0,     0,     0,  -261,   191,  1104,     0,   192,  -261,     0,
    -254,     0,     0,     0,     0,   288,     0,     0,     0,  -261,
     193,     0,  -254,   631,   631,     0,     0,  -254,     0,     0,
     194,   288,     0,     0,  1104,   195,   196,     0,  -254,     0,
       0,     0,   291,   197,     0,     0,   198,   199,     0,   631,
       0,     0,   200,     0,   201,   186,     0,     0,     0,     0,
       0,     0,  1124,   601,     0,     0,     0,     0,   605,     0,
       0,     0,     0,   291,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   202,     0,     0,    75,    76,   194,    77,
     210,   211,   212,   160,     0,     0,     0,     0,     0,     0,
       0,   291,   203,     0,   193,     0,     0,     0,     0,     0,
     200,     0,     0,     0,   194,     0,     0,   204,   205,   206,
     207,   208,     0,     0,    75,    76,   209,    77,   210,   211,
     212,   705,  1041,     0,     0,     0,   200,   184,     0,     0,
       0,     0,     0,   474,     0,  1042,     0,   185,   186,     0,
     187,     0,   188,     0,   344,   345,   346,     0,   347,     0,
       0,   348,   349,   350,   351,     0,     0,   475,     0,   189,
     352,   353,     0,   190,     0,     0,   205,   206,   207,   208,
       0,   191,    75,    76,   192,    77,   203,  1099,  1100,   476,
     628,     0,   629,     0,     0,     0,     0,   193,     0,     0,
       0,     0,   205,   206,   207,   208,     0,   194,    75,    76,
     209,    77,   195,   196,     0,     0,   771,     0,   355,     0,
     197,     0,     0,   198,   199,     0,     0,   356,     0,   200,
       0,   201,     0,     0,   604,     0,   786,   787,     0,   184,
       0,     0,   291,     0,     0,     0,     0,     0,  1107,   185,
     186,     0,   187,     0,   188,     0,     0,   601,   291,     0,
     202,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   189,     0,     0,   291,   190,     0,  1107,     0,   203,
       0,     0,     0,   191,     0,     0,   192,     0,     0,     0,
       0,     0,     0,     0,   204,   205,   206,   207,   208,   193,
       0,    75,    76,   209,    77,   210,   211,   212,     0,   194,
       0,   833,     0,     0,   195,   196,     0,     0,     0,     0,
       0,     0,   197,     0,   834,   198,   199,     0,     0,     0,
       0,   200,     0,   201,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   848,     0,
       0,     0,   234,     0,     0,     0,     0,   849,     0,     0,
       0,     0,   202,   270,   271,     0,   272,     0,   273,     0,
     194,   342,     0,   850,   343,   160,     0,     0,   344,   345,
     346,   203,   347,     0,     0,   348,   349,   350,   351,     0,
       0,   415,   200,     0,   352,   353,   204,   205,   206,   207,
     208,   354,     0,    75,    76,   209,    77,   210,   211,   212,
       0,     0,     0,   193,     0,     0,     0,     0,   671,     0,
       0,     0,   234,   194,     0,   474,     0,     0,     0,     0,
       0,     0,     0,   270,   271,     0,   272,     0,   273,     0,
       0,     0,   355,     0,     0,   200,   275,     0,     0,   475,
       0,   356,     0,     0,     0,     0,     0,     0,   205,   206,
     207,   208,     0,     0,    75,    76,   234,    77,     0,     0,
       0,   476,   628,     0,   629,  1019,  1020,   270,   271,     0,
     272,     0,   273,   193,     0,     0,     0,     0,     0,  1028,
       0,     0,     0,   194,     0,   203,     0,     0,  1034,  1035,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1044,   205,   206,   207,   208,   200,   275,    75,    76,   209,
      77,   210,   211,   212,   234,     0,     0,   193,     0,   692,
       0,   274,     0,     0,     0,   270,   271,   194,   272,     0,
     273,     0,     0,     0,     0,     0,     0,  -501,   345,   346,
     197,   347,     0,     0,   348,   349,  -501,   351,   234,   200,
     275,     0,     0,   352,   353,   203,     0,     0,     0,   270,
     271,     0,   272,     0,   273,     0,     0,     0,     0,     0,
       0,   205,   206,   207,   208,   193,     0,    75,    76,   209,
      77,   210,   211,   212,     0,   194,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   197,   203,
       0,   355,     0,     0,     0,     0,     0,   200,   275,   193,
     356,     0,     0,     0,     0,   205,   206,   207,   208,   194,
       0,    75,    76,   209,    77,   210,   211,   212,     0,     0,
       0,     0,   197,     0,     0,     0,     0,     0,     0,     0,
     234,   200,   275,     0,     0,     0,     0,     0,     0,     0,
       0,   270,   271,     0,   272,     0,   273,   203,     0,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,     0,
       0,     0,     0,   205,   206,   207,   208,     0,   234,    75,
      76,   209,    77,   505,   211,   212,     0,     0,     0,   270,
     271,   203,   272,     0,   273,     0,     0,   565,     0,     0,
       0,   193,     0,     0,   618,     0,     0,   205,   206,   207,
     208,   194,     0,    75,    76,   209,    77,   505,   211,   212,
       0,     0,     0,     0,   197,     0,     0,     0,     0,     0,
       0,     0,   234,   200,   275,     0,     0,     0,     0,   193,
       0,     0,     0,   270,   271,     0,   272,     0,   273,   194,
       0,     0,     0,     0,     0,     0,     0,   624,     0,     0,
       0,     0,   234,   194,     0,     0,     0,     0,   160,     0,
       0,   200,   275,   270,   271,     0,   272,     0,   273,     0,
       0,     0,     0,   203,     0,   200,     0,     0,     0,   625,
       0,     0,     0,   193,     0,     0,   626,     0,     0,   205,
     206,   207,   208,   194,     0,    75,    76,   209,    77,   505,
     211,   212,     0,     0,     0,   627,   197,     0,   474,     0,
       0,   203,     0,   193,     0,   200,   275,     0,     0,     0,
       0,     0,     0,   194,     0,     0,     0,   205,   206,   207,
     208,     0,   475,    75,    76,   209,    77,   210,   211,   212,
       0,   205,   206,   207,   208,   200,   275,    75,    76,     0,
      77,     0,     0,     0,   476,   628,     0,   629,     0,     0,
       0,     0,     0,     0,     0,   203,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   205,   206,   207,   208,     0,     0,    75,    76,   209,
      77,   210,   211,   212,   184,   203,     0,     0,     0,     0,
       0,     0,     0,     0,   185,   186,     0,   187,     0,   188,
       0,   205,   206,   207,   208,     0,     0,    75,    76,   209,
      77,   210,   211,   212,   314,     0,   189,     0,     0,     0,
     190,     0,     0,     0,     0,     0,     0,     0,   191,     0,
       0,   192,   186,     0,     0,     0,   184,     0,     0,     0,
       0,     0,     0,     0,   193,     0,   185,   186,     0,   187,
       0,   188,     0,     0,   194,     0,     0,     0,   335,   195,
     196,     0,     0,     0,     0,     0,     0,   197,   189,     0,
     198,   199,   190,     0,     0,     0,   200,     0,   201,     0,
     191,   193,     0,   192,     0,     0,   342,   538,     0,   343,
       0,   194,   336,   344,   345,   346,   193,   347,     0,    88,
     348,   349,   350,   351,     0,     0,   194,   202,     0,   352,
     353,   195,   196,   200,     0,     0,   354,     0,     0,   197,
       0,     0,   198,   199,     0,     0,   203,     0,   200,     0,
     201,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   204,   205,   206,   207,   208,     0,     0,    75,    76,
     209,    77,   210,   211,   212,     0,     0,   355,     0,   202,
       0,     0,     0,   203,  1099,  1100,   356,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   203,   205,
     206,   207,   208,     0,     0,    75,    76,   209,    77,     0,
       0,     0,     0,   204,   205,   206,   207,   208,     0,   184,
      75,    76,   209,    77,   210,   211,   212,   599,     0,   185,
     186,     0,   187,     0,   188,     0,     0,   600,     0,   184,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   185,
     186,   189,   187,     0,   188,   190,     0,     0,     0,     0,
       0,   369,     0,   191,     0,     0,   192,     0,     0,     0,
       0,   189,     0,     0,     0,   190,     0,     0,     0,   193,
       0,     0,     0,   191,     0,     0,   192,     0,     0,   194,
       0,     0,     0,     0,   195,   196,     0,     0,     0,   193,
       0,     0,   197,     0,     0,   198,   199,     0,     0,   194,
       0,   200,     0,   201,   195,   196,     0,     0,     0,     0,
       0,     0,   197,     0,     0,   198,   199,     0,     0,     0,
       0,   200,     0,   201,     0,     0,     0,     0,     0,     0,
       0,     0,   202,     0,     0,     0,     0,     0,     0,   342,
       0,     0,     0,     0,     0,     0,   344,   345,   346,     0,
     347,   203,   202,   348,   349,   350,   351,     0,     0,     0,
       0,     0,   352,   353,     0,     0,   204,   205,   206,   207,
     208,   203,     0,    75,    76,   209,    77,   210,   211,   212,
       0,     0,     0,     0,     0,     0,   204,   205,   206,   207,
     208,   184,     0,    75,    76,   209,    77,   210,   211,   212,
       0,   185,   186,     0,   187,   184,   188,     0,     0,   421,
     355,     0,     0,     0,     0,   185,   186,     0,   187,   356,
     188,     0,     0,   189,     0,     0,     0,   190,     0,     0,
       0,     0,     0,     0,     0,   191,     0,   189,   192,   342,
       0,   190,   343,     0,     0,     0,   344,   345,   346,   191,
     347,   193,   192,   348,   349,   350,   351,     0,     0,   427,
       0,   194,   352,   353,     0,   193,   195,   196,     0,   354,
       0,     0,     0,     0,   197,   194,     0,   198,   199,     0,
     195,   196,     0,   200,     0,   201,     0,     0,   197,     0,
       0,   198,   199,     0,     0,     0,     0,   200,     0,   201,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     355,     0,     0,     0,   202,   342,     0,     0,   343,   356,
       0,     0,   344,   345,   346,     0,   347,     0,   202,   348,
     349,   350,   351,   203,     0,   453,     0,     0,   352,   353,
       0,     0,     0,     0,     0,   354,     0,   203,   204,   205,
     206,   207,   208,     0,     0,    75,    76,   209,    77,   210,
     211,   212,   204,   205,   206,   207,   208,     0,     0,    75,
      76,   209,    77,   210,   211,   212,   618,     0,     0,     0,
       0,     0,   619,     0,     0,     0,   355,     0,     0,     0,
       0,     0,     0,     0,     0,   356,   620,     0,     0,     0,
       0,   342,     0,     0,   343,   621,   459,   618,   344,   345,
     346,     0,   347,     0,     0,   348,   349,   350,   351,     0,
     622,     0,   623,     0,   352,   353,     0,   620,     0,   624,
       0,   354,     0,     0,     0,   194,   621,     0,     0,     0,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   622,     0,   623,     0,     0,     0,   200,     0,     0,
     624,   625,     0,     0,     0,     0,   194,     0,   626,     0,
       0,   160,   355,     0,     0,     0,     0,     0,     0,     0,
       0,   356,     0,     0,     0,     0,     0,   627,   200,     0,
     474,     0,   625,     0,     0,     0,     0,     0,     0,   626,
       0,     0,     0,     0,     0,   618,     0,     0,     0,     0,
       0,   994,     0,     0,   475,     0,     0,     0,   627,     0,
       0,   474,     0,   205,   206,   207,   208,     0,     0,    75,
      76,     0,    77,     0,   621,     0,   476,   628,     0,   629,
       0,     0,     0,     0,     0,   475,   618,     0,     0,     0,
       0,     0,     0,     0,   205,   206,   207,   208,   624,     0,
      75,    76,     0,    77,   194,     0,     0,   476,   628,   160,
     629,     0,     0,     0,     0,   621,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   200,     0,     0,     0,
     625,     0,     0,     0,     0,     0,     0,   626,     0,   624,
       0,     0,     0,     0,     0,   194,   342,     0,     0,   343,
     160,     0,     0,   344,   345,   346,   627,   347,     0,   474,
     348,   349,   350,   351,     0,     0,   522,   200,     0,   352,
     353,   625,     0,     0,     0,     0,   354,     0,   626,     0,
       0,     0,     0,   475,     0,     0,     0,     0,     0,     0,
       0,     0,   205,   206,   207,   208,     0,   627,    75,    76,
     474,    77,     0,     0,     0,   476,   628,     0,   629,     0,
       0,     0,     0,     0,     0,     0,     0,   355,     0,     0,
       0,     0,     0,     0,   475,     0,   356,     0,     0,     0,
       0,     0,     0,   205,   206,   207,   208,     0,     0,    75,
      76,     0,    77,     0,     0,   342,   476,   628,   343,   629,
       0,     0,   344,   345,   346,     0,   347,     0,     0,   348,
     349,   350,   351,   342,     0,   523,   343,     0,   352,   353,
     344,   345,   346,     0,   347,   354,     0,   348,   349,   350,
     351,   342,     0,   524,   343,     0,   352,   353,   344,   345,
     346,     0,   347,   354,     0,   348,   349,   350,   351,     0,
       0,   532,     0,     0,   352,   353,   342,     0,     0,   343,
       0,   354,     0,   344,   345,   346,   355,   347,     0,     0,
     348,   349,   350,   351,   342,   356,   855,   343,     0,   352,
     353,   344,   345,   346,   355,   347,   354,     0,   348,   349,
     350,   351,   342,   356,   870,   343,     0,   352,   353,   344,
     345,   346,   355,   347,   354,     0,   348,   349,   350,   351,
       0,   356,     0,   871,     0,   352,   353,   342,     0,     0,
     343,     0,   354,     0,   344,   345,   346,   355,   347,     0,
       0,   348,   349,   350,   351,   342,   356,  1070,   343,     0,
     352,   353,   344,   345,   346,   355,   347,   354,     0,   348,
     349,   350,   351,     0,   356,     0,  1071,     0,   352,   353,
       0,     0,     0,   355,     0,   354,   342,     0,     0,   343,
       0,     0,   356,   344,   345,   346,     0,   347,     0,     0,
     348,   349,   350,   351,     0,     0,     0,     0,   355,   352,
     353,     0,     0,     0,     0,     0,   354,   356,   942,     0,
       0,     0,   943,     0,     0,     0,   355,     0,     0,     0,
       0,     0,     0,     0,     0,   356,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   944,     0,
       0,     0,     0,     0,     0,     0,     0,   355,   945,   946,
     947,   948,   949,   950,   951,     0,   356,     0,     0,     0,
       0,     0,     0,     0,   952,     0,   953,   954,   955,   956,
     957,   958,   959,   960,   961,   962,   963,   964,   965,   966,
       0,   967
};

static const yytype_int16 yycheck[] =
{
      17,   232,   533,    55,    83,   401,   357,   451,    60,   156,
     454,   674,   456,    17,    66,   170,   142,   414,    66,   750,
     144,    10,   641,     1,   389,    14,   389,    16,   576,   624,
     625,   626,   627,   170,    18,   777,   115,   169,     1,   118,
     172,   576,   121,   914,   899,   386,   178,   547,     1,    38,
      20,    16,   131,     8,   133,     1,    24,   592,   144,    68,
      16,    17,   917,     5,   278,    16,    14,   389,   930,    56,
       9,   980,    34,   982,   153,    39,    10,   152,    22,    63,
      72,    52,    41,    55,   170,    29,    24,    71,   793,  1049,
     795,    55,   167,   110,   173,    14,   158,    68,   150,   116,
     117,    28,   119,    75,    16,     0,   110,   233,    97,   125,
      91,   237,    30,   117,   238,   119,   512,   243,    16,   484,
     137,   484,   174,   278,   866,    24,    85,   144,    14,     9,
     122,  1091,   363,   137,    54,   366,   799,   368,   130,   480,
      28,   278,  1051,   152,    24,   126,   105,   123,  1010,    68,
      70,   143,   238,   170,   749,   158,    55,   174,   175,   176,
       1,   177,   484,   179,     5,   700,    54,   154,   107,    10,
     174,   175,   176,   904,     1,   167,    75,   573,     5,   171,
     197,   395,    68,   925,    25,   177,   582,    99,   919,    30,
     152,   854,   278,   171,  1049,   858,   568,   111,   170,   183,
     572,    99,   167,    30,   126,   570,   174,   570,   164,    75,
     173,   157,   229,   155,   169,   185,   167,   170,   171,  1090,
     173,   238,   563,   564,   158,   229,   174,   175,   176,   376,
     730,   731,   170,   312,   153,   321,  1091,  1146,    75,   231,
     395,   789,   259,    80,    57,  1116,   401,   174,   175,   176,
      64,     5,   170,   171,   789,   173,   174,    70,   395,   248,
      23,   278,    16,     9,    83,   131,   390,   153,    24,   393,
      81,   170,   716,    16,   398,   399,   260,     1,    24,   296,
       9,     5,   170,   171,     9,   173,    10,   413,   519,   155,
     307,    14,   296,    56,   108,    24,   692,    14,   170,    24,
     379,    44,   126,   389,   390,     5,    30,   393,    64,   395,
     124,   177,   398,   399,   655,   401,   333,    17,     1,   660,
      81,   717,  1053,    70,  1066,    14,   874,   375,    32,   170,
     171,    14,   173,   174,   175,   176,  1137,    44,   152,   874,
       9,  1142,     5,   170,   171,    68,   173,   174,   175,   176,
      54,    68,   108,    16,     9,    24,  1098,   512,    10,   170,
     171,   980,   173,  1094,    51,    28,    70,   598,   124,    24,
      68,    23,   389,   390,     9,    62,   393,   100,   395,    68,
      70,   398,   399,   100,   401,    89,   981,    27,    28,    24,
       9,    81,  1033,    97,   520,  1036,   152,    70,   484,   764,
     765,   764,   765,   998,   536,    24,   278,  1138,    81,   170,
     171,   100,   173,   170,    52,    40,   170,   171,   573,   173,
     174,   175,   176,   774,    14,   112,   512,   582,    53,   152,
     153,   122,   449,    58,   589,   152,   153,    75,   111,   518,
     158,    10,    80,    76,   568,   449,   170,   171,   572,   173,
     174,   175,   176,   577,    23,    36,   853,    82,   450,  1122,
     174,   175,   176,   152,    81,    98,    47,   484,   127,    86,
     170,   171,   172,   173,   174,   175,   176,     9,    73,    60,
     170,   171,   568,   173,   570,   170,   572,   573,   113,    81,
      14,   577,    24,   158,   111,   512,   582,   170,   171,   110,
     173,   897,   131,   589,   815,   816,   592,   170,   171,  1040,
     173,   174,   175,   176,    81,   272,   273,   389,    79,    86,
     675,   278,   677,   395,    45,    46,   155,   544,    32,   401,
     547,   164,   165,   166,   551,    83,    57,   692,   167,   131,
     121,   558,    63,    67,   111,   776,    70,    44,   177,   131,
      54,   568,   158,   570,   167,   572,   573,   103,    79,   576,
     577,   687,   717,   155,   581,   582,    70,    88,    24,   621,
      94,    43,   589,   155,    95,   592,    57,   581,   170,   171,
     146,   173,   106,    16,    40,   177,   178,   111,   180,   675,
      52,   677,   609,    97,    22,   177,    24,    53,   122,   893,
     894,    29,    58,     1,   621,    25,   692,   624,   625,   626,
     627,    16,   484,    70,   700,    16,    14,   621,    16,    25,
      26,  1065,   777,   170,   398,   399,    82,    16,    17,   708,
     709,   717,   389,   622,   623,   131,    16,   158,   395,     1,
     512,   658,    16,   790,   401,   102,    35,     9,   170,   171,
     107,   173,   109,    42,   658,    33,    54,   113,   675,   155,
     677,    10,    24,    16,    53,    14,    16,    24,    46,    16,
      59,   128,    70,    16,    23,   692,    25,    26,   764,   765,
     127,   177,   178,   700,   180,    63,  1082,   739,   167,     9,
     173,   777,    81,    82,    81,   174,   175,   176,   570,    86,
     717,   573,    89,   789,   783,   131,    14,   724,    69,    16,
     582,   866,    90,   730,   731,     1,    10,   589,    67,    24,
     737,    70,   739,     9,   111,    23,    97,   484,    97,   155,
      14,   278,   749,   737,   881,   739,   123,    22,    24,    24,
     167,   167,   897,   170,    29,    94,   173,   764,   765,    71,
     177,   177,   178,   152,   180,   512,     1,   106,    24,   174,
     777,   778,   111,   103,     9,   174,   175,   176,    79,    16,
     925,     9,   789,   122,   163,   164,  1007,   179,   107,    24,
     866,   170,   171,   930,   173,   174,   175,   176,   874,   170,
     171,    97,   173,   174,   551,    42,     1,   923,   815,   816,
      97,   558,   819,   675,     9,   677,    53,   933,   107,   826,
      43,   897,   829,   570,    72,   819,   573,    16,    65,    24,
     692,   122,   826,    16,    24,   582,     9,    23,    26,    10,
      10,    16,   589,   108,    81,    82,   174,    34,    70,   925,
      34,   168,   389,   929,   113,   717,    14,    91,   395,   866,
      23,   151,   724,   100,   401,    43,   935,   874,   944,   107,
       9,    24,     9,  1010,   950,   174,   170,   624,   625,   626,
     627,    14,   958,    14,    87,    25,   893,   894,    89,    32,
     897,    16,   899,   900,   177,   902,   168,   904,    34,   177,
     167,   100,   764,   765,     9,    65,   900,   914,   902,   105,
     917,    54,    14,    16,    17,   777,    12,    13,   925,    15,
      85,  1066,    18,    19,    16,    21,   163,    70,   675,    24,
     677,    27,    28,   170,   171,   174,   173,  1082,    81,    42,
      16,   174,    14,    86,    89,   692,    89,   484,    83,    23,
      53,    16,    14,  1098,    97,   101,   177,  1033,   151,    23,
    1036,  1037,    23,    14,    16,    23,    41,    23,   111,    19,
     717,    21,   126,   152,   981,   512,   983,   724,    81,    82,
      91,    25,    83,    53,   278,    26,    24,     9,   170,   983,
    1066,   998,  1068,   167,    24,   164,   126,    64,    14,   131,
     177,   167,   749,   170,   866,   164,  1082,   164,    16,    16,
      16,    16,    23,    23,   551,    16,    66,   764,   765,    23,
     107,   558,  1098,    82,     9,    34,    76,   155,     9,    16,
     777,   893,   894,   570,    14,   897,   573,    23,   167,    86,
      23,    23,  1049,    34,    34,   582,    24,    24,    98,    99,
    1126,  1127,   589,  1060,    23,   103,   803,   804,    16,  1066,
     163,   107,   153,   925,    16,  1072,  1060,   170,   171,   177,
     173,   174,   175,   176,   167,  1082,   376,   381,   813,   817,
     462,   874,   829,  1090,  1091,   817,   700,   624,   625,   626,
     627,  1098,   881,   711,  1101,   389,     1,   710,   148,   393,
    1101,   395,  1074,   681,   589,   931,   675,   401,   764,  1116,
     577,   765,    17,  1038,   164,   165,   166,   167,   238,   866,
     170,   171,   719,   173,   174,    30,    21,    67,    62,    55,
     164,   245,   134,   167,   155,   387,   170,   761,   675,   173,
     677,   175,   176,   265,     1,   920,   893,   894,   998,    31,
     897,    33,   899,   829,  1154,   692,   558,  1116,   899,  1062,
      17,   981,  1119,    45,    46,  1138,    48,   914,   992,  1120,
     917,    76,   655,   563,    -1,    57,    81,   470,   925,    -1,
     717,    63,    -1,   469,    -1,    12,    13,   724,    15,    -1,
     484,    18,    19,    98,    21,    -1,    -1,    79,    35,    -1,
      27,    28,    -1,   135,  1066,    42,    88,    -1,    90,    -1,
    1072,    -1,   749,    95,    96,    -1,    53,    -1,   512,    76,
    1082,    -1,    59,    -1,    81,    -1,   131,   764,   765,    -1,
      -1,    -1,    -1,    -1,   981,    -1,  1098,    -1,    -1,  1101,
     777,    98,    -1,    -1,    81,    82,    -1,    -1,    75,    -1,
     155,   998,   184,   185,    -1,   187,   188,    84,    -1,   164,
     165,   166,   167,    -1,    -1,   170,   171,    -1,   173,   201,
      -1,    -1,   177,   178,   131,   180,   570,    -1,    -1,   573,
      -1,    -1,   214,   577,    -1,    -1,    -1,    -1,   582,    -1,
      -1,    -1,   829,    -1,    -1,   589,    -1,    -1,   155,    -1,
      -1,    -1,  1049,   235,    -1,    -1,    -1,   164,   165,   166,
     167,    -1,   244,   170,   171,    -1,   173,    -1,    -1,  1066,
     177,   178,    -1,   180,    -1,  1072,   163,    -1,    -1,   866,
      -1,    -1,    -1,   170,   171,  1082,   173,   174,   175,   176,
      -1,    -1,    -1,  1090,  1091,    -1,    -1,    -1,    -1,    -1,
      -1,  1098,    -1,    -1,  1101,    -1,   893,   894,    -1,    -1,
     897,    -1,   899,    -1,    -1,    -1,    -1,    -1,    -1,  1116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   914,    -1,    -1,
     917,   675,    -1,   677,    -1,    -1,    -1,    -1,   925,    -1,
     322,   323,   324,    -1,    -1,    -1,    -1,    -1,   692,    -1,
      -1,    -1,    -1,    -1,   336,    -1,    -1,    -1,    -1,    -1,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,    -1,   717,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   364,    -1,    -1,    -1,    -1,    10,    -1,    -1,
     372,    14,    -1,    -1,   981,    -1,    -1,     1,    -1,    -1,
      23,     5,    25,    26,    -1,    -1,    10,    -1,    -1,    -1,
      14,   998,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
     764,   765,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,   777,    -1,     1,    -1,    -1,    -1,    -1,
       6,    -1,    -1,    -1,    67,    -1,    -1,    70,    14,    -1,
      16,    17,    -1,    19,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,  1049,    67,   446,    -1,    70,    -1,    -1,    -1,
      -1,    94,    38,    -1,    -1,   457,    42,   459,    -1,  1066,
      -1,    -1,    -1,   106,    50,  1072,    -1,    53,   111,    -1,
      94,    -1,    -1,    -1,    -1,  1082,    -1,    -1,    -1,   122,
      66,    -1,   106,  1090,  1091,    -1,    -1,   111,    -1,    -1,
      76,  1098,    -1,    -1,  1101,    81,    82,    -1,   122,    -1,
      -1,    -1,   866,    89,    -1,    -1,    92,    93,    -1,  1116,
      -1,    -1,    98,    -1,   100,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    24,   525,    -1,    -1,    -1,    -1,   530,    -1,
      -1,    -1,    -1,   897,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,    -1,    -1,   170,   171,    76,   173,
     174,   175,   176,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   925,   148,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    76,    -1,    -1,   163,   164,   165,
     166,   167,    -1,    -1,   170,   171,   172,   173,   174,   175,
     176,   593,     1,    -1,    -1,    -1,    98,     6,    -1,    -1,
      -1,    -1,    -1,   131,    -1,    14,    -1,    16,    17,    -1,
      19,    -1,    21,    -1,    11,    12,    13,    -1,    15,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,   155,    -1,    38,
      27,    28,    -1,    42,    -1,    -1,   164,   165,   166,   167,
      -1,    50,   170,   171,    53,   173,   148,   149,   150,   177,
     178,    -1,   180,    -1,    -1,    -1,    -1,    66,    -1,    -1,
      -1,    -1,   164,   165,   166,   167,    -1,    76,   170,   171,
     172,   173,    81,    82,    -1,    -1,   678,    -1,    75,    -1,
      89,    -1,    -1,    92,    93,    -1,    -1,    84,    -1,    98,
      -1,   100,    -1,    -1,     1,    -1,   698,   699,    -1,     6,
      -1,    -1,  1066,    -1,    -1,    -1,    -1,    -1,  1072,    16,
      17,    -1,    19,    -1,    21,    -1,    -1,   719,  1082,    -1,
     129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,  1098,    42,    -1,  1101,    -1,   148,
      -1,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   163,   164,   165,   166,   167,    66,
      -1,   170,   171,   172,   173,   174,   175,   176,    -1,    76,
      -1,    17,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    30,    92,    93,    -1,    -1,    -1,
      -1,    98,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    -1,     5,    -1,    -1,    -1,    -1,    10,    -1,    -1,
      -1,    -1,   129,    16,    17,    -1,    19,    -1,    21,    -1,
      76,     4,    -1,    26,     7,    81,    -1,    -1,    11,    12,
      13,   148,    15,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    98,    -1,    27,    28,   163,   164,   165,   166,
     167,    34,    -1,   170,   171,   172,   173,   174,   175,   176,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    -1,     5,    76,    -1,   131,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    17,    -1,    19,    -1,    21,    -1,
      -1,    -1,    75,    -1,    -1,    98,    99,    -1,    -1,   155,
      -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,   164,   165,
     166,   167,    -1,    -1,   170,   171,     5,   173,    -1,    -1,
      -1,   177,   178,    -1,   180,   937,   938,    16,    17,    -1,
      19,    -1,    21,    66,    -1,    -1,    -1,    -1,    -1,   951,
      -1,    -1,    -1,    76,    -1,   148,    -1,    -1,   960,   961,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     972,   164,   165,   166,   167,    98,    99,   170,   171,   172,
     173,   174,   175,   176,     5,    -1,    -1,    66,    -1,    10,
      -1,    70,    -1,    -1,    -1,    16,    17,    76,    19,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,
      89,    15,    -1,    -1,    18,    19,    20,    21,     5,    98,
      99,    -1,    -1,    27,    28,   148,    -1,    -1,    -1,    16,
      17,    -1,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,   164,   165,   166,   167,    66,    -1,   170,   171,   172,
     173,   174,   175,   176,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,   148,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    98,    99,    66,
      84,    -1,    -1,    -1,    -1,   164,   165,   166,   167,    76,
      -1,   170,   171,   172,   173,   174,   175,   176,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,    98,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    -1,    19,    -1,    21,   148,    -1,    -1,
      -1,    -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   164,   165,   166,   167,    -1,     5,   170,
     171,   172,   173,   174,   175,   176,    -1,    -1,    -1,    16,
      17,   148,    19,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    66,    -1,    -1,    17,    -1,    -1,   164,   165,   166,
     167,    76,    -1,   170,   171,   172,   173,   174,   175,   176,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,    98,    99,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    16,    17,    -1,    19,    -1,    21,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,     5,    76,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    98,    99,    16,    17,    -1,    19,    -1,    21,    -1,
      -1,    -1,    -1,   148,    -1,    98,    -1,    -1,    -1,   102,
      -1,    -1,    -1,    66,    -1,    -1,   109,    -1,    -1,   164,
     165,   166,   167,    76,    -1,   170,   171,   172,   173,   174,
     175,   176,    -1,    -1,    -1,   128,    89,    -1,   131,    -1,
      -1,   148,    -1,    66,    -1,    98,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    -1,    -1,    -1,   164,   165,   166,
     167,    -1,   155,   170,   171,   172,   173,   174,   175,   176,
      -1,   164,   165,   166,   167,    98,    99,   170,   171,    -1,
     173,    -1,    -1,    -1,   177,   178,    -1,   180,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   164,   165,   166,   167,    -1,    -1,   170,   171,   172,
     173,   174,   175,   176,     6,   148,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    17,    -1,    19,    -1,    21,
      -1,   164,   165,   166,   167,    -1,    -1,   170,   171,   172,
     173,   174,   175,   176,    36,    -1,    38,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    53,    17,    -1,    -1,    -1,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    16,    17,    -1,    19,
      -1,    21,    -1,    -1,    76,    -1,    -1,    -1,    28,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    89,    38,    -1,
      92,    93,    42,    -1,    -1,    -1,    98,    -1,   100,    -1,
      50,    66,    -1,    53,    -1,    -1,     4,     5,    -1,     7,
      -1,    76,    62,    11,    12,    13,    66,    15,    -1,   121,
      18,    19,    20,    21,    -1,    -1,    76,   129,    -1,    27,
      28,    81,    82,    98,    -1,    -1,    34,    -1,    -1,    89,
      -1,    -1,    92,    93,    -1,    -1,   148,    -1,    98,    -1,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   163,   164,   165,   166,   167,    -1,    -1,   170,   171,
     172,   173,   174,   175,   176,    -1,    -1,    75,    -1,   129,
      -1,    -1,    -1,   148,   149,   150,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   148,   164,
     165,   166,   167,    -1,    -1,   170,   171,   172,   173,    -1,
      -1,    -1,    -1,   163,   164,   165,   166,   167,    -1,     6,
     170,   171,   172,   173,   174,   175,   176,    14,    -1,    16,
      17,    -1,    19,    -1,    21,    -1,    -1,    24,    -1,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      17,    38,    19,    -1,    21,    42,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    50,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    42,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    66,
      -1,    -1,    89,    -1,    -1,    92,    93,    -1,    -1,    76,
      -1,    98,    -1,   100,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    92,    93,    -1,    -1,    -1,
      -1,    98,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,    -1,    -1,    -1,    -1,    -1,    -1,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,    -1,
      15,   148,   129,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    27,    28,    -1,    -1,   163,   164,   165,   166,
     167,   148,    -1,   170,   171,   172,   173,   174,   175,   176,
      -1,    -1,    -1,    -1,    -1,    -1,   163,   164,   165,   166,
     167,     6,    -1,   170,   171,   172,   173,   174,   175,   176,
      -1,    16,    17,    -1,    19,     6,    21,    -1,    -1,    24,
      75,    -1,    -1,    -1,    -1,    16,    17,    -1,    19,    84,
      21,    -1,    -1,    38,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    38,    53,     4,
      -1,    42,     7,    -1,    -1,    -1,    11,    12,    13,    50,
      15,    66,    53,    18,    19,    20,    21,    -1,    -1,    24,
      -1,    76,    27,    28,    -1,    66,    81,    82,    -1,    34,
      -1,    -1,    -1,    -1,    89,    76,    -1,    92,    93,    -1,
      81,    82,    -1,    98,    -1,   100,    -1,    -1,    89,    -1,
      -1,    92,    93,    -1,    -1,    -1,    -1,    98,    -1,   100,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    -1,   129,     4,    -1,    -1,     7,    84,
      -1,    -1,    11,    12,    13,    -1,    15,    -1,   129,    18,
      19,    20,    21,   148,    -1,    24,    -1,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    34,    -1,   148,   163,   164,
     165,   166,   167,    -1,    -1,   170,   171,   172,   173,   174,
     175,   176,   163,   164,   165,   166,   167,    -1,    -1,   170,
     171,   172,   173,   174,   175,   176,    17,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    37,    -1,    -1,    -1,
      -1,     4,    -1,    -1,     7,    46,     9,    17,    11,    12,
      13,    -1,    15,    -1,    -1,    18,    19,    20,    21,    -1,
      61,    -1,    63,    -1,    27,    28,    -1,    37,    -1,    70,
      -1,    34,    -1,    -1,    -1,    76,    46,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    63,    -1,    -1,    -1,    98,    -1,    -1,
      70,   102,    -1,    -1,    -1,    -1,    76,    -1,   109,    -1,
      -1,    81,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    -1,   128,    98,    -1,
     131,    -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,   109,
      -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,   155,    -1,    -1,    -1,   128,    -1,
      -1,   131,    -1,   164,   165,   166,   167,    -1,    -1,   170,
     171,    -1,   173,    -1,    46,    -1,   177,   178,    -1,   180,
      -1,    -1,    -1,    -1,    -1,   155,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   164,   165,   166,   167,    70,    -1,
     170,   171,    -1,   173,    76,    -1,    -1,   177,   178,    81,
     180,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
     102,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    76,     4,    -1,    -1,     7,
      81,    -1,    -1,    11,    12,    13,   128,    15,    -1,   131,
      18,    19,    20,    21,    -1,    -1,    24,    98,    -1,    27,
      28,   102,    -1,    -1,    -1,    -1,    34,    -1,   109,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   164,   165,   166,   167,    -1,   128,   170,   171,
     131,   173,    -1,    -1,    -1,   177,   178,    -1,   180,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,   155,    -1,    84,    -1,    -1,    -1,
      -1,    -1,    -1,   164,   165,   166,   167,    -1,    -1,   170,
     171,    -1,   173,    -1,    -1,     4,   177,   178,     7,   180,
      -1,    -1,    11,    12,    13,    -1,    15,    -1,    -1,    18,
      19,    20,    21,     4,    -1,    24,     7,    -1,    27,    28,
      11,    12,    13,    -1,    15,    34,    -1,    18,    19,    20,
      21,     4,    -1,    24,     7,    -1,    27,    28,    11,    12,
      13,    -1,    15,    34,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    -1,    -1,    27,    28,     4,    -1,    -1,     7,
      -1,    34,    -1,    11,    12,    13,    75,    15,    -1,    -1,
      18,    19,    20,    21,     4,    84,    24,     7,    -1,    27,
      28,    11,    12,    13,    75,    15,    34,    -1,    18,    19,
      20,    21,     4,    84,    24,     7,    -1,    27,    28,    11,
      12,    13,    75,    15,    34,    -1,    18,    19,    20,    21,
      -1,    84,    -1,    25,    -1,    27,    28,     4,    -1,    -1,
       7,    -1,    34,    -1,    11,    12,    13,    75,    15,    -1,
      -1,    18,    19,    20,    21,     4,    84,    24,     7,    -1,
      27,    28,    11,    12,    13,    75,    15,    34,    -1,    18,
      19,    20,    21,    -1,    84,    -1,    25,    -1,    27,    28,
      -1,    -1,    -1,    75,    -1,    34,     4,    -1,    -1,     7,
      -1,    -1,    84,    11,    12,    13,    -1,    15,    -1,    -1,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    75,    27,
      28,    -1,    -1,    -1,    -1,    -1,    34,    84,    74,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,   114,   115,
     116,   117,   118,   119,   120,    -1,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   130,    -1,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
      -1,   147
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,   157,   187,   158,   189,   190,     0,    31,    33,
      45,    46,    48,    57,    63,    79,    88,    90,    95,    96,
     198,   376,   377,   378,   379,   381,   383,   385,   387,   389,
     390,   391,   392,   393,   403,   404,   406,   409,   410,   411,
     413,   414,   415,   416,   417,   422,   426,   429,   430,    39,
      55,   191,   195,   111,   123,   402,    81,    86,    89,   111,
     402,   425,    52,    68,   396,   405,   402,    52,    75,    80,
     395,   401,   407,   402,    81,   170,   171,   173,   373,   374,
     499,    70,   399,   500,   501,    36,    47,    60,   121,   188,
     218,   220,   224,   226,   229,    46,    57,    63,    79,   158,
     377,   158,   402,    10,   158,   502,     1,   173,   192,   196,
     126,    32,    54,    97,   397,   501,    83,   126,   501,    44,
     396,   500,   384,    14,   300,    89,   111,   397,   425,   395,
     380,   500,   300,   122,   240,   241,    16,    44,   127,    73,
     388,   240,   230,   225,   227,    51,    62,   112,   158,   219,
     402,    54,   398,   500,   158,   412,   170,   110,   197,   200,
      81,   499,   240,   373,   499,   240,   499,   386,   240,   300,
     301,    79,   408,    83,    91,   126,    44,   382,   300,   240,
     231,   394,   240,   401,     6,    16,    17,    19,    21,    38,
      42,    50,    53,    66,    76,    81,    82,    89,    92,    93,
      98,   100,   129,   148,   163,   164,   165,   166,   167,   172,
     174,   175,   176,   339,   340,   341,   342,   343,   344,   348,
     354,   357,   367,   368,   369,   373,   375,   167,   499,   103,
      43,    57,   231,   300,     5,    16,    28,   228,   333,   334,
     342,   346,   373,   221,   222,   146,   240,    46,    63,   413,
     164,   167,   170,   173,   193,   194,   343,     1,   171,    56,
     154,   201,   400,   427,   199,   423,   152,   167,   300,   394,
      16,    17,    19,    21,    70,    99,   302,   303,   304,   307,
     310,   326,   332,   342,   345,   346,   357,   367,   368,   369,
     373,   375,   300,   394,   240,   499,   501,   499,   499,   300,
     394,    14,    68,   100,   152,   153,   232,   233,   234,   235,
     243,    52,   500,   348,    36,   220,   348,    25,   348,   348,
      16,    16,    16,    16,    16,   373,    16,    16,   348,    16,
      16,    99,   360,     8,   169,    28,    62,   348,    22,    29,
     371,   372,     4,     7,    11,    12,    13,    15,    18,    19,
      20,    21,    27,    28,    34,    75,    84,   353,    24,   127,
     499,   300,   243,   231,   347,   348,   231,   334,   231,    28,
     223,   337,   338,   348,   398,   402,     9,   173,   373,   500,
     432,    14,   432,    69,   489,   490,    16,   491,    24,   328,
     327,   367,   367,   308,    23,    10,   307,   310,   312,   311,
     499,   245,    97,    68,   152,    97,    14,   373,    71,   246,
     247,   152,   240,   351,   352,    24,   342,   348,   348,   348,
     358,    24,   348,   361,   373,    24,   348,    24,     1,   170,
     171,   173,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   174,   350,   349,   359,   360,   103,
      79,   243,   348,    24,   242,   243,   243,     9,   348,     9,
     194,   202,   240,    14,    68,   153,   482,   200,    14,   179,
       9,   107,   418,    75,   131,   155,   177,   492,   493,   494,
     496,   498,   418,   326,   330,   331,   332,     1,    30,   314,
     325,   335,   342,   346,   373,   336,   342,   346,   373,   375,
     307,   310,   313,   314,   314,   174,   275,   305,   306,   310,
      97,    97,   244,   107,   236,    43,    72,   251,   122,   231,
     221,    24,    24,    24,    24,    16,    99,   362,   363,     1,
       9,    24,    24,    16,   348,   499,   300,   246,     5,   246,
     246,   348,   348,     1,    14,    16,    54,    70,   203,   208,
     236,   428,   125,   177,   179,    16,   167,    23,   424,   491,
     490,    16,    24,     9,   498,    24,   331,    25,    26,   329,
     315,   309,    26,    10,    23,    14,    67,    70,    94,   106,
     111,   122,   276,   277,   279,   283,   286,   289,   293,    10,
     275,    16,   248,   252,   108,   253,   240,   243,   231,    14,
      24,   348,   364,   365,     1,   348,   361,   394,   174,   213,
     373,   174,   210,   211,   212,    70,   213,   206,    17,    23,
      37,    46,    61,    63,    70,   102,   109,   128,   178,   180,
     367,   368,   430,   431,   442,   443,   445,   446,   447,   451,
     457,   459,   460,   478,   479,   497,   498,   499,    16,   167,
     483,    34,    34,   168,   442,   113,    24,    40,    53,    58,
      82,   113,   419,   420,   494,   495,   498,     1,    10,    25,
     325,     1,   317,   318,   331,    14,   275,   287,    16,    65,
     100,   290,   354,   355,   373,   336,   291,   292,     1,    14,
      91,   499,    10,   275,   151,   305,    23,   237,    16,    17,
     249,   250,   342,   354,   355,   348,    43,    41,    85,   105,
     259,   261,   262,   263,   107,   319,   243,   366,     1,     9,
      24,    24,    30,   174,   214,   373,     9,    24,     9,   174,
      14,    14,    87,   209,    25,    89,   499,   501,   402,   402,
     479,   479,   479,   479,    10,    23,   107,   460,   484,   458,
      16,   168,    34,   177,   177,   495,   499,   167,   498,   167,
     421,     9,    24,   100,   316,     9,   319,   306,   220,   273,
     275,   348,    65,   291,   356,   284,   231,   278,   280,   294,
     275,    14,    24,   170,   238,   239,   348,   348,   250,   254,
     264,   240,   240,   260,   261,   258,   259,    16,    24,   246,
     275,     1,   365,    19,    21,    99,   174,   215,   367,   368,
     369,   373,   174,   204,   174,   213,   213,    16,    14,    83,
      34,   152,   499,    89,   111,   499,   501,   461,    23,   444,
      16,    14,     1,    17,    30,   463,   465,   477,   479,   487,
     488,   497,   177,   433,   151,   420,   101,   317,     1,    10,
      26,   318,    23,   274,    23,    24,   360,    14,   243,   273,
      28,    54,   370,   373,    16,   297,   288,   240,     9,    24,
      24,    25,    35,    59,   255,   256,   257,   342,   354,   355,
     174,   266,   267,   343,   262,   262,   320,   319,    23,   367,
     367,    23,   209,   214,   214,   211,   212,   207,   499,   452,
     126,   152,    83,   499,    53,   475,   445,    24,    64,   108,
     124,   152,   485,   486,   453,    25,    26,   466,    24,     9,
     434,   435,   167,   221,   319,   285,   319,   281,    55,    75,
     170,   298,   299,   295,   273,   170,   256,    16,    17,   164,
      14,   267,    74,    78,   104,   114,   115,   116,   117,   118,
     119,   120,   130,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   147,   321,   322,
     324,    24,   205,   215,   215,    24,    24,   275,   454,   456,
     459,   478,   499,   126,   499,    81,   373,   497,   462,   164,
      64,   177,     9,    24,    23,   448,   449,   451,   464,     1,
     467,   469,   478,   497,   435,   131,   436,   231,   273,    14,
     170,    28,   323,   342,   193,    24,   299,   231,   240,   348,
     348,   265,   167,   170,   173,   177,   342,   342,   348,   167,
     164,   164,   342,    16,   348,   348,    16,    16,     9,    24,
      16,     1,    14,   216,   348,    23,    23,    23,   484,   477,
     484,   499,    16,    82,   476,   486,    10,    23,   465,     9,
      34,   474,   470,   155,   437,   243,   282,   193,     9,    14,
      24,    25,    16,   268,   269,   270,   323,   323,   167,   342,
     322,   361,   217,    14,   469,   484,   167,   167,   497,    23,
     450,   468,   499,   475,    86,   246,   273,   342,   296,   149,
     150,   271,   272,   367,   368,   369,   373,   375,    23,   270,
      24,    24,    24,    24,    24,   275,   455,    24,   451,   469,
     471,   497,    23,   273,    24,   272,    34,    34,    23,   448,
     474,   476,   103,   438,   319,   342,   342,   472,    16,   107,
     439,   480,   481,   482,   488,    16,   473,   482,    24,   177,
     440,   441,   484,   167,     9,    24,   441
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
      yyerror (sparp_arg, YY_("syntax error: cannot back up")); \
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
# define YYLEX yylex (&yylval, sparp_arg)
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
		  Type, Value, sparp_arg); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, sparp_t * sparp_arg)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, sparp_arg)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    sparp_t * sparp_arg;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (sparp_arg);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, sparp_t * sparp_arg)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, sparp_arg)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    sparp_t * sparp_arg;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, sparp_arg);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, sparp_t * sparp_arg)
#else
static void
yy_reduce_print (yyvsp, yyrule, sparp_arg)
    YYSTYPE *yyvsp;
    int yyrule;
    sparp_t * sparp_arg;
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
		       		       , sparp_arg);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, sparp_arg); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, sparp_t * sparp_arg)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, sparp_arg)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    sparp_t * sparp_arg;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (sparp_arg);

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
int yyparse (sparp_t * sparp_arg);
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
yyparse (sparp_t * sparp_arg)
#else
int
yyparse (sparp_arg)
    sparp_t * sparp_arg;
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
#line 557 "./sparql_p.y"
    { sparp_arg->sparp_expr = (yyval.tree) = (yyvsp[(4) - (5)].tree); }
    break;

  case 3:
#line 558 "./sparql_p.y"
    {
		sparp_arg->sparp_expr = (yyval.tree) = spar_make_topmost_sparul_sql (sparp_arg,
		  (SPART **)t_revlist_to_array ((yyvsp[(3) - (4)].backstack)) ); }
    break;

  case 4:
#line 561 "./sparql_p.y"
    {
		sparp_arg->sparp_expr = (yyval.tree) = spar_make_topmost_sparul_sql (sparp_arg,
		  (SPART **)t_list (1, (yyvsp[(3) - (4)].tree)) ); }
    break;

  case 5:
#line 564 "./sparql_p.y"
    {
		sparp_arg->sparp_expr = (yyval.tree) = spar_make_topmost_sparul_sql (sparp_arg,
		  (SPART **)t_list (0) ); }
    break;

  case 6:
#line 567 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_topmost_qm_sql (sparp_arg);
		sparp_arg->sparp_expr = (yyval.tree); }
    break;

  case 7:
#line 570 "./sparql_p.y"
    { sparyyerror (sparp_arg, "(internal SPARQL processing error) SPARQL mark expected"); }
    break;

  case 13:
#line 588 "./sparql_p.y"
    { ; }
    break;

  case 14:
#line 589 "./sparql_p.y"
    { ; }
    break;

  case 15:
#line 593 "./sparql_p.y"
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_VIRTSPECIFIC, "DEFINE"); }
    break;

  case 16:
#line 594 "./sparql_p.y"
    {
		dk_set_t vals = (yyvsp[(4) - (4)].backstack);
		while (NULL != vals) {
		    caddr_t *val = (caddr_t *)t_set_pop (&vals);
		    sparp_define (sparp_arg, (yyvsp[(3) - (4)].box), (ptrlong)(val[0]), val[1]);
		  } }
    break;

  case 17:
#line 603 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 18:
#line 604 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (3)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].tree)); }
    break;

  case 19:
#line 608 "./sparql_p.y"
    { (yyval.tree) = (SPART *)t_list (2, (ptrlong)QNAME, (yyvsp[(1) - (1)].box)); }
    break;

  case 20:
#line 609 "./sparql_p.y"
    { (yyval.tree) = (SPART *)t_list (2, (ptrlong)Q_IRI_REF, (yyvsp[(1) - (1)].box)); }
    break;

  case 21:
#line 610 "./sparql_p.y"
    { (yyval.tree) = (SPART *)t_list (2, (ptrlong)SPARQL_STRING, (yyvsp[(1) - (1)].box)); }
    break;

  case 22:
#line 611 "./sparql_p.y"
    { (yyval.tree) = (SPART *)t_list (2, (ptrlong)SPARQL_INTEGER, (yyvsp[(1) - (1)].box)); }
    break;

  case 23:
#line 612 "./sparql_p.y"
    { (yyval.tree) = (SPART *)t_list (2, (ptrlong)SPAR_VARIABLE, (caddr_t)(yyvsp[(1) - (1)].tree)); }
    break;

  case 24:
#line 616 "./sparql_p.y"
    { ; }
    break;

  case 25:
#line 617 "./sparql_p.y"
    {
		if (NULL != sparp_env()->spare_base_uri)
		  sparyyerror (sparp_arg, "Only one base declaration is allowed");
		sparp_env()->spare_base_uri = (yyvsp[(2) - (2)].box); }
    break;

  case 26:
#line 621 "./sparql_p.y"
    { sparyyerror (sparp_arg, "Missing <iri-string> after BASE keyword"); }
    break;

  case 27:
#line 625 "./sparql_p.y"
    { ; }
    break;

  case 28:
#line 626 "./sparql_p.y"
    { ; }
    break;

  case 29:
#line 630 "./sparql_p.y"
    {
		if ((!strcmp ("sql:", (yyvsp[(2) - (3)].box)) && strcmp ("sql:", (yyvsp[(3) - (3)].box))) || (!strcmp ("bif:", (yyvsp[(2) - (3)].box)) && strcmp ("bif:", (yyvsp[(3) - (3)].box))))
		  sparyyerror (sparp_arg, "Prefixes 'sql:' and 'bif:' are reserved for SQL names");
		t_set_push (&(sparp_env()->spare_namespace_prefixes), sparp_expand_q_iri_ref (sparp_arg, (yyvsp[(3) - (3)].box)));
		t_set_push (&(sparp_env()->spare_namespace_prefixes), t_box_dv_short_nchars ((yyvsp[(2) - (3)].box), box_length ((yyvsp[(2) - (3)].box))-2)); }
    break;

  case 30:
#line 635 "./sparql_p.y"
    { sparyyerror (sparp_arg, "Missing <namespace-iri-string> in PREFIX declaration"); }
    break;

  case 31:
#line 636 "./sparql_p.y"
    { sparyyerror (sparp_arg, "Missing namespace prefix after PREFIX keyword"); }
    break;

  case 33:
#line 641 "./sparql_p.y"
    {
		if (sparp_arg->sparp_macro_def_count)
		  sparyyerror (sparp_arg, "Some macro are defined before CREATE MACRO LIBRARY");
		sparp_arg->sparp_macrolib_to_create = (yyvsp[(4) - (4)].tree)->_.qname.val;
		sparp_arg->sparp_disable_storage_macro_lib = 2; }
    break;

  case 35:
#line 650 "./sparql_p.y"
    { ; }
    break;

  case 36:
#line 651 "./sparql_p.y"
    { ; }
    break;

  case 37:
#line 657 "./sparql_p.y"
    {
		SPART *new_macro;
		if (!sparp_arg->sparp_storage_is_set)
		  sparp_configure_storage_and_macro_libs (sparp_arg);
		spar_selid_push_reused (sparp_arg, (yyvsp[(2) - (2)].tree)->_.qname.val );
		sparp_arg->sparp_macro_mode = SPARP_DEFARG;
		new_macro = sparp_arg->sparp_current_macro = sparp_defmacro_init (sparp_arg, (yyvsp[(2) - (2)].tree)->_.qname.val);
		sparp_defmacro_store (sparp_arg, new_macro); }
    break;

  case 38:
#line 665 "./sparql_p.y"
    {
		sparp_defmacro_finalize (sparp_arg, (yyvsp[(4) - (4)].tree));
		sparp_arg->sparp_macro_mode = 0;
		spar_selid_pop (sparp_arg);
		  }
    break;

  case 39:
#line 673 "./sparql_p.y"
    {
		sparp_arg->sparp_current_macro->_.defmacro.paramnames = t_revlist_to_array ((yyvsp[(2) - (3)].backstack));	 }
    break;

  case 40:
#line 675 "./sparql_p.y"
    {
		SPART *curr = sparp_arg->sparp_current_macro;
		if (NULL != (yyvsp[(5) - (5)].backstack))
		  curr->_.defmacro.localnames = t_revlist_to_array ((yyvsp[(5) - (5)].backstack));
		sparp_arg->sparp_macro_mode = SPARP_DEFBODY; }
    break;

  case 41:
#line 680 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(7) - (7)].tree); }
    break;

  case 42:
#line 681 "./sparql_p.y"
    {
		SPART *curr = sparp_arg->sparp_current_macro;
	    sparp_make_defmacro_paramnames_from_template (sparp_arg, curr); }
    break;

  case 43:
#line 684 "./sparql_p.y"
    {
		SPART *curr = sparp_arg->sparp_current_macro;
		if (NULL != (yyvsp[(3) - (4)].backstack))
		  curr->_.defmacro.localnames = t_revlist_to_array ((yyvsp[(3) - (4)].backstack));
		sparp_arg->sparp_macro_mode = SPARP_DEFBODY;
		spar_gp_init (sparp_arg, DEFMACRO_L); }
    break;

  case 44:
#line 690 "./sparql_p.y"
    { (yyval.tree) = spar_gp_finalize (sparp_arg, NULL); }
    break;

  case 45:
#line 691 "./sparql_p.y"
    { sparyyerror (sparp_arg, "List of arguments or template is expected after macro name"); }
    break;

  case 46:
#line 696 "./sparql_p.y"
    {
		SPART *curr = sparp_arg->sparp_current_macro;
		curr->_.defmacro.subtype = 0;
		curr->_.defmacro.quad_pattern = (SPART **)t_list (4, NULL, (yyvsp[(2) - (5)].tree), (yyvsp[(3) - (5)].tree), (yyvsp[(4) - (5)].tree));
		sparp_arg->sparp_macro_mode = SPARP_DEFBODY; }
    break;

  case 47:
#line 701 "./sparql_p.y"
    {
		SPART *curr = sparp_arg->sparp_current_macro;
		curr->_.defmacro.subtype = GRAPH_L;
		curr->_.defmacro.quad_pattern = (SPART **)t_list (4, (yyvsp[(2) - (7)].tree), (yyvsp[(4) - (7)].tree), (yyvsp[(5) - (7)].tree), (yyvsp[(6) - (7)].tree));
		sparp_arg->sparp_macro_mode = SPARP_DEFBODY; }
    break;

  case 48:
#line 706 "./sparql_p.y"
    {
		SPART *curr = sparp_arg->sparp_current_macro;
		curr->_.defmacro.subtype = DEFAULT_L;
		curr->_.defmacro.quad_pattern = (SPART **)t_list (4, NULL, (yyvsp[(4) - (7)].tree), (yyvsp[(5) - (7)].tree), (yyvsp[(6) - (7)].tree));
		sparp_arg->sparp_macro_mode = SPARP_DEFBODY; }
    break;

  case 49:
#line 714 "./sparql_p.y"
    { (yyval.backstack) = NULL; }
    break;

  case 50:
#line 715 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(3) - (4)].backstack); }
    break;

  case 51:
#line 716 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(3) - (4)].backstack); }
    break;

  case 52:
#line 720 "./sparql_p.y"
    { (yyval.backstack) = NULL; }
    break;

  case 55:
#line 726 "./sparql_p.y"
    {
		(yyval.backstack) = NULL;
		t_set_push (&((yyval.backstack)), (yyvsp[(1) - (3)].box));
		sparp_check_dm_arg_for_redecl (sparp_arg, (yyval.backstack), (yyvsp[(3) - (3)].box));
		t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].box)); }
    break;

  case 56:
#line 731 "./sparql_p.y"
    {
		(yyval.backstack) = (yyvsp[(1) - (3)].backstack);
		sparp_check_dm_arg_for_redecl (sparp_arg, (yyval.backstack), (yyvsp[(3) - (3)].box));
		t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].box)); }
    break;

  case 57:
#line 738 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].box)); }
    break;

  case 58:
#line 739 "./sparql_p.y"
    {
		(yyval.backstack) = (yyvsp[(1) - (2)].backstack);
		sparp_check_dm_arg_for_redecl (sparp_arg, (yyval.backstack), (yyvsp[(2) - (2)].box));
		t_set_push (&((yyval.backstack)), (yyvsp[(2) - (2)].box)); }
    break;

  case 59:
#line 746 "./sparql_p.y"
    { (yyval.tree) = spar_make_param_or_variable (sparp_arg, (yyvsp[(1) - (1)].box)); }
    break;

  case 61:
#line 751 "./sparql_p.y"
    { (yyval.tree) = spar_make_param_or_variable (sparp_arg, (yyvsp[(1) - (1)].box)); }
    break;

  case 62:
#line 752 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 2, SPAR_QNAME, uname_rdf_ns_uri_type); }
    break;

  case 64:
#line 758 "./sparql_p.y"
    { (yyval.tree) = spar_make_param_or_variable (sparp_arg, (yyvsp[(1) - (1)].box)); }
    break;

  case 66:
#line 760 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 67:
#line 761 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); spar_change_sign (&((yyvsp[(2) - (2)].tree)->_.lit.val)); }
    break;

  case 68:
#line 762 "./sparql_p.y"
    { (yyval.tree) = (SPART *)t_box_dv_uname_string ("http://www.w3.org/1999/02/22-rdf-syntax-ns#nil"); }
    break;

  case 72:
#line 770 "./sparql_p.y"
    {
		SPART *curr = sparp_arg->sparp_current_macro;
		curr->_.defmacro.subtype = 0;
		spar_gp_init (sparp_arg, DEFMACRO_L); }
    break;

  case 73:
#line 774 "./sparql_p.y"
    { (yyval.tree) = spar_gp_finalize (sparp_arg, NULL); }
    break;

  case 75:
#line 776 "./sparql_p.y"
    { sparyyerror (sparp_arg, "Graph group pattern or expression is expected as the body of the macro"); }
    break;

  case 76:
#line 782 "./sparql_p.y"
    {
		sparp_arg->sparp_env->spare_top_retval_selid = spar_selid_push (sparp_arg);
                t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL);
		sparp_arg->sparp_allow_aggregates_in_expn |= 1; }
    break;

  case 77:
#line 787 "./sparql_p.y"
    {
		SPART *where_gp = spar_gp_finalize (sparp_arg, NULL);
		SPART *wm = (yyvsp[(6) - (6)].tree);
		caddr_t retselid = spar_selid_pop (sparp_arg);
		wm->_.wm.where_gp = where_gp;
		(yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, (yyvsp[(1) - (6)].token_type), (yyvsp[(3) - (6)].trees), retselid, wm );
		if (SPAR_REQ_TOP == (yyval.tree)->type)
		  sparp_expand_top_retvals (sparp_arg, (yyval.tree), 0 /* never cloned, hence 0 == safely_copy_all_vars */); }
    break;

  case 78:
#line 798 "./sparql_p.y"
    { (yyval.token_type) = SELECT_L; }
    break;

  case 79:
#line 799 "./sparql_p.y"
    { (yyval.token_type) = SELECT_L; }
    break;

  case 80:
#line 800 "./sparql_p.y"
    { (yyval.token_type) = DISTINCT_L; }
    break;

  case 81:
#line 801 "./sparql_p.y"
    { (yyval.token_type) = COUNT_DISTINCT_L; }
    break;

  case 82:
#line 805 "./sparql_p.y"
    { (yyval.token_type) = sparp_arg->sparp_rset_lexdepth_plus_1; sparp_arg->sparp_rset_lexdepth_plus_1 = sparp_arg->sparp_lexdepth + 1; }
    break;

  case 83:
#line 806 "./sparql_p.y"
    { sparp_arg->sparp_rset_lexdepth_plus_1 = (yyvsp[(1) - (2)].token_type); (yyval.trees) = (yyvsp[(2) - (2)].trees); }
    break;

  case 84:
#line 810 "./sparql_p.y"
    { (yyval.trees) = (SPART **) _STAR; }
    break;

  case 85:
#line 812 "./sparql_p.y"
    { (yyval.trees) = (SPART **) t_revlist_to_array ((yyvsp[(1) - (1)].backstack)); }
    break;

  case 86:
#line 813 "./sparql_p.y"
    {
		SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_VIRTSPECIFIC, "comma-delimited list of result set expressions");
		(yyval.trees) = (SPART **) t_revlist_to_array ((yyvsp[(1) - (1)].backstack)); }
    break;

  case 87:
#line 819 "./sparql_p.y"
    {
		sparp_arg->sparp_env->spare_top_retval_selid = spar_selid_push (sparp_arg);
                t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL); }
    break;

  case 88:
#line 823 "./sparql_p.y"
    {
		const char *fmt_mode_name;
                const char *formatter, *agg_formatter, *agg_mdata;
		SPART *where_gp = spar_gp_finalize (sparp_arg, NULL);
		SPART *wm = (yyvsp[(6) - (6)].tree);
		caddr_t retselid = spar_selid_pop (sparp_arg);
		wm->_.wm.where_gp = where_gp;
		(yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, CONSTRUCT_L, NULL,
                  retselid, wm );
		fmt_mode_name = (yyval.tree)->_.req_top.formatmode_name;
		ssg_find_formatter_by_name_and_subtype (fmt_mode_name, CONSTRUCT_L, &formatter, &agg_formatter, &agg_mdata);
                spar_compose_retvals_of_construct (sparp_arg, (yyval.tree), (yyvsp[(3) - (6)].tree), formatter, agg_formatter, agg_mdata); }
    break;

  case 89:
#line 839 "./sparql_p.y"
    {
		sparp_arg->sparp_env->spare_top_retval_selid = spar_selid_push (sparp_arg);
                t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL); }
    break;

  case 90:
#line 843 "./sparql_p.y"
    {
		SPART * where_gp = spar_gp_finalize (sparp_arg, NULL);
		SPART *wm = (yyvsp[(6) - (6)].tree);
		caddr_t retselid = spar_selid_pop (sparp_arg);
		wm->_.wm.where_gp = where_gp;
		(yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, DESCRIBE_L, (yyvsp[(3) - (6)].trees),
                  retselid, wm );
		if (((SPART **)_STAR == (yyvsp[(3) - (6)].trees)) && (SPAR_REQ_TOP == (yyval.tree)->type))
		  sparp_expand_top_retvals (sparp_arg, (yyval.tree), 0 /* never cloned, hence 0 == safely_copy_all_vars */); }
    break;

  case 91:
#line 855 "./sparql_p.y"
    { (yyval.trees) = (SPART **) _STAR; }
    break;

  case 92:
#line 856 "./sparql_p.y"
    { (yyval.trees) = (SPART **) t_list_to_array ((yyvsp[(1) - (1)].backstack)); }
    break;

  case 93:
#line 860 "./sparql_p.y"
    {
		sparp_arg->sparp_env->spare_top_retval_selid = spar_selid_push (sparp_arg);
                t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL); }
    break;

  case 94:
#line 864 "./sparql_p.y"
    {
		SPART * where_gp = spar_gp_finalize (sparp_arg, NULL);
		(yyval.tree) = spar_make_top (sparp_arg, ASK_L, (SPART **)t_list(0), spar_selid_pop (sparp_arg),
		  where_gp, NULL, NULL, NULL, (SPART *)t_box_num(1), (SPART *)t_box_num(0), NULL ); }
    break;

  case 95:
#line 871 "./sparql_p.y"
    { }
    break;

  case 96:
#line 872 "./sparql_p.y"
    { }
    break;

  case 97:
#line 880 "./sparql_p.y"
    {
		sparp_make_and_push_new_graph_source (sparp_arg, (yyvsp[(1) - (3)].token_type), (yyvsp[(2) - (3)].tree), (yyvsp[(3) - (3)].trees)); }
    break;

  case 98:
#line 885 "./sparql_p.y"
    {
		if (NULL != sparp_arg->sparp_env->spare_src.ssrc_graph_set_by_with)
		  sparyyerror (sparp_arg, "FROM can not be used in combination with WITH, use either consistent SPARUL syntax or SPARQL 1.1 syntax, not a mix");
		(yyval.token_type) = (yyvsp[(1) - (1)].token_type); }
    break;

  case 99:
#line 889 "./sparql_p.y"
    {
		SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_SPARQL11_DRAFT, "USING keyword");
		(yyval.token_type) = (yyvsp[(1) - (1)].token_type); }
    break;

  case 100:
#line 895 "./sparql_p.y"
    { (yyval.token_type) = SPART_GRAPH_FROM; }
    break;

  case 101:
#line 896 "./sparql_p.y"
    { (yyval.token_type) = SPART_GRAPH_NAMED; }
    break;

  case 102:
#line 897 "./sparql_p.y"
    { (yyval.token_type) = SPART_GRAPH_NOT_FROM; }
    break;

  case 103:
#line 898 "./sparql_p.y"
    { (yyval.token_type) = SPART_GRAPH_NOT_NAMED; }
    break;

  case 104:
#line 902 "./sparql_p.y"
    { (yyval.token_type) = SPART_GRAPH_FROM; }
    break;

  case 105:
#line 903 "./sparql_p.y"
    { (yyval.token_type) = SPART_GRAPH_NAMED; }
    break;

  case 106:
#line 904 "./sparql_p.y"
    { (yyval.token_type) = SPART_GRAPH_NOT_FROM; }
    break;

  case 107:
#line 905 "./sparql_p.y"
    { (yyval.token_type) = SPART_GRAPH_NOT_NAMED; }
    break;

  case 108:
#line 909 "./sparql_p.y"
    { (yyval.trees) = NULL; }
    break;

  case 109:
#line 910 "./sparql_p.y"
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_OPTION, "OPTION () sponge configuration"); }
    break;

  case 110:
#line 911 "./sparql_p.y"
    { (yyval.trees) = (yyvsp[(4) - (4)].trees); }
    break;

  case 111:
#line 915 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (0); }
    break;

  case 112:
#line 916 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_revlist_to_array ((yyvsp[(1) - (2)].backstack)); }
    break;

  case 113:
#line 920 "./sparql_p.y"
    {	/* [Virt]	SpongeOption	 ::=  QNAME PrecodeExpn */
		(yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (2)].box)); t_set_push (&((yyval.backstack)), (yyvsp[(2) - (2)].tree)); }
    break;

  case 114:
#line 922 "./sparql_p.y"
    {
		(yyval.backstack) = (yyvsp[(1) - (4)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(3) - (4)].box)); t_set_push (&((yyval.backstack)), (yyvsp[(4) - (4)].tree)); }
    break;

  case 115:
#line 927 "./sparql_p.y"
    { sparp_arg->sparp_in_precode_expn = 1; }
    break;

  case 116:
#line 929 "./sparql_p.y"
    { sparp_arg->sparp_in_precode_expn = 0; (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 117:
#line 933 "./sparql_p.y"
    {
		sparp_arg->sparp_allow_aggregates_in_expn &= ~1;
		spar_gp_init (sparp_arg, WHERE_L); }
    break;

  case 118:
#line 936 "./sparql_p.y"
    {;}
    break;

  case 119:
#line 940 "./sparql_p.y"
    {
		sparp_arg->sparp_allow_aggregates_in_expn &= ~1;
		spar_gp_init (sparp_arg, WHERE_L); }
    break;

  case 120:
#line 943 "./sparql_p.y"
    {;}
    break;

  case 121:
#line 944 "./sparql_p.y"
    {
		sparp_arg->sparp_allow_aggregates_in_expn &= ~1;
		spar_gp_init (sparp_arg, WHERE_L); }
    break;

  case 122:
#line 947 "./sparql_p.y"
    {;}
    break;

  case 123:
#line 952 "./sparql_p.y"
    { (yyval.tree) = spar_make_wm (sparp_arg, NULL, (yyvsp[(1) - (4)].trees), (yyvsp[(2) - (4)].tree), (yyvsp[(3) - (4)].trees), NULL, (SPART *)t_box_num (0), (yyvsp[(4) - (4)].tree)); }
    break;

  case 124:
#line 953 "./sparql_p.y"
    { (yyval.tree) = spar_make_wm (sparp_arg, NULL, (yyvsp[(1) - (6)].trees), (yyvsp[(2) - (6)].tree), (yyvsp[(3) - (6)].trees), (yyvsp[(4) - (6)].tree), (yyvsp[(5) - (6)].tree), (yyvsp[(6) - (6)].tree)); }
    break;

  case 125:
#line 954 "./sparql_p.y"
    { (yyval.tree) = spar_make_wm (sparp_arg, NULL, (yyvsp[(1) - (6)].trees), (yyvsp[(2) - (6)].tree), (yyvsp[(3) - (6)].trees), (yyvsp[(5) - (6)].tree), (yyvsp[(4) - (6)].tree), (yyvsp[(6) - (6)].tree)); }
    break;

  case 126:
#line 958 "./sparql_p.y"
    { (yyval.trees) = NULL; }
    break;

  case 127:
#line 959 "./sparql_p.y"
    {
		spar_selid_push_reused (sparp_arg, sparp_arg->sparp_env->spare_top_retval_selid);
		sparp_arg->sparp_allow_aggregates_in_expn |= 1; }
    break;

  case 128:
#line 962 "./sparql_p.y"
    {
		spar_selid_pop (sparp_arg); (yyval.trees) = (SPART **)t_revlist_to_array ((yyvsp[(4) - (4)].backstack));
		sparp_arg->sparp_allow_aggregates_in_expn &= ~1; }
    break;

  case 129:
#line 968 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 130:
#line 969 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (2)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(2) - (2)].tree)); }
    break;

  case 131:
#line 974 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(2) - (3)].tree); }
    break;

  case 132:
#line 975 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(2) - (3)].tree); }
    break;

  case 136:
#line 982 "./sparql_p.y"
    { (yyval.tree) = NULL; }
    break;

  case 137:
#line 983 "./sparql_p.y"
    {
		spar_selid_push_reused (sparp_arg, sparp_arg->sparp_env->spare_top_retval_selid);
		sparp_arg->sparp_allow_aggregates_in_expn |= 1; }
    break;

  case 138:
#line 986 "./sparql_p.y"
    {
		spar_selid_pop (sparp_arg); (yyval.tree) = (yyvsp[(3) - (3)].tree);
		sparp_arg->sparp_allow_aggregates_in_expn &= ~1; }
    break;

  case 139:
#line 992 "./sparql_p.y"
    { (yyval.trees) = NULL; }
    break;

  case 140:
#line 993 "./sparql_p.y"
    {
		spar_selid_push_reused (sparp_arg, sparp_arg->sparp_env->spare_top_retval_selid);
		sparp_arg->sparp_allow_aggregates_in_expn |= 1; }
    break;

  case 141:
#line 996 "./sparql_p.y"
    {
		spar_selid_pop (sparp_arg); (yyval.trees) = (SPART **)t_revlist_to_array ((yyvsp[(4) - (4)].backstack));
		sparp_arg->sparp_allow_aggregates_in_expn &= ~1; }
    break;

  case 142:
#line 1002 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 143:
#line 1003 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (2)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(2) - (2)].tree)); }
    break;

  case 144:
#line 1008 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 3, ORDER_L, (ptrlong)(yyvsp[(1) - (4)].token_type), (yyvsp[(3) - (4)].tree)); }
    break;

  case 145:
#line 1009 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 3, ORDER_L, (ptrlong)(yyvsp[(1) - (4)].token_type), (yyvsp[(3) - (4)].tree)); }
    break;

  case 146:
#line 1010 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 3, ORDER_L, (ptrlong)(yyvsp[(1) - (2)].token_type), (yyvsp[(2) - (2)].box)); }
    break;

  case 147:
#line 1011 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 3, ORDER_L, (ptrlong)ASC_L, (yyvsp[(1) - (1)].tree)); }
    break;

  case 148:
#line 1012 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 3, ORDER_L, (ptrlong)ASC_L, (yyvsp[(1) - (1)].tree)); }
    break;

  case 149:
#line 1013 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 3, ORDER_L, (ptrlong)ASC_L, (yyvsp[(1) - (1)].tree)); }
    break;

  case 150:
#line 1017 "./sparql_p.y"
    { (yyval.token_type) = ASC_L; }
    break;

  case 151:
#line 1018 "./sparql_p.y"
    { (yyval.token_type) = ASC_L; }
    break;

  case 152:
#line 1019 "./sparql_p.y"
    { (yyval.token_type) = DESC_L; }
    break;

  case 153:
#line 1023 "./sparql_p.y"
    { (yyval.tree) = NULL; }
    break;

  case 155:
#line 1028 "./sparql_p.y"
    { (yyval.tree) = ((NULL != (yyvsp[(2) - (2)].tree)) ? (yyvsp[(2) - (2)].tree) : (SPART *)(t_box_num_nonull (0))); }
    break;

  case 156:
#line 1032 "./sparql_p.y"
    { (yyval.tree) = NULL; }
    break;

  case 158:
#line 1037 "./sparql_p.y"
    { (yyval.tree) = ((NULL != (yyvsp[(2) - (2)].tree)) ? (yyvsp[(2) - (2)].tree) : ((SPART *)t_box_num_nonull (0))); }
    break;

  case 159:
#line 1041 "./sparql_p.y"
    { (yyval.tree) = NULL; }
    break;

  case 161:
#line 1046 "./sparql_p.y"
    {
		if (NULL != sparp_arg->sparp_env->spare_bindings_vars)
		  sparyyerror (sparp_arg, "Only one BINDINGS clause per query is allowed");
		if (sparp_arg->sparp_macro_mode)
		  sparyyerror (sparp_arg, "BINDINGS can not be used inside macro");
		spar_selid_push (sparp_arg); }
    break;

  case 162:
#line 1052 "./sparql_p.y"
    {
		spar_selid_pop (sparp_arg);
		sparp_arg->sparp_env->spare_bindings_vars = (SPART **)t_revlist_to_array ((yyvsp[(3) - (4)].backstack)); }
    break;

  case 163:
#line 1055 "./sparql_p.y"
    {
		sparp_arg->sparp_env->spare_bindings_rowset = (SPART ***)t_revlist_to_array ((yyvsp[(6) - (7)].backstack));
		(yyval.tree) = spar_make_bindings_inv_with_fake_equivs (sparp_arg,
			sparp_arg->sparp_env->spare_bindings_vars, sparp_arg->sparp_env->spare_bindings_rowset); }
    break;

  case 164:
#line 1062 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), spar_make_variable (sparp_arg, (yyvsp[(1) - (1)].box))); }
    break;

  case 165:
#line 1063 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (2)].backstack); t_set_push (&((yyval.backstack)), spar_make_variable (sparp_arg, (yyvsp[(2) - (2)].box))); }
    break;

  case 166:
#line 1067 "./sparql_p.y"
    { ; }
    break;

  case 167:
#line 1068 "./sparql_p.y"
    { sparyyerror (sparp_arg, "Global variable can not be used in the header of BINDINGS"); }
    break;

  case 168:
#line 1072 "./sparql_p.y"
    { (yyval.backstack) = NULL; }
    break;

  case 170:
#line 1077 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].trees)); }
    break;

  case 171:
#line 1078 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (2)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(2) - (2)].trees)); }
    break;

  case 172:
#line 1082 "./sparql_p.y"
    {
		(yyval.trees) = (SPART **)t_revlist_to_array ((yyvsp[(2) - (3)].backstack));
		if (BOX_ELEMENTS ((yyval.trees)) != BOX_ELEMENTS (sparp_arg->sparp_env->spare_bindings_vars))
		  sparyyerror (sparp_arg, "Number of values in a binding does not match number of variables to bind"); }
    break;

  case 173:
#line 1089 "./sparql_p.y"
    {(yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 174:
#line 1090 "./sparql_p.y"
    {(yyval.backstack) = (yyvsp[(1) - (2)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(2) - (2)].tree)); }
    break;

  case 180:
#line 1099 "./sparql_p.y"
    { sparyyerror (sparp_arg, "UNBOUND in BINDINGS is deprecated, use UNDEF instead"); (yyval.tree) = NULL; }
    break;

  case 181:
#line 1100 "./sparql_p.y"
    {(yyval.tree) = NULL; }
    break;

  case 182:
#line 1104 "./sparql_p.y"
    {
		(yyval.tree) = spar_gp_finalize (sparp_arg, (yyvsp[(3) - (3)].trees));
		sparp_validate_options_of_tree (sparp_arg, (yyval.tree), (yyval.tree)->_.gp.options); }
    break;

  case 183:
#line 1107 "./sparql_p.y"
    {
		(yyval.token_type) = (ptrlong)(sparp_env()->spare_context_gp_subtypes->data);
		if (NULL == sparp_env()->spare_context_sinvs) { /* There's an exception related to codegen-time optimization SERVICE { SELECT {x}} like it is SERVICE {x}, so no error right here. */
		    SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_BI, "subquery"); }
		if (SERVICE_L == (yyval.token_type))
		  spar_gp_init (sparp_arg, SELECT_L);
		spar_env_push (sparp_arg);
		sparp_arg->sparp_env->spare_top_retval_selid = spar_selid_push (sparp_arg);
                t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL);
		sparp_arg->sparp_allow_aggregates_in_expn <<= 1;
		sparp_arg->sparp_allow_aggregates_in_expn |= 1; }
    break;

  case 184:
#line 1120 "./sparql_p.y"
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

  case 185:
#line 1145 "./sparql_p.y"
    { }
    break;

  case 186:
#line 1146 "./sparql_p.y"
    { }
    break;

  case 187:
#line 1147 "./sparql_p.y"
    { }
    break;

  case 188:
#line 1148 "./sparql_p.y"
    {
		if (sparp_arg->sparp_macro_mode & SPARP_DEFBODY)
		  {
		    SPART *curmacro = sparp_arg->sparp_current_macro;
		    SPART *mpu;
		    int pos = sparp_namesake_macro_param (sparp_arg, curmacro, (yyvsp[(1) - (3)].box));
		    if (0 > pos)
		      spar_error (sparp_arg, "Pattern variable '%.100s' inside the body of a macro '%.100s' is not listed in list of macro parameters",
		        (yyvsp[(1) - (3)].box), curmacro->_.defmacro.mname );
		    mpu = spar_make_macropu (sparp_arg, (yyvsp[(1) - (3)].box), pos);
		    spar_gp_add_member (sparp_arg, mpu);
		  }
		else
		  sparyyerror (sparp_arg, "Ill formed triple pattern or macro pattern variable outside a macro body"); }
    break;

  case 189:
#line 1165 "./sparql_p.y"
    { spar_gp_add_member (sparp_arg, (yyvsp[(1) - (1)].tree)); }
    break;

  case 190:
#line 1166 "./sparql_p.y"
    { spar_gp_add_member (sparp_arg, (yyvsp[(1) - (1)].tree)); }
    break;

  case 191:
#line 1167 "./sparql_p.y"
    { spar_gp_add_member (sparp_arg, (yyvsp[(1) - (1)].tree)); }
    break;

  case 192:
#line 1168 "./sparql_p.y"
    { spar_gp_add_member (sparp_arg, (yyvsp[(1) - (1)].tree)); }
    break;

  case 193:
#line 1169 "./sparql_p.y"
    { spar_gp_add_member (sparp_arg, (yyvsp[(1) - (1)].tree)); }
    break;

  case 194:
#line 1170 "./sparql_p.y"
    { spar_gp_add_filter (sparp_arg, (yyvsp[(1) - (1)].tree)); }
    break;

  case 195:
#line 1174 "./sparql_p.y"
    { spar_gp_init (sparp_arg, OPTIONAL_L); }
    break;

  case 196:
#line 1174 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(4) - (4)].tree); }
    break;

  case 197:
#line 1175 "./sparql_p.y"
    { sparyyerror (sparp_arg, "Missing '{' after OPTIONAL keyword"); }
    break;

  case 198:
#line 1179 "./sparql_p.y"
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_QUAD_MAP, "QUAD MAP { ... } group pattern"); }
    break;

  case 199:
#line 1180 "./sparql_p.y"
    { t_set_push (&(sparp_env()->spare_context_qms), (yyvsp[(4) - (4)].tree)); }
    break;

  case 200:
#line 1181 "./sparql_p.y"
    {
		spar_gp_init (sparp_arg, 0); }
    break;

  case 201:
#line 1183 "./sparql_p.y"
    { t_set_pop (&(sparp_env()->spare_context_qms)); (yyval.tree) = (yyvsp[(8) - (8)].tree); }
    break;

  case 202:
#line 1188 "./sparql_p.y"
    { t_set_push (&(sparp_env()->spare_context_graphs), (yyvsp[(2) - (2)].tree)); }
    break;

  case 203:
#line 1189 "./sparql_p.y"
    {
		spar_gp_init (sparp_arg, 0);
		spar_gp_add_filters_for_named_graph (sparp_arg); }
    break;

  case 204:
#line 1192 "./sparql_p.y"
    { t_set_pop (&(sparp_env()->spare_context_graphs)); (yyval.tree) = (yyvsp[(6) - (6)].tree); }
    break;

  case 205:
#line 1196 "./sparql_p.y"
    { spar_gp_init (sparp_arg, 0); }
    break;

  case 206:
#line 1196 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(3) - (3)].tree); }
    break;

  case 207:
#line 1197 "./sparql_p.y"
    {
		sparp_env()->spare_good_graph_varnames = sparp_env()->spare_good_graph_bmk;
		if (UNION_L != (yyvsp[(1) - (3)].tree)->_.gp.subtype) {
		    spar_gp_init (sparp_arg, UNION_L);
		    spar_gp_add_member (sparp_arg, (yyvsp[(1) - (3)].tree)); }
		spar_gp_init (sparp_arg, 0); }
    break;

  case 208:
#line 1203 "./sparql_p.y"
    {
		if (UNION_L != (yyvsp[(1) - (5)].tree)->_.gp.subtype) {
		    spar_gp_add_member (sparp_arg, (yyvsp[(5) - (5)].tree));
		    (yyval.tree) = spar_gp_finalize (sparp_arg, NULL); }
		else {
		    (yyval.tree)->_.gp.members = (SPART **)t_list_concat_tail ((caddr_t)((yyval.tree)->_.gp.members), 1, (yyvsp[(5) - (5)].tree));
		    (yyval.tree) = (yyvsp[(1) - (5)].tree); }
		}
    break;

  case 209:
#line 1214 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(3) - (4)].tree); }
    break;

  case 210:
#line 1215 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 211:
#line 1216 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 212:
#line 1217 "./sparql_p.y"
    {		/*... | 'NOT'? 'EXISTS' DatasetClause* WhereClause	*/
		if ((yyvsp[(2) - (3)].token_type))
		  (yyval.tree) = (yyvsp[(3) - (3)].tree);
		else
		  SPAR_BIN_OP ((yyval.tree), BOP_NOT, (yyvsp[(3) - (3)].tree), NULL); }
    break;

  case 213:
#line 1222 "./sparql_p.y"
    {		/*... | 'MINUS' DatasetClause* WhereClause */
		/*!!! Dirty hack! Works wrong if MINUS is at the middle of the GP (before smth or not a 2-nd item) */
		  SPAR_BIN_OP ((yyval.tree), BOP_NOT, (yyvsp[(2) - (2)].tree), NULL); }
    break;

  case 214:
#line 1228 "./sparql_p.y"
    { (yyval.token_type) = 1; }
    break;

  case 215:
#line 1229 "./sparql_p.y"
    { (yyval.token_type) = 0; }
    break;

  case 216:
#line 1233 "./sparql_p.y"
    {
		SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_SPARQL11_DRAFT, "SPARQL 1.1 FILTER EXISTS / FILTER NOT EXISTS test");
		spar_gp_init (sparp_arg, SELECT_L);
		spar_env_push (sparp_arg);
		spar_selid_push (sparp_arg);
		t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL);
		sparp_arg->sparp_allow_aggregates_in_expn <<= 1; }
    break;

  case 217:
#line 1242 "./sparql_p.y"
    {
		SPART *subselect_top;
		SPART *where_gp;
		where_gp = spar_gp_finalize (sparp_arg, NULL);
		subselect_top = spar_make_top (sparp_arg, ASK_L, (SPART **)t_list(0), spar_selid_pop (sparp_arg),
		  where_gp, NULL, NULL, NULL, (SPART *)t_box_num(1), (SPART *)t_box_num(0), NULL );
		spar_env_pop (sparp_arg);
		(yyval.tree) = spar_gp_finalize_with_subquery (sparp_arg, (yyvsp[(4) - (4)].trees), subselect_top);
		sparp_arg->sparp_allow_aggregates_in_expn >>= 1; }
    break;

  case 218:
#line 1254 "./sparql_p.y"
    {
		caddr_t sinv_storage_uri;
		sparp_arg->sparp_query_uses_sinvs++;
		sinv_storage_uri = uname_virtrdf_ns_uri_DefaultServiceStorage; /*!!! TBD config */
		/* if config is added above then tweak the check in sparp_gp_trav_add_graph_perm_read_filters and in SPAR_REQ_TOP case of ssg_sdprint_tree() */
		(yyval.boxes) = t_list (5, t_box_num(sparp_arg->sparp_permitted_syntax), sparp_arg->sparp_env->spare_storage_name, sparp_arg->sparp_storage, (ptrlong)(sparp_arg->sparp_storage_is_set), sinv_storage_uri);
		sparp_arg->sparp_inner_permitted_syntax = -1;
		sparp_arg->sparp_env->spare_storage_name = sinv_storage_uri;
		sparp_arg->sparp_storage = sparp_find_storage_by_name (sinv_storage_uri);
		sparp_arg->sparp_storage_is_set = 1;
		}
    break;

  case 219:
#line 1265 "./sparql_p.y"
    {
		(yyval.box) = t_alloc (sizeof (sparp_sources_t));
		if (-1 == sparp_arg->sparp_inner_permitted_syntax)
		  sparp_arg->sparp_permitted_syntax = SSG_SD_GLOBALS | sparp_find_language_dialect_by_service (sparp_arg, (SPART *)(yyvsp[(2) - (4)].box));
		else
		  sparp_arg->sparp_permitted_syntax = SSG_SD_GLOBALS | sparp_arg->sparp_inner_permitted_syntax;
		memcpy ((yyval.box), &(sparp_arg->sparp_env->spare_src), sizeof (sparp_sources_t));
		memset (&(sparp_arg->sparp_env->spare_src), 0, sizeof (sparp_sources_t)); }
    break;

  case 220:
#line 1273 "./sparql_p.y"
    {
		caddr_t sinv_storage_uri = (yyvsp[(3) - (7)].boxes)[4];
		SPART **sources;
		SPART *sinv;
		if ((NULL == sparp_arg->sparp_env->spare_src.ssrc_default_graphs) && (NULL == sparp_arg->sparp_env->spare_src.ssrc_named_graphs))
		  memcpy (&(sparp_arg->sparp_env->spare_src), (yyvsp[(5) - (7)].box), sizeof (sparp_sources_t));
		sources = spar_make_sources_like_top (sparp_arg, SELECT_L);
		sinv = spar_make_service_inv (sparp_arg, (yyvsp[(2) - (7)].box), (yyvsp[(4) - (7)].backstack), sparp_arg->sparp_permitted_syntax, sources, sinv_storage_uri);
		spar_add_service_inv_to_sg (sparp_arg, sinv);
		t_set_push (&(sparp_env()->spare_context_sinvs), sinv);
		spar_gp_init (sparp_arg, SERVICE_L); }
    break;

  case 221:
#line 1284 "./sparql_p.y"
    {
		sparp_arg->sparp_permitted_syntax = unbox((yyvsp[(3) - (9)].boxes)[0]);
		sparp_arg->sparp_env->spare_storage_name = (yyvsp[(3) - (9)].boxes)[1];
		sparp_arg->sparp_storage = (quad_storage_t *)((yyvsp[(3) - (9)].boxes)[2]);
		sparp_arg->sparp_storage_is_set = (ptrlong)((yyvsp[(3) - (9)].boxes)[3]);
		(yyvsp[(9) - (9)].tree)->_.gp.options = (SPART **)t_list_concat_tail (
		  (caddr_t)((yyvsp[(9) - (9)].tree)->_.gp.options), 2,
		  SPAR_SERVICE_INV, t_set_pop (&(sparp_env()->spare_context_sinvs)) );
		memcpy (&(sparp_arg->sparp_env->spare_src), (yyvsp[(5) - (9)].box), sizeof (sparp_sources_t));
		(yyval.tree) = (yyvsp[(9) - (9)].tree); }
    break;

  case 222:
#line 1296 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (SPART *)((ptrlong)IN_L)); t_set_push (&((yyval.backstack)), (SPART *)((ptrlong)_STAR)); }
    break;

  case 223:
#line 1297 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(2) - (3)].backstack); }
    break;

  case 224:
#line 1301 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].trees)[0]); t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].trees)[1]); }
    break;

  case 225:
#line 1302 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (2)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(2) - (2)].trees)[0]); t_set_push (&((yyval.backstack)), (yyvsp[(2) - (2)].trees)[1]); }
    break;

  case 226:
#line 1306 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (yyvsp[(1) - (2)].box), (yyvsp[(2) - (2)].backstack)); }
    break;

  case 227:
#line 1307 "./sparql_p.y"
    {
		caddr_t defname = (yyvsp[(2) - (3)].box);
		dk_set_t defvals = (yyvsp[(3) - (3)].backstack);
		if (!strcmp (defname, "lang:dialect"))
		  {
		    if ((NULL == defvals) || (NULL != defvals->next) || (SPARQL_INTEGER != ((ptrlong *)(defvals->data))[0]))
		      sparyyerror (sparp_arg, "define lang:dialect needs an integer");
		    sparp_arg->sparp_inner_permitted_syntax = unbox (((caddr_t *)(defvals->data))[1]) | SSG_SD_GLOBALS;
		  }
		(yyval.trees) = (SPART **)t_list (2, (SPART *)((ptrlong)DEFINE_L), t_list (2, defname, t_revlist_to_array(defvals))); }
    break;

  case 228:
#line 1317 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (SPART *)((ptrlong)IN_L), (yyvsp[(2) - (2)].backstack)); }
    break;

  case 229:
#line 1318 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (SPART *)((ptrlong)IN_L), (SPART *)((ptrlong)_STAR)); }
    break;

  case 230:
#line 1322 "./sparql_p.y"
    { spar_gp_init (sparp_arg, CONSTRUCT_L); }
    break;

  case 231:
#line 1323 "./sparql_p.y"
    {
		int g_grp_count = sparp_env()->spare_ctor_g_grp_count;
		int g_may_vary = 0;
		(yyval.tree) = spar_gp_finalize (sparp_arg, NULL);
		if (1 < (g_grp_count + (sparp_env()->spare_ctor_dflt_g_tmpl_count ? 1 : 0)))
		  g_may_vary = 1;
		if ((0 == g_may_vary) && (0 < BOX_ELEMENTS ((yyval.tree)->_.gp.members)))
		  {
		    SPART *g = (yyval.tree)->_.gp.members[0]->_.triple.tr_graph;
		    if ((SPAR_QNAME != SPART_TYPE (g)) && !SPART_IS_DEFAULT_GRAPH_BLANK (g))
		      g_may_vary = 1;
		  }
		if (g_may_vary)
		  (yyval.tree)->_.gp.options = (SPART **)t_list (2, (SPART *)((ptrlong)QUAD_L), t_box_num_nonull (g_grp_count));
		sparp_env()->spare_ctor_g_grp_count = 0;
		sparp_env()->spare_ctor_dflt_g_tmpl_count = 0; }
    break;

  case 232:
#line 1342 "./sparql_p.y"
    { }
    break;

  case 233:
#line 1343 "./sparql_p.y"
    { }
    break;

  case 234:
#line 1344 "./sparql_p.y"
    { }
    break;

  case 235:
#line 1345 "./sparql_p.y"
    { }
    break;

  case 236:
#line 1349 "./sparql_p.y"
    { }
    break;

  case 237:
#line 1350 "./sparql_p.y"
    { }
    break;

  case 238:
#line 1351 "./sparql_p.y"
    { }
    break;

  case 239:
#line 1355 "./sparql_p.y"
    { }
    break;

  case 240:
#line 1356 "./sparql_p.y"
    { }
    break;

  case 241:
#line 1357 "./sparql_p.y"
    { }
    break;

  case 242:
#line 1361 "./sparql_p.y"
    { }
    break;

  case 243:
#line 1362 "./sparql_p.y"
    { }
    break;

  case 244:
#line 1366 "./sparql_p.y"
    { }
    break;

  case 245:
#line 1367 "./sparql_p.y"
    { }
    break;

  case 246:
#line 1371 "./sparql_p.y"
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_SPARQL11_DRAFT, "SPARQL 1.1 quad constructor template"); }
    break;

  case 247:
#line 1372 "./sparql_p.y"
    {
		sparp_env()->spare_ctor_g_grp_count++;
		t_set_push (&(sparp_env()->spare_context_graphs), (yyvsp[(3) - (3)].tree)); }
    break;

  case 248:
#line 1375 "./sparql_p.y"
    { t_set_pop (&(sparp_env()->spare_context_graphs)); }
    break;

  case 249:
#line 1379 "./sparql_p.y"
    { t_set_push (&(sparp_env()->spare_context_subjects), (yyvsp[(1) - (1)].tree)); }
    break;

  case 250:
#line 1380 "./sparql_p.y"
    { t_set_pop (&(sparp_env()->spare_context_subjects)); (yyval.nothing) = (yyvsp[(3) - (3)].nothing); }
    break;

  case 251:
#line 1381 "./sparql_p.y"
    { t_set_push (&(sparp_env()->spare_context_subjects), (yyvsp[(1) - (1)].tree)); }
    break;

  case 252:
#line 1382 "./sparql_p.y"
    { t_set_pop (&(sparp_env()->spare_context_subjects)); }
    break;

  case 253:
#line 1383 "./sparql_p.y"
    { spar_gp_add_member (sparp_arg, (yyvsp[(1) - (1)].tree)); }
    break;

  case 254:
#line 1387 "./sparql_p.y"
    { }
    break;

  case 255:
#line 1388 "./sparql_p.y"
    { }
    break;

  case 256:
#line 1394 "./sparql_p.y"
    { t_set_push (&(sparp_env()->spare_context_predicates), (yyvsp[(1) - (1)].tree)); }
    break;

  case 257:
#line 1395 "./sparql_p.y"
    { t_set_pop (&(sparp_env()->spare_context_predicates)); }
    break;

  case 258:
#line 1397 "./sparql_p.y"
    { t_set_push (&(sparp_env()->spare_context_predicates), (yyvsp[(3) - (3)].tree)); }
    break;

  case 259:
#line 1398 "./sparql_p.y"
    { t_set_pop (&(sparp_env()->spare_context_predicates)); }
    break;

  case 260:
#line 1399 "./sparql_p.y"
    { sparyyerror (sparp_arg, "Dot immediately after semicolon is permitted in pure SPARQL but not in SPARQL-BI"); }
    break;

  case 261:
#line 1400 "./sparql_p.y"
    { sparyyerror (sparp_arg, "Predicate expected after semicolon"); }
    break;

  case 262:
#line 1401 "./sparql_p.y"
    { sparyyerror (sparp_arg, "Predicate expected"); }
    break;

  case 263:
#line 1405 "./sparql_p.y"
    { }
    break;

  case 264:
#line 1406 "./sparql_p.y"
    { }
    break;

  case 265:
#line 1407 "./sparql_p.y"
    { sparyyerror (sparp_arg, "Semicolon immediately after colon is permitted in pure SPARQL but not in SPARQL-BI"); }
    break;

  case 266:
#line 1408 "./sparql_p.y"
    { sparyyerror (sparp_arg, "Dot immediately after colon is permitted in pure SPARQL but not in SPARQL-BI"); }
    break;

  case 267:
#line 1409 "./sparql_p.y"
    { sparyyerror (sparp_arg, "Object expected after comma"); }
    break;

  case 268:
#line 1410 "./sparql_p.y"
    { sparyyerror (sparp_arg, "Object expected"); }
    break;

  case 269:
#line 1414 "./sparql_p.y"
    {
		spar_gp_add_triplelike (sparp_arg, NULL, NULL, NULL, (yyvsp[(1) - (2)].tree), NULL, (yyvsp[(2) - (2)].trees), 0x0); }
    break;

  case 270:
#line 1419 "./sparql_p.y"
    { (yyval.trees) = NULL; }
    break;

  case 271:
#line 1420 "./sparql_p.y"
    {
		if (CONSTRUCT_L == SPARP_ENV_CONTEXT_GP_SUBTYPE(sparp_arg))
		  sparyyerror (sparp_arg, "Triple options are not allowed in constructor template");
		SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_OPTION, "OPTION () triple matching configuration"); }
    break;

  case 272:
#line 1424 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_revlist_to_array ((yyvsp[(4) - (5)].backstack)); }
    break;

  case 273:
#line 1428 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), ((SPART **)((yyvsp[(1) - (1)].trees)))[0]); t_set_push (&((yyval.backstack)), ((SPART **)((yyvsp[(1) - (1)].trees)))[1]); }
    break;

  case 274:
#line 1429 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (3)].backstack);  t_set_push (&((yyval.backstack)), ((SPART **)((yyvsp[(3) - (3)].trees)))[0]); t_set_push (&((yyval.backstack)), ((SPART **)((yyvsp[(3) - (3)].trees)))[1]); }
    break;

  case 275:
#line 1433 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)IFP_L, (ptrlong)1); }
    break;

  case 276:
#line 1434 "./sparql_p.y"
    {
		if (strcasecmp ((yyvsp[(2) - (2)].box), "none"))
		  (yyval.trees) = (SPART **)t_list (2, (ptrlong)INFERENCE_L, (yyvsp[(2) - (2)].box));
		else
		  (yyval.trees) = (SPART **)t_list (2, (ptrlong)INFERENCE_L, (ptrlong)1); }
    break;

  case 277:
#line 1439 "./sparql_p.y"
    {
		  (yyval.trees) = (SPART **)t_list (2, (ptrlong)INFERENCE_L, sparp_expand_qname_prefix (sparp_arg, (yyvsp[(2) - (2)].box))); }
    break;

  case 278:
#line 1441 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)INFERENCE_L, sparp_expand_q_iri_ref (sparp_arg, (yyvsp[(2) - (2)].box))); }
    break;

  case 279:
#line 1442 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)INFERENCE_L, (yyvsp[(2) - (2)].box)); }
    break;

  case 280:
#line 1443 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)OFFBAND_L, (yyvsp[(2) - (2)].tree)); }
    break;

  case 281:
#line 1444 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)SCORE_L, (yyvsp[(2) - (2)].tree)); }
    break;

  case 282:
#line 1445 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)SCORE_LIMIT_L, (yyvsp[(2) - (2)].tree)); }
    break;

  case 283:
#line 1446 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)TABLE_OPTION_L, (yyvsp[(2) - (2)].box)); }
    break;

  case 284:
#line 1447 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)T_CYCLES_ONLY_L, (ptrlong)1); }
    break;

  case 285:
#line 1448 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)T_DIRECTION_L, (yyvsp[(2) - (2)].box)); }
    break;

  case 286:
#line 1449 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)T_DISTINCT_L, (ptrlong)1); }
    break;

  case 287:
#line 1450 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)T_END_FLAG_L, (yyvsp[(2) - (2)].box)); }
    break;

  case 288:
#line 1451 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)T_EXISTS_L, (ptrlong)1); }
    break;

  case 289:
#line 1452 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)T_FINAL_AS_L, (yyvsp[(2) - (2)].tree)); }
    break;

  case 290:
#line 1453 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)T_IN_L, spartlist (sparp_arg, 2, SPAR_LIST, t_revlist_to_array ((yyvsp[(3) - (4)].backstack)))); }
    break;

  case 291:
#line 1454 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)T_MIN_L, (yyvsp[(2) - (2)].tree)); }
    break;

  case 292:
#line 1455 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)T_MAX_L, (yyvsp[(2) - (2)].tree)); }
    break;

  case 293:
#line 1456 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)T_NO_CYCLES_L, (ptrlong)1); }
    break;

  case 294:
#line 1457 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)T_NO_ORDER_L, (ptrlong)1); }
    break;

  case 295:
#line 1458 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)T_OUT_L, spartlist (sparp_arg, 2, SPAR_LIST, t_revlist_to_array ((yyvsp[(3) - (4)].backstack)))); }
    break;

  case 296:
#line 1459 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)T_SHORTEST_ONLY_L, (ptrlong)1); }
    break;

  case 297:
#line 1460 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)T_STEP_L, spartlist (sparp_arg, 4, SPAR_ALIAS, (yyvsp[(3) - (6)].tree), (yyvsp[(6) - (6)].tree)->_.var.vname, SSG_VALMODE_AUTO)); }
    break;

  case 298:
#line 1461 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)T_STEP_L, spartlist (sparp_arg, 4, SPAR_ALIAS, (yyvsp[(3) - (6)].box), (yyvsp[(6) - (6)].tree)->_.var.vname, SSG_VALMODE_AUTO)); }
    break;

  case 299:
#line 1462 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (ptrlong)TRANSITIVE_L, (ptrlong)1); }
    break;

  case 300:
#line 1463 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (yyvsp[(1) - (4)].token_type), spartlist (sparp_arg, 2, SPAR_LIST, t_revlist_to_array ((yyvsp[(3) - (4)].backstack)))); }
    break;

  case 301:
#line 1464 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, (yyvsp[(1) - (1)].token_type), (ptrlong)1); }
    break;

  case 302:
#line 1468 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 303:
#line 1469 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (3)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].tree)); }
    break;

  case 304:
#line 1473 "./sparql_p.y"
    { (yyval.token_type) = SAME_AS_L; }
    break;

  case 305:
#line 1474 "./sparql_p.y"
    { (yyval.token_type) = SAME_AS_O_L; }
    break;

  case 306:
#line 1475 "./sparql_p.y"
    { (yyval.token_type) = SAME_AS_P_L; }
    break;

  case 307:
#line 1476 "./sparql_p.y"
    { (yyval.token_type) = SAME_AS_S_L; }
    break;

  case 308:
#line 1477 "./sparql_p.y"
    { (yyval.token_type) = SAME_AS_S_O_L; }
    break;

  case 310:
#line 1482 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 2, SPAR_QNAME, uname_rdf_ns_uri_type); }
    break;

  case 311:
#line 1483 "./sparql_p.y"
    { sparyyerror (sparp_arg, "Predicate expected (i.e., variable or IRI ref or a backquoted expn or 'a' keyword)"); }
    break;

  case 312:
#line 1487 "./sparql_p.y"
    {	/* [35]	BlankNodePropertyList	 ::=  '[' PropertyListNotEmpty ']'	*/
		SPART *bn = spar_make_blank_node (sparp_arg, spar_mkid (sparp_arg, "_:lsqbra"), 1);
		t_set_push (&(sparp_env()->spare_context_subjects), bn); }
    break;

  case 313:
#line 1490 "./sparql_p.y"
    {
		(yyval.tree) = t_set_pop (&(sparp_env()->spare_context_subjects)); }
    break;

  case 314:
#line 1492 "./sparql_p.y"
    {	/* [36]	Collection	 ::=  '(' GraphNode* ')'	*/
		SPART *bn = spar_make_blank_node (sparp_arg, spar_mkid (sparp_arg, "_:topcons"), 1);
		t_set_push (&(sparp_env()->spare_context_subjects), bn);
		t_set_push (&(sparp_env()->spare_context_subjects), bn); }
    break;

  case 315:
#line 1496 "./sparql_p.y"
    {
		spar_gp_add_triplelike (sparp_arg,
		  NULL, NULL,
		  spartlist (sparp_arg, 2, SPAR_QNAME, uname_rdf_ns_uri_rest),
		  spartlist (sparp_arg, 2, SPAR_QNAME, uname_rdf_ns_uri_nil),
		  NULL, NULL, 0x0 );
		t_set_pop (&(sparp_env()->spare_context_subjects));
		(yyval.tree) = t_set_pop (&(sparp_env()->spare_context_subjects)); }
    break;

  case 316:
#line 1504 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 2, SPAR_QNAME, uname_rdf_ns_uri_nil); }
    break;

  case 317:
#line 1508 "./sparql_p.y"
    {}
    break;

  case 318:
#line 1509 "./sparql_p.y"
    {}
    break;

  case 319:
#line 1513 "./sparql_p.y"
    {
		spar_gp_add_triplelike (sparp_arg, NULL, NULL,
		  spartlist (sparp_arg, 2, SPAR_QNAME, uname_rdf_ns_uri_first),
		  (yyvsp[(1) - (1)].tree), NULL, NULL, 0x0 ); }
    break;

  case 320:
#line 1517 "./sparql_p.y"
    {
		SPART *bn = spar_make_blank_node (sparp_arg, spar_mkid (sparp_arg, "_:cons"), 1);
		spar_gp_add_triplelike (sparp_arg,
		  NULL, NULL,
		  spartlist (sparp_arg, 2, SPAR_QNAME, uname_rdf_ns_uri_rest),
		  bn, NULL, NULL, 0x0 );
		sparp_env()->spare_context_subjects->data = bn;
		spar_gp_add_triplelike (sparp_arg, NULL, NULL,
		  spartlist (sparp_arg, 2, SPAR_QNAME, uname_rdf_ns_uri_first),
		  (yyvsp[(2) - (2)].tree), NULL, NULL, 0x0 ); }
    break;

  case 325:
#line 1540 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 326:
#line 1541 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (2)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(2) - (2)].tree)); }
    break;

  case 330:
#line 1548 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(2) - (3)].tree); }
    break;

  case 338:
#line 1565 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (3)].tree)); t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].tree)); }
    break;

  case 339:
#line 1566 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (3)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].tree)); }
    break;

  case 340:
#line 1570 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 341:
#line 1571 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (2)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(2) - (2)].tree)); }
    break;

  case 342:
#line 1575 "./sparql_p.y"
    { (yyval.tree) = spar_make_funcall (sparp_arg, 1, (yyvsp[(1) - (3)].box), (SPART **)t_list (1, (yyvsp[(2) - (3)].tree))); }
    break;

  case 343:
#line 1576 "./sparql_p.y"
    { (yyval.tree) = spar_make_funcall (sparp_arg, 1, (yyvsp[(1) - (3)].box), (SPART **)t_list (1, (ptrlong)1)); }
    break;

  case 344:
#line 1577 "./sparql_p.y"
    { (yyval.tree) = spar_make_funcall (sparp_arg, DISTINCT_L, (yyvsp[(1) - (4)].box), (SPART **)t_list (1, (yyvsp[(3) - (4)].tree))); }
    break;

  case 345:
#line 1581 "./sparql_p.y"
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_BI, "aggregate function call"); (yyval.box) = (yyvsp[(1) - (1)].box); }
    break;

  case 346:
#line 1585 "./sparql_p.y"
    { (yyval.box) = t_box_dv_uname_string ("SPECIAL::bif:COUNT"); }
    break;

  case 347:
#line 1586 "./sparql_p.y"
    { (yyval.box) = t_box_dv_uname_string ("SPECIAL::bif:AVG"); }
    break;

  case 348:
#line 1587 "./sparql_p.y"
    { (yyval.box) = t_box_dv_uname_string ("SPECIAL::bif:MIN"); }
    break;

  case 349:
#line 1588 "./sparql_p.y"
    { (yyval.box) = t_box_dv_uname_string ("SPECIAL::bif:MAX"); }
    break;

  case 350:
#line 1589 "./sparql_p.y"
    { (yyval.box) = t_box_dv_uname_string ("SPECIAL::bif:SUM"); }
    break;

  case 351:
#line 1593 "./sparql_p.y"
    {
		if (sparp_arg->sparp_macro_mode & SPARP_DEFBODY)
		  {
		    SPART *curmacro = sparp_arg->sparp_current_macro;
		    int pos = sparp_namesake_macro_param (sparp_arg, curmacro, (yyvsp[(1) - (1)].box));
		    if (-1 > pos)
		      {
		        spar_error (sparp_arg, "Variable '%.100s' inside the body of a macro '%.100s' is not listed in list of macro arguments or list of local names",
		        (yyvsp[(1) - (1)].box), curmacro->_.defmacro.mname );
		      }
		    if (0 <= pos)
		      (yyval.tree) = spar_make_macropu (sparp_arg, (yyvsp[(1) - (1)].box), pos);
		    else
		      (yyval.tree) = spar_make_param_or_variable (sparp_arg, (yyvsp[(1) - (1)].box));
		  }
		else
		  (yyval.tree) = spar_make_param_or_variable (sparp_arg, (yyvsp[(1) - (1)].box)); }
    break;

  case 352:
#line 1610 "./sparql_p.y"
    {
		if (sparp_arg->sparp_macro_mode & SPARP_DEFBODY)
		  spar_error (sparp_arg, "Global variables are not allowed inside the body of a macro '%.100s'",
		    sparp_arg->sparp_current_macro->_.defmacro.mname );
		(yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 353:
#line 1615 "./sparql_p.y"
    {
		if (sparp_arg->sparp_macro_mode & SPARP_DEFBODY)
		  spar_error (sparp_arg, "Property path variables are not allowed inside the body of a macro '%.100s'",
		    sparp_arg->sparp_current_macro->_.defmacro.mname );
		(yyval.tree) = spar_add_propvariable (sparp_arg, (yyvsp[(1) - (2)].tree), (ptrlong)((yyvsp[(2) - (2)].trees)[0]), (yyvsp[(2) - (2)].trees)[1], (ptrlong)((yyvsp[(2) - (2)].trees)[2]), (caddr_t)((yyvsp[(2) - (2)].trees)[3]) ); }
    break;

  case 354:
#line 1623 "./sparql_p.y"
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_GLOBALS, "global variable"); (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 355:
#line 1628 "./sparql_p.y"
    { (yyval.tree) = spar_make_variable (sparp_arg, (yyvsp[(1) - (1)].box)); }
    break;

  case 356:
#line 1629 "./sparql_p.y"
    { (yyval.tree) = spar_make_variable (sparp_arg, (yyvsp[(1) - (1)].box)); }
    break;

  case 360:
#line 1637 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 361:
#line 1638 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); spar_change_sign (&((yyvsp[(2) - (2)].tree)->_.lit.val)); }
    break;

  case 364:
#line 1641 "./sparql_p.y"
    { (yyval.tree) = (SPART *)t_box_dv_uname_string ("http://www.w3.org/1999/02/22-rdf-syntax-ns#nil"); }
    break;

  case 366:
#line 1646 "./sparql_p.y"
    {
		dk_set_t gp_st = sparp_env()->spare_context_gp_subtypes;
		if (2 & sparp_arg->sparp_in_precode_expn)
		  spar_error (sparp_arg, "Backquoted expressions are not allowed in constant clauses");
		(yyval.token_type) = ((NULL == gp_st) ? -1 : (ptrlong)(gp_st->data));
		if (CONSTRUCT_L == (yyval.token_type))
		  SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_BI, "backquoted expression in CONSTRUCT"); }
    break;

  case 367:
#line 1653 "./sparql_p.y"
    {
		  if ((-1 == (yyvsp[(2) - (4)].token_type)) || (CONSTRUCT_L == (yyvsp[(2) - (4)].token_type)))
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

  case 368:
#line 1668 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 4, SPAR_ALIAS, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].box), SSG_VALMODE_AUTO); }
    break;

  case 369:
#line 1669 "./sparql_p.y"
    { /* [44]	ConditionalOrExpn	 ::=  ConditionalAndExpn ( '||' ConditionalAndExpn )*	*/
		  SPAR_BIN_OP ((yyval.tree), BOP_OR, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 370:
#line 1671 "./sparql_p.y"
    { /* [45]	ConditionalAndExpn	 ::=  ValueLogical ( '&&' ValueLogical )*	*/
					/* [46]	ValueLogical	 ::=  RelationalExpn	*/
		  SPAR_BIN_OP ((yyval.tree), BOP_AND, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 371:
#line 1674 "./sparql_p.y"
    {	/* [47]*	RelationalExpn	 ::=  NumericExpn	*/
					/*... ( ( ('='|'!='|'<'|'>'|'<='|'>='|'LIKE') NumericExpn ) */
					/*...   | ( 'IN' '(' Expns ')' ) )?	*/
		  SPAR_BIN_OP ((yyval.tree), BOP_EQ, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 372:
#line 1678 "./sparql_p.y"
    { SPAR_BIN_OP ((yyval.tree), BOP_NEQ, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 373:
#line 1679 "./sparql_p.y"
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_LIKE, "LIKE operator"); }
    break;

  case 374:
#line 1680 "./sparql_p.y"
    {	/* Virtuoso-specific extension of [47] */
		(yyval.tree) = sparp_make_builtin_call (sparp_arg, LIKE_L, (SPART **)t_list (2, (yyvsp[(1) - (4)].tree), (yyvsp[(4) - (4)].tree))); }
    break;

  case 375:
#line 1682 "./sparql_p.y"
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_IN, "IN operator"); }
    break;

  case 376:
#line 1683 "./sparql_p.y"
    {	/* Virtuoso-specific extension of [47] */
		  dk_set_t args = (yyvsp[(5) - (6)].backstack);
                  if (1 == dk_set_length (args))
                    {
		      SPAR_BIN_OP ((yyval.tree), BOP_EQ, (yyvsp[(1) - (6)].tree), args->data);
                    }
                  else
                    {
                      t_set_push (&args, (yyvsp[(1) - (6)].tree));
		      (yyval.tree) = sparp_make_builtin_call (sparp_arg, IN_L,
		        (SPART **)t_list_to_array (args) /* NOT t_revlist_to_array (args), note special first element pushed */ );
                    }
		}
    break;

  case 377:
#line 1696 "./sparql_p.y"
    { SPAR_BIN_OP ((yyval.tree), BOP_LT, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 378:
#line 1697 "./sparql_p.y"
    { SPAR_BIN_OP ((yyval.tree), BOP_LT, (yyvsp[(3) - (3)].tree), (yyvsp[(1) - (3)].tree)); }
    break;

  case 379:
#line 1698 "./sparql_p.y"
    { SPAR_BIN_OP ((yyval.tree), BOP_LTE, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 380:
#line 1699 "./sparql_p.y"
    { SPAR_BIN_OP ((yyval.tree), BOP_LTE, (yyvsp[(3) - (3)].tree), (yyvsp[(1) - (3)].tree)); }
    break;

  case 381:
#line 1700 "./sparql_p.y"
    {	/* [49]	AdditiveExpn	 ::=  MultiplicativeExpn ( ('+'|'-') MultiplicativeExpn )*	*/
		if (sparp_arg->sparp_rset_lexdepth_plus_1 == (yyvsp[(2) - (3)].token_type) + 1)
		  sparyyerror (sparp_arg, "Ambiguous (unary or binary) plus operator in result list, please add \"(\" and \")\"");
		  SPAR_BIN_OP ((yyval.tree), BOP_PLUS, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 382:
#line 1704 "./sparql_p.y"
    {
		if (sparp_arg->sparp_rset_lexdepth_plus_1 == (yyvsp[(2) - (3)].token_type) + 1)
		  sparyyerror (sparp_arg, "Ambiguous (unary or binary) minus operator in result list, please add \"(\" and \")\"");
		SPAR_BIN_OP ((yyval.tree), BOP_MINUS, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 383:
#line 1708 "./sparql_p.y"
    {	/* [50]	MultiplicativeExpn	 ::=  UnaryExpn ( ('*'|'/') UnaryExpn )*	*/
		  SPAR_BIN_OP ((yyval.tree), BOP_TIMES, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 384:
#line 1710 "./sparql_p.y"
    { SPAR_BIN_OP ((yyval.tree), BOP_DIV, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 385:
#line 1711 "./sparql_p.y"
    {		/* [51]*	UnaryExpn	 ::=   ('!'|'NOT'|'+'|'-')? PrimaryExpn */
		SPAR_BIN_OP ((yyval.tree), BOP_NOT, (yyvsp[(2) - (2)].tree), NULL); }
    break;

  case 386:
#line 1713 "./sparql_p.y"
    {
		SPAR_BIN_OP ((yyval.tree), BOP_NOT, (yyvsp[(2) - (2)].tree), NULL); }
    break;

  case 387:
#line 1715 "./sparql_p.y"
    {
		SPAR_BIN_OP ((yyval.tree), BOP_PLUS,
		  spartlist (sparp_arg, 4, SPAR_LIT, (SPART *) t_box_num_nonull(0), uname_xmlschema_ns_uri_hash_integer, NULL), (yyvsp[(2) - (2)].tree)); }
    break;

  case 388:
#line 1718 "./sparql_p.y"
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

  case 389:
#line 1741 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(2) - (3)].tree); }
    break;

  case 390:
#line 1744 "./sparql_p.y"
    {
		SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_BI, "scalar ASK subquery");
                spar_gp_init (sparp_arg, SELECT_L);
		spar_env_push (sparp_arg);
		spar_selid_push (sparp_arg);
		t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL);
		sparp_arg->sparp_allow_aggregates_in_expn <<= 1; }
    break;

  case 391:
#line 1753 "./sparql_p.y"
    {
		SPART *subselect_top;
		SPART *where_gp;
		where_gp = spar_gp_finalize (sparp_arg, NULL);
		subselect_top = spar_make_top (sparp_arg, ASK_L, (SPART **)t_list(0), spar_selid_pop (sparp_arg),
		  where_gp, NULL, NULL, NULL, (SPART *)t_box_num(1), (SPART *)t_box_num(0), NULL );
		spar_env_pop (sparp_arg);
		(yyval.tree) = spar_gp_finalize_with_subquery (sparp_arg, (yyvsp[(6) - (7)].trees), subselect_top);
		sparp_arg->sparp_allow_aggregates_in_expn >>= 1; }
    break;

  case 392:
#line 1762 "./sparql_p.y"
    {
		SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_BI, "scalar subquery");
                spar_gp_init (sparp_arg, SELECT_L);
		spar_env_push (sparp_arg);
		sparp_arg->sparp_env->spare_top_retval_selid = spar_selid_push (sparp_arg);
                t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL);
		sparp_arg->sparp_allow_aggregates_in_expn <<= 1;
		sparp_arg->sparp_allow_aggregates_in_expn |= 1; }
    break;

  case 393:
#line 1772 "./sparql_p.y"
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
		(yyval.tree) = spar_gp_finalize_with_subquery (sparp_arg, (yyvsp[(8) - (9)].trees), subselect_top);
		sparp_arg->sparp_allow_aggregates_in_expn >>= 1; }
    break;

  case 394:
#line 1787 "./sparql_p.y"
    {
		(yyval.tree) = (yyvsp[(1) - (1)].tree);
		if (sparp_arg->sparp_in_precode_expn)
		  sparyyerror (sparp_arg, "Aggregates are not allowed in 'precode' expressions that should be calculated before the result-set of the query");
		if (!(sparp_arg->sparp_allow_aggregates_in_expn & 1))
		  sparyyerror (sparp_arg, "Aggregates are allowed only in result sets"); }
    break;

  case 396:
#line 1794 "./sparql_p.y"
    {			/* [55*]	IRIrefOrFunctionOrMacro	 ::=  (( IRIref ArgList? ) | ( 'MACRO' IRIref ArgList ))	*/
		SPART *mdef;
		if (!sparp_arg->sparp_storage_is_set)
		  sparp_configure_storage_and_macro_libs (sparp_arg);
		mdef = spar_find_defmacro_by_iri_or_fields (sparp_arg, (yyvsp[(1) - (1)].tree)->_.lit.val, NULL);
		(yyval.trees) = (SPART **)t_list (2, (ptrlong)(sparp_arg->sparp_macro_mode), mdef);
		if (NULL != mdef)
		  {
		    if ((SPARP_DEFBODY & sparp_arg->sparp_macro_mode) && (sparp_arg->sparp_current_macro == mdef))
		      sparyyerror (sparp_arg, "The macro is recursively used in its own definition");
		    sparp_arg->sparp_macro_mode |= SPARP_CALLARG;
		  } }
    break;

  case 397:
#line 1806 "./sparql_p.y"
    {
		if (NULL == (yyvsp[(3) - (3)].backstack))
		    (yyval.tree) = (yyvsp[(1) - (3)].tree);
		  else
		    {
		    SPART **args = (SPART **)(((dk_set_t)NIL_L == (yyvsp[(3) - (3)].backstack)) ? NULL : t_revlist_to_array ((yyvsp[(3) - (3)].backstack)));
                      caddr_t fname = (yyvsp[(1) - (3)].tree)->_.lit.val;
		    SPART *mdef = ((yyvsp[(2) - (3)].trees))[1];
		    if (NULL != mdef)
		      {
		        sparp_arg->sparp_macro_mode = (ptrlong)(((yyvsp[(2) - (3)].trees))[0]);
		        (yyval.tree) = sparp_make_macro_call (sparp_arg, fname, 1, args);
		        if (!(sparp_arg->sparp_macro_mode & SPARP_DEFBODY))
		          sparp_arg->sparp_macro_call_count++;
		      }
		    else
		      {
                      spar_verify_funcall_security (sparp_arg, fname, args);
		      (yyval.tree) = spar_make_funcall (sparp_arg, 0, fname, args);
		      } } }
    break;

  case 398:
#line 1826 "./sparql_p.y"
    { (yyval.tree) = (SPART *)((yyvsp[(1) - (1)].tree)); }
    break;

  case 399:
#line 1827 "./sparql_p.y"
    { (yyval.tree) = (SPART *)((yyvsp[(1) - (1)].tree)); }
    break;

  case 400:
#line 1828 "./sparql_p.y"
    { (yyval.tree) = (SPART *)((yyvsp[(1) - (1)].tree)); }
    break;

  case 404:
#line 1835 "./sparql_p.y"
    {
		SPART **args = (SPART **)(((dk_set_t)NIL_L == (yyvsp[(2) - (2)].backstack)) ? NULL : t_revlist_to_array ((yyvsp[(2) - (2)].backstack)));
		if ((SPAR_BIF_REGEX == (yyvsp[(1) - (2)].token_type)) && (2 == BOX_ELEMENTS (args)))
		  (yyval.tree) = spar_make_regex_or_like_or_eq (sparp_arg, args[0], args[1]);
		else
		  (yyval.tree) = sparp_make_builtin_call (sparp_arg, (yyvsp[(1) - (2)].token_type), args); }
    break;

  case 405:
#line 1853 "./sparql_p.y"
    { (yyval.tree) = sparp_make_builtin_call (sparp_arg, IRI_L, (SPART **)t_list (1, (yyvsp[(3) - (4)].tree))); }
    break;

  case 406:
#line 1855 "./sparql_p.y"
    { (yyval.tree) = sparp_make_builtin_call (sparp_arg, LANG_L, (SPART **)t_list (1, (yyvsp[(3) - (4)].tree))); }
    break;

  case 407:
#line 1857 "./sparql_p.y"
    { (yyval.tree) = sparp_make_builtin_call (sparp_arg, DATATYPE_L, (SPART **)t_list (1, (yyvsp[(3) - (4)].tree))); }
    break;

  case 408:
#line 1859 "./sparql_p.y"
    { (yyval.tree) = sparp_make_builtin_call (sparp_arg, BOUND_L, (SPART **)t_list (1, (yyvsp[(3) - (4)].tree))); }
    break;

  case 409:
#line 1863 "./sparql_p.y"
    {
		SPART *mdef;
		if (!sparp_arg->sparp_storage_is_set)
		  sparp_configure_storage_and_macro_libs (sparp_arg);
		mdef = spar_find_defmacro_by_iri_or_fields (sparp_arg, (yyvsp[(1) - (1)].tree)->_.lit.val, NULL);
		(yyval.token_type) = sparp_arg->sparp_macro_mode;
		if (NULL != mdef)
		  {
		    if ((SPARP_DEFBODY & sparp_arg->sparp_macro_mode) && (sparp_arg->sparp_current_macro == mdef))
		      sparyyerror (sparp_arg, "The macro is recursively used in its own definition");
		    sparp_arg->sparp_macro_mode |= SPARP_CALLARG;
		  } }
    break;

  case 410:
#line 1875 "./sparql_p.y"
    {
		SPART **args = (SPART **)(((dk_set_t)NIL_L == (yyvsp[(3) - (3)].backstack)) ? NULL : t_revlist_to_array ((yyvsp[(3) - (3)].backstack)));
                  caddr_t fname = (yyvsp[(1) - (3)].tree)->_.lit.val;
		if (sparp_arg->sparp_macro_mode & SPARP_CALLARG)
		  {
		    sparp_arg->sparp_macro_mode = (yyvsp[(2) - (3)].token_type);
		    (yyval.tree) = sparp_make_macro_call (sparp_arg, fname, 1, args);
		    if (!(sparp_arg->sparp_macro_mode & SPARP_DEFBODY))
		      sparp_arg->sparp_macro_call_count++;
		  }
		else
		  {
                  spar_verify_funcall_security (sparp_arg, fname, args);
		    (yyval.tree) = spar_make_funcall (sparp_arg, 0, fname, args);
		  } }
    break;

  case 411:
#line 1893 "./sparql_p.y"
    {
		SPART *mdef;
		if (!sparp_arg->sparp_storage_is_set)
		  sparp_configure_storage_and_macro_libs (sparp_arg);
		mdef = spar_find_defmacro_by_iri_or_fields (sparp_arg, (yyvsp[(2) - (2)].tree)->_.qname.val, NULL);
		if (NULL == mdef)
		  sparyyerror (sparp_arg, "Undefined macro IRI");
		if ((SPARP_DEFBODY & sparp_arg->sparp_macro_mode) && (sparp_arg->sparp_current_macro == mdef))
		  sparyyerror (sparp_arg, "The macro is recursively used in its own definition");
		(yyval.token_type) = sparp_arg->sparp_macro_mode;
		sparp_arg->sparp_macro_mode |= SPARP_CALLARG; }
    break;

  case 412:
#line 1904 "./sparql_p.y"
    {
		SPART **args = (SPART **)(((dk_set_t)NIL_L == (yyvsp[(4) - (4)].backstack)) ? NULL : t_revlist_to_array ((yyvsp[(4) - (4)].backstack)));
		sparp_arg->sparp_macro_mode = (yyvsp[(3) - (4)].token_type);
		(yyval.tree) = sparp_make_macro_call (sparp_arg, (yyvsp[(2) - (4)].tree)->_.qname.val, 1, args);
		if (!(sparp_arg->sparp_macro_mode & SPARP_DEFBODY))
		  sparp_arg->sparp_macro_call_count++;
		 }
    break;

  case 413:
#line 1915 "./sparql_p.y"
    { (yyval.backstack) = NULL; }
    break;

  case 415:
#line 1920 "./sparql_p.y"
    { (yyval.backstack) = (dk_set_t)NIL_L; }
    break;

  case 416:
#line 1921 "./sparql_p.y"
    { (yyval.backstack) = (dk_set_t)NIL_L; }
    break;

  case 417:
#line 1922 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(2) - (3)].backstack); }
    break;

  case 418:
#line 1926 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 419:
#line 1927 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (3)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].tree)); }
    break;

  case 420:
#line 1928 "./sparql_p.y"
    { sparyyerror (sparp_arg, "Argument expected after comma"); }
    break;

  case 421:
#line 1929 "./sparql_p.y"
    { sparyyerror (sparp_arg, "Comma or ')' expected after function argument"); }
    break;

  case 422:
#line 1933 "./sparql_p.y"
    { (yyval.backstack) = NULL; }
    break;

  case 424:
#line 1938 "./sparql_p.y"
    { (yyval.backstack) = (dk_set_t)NIL_L; }
    break;

  case 425:
#line 1939 "./sparql_p.y"
    { (yyval.backstack) = (dk_set_t)NIL_L; }
    break;

  case 426:
#line 1940 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(2) - (3)].backstack); }
    break;

  case 427:
#line 1944 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 428:
#line 1945 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (3)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].tree)); }
    break;

  case 429:
#line 1946 "./sparql_p.y"
    { sparyyerror (sparp_arg, "Macro argument (an expression or a group pattern) expected after comma"); }
    break;

  case 430:
#line 1947 "./sparql_p.y"
    { sparyyerror (sparp_arg, "Comma or ')' expected after macro argument"); }
    break;

  case 432:
#line 1952 "./sparql_p.y"
    {
	    spar_gp_init (sparp_arg, SPAR_MACROPU); }
    break;

  case 433:
#line 1954 "./sparql_p.y"
    { (yyval.tree) = spar_gp_finalize (sparp_arg, NULL); }
    break;

  case 434:
#line 1958 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 4, SPAR_LIT, (yyvsp[(1) - (1)].box), uname_xmlschema_ns_uri_hash_integer, NULL); }
    break;

  case 435:
#line 1959 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 4, SPAR_LIT, (yyvsp[(1) - (1)].box), uname_xmlschema_ns_uri_hash_decimal, NULL); }
    break;

  case 436:
#line 1960 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 4, SPAR_LIT, (yyvsp[(1) - (1)].box), uname_xmlschema_ns_uri_hash_double, NULL); }
    break;

  case 437:
#line 1961 "./sparql_p.y"
    { double myZERO = 0.0; 
				  double myPOSINF_d = 1.0/myZERO;
				  (yyval.tree) = spartlist (sparp_arg, 4, SPAR_LIT, t_box_double (myPOSINF_d), uname_xmlschema_ns_uri_hash_double, NULL); }
    break;

  case 438:
#line 1964 "./sparql_p.y"
    { double myZERO = 0.0;
				  double myNAN_d = 0.0/myZERO;
				  (yyval.tree) = spartlist (sparp_arg, 4, SPAR_LIT, t_box_double (myNAN_d), uname_xmlschema_ns_uri_hash_double, NULL); }
    break;

  case 439:
#line 1970 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 4, SPAR_LIT, (yyvsp[(1) - (1)].box), NULL, NULL); }
    break;

  case 440:
#line 1971 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 4, SPAR_LIT, (yyvsp[(1) - (2)].box), NULL, (yyvsp[(2) - (2)].box)); }
    break;

  case 441:
#line 1972 "./sparql_p.y"
    { (yyval.tree) = spar_make_typed_literal (sparp_arg, (yyvsp[(1) - (3)].box), (yyvsp[(3) - (3)].tree)->_.lit.val, NULL); }
    break;

  case 442:
#line 1976 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 4, SPAR_LIT, (ptrlong)1, uname_xmlschema_ns_uri_hash_boolean, NULL); }
    break;

  case 443:
#line 1977 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 4, SPAR_LIT, (ptrlong)0, uname_xmlschema_ns_uri_hash_boolean, NULL); }
    break;

  case 445:
#line 1982 "./sparql_p.y"
    { (yyval.tree) = (SPART *)((ptrlong)_STAR); }
    break;

  case 446:
#line 1983 "./sparql_p.y"
    { (yyval.tree) = (SPART *)((ptrlong)DEFAULT_L); }
    break;

  case 447:
#line 1987 "./sparql_p.y"
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_BI, "\"variable+>property\""); (yyval.token_type) = _PLUS_GT; }
    break;

  case 448:
#line 1988 "./sparql_p.y"
    { SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_BI, "\"variable*>property\""); (yyval.token_type) = _STAR_GT; }
    break;

  case 449:
#line 1992 "./sparql_p.y"
    {
		(yyval.trees) = (SPART **) t_list ( 4, (yyvsp[(1) - (2)].token_type),
		  spartlist (sparp_arg, 2, SPAR_QNAME, sparp_expand_q_iri_ref (sparp_arg, (yyvsp[(2) - (2)].box))),
		  Q_IRI_REF, (yyvsp[(2) - (2)].box)); }
    break;

  case 450:
#line 1996 "./sparql_p.y"
    {
		(yyval.trees) = (SPART **) t_list ( 4, (yyvsp[(1) - (2)].token_type),
		  spartlist (sparp_arg, 2, SPAR_QNAME, sparp_expand_qname_prefix (sparp_arg, (yyvsp[(2) - (2)].box))),
		  QNAME, (yyvsp[(2) - (2)].box)); }
    break;

  case 451:
#line 2000 "./sparql_p.y"
    {
		(yyval.trees) = (SPART **) t_list ( 4, (yyvsp[(1) - (2)].token_type),
		  spartlist (sparp_arg, 2, SPAR_QNAME, sparp_expand_qname_prefix (sparp_arg, (yyvsp[(2) - (2)].box))),
		  QNAME_NS, (yyvsp[(2) - (2)].box)); }
    break;

  case 452:
#line 2004 "./sparql_p.y"
    { sparyyerror (sparp_arg, "IRI reference expected after *> or +> operator"); }
    break;

  case 453:
#line 2008 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 2, SPAR_QNAME, sparp_expand_q_iri_ref (sparp_arg, (yyvsp[(1) - (1)].box))); }
    break;

  case 455:
#line 2013 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 2, SPAR_QNAME, sparp_expand_qname_prefix (sparp_arg, (yyvsp[(1) - (1)].box))); }
    break;

  case 456:
#line 2014 "./sparql_p.y"
    { (yyval.tree) = spartlist (sparp_arg, 2, SPAR_QNAME/*_NS*/, sparp_expand_qname_prefix (sparp_arg, (yyvsp[(1) - (1)].box))); }
    break;

  case 457:
#line 2018 "./sparql_p.y"
    { (yyval.tree) = spar_make_blank_node (sparp_arg, (yyvsp[(1) - (1)].box), 0); }
    break;

  case 458:
#line 2019 "./sparql_p.y"
    { (yyval.tree) = spar_make_blank_node (sparp_arg, spar_mkid (sparp_arg, "_:anon"), 1); }
    break;

  case 459:
#line 2025 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 460:
#line 2026 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (2)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(2) - (2)].tree)); }
    break;

  case 472:
#line 2047 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_drop_macro_lib (sparp_arg, (yyvsp[(5) - (5)].tree), (yyvsp[(2) - (5)].token_type) /* yes, $2 after $5 */); }
    break;

  case 473:
#line 2054 "./sparql_p.y"
    {
		sparp_arg->sparp_env->spare_top_retval_selid = spar_selid_push (sparp_arg);
		t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL); }
    break;

  case 474:
#line 2057 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, INSERT_L, NULL,
                  spar_selid_pop (sparp_arg), (yyvsp[(5) - (5)].tree) );
                spar_compose_retvals_of_insert_or_delete (sparp_arg, (yyval.tree), (yyvsp[(2) - (5)].tree), (yyvsp[(4) - (5)].tree)); }
    break;

  case 475:
#line 2066 "./sparql_p.y"
    {
		sparp_arg->sparp_env->spare_top_retval_selid = spar_selid_push (sparp_arg);
		t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL);
		sparp_arg->sparp_in_precode_expn = 2; }
    break;

  case 476:
#line 2070 "./sparql_p.y"
    {
                SPART *fake = spar_make_fake_action_solution (sparp_arg);
		sparp_arg->sparp_in_precode_expn = 0;
		(yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, SPARUL_INSERT_DATA, NULL,
                  spar_selid_pop (sparp_arg), fake );
                spar_compose_retvals_of_insert_or_delete (sparp_arg, (yyval.tree), (yyvsp[(3) - (5)].tree), (yyvsp[(5) - (5)].tree)); }
    break;

  case 477:
#line 2081 "./sparql_p.y"
    {
		sparp_arg->sparp_env->spare_top_retval_selid = spar_selid_push (sparp_arg);
		t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL); }
    break;

  case 478:
#line 2084 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, DELETE_L, NULL,
                  spar_selid_pop (sparp_arg), (yyvsp[(5) - (5)].tree) );
                spar_compose_retvals_of_insert_or_delete (sparp_arg, (yyval.tree), (yyvsp[(2) - (5)].tree), (yyvsp[(4) - (5)].tree)); }
    break;

  case 479:
#line 2093 "./sparql_p.y"
    {
		sparp_arg->sparp_env->spare_top_retval_selid = spar_selid_push (sparp_arg);
		t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL);
		sparp_arg->sparp_in_precode_expn = 2; }
    break;

  case 480:
#line 2097 "./sparql_p.y"
    {
                SPART *fake = spar_make_fake_action_solution (sparp_arg);
		sparp_arg->sparp_in_precode_expn = 0;
		(yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, SPARUL_DELETE_DATA, NULL,
                  spar_selid_pop (sparp_arg), fake );
                spar_compose_retvals_of_insert_or_delete (sparp_arg, (yyval.tree), (yyvsp[(3) - (5)].tree), (yyvsp[(5) - (5)].tree)); }
    break;

  case 481:
#line 2109 "./sparql_p.y"
    {
		sparp_arg->sparp_env->spare_top_retval_selid = spar_selid_push (sparp_arg);
		t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL); }
    break;

  case 482:
#line 2113 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, MODIFY_L, NULL,
                  spar_selid_pop (sparp_arg), (yyvsp[(8) - (8)].tree) );
                spar_compose_retvals_of_modify (sparp_arg, (yyval.tree), (yyvsp[(2) - (8)].tree), (yyvsp[(5) - (8)].tree), (yyvsp[(7) - (8)].tree)); }
    break;

  case 483:
#line 2120 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_sparul_clear (sparp_arg, (yyvsp[(3) - (3)].tree), (yyvsp[(2) - (3)].token_type) /* yes, $2 after $3 */); }
    break;

  case 484:
#line 2126 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_sparul_load (sparp_arg, (yyvsp[(3) - (3)].tree), (yyvsp[(3) - (3)].tree), (yyvsp[(2) - (3)].token_type)); }
    break;

  case 485:
#line 2128 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_sparul_load (sparp_arg, (yyvsp[(6) - (6)].tree), (yyvsp[(3) - (6)].tree) /* yes, $3 after $6 */, (yyvsp[(2) - (6)].token_type)); }
    break;

  case 486:
#line 2133 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_sparul_load_service_data (sparp_arg, (yyvsp[(4) - (5)].tree), (SPART *)t_NEW_DB_NULL, (yyvsp[(2) - (5)].token_type)); }
    break;

  case 487:
#line 2135 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_sparul_load_service_data (sparp_arg, (yyvsp[(4) - (8)].tree), (yyvsp[(8) - (8)].tree), (yyvsp[(2) - (8)].token_type)); }
    break;

  case 488:
#line 2140 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_sparul_create (sparp_arg, (yyvsp[(4) - (4)].tree), (yyvsp[(2) - (4)].token_type) /* yes, $2 after $4 */); }
    break;

  case 489:
#line 2145 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_sparul_drop (sparp_arg, (yyvsp[(3) - (3)].tree), (yyvsp[(2) - (3)].token_type) /* yes, $2 after $3 */); }
    break;

  case 490:
#line 2150 "./sparql_p.y"
    { (yyval.tree) = spar_make_fake_action_solution (sparp_arg); }
    break;

  case 491:
#line 2151 "./sparql_p.y"
    {
		SPART *where_gp = spar_gp_finalize (sparp_arg, NULL);
		(yyval.tree) = (yyvsp[(3) - (3)].tree);
		(yyvsp[(3) - (3)].tree)->_.wm.where_gp = where_gp; }
    break;

  case 492:
#line 2158 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(3) - (3)].tree); }
    break;

  case 493:
#line 2162 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(3) - (3)].tree); }
    break;

  case 494:
#line 2166 "./sparql_p.y"
    { (yyval.tree) = (SPART *)ALL_L; }
    break;

  case 495:
#line 2167 "./sparql_p.y"
    { (yyval.tree) = (SPART *)DEFAULT_L; }
    break;

  case 496:
#line 2168 "./sparql_p.y"
    { (yyval.tree) = (SPART *)NAMED_L; }
    break;

  case 497:
#line 2169 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 498:
#line 2173 "./sparql_p.y"
    { (yyval.tree) = (SPART *)DEFAULT_L; }
    break;

  case 499:
#line 2174 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 500:
#line 2178 "./sparql_p.y"
    { (yyval.tree) = spar_default_sparul_target (sparp_arg, "GRAPH IDENTIFIED BY clause", 0); }
    break;

  case 501:
#line 2179 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 502:
#line 2183 "./sparql_p.y"
    {}
    break;

  case 503:
#line 2184 "./sparql_p.y"
    {
		SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_SPARQL11_DRAFT, "WITH clause");
		sparp_arg->sparp_env->spare_src.ssrc_graph_set_by_with = (yyvsp[(3) - (4)].tree);
		sparp_make_and_push_new_graph_source (sparp_arg, SPART_GRAPH_FROM, (yyvsp[(3) - (4)].tree), (yyvsp[(4) - (4)].trees)); }
    break;

  case 504:
#line 2191 "./sparql_p.y"
    {}
    break;

  case 505:
#line 2192 "./sparql_p.y"
    {}
    break;

  case 506:
#line 2196 "./sparql_p.y"
    { (yyval.token_type) = 0; }
    break;

  case 507:
#line 2197 "./sparql_p.y"
    { (yyval.token_type) = 1; }
    break;

  case 511:
#line 2214 "./sparql_p.y"
    {
		(yyval.tree) = spar_default_sparul_target (sparp_arg, "SPARQL 1.1 DELETE clause", 1);
		sparp_arg->sparp_env->spare_top_retval_selid = spar_selid_push (sparp_arg);
		t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL); }
    break;

  case 512:
#line 2219 "./sparql_p.y"
    {
		if (NULL != (yyvsp[(4) - (5)].tree))
		  {
		    (yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, MODIFY_L, NULL,
		      spar_selid_pop (sparp_arg), (yyvsp[(5) - (5)].tree) );
		    spar_compose_retvals_of_modify (sparp_arg, (yyval.tree), (yyvsp[(2) - (5)].tree), (yyvsp[(3) - (5)].tree), (yyvsp[(4) - (5)].tree)); }
		else
		  {
		    (yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, DELETE_L, NULL,
		      spar_selid_pop (sparp_arg), (yyvsp[(5) - (5)].tree) );
		    spar_compose_retvals_of_insert_or_delete (sparp_arg, (yyval.tree), (yyvsp[(2) - (5)].tree), (yyvsp[(3) - (5)].tree)); } }
    break;

  case 513:
#line 2236 "./sparql_p.y"
    {
		(yyval.tree) = spar_default_sparul_target (sparp_arg, "SPARQL 1.1 INSERT clause", 1);
		sparp_arg->sparp_env->spare_top_retval_selid = spar_selid_push (sparp_arg);
		t_set_push (&(sparp_arg->sparp_env->spare_propvar_sets), NULL); }
    break;

  case 514:
#line 2241 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_top_or_special_case_from_wm (sparp_arg, INSERT_L, NULL,
		  spar_selid_pop (sparp_arg), (yyvsp[(4) - (4)].tree) );
		spar_compose_retvals_of_insert_or_delete (sparp_arg, (yyval.tree), (yyvsp[(2) - (4)].tree), (yyvsp[(3) - (4)].tree)); }
    break;

  case 515:
#line 2248 "./sparql_p.y"
    { (yyval.tree) = NULL; }
    break;

  case 516:
#line 2249 "./sparql_p.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 517:
#line 2253 "./sparql_p.y"
    {
		SPAR_ERROR_IF_UNSUPPORTED_SYNTAX (SSG_SD_SPARQL11_DRAFT, "WITH clause");
		(yyval.tree) = spar_make_sparul_copymoveadd (sparp_arg, (yyvsp[(1) - (5)].token_type), (yyvsp[(3) - (5)].tree), (yyvsp[(5) - (5)].tree), (yyvsp[(2) - (5)].token_type) /* yes, $2 after $3 */); }
    break;

  case 518:
#line 2259 "./sparql_p.y"
    { (yyval.token_type) = COPY_L; }
    break;

  case 519:
#line 2260 "./sparql_p.y"
    { (yyval.token_type) = MOVE_L; }
    break;

  case 520:
#line 2261 "./sparql_p.y"
    { (yyval.token_type) = ADD_L; }
    break;

  case 522:
#line 2268 "./sparql_p.y"
    {
		sparp_env()->spare_qm_default_table = NULL; }
    break;

  case 524:
#line 2274 "./sparql_p.y"
    { t_set_push (&(sparp_env()->spare_acc_qm_sqls), (yyvsp[(1) - (1)].tree)); }
    break;

  case 532:
#line 2292 "./sparql_p.y"
    {
		if (dk_set_get_keyword (sparp_arg->sparp_created_jsos, (yyvsp[(4) - (7)].box), NULL))
		  spar_error (sparp_arg, "The identifier of %s class %.100s is already used in the previous part of the statement",
		    ((IRI_L == (yyvsp[(2) - (7)].token_type)) ? "IRI" : "literal"), (yyvsp[(4) - (7)].box));
		t_set_push (&(sparp_arg->sparp_created_jsos), ((IRI_L == (yyvsp[(2) - (7)].token_type)) ? "IRI class" : "literal class"));
		t_set_push (&(sparp_arg->sparp_created_jsos), (yyvsp[(4) - (7)].box));
		(yyval.tree) = spar_make_qm_sql (sparp_arg,
		  ((IRI_L == (yyvsp[(2) - (7)].token_type)) ? "DB.DBA.RDF_QM_DEFINE_IRI_CLASS_FORMAT" : "DB.DBA.RDF_QM_DEFINE_LITERAL_CLASS_FORMAT"),
		  (SPART **)t_list (3, (yyvsp[(4) - (7)].box), (yyvsp[(5) - (7)].box), (yyvsp[(6) - (7)].tree)), (yyvsp[(7) - (7)].trees) ); }
    break;

  case 533:
#line 2301 "./sparql_p.y"
    {
		if (dk_set_get_keyword (sparp_arg->sparp_created_jsos, (yyvsp[(4) - (7)].box), NULL))
		  spar_error (sparp_arg, "The identifier of %s class %.100s is already used in the previous part of the statement",
		    ((IRI_L == (yyvsp[(2) - (7)].token_type)) ? "IRI" : "literal"), (yyvsp[(4) - (7)].box));
		t_set_push (&(sparp_arg->sparp_created_jsos), ((IRI_L == (yyvsp[(2) - (7)].token_type)) ? "IRI class" : "literal class"));
		t_set_push (&(sparp_arg->sparp_created_jsos), (yyvsp[(4) - (7)].box));
		(yyval.tree) = spar_make_qm_sql (sparp_arg,
		  ((IRI_L == (yyvsp[(2) - (7)].token_type)) ? "DB.DBA.RDF_QM_DEFINE_IRI_CLASS_FUNCTIONS" : "DB.DBA.RDF_QM_DEFINE_LITERAL_CLASS_FUNCTIONS"),
		  (SPART **)t_list (2, (yyvsp[(4) - (7)].box), spar_make_vector_qm_sql (sparp_arg, (SPART **)t_revlist_to_array ((yyvsp[(6) - (7)].backstack)))), (yyvsp[(7) - (7)].trees) ); }
    break;

  case 534:
#line 2313 "./sparql_p.y"
    {
		if (dk_set_get_keyword (sparp_arg->sparp_created_jsos, (yyvsp[(5) - (5)].box), NULL))
		  spar_error (sparp_arg, "The identifier of %s class %.100s is already used in the previous part of the statement",
		    ((IRI_L == (yyvsp[(3) - (5)].token_type)) ? "IRI" : "literal"), (yyvsp[(5) - (5)].box));
		(yyval.tree) = spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_DROP_CLASS",
		  (SPART **)t_list (2, (yyvsp[(5) - (5)].box), (yyvsp[(2) - (5)].token_type) /* yes, $2 after $5 */), NULL );
		sparp_jso_push_deleted (sparp_arg, uname_virtrdf_ns_uri_QuadMapFormat , (yyvsp[(5) - (5)].box)); }
    break;

  case 535:
#line 2323 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_DEFINE_SUBCLASS",
		  (SPART **)t_list (2, (yyvsp[(4) - (7)].box), (yyvsp[(7) - (7)].box)), NULL ); }
    break;

  case 536:
#line 2326 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_DEFINE_SUBCLASS",
		  (SPART **)t_list (2, (yyvsp[(2) - (5)].box), (yyvsp[(5) - (5)].box)), NULL ); }
    break;

  case 537:
#line 2332 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (0); }
    break;

  case 538:
#line 2333 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (0); }
    break;

  case 539:
#line 2334 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_revlist_to_array ((yyvsp[(3) - (4)].backstack)); }
    break;

  case 540:
#line 2338 "./sparql_p.y"
    {
		(yyval.backstack) = NULL;
		t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].trees)[0]);
		t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].trees)[1]); }
    break;

  case 541:
#line 2342 "./sparql_p.y"
    {
		(yyval.backstack) = (yyvsp[(1) - (3)].backstack);
		t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].trees)[0]);
		t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].trees)[1]); }
    break;

  case 542:
#line 2349 "./sparql_p.y"
    {	/*... ( 'DATATYPE' QmIRIrefConst )	*/
		(yyval.trees) = (SPART **)t_list (2, t_box_dv_uname_string ("DATATYPE"), t_box_dv_uname_string ((yyvsp[(2) - (2)].box))); }
    break;

  case 543:
#line 2351 "./sparql_p.y"
    {			/*... | ( 'LANG' STRING )	*/
		(yyval.trees) = (SPART **)t_list (2, t_box_dv_uname_string ("LANG"), t_box_dv_uname_string ((yyvsp[(2) - (2)].box))); }
    break;

  case 544:
#line 2353 "./sparql_p.y"
    {			/*... | ( 'LANG' STRING )	*/
		(yyval.trees) = (SPART **)t_list (2, t_box_dv_uname_string ("LANG"), t_box_dv_uname_string ((yyvsp[(2) - (2)].box))); }
    break;

  case 545:
#line 2355 "./sparql_p.y"
    {			/*... | 'BIJECTION'	*/
		(yyval.trees) = (SPART **)t_list (2, t_box_dv_uname_string ("BIJECTION"), (ptrlong)1); }
    break;

  case 546:
#line 2357 "./sparql_p.y"
    {			/*... | 'DEREF'	*/
		(yyval.trees) = (SPART **)t_list (2, t_box_dv_uname_string ("DEREF"), (ptrlong)1); }
    break;

  case 547:
#line 2359 "./sparql_p.y"
    {			/*... | 'RETURNS' STRING ('UNION' STRING)*	*/
		(yyval.trees) = (SPART **)t_list (2, t_box_dv_uname_string ("RETURNS"),
		    spar_make_vector_qm_sql (sparp_arg, (SPART **)t_revlist_to_array ((yyvsp[(2) - (2)].backstack))) ); }
    break;

  case 548:
#line 2365 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].box)); }
    break;

  case 549:
#line 2366 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (3)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].box)); }
    break;

  case 550:
#line 2370 "./sparql_p.y"
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

  case 551:
#line 2384 "./sparql_p.y"
    {
		spar_qm_push_bookmark (sparp_arg); }
    break;

  case 552:
#line 2386 "./sparql_p.y"
    {
		t_set_push (&(sparp_env()->spare_acc_qm_sqls),
		  spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_END_ALTER_QUAD_STORAGE",
                    (SPART **)t_list (1, t_box_copy (sparp_env()->spare_storage_name)), NULL ) );
		spar_qm_pop_bookmark (sparp_arg);
		sparp_env()->spare_storage_name = NULL; }
    break;

  case 553:
#line 2395 "./sparql_p.y"
    { (yyval.token_type) = IRI_L; }
    break;

  case 554:
#line 2396 "./sparql_p.y"
    { (yyval.token_type) = LITERAL_L; }
    break;

  case 555:
#line 2400 "./sparql_p.y"
    {
		sparp_env()->spare_storage_name = (yyvsp[(4) - (4)].box);
		t_set_push (&(sparp_env()->spare_acc_qm_sqls),
		  spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_BEGIN_ALTER_QUAD_STORAGE",
                    (SPART **)t_list (1, t_box_copy (sparp_env()->spare_storage_name)), NULL ) );
                sparp_jso_push_affected (sparp_arg, (yyvsp[(4) - (4)].box)); }
    break;

  case 556:
#line 2407 "./sparql_p.y"
    {
		spar_qm_push_bookmark (sparp_arg); }
    break;

  case 557:
#line 2409 "./sparql_p.y"
    {
		t_set_push (&(sparp_env()->spare_acc_qm_sqls),
		  spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_END_ALTER_QUAD_STORAGE",
                    (SPART **)t_list (1, t_box_copy (sparp_env()->spare_storage_name)), NULL ) );
		spar_qm_pop_bookmark (sparp_arg);
		sparp_env()->spare_storage_name = NULL; }
    break;

  case 558:
#line 2418 "./sparql_p.y"
    {
		if (dk_set_get_keyword (sparp_arg->sparp_created_jsos, (yyvsp[(5) - (5)].box), NULL))
		  spar_error (sparp_arg, "The identifier of Quad Storage %.100s is already used in the previous part of the statement", (yyvsp[(5) - (5)].box));
		t_set_push (&(sparp_env()->spare_acc_qm_sqls),
		  spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_DROP_QUAD_STORAGE",
                    (SPART **)t_list (2, (yyvsp[(5) - (5)].box), (yyvsp[(2) - (5)].token_type) /* yes, $2 after $5 */), NULL ) );
                sparp_jso_push_deleted (sparp_arg, uname_virtrdf_ns_uri_QuadStorage , (yyvsp[(5) - (5)].box));
                sparp_jso_push_affected (sparp_arg, (yyvsp[(5) - (5)].box)); }
    break;

  case 559:
#line 2429 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_DROP_MAPPING",
                  (SPART **)t_list (1, t_box_copy (sparp_env()->spare_storage_name)),
		  (SPART **)t_list (4, t_box_dv_uname_string ("ID"), (yyvsp[(5) - (5)].box), t_box_dv_uname_string ("SILENT"), (SPART *)t_box_num_nonull ((yyvsp[(2) - (5)].token_type))) );
		if (NULL != sparp_env()->spare_storage_name)
		  sparp_jso_push_affected (sparp_arg, sparp_env()->spare_storage_name); }
    break;

  case 560:
#line 2435 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_DROP_MAPPING",
                    (SPART **)t_list (1, t_box_copy (sparp_env()->spare_storage_name)),
		    (SPART **)t_list (4, t_box_dv_uname_string ("GRAPH"), (yyvsp[(6) - (6)].box), t_box_dv_uname_string ("SILENT"), (SPART *)t_box_num_nonull ((yyvsp[(2) - (6)].token_type))) );
		if (NULL != sparp_env()->spare_storage_name)
		  sparp_jso_push_affected (sparp_arg, sparp_env()->spare_storage_name); }
    break;

  case 561:
#line 2444 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_DROP_MAPPING",
                  (SPART **)t_list (1, t_box_copy (sparp_env()->spare_storage_name)),
		  (SPART **)t_list (4, t_box_dv_uname_string ("ID"), (yyvsp[(3) - (3)].box), t_box_dv_uname_string ("SILENT"), (SPART *)t_box_num_nonull ((yyvsp[(2) - (3)].token_type))) );
		if (NULL != sparp_env()->spare_storage_name)
		  sparp_jso_push_affected (sparp_arg, sparp_env()->spare_storage_name); }
    break;

  case 562:
#line 2450 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_DROP_MAPPING",
                    (SPART **)t_list (1, t_box_copy (sparp_env()->spare_storage_name)),
		    (SPART **)t_list (4, t_box_dv_uname_string ("GRAPH"), (yyvsp[(4) - (4)].box), t_box_dv_uname_string ("SILENT"), (SPART *)t_box_num_nonull ((yyvsp[(2) - (4)].token_type))) );
		if (NULL != sparp_env()->spare_storage_name)
		  sparp_jso_push_affected (sparp_arg, sparp_env()->spare_storage_name); }
    break;

  case 563:
#line 2459 "./sparql_p.y"
    {}
    break;

  case 564:
#line 2460 "./sparql_p.y"
    {	/*... ( 'FROM' QTABLE 'AS' PLAIN_ID QmTextLiteral* )	*/
		spar_qm_add_aliased_table_or_sqlquery (sparp_arg, (yyvsp[(3) - (5)].box), (yyvsp[(5) - (5)].box));
		sparp_env()->spare_qm_current_table_alias = (yyvsp[(5) - (5)].box); }
    break;

  case 565:
#line 2463 "./sparql_p.y"
    {
		sparp_env()->spare_qm_current_table_alias = NULL; }
    break;

  case 566:
#line 2465 "./sparql_p.y"
    {		/*... | ( 'FROM' PLAIN_ID 'AS' PLAIN_ID QmTextLiteral* )	*/
		spar_qm_add_aliased_alias (sparp_arg, (yyvsp[(3) - (5)].box), (yyvsp[(5) - (5)].box));
		sparp_env()->spare_qm_current_table_alias = (yyvsp[(5) - (5)].box); }
    break;

  case 567:
#line 2468 "./sparql_p.y"
    {		/*... | ( 'FROM' 'SQLQUERY' QmSqlQuery 'AS' PLAIN_ID QmTextLiteral* )	*/
		caddr_t qry = t_box_sprintf (100 + strlen((yyvsp[(4) - (6)].box)), "/*[sqlquery[*/ %s\n/*]sqlquery]*/", (yyvsp[(4) - (6)].box));
		spar_qm_add_aliased_table_or_sqlquery (sparp_arg, qry, (yyvsp[(6) - (6)].box));
		sparp_env()->spare_qm_current_table_alias = (yyvsp[(6) - (6)].box); }
    break;

  case 568:
#line 2472 "./sparql_p.y"
    {
		sparp_env()->spare_qm_current_table_alias = NULL; }
    break;

  case 569:
#line 2474 "./sparql_p.y"
    {						/*... | QmCondition	*/
		spar_qm_add_table_filter (sparp_arg, (yyvsp[(2) - (2)].box)); }
    break;

  case 570:
#line 2479 "./sparql_p.y"
    {}
    break;

  case 572:
#line 2484 "./sparql_p.y"
    {
		spar_qm_add_text_literal (sparp_arg,
		  sparp_env()->spare_qm_current_table_alias,
		  (yyvsp[(2) - (6)].box), (yyvsp[(4) - (6)].tree), (yyvsp[(5) - (6)].trees), (yyvsp[(6) - (6)].trees) ); }
    break;

  case 573:
#line 2491 "./sparql_p.y"
    { (yyval.box) = NULL; }
    break;

  case 574:
#line 2492 "./sparql_p.y"
    { (yyval.box) = (caddr_t)((ptrlong)(XML_L)); }
    break;

  case 575:
#line 2496 "./sparql_p.y"
    { (yyval.trees) = NULL; }
    break;

  case 576:
#line 2497 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_revlist_to_array ((yyvsp[(3) - (4)].backstack)); }
    break;

  case 577:
#line 2501 "./sparql_p.y"
    { (yyval.trees) = NULL; }
    break;

  case 578:
#line 2502 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_revlist_to_array ((yyvsp[(3) - (4)].backstack)); }
    break;

  case 579:
#line 2506 "./sparql_p.y"
    {
		(yyval.backstack) = NULL;
		t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].trees)[1]);
		t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].trees)[0]); }
    break;

  case 580:
#line 2510 "./sparql_p.y"
    {
		(yyval.backstack) = (yyvsp[(1) - (3)].backstack);
		t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].trees)[1]);
		t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].trees)[0]); }
    break;

  case 581:
#line 2517 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, t_box_dv_uname_string ((yyvsp[(1) - (1)].box)), NULL); }
    break;

  case 582:
#line 2518 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, t_box_dv_uname_string ((yyvsp[(1) - (2)].box)), (yyvsp[(2) - (2)].box)); }
    break;

  case 583:
#line 2522 "./sparql_p.y"
    {}
    break;

  case 584:
#line 2523 "./sparql_p.y"
    {}
    break;

  case 585:
#line 2524 "./sparql_p.y"
    {}
    break;

  case 586:
#line 2528 "./sparql_p.y"
    {}
    break;

  case 587:
#line 2529 "./sparql_p.y"
    {
		spar_qm_clean_locals (sparp_arg);
		sparp_env()->spare_qm_default_table = NULL; }
    break;

  case 588:
#line 2532 "./sparql_p.y"
    {}
    break;

  case 590:
#line 2537 "./sparql_p.y"
    {
		t_set_push (&(sparp_env()->spare_acc_qm_sqls), (yyvsp[(1) - (1)].tree)); }
    break;

  case 591:
#line 2539 "./sparql_p.y"
    {
		t_set_push (&(sparp_env()->spare_acc_qm_sqls), (yyvsp[(1) - (1)].tree)); }
    break;

  case 592:
#line 2541 "./sparql_p.y"
    {
		t_set_push (&(sparp_env()->spare_acc_qm_sqls), (yyvsp[(1) - (1)].tree)); }
    break;

  case 593:
#line 2543 "./sparql_p.y"
    {
		t_set_push (&(sparp_env()->spare_acc_qm_sqls), (yyvsp[(1) - (1)].tree)); }
    break;

  case 594:
#line 2548 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_ATTACH_MACRO_LIBRARY",
		  (SPART **)t_list (1, t_box_copy (sparp_env()->spare_storage_name)),
		  (SPART **)t_list (2, t_box_dv_uname_string ("ID"), (yyvsp[(4) - (4)].box)) );
		if (NULL != sparp_env()->spare_storage_name)
		  sparp_jso_push_affected (sparp_arg, sparp_env()->spare_storage_name); }
    break;

  case 595:
#line 2557 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_DETACH_MACRO_LIBRARY",
		  (SPART **)t_list (1, t_box_copy (sparp_env()->spare_storage_name)),
		  (SPART **)t_list (4, t_box_dv_uname_string ("ID"), (yyvsp[(5) - (5)].box), t_box_dv_uname_string ("SILENT"), (SPART *)t_box_num_nonull ((yyvsp[(2) - (5)].token_type))) );
		if (NULL != sparp_env()->spare_storage_name)
		  sparp_jso_push_affected (sparp_arg, sparp_env()->spare_storage_name); }
    break;

  case 596:
#line 2563 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_DETACH_MACRO_LIBRARY",
		  (SPART **)t_list (1, t_box_copy (sparp_env()->spare_storage_name)),
		  (SPART **)t_list (2, t_box_dv_uname_string ("SILENT"), (SPART *)t_box_num_nonull ((yyvsp[(2) - (4)].token_type))) );
		if (NULL != sparp_env()->spare_storage_name)
		  sparp_jso_push_affected (sparp_arg, sparp_env()->spare_storage_name); }
    break;

  case 597:
#line 2572 "./sparql_p.y"
    {}
    break;

  case 598:
#line 2573 "./sparql_p.y"
    {}
    break;

  case 599:
#line 2574 "./sparql_p.y"
    {}
    break;

  case 601:
#line 2579 "./sparql_p.y"
    {
		spar_qm_clean_locals (sparp_arg);
		sparp_env()->spare_qm_default_table = NULL; }
    break;

  case 603:
#line 2587 "./sparql_p.y"
    { spar_qm_push_local (sparp_arg, CREATE_L, (SPART *)((yyvsp[(2) - (3)].box)), 1); }
    break;

  case 604:
#line 2588 "./sparql_p.y"
    {;}
    break;

  case 605:
#line 2590 "./sparql_p.y"
    {
		spar_qm_push_local (sparp_arg, CREATE_L, (SPART *)((yyvsp[(2) - (6)].box)), 1);
		t_set_push (&(sparp_env()->spare_acc_qm_sqls),
		  spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_ATTACH_MAPPING",
                    (SPART **)t_list (2, t_box_copy (sparp_env()->spare_storage_name), (yyvsp[(5) - (6)].box)),
		    t_spartlist_concat ((yyvsp[(6) - (6)].trees), (SPART **)t_list (2, t_box_dv_uname_string ("ID"), (yyvsp[(2) - (6)].box))) ) ); }
    break;

  case 606:
#line 2597 "./sparql_p.y"
    {
		spar_qm_push_local (sparp_arg, GRAPH_L, (SPART *)((yyvsp[(3) - (7)].box)), 1);
		t_set_push (&(sparp_env()->spare_acc_qm_sqls),
		  spar_make_qm_sql (sparp_arg, "DB.DBA.RDF_QM_ATTACH_MAPPING",
                    (SPART **)t_list (2, t_box_copy (sparp_env()->spare_storage_name), (yyvsp[(6) - (7)].box)),
		    t_spartlist_concat ((yyvsp[(7) - (7)].trees), (SPART **)t_list (2, t_box_dv_uname_string ("GRAPH"), (yyvsp[(3) - (7)].box))) ) ); }
    break;

  case 607:
#line 2604 "./sparql_p.y"
    {
		t_set_push (&(sparp_env()->spare_acc_qm_sqls),
		  spar_qm_make_empty_mapping (sparp_arg, NULL, (yyvsp[(2) - (3)].trees)) );
		spar_qm_push_local (sparp_arg, _LBRA,
		  spar_qm_get_local (sparp_arg, CREATE_L, 1), 1 );
		spar_qm_push_local (sparp_arg, CREATE_L, NULL, 1);
		spar_qm_push_bookmark (sparp_arg); }
    break;

  case 608:
#line 2611 "./sparql_p.y"
    {
		spar_qm_pop_bookmark (sparp_arg); }
    break;

  case 610:
#line 2617 "./sparql_p.y"
    {;}
    break;

  case 611:
#line 2619 "./sparql_p.y"
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

  case 612:
#line 2628 "./sparql_p.y"
    {
		spar_qm_pop_bookmark (sparp_arg); }
    break;

  case 613:
#line 2633 "./sparql_p.y"
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

  case 614:
#line 2647 "./sparql_p.y"
    { spar_qm_push_local (sparp_arg, SUBJECT_L, (yyvsp[(1) - (1)].tree), 0); }
    break;

  case 615:
#line 2648 "./sparql_p.y"
    {}
    break;

  case 618:
#line 2657 "./sparql_p.y"
    { spar_qm_push_local (sparp_arg, GRAPH_L, (yyvsp[(2) - (2)].tree), 0); }
    break;

  case 619:
#line 2658 "./sparql_p.y"
    { spar_qm_push_local (sparp_arg, SUBJECT_L, (yyvsp[(2) - (2)].tree), 0); }
    break;

  case 620:
#line 2659 "./sparql_p.y"
    { spar_qm_push_local (sparp_arg, PREDICATE_L, (yyvsp[(2) - (2)].tree), 0); }
    break;

  case 621:
#line 2660 "./sparql_p.y"
    { spar_qm_push_local (sparp_arg, OBJECT_L, (yyvsp[(2) - (2)].tree), 0); }
    break;

  case 622:
#line 2661 "./sparql_p.y"
    {
		spar_qm_push_local (sparp_arg, DATATYPE_L, (SPART *)((yyvsp[(4) - (4)].tree)), 0); }
    break;

  case 623:
#line 2663 "./sparql_p.y"
    {
		spar_qm_push_local (sparp_arg, LANG_L, (SPART *)((yyvsp[(6) - (6)].tree)), 0); }
    break;

  case 624:
#line 2669 "./sparql_p.y"
    {}
    break;

  case 625:
#line 2670 "./sparql_p.y"
    {
		spar_qm_pop_key (sparp_arg, PREDICATE_L); }
    break;

  case 627:
#line 2676 "./sparql_p.y"
    {
		spar_qm_push_local (sparp_arg, PREDICATE_L,
		  ((NULL != (yyvsp[(1) - (1)].tree)) ? ((SPART *)((yyvsp[(1) - (1)].tree))) : spar_qm_get_local (sparp_arg, PREDICATE_L, 1)),
		  0 ); }
    break;

  case 628:
#line 2680 "./sparql_p.y"
    {}
    break;

  case 629:
#line 2681 "./sparql_p.y"
    { sparyyerror (sparp_arg, "Description of predicate field is expected here"); }
    break;

  case 630:
#line 2685 "./sparql_p.y"
    {
		t_set_push (&(sparp_env()->spare_acc_qm_sqls),
		  spar_qm_make_real_mapping (sparp_arg, (yyvsp[(2) - (2)].box), (yyvsp[(1) - (2)].trees)) ); }
    break;

  case 631:
#line 2688 "./sparql_p.y"
    {
		spar_qm_pop_key (sparp_arg, OBJECT_L); }
    break;

  case 632:
#line 2690 "./sparql_p.y"
    {
		t_set_push (&(sparp_env()->spare_acc_qm_sqls),
		  spar_qm_make_real_mapping (sparp_arg, (yyvsp[(5) - (5)].box), (yyvsp[(4) - (5)].trees)) ); }
    break;

  case 633:
#line 2696 "./sparql_p.y"
    {
		spar_qm_push_local (sparp_arg, OBJECT_L,
		  ((NULL != (yyvsp[(1) - (1)].tree)) ? ((SPART *)((yyvsp[(1) - (1)].tree))) : spar_qm_get_local (sparp_arg, OBJECT_L, 1)),
		  0 ); }
    break;

  case 634:
#line 2700 "./sparql_p.y"
    {
		spar_qm_push_local (sparp_arg, DATATYPE_L, (SPART *)((yyvsp[(3) - (3)].tree)), 0); }
    break;

  case 635:
#line 2702 "./sparql_p.y"
    {
		spar_qm_push_local (sparp_arg, LANG_L, (SPART *)((yyvsp[(5) - (5)].tree)), 0); }
    break;

  case 636:
#line 2704 "./sparql_p.y"
    {
		spar_qm_push_local (sparp_arg, WHERE_L, (SPART *)t_revlist_to_array ((yyvsp[(7) - (7)].backstack)), 0); }
    break;

  case 637:
#line 2706 "./sparql_p.y"
    { (yyval.trees) = (yyvsp[(9) - (9)].trees); }
    break;

  case 638:
#line 2707 "./sparql_p.y"
    { sparyyerror (sparp_arg, "Description of object field is expected here"); }
    break;

  case 639:
#line 2711 "./sparql_p.y"
    { (yyval.box) = NULL; }
    break;

  case 640:
#line 2712 "./sparql_p.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 641:
#line 2716 "./sparql_p.y"
    { (yyval.tree) = NULL; }
    break;

  case 642:
#line 2717 "./sparql_p.y"
    { (yyval.tree) = (SPART *)(yyvsp[(2) - (2)].tree)->_.lit.val; }
    break;

  case 643:
#line 2718 "./sparql_p.y"
    { sparyyerror (sparp_arg, "Datatype of object field should be either constant IRI or table field, not template IRI (string)"); }
    break;

  case 644:
#line 2719 "./sparql_p.y"
    { (yyval.tree) = spar_make_qm_col_desc (sparp_arg, (yyvsp[(2) - (2)].tree)); }
    break;

  case 645:
#line 2723 "./sparql_p.y"
    { (yyval.tree) = NULL; }
    break;

  case 646:
#line 2724 "./sparql_p.y"
    { (yyval.tree) = (SPART *)(yyvsp[(2) - (2)].box); }
    break;

  case 647:
#line 2725 "./sparql_p.y"
    { (yyval.tree) = spar_make_qm_col_desc (sparp_arg, (yyvsp[(2) - (2)].tree)); }
    break;

  case 649:
#line 2730 "./sparql_p.y"
    { (yyval.tree) = NULL; }
    break;

  case 650:
#line 2731 "./sparql_p.y"
    { (yyval.tree) = (SPART *)uname_rdf_ns_uri_type; }
    break;

  case 652:
#line 2736 "./sparql_p.y"
    { (yyval.tree) = NULL; }
    break;

  case 653:
#line 2740 "./sparql_p.y"
    { (yyval.tree) = (SPART *)(yyvsp[(1) - (1)].box); }
    break;

  case 656:
#line 2744 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_qm_value (sparp_arg, (yyvsp[(1) - (4)].box), (SPART **)t_revlist_to_array ((yyvsp[(3) - (4)].backstack))); }
    break;

  case 657:
#line 2746 "./sparql_p.y"
    {			/*... | QmSqlCol	*/
		(yyval.tree) = spar_make_qm_value (sparp_arg, box_dv_uname_string ("literal"), (SPART **)t_list (1, (yyvsp[(1) - (1)].tree))); }
    break;

  case 658:
#line 2751 "./sparql_p.y"
    { (yyval.backstack) = NULL; }
    break;

  case 660:
#line 2756 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].box)); }
    break;

  case 661:
#line 2757 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (2)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(2) - (2)].box)); }
    break;

  case 662:
#line 2761 "./sparql_p.y"
    { (yyval.box) = (yyvsp[(3) - (3)].box); }
    break;

  case 663:
#line 2762 "./sparql_p.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 664:
#line 2766 "./sparql_p.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 665:
#line 2767 "./sparql_p.y"
    { (yyval.box) = (yyvsp[(1) - (1)].box); }
    break;

  case 666:
#line 2771 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (0); }
    break;

  case 667:
#line 2772 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (0); }
    break;

  case 668:
#line 2773 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_revlist_to_array ((yyvsp[(3) - (4)].backstack)); }
    break;

  case 669:
#line 2777 "./sparql_p.y"
    {
		(yyval.backstack) = NULL;
		t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].trees)[0]);
		t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].trees)[1]); }
    break;

  case 670:
#line 2781 "./sparql_p.y"
    {
		(yyval.backstack) = (yyvsp[(1) - (3)].backstack);
		t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].trees)[0]);
		t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].trees)[1]); }
    break;

  case 671:
#line 2788 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, t_box_dv_uname_string ("SOFT_EXCLUSIVE"), (ptrlong)1); }
    break;

  case 672:
#line 2789 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, t_box_dv_uname_string ("EXCLUSIVE"), (ptrlong)1); }
    break;

  case 673:
#line 2790 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, t_box_dv_uname_string ("ORDER"), (yyvsp[(2) - (2)].box)); }
    break;

  case 674:
#line 2791 "./sparql_p.y"
    { (yyval.trees) = (SPART **)t_list (2, t_box_dv_uname_string ("USING"), (yyvsp[(2) - (2)].box)); }
    break;

  case 675:
#line 2795 "./sparql_p.y"
    { (yyval.backstack) = NULL; }
    break;

  case 677:
#line 2800 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 678:
#line 2801 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (3)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].tree)); }
    break;

  case 679:
#line 2805 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 680:
#line 2806 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (3)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].tree)); }
    break;

  case 681:
#line 2810 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_vector_qm_sql (sparp_arg,
		  (SPART **)t_list (4, (yyvsp[(2) - (5)].box), (yyvsp[(3) - (5)].tree), (yyvsp[(5) - (5)].boxes)[0], (yyvsp[(5) - (5)].boxes)[1]) ); }
    break;

  case 682:
#line 2816 "./sparql_p.y"
    { (yyval.tree) = spar_make_vector_qm_sql (sparp_arg, (SPART **)t_revlist_to_array ((yyvsp[(2) - (3)].backstack))); }
    break;

  case 683:
#line 2820 "./sparql_p.y"
    { (yyval.backstack) = NULL; }
    break;

  case 685:
#line 2825 "./sparql_p.y"
    { (yyval.backstack) = NULL; t_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 686:
#line 2826 "./sparql_p.y"
    { (yyval.backstack) = (yyvsp[(1) - (3)].backstack); t_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].tree)); }
    break;

  case 687:
#line 2830 "./sparql_p.y"
    {
		(yyval.tree) = spar_make_vector_qm_sql (sparp_arg,
		  (SPART **)t_list (4, (yyvsp[(1) - (3)].box), (yyvsp[(2) - (3)].box), (yyvsp[(3) - (3)].boxes)[0], (yyvsp[(3) - (3)].boxes)[1]) ); }
    break;

  case 688:
#line 2836 "./sparql_p.y"
    { (yyval.boxes) = t_list (2, (yyvsp[(1) - (1)].box), (ptrlong)0); }
    break;

  case 689:
#line 2837 "./sparql_p.y"
    { (yyval.boxes) = t_list (2, (yyvsp[(1) - (3)].box), (ptrlong)1); }
    break;

  case 690:
#line 2841 "./sparql_p.y"
    { (yyval.box) = t_box_dv_uname_string ("in"); }
    break;

  case 691:
#line 2842 "./sparql_p.y"
    { (yyval.box) = t_box_dv_uname_string ((yyvsp[(1) - (1)].box)); }
    break;

  case 692:
#line 2846 "./sparql_p.y"
    { (yyval.tree) = sparp_make_qm_sqlcol (sparp_arg, SPARQL_PLAIN_ID, (yyvsp[(1) - (1)].box)); }
    break;

  case 693:
#line 2847 "./sparql_p.y"
    { (yyval.tree) = sparp_make_qm_sqlcol (sparp_arg, SPARQL_SQL_ALIASCOLNAME, (yyvsp[(1) - (1)].box)); }
    break;

  case 694:
#line 2848 "./sparql_p.y"
    { (yyval.tree) = sparp_make_qm_sqlcol (sparp_arg, SPARQL_SQL_QTABLECOLNAME, (yyvsp[(1) - (1)].box)); }
    break;

  case 696:
#line 2853 "./sparql_p.y"
    { (yyval.box) = t_box_dv_short_string ("TEXT"); }
    break;

  case 697:
#line 2854 "./sparql_p.y"
    { (yyval.box) = t_box_dv_short_string ("XML"); }
    break;

  case 698:
#line 2859 "./sparql_p.y"
    { (yyval.box) = (yyvsp[(1) - (1)].tree)->_.lit.val; }
    break;

  case 699:
#line 2860 "./sparql_p.y"
    {
		(yyval.box) = spar_make_iri_from_template (sparp_arg, (yyvsp[(3) - (4)].box)); }
    break;

  case 700:
#line 2865 "./sparql_p.y"
    {}
    break;

  case 701:
#line 2866 "./sparql_p.y"
    {}
    break;

  case 702:
#line 2870 "./sparql_p.y"
    {}
    break;

  case 703:
#line 2871 "./sparql_p.y"
    {}
    break;

  case 704:
#line 2875 "./sparql_p.y"
    {}
    break;

  case 705:
#line 2876 "./sparql_p.y"
    {}
    break;


/* Line 1267 of yacc.c.  */
#line 7377 "sparql_p.c"
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
      yyerror (sparp_arg, YY_("syntax error"));
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
	    yyerror (sparp_arg, yymsg);
	  }
	else
	  {
	    yyerror (sparp_arg, YY_("syntax error"));
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
		      yytoken, &yylval, sparp_arg);
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
		  yystos[yystate], yyvsp, sparp_arg);
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
  yyerror (sparp_arg, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, sparp_arg);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, sparp_arg);
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



