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
#define yyparse xpyyparse
#define yylex   xpyylex
#define yyerror xpyyerror
#define yylval  xpyylval
#define yychar  xpyychar
#define yydebug xpyydebug
#define yynerrs xpyynerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     __PUNCT_BEGIN = 258,
     _AT = 259,
     _ASSIGN = 260,
     _COLON = 261,
     _COLON_COLON = 262,
     _DOLLAR = 263,
     _DOT = 264,
     _DOT_DOT = 265,
     _EQ = 266,
     _GE = 267,
     _GT = 268,
     _GT_OF_TAG = 269,
     _GT_GT = 270,
     _LE = 271,
     _LPAR_LSQBRA = 272,
     _LT = 273,
     _LT_OF_TAG = 274,
     _LT_LT = 275,
     _LT_SLASH = 276,
     _LT_BANG_CDATA = 277,
     _LT_BANG_MINUS_MINUS = 278,
     _LT_QMARK = 279,
     _MINUS = 280,
     _NOT_EQ = 281,
     _NOT_SAME = 282,
     _PLUS = 283,
     _POINTER_VIA_ID = 284,
     _SAME = 285,
     _SLASH = 286,
     _SLASH_GT = 287,
     _SLASH_SLASH = 288,
     _STAR = 289,
     _STAR_COLON = 290,
     _RPAR_AS_L = 291,
     _RPAR_PLUS = 292,
     _RPAR_QMARK = 293,
     _RPAR_STAR = 294,
     _RSQBRA_LSQBRA = 295,
     A_ANCESTOR = 296,
     A_ANCESTOR_OR_SELF = 297,
     A_ATTRIBUTE = 298,
     A_CHILD = 299,
     A_DESCENDANT = 300,
     A_DESCENDANT_OR_SELF = 301,
     A_FOLLOWING = 302,
     A_FOLLOWING_SIBLING = 303,
     A_NAMESPACE = 304,
     A_PARENT = 305,
     A_PRECEDING = 306,
     A_PRECEDING_SIBLING = 307,
     A_SELF = 308,
     K_AND = 309,
     K_DIV = 310,
     K_IDIV = 311,
     K_LIKE = 312,
     K_MOD = 313,
     K_NEAR = 314,
     K_NOT = 315,
     K_OR = 316,
     K2_EQ_L = 317,
     K2_GE_L = 318,
     K2_GT_L = 319,
     K2_LE_L = 320,
     K2_LT_L = 321,
     K2_NE_L = 322,
     AFTER_L = 323,
     AS_L = 324,
     AT_L = 325,
     ASCENDING_L = 326,
     ATTRIBUTE_LBRA_L = 327,
     ATTRIBUTE_LPAR_L = 328,
     BEFORE_L = 329,
     CASE_L = 330,
     COLLATION_L = 331,
     COMMENT_LBRA_L = 332,
     COMMENT_LPAR_L = 333,
     CONTEXT_L = 334,
     DECLARE_CONSTRUCTION_PRESERVE_L = 335,
     DECLARE_CONSTRUCTION_STRIP_L = 336,
     DECLARE_BASE_URI_L = 337,
     DECLARE_DEFAULT_COLLATION_L = 338,
     DECLARE_DEFAULT_ELEMENT_L = 339,
     DECLARE_DEFAULT_FUNCTION_L = 340,
     DECLARE_FUNCTION_L = 341,
     DECLARE_NAMESPACE_L = 342,
     DECLARE_ORDERING_ORDERED_L = 343,
     DECLARE_ORDERING_UNORDERED_L = 344,
     DECLARE_VALIDATION_LAX_L = 345,
     DECLARE_VALIDATION_SKIP_L = 346,
     DECLARE_VALIDATION_STRICT_L = 347,
     DECLARE_VARIABLE_DOLLAR_L = 348,
     DECLARE_XMLSPACE_PRESERVE_L = 349,
     DECLARE_XMLSPACE_STRIP_L = 350,
     DEFAULT_L = 351,
     DEFAULT_ELEMENT_L = 352,
     DELETE_L = 353,
     DESCENDING_L = 354,
     DOCUMENT_LBRA_L = 355,
     DOCUMENT_NODE_LPAR_L = 356,
     ELEMENT_LBRA_L = 357,
     ELEMENT_LPAR_L = 358,
     ELSE_L = 359,
     EMPTY_GREATEST_L = 360,
     EMPTY_LEAST_L = 361,
     EMPTY_LPAR_RPAR_L = 362,
     EVERY_DOLLAR_L = 363,
     EXCEPT_L = 364,
     EXTENSION_L = 365,
     EXTERNAL_L = 366,
     FOR_DOLLAR_L = 367,
     FREETEXT_L = 368,
     GLOBAL_L = 369,
     IF_LPAR_L = 370,
     IMPORT_MODULE_L = 371,
     IMPORT_SCHEMA_L = 372,
     INSTANCE_OF_L = 373,
     INTERSECT_L = 374,
     IN_L = 375,
     ITEM_LPAR_RPAR_L = 376,
     ITEM_LPAR_RPAR_PLUS_L = 377,
     ITEM_LPAR_RPAR_QMARK_L = 378,
     ITEM_LPAR_RPAR_STAR_L = 379,
     LAX_L = 380,
     LET_DOLLAR_L = 381,
     MODULE_NAMESPACE_L = 382,
     NAMESPACE_L = 383,
     NILLABLE_L = 384,
     NODE_LPAR_L = 385,
     O_BASE_URI = 386,
     O_DAVPROP = 387,
     O_DOC = 388,
     O_ENC = 389,
     O_HTTP = 390,
     O_KEY = 391,
     O_LANG = 392,
     O_QUIET = 393,
     O_SAX = 394,
     O_SHALLOW = 395,
     O_TAG = 396,
     O_VIEW = 397,
     O__STAR = 398,
     ORDER_BY_L = 399,
     ORDERED_LBRA_L = 400,
     PI_LBRA_L = 401,
     PI_LPAR_L = 402,
     PRAGMA_L = 403,
     RETURN_L = 404,
     SATISFIES_L = 405,
     SORTBY_LPAR_L = 406,
     SCHEMA_ATTRIBUTE_LPAR_L = 407,
     SCHEMA_ELEMENT_LPAR_L = 408,
     SKIP_L = 409,
     SOME_DOLLAR_L = 410,
     STABLE_ORDER_BY_L = 411,
     STRICT_L = 412,
     TEXT_LBRA_L = 413,
     TEXT_LPAR_L = 414,
     THEN_L = 415,
     TO_L = 416,
     TREAT_AS_L = 417,
     TYPESWITCH_LPAR_L = 418,
     UNION_L = 419,
     UNORDERED_LBRA_L = 420,
     VALIDATE_CONTEXT_L = 421,
     VALIDATE_GLOBAL_L = 422,
     VALIDATE_LAX_L = 423,
     VALIDATE_LBRA_L = 424,
     VALIDATE_STRICT_L = 425,
     VALIDATE_SKIP_L = 426,
     WHERE_L = 427,
     XMLNS = 428,
     SQL_COLON_COLUMN = 429,
     __PUNCT_END = 430,
     EXEC_SQL_XPATH = 431,
     START_OF_XQ_TEXT = 432,
     START_OF_XP_TEXT = 433,
     START_OF_FT_TEXT = 434,
     END_OF_XPSCN_TEXT = 435,
     __NONPUNCT_START = 436,
     CDATA_SECTION = 437,
     CHAR_REF = 438,
     PREDEFINED_ENTITY_REF = 439,
     NUMBER = 440,
     RBRA_NDQSTRING_DQ = 441,
     RBRA_NDQSTRING_LBRA = 442,
     RBRA_NSQSTRING_LBRA = 443,
     RBRA_NSQSTRING_SQ = 444,
     NAMESPACE_LNAME_LBRA = 445,
     NOT_XQCNAME_LPAR = 446,
     PI_LNAME_LBRA = 447,
     ATTRIBUTE_QNAME_LBRA = 448,
     ELEMENT_QNAME_LBRA = 449,
     SINGLE_WORD = 450,
     XQ_AT_DQ_NDQSTRING_DQ = 451,
     XQ_CAST_AS_CNAME = 452,
     XQ_CASTABLE_AS_CNAME = 453,
     XQ_CNAME_PLUS = 454,
     XQ_CNAME_QMARK = 455,
     XQ_CNAME_SLASH = 456,
     XQ_CNAME_STAR = 457,
     XQ_NCNAME_COLON_STAR = 458,
     XQ_STAR_COLON_NCNAME = 459,
     XQ_STRG_EXT_CONTENT = 460,
     XQ_STRG_QMARK_GT = 461,
     XQ_TYPE_LPAR_CNAME_RPAR = 462,
     XQ_XQUERY_VERSION_DQ_NDQSTRING_DQ = 463,
     XQ_AT_SQ_NSQSTRING_SQ = 464,
     XQ_XML_COMMENT_STRING = 465,
     XQ_XQUERY_VERSION_SQ_NSQSTRING_SQ = 466,
     XQCNAME = 467,
     XQCNAME_LPAR = 468,
     XQDQ_NAME_DQ = 469,
     XQDQ_NDQSTRING_DQ = 470,
     XQDQ_NDQSTRING_LBRA = 471,
     XQ_ECSTRING = 472,
     XQNCNAME = 473,
     XQNAMERESERVED = 474,
     XQQQNAME = 475,
     XQSQ_NSQSTRING_LBRA = 476,
     XQSQ_NSQSTRING_SQ = 477,
     XQVARIABLE_POS = 478,
     XQVARIABLE_NAME = 479,
     __NONPUNCT_END = 480,
     NOT_AS_NAME = 481,
     STANDALONE_SLASH = 482,
     UMINUS = 483,
     UPLUS = 484,
     SLASH_AS_MAP = 485,
     REL_PATH_TO_PATH = 486,
     STEPS_IN_REL_PATH = 487,
     LEFT_SLASH = 488
   };
#endif
/* Tokens.  */
#define __PUNCT_BEGIN 258
#define _AT 259
#define _ASSIGN 260
#define _COLON 261
#define _COLON_COLON 262
#define _DOLLAR 263
#define _DOT 264
#define _DOT_DOT 265
#define _EQ 266
#define _GE 267
#define _GT 268
#define _GT_OF_TAG 269
#define _GT_GT 270
#define _LE 271
#define _LPAR_LSQBRA 272
#define _LT 273
#define _LT_OF_TAG 274
#define _LT_LT 275
#define _LT_SLASH 276
#define _LT_BANG_CDATA 277
#define _LT_BANG_MINUS_MINUS 278
#define _LT_QMARK 279
#define _MINUS 280
#define _NOT_EQ 281
#define _NOT_SAME 282
#define _PLUS 283
#define _POINTER_VIA_ID 284
#define _SAME 285
#define _SLASH 286
#define _SLASH_GT 287
#define _SLASH_SLASH 288
#define _STAR 289
#define _STAR_COLON 290
#define _RPAR_AS_L 291
#define _RPAR_PLUS 292
#define _RPAR_QMARK 293
#define _RPAR_STAR 294
#define _RSQBRA_LSQBRA 295
#define A_ANCESTOR 296
#define A_ANCESTOR_OR_SELF 297
#define A_ATTRIBUTE 298
#define A_CHILD 299
#define A_DESCENDANT 300
#define A_DESCENDANT_OR_SELF 301
#define A_FOLLOWING 302
#define A_FOLLOWING_SIBLING 303
#define A_NAMESPACE 304
#define A_PARENT 305
#define A_PRECEDING 306
#define A_PRECEDING_SIBLING 307
#define A_SELF 308
#define K_AND 309
#define K_DIV 310
#define K_IDIV 311
#define K_LIKE 312
#define K_MOD 313
#define K_NEAR 314
#define K_NOT 315
#define K_OR 316
#define K2_EQ_L 317
#define K2_GE_L 318
#define K2_GT_L 319
#define K2_LE_L 320
#define K2_LT_L 321
#define K2_NE_L 322
#define AFTER_L 323
#define AS_L 324
#define AT_L 325
#define ASCENDING_L 326
#define ATTRIBUTE_LBRA_L 327
#define ATTRIBUTE_LPAR_L 328
#define BEFORE_L 329
#define CASE_L 330
#define COLLATION_L 331
#define COMMENT_LBRA_L 332
#define COMMENT_LPAR_L 333
#define CONTEXT_L 334
#define DECLARE_CONSTRUCTION_PRESERVE_L 335
#define DECLARE_CONSTRUCTION_STRIP_L 336
#define DECLARE_BASE_URI_L 337
#define DECLARE_DEFAULT_COLLATION_L 338
#define DECLARE_DEFAULT_ELEMENT_L 339
#define DECLARE_DEFAULT_FUNCTION_L 340
#define DECLARE_FUNCTION_L 341
#define DECLARE_NAMESPACE_L 342
#define DECLARE_ORDERING_ORDERED_L 343
#define DECLARE_ORDERING_UNORDERED_L 344
#define DECLARE_VALIDATION_LAX_L 345
#define DECLARE_VALIDATION_SKIP_L 346
#define DECLARE_VALIDATION_STRICT_L 347
#define DECLARE_VARIABLE_DOLLAR_L 348
#define DECLARE_XMLSPACE_PRESERVE_L 349
#define DECLARE_XMLSPACE_STRIP_L 350
#define DEFAULT_L 351
#define DEFAULT_ELEMENT_L 352
#define DELETE_L 353
#define DESCENDING_L 354
#define DOCUMENT_LBRA_L 355
#define DOCUMENT_NODE_LPAR_L 356
#define ELEMENT_LBRA_L 357
#define ELEMENT_LPAR_L 358
#define ELSE_L 359
#define EMPTY_GREATEST_L 360
#define EMPTY_LEAST_L 361
#define EMPTY_LPAR_RPAR_L 362
#define EVERY_DOLLAR_L 363
#define EXCEPT_L 364
#define EXTENSION_L 365
#define EXTERNAL_L 366
#define FOR_DOLLAR_L 367
#define FREETEXT_L 368
#define GLOBAL_L 369
#define IF_LPAR_L 370
#define IMPORT_MODULE_L 371
#define IMPORT_SCHEMA_L 372
#define INSTANCE_OF_L 373
#define INTERSECT_L 374
#define IN_L 375
#define ITEM_LPAR_RPAR_L 376
#define ITEM_LPAR_RPAR_PLUS_L 377
#define ITEM_LPAR_RPAR_QMARK_L 378
#define ITEM_LPAR_RPAR_STAR_L 379
#define LAX_L 380
#define LET_DOLLAR_L 381
#define MODULE_NAMESPACE_L 382
#define NAMESPACE_L 383
#define NILLABLE_L 384
#define NODE_LPAR_L 385
#define O_BASE_URI 386
#define O_DAVPROP 387
#define O_DOC 388
#define O_ENC 389
#define O_HTTP 390
#define O_KEY 391
#define O_LANG 392
#define O_QUIET 393
#define O_SAX 394
#define O_SHALLOW 395
#define O_TAG 396
#define O_VIEW 397
#define O__STAR 398
#define ORDER_BY_L 399
#define ORDERED_LBRA_L 400
#define PI_LBRA_L 401
#define PI_LPAR_L 402
#define PRAGMA_L 403
#define RETURN_L 404
#define SATISFIES_L 405
#define SORTBY_LPAR_L 406
#define SCHEMA_ATTRIBUTE_LPAR_L 407
#define SCHEMA_ELEMENT_LPAR_L 408
#define SKIP_L 409
#define SOME_DOLLAR_L 410
#define STABLE_ORDER_BY_L 411
#define STRICT_L 412
#define TEXT_LBRA_L 413
#define TEXT_LPAR_L 414
#define THEN_L 415
#define TO_L 416
#define TREAT_AS_L 417
#define TYPESWITCH_LPAR_L 418
#define UNION_L 419
#define UNORDERED_LBRA_L 420
#define VALIDATE_CONTEXT_L 421
#define VALIDATE_GLOBAL_L 422
#define VALIDATE_LAX_L 423
#define VALIDATE_LBRA_L 424
#define VALIDATE_STRICT_L 425
#define VALIDATE_SKIP_L 426
#define WHERE_L 427
#define XMLNS 428
#define SQL_COLON_COLUMN 429
#define __PUNCT_END 430
#define EXEC_SQL_XPATH 431
#define START_OF_XQ_TEXT 432
#define START_OF_XP_TEXT 433
#define START_OF_FT_TEXT 434
#define END_OF_XPSCN_TEXT 435
#define __NONPUNCT_START 436
#define CDATA_SECTION 437
#define CHAR_REF 438
#define PREDEFINED_ENTITY_REF 439
#define NUMBER 440
#define RBRA_NDQSTRING_DQ 441
#define RBRA_NDQSTRING_LBRA 442
#define RBRA_NSQSTRING_LBRA 443
#define RBRA_NSQSTRING_SQ 444
#define NAMESPACE_LNAME_LBRA 445
#define NOT_XQCNAME_LPAR 446
#define PI_LNAME_LBRA 447
#define ATTRIBUTE_QNAME_LBRA 448
#define ELEMENT_QNAME_LBRA 449
#define SINGLE_WORD 450
#define XQ_AT_DQ_NDQSTRING_DQ 451
#define XQ_CAST_AS_CNAME 452
#define XQ_CASTABLE_AS_CNAME 453
#define XQ_CNAME_PLUS 454
#define XQ_CNAME_QMARK 455
#define XQ_CNAME_SLASH 456
#define XQ_CNAME_STAR 457
#define XQ_NCNAME_COLON_STAR 458
#define XQ_STAR_COLON_NCNAME 459
#define XQ_STRG_EXT_CONTENT 460
#define XQ_STRG_QMARK_GT 461
#define XQ_TYPE_LPAR_CNAME_RPAR 462
#define XQ_XQUERY_VERSION_DQ_NDQSTRING_DQ 463
#define XQ_AT_SQ_NSQSTRING_SQ 464
#define XQ_XML_COMMENT_STRING 465
#define XQ_XQUERY_VERSION_SQ_NSQSTRING_SQ 466
#define XQCNAME 467
#define XQCNAME_LPAR 468
#define XQDQ_NAME_DQ 469
#define XQDQ_NDQSTRING_DQ 470
#define XQDQ_NDQSTRING_LBRA 471
#define XQ_ECSTRING 472
#define XQNCNAME 473
#define XQNAMERESERVED 474
#define XQQQNAME 475
#define XQSQ_NSQSTRING_LBRA 476
#define XQSQ_NSQSTRING_SQ 477
#define XQVARIABLE_POS 478
#define XQVARIABLE_NAME 479
#define __NONPUNCT_END 480
#define NOT_AS_NAME 481
#define STANDALONE_SLASH 482
#define UMINUS 483
#define UPLUS 484
#define SLASH_AS_MAP 485
#define REL_PATH_TO_PATH 486
#define STEPS_IN_REL_PATH 487
#define LEFT_SLASH 488




/* Copy the first part of user declarations.  */
#line 32 "./xpathp.y"


#include "libutil.h"
#include "sqlnode.h"
#include "xpathp_impl.h"
#include "sqlpar.h"
#include "sqlpfn.h"
/*#include "langfunc.h"*/

#ifdef DEBUG
#define xpyyerror(xpp_arg, strg) xpyyerror_impl_1(xpp_arg, NULL, yystate, yyssa, yyssp, (strg))
#else
#define xpyyerror(xpp_arg, strg) xpyyerror_impl(xpp_arg, NULL, (strg))
#endif

#ifdef XPYYDEBUG
#define YYDEBUG 1
#endif

#define xpyylex(lval_ptr, param) xpyylex_from_xpp_bufs ((caddr_t *)(lval_ptr), ((xpp_t *)(param)))

#define bmk_offset xpp_curr_lexem_bmk.xplb_offset
#define bmk_bufs_tail xpp_curr_lexem_bmk.xplb_lexem_bufs_tail
int xpyylex_from_xpp_bufs (caddr_t *yylval, xpp_t *xpp)
{
  xp_lexem_t *xpl;
  while (xpp->bmk_offset >= xpp->xpp_lexem_buf_len)
    {
      xpp->bmk_bufs_tail = xpp->bmk_bufs_tail->next;
      if (NULL == xpp->bmk_bufs_tail)
	{
	  /*xpp->xpp_curr_lexem = NULL; -- commented out to have at least 'some' current lexem */
	  return 0;
	}
      xpp->xpp_lexem_buf_len = box_length (xpp->bmk_bufs_tail->data) / sizeof (xp_lexem_t);
      xpp->bmk_offset = 0;
    }
  xpl = ((xp_lexem_t *)(xpp->bmk_bufs_tail->data)) + xpp->bmk_offset;
  yylval[0] = xpl->xpl_sem_value;
  /* Destructive read is no longer usable because re-compilation of xmlview(smth)/... should read twice.
  xpl->xpl_sem_value = NULL; */
  xpp->xpp_curr_lexem = xpl;
  xpp->bmk_offset += 1;
  return (int) xpl->xpl_lex_value;
}

#define PUSH_STRING_ARG_OF_CONCAT(arglist, strliteral) \
  do \
    { \
      if (1 != box_length((strliteral))) \
	dk_set_push (&(arglist), xp_make_literal_tree (xpp_arg, (strliteral), 1)); \
    } while (0)

#define XBIN_OP(target,opq,l,r) target = xtlist(xpp_arg, 4, (ptrlong)opq, l, r, xe_new_xqst (xpp_arg, XQST_REF))

#define XPP_PROLOG_SET(field,name,val) \
  do { \
      if (xpp_arg->xpp_xp_env->field) \
        xpyyerror (xpp_arg, "The prolog contains more than one declaration of " name); \
      xpp_arg->xpp_xp_env->field = val; \
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
#line 97 "./xpathp.y"
{
  caddr_t box;
  ptrlong token_type;
  XT *tree;
  XT **trees;
  caddr_t *fts;
  dk_set_t list;
  dk_set_t backstack;
  xp_lexbmk_t *bookmark;
  void *nothing;
}
/* Line 193 of yacc.c.  */
#line 646 "xpathp.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 659 "xpathp.c"

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5965

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  245
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  136
/* YYNRULES -- Number of rules.  */
#define YYNRULES  489
/* YYNRULES -- Number of states.  */
#define YYNSTATES  843

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   488

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     239,   240,     2,     2,   228,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   227,
       2,     2,     2,   241,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   237,     2,   238,   244,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   243,   232,   242,     2,     2,     2,     2,
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
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   229,   230,   231,   233,   234,   235,   236
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     8,     9,    13,    14,    18,    24,
      26,    28,    33,    34,    44,    48,    51,    53,    57,    58,
      61,    64,    67,    68,    72,    76,    77,    80,    84,    86,
      88,    91,    94,    96,    98,   102,   106,   108,   110,   112,
     114,   116,   119,   122,   128,   134,   137,   140,   142,   147,
     148,   152,   156,   159,   160,   164,   165,   169,   174,   175,
     179,   183,   188,   190,   193,   194,   197,   199,   201,   203,
     205,   207,   211,   213,   217,   223,   225,   229,   233,   236,
     239,   242,   244,   246,   248,   250,   252,   256,   258,   262,
     268,   270,   274,   278,   281,   284,   287,   289,   291,   293,
     296,   300,   306,   313,   319,   322,   326,   332,   339,   345,
     349,   353,   354,   356,   358,   360,   362,   364,   366,   368,
     369,   371,   373,   374,   381,   383,   387,   390,   391,   393,
     395,   399,   403,   405,   408,   412,   416,   420,   424,   427,
     430,   434,   438,   442,   446,   450,   454,   458,   462,   466,
     470,   474,   478,   482,   486,   490,   494,   498,   502,   506,
     510,   516,   524,   531,   538,   542,   545,   548,   551,   557,
     561,   565,   569,   573,   577,   581,   585,   589,   593,   597,
     601,   605,   609,   613,   617,   621,   625,   628,   631,   635,
     639,   643,   647,   651,   653,   657,   661,   663,   667,   673,
     674,   676,   678,   679,   681,   683,   684,   687,   688,   691,
     693,   696,   698,   700,   703,   705,   710,   711,   716,   719,
     721,   726,   730,   731,   734,   735,   738,   741,   743,   746,
     754,   759,   765,   769,   771,   774,   777,   780,   782,   784,
     788,   792,   796,   799,   802,   804,   808,   812,   815,   817,
     819,   823,   827,   831,   833,   835,   839,   841,   844,   845,
     848,   849,   854,   856,   859,   861,   863,   867,   870,   872,
     874,   876,   878,   880,   881,   886,   888,   890,   892,   894,
     896,   898,   900,   902,   904,   906,   908,   912,   915,   919,
     922,   927,   932,   936,   939,   942,   944,   946,   948,   950,
     952,   956,   960,   967,   971,   978,   982,   986,   990,   997,
     998,  1000,  1002,  1006,  1008,  1013,  1019,  1023,  1025,  1028,
    1032,  1033,  1034,  1041,  1043,  1047,  1050,  1054,  1056,  1058,
    1062,  1063,  1068,  1073,  1078,  1080,  1082,  1086,  1088,  1090,
    1092,  1094,  1096,  1098,  1100,  1103,  1106,  1109,  1113,  1116,
    1120,  1121,  1124,  1126,  1128,  1130,  1132,  1134,  1137,  1141,
    1143,  1144,  1146,  1148,  1152,  1154,  1156,  1158,  1159,  1161,
    1165,  1169,  1171,  1174,  1178,  1180,  1182,  1184,  1186,  1188,
    1190,  1192,  1195,  1198,  1201,  1204,  1208,  1212,  1215,  1218,
    1222,  1224,  1228,  1232,  1235,  1239,  1243,  1247,  1251,  1255,
    1259,  1263,  1267,  1271,  1275,  1279,  1283,  1287,  1290,  1292,
    1294,  1296,  1298,  1302,  1306,  1309,  1312,  1316,  1319,  1322,
    1325,  1327,  1329,  1331,  1333,  1335,  1337,  1339,  1341,  1345,
    1349,  1352,  1355,  1358,  1361,  1363,  1365,  1367,  1369,  1371,
    1373,  1375,  1377,  1379,  1381,  1383,  1385,  1387,  1389,  1390,
    1392,  1393,  1398,  1400,  1403,  1406,  1408,  1410,  1414,  1416,
    1418,  1422,  1426,  1427,  1429,  1433,  1435,  1437,  1441,  1445,
    1447,  1450,  1452,  1454,  1456,  1458,  1460,  1462,  1466,  1472,
    1476,  1478,  1480,  1483,  1487,  1492,  1496,  1500,  1504,  1510
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     246,     0,    -1,    -1,   177,   247,   250,    -1,    -1,   178,
     248,   252,    -1,    -1,   179,   249,   254,    -1,     3,   175,
     181,   225,   176,    -1,     1,    -1,   180,    -1,   255,   256,
     286,   180,    -1,    -1,   255,   127,   218,    11,   330,   227,
     251,   256,   180,    -1,   355,   359,   253,    -1,   227,   180,
      -1,   180,    -1,   355,   380,   180,    -1,    -1,   211,   227,
      -1,   208,   227,    -1,   257,   258,    -1,    -1,   257,   259,
     227,    -1,   257,   259,     1,    -1,    -1,   258,   260,    -1,
     258,   260,   259,    -1,    94,    -1,    95,    -1,    83,   330,
      -1,    82,   330,    -1,    80,    -1,    81,    -1,    84,   128,
     330,    -1,    85,   128,   330,    -1,    88,    -1,    89,    -1,
      90,    -1,    91,    -1,    92,    -1,   261,   227,    -1,   265,
     227,    -1,    87,   218,    11,   330,   227,    -1,    87,   330,
      11,   330,   227,    -1,   267,   227,    -1,   280,   227,    -1,
     280,    -1,   117,   262,   330,   263,    -1,    -1,   128,   218,
      11,    -1,   128,   330,    11,    -1,    97,   128,    -1,    -1,
      70,   330,   264,    -1,    -1,   264,   228,   330,    -1,   116,
     266,   330,   263,    -1,    -1,   128,   218,    11,    -1,   128,
     330,    11,    -1,    93,   224,   269,   268,    -1,   111,    -1,
       5,   287,    -1,    -1,    69,   270,    -1,   271,    -1,   212,
      -1,   202,    -1,   199,    -1,   200,    -1,   101,   277,   272,
      -1,   273,    -1,    73,   278,   272,    -1,    73,   278,   228,
     212,   272,    -1,   275,    -1,   152,   212,   272,    -1,   147,
     279,   272,    -1,    78,   272,    -1,   159,   272,    -1,   130,
     272,    -1,   121,    -1,   122,    -1,   123,    -1,   124,    -1,
     107,    -1,   101,   277,   240,    -1,   274,    -1,    73,   278,
     240,    -1,    73,   278,   228,   212,   240,    -1,   276,    -1,
     152,   212,   240,    -1,   147,   279,   240,    -1,    78,   240,
      -1,   159,   240,    -1,   130,   240,    -1,    37,    -1,    38,
      -1,    39,    -1,   103,   272,    -1,   103,   278,   272,    -1,
     103,   278,   228,   212,   272,    -1,   103,   278,   228,   212,
     241,   272,    -1,   103,   278,   228,   200,   272,    -1,   103,
     240,    -1,   103,   278,   240,    -1,   103,   278,   228,   212,
     240,    -1,   103,   278,   228,   212,   241,   240,    -1,   103,
     278,   228,   200,   240,    -1,   153,   212,   272,    -1,   153,
     212,   240,    -1,    -1,   273,    -1,   274,    -1,   275,    -1,
     276,    -1,   212,    -1,    60,    -1,    34,    -1,    -1,   218,
      -1,   330,    -1,    -1,    86,   213,   283,   282,   281,   350,
      -1,   240,    -1,   240,    69,   270,    -1,    36,   270,    -1,
      -1,   284,    -1,   285,    -1,   284,   228,   285,    -1,     8,
     224,   269,    -1,   353,    -1,   287,   288,    -1,   287,    61,
     287,    -1,   287,    61,     1,    -1,   287,    54,   287,    -1,
     287,    54,     1,    -1,    60,   287,    -1,    60,     1,    -1,
     287,    62,   287,    -1,   287,    62,     1,    -1,   287,    63,
     287,    -1,   287,    63,     1,    -1,   287,    64,   287,    -1,
     287,    64,     1,    -1,   287,    65,   287,    -1,   287,    65,
       1,    -1,   287,    66,   287,    -1,   287,    66,     1,    -1,
     287,    67,   287,    -1,   287,    67,     1,    -1,   287,    20,
     287,    -1,   287,    20,     1,    -1,   287,    74,   287,    -1,
     287,    74,     1,    -1,   287,    15,   287,    -1,   287,    15,
       1,    -1,   287,    68,   287,    -1,   287,    68,     1,    -1,
     295,   304,   305,   149,   287,    -1,   115,   286,   240,   160,
     287,   104,   287,    -1,   155,   224,   120,   287,   150,   287,
      -1,   108,   224,   120,   287,   150,   287,    -1,   287,   118,
     270,    -1,   287,   197,    -1,   287,   198,    -1,   287,   162,
      -1,   163,   286,   240,   306,   308,    -1,   287,    11,   287,
      -1,   287,    26,   287,    -1,   287,    30,   287,    -1,   287,
      27,   287,    -1,   287,    57,   287,    -1,   287,    18,   287,
      -1,   287,    16,   287,    -1,   287,    13,   287,    -1,   287,
      12,   287,    -1,   287,   161,   287,    -1,   287,    28,   287,
      -1,   287,    25,   287,    -1,   287,    34,   287,    -1,   287,
      56,   287,    -1,   287,    56,     1,    -1,   287,    55,   287,
      -1,   287,    58,   287,    -1,    28,   287,    -1,    25,   287,
      -1,   287,   164,   287,    -1,   287,   232,   287,    -1,   287,
     119,   287,    -1,   287,   109,   287,    -1,   309,   286,   242,
      -1,   310,    -1,   151,   289,   240,    -1,   151,   289,     1,
      -1,   290,    -1,   289,   228,   290,    -1,   287,   291,   292,
     293,   294,    -1,    -1,    71,    -1,    99,    -1,    -1,   105,
      -1,   106,    -1,    -1,    76,   330,    -1,    -1,    69,   354,
      -1,   296,    -1,   295,   296,    -1,   297,    -1,   301,    -1,
     112,   298,    -1,   299,    -1,   298,   228,     8,   299,    -1,
      -1,   224,   120,   300,   287,    -1,   126,   302,    -1,   303,
      -1,   302,   228,     8,   303,    -1,   224,     5,   287,    -1,
      -1,   172,   286,    -1,    -1,   144,   289,    -1,   156,   289,
      -1,   307,    -1,   306,   307,    -1,    75,     8,   224,    69,
     270,   149,   287,    -1,    75,   270,   149,   287,    -1,    96,
       8,   224,   149,   287,    -1,    96,   149,   287,    -1,   169,
      -1,   168,   243,    -1,   170,   243,    -1,   171,   243,    -1,
     312,    -1,   311,    -1,   310,    31,   312,    -1,   310,    33,
     312,    -1,   310,    29,   312,    -1,    31,   312,    -1,    33,
     312,    -1,    31,    -1,   310,    31,   311,    -1,   310,    33,
     311,    -1,   320,   316,    -1,   314,    -1,   315,    -1,   312,
      31,   313,    -1,   312,    33,   313,    -1,   312,    29,   313,
      -1,   314,    -1,   315,    -1,   319,   323,   316,    -1,    10,
      -1,   323,   316,    -1,    -1,   316,   317,    -1,    -1,   237,
     318,   286,   238,    -1,   364,    -1,   218,     7,    -1,   329,
      -1,   328,    -1,   239,   351,   240,    -1,   239,   240,    -1,
       9,    -1,   326,    -1,   335,    -1,   331,    -1,   327,    -1,
      -1,   322,   321,   286,   242,    -1,   145,    -1,   165,    -1,
     324,    -1,   271,    -1,   325,    -1,   212,    -1,   218,    -1,
     219,    -1,    34,    -1,   203,    -1,   204,    -1,   213,   353,
     240,    -1,   213,   240,    -1,   191,   353,   240,    -1,   191,
     240,    -1,   174,   239,   330,   240,    -1,   174,   239,   330,
       1,    -1,   174,   239,     1,    -1,   174,     1,    -1,     8,
     224,    -1,   223,    -1,   330,    -1,   185,    -1,   222,    -1,
     215,    -1,   100,   353,   242,    -1,   194,   332,   242,    -1,
     102,   286,   242,   243,   332,   242,    -1,   193,   352,   242,
      -1,    72,   286,   242,   243,   352,   242,    -1,   158,   353,
     242,    -1,    77,   353,   242,    -1,   192,   352,   242,    -1,
     146,   286,   242,   243,   352,   242,    -1,    -1,   333,    -1,
     334,    -1,   333,   228,   334,    -1,   287,    -1,   128,   243,
     330,   242,    -1,   128,   218,   243,   330,   242,    -1,   190,
     330,   242,    -1,   336,    -1,    23,   210,    -1,    24,   354,
     206,    -1,    -1,    -1,    19,   337,   338,   341,   342,   339,
      -1,    32,    -1,    14,   348,   340,    -1,    21,    14,    -1,
      21,   354,    14,    -1,   218,    -1,   212,    -1,   243,   286,
     242,    -1,    -1,   342,   343,    11,   345,    -1,   342,   173,
      11,   344,    -1,   342,   219,    11,   344,    -1,   218,    -1,
     212,    -1,   243,   286,   242,    -1,   214,    -1,   215,    -1,
     222,    -1,   350,    -1,   214,    -1,   215,    -1,   222,    -1,
     216,   346,    -1,   221,   347,    -1,   353,   186,    -1,   353,
     187,   346,    -1,   353,   189,    -1,   353,   188,   347,    -1,
      -1,   348,   349,    -1,   335,    -1,   350,    -1,   217,    -1,
     183,    -1,   184,    -1,    22,   182,    -1,   243,   351,   242,
      -1,   353,    -1,    -1,   353,    -1,   287,    -1,   353,   228,
     287,    -1,   218,    -1,   212,    -1,   219,    -1,    -1,   356,
      -1,   237,   357,   238,    -1,   237,   357,     1,    -1,   358,
      -1,   357,   358,    -1,   357,    40,   358,    -1,   135,    -1,
     136,    -1,   143,    -1,   139,    -1,   140,    -1,   138,    -1,
     132,    -1,   131,   378,    -1,   133,   378,    -1,   142,   379,
      -1,   141,   378,    -1,   219,    11,   378,    -1,   173,    11,
     378,    -1,   137,   378,    -1,   134,   378,    -1,   218,    11,
     218,    -1,   375,    -1,   359,    61,   359,    -1,   359,    54,
     359,    -1,    60,   359,    -1,   359,    11,   359,    -1,   359,
      26,   359,    -1,   359,    18,   359,    -1,   359,    16,   359,
      -1,   359,    13,   359,    -1,   359,    12,   359,    -1,   359,
      57,   359,    -1,   359,    25,   359,    -1,   359,    28,   359,
      -1,   359,    34,   359,    -1,   359,    55,   359,    -1,   359,
      58,   359,    -1,   359,   232,   359,    -1,    25,   359,    -1,
     361,    -1,   362,    -1,    31,    -1,   363,    -1,   361,    31,
     363,    -1,   361,    33,   363,    -1,    31,   361,    -1,    33,
     361,    -1,   364,   365,   367,    -1,   365,   367,    -1,     9,
     367,    -1,    10,   367,    -1,   366,    -1,     4,    -1,   218,
      -1,    60,    -1,   219,    -1,   203,    -1,   204,    -1,    34,
      -1,   147,   377,   240,    -1,   147,   218,   240,    -1,   147,
     240,    -1,    78,   240,    -1,   159,   240,    -1,   130,   240,
      -1,   212,    -1,    41,    -1,    42,    -1,    43,    -1,    44,
      -1,    45,    -1,    46,    -1,    47,    -1,    48,    -1,    49,
      -1,    50,    -1,    51,    -1,    52,    -1,    53,    -1,    -1,
     370,    -1,    -1,   237,   369,   359,   238,    -1,   368,    -1,
     370,   368,    -1,     8,   224,    -1,   223,    -1,   371,    -1,
     239,   359,   240,    -1,   373,    -1,   377,    -1,   213,   374,
     240,    -1,   191,   374,   240,    -1,    -1,   359,    -1,   374,
     228,   359,    -1,   360,    -1,   376,    -1,   376,    31,   361,
      -1,   376,    33,   361,    -1,   372,    -1,   372,   368,    -1,
     378,    -1,   185,    -1,   222,    -1,   215,    -1,   214,    -1,
     378,    -1,   378,     9,   378,    -1,   378,     9,   378,     9,
     378,    -1,   378,    10,   378,    -1,   195,    -1,   378,    -1,
     244,   378,    -1,   380,    54,   380,    -1,   380,    54,    60,
     380,    -1,   380,    61,   380,    -1,   380,    59,   380,    -1,
     239,   380,   240,    -1,    17,   357,   238,   380,   240,    -1,
      17,   357,     1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   515,   515,   514,   521,   520,   526,   526,   527,   528,
     532,   533,   538,   537,   548,   552,   553,   557,   564,   566,
     567,   571,   574,   576,   577,   580,   582,   583,   587,   588,
     589,   590,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   603,   604,   605,   608,   611,   612,   613,   617,   631,
     632,   633,   634,   638,   639,   643,   644,   648,   657,   658,
     659,   663,   670,   671,   677,   678,   682,   683,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,   701,   705,   706,   707,   708,
     709,   710,   711,   712,   713,   714,   718,   719,   720,   724,
     725,   726,   727,   728,   732,   733,   734,   735,   736,   740,
     744,   748,   749,   750,   751,   752,   756,   757,   758,   762,
     763,   764,   769,   768,   806,   807,   808,   812,   813,   817,
     818,   822,   846,   856,   857,   861,   862,   866,   867,   871,
     872,   876,   877,   881,   882,   886,   887,   891,   892,   896,
     897,   901,   902,   906,   907,   911,   912,   916,   917,   921,
     922,   924,   928,   932,   936,   937,   938,   939,   940,   941,
     942,   943,   944,   945,   946,   947,   948,   949,   954,   958,
     959,   960,   961,   965,   966,   967,   968,   969,   970,   972,
     977,   981,   985,   986,   990,   991,   995,   996,  1000,  1012,
    1013,  1014,  1018,  1019,  1020,  1024,  1025,  1029,  1030,  1034,
    1035,  1039,  1040,  1044,  1048,  1049,  1054,  1053,  1066,  1070,
    1071,  1075,  1079,  1080,  1084,  1085,  1086,  1090,  1091,  1095,
    1096,  1100,  1101,  1105,  1106,  1107,  1108,  1116,  1117,  1118,
    1119,  1120,  1121,  1122,  1123,  1124,  1129,  1140,  1148,  1149,
    1150,  1151,  1152,  1156,  1157,  1161,  1166,  1171,  1180,  1181,
    1185,  1185,  1189,  1190,  1198,  1199,  1200,  1201,  1202,  1203,
    1204,  1205,  1206,  1208,  1207,  1215,  1216,  1221,  1222,  1226,
    1227,  1228,  1229,  1233,  1234,  1235,  1239,  1243,  1247,  1252,
    1260,  1261,  1262,  1263,  1267,  1268,  1272,  1273,  1277,  1278,
    1284,  1288,  1293,  1298,  1303,  1308,  1312,  1316,  1321,  1329,
    1330,  1334,  1335,  1339,  1340,  1341,  1342,  1348,  1349,  1350,
    1355,  1358,  1354,  1370,  1371,  1375,  1376,  1380,  1381,  1382,
    1386,  1387,  1388,  1389,  1393,  1394,  1395,  1400,  1401,  1402,
    1406,  1407,  1408,  1409,  1410,  1411,  1416,  1420,  1428,  1432,
    1440,  1441,  1445,  1446,  1447,  1448,  1449,  1450,  1512,  1517,
    1527,  1528,  1532,  1533,  1537,  1538,  1539,  1549,  1550,  1554,
    1555,  1559,  1560,  1561,  1565,  1566,  1567,  1568,  1569,  1570,
    1571,  1572,  1573,  1580,  1588,  1589,  1596,  1597,  1598,  1599,
    1607,  1608,  1609,  1610,  1611,  1612,  1613,  1614,  1615,  1616,
    1617,  1618,  1619,  1620,  1621,  1622,  1623,  1628,  1634,  1635,
    1636,  1641,  1642,  1643,  1648,  1649,  1654,  1655,  1656,  1657,
    1662,  1663,  1668,  1669,  1670,  1671,  1672,  1673,  1674,  1675,
    1676,  1677,  1678,  1679,  1680,  1685,  1686,  1687,  1688,  1689,
    1690,  1691,  1692,  1693,  1694,  1695,  1696,  1697,  1701,  1702,
    1706,  1706,  1710,  1711,  1716,  1717,  1722,  1723,  1724,  1725,
    1730,  1734,  1742,  1743,  1744,  1750,  1751,  1752,  1753,  1758,
    1759,  1766,  1767,  1771,  1772,  1773,  1777,  1779,  1781,  1783,
    1789,  1790,  1791,  1792,  1793,  1794,  1795,  1796,  1797,  1798
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "__PUNCT_BEGIN", "_AT", "_ASSIGN",
  "_COLON", "_COLON_COLON", "_DOLLAR", "_DOT", "_DOT_DOT", "_EQ", "_GE",
  "_GT", "_GT_OF_TAG", "_GT_GT", "_LE", "_LPAR_LSQBRA", "_LT",
  "_LT_OF_TAG", "_LT_LT", "_LT_SLASH", "_LT_BANG_CDATA",
  "_LT_BANG_MINUS_MINUS", "_LT_QMARK", "_MINUS", "_NOT_EQ", "_NOT_SAME",
  "_PLUS", "_POINTER_VIA_ID", "_SAME", "_SLASH", "_SLASH_GT",
  "_SLASH_SLASH", "_STAR", "_STAR_COLON", "_RPAR_AS_L", "_RPAR_PLUS",
  "_RPAR_QMARK", "_RPAR_STAR", "_RSQBRA_LSQBRA", "A_ANCESTOR",
  "A_ANCESTOR_OR_SELF", "A_ATTRIBUTE", "A_CHILD", "A_DESCENDANT",
  "A_DESCENDANT_OR_SELF", "A_FOLLOWING", "A_FOLLOWING_SIBLING",
  "A_NAMESPACE", "A_PARENT", "A_PRECEDING", "A_PRECEDING_SIBLING",
  "A_SELF", "K_AND", "K_DIV", "K_IDIV", "K_LIKE", "K_MOD", "K_NEAR",
  "K_NOT", "K_OR", "K2_EQ_L", "K2_GE_L", "K2_GT_L", "K2_LE_L", "K2_LT_L",
  "K2_NE_L", "AFTER_L", "AS_L", "AT_L", "ASCENDING_L", "ATTRIBUTE_LBRA_L",
  "ATTRIBUTE_LPAR_L", "BEFORE_L", "CASE_L", "COLLATION_L",
  "COMMENT_LBRA_L", "COMMENT_LPAR_L", "CONTEXT_L",
  "DECLARE_CONSTRUCTION_PRESERVE_L", "DECLARE_CONSTRUCTION_STRIP_L",
  "DECLARE_BASE_URI_L", "DECLARE_DEFAULT_COLLATION_L",
  "DECLARE_DEFAULT_ELEMENT_L", "DECLARE_DEFAULT_FUNCTION_L",
  "DECLARE_FUNCTION_L", "DECLARE_NAMESPACE_L",
  "DECLARE_ORDERING_ORDERED_L", "DECLARE_ORDERING_UNORDERED_L",
  "DECLARE_VALIDATION_LAX_L", "DECLARE_VALIDATION_SKIP_L",
  "DECLARE_VALIDATION_STRICT_L", "DECLARE_VARIABLE_DOLLAR_L",
  "DECLARE_XMLSPACE_PRESERVE_L", "DECLARE_XMLSPACE_STRIP_L", "DEFAULT_L",
  "DEFAULT_ELEMENT_L", "DELETE_L", "DESCENDING_L", "DOCUMENT_LBRA_L",
  "DOCUMENT_NODE_LPAR_L", "ELEMENT_LBRA_L", "ELEMENT_LPAR_L", "ELSE_L",
  "EMPTY_GREATEST_L", "EMPTY_LEAST_L", "EMPTY_LPAR_RPAR_L",
  "EVERY_DOLLAR_L", "EXCEPT_L", "EXTENSION_L", "EXTERNAL_L",
  "FOR_DOLLAR_L", "FREETEXT_L", "GLOBAL_L", "IF_LPAR_L", "IMPORT_MODULE_L",
  "IMPORT_SCHEMA_L", "INSTANCE_OF_L", "INTERSECT_L", "IN_L",
  "ITEM_LPAR_RPAR_L", "ITEM_LPAR_RPAR_PLUS_L", "ITEM_LPAR_RPAR_QMARK_L",
  "ITEM_LPAR_RPAR_STAR_L", "LAX_L", "LET_DOLLAR_L", "MODULE_NAMESPACE_L",
  "NAMESPACE_L", "NILLABLE_L", "NODE_LPAR_L", "O_BASE_URI", "O_DAVPROP",
  "O_DOC", "O_ENC", "O_HTTP", "O_KEY", "O_LANG", "O_QUIET", "O_SAX",
  "O_SHALLOW", "O_TAG", "O_VIEW", "O__STAR", "ORDER_BY_L",
  "ORDERED_LBRA_L", "PI_LBRA_L", "PI_LPAR_L", "PRAGMA_L", "RETURN_L",
  "SATISFIES_L", "SORTBY_LPAR_L", "SCHEMA_ATTRIBUTE_LPAR_L",
  "SCHEMA_ELEMENT_LPAR_L", "SKIP_L", "SOME_DOLLAR_L", "STABLE_ORDER_BY_L",
  "STRICT_L", "TEXT_LBRA_L", "TEXT_LPAR_L", "THEN_L", "TO_L", "TREAT_AS_L",
  "TYPESWITCH_LPAR_L", "UNION_L", "UNORDERED_LBRA_L", "VALIDATE_CONTEXT_L",
  "VALIDATE_GLOBAL_L", "VALIDATE_LAX_L", "VALIDATE_LBRA_L",
  "VALIDATE_STRICT_L", "VALIDATE_SKIP_L", "WHERE_L", "XMLNS",
  "SQL_COLON_COLUMN", "__PUNCT_END", "EXEC_SQL_XPATH", "START_OF_XQ_TEXT",
  "START_OF_XP_TEXT", "START_OF_FT_TEXT", "END_OF_XPSCN_TEXT",
  "__NONPUNCT_START", "CDATA_SECTION", "CHAR_REF", "PREDEFINED_ENTITY_REF",
  "NUMBER", "RBRA_NDQSTRING_DQ", "RBRA_NDQSTRING_LBRA",
  "RBRA_NSQSTRING_LBRA", "RBRA_NSQSTRING_SQ", "NAMESPACE_LNAME_LBRA",
  "NOT_XQCNAME_LPAR", "PI_LNAME_LBRA", "ATTRIBUTE_QNAME_LBRA",
  "ELEMENT_QNAME_LBRA", "SINGLE_WORD", "XQ_AT_DQ_NDQSTRING_DQ",
  "XQ_CAST_AS_CNAME", "XQ_CASTABLE_AS_CNAME", "XQ_CNAME_PLUS",
  "XQ_CNAME_QMARK", "XQ_CNAME_SLASH", "XQ_CNAME_STAR",
  "XQ_NCNAME_COLON_STAR", "XQ_STAR_COLON_NCNAME", "XQ_STRG_EXT_CONTENT",
  "XQ_STRG_QMARK_GT", "XQ_TYPE_LPAR_CNAME_RPAR",
  "XQ_XQUERY_VERSION_DQ_NDQSTRING_DQ", "XQ_AT_SQ_NSQSTRING_SQ",
  "XQ_XML_COMMENT_STRING", "XQ_XQUERY_VERSION_SQ_NSQSTRING_SQ", "XQCNAME",
  "XQCNAME_LPAR", "XQDQ_NAME_DQ", "XQDQ_NDQSTRING_DQ",
  "XQDQ_NDQSTRING_LBRA", "XQ_ECSTRING", "XQNCNAME", "XQNAMERESERVED",
  "XQQQNAME", "XQSQ_NSQSTRING_LBRA", "XQSQ_NSQSTRING_SQ", "XQVARIABLE_POS",
  "XQVARIABLE_NAME", "__NONPUNCT_END", "NOT_AS_NAME", "';'", "','",
  "STANDALONE_SLASH", "UMINUS", "UPLUS", "'|'", "SLASH_AS_MAP",
  "REL_PATH_TO_PATH", "STEPS_IN_REL_PATH", "LEFT_SLASH", "'['", "']'",
  "'('", "')'", "'?'", "'}'", "'{'", "'^'", "$accept", "sql", "@1", "@2",
  "@3", "top_xq", "@4", "top_xp", "opt_semi_END_OF_XPSCN_TEXT", "top_ft",
  "xq_version_decl_opt", "xq_prolog", "xq_prolog_setters_opt",
  "xq_prolog_decls_opt", "xq_prolog_setter", "xq_prolog_decl",
  "xq_schema_import", "xq_schema_prefix_opt", "xq_import_at_opt",
  "xq_import_more_opt", "xq_module_import", "xq_module_prefix_opt",
  "xq_var_decl", "xq_var_decl_init", "xq_type_declaration_opt",
  "xq_sequence_type", "xq_kind_test", "xq_rpar_oi", "xq_element_test_seq",
  "xq_element_test_item", "xq_schema_element_test_seq",
  "xq_schema_element_test_item", "xq_document_test_cont",
  "xq_name_or_star", "xq_pi_test_cont", "xq_function_decl", "@5",
  "xq_function_ret_decl_opt", "xq_params_opt", "xq_params", "xq_param",
  "xq_expr", "xq_expr_single", "xq_expr_sortby", "xq_expr_sort_specs",
  "xq_expr_sort_spec", "xq_expr_sort_dir", "xq_expr_sort_empty",
  "xq_expr_sort_collation", "xq_expr_sort_type", "xq_expr_flwr_forlets",
  "xq_expr_flwr_forlet", "xq_expr_flwr_for", "xq_expr_varins",
  "xq_expr_varin", "@6", "xq_expr_flwr_let", "xq_expr_varasss",
  "xq_expr_varass", "xq_expr_flwr_where_opt", "xq_expr_flwr_order_opt",
  "xq_expr_typecases", "xq_expr_typecase", "xq_expr_typedflt",
  "xq_expr_validation_block", "xq_path", "xq_path_calc",
  "xq_path_rel_from_axn", "xq_path_step", "xq_path_step_axis",
  "xq_path_step_nodetest", "xq_path_step_qualifs_opt",
  "xq_path_step_qualif", "@7", "xq_path_axis", "xq_expr_primary_calc",
  "@8", "xq_expr_ordering_block", "xq_expr_node_test", "xq_expr_name_test",
  "xq_expr_wildcard", "xq_expr_funcall", "xq_expr_syscall",
  "xq_expr_variable", "xq_literal", "xq_strg", "xq_comp_ctor",
  "xq_comp_elem_body_opt", "xq_comp_elem_body", "xq_comp_elem_child",
  "xq_dir_ctor", "xq_dir_el_ctor", "@9", "@10", "xq_dir_el_ctor_tail",
  "xq_dir_el_closing_ctor", "xq_dir_el_name_spec",
  "xq_dir_el_attr_list_opt", "xq_dir_el_attr_spec",
  "xq_dir_el_attr_ns_uri", "xq_dir_el_attr_value",
  "xq_dir_el_attr_dq_tail", "xq_dir_el_attr_sq_tail", "xq_dir_el_content",
  "xq_dir_el_child", "xq_expr_enclosed", "xq_expr_seq", "xq_exprs_opt",
  "xq_exprs", "xq_qname", "xp_options_seq_opt", "xp_options_seq",
  "xp_options", "xp_option", "xpath_expr", "path", "relative_path",
  "absolute_path", "step", "axis_spec", "node_test", "axis_name",
  "opt_predicates", "predicate", "@11", "pred_list", "variable_ref",
  "primary_expr", "xpath_function", "xpath_arg_list", "path_expr",
  "filter_expr", "literal", "literal_strg", "view_name", "text_exp", 0
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
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,    59,    44,   482,
     483,   484,   124,   485,   486,   487,   488,    91,    93,    40,
      41,    63,   125,   123,    94
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   245,   247,   246,   248,   246,   249,   246,   246,   246,
     250,   250,   251,   250,   252,   253,   253,   254,   255,   255,
     255,   256,   257,   257,   257,   258,   258,   258,   259,   259,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     259,   260,   260,   260,   260,   260,   260,   260,   261,   262,
     262,   262,   262,   263,   263,   264,   264,   265,   266,   266,
     266,   267,   268,   268,   269,   269,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   271,   271,   271,   271,
     271,   271,   271,   271,   271,   271,   272,   272,   272,   273,
     273,   273,   273,   273,   274,   274,   274,   274,   274,   275,
     276,   277,   277,   277,   277,   277,   278,   278,   278,   279,
     279,   279,   281,   280,   282,   282,   282,   283,   283,   284,
     284,   285,   286,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,   288,   288,   289,   289,   290,   291,
     291,   291,   292,   292,   292,   293,   293,   294,   294,   295,
     295,   296,   296,   297,   298,   298,   300,   299,   301,   302,
     302,   303,   304,   304,   305,   305,   305,   306,   306,   307,
     307,   308,   308,   309,   309,   309,   309,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   311,   312,   312,
     312,   312,   312,   313,   313,   314,   314,   315,   316,   316,
     318,   317,   319,   319,   320,   320,   320,   320,   320,   320,
     320,   320,   320,   321,   320,   322,   322,   323,   323,   324,
     324,   324,   324,   325,   325,   325,   326,   326,   326,   326,
     327,   327,   327,   327,   328,   328,   329,   329,   330,   330,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   332,
     332,   333,   333,   334,   334,   334,   334,   335,   335,   335,
     337,   338,   336,   339,   339,   340,   340,   341,   341,   341,
     342,   342,   342,   342,   343,   343,   343,   344,   344,   344,
     345,   345,   345,   345,   345,   345,   346,   346,   347,   347,
     348,   348,   349,   349,   349,   349,   349,   349,   350,   351,
     352,   352,   353,   353,   354,   354,   354,   355,   355,   356,
     356,   357,   357,   357,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   360,   360,
     360,   361,   361,   361,   362,   362,   363,   363,   363,   363,
     364,   364,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   367,   367,
     369,   368,   370,   370,   371,   371,   372,   372,   372,   372,
     373,   373,   374,   374,   374,   375,   375,   375,   375,   376,
     376,   377,   377,   378,   378,   378,   379,   379,   379,   379,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     0,     3,     0,     3,     5,     1,
       1,     4,     0,     9,     3,     2,     1,     3,     0,     2,
       2,     2,     0,     3,     3,     0,     2,     3,     1,     1,
       2,     2,     1,     1,     3,     3,     1,     1,     1,     1,
       1,     2,     2,     5,     5,     2,     2,     1,     4,     0,
       3,     3,     2,     0,     3,     0,     3,     4,     0,     3,
       3,     4,     1,     2,     0,     2,     1,     1,     1,     1,
       1,     3,     1,     3,     5,     1,     3,     3,     2,     2,
       2,     1,     1,     1,     1,     1,     3,     1,     3,     5,
       1,     3,     3,     2,     2,     2,     1,     1,     1,     2,
       3,     5,     6,     5,     2,     3,     5,     6,     5,     3,
       3,     0,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     0,     6,     1,     3,     2,     0,     1,     1,
       3,     3,     1,     2,     3,     3,     3,     3,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       5,     7,     6,     6,     3,     2,     2,     2,     5,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     3,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     5,     0,
       1,     1,     0,     1,     1,     0,     2,     0,     2,     1,
       2,     1,     1,     2,     1,     4,     0,     4,     2,     1,
       4,     3,     0,     2,     0,     2,     2,     1,     2,     7,
       4,     5,     3,     1,     2,     2,     2,     1,     1,     3,
       3,     3,     2,     2,     1,     3,     3,     2,     1,     1,
       3,     3,     3,     1,     1,     3,     1,     2,     0,     2,
       0,     4,     1,     2,     1,     1,     3,     2,     1,     1,
       1,     1,     1,     0,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     3,     2,
       4,     4,     3,     2,     2,     1,     1,     1,     1,     1,
       3,     3,     6,     3,     6,     3,     3,     3,     6,     0,
       1,     1,     3,     1,     4,     5,     3,     1,     2,     3,
       0,     0,     6,     1,     3,     2,     3,     1,     1,     3,
       0,     4,     4,     4,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     3,     2,     3,
       0,     2,     1,     1,     1,     1,     1,     2,     3,     1,
       0,     1,     1,     3,     1,     1,     1,     0,     1,     3,
       3,     1,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     3,     3,     2,     2,     3,
       1,     3,     3,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     1,     1,
       1,     1,     3,     3,     2,     2,     3,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       0,     4,     1,     2,     2,     1,     1,     3,     1,     1,
       3,     3,     0,     1,     3,     1,     1,     3,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     3,     5,     3,
       1,     1,     2,     3,     4,     3,     3,     3,     5,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     9,     0,     2,     4,     6,     0,     0,    18,   367,
     367,     1,     0,    10,     0,     0,     3,    22,     0,     5,
       0,   368,     7,     0,     0,    20,    19,     0,     0,    25,
       0,   380,     0,     0,   374,   375,     0,   379,   377,   378,
       0,     0,   376,     0,     0,     0,     0,   371,   421,     0,
     448,   448,     0,   410,     0,   427,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   423,
       0,     0,     0,     0,   472,   462,   425,   426,   434,   462,
     475,   474,   422,   424,   473,   455,     0,     0,   465,   408,
     409,   411,     0,   448,   420,   456,   469,   458,   390,   466,
     459,   471,     0,   480,     0,     0,   481,     0,     8,     0,
       0,   268,   256,   320,     0,     0,     0,     0,   244,     0,
     283,     0,     0,     0,     0,     0,     0,   111,     0,     0,
       0,     0,     0,     0,     0,   275,     0,   119,     0,     0,
       0,     0,     0,     0,   276,     0,   233,     0,     0,     0,
     297,     0,   360,   360,   309,   284,   285,   280,     0,   299,
     281,   282,   298,   295,     0,   278,    87,    90,     0,   362,
     222,   209,   211,   212,     0,   193,   238,   237,   248,   249,
       0,   258,   273,   258,   277,   279,   269,   272,   265,   264,
     296,   271,   270,   317,   132,   262,    32,    33,     0,     0,
       0,     0,    36,    37,    38,    39,    40,    28,    29,    21,
       0,   381,   382,   388,   387,   384,   476,   383,     0,     0,
       0,   370,     0,   369,   372,   454,   450,   418,   452,   449,
     419,   407,   423,   414,   415,   393,   431,   433,     0,   430,
       0,   432,   463,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      16,     0,     0,    14,     0,     0,   448,   417,   470,     0,
       0,     0,     0,   482,     0,     0,     0,    17,     0,   294,
     321,   318,   365,   364,   366,     0,   187,   186,   242,   243,
     139,   138,     0,   118,   117,   116,     0,     0,    93,     0,
       0,     0,   112,   113,   114,   115,     0,     0,   104,     0,
       0,     0,   213,   214,     0,     0,   218,   219,    95,     0,
     120,     0,   121,     0,     0,     0,     0,    94,     0,   234,
     235,   236,   293,     0,   289,     0,     0,   361,     0,     0,
       0,   313,     0,   310,   311,   287,     0,   263,   267,     0,
     359,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   167,     0,   165,   166,     0,   133,
       0,   210,   224,     0,     0,     0,     0,     0,     0,     0,
     281,   258,   247,     0,   257,     0,    31,    30,     0,     0,
       0,     0,     0,    58,    49,    26,     0,     0,     0,    47,
      24,    23,     0,     0,   386,   389,   385,   373,     0,   453,
     429,   428,     0,   461,   460,   457,   394,   399,   398,   397,
     396,   401,   395,   402,   403,   392,   404,   400,   405,   391,
      15,   406,   412,   413,   416,   467,   468,   489,     0,   487,
       0,   483,   486,   485,     0,     0,   319,     0,     0,    88,
     306,   300,    96,    97,    98,    99,     0,     0,    86,     0,
       0,   105,     0,   216,     0,     0,     0,     0,     0,    92,
      91,   110,     0,   305,     0,   292,     0,   288,   307,   303,
       0,     0,     0,   301,     0,   286,   266,   169,   177,   176,
     157,   156,   175,   174,   153,   152,   180,   170,   172,   179,
     171,   181,   137,   136,   184,   183,   182,   173,   185,   135,
     134,   141,   140,   143,   142,   145,   144,   147,   146,   149,
     148,   151,   150,   159,   158,   155,   154,   191,     0,     0,
     111,    85,    81,    82,    83,    84,     0,   119,     0,     0,
      69,    70,    68,    67,   164,    66,    72,    75,   190,   199,
       0,   196,   178,   188,   189,   223,     0,     0,     0,   192,
     241,   245,   239,   246,   240,   252,   253,   254,   250,   251,
     255,   260,   259,     0,   363,    34,    35,   127,     0,     0,
      64,     0,     0,     0,     0,     0,    27,    41,    42,    45,
      46,   477,   479,     0,   464,     0,   484,    12,   328,   327,
       0,   330,   360,     0,     0,   100,   109,   309,     0,     0,
       0,     0,     0,     0,   221,     0,   360,     0,     0,     0,
     227,   291,   290,     0,     0,   316,   312,     0,    78,     0,
      80,     0,     0,    79,   200,   201,   202,   195,     0,   194,
     225,   226,     0,     0,   274,     0,     0,   128,   129,     0,
       0,     0,     0,     0,     0,    53,    52,     0,     0,    53,
       0,   451,   488,    22,     0,     0,     0,    89,     0,     0,
       0,   108,   106,     0,     0,   217,   215,     0,   220,     0,
       0,     0,     0,     0,   228,   168,     0,   314,     0,    73,
      71,    77,    76,   203,   204,   205,   197,   160,     0,    64,
       0,   124,   122,     0,     0,     0,    65,     0,    62,    61,
      59,    60,     0,    57,    50,    51,    48,   478,     0,   329,
     350,   323,     0,   335,   334,     0,     0,   322,     0,   304,
     103,     0,   101,   302,   107,   163,     0,   308,   162,     0,
       0,     0,     0,   315,     0,     0,   207,   261,   131,   126,
       0,     0,   130,    43,    44,    63,    55,    13,     0,     0,
       0,     0,     0,   102,   161,     0,   230,     0,   232,    74,
     206,     0,   198,   125,     0,   123,    54,     0,     0,   355,
     356,   354,   352,   324,   351,   353,   337,   338,   339,   332,
     333,   336,   341,   342,     0,     0,   343,   331,   340,     0,
       0,   208,     0,     0,   325,     0,   357,   344,     0,   345,
       0,     0,   231,   358,    56,   326,   346,     0,     0,   348,
     229,   347,   349
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     8,     9,    10,    16,   683,    19,   263,    22,
      17,    28,    29,   209,   210,   415,   416,   605,   733,   796,
     417,   602,   418,   729,   672,   564,   165,   475,   566,   166,
     567,   167,   306,   296,   321,   419,   771,   722,   666,   667,
     668,   168,   169,   389,   570,   571,   656,   715,   766,   792,
     170,   171,   172,   312,   313,   631,   173,   316,   317,   392,
     578,   639,   640,   705,   174,   175,   176,   177,   585,   178,
     179,   402,   592,   663,   180,   181,   403,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   342,   343,   344,
     192,   193,   280,   465,   747,   803,   621,   685,   748,   809,
     817,   827,   829,   778,   804,   795,   349,   336,   194,   285,
      20,    21,    46,    47,   242,    88,    89,    90,    91,   195,
      93,    94,   227,   228,   428,   229,    95,    96,    97,   243,
      98,    99,   100,   101,   217,   107
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -697
static const yytype_int16 yypact[] =
{
     396,  -697,  -147,  -697,  -697,  -697,    60,   -56,  -127,  -102,
    -102,  -697,   -86,  -697,   -85,   -71,  -697,    43,  1249,  -697,
    4718,  -697,  -697,   180,    14,  -697,  -697,   -22,  4316,   590,
    -152,  -697,  -152,  -152,  -697,  -697,  -152,  -697,  -697,  -697,
    -152,  -152,  -697,   192,   211,   273,   390,  -697,  -697,    49,
     123,   123,  4718,  5723,  5723,  -697,  -697,  -697,  -697,  -697,
    -697,  -697,  -697,  -697,  -697,  -697,  -697,  -697,  -697,  4718,
      71,   134,   260,   143,  -697,  4718,  -697,  -697,  -697,  4718,
    -697,  -697,  -697,  -697,  -697,  -697,  4718,   608,  -697,    86,
    -697,  -697,  1038,   123,  -697,  -697,   123,  -697,  -697,   474,
    -697,  -697,  1249,  -697,   180,  -152,  -697,    15,  -697,   379,
     172,  -697,  -697,  -697,   190,   247,  4316,  4316,  4846,  4846,
    -697,   698,  4316,    18,  4316,   163,  4316,   -76,  4316,   149,
     194,   202,  4316,   207,   208,  -697,  4316,   262,   257,   269,
     261,  4316,   253,  4316,  -697,   271,  -697,   297,   300,    42,
    -697,  3512,  4316,  4316,  4115,  -697,  -697,  -697,  3713,  -697,
     505,  -697,  -697,  -697,  3914,  -697,  -697,  -697,   371,  5240,
     -65,  -697,  -697,  -697,  4316,   418,  -697,   548,  -697,  -697,
    5685,  -697,  -697,  -697,  -697,  -697,  -697,  -697,  -697,  -697,
    -697,  -697,  -697,  -697,   324,  -697,  -697,  -697,   -53,   -53,
     429,   431,  -697,  -697,  -697,  -697,  -697,  -697,  -697,   483,
      44,  -697,  -697,  -697,  -697,  -697,    87,  -697,  -152,   354,
    -152,  -697,  1249,  -697,  -697,  -697,  -697,  -697,  -697,   123,
    -697,   332,  -697,    86,    86,   962,  -697,  -697,   340,  -697,
     342,  -697,   761,  -122,  -113,   147,  4718,  4718,  4718,  4718,
    4718,  4718,  4718,  4718,  4718,  4718,  4718,  4718,  4718,  4718,
    -697,   403,  4718,  -697,  5723,  5723,   123,  -697,  -697,  5723,
    5723,   518,    82,  -697,   346,   180,   180,  -697,   -53,  -697,
    -697,  -697,  -697,  -697,  -697,   380,   844,   844,  -697,  -697,
    -697,  5550,   349,  -697,  -697,  -697,   -64,  -119,  -697,  -114,
     294,   376,  -697,  -697,  -697,  -697,   353,   355,  -697,   -21,
     469,   476,   374,  -697,   361,   598,   378,  -697,  -697,   362,
    -697,   365,  -697,   367,   372,   494,  -104,  -697,   382,  -697,
    -697,  -697,  -697,    10,  -697,   152,   381,   324,   383,  -168,
     -53,  5240,   385,   388,  -697,  -697,   153,  -697,  -697,   389,
     324,  -697,  4316,  4316,  4316,   899,  4316,  4316,  1100,  4316,
    4316,  4316,  4316,  4316,  4316,  1301,  4316,  1502,  4316,  4316,
    1703,  1904,  2105,  2306,  2507,  2708,  2909,  3110,  3311,  4316,
    5753,  4316,  4316,  4316,  -697,  4316,  -697,  -697,  4316,  -697,
    4316,  -697,   276,   393,  4846,  4517,  4517,  4846,  4846,  4846,
    -697,  -697,   395,  4316,   395,  4316,  -697,  -697,   -53,   -53,
     417,   279,   394,   509,   -73,   590,   411,   416,   420,   421,
    -697,  -697,  -152,  -152,  -697,  -697,  -697,  -697,  4718,  -697,
    -697,  -697,  4718,  -697,  -697,  -697,  1022,   537,   537,   537,
     537,    -4,  1022,    -4,   332,   962,   332,   537,   332,   821,
    -697,  -697,  -697,  -697,  -697,    86,    86,  -697,   180,  -697,
     180,   605,  -697,   -28,   440,  -133,  -697,   425,   465,  -697,
    -697,  -697,  -697,  -697,  -697,  -697,   173,    55,  -697,   443,
     241,  -697,  4316,  -697,   675,   527,  4316,   680,   447,  -697,
    -697,  -697,  4316,  -697,   617,  -697,    38,  -697,  -697,  -697,
     450,   -53,   452,  -697,  4115,  -697,  -697,  5616,  5636,  5636,
    -697,  5636,  5636,  5636,  -697,  5636,  4516,  5616,  5636,  4516,
    5636,   844,  -697,  5550,   844,  -697,   844,  5636,   844,  -697,
    5428,  -697,  5636,  -697,  5636,  -697,  5636,  -697,  5636,  -697,
    5636,  -697,  5636,  -697,  5342,  -697,  5342,   -46,    18,    74,
     -76,  -697,  -697,  -697,  -697,  -697,   129,   262,   486,   249,
    -697,  -697,  -697,  -697,  -697,  -697,  -697,  -697,   -46,  4764,
      36,  -697,  4380,   259,   259,  -697,  4316,  4316,   546,  -697,
    -697,  -697,  -697,  -697,  -697,  -697,  -697,  -697,  -697,  -697,
     395,  -697,  -697,   458,  5240,  -697,  -697,   693,   692,   694,
     640,   280,   -53,   582,   281,   -53,  -697,  -697,  -697,  -697,
    -697,   702,  -697,   166,   761,   375,   605,  -697,  -697,  -697,
    4316,  -697,  4316,   472,   246,  -697,  -697,  4115,   473,   -23,
    4952,  4316,   202,  4316,  5240,   207,  4316,  5018,  5209,    -7,
    -697,  -697,  -697,   -53,   482,  -697,  -697,   177,  -697,   347,
    -697,   370,   373,  -697,  -697,  -697,    16,  -697,  4316,  -697,
     488,   488,  4316,  4316,  -697,   490,   -14,   497,  -697,   -53,
     -53,  5753,    39,   707,   716,   658,  -697,   722,   723,   658,
    -152,  -697,  -697,  -697,   493,   139,   496,  -697,   377,   108,
     510,  -697,  -697,   513,  4316,  5240,  -697,  5174,  -697,   512,
    4316,   531,   610,    12,  -697,  -697,   515,  -697,   549,  -697,
    -697,  -697,  -697,  -697,  -697,   684,  -697,  5362,   524,   640,
    5753,   695,  -697,   693,   536,   538,  -697,  4316,  -697,  -697,
    -697,  -697,   -53,  -697,  -697,  -697,  -697,  -697,   586,  -697,
    -697,  -697,   756,  -697,  -697,   757,  4316,  -697,   767,  -697,
    -697,   401,  -697,  -697,  -697,  5362,  4316,  -697,  5362,   711,
    4316,   557,  4316,  -697,   405,   -53,   713,  -697,  -697,  -697,
    5753,   540,  -697,  -697,  -697,  5240,  -697,  -697,   110,   -29,
     -29,   542,   323,  -697,  5362,  5753,  5240,   636,  5362,  -697,
    -697,   247,  -697,  -697,  4316,  -697,   562,    73,   609,  -697,
    -697,  -697,  -697,  -697,  -697,  -697,  -697,  -697,  -697,  -697,
    -697,  -697,  -697,  -697,  4316,  4316,  -697,  -697,  -697,   643,
    4316,  -697,   551,   -53,  -697,   780,  -697,  -697,  -128,  -697,
    -140,  4316,  5362,  -697,  -697,  -697,  -697,  4316,  4316,  -697,
    5240,  -697,  -697
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -697,  -697,  -697,  -697,  -697,  -697,  -697,  -697,  -697,  -697,
    -697,   113,  -697,  -697,   387,  -697,  -697,  -697,   118,  -697,
    -697,  -697,  -697,  -697,    84,  -572,  -348,  -197,  -125,  -123,
    -117,  -115,   254,  -120,   248,  -697,  -697,  -697,  -697,  -697,
      85,  -107,  -116,  -697,  -247,   151,  -697,  -697,  -697,  -697,
    -697,   637,  -697,  -697,   179,  -697,  -697,  -697,   182,  -697,
    -697,  -697,   175,  -697,  -697,  -697,   -40,   -77,   -34,    65,
      89,  -170,  -697,  -697,  -697,  -697,  -697,  -697,   632,  -697,
    -697,  -697,  -697,  -697,  -697,  -134,  -697,   193,  -697,   317,
      45,  -697,  -697,  -697,  -697,  -697,  -697,  -697,  -697,    46,
    -697,   -12,   -11,  -697,  -697,  -680,    35,  -146,  -118,  -696,
     820,  -697,   729,    11,    88,  -697,   -35,  -697,   283,    51,
     744,  -697,   -37,   -80,  -697,  -697,  -697,  -697,  -697,   759,
    -697,  -697,   769,    50,  -697,   -87
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_int16 yytable[] =
{
     286,   287,   302,   322,   303,   291,   297,   338,   299,   309,
     304,   495,   305,   404,   230,   292,   268,   272,   233,   234,
     761,   307,   720,   326,   603,   314,   274,   300,     7,   319,
     254,   275,   565,   335,   337,   337,   328,   657,   341,   641,
     346,   288,   289,   332,   727,   420,   350,   131,   838,   839,
     500,   256,   293,    13,   258,   604,   267,   224,   836,   837,
      11,   133,    80,    81,   406,   407,   702,   393,   638,   274,
      84,    92,   380,   106,   275,   501,   276,   301,   294,   618,
     211,    14,   212,   213,    15,   619,   214,   824,   405,   703,
     215,   216,   472,   473,   474,   821,   422,   423,   805,   726,
     405,   825,   818,    92,    92,    92,   432,   390,    87,   405,
     620,   472,   473,   474,   405,   432,   384,   264,   433,   265,
      92,   713,   714,   470,   405,    12,    92,   434,   471,   113,
      92,   797,   798,   114,   115,    18,   274,    92,   493,    24,
     231,   275,    25,   276,   464,   472,   473,   474,   769,   429,
     728,   386,   387,   740,   106,   273,    26,   235,   246,   247,
     248,   762,   159,   249,   468,   250,   472,   473,   474,   162,
      27,   741,   251,   252,   245,   253,   469,   246,   247,   248,
     476,   254,   249,   293,   250,   806,   807,   461,   462,   463,
     108,   251,   252,   808,   253,   277,   109,   102,   793,   496,
     254,   255,   256,   218,   257,   258,   502,   480,   259,   294,
     472,   473,   474,   819,   472,   473,   474,   692,   693,   481,
     255,   256,   219,   257,   258,   159,   721,   259,   262,   454,
     295,   590,   162,   427,   455,   456,   507,   508,   509,   511,
     512,   513,   515,   516,   517,   518,   519,   520,   521,   523,
     524,   526,   527,   528,   530,   532,   534,   536,   538,   540,
     542,   544,   546,   547,   658,   568,   569,   572,   424,   573,
     426,   421,   574,   225,   595,   596,   659,   599,   642,   625,
     626,   333,   224,   575,   220,   282,   472,   473,   474,   594,
     565,   283,   284,   799,   800,   491,   593,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,   236,   742,    92,   298,    92,    92,   580,   582,   584,
      92,    92,   459,   565,   106,   106,   106,   801,   293,   660,
     661,   472,   473,   474,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   692,   751,
     451,   743,   648,   794,   294,   581,   583,   744,   745,   650,
     226,   295,   653,   102,   588,   589,   630,   644,   379,   318,
     634,   615,   565,   616,   237,   103,   637,   380,   381,   262,
     405,   405,   746,   241,   472,   473,   474,   435,   341,   308,
     278,   221,   497,   505,    80,    81,   279,     1,   262,     2,
     281,   624,    84,   298,   681,   708,   460,   472,   473,   474,
     472,   473,   474,   481,   472,   473,   474,   469,   310,   104,
     576,   384,   565,   322,   105,   302,   311,   303,   647,   274,
     222,   315,   577,   304,   275,   305,   276,   565,   472,   473,
     474,   628,   472,   473,   474,    74,   688,   394,   318,   395,
     709,   396,   710,   629,   711,   712,   386,   387,   689,   282,
     569,   569,   586,   586,   586,   283,   284,   674,   675,   323,
     678,   679,   611,   612,    80,    81,   686,   159,   238,    92,
     320,   324,    84,    92,   162,   325,   587,   587,   587,   327,
     699,   750,   752,   327,   159,   159,   159,   598,   673,   677,
     239,   162,   162,   162,   337,   269,   295,   270,   106,   706,
     106,   341,   347,   684,   329,   695,   613,   697,   337,   457,
     614,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,   308,   724,   725,   812,   813,   814,
     330,   103,   569,   331,   815,   816,   717,   452,   453,    -1,
      -1,   351,   405,    -1,   783,    -1,   718,   408,   222,   409,
      80,    81,   251,    43,   262,   253,   794,   789,    84,   410,
     411,   254,   425,     3,     4,     5,   412,   397,   755,   398,
     430,   399,   431,   450,   758,   104,   466,   478,   477,   482,
     105,   467,   256,   478,    -1,   258,   483,   479,   776,   413,
     414,   485,   484,   486,   488,   489,   487,   490,    44,    45,
     489,   775,   491,   490,   492,   682,   504,   691,   600,   246,
     247,   248,   494,   498,   249,   499,   250,   503,   223,   506,
     597,   790,   591,   251,   252,   579,   253,   601,   607,   781,
     784,   754,   254,   608,   786,   687,   788,   609,   610,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,   255,   256,   275,   257,   258,   617,   622,   259,
     196,   197,   198,   199,   200,   201,   350,   623,   202,   203,
     204,   205,   206,   632,   207,   208,   627,   633,   635,   834,
     636,    43,   638,   643,   645,   662,   828,   830,   652,   290,
     664,   665,    48,   669,   832,   670,   110,   111,   112,   671,
     676,   680,   687,   691,   719,   840,   658,   113,   730,   828,
     830,   114,   115,   116,   707,   723,   117,   731,   732,   118,
     737,   119,   120,   734,   735,   739,    44,    45,   749,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,   753,   754,   757,   759,   458,   763,   121,   760,
     765,   764,   767,   773,   770,   774,   777,   779,   780,   262,
     122,   123,   246,   247,   248,   124,   125,   249,   782,   250,
     785,   787,   791,   794,   811,   820,   251,   252,   260,   253,
     823,   826,   831,   833,   835,   254,   738,   736,   126,   127,
     128,   129,   606,   768,   649,   651,   130,   391,   772,   716,
     131,   696,   401,   132,   704,   255,   256,   698,   257,   258,
     690,   646,   259,   802,   133,   841,   810,   842,   134,   822,
      23,   271,   246,   247,   248,   261,   266,   249,   244,   250,
     262,   240,     0,   135,   136,   137,   251,   252,     0,   253,
     138,   139,     0,   140,     0,   254,   141,   142,     0,     0,
       0,   143,     0,   144,     0,     0,   145,   146,   147,   148,
       0,     0,   149,     0,     0,   255,   256,     0,   257,   258,
       0,     0,     0,   150,     0,     0,     0,     0,     0,   151,
     152,   153,   154,     0,     0,     0,     0,     0,     0,     0,
     510,   155,   156,    48,     0,     0,     0,   110,   111,   112,
     157,   158,     0,   159,     0,     0,   160,   161,   113,     0,
     162,   163,   114,   115,   116,     0,     0,   117,     0,     0,
     118,     0,   119,   120,     0,     0,     0,   164,     0,     0,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,   379,     0,     0,     0,     0,     0,   121,
       0,     0,   380,   381,     0,     0,     0,     0,     0,     0,
       0,   122,   123,   246,   247,   248,   124,   125,   249,     0,
     250,     0,     0,     0,     0,     0,     0,   251,   252,     0,
     253,     0,     0,   262,     0,     0,   254,     0,     0,   126,
     127,   128,   129,     0,     0,     0,   384,   130,   385,     0,
       0,   131,     0,     0,   132,     0,     0,   256,     0,   257,
     258,     0,     0,     0,     0,   133,     0,     0,     0,   134,
       0,     0,     0,    -1,   247,   248,     0,     0,   249,     0,
     250,   386,   387,     0,   135,   136,   137,   251,    -1,     0,
     253,   138,   139,   262,   140,     0,   254,   141,   142,     0,
       0,     0,   143,     0,   144,     0,     0,   145,   146,   147,
     148,     0,    55,   149,     0,     0,   388,   256,     0,   257,
     258,     0,     0,     0,   150,     0,     0,     0,     0,     0,
     151,   152,   153,   154,     0,     0,     0,     0,   232,     0,
       0,   514,   155,   156,    48,     0,     0,     0,   110,   111,
     112,   157,   158,     0,   159,     0,    70,   160,   161,   113,
       0,   162,   163,   114,   115,   116,     0,     0,   117,     0,
       0,   118,     0,   119,   120,     0,     0,     0,   164,     0,
       0,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,     0,     0,     0,     0,     0,     0,
     121,     0,     0,     0,     0,     0,     0,     0,    71,     0,
       0,     0,   122,   123,     0,     0,     0,   124,   125,     0,
       0,     0,     0,     0,     0,    72,     0,     0,     0,     0,
       0,     0,     0,     0,   262,     0,     0,    73,     0,     0,
     126,   127,   128,   129,     0,     0,     0,     0,   130,     0,
       0,     0,   131,     0,     0,   132,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   133,     0,     0,     0,
     134,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,    77,     0,     0,   135,   136,   137,     0,     0,
      78,     0,   138,   139,   262,   140,    82,    83,   141,   142,
       0,     0,     0,   143,     0,   144,     0,     0,   145,   146,
     147,   148,     0,     0,   149,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   150,     0,     0,     0,     0,
       0,   151,   152,   153,   154,     0,     0,     0,     0,     0,
       0,     0,   522,   155,   156,    48,     0,     0,     0,   110,
     111,   112,   157,   158,     0,   159,     0,     0,   160,   161,
     113,     0,   162,   163,   114,   115,   116,     0,     0,   117,
       0,     0,   118,     0,   119,   120,     0,     0,     0,   164,
       0,     0,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,     0,     0,     0,     0,     0,
       0,   121,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   122,   123,     0,     0,     0,   124,   125,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,     0,     0,     0,     0,     0,     0,     0,
       0,   126,   127,   128,   129,     0,     0,     0,     0,   130,
       0,     0,     0,   131,     0,     0,   132,     0,     0,     0,
       0,     0,    43,     0,     0,     0,     0,   133,     0,     0,
       0,   134,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   135,   136,   137,     0,
       0,     0,     0,   138,   139,     0,   140,     0,     0,   141,
     142,     0,     0,     0,   143,     0,   144,    44,    45,   145,
     146,   147,   148,     0,     0,   149,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   150,     0,     0,     0,
       0,     0,   151,   152,   153,   154,     0,     0,     0,     0,
       0,     0,     0,   525,   155,   156,    48,     0,     0,     0,
     110,   111,   112,   157,   158,     0,   159,     0,     0,   160,
     161,   113,     0,   162,   163,   114,   115,   116,     0,     0,
     117,     0,     0,   118,     0,   119,   120,     0,     0,     0,
     164,     0,     0,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,     0,     0,     0,     0,
       0,     0,   121,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,   123,     0,     0,     0,   124,
     125,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   126,   127,   128,   129,     0,     0,     0,     0,
     130,     0,     0,     0,   131,     0,     0,   132,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   133,     0,
       0,     0,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   135,   136,   137,
       0,     0,     0,     0,   138,   139,     0,   140,     0,     0,
     141,   142,     0,     0,     0,   143,     0,   144,     0,     0,
     145,   146,   147,   148,     0,     0,   149,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   150,     0,     0,
       0,     0,     0,   151,   152,   153,   154,     0,     0,     0,
       0,     0,     0,     0,   529,   155,   156,    48,     0,     0,
       0,   110,   111,   112,   157,   158,     0,   159,     0,     0,
     160,   161,   113,     0,   162,   163,   114,   115,   116,     0,
       0,   117,     0,     0,   118,     0,   119,   120,     0,     0,
       0,   164,     0,     0,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,     0,     0,     0,
       0,     0,     0,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,   123,     0,     0,     0,
     124,   125,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   126,   127,   128,   129,     0,     0,     0,
       0,   130,     0,     0,     0,   131,     0,     0,   132,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   133,
       0,     0,     0,   134,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   135,   136,
     137,     0,     0,     0,     0,   138,   139,     0,   140,     0,
       0,   141,   142,     0,     0,     0,   143,     0,   144,     0,
       0,   145,   146,   147,   148,     0,     0,   149,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   150,     0,
       0,     0,     0,     0,   151,   152,   153,   154,     0,     0,
       0,     0,     0,     0,     0,   531,   155,   156,    48,     0,
       0,     0,   110,   111,   112,   157,   158,     0,   159,     0,
       0,   160,   161,   113,     0,   162,   163,   114,   115,   116,
       0,     0,   117,     0,     0,   118,     0,   119,   120,     0,
       0,     0,   164,     0,     0,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,     0,     0,
       0,     0,     0,     0,   121,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,   123,     0,     0,
       0,   124,   125,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   126,   127,   128,   129,     0,     0,
       0,     0,   130,     0,     0,     0,   131,     0,     0,   132,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     133,     0,     0,     0,   134,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   135,
     136,   137,     0,     0,     0,     0,   138,   139,     0,   140,
       0,     0,   141,   142,     0,     0,     0,   143,     0,   144,
       0,     0,   145,   146,   147,   148,     0,     0,   149,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   150,
       0,     0,     0,     0,     0,   151,   152,   153,   154,     0,
       0,     0,     0,     0,     0,     0,   533,   155,   156,    48,
       0,     0,     0,   110,   111,   112,   157,   158,     0,   159,
       0,     0,   160,   161,   113,     0,   162,   163,   114,   115,
     116,     0,     0,   117,     0,     0,   118,     0,   119,   120,
       0,     0,     0,   164,     0,     0,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,     0,
       0,     0,     0,     0,     0,   121,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   122,   123,     0,
       0,     0,   124,   125,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   126,   127,   128,   129,     0,
       0,     0,     0,   130,     0,     0,     0,   131,     0,     0,
     132,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   133,     0,     0,     0,   134,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     135,   136,   137,     0,     0,     0,     0,   138,   139,     0,
     140,     0,     0,   141,   142,     0,     0,     0,   143,     0,
     144,     0,     0,   145,   146,   147,   148,     0,     0,   149,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     150,     0,     0,     0,     0,     0,   151,   152,   153,   154,
       0,     0,     0,     0,     0,     0,     0,   535,   155,   156,
      48,     0,     0,     0,   110,   111,   112,   157,   158,     0,
     159,     0,     0,   160,   161,   113,     0,   162,   163,   114,
     115,   116,     0,     0,   117,     0,     0,   118,     0,   119,
     120,     0,     0,     0,   164,     0,     0,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
       0,     0,     0,     0,     0,     0,   121,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,   123,
       0,     0,     0,   124,   125,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   126,   127,   128,   129,
       0,     0,     0,     0,   130,     0,     0,     0,   131,     0,
       0,   132,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   133,     0,     0,     0,   134,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   135,   136,   137,     0,     0,     0,     0,   138,   139,
       0,   140,     0,     0,   141,   142,     0,     0,     0,   143,
       0,   144,     0,     0,   145,   146,   147,   148,     0,     0,
     149,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   150,     0,     0,     0,     0,     0,   151,   152,   153,
     154,     0,     0,     0,     0,     0,     0,     0,   537,   155,
     156,    48,     0,     0,     0,   110,   111,   112,   157,   158,
       0,   159,     0,     0,   160,   161,   113,     0,   162,   163,
     114,   115,   116,     0,     0,   117,     0,     0,   118,     0,
     119,   120,     0,     0,     0,   164,     0,     0,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,   121,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   122,
     123,     0,     0,     0,   124,   125,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   126,   127,   128,
     129,     0,     0,     0,     0,   130,     0,     0,     0,   131,
       0,     0,   132,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   133,     0,     0,     0,   134,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   135,   136,   137,     0,     0,     0,     0,   138,
     139,     0,   140,     0,     0,   141,   142,     0,     0,     0,
     143,     0,   144,     0,     0,   145,   146,   147,   148,     0,
       0,   149,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   150,     0,     0,     0,     0,     0,   151,   152,
     153,   154,     0,     0,     0,     0,     0,     0,     0,   539,
     155,   156,    48,     0,     0,     0,   110,   111,   112,   157,
     158,     0,   159,     0,     0,   160,   161,   113,     0,   162,
     163,   114,   115,   116,     0,     0,   117,     0,     0,   118,
       0,   119,   120,     0,     0,     0,   164,     0,     0,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,     0,     0,     0,     0,     0,     0,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,   123,     0,     0,     0,   124,   125,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   126,   127,
     128,   129,     0,     0,     0,     0,   130,     0,     0,     0,
     131,     0,     0,   132,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   133,     0,     0,     0,   134,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,   136,   137,     0,     0,     0,     0,
     138,   139,     0,   140,     0,     0,   141,   142,     0,     0,
       0,   143,     0,   144,     0,     0,   145,   146,   147,   148,
       0,     0,   149,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   150,     0,     0,     0,     0,     0,   151,
     152,   153,   154,     0,     0,     0,     0,     0,     0,     0,
     541,   155,   156,    48,     0,     0,     0,   110,   111,   112,
     157,   158,     0,   159,     0,     0,   160,   161,   113,     0,
     162,   163,   114,   115,   116,     0,     0,   117,     0,     0,
     118,     0,   119,   120,     0,     0,     0,   164,     0,     0,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,     0,     0,     0,     0,     0,     0,   121,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,   123,     0,     0,     0,   124,   125,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   126,
     127,   128,   129,     0,     0,     0,     0,   130,     0,     0,
       0,   131,     0,     0,   132,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   133,     0,     0,     0,   134,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   135,   136,   137,     0,     0,     0,
       0,   138,   139,     0,   140,     0,     0,   141,   142,     0,
       0,     0,   143,     0,   144,     0,     0,   145,   146,   147,
     148,     0,     0,   149,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   150,     0,     0,     0,     0,     0,
     151,   152,   153,   154,     0,     0,     0,     0,     0,     0,
       0,   543,   155,   156,    48,     0,     0,     0,   110,   111,
     112,   157,   158,     0,   159,     0,     0,   160,   161,   113,
       0,   162,   163,   114,   115,   116,     0,     0,   117,     0,
       0,   118,     0,   119,   120,     0,     0,     0,   164,     0,
       0,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,     0,     0,     0,     0,     0,     0,
     121,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,   123,     0,     0,     0,   124,   125,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     126,   127,   128,   129,     0,     0,     0,     0,   130,     0,
       0,     0,   131,     0,     0,   132,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   133,     0,     0,     0,
     134,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   135,   136,   137,     0,     0,
       0,     0,   138,   139,     0,   140,     0,     0,   141,   142,
       0,     0,     0,   143,     0,   144,     0,     0,   145,   146,
     147,   148,     0,     0,   149,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   150,     0,     0,     0,     0,
       0,   151,   152,   153,   154,     0,     0,     0,     0,     0,
       0,     0,   545,   155,   156,    48,     0,     0,     0,   110,
     111,   112,   157,   158,     0,   159,     0,     0,   160,   161,
     113,     0,   162,   163,   114,   115,   116,     0,     0,   117,
       0,     0,   118,     0,   119,   120,     0,     0,     0,   164,
       0,     0,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,     0,     0,     0,     0,     0,
       0,   121,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   122,   123,     0,     0,     0,   124,   125,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   126,   127,   128,   129,     0,     0,     0,     0,   130,
       0,     0,     0,   131,     0,     0,   132,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   133,     0,     0,
       0,   134,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   135,   136,   137,     0,
       0,     0,     0,   138,   139,     0,   140,     0,     0,   141,
     142,     0,     0,     0,   143,     0,   144,     0,     0,   145,
     146,   147,   148,     0,     0,   149,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   150,     0,     0,     0,
       0,     0,   151,   152,   153,   154,     0,     0,     0,     0,
       0,     0,     0,     0,   155,   156,    48,     0,     0,     0,
     110,   111,   112,   157,   158,     0,   159,     0,     0,   160,
     161,   113,     0,   162,   163,   114,   115,   116,     0,     0,
     117,     0,     0,   118,     0,   119,   120,     0,     0,     0,
     164,     0,     0,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,     0,     0,     0,     0,
       0,     0,   121,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,   123,     0,     0,     0,   124,
     125,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   126,   127,   128,   129,     0,     0,     0,     0,
     130,     0,     0,     0,   131,     0,     0,   132,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   133,     0,
       0,     0,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   135,   136,   137,
       0,     0,     0,     0,   138,   139,     0,   140,     0,     0,
     141,   142,     0,     0,     0,   143,     0,   144,     0,     0,
     145,   146,   147,   148,     0,     0,   149,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   150,     0,     0,
       0,     0,     0,   151,   152,   153,   154,     0,     0,     0,
       0,     0,     0,     0,     0,   155,   156,    48,     0,     0,
       0,   110,   111,   112,   157,   158,     0,   159,     0,     0,
     160,   161,   113,     0,   162,   163,   114,   115,   116,     0,
       0,   117,     0,     0,   118,     0,   119,   120,     0,     0,
       0,   164,   334,     0,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,     0,     0,     0,
       0,     0,     0,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,   123,     0,     0,     0,
     124,   125,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   126,   127,   128,   129,     0,     0,     0,
       0,   130,     0,     0,     0,   131,     0,     0,   132,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   133,
       0,     0,     0,   134,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   135,   136,
     137,     0,     0,     0,     0,   138,   139,     0,   140,     0,
       0,   141,   142,     0,     0,     0,   143,     0,   144,     0,
       0,   145,   146,   147,   148,     0,     0,   149,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   150,     0,
       0,     0,     0,     0,   151,   152,   153,   154,     0,     0,
       0,     0,     0,     0,     0,     0,   155,   156,    48,     0,
       0,     0,   110,   111,   112,   157,   158,     0,   159,     0,
       0,   160,   161,   113,     0,   162,   163,   114,   115,   116,
       0,     0,   117,     0,     0,   118,     0,   119,   120,     0,
       0,     0,   164,   345,     0,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,     0,     0,
       0,     0,     0,     0,   121,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,   123,     0,     0,
       0,   124,   125,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   126,   127,   128,   129,     0,     0,
       0,     0,   130,     0,     0,     0,   131,     0,     0,   132,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     133,     0,     0,     0,   134,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   135,
     136,   137,     0,     0,     0,     0,   138,   139,     0,   140,
       0,     0,   141,   142,     0,     0,     0,   143,     0,   144,
       0,     0,   145,   146,   147,   148,     0,     0,   149,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   150,
       0,     0,     0,     0,     0,   151,   152,   153,   154,     0,
       0,     0,     0,     0,     0,     0,     0,   155,   156,    48,
       0,     0,     0,   110,   111,   112,   157,   158,     0,   159,
       0,     0,   160,   161,   113,     0,   162,   163,   114,   115,
     116,     0,     0,   117,     0,     0,   118,     0,   119,   120,
       0,     0,     0,   164,   348,     0,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,     0,
       0,     0,     0,     0,     0,   121,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   122,   123,     0,
       0,     0,   124,   125,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   126,   127,   128,   129,     0,
       0,     0,     0,   130,     0,     0,     0,   131,     0,     0,
     132,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   133,     0,   339,     0,   134,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     135,   136,   137,     0,     0,     0,     0,   138,   139,     0,
     140,     0,     0,   141,   142,     0,     0,     0,   143,     0,
     144,     0,     0,   145,   146,   147,   148,     0,     0,   149,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     150,     0,     0,     0,     0,   340,   151,   152,   153,   154,
       0,     0,     0,     0,     0,     0,     0,     0,   155,   156,
      48,     0,     0,     0,   110,   111,   112,   157,   158,     0,
     159,     0,     0,   160,   161,   113,     0,   162,   163,   114,
     115,   116,     0,     0,   117,     0,     0,   118,     0,   119,
     120,     0,     0,     0,   164,     0,     0,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
       0,     0,     0,     0,     0,     0,   121,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,   123,
       0,     0,     0,   124,   125,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   359,     0,     0,   362,     0,
       0,     0,     0,     0,   364,     0,   126,   127,   128,   129,
       0,     0,     0,     0,   130,     0,     0,     0,   131,     0,
       0,   132,     0,     0,     0,   366,   367,     0,   369,     0,
       0,     0,   133,     0,     0,     0,   134,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   135,   136,   137,     0,     0,     0,     0,   138,   139,
       0,   140,     0,     0,   141,   142,     0,     0,     0,   143,
       0,   144,     0,     0,   145,   146,   147,   148,     0,   379,
     149,     0,     0,     0,     0,     0,     0,     0,   380,   381,
       0,   150,     0,     0,     0,     0,     0,   151,   152,   153,
     154,     0,     0,     0,     0,     0,     0,     0,     0,   155,
     156,    48,     0,     0,     0,   110,   111,   112,   157,   158,
       0,   159,     0,     0,   160,   161,   113,     0,   162,   163,
     114,   115,   384,     0,   385,     0,     0,     0,     0,     0,
     364,   120,     0,     0,     0,   164,     0,     0,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,   366,   367,     0,   369,     0,     0,   386,   387,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   122,
     123,     0,     0,     0,   124,   125,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   388,     0,     0,     0,     0,   126,   127,   128,
     129,     0,     0,     0,     0,   379,     0,     0,     0,     0,
       0,     0,     0,     0,   380,   381,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   134,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   135,   136,   137,     0,     0,     0,     0,   138,
     139,     0,     0,     0,     0,   141,   142,     0,   384,     0,
     385,     0,   144,     0,     0,     0,     0,     0,     0,     0,
       0,   149,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   150,     0,     0,     0,     0,     0,   151,   152,
     153,   154,     0,   386,   387,     0,     0,     0,     0,     0,
     155,   156,    48,     0,     0,     0,    49,    50,    51,   157,
     158,     0,   159,     0,     0,   160,   161,     0,     0,   162,
     163,     0,     0,    52,     0,     0,     0,     0,   388,    53,
       0,    54,    55,     0,     0,     0,   164,     0,     0,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,     0,     0,     0,   352,   353,   354,    69,   355,
     356,     0,   357,     0,   358,     0,     0,     0,     0,   359,
     360,   361,   362,     0,   363,     0,    70,     0,   364,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   365,   366,
     367,   368,   369,     0,     0,   370,   371,   372,   373,   374,
     375,   376,   377,     0,     0,   654,     0,     0,   378,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    71,     0,
      48,     0,     0,     0,     0,     0,   112,     0,     0,     0,
       0,     0,     0,   655,     0,    72,     0,     0,     0,     0,
       0,     0,     0,   379,     0,     0,     0,    73,     0,     0,
     120,     0,   380,   381,     0,     0,     0,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
       0,     0,     0,    74,     0,     0,     0,     0,     0,    75,
       0,     0,     0,     0,     0,   382,     0,     0,     0,   123,
       0,    76,    77,     0,   125,   383,   384,     0,   385,     0,
      78,    79,    80,    81,     0,     0,    82,    83,     0,     0,
      84,    85,     0,     0,     0,     0,     0,   127,     0,   129,
       0,     0,     0,     0,     0,     0,     0,    86,     0,     0,
       0,   386,   387,   352,   353,   354,     0,   355,   356,     0,
     357,     0,   358,     0,     0,     0,   134,   359,   360,   361,
     362,     0,   363,     0,     0,     0,   364,     0,     0,     0,
       0,     0,     0,   137,     0,     0,   388,     0,   138,   139,
       0,     0,     0,     0,     0,   142,   365,   366,   367,   368,
     369,     0,     0,   370,   371,   372,   373,   374,   375,   376,
     377,     0,     0,     0,     0,     0,   378,     0,     0,   352,
     353,   354,     0,   355,   356,     0,   357,     0,   358,     0,
       0,     0,     0,   359,   360,   361,   362,     0,   363,   155,
     156,     0,   364,     0,     0,     0,     0,     0,   157,     0,
       0,   379,     0,     0,   160,   161,     0,     0,     0,     0,
     380,   381,   365,   366,   367,   368,   369,     0,     0,   370,
     371,   372,   373,   374,   375,   376,   377,     0,     0,     0,
       0,     0,   378,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   694,   382,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   383,   384,     0,   385,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   379,     0,     0,
       0,     0,     0,     0,     0,     0,   380,   381,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   386,
     387,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   700,   382,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   383,
     384,     0,   385,     0,   388,   352,   353,   354,     0,   355,
     356,     0,   357,     0,   358,     0,     0,     0,     0,   359,
     360,   361,   362,     0,   363,     0,     0,     0,   364,     0,
       0,     0,     0,     0,     0,   386,   387,   701,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   365,   366,
     367,   368,   369,     0,     0,   370,   371,   372,   373,   374,
     375,   376,   377,     0,     0,     0,     0,     0,   378,     0,
     388,   352,   353,   354,     0,   355,   356,     0,   357,     0,
     358,     0,     0,     0,     0,   359,   360,   361,   362,     0,
     363,     0,     0,     0,   364,     0,     0,     0,   756,     0,
       0,     0,   548,   379,     0,     0,     0,   549,     0,     0,
       0,     0,   380,   381,   365,   366,   367,   368,   369,     0,
       0,   370,   371,   372,   373,   374,   375,   376,   377,     0,
     550,     0,   300,     0,   378,     0,   551,     0,     0,     0,
       0,     0,     0,     0,     0,   382,     0,     0,     0,     0,
     552,   553,   554,   555,     0,   383,   384,     0,   385,   556,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   379,
       0,     0,     0,     0,     0,     0,   557,     0,   380,   381,
       0,   558,   301,     0,     0,     0,     0,   359,   559,     0,
     362,   386,   387,   352,   353,   354,   364,   355,   356,     0,
     357,     0,   358,     0,     0,     0,     0,   359,   360,   361,
     362,   382,   363,     0,     0,     0,   364,   366,   367,     0,
     369,   383,   384,     0,   385,     0,   388,     0,   560,   561,
       0,   562,     0,     0,     0,     0,   365,   366,   367,   368,
     369,   563,     0,   370,   371,   372,   373,   374,   375,   376,
     377,     0,     0,     0,     0,     0,   378,   386,   387,   352,
     353,   354,     0,   355,   356,     0,   357,     0,   358,     0,
       0,   379,     0,   359,   360,   361,   362,     0,   363,     0,
     380,   381,   364,     0,     0,     0,     0,     0,     0,     0,
       0,   379,   388,     0,     0,     0,     0,     0,     0,     0,
     380,   381,   365,   366,   367,   368,   369,     0,     0,     0,
     371,   372,   373,   374,   375,   376,   377,     0,     0,     0,
       0,     0,   378,   383,   384,     0,   385,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   383,   384,     0,   385,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   379,     0,   386,
     387,     0,     0,     0,     0,     0,   380,   381,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   386,
     387,   352,   353,   354,     0,   355,   356,     0,   357,     0,
     358,     0,     0,     0,   388,   359,   360,   361,   362,     0,
     363,     0,     0,     0,   364,     0,     0,     0,     0,   383,
     384,     0,   385,     0,   388,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   366,   367,   368,   369,     0,
       0,     0,   371,   372,   373,   374,   375,   376,   377,     0,
       0,     0,     0,     0,   378,   386,   387,    -1,   353,   354,
       0,   355,   356,     0,   357,     0,   358,     0,     0,     0,
       0,   359,    -1,   361,   362,     0,   363,     0,    -1,    -1,
     364,    -1,    -1,     0,    -1,     0,    -1,     0,     0,   379,
     388,   359,     0,    -1,   362,     0,    -1,     0,   380,   381,
     364,   366,   367,   368,   369,     0,     0,     0,   371,   372,
     373,   374,   375,   376,   377,     0,     0,     0,     0,     0,
     378,   366,   367,    -1,   369,     0,     0,     0,    -1,    -1,
      -1,    -1,    -1,    -1,   377,     0,     0,     0,     0,     0,
     378,   383,   384,     0,   385,     0,     0,     0,     0,   120,
       0,     0,     0,     0,     0,   379,     0,    48,     0,     0,
       0,     0,    50,    51,   380,   381,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   379,     0,   386,   387,     0,
       0,     0,     0,     0,   380,   381,     0,    55,   123,     0,
       0,     0,     0,   125,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,   383,   384,     0,
     385,     0,   388,   232,     0,     0,   127,     0,   129,     0,
       0,     0,     0,     0,     0,     0,     0,   383,   384,     0,
     385,    70,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   386,   387,   134,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   548,     0,     0,     0,
       0,   549,   137,   386,   387,     0,     0,   138,   139,     0,
       0,     0,     0,     0,   142,     0,     0,     0,   388,     0,
       0,     0,     0,    71,   550,     0,   300,     0,     0,     0,
     551,     0,     0,     0,     0,     0,     0,     0,   388,     0,
      72,     0,     0,     0,   552,   553,   554,   555,     0,     0,
       0,     0,    73,   556,     0,     0,     0,     0,   155,   156,
       0,     0,     0,     0,     0,     0,     0,   157,     0,     0,
     557,     0,     0,   400,   161,   558,   301,     0,     0,     0,
       0,     0,   559,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,    77,     0,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,     0,
       0,    82,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   560,   561,     0,   562,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   563
};

static const yytype_int16 yycheck[] =
{
     116,   117,   127,   137,   127,   121,   124,   153,   126,   129,
     127,     1,   127,   183,    51,   122,    96,   104,    53,    54,
       8,   128,    36,   141,    97,   132,    54,   103,   175,   136,
      34,    59,   380,   151,   152,   153,   143,     1,   154,     1,
     158,   118,   119,     1,     5,     1,   164,   112,   188,   189,
     218,    55,    34,   180,    58,   128,    93,    46,   186,   187,
       0,   126,   214,   215,   198,   199,   638,   174,    75,    54,
     222,    20,   118,    23,    59,   243,    61,   153,    60,   212,
      30,   208,    32,    33,   211,   218,    36,    14,   228,    96,
      40,    41,    37,    38,    39,   791,     9,    10,   778,   671,
     228,   797,   782,    52,    53,    54,   228,   172,    20,   228,
     243,    37,    38,    39,   228,   228,   162,    31,   240,    33,
      69,   105,   106,   242,   228,   181,    75,   240,   242,    19,
      79,    21,    22,    23,    24,   237,    54,    86,   242,   225,
      52,    59,   227,    61,   278,    37,    38,    39,   720,   229,
     111,   197,   198,    14,   104,   105,   227,    69,    11,    12,
      13,   149,   215,    16,   228,    18,    37,    38,    39,   222,
     127,    32,    25,    26,    86,    28,   240,    11,    12,    13,
     300,    34,    16,    34,    18,   214,   215,   274,   275,   276,
     176,    25,    26,   222,    28,   180,   218,    17,   770,   333,
      34,    54,    55,    11,    57,    58,   340,   228,    61,    60,
      37,    38,    39,   785,    37,    38,    39,   240,   241,   240,
      54,    55,    11,    57,    58,   215,   240,    61,   232,   266,
     212,   401,   222,   222,   269,   270,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   228,   381,   382,   383,   218,   385,
     220,   227,   388,   224,   408,   409,   240,   411,   240,   476,
     477,   239,   271,   390,    11,   212,    37,    38,    39,   405,
     638,   218,   219,   183,   184,   240,   403,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   240,   173,   262,   240,   264,   265,   394,   395,   396,
     269,   270,   240,   671,   274,   275,   276,   217,    34,   576,
     577,    37,    38,    39,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   240,   241,
     262,   212,   549,   243,    60,   395,   396,   218,   219,   556,
     237,   212,   559,    17,   398,   399,   482,   501,   109,   240,
     486,   458,   720,   460,   240,   195,   492,   118,   119,   232,
     228,   228,   243,   240,    37,    38,    39,   240,   504,   240,
      11,     1,   240,   240,   214,   215,   224,     1,   232,     3,
     210,   228,   222,   240,   238,   228,    60,    37,    38,    39,
      37,    38,    39,   240,    37,    38,    39,   240,   224,   239,
     144,   162,   770,   557,   244,   550,   224,   550,   548,    54,
      40,   224,   156,   550,    59,   550,    61,   785,    37,    38,
      39,   200,    37,    38,    39,   185,   200,    29,   240,    31,
     647,    33,   649,   212,   651,   652,   197,   198,   212,   212,
     576,   577,   397,   398,   399,   218,   219,   601,   602,   212,
     604,   605,   422,   423,   214,   215,   622,   215,   218,   428,
     218,   212,   222,   432,   222,   224,   397,   398,   399,   240,
     636,   688,   689,   240,   215,   215,   215,   218,   218,   218,
     240,   222,   222,   222,   622,    31,   212,    33,   458,   643,
     460,   627,     7,   620,   243,   631,   428,   633,   636,     1,
     432,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   240,   669,   670,   214,   215,   216,
     243,   195,   658,   243,   221,   222,   662,   264,   265,    12,
      13,   180,   228,    16,   751,    18,   663,   128,    40,   128,
     214,   215,    25,   173,   232,    28,   243,   764,   222,    86,
      87,    34,   218,   177,   178,   179,    93,    29,   694,    31,
     240,    33,   240,   180,   700,   239,   206,   240,   212,   120,
     244,   242,    55,   240,    57,    58,   120,   242,   732,   116,
     117,   240,   228,     5,   242,   240,   228,   240,   218,   219,
     240,   727,   240,   240,   120,   240,   228,   240,   224,    11,
      12,    13,   240,   242,    16,   242,    18,   242,   238,   240,
     213,   765,   237,    25,    26,   242,    28,   128,   227,   746,
     756,   240,    34,   227,   760,   240,   762,   227,   227,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,    54,    55,    59,    57,    58,   227,   243,    61,
      80,    81,    82,    83,    84,    85,   794,   212,    88,    89,
      90,    91,    92,     8,    94,    95,   243,   160,     8,   823,
     243,   173,    75,   243,   242,   149,   814,   815,   212,     1,
     242,     8,     4,    11,   820,    11,     8,     9,    10,    69,
     128,     9,   240,   240,   224,   831,   228,    19,    11,   837,
     838,    23,    24,    25,   242,   228,    28,    11,    70,    31,
     680,    33,    34,    11,    11,   242,   218,   219,   242,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   242,   240,   242,   224,   238,   242,    60,   149,
      76,   212,   238,   227,    69,   227,   180,    11,    11,   232,
      72,    73,    11,    12,    13,    77,    78,    16,    11,    18,
      69,   224,    69,   243,   242,   149,    25,    26,   180,    28,
     228,   182,   149,   242,    14,    34,   683,   679,   100,   101,
     102,   103,   415,   719,   550,   557,   108,   170,   723,   658,
     112,   632,   180,   115,   639,    54,    55,   635,    57,    58,
     627,   504,    61,   778,   126,   837,   780,   838,   130,   794,
      10,   102,    11,    12,    13,   227,    92,    16,    79,    18,
     232,    72,    -1,   145,   146,   147,    25,    26,    -1,    28,
     152,   153,    -1,   155,    -1,    34,   158,   159,    -1,    -1,
      -1,   163,    -1,   165,    -1,    -1,   168,   169,   170,   171,
      -1,    -1,   174,    -1,    -1,    54,    55,    -1,    57,    58,
      -1,    -1,    -1,   185,    -1,    -1,    -1,    -1,    -1,   191,
     192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,   203,   204,     4,    -1,    -1,    -1,     8,     9,    10,
     212,   213,    -1,   215,    -1,    -1,   218,   219,    19,    -1,
     222,   223,    23,    24,    25,    -1,    -1,    28,    -1,    -1,
      31,    -1,    33,    34,    -1,    -1,    -1,   239,    -1,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   109,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,   118,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    11,    12,    13,    77,    78,    16,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      28,    -1,    -1,   232,    -1,    -1,    34,    -1,    -1,   100,
     101,   102,   103,    -1,    -1,    -1,   162,   108,   164,    -1,
      -1,   112,    -1,    -1,   115,    -1,    -1,    55,    -1,    57,
      58,    -1,    -1,    -1,    -1,   126,    -1,    -1,    -1,   130,
      -1,    -1,    -1,    11,    12,    13,    -1,    -1,    16,    -1,
      18,   197,   198,    -1,   145,   146,   147,    25,    26,    -1,
      28,   152,   153,   232,   155,    -1,    34,   158,   159,    -1,
      -1,    -1,   163,    -1,   165,    -1,    -1,   168,   169,   170,
     171,    -1,    34,   174,    -1,    -1,   232,    55,    -1,    57,
      58,    -1,    -1,    -1,   185,    -1,    -1,    -1,    -1,    -1,
     191,   192,   193,   194,    -1,    -1,    -1,    -1,    60,    -1,
      -1,     1,   203,   204,     4,    -1,    -1,    -1,     8,     9,
      10,   212,   213,    -1,   215,    -1,    78,   218,   219,    19,
      -1,   222,   223,    23,    24,    25,    -1,    -1,    28,    -1,
      -1,    31,    -1,    33,    34,    -1,    -1,    -1,   239,    -1,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,    -1,
      -1,    -1,    72,    73,    -1,    -1,    -1,    77,    78,    -1,
      -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   232,    -1,    -1,   159,    -1,    -1,
     100,   101,   102,   103,    -1,    -1,    -1,    -1,   108,    -1,
      -1,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,    -1,
     130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   203,   204,    -1,    -1,   145,   146,   147,    -1,    -1,
     212,    -1,   152,   153,   232,   155,   218,   219,   158,   159,
      -1,    -1,    -1,   163,    -1,   165,    -1,    -1,   168,   169,
     170,   171,    -1,    -1,   174,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   185,    -1,    -1,    -1,    -1,
      -1,   191,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,   203,   204,     4,    -1,    -1,    -1,     8,
       9,    10,   212,   213,    -1,   215,    -1,    -1,   218,   219,
      19,    -1,   222,   223,    23,    24,    25,    -1,    -1,    28,
      -1,    -1,    31,    -1,    33,    34,    -1,    -1,    -1,   239,
      -1,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    77,    78,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,   101,   102,   103,    -1,    -1,    -1,    -1,   108,
      -1,    -1,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,
      -1,    -1,   173,    -1,    -1,    -1,    -1,   126,    -1,    -1,
      -1,   130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,
      -1,    -1,    -1,   152,   153,    -1,   155,    -1,    -1,   158,
     159,    -1,    -1,    -1,   163,    -1,   165,   218,   219,   168,
     169,   170,   171,    -1,    -1,   174,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,    -1,    -1,
      -1,    -1,   191,   192,   193,   194,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,   203,   204,     4,    -1,    -1,    -1,
       8,     9,    10,   212,   213,    -1,   215,    -1,    -1,   218,
     219,    19,    -1,   222,   223,    23,    24,    25,    -1,    -1,
      28,    -1,    -1,    31,    -1,    33,    34,    -1,    -1,    -1,
     239,    -1,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    77,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,   101,   102,   103,    -1,    -1,    -1,    -1,
     108,    -1,    -1,    -1,   112,    -1,    -1,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,    -1,
      -1,    -1,   130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,   152,   153,    -1,   155,    -1,    -1,
     158,   159,    -1,    -1,    -1,   163,    -1,   165,    -1,    -1,
     168,   169,   170,   171,    -1,    -1,   174,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,    -1,
      -1,    -1,    -1,   191,   192,   193,   194,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,   203,   204,     4,    -1,    -1,
      -1,     8,     9,    10,   212,   213,    -1,   215,    -1,    -1,
     218,   219,    19,    -1,   222,   223,    23,    24,    25,    -1,
      -1,    28,    -1,    -1,    31,    -1,    33,    34,    -1,    -1,
      -1,   239,    -1,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,
      77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,   101,   102,   103,    -1,    -1,    -1,
      -1,   108,    -1,    -1,    -1,   112,    -1,    -1,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,
      -1,    -1,    -1,   130,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,    -1,   152,   153,    -1,   155,    -1,
      -1,   158,   159,    -1,    -1,    -1,   163,    -1,   165,    -1,
      -1,   168,   169,   170,   171,    -1,    -1,   174,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,
      -1,    -1,    -1,    -1,   191,   192,   193,   194,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,   203,   204,     4,    -1,
      -1,    -1,     8,     9,    10,   212,   213,    -1,   215,    -1,
      -1,   218,   219,    19,    -1,   222,   223,    23,    24,    25,
      -1,    -1,    28,    -1,    -1,    31,    -1,    33,    34,    -1,
      -1,    -1,   239,    -1,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,
      -1,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,   101,   102,   103,    -1,    -1,
      -1,    -1,   108,    -1,    -1,    -1,   112,    -1,    -1,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     126,    -1,    -1,    -1,   130,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,   152,   153,    -1,   155,
      -1,    -1,   158,   159,    -1,    -1,    -1,   163,    -1,   165,
      -1,    -1,   168,   169,   170,   171,    -1,    -1,   174,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   185,
      -1,    -1,    -1,    -1,    -1,   191,   192,   193,   194,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,   203,   204,     4,
      -1,    -1,    -1,     8,     9,    10,   212,   213,    -1,   215,
      -1,    -1,   218,   219,    19,    -1,   222,   223,    23,    24,
      25,    -1,    -1,    28,    -1,    -1,    31,    -1,    33,    34,
      -1,    -1,    -1,   239,    -1,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,
      -1,    -1,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,   101,   102,   103,    -1,
      -1,    -1,    -1,   108,    -1,    -1,    -1,   112,    -1,    -1,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   126,    -1,    -1,    -1,   130,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,   152,   153,    -1,
     155,    -1,    -1,   158,   159,    -1,    -1,    -1,   163,    -1,
     165,    -1,    -1,   168,   169,   170,   171,    -1,    -1,   174,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     185,    -1,    -1,    -1,    -1,    -1,   191,   192,   193,   194,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,   203,   204,
       4,    -1,    -1,    -1,     8,     9,    10,   212,   213,    -1,
     215,    -1,    -1,   218,   219,    19,    -1,   222,   223,    23,
      24,    25,    -1,    -1,    28,    -1,    -1,    31,    -1,    33,
      34,    -1,    -1,    -1,   239,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      -1,    -1,    -1,    77,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,   101,   102,   103,
      -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,   112,    -1,
      -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   126,    -1,    -1,    -1,   130,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,   152,   153,
      -1,   155,    -1,    -1,   158,   159,    -1,    -1,    -1,   163,
      -1,   165,    -1,    -1,   168,   169,   170,   171,    -1,    -1,
     174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   185,    -1,    -1,    -1,    -1,    -1,   191,   192,   193,
     194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,   203,
     204,     4,    -1,    -1,    -1,     8,     9,    10,   212,   213,
      -1,   215,    -1,    -1,   218,   219,    19,    -1,   222,   223,
      23,    24,    25,    -1,    -1,    28,    -1,    -1,    31,    -1,
      33,    34,    -1,    -1,    -1,   239,    -1,    -1,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    -1,    -1,    -1,    77,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,   101,   102,
     103,    -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,   112,
      -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   126,    -1,    -1,    -1,   130,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,   152,
     153,    -1,   155,    -1,    -1,   158,   159,    -1,    -1,    -1,
     163,    -1,   165,    -1,    -1,   168,   169,   170,   171,    -1,
      -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   185,    -1,    -1,    -1,    -1,    -1,   191,   192,
     193,   194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
     203,   204,     4,    -1,    -1,    -1,     8,     9,    10,   212,
     213,    -1,   215,    -1,    -1,   218,   219,    19,    -1,   222,
     223,    23,    24,    25,    -1,    -1,    28,    -1,    -1,    31,
      -1,    33,    34,    -1,    -1,    -1,   239,    -1,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    -1,    -1,    -1,    77,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,   101,
     102,   103,    -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,
     112,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   126,    -1,    -1,    -1,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,
     152,   153,    -1,   155,    -1,    -1,   158,   159,    -1,    -1,
      -1,   163,    -1,   165,    -1,    -1,   168,   169,   170,   171,
      -1,    -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   185,    -1,    -1,    -1,    -1,    -1,   191,
     192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,   203,   204,     4,    -1,    -1,    -1,     8,     9,    10,
     212,   213,    -1,   215,    -1,    -1,   218,   219,    19,    -1,
     222,   223,    23,    24,    25,    -1,    -1,    28,    -1,    -1,
      31,    -1,    33,    34,    -1,    -1,    -1,   239,    -1,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    -1,    -1,    -1,    77,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
     101,   102,   103,    -1,    -1,    -1,    -1,   108,    -1,    -1,
      -1,   112,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,    -1,   130,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,    -1,
      -1,   152,   153,    -1,   155,    -1,    -1,   158,   159,    -1,
      -1,    -1,   163,    -1,   165,    -1,    -1,   168,   169,   170,
     171,    -1,    -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   185,    -1,    -1,    -1,    -1,    -1,
     191,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,   203,   204,     4,    -1,    -1,    -1,     8,     9,
      10,   212,   213,    -1,   215,    -1,    -1,   218,   219,    19,
      -1,   222,   223,    23,    24,    25,    -1,    -1,    28,    -1,
      -1,    31,    -1,    33,    34,    -1,    -1,    -1,   239,    -1,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    -1,    77,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,   101,   102,   103,    -1,    -1,    -1,    -1,   108,    -1,
      -1,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,    -1,
     130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,    -1,
      -1,    -1,   152,   153,    -1,   155,    -1,    -1,   158,   159,
      -1,    -1,    -1,   163,    -1,   165,    -1,    -1,   168,   169,
     170,   171,    -1,    -1,   174,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   185,    -1,    -1,    -1,    -1,
      -1,   191,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,   203,   204,     4,    -1,    -1,    -1,     8,
       9,    10,   212,   213,    -1,   215,    -1,    -1,   218,   219,
      19,    -1,   222,   223,    23,    24,    25,    -1,    -1,    28,
      -1,    -1,    31,    -1,    33,    34,    -1,    -1,    -1,   239,
      -1,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    77,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,   101,   102,   103,    -1,    -1,    -1,    -1,   108,
      -1,    -1,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,
      -1,   130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,    -1,
      -1,    -1,    -1,   152,   153,    -1,   155,    -1,    -1,   158,
     159,    -1,    -1,    -1,   163,    -1,   165,    -1,    -1,   168,
     169,   170,   171,    -1,    -1,   174,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,    -1,    -1,
      -1,    -1,   191,   192,   193,   194,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,   204,     4,    -1,    -1,    -1,
       8,     9,    10,   212,   213,    -1,   215,    -1,    -1,   218,
     219,    19,    -1,   222,   223,    23,    24,    25,    -1,    -1,
      28,    -1,    -1,    31,    -1,    33,    34,    -1,    -1,    -1,
     239,    -1,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    77,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,   101,   102,   103,    -1,    -1,    -1,    -1,
     108,    -1,    -1,    -1,   112,    -1,    -1,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,    -1,
      -1,    -1,   130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,   147,
      -1,    -1,    -1,    -1,   152,   153,    -1,   155,    -1,    -1,
     158,   159,    -1,    -1,    -1,   163,    -1,   165,    -1,    -1,
     168,   169,   170,   171,    -1,    -1,   174,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,    -1,
      -1,    -1,    -1,   191,   192,   193,   194,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   203,   204,     4,    -1,    -1,
      -1,     8,     9,    10,   212,   213,    -1,   215,    -1,    -1,
     218,   219,    19,    -1,   222,   223,    23,    24,    25,    -1,
      -1,    28,    -1,    -1,    31,    -1,    33,    34,    -1,    -1,
      -1,   239,   240,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,
      77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,   101,   102,   103,    -1,    -1,    -1,
      -1,   108,    -1,    -1,    -1,   112,    -1,    -1,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,
      -1,    -1,    -1,   130,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,
     147,    -1,    -1,    -1,    -1,   152,   153,    -1,   155,    -1,
      -1,   158,   159,    -1,    -1,    -1,   163,    -1,   165,    -1,
      -1,   168,   169,   170,   171,    -1,    -1,   174,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,
      -1,    -1,    -1,    -1,   191,   192,   193,   194,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   203,   204,     4,    -1,
      -1,    -1,     8,     9,    10,   212,   213,    -1,   215,    -1,
      -1,   218,   219,    19,    -1,   222,   223,    23,    24,    25,
      -1,    -1,    28,    -1,    -1,    31,    -1,    33,    34,    -1,
      -1,    -1,   239,   240,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,
      -1,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,   101,   102,   103,    -1,    -1,
      -1,    -1,   108,    -1,    -1,    -1,   112,    -1,    -1,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     126,    -1,    -1,    -1,   130,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,
     146,   147,    -1,    -1,    -1,    -1,   152,   153,    -1,   155,
      -1,    -1,   158,   159,    -1,    -1,    -1,   163,    -1,   165,
      -1,    -1,   168,   169,   170,   171,    -1,    -1,   174,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   185,
      -1,    -1,    -1,    -1,    -1,   191,   192,   193,   194,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,     4,
      -1,    -1,    -1,     8,     9,    10,   212,   213,    -1,   215,
      -1,    -1,   218,   219,    19,    -1,   222,   223,    23,    24,
      25,    -1,    -1,    28,    -1,    -1,    31,    -1,    33,    34,
      -1,    -1,    -1,   239,   240,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,
      -1,    -1,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,   101,   102,   103,    -1,
      -1,    -1,    -1,   108,    -1,    -1,    -1,   112,    -1,    -1,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   126,    -1,   128,    -1,   130,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     145,   146,   147,    -1,    -1,    -1,    -1,   152,   153,    -1,
     155,    -1,    -1,   158,   159,    -1,    -1,    -1,   163,    -1,
     165,    -1,    -1,   168,   169,   170,   171,    -1,    -1,   174,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     185,    -1,    -1,    -1,    -1,   190,   191,   192,   193,   194,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,   204,
       4,    -1,    -1,    -1,     8,     9,    10,   212,   213,    -1,
     215,    -1,    -1,   218,   219,    19,    -1,   222,   223,    23,
      24,    25,    -1,    -1,    28,    -1,    -1,    31,    -1,    33,
      34,    -1,    -1,    -1,   239,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      -1,    -1,    -1,    77,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    34,    -1,   100,   101,   102,   103,
      -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,   112,    -1,
      -1,   115,    -1,    -1,    -1,    55,    56,    -1,    58,    -1,
      -1,    -1,   126,    -1,    -1,    -1,   130,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   145,   146,   147,    -1,    -1,    -1,    -1,   152,   153,
      -1,   155,    -1,    -1,   158,   159,    -1,    -1,    -1,   163,
      -1,   165,    -1,    -1,   168,   169,   170,   171,    -1,   109,
     174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,   119,
      -1,   185,    -1,    -1,    -1,    -1,    -1,   191,   192,   193,
     194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,
     204,     4,    -1,    -1,    -1,     8,     9,    10,   212,   213,
      -1,   215,    -1,    -1,   218,   219,    19,    -1,   222,   223,
      23,    24,   162,    -1,   164,    -1,    -1,    -1,    -1,    -1,
      34,    34,    -1,    -1,    -1,   239,    -1,    -1,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    55,    56,    -1,    58,    -1,    -1,   197,   198,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    -1,    -1,    -1,    77,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   232,    -1,    -1,    -1,    -1,   100,   101,   102,
     103,    -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   118,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   145,   146,   147,    -1,    -1,    -1,    -1,   152,
     153,    -1,    -1,    -1,    -1,   158,   159,    -1,   162,    -1,
     164,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   185,    -1,    -1,    -1,    -1,    -1,   191,   192,
     193,   194,    -1,   197,   198,    -1,    -1,    -1,    -1,    -1,
     203,   204,     4,    -1,    -1,    -1,     8,     9,    10,   212,
     213,    -1,   215,    -1,    -1,   218,   219,    -1,    -1,   222,
     223,    -1,    -1,    25,    -1,    -1,    -1,    -1,   232,    31,
      -1,    33,    34,    -1,    -1,    -1,   239,    -1,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    11,    12,    13,    60,    15,
      16,    -1,    18,    -1,    20,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    -1,    30,    -1,    78,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,
      56,    57,    58,    -1,    -1,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    -1,    71,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,    -1,
       4,    -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    99,    -1,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    -1,    -1,    -1,   159,    -1,    -1,
      34,    -1,   118,   119,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    -1,   185,    -1,    -1,    -1,    -1,    -1,   191,
      -1,    -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,    73,
      -1,   203,   204,    -1,    78,   161,   162,    -1,   164,    -1,
     212,   213,   214,   215,    -1,    -1,   218,   219,    -1,    -1,
     222,   223,    -1,    -1,    -1,    -1,    -1,   101,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   239,    -1,    -1,
      -1,   197,   198,    11,    12,    13,    -1,    15,    16,    -1,
      18,    -1,    20,    -1,    -1,    -1,   130,    25,    26,    27,
      28,    -1,    30,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,   147,    -1,    -1,   232,    -1,   152,   153,
      -1,    -1,    -1,    -1,    -1,   159,    54,    55,    56,    57,
      58,    -1,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    11,
      12,    13,    -1,    15,    16,    -1,    18,    -1,    20,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    -1,    30,   203,
     204,    -1,    34,    -1,    -1,    -1,    -1,    -1,   212,    -1,
      -1,   109,    -1,    -1,   218,   219,    -1,    -1,    -1,    -1,
     118,   119,    54,    55,    56,    57,    58,    -1,    -1,    61,
      62,    63,    64,    65,    66,    67,    68,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   161,   162,    -1,   164,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   118,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,
     198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,   151,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,
     162,    -1,   164,    -1,   232,    11,    12,    13,    -1,    15,
      16,    -1,    18,    -1,    20,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    -1,    30,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,   197,   198,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,
      56,    57,    58,    -1,    -1,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    -1,    -1,    -1,    -1,    74,    -1,
     232,    11,    12,    13,    -1,    15,    16,    -1,    18,    -1,
      20,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    -1,
      30,    -1,    -1,    -1,    34,    -1,    -1,    -1,   104,    -1,
      -1,    -1,    73,   109,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,   118,   119,    54,    55,    56,    57,    58,    -1,
      -1,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
     101,    -1,   103,    -1,    74,    -1,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,
     121,   122,   123,   124,    -1,   161,   162,    -1,   164,   130,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
      -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,   118,   119,
      -1,   152,   153,    -1,    -1,    -1,    -1,    25,   159,    -1,
      28,   197,   198,    11,    12,    13,    34,    15,    16,    -1,
      18,    -1,    20,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,   151,    30,    -1,    -1,    -1,    34,    55,    56,    -1,
      58,   161,   162,    -1,   164,    -1,   232,    -1,   199,   200,
      -1,   202,    -1,    -1,    -1,    -1,    54,    55,    56,    57,
      58,   212,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    -1,    -1,    -1,    -1,    74,   197,   198,    11,
      12,    13,    -1,    15,    16,    -1,    18,    -1,    20,    -1,
      -1,   109,    -1,    25,    26,    27,    28,    -1,    30,    -1,
     118,   119,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   109,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     118,   119,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      62,    63,    64,    65,    66,    67,    68,    -1,    -1,    -1,
      -1,    -1,    74,   161,   162,    -1,   164,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   161,   162,    -1,   164,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   197,
     198,    -1,    -1,    -1,    -1,    -1,   118,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,
     198,    11,    12,    13,    -1,    15,    16,    -1,    18,    -1,
      20,    -1,    -1,    -1,   232,    25,    26,    27,    28,    -1,
      30,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,   161,
     162,    -1,   164,    -1,   232,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,    -1,
      -1,    -1,    62,    63,    64,    65,    66,    67,    68,    -1,
      -1,    -1,    -1,    -1,    74,   197,   198,    11,    12,    13,
      -1,    15,    16,    -1,    18,    -1,    20,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    -1,    30,    -1,    12,    13,
      34,    15,    16,    -1,    18,    -1,    20,    -1,    -1,   109,
     232,    25,    -1,    27,    28,    -1,    30,    -1,   118,   119,
      34,    55,    56,    57,    58,    -1,    -1,    -1,    62,    63,
      64,    65,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,
      74,    55,    56,    57,    58,    -1,    -1,    -1,    62,    63,
      64,    65,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,
      74,   161,   162,    -1,   164,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,   109,    -1,     4,    -1,    -1,
      -1,    -1,     9,    10,   118,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,    -1,   197,   198,    -1,
      -1,    -1,    -1,    -1,   118,   119,    -1,    34,    73,    -1,
      -1,    -1,    -1,    78,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   161,   162,    -1,
     164,    -1,   232,    60,    -1,    -1,   101,    -1,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,   162,    -1,
     164,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   197,   198,   130,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,
      -1,    78,   147,   197,   198,    -1,    -1,   152,   153,    -1,
      -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,   232,    -1,
      -1,    -1,    -1,   130,   101,    -1,   103,    -1,    -1,    -1,
     107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   232,    -1,
     147,    -1,    -1,    -1,   121,   122,   123,   124,    -1,    -1,
      -1,    -1,   159,   130,    -1,    -1,    -1,    -1,   203,   204,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,    -1,
     147,    -1,    -1,   218,   219,   152,   153,    -1,    -1,    -1,
      -1,    -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   203,   204,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,
      -1,   218,   219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   199,   200,    -1,   202,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   212
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,     3,   177,   178,   179,   246,   175,   247,   248,
     249,     0,   181,   180,   208,   211,   250,   255,   237,   252,
     355,   356,   254,   355,   225,   227,   227,   127,   256,   257,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   173,   218,   219,   357,   358,     4,     8,
       9,    10,    25,    31,    33,    34,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    60,
      78,   130,   147,   159,   185,   191,   203,   204,   212,   213,
     214,   215,   218,   219,   222,   223,   239,   359,   360,   361,
     362,   363,   364,   365,   366,   371,   372,   373,   375,   376,
     377,   378,    17,   195,   239,   244,   378,   380,   176,   218,
       8,     9,    10,    19,    23,    24,    25,    28,    31,    33,
      34,    60,    72,    73,    77,    78,   100,   101,   102,   103,
     108,   112,   115,   126,   130,   145,   146,   147,   152,   153,
     155,   158,   159,   163,   165,   168,   169,   170,   171,   174,
     185,   191,   192,   193,   194,   203,   204,   212,   213,   215,
     218,   219,   222,   223,   239,   271,   274,   276,   286,   287,
     295,   296,   297,   301,   309,   310,   311,   312,   314,   315,
     319,   320,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   335,   336,   353,   364,    80,    81,    82,    83,
      84,    85,    88,    89,    90,    91,    92,    94,    95,   258,
     259,   378,   378,   378,   378,   378,   378,   379,    11,    11,
      11,     1,    40,   238,   358,   224,   237,   367,   368,   370,
     367,   359,    60,   361,   361,   359,   240,   240,   218,   240,
     377,   240,   359,   374,   374,   359,    11,    12,    13,    16,
      18,    25,    26,    28,    34,    54,    55,    57,    58,    61,
     180,   227,   232,   253,    31,    33,   365,   367,   368,    31,
      33,   357,   380,   378,    54,    59,    61,   180,    11,   224,
     337,   210,   212,   218,   219,   354,   287,   287,   312,   312,
       1,   287,   286,    34,    60,   212,   278,   353,   240,   353,
     103,   153,   273,   274,   275,   276,   277,   286,   240,   278,
     224,   224,   298,   299,   286,   224,   302,   303,   240,   286,
     218,   279,   330,   212,   212,   224,   353,   240,   286,   243,
     243,   243,     1,   239,   240,   353,   352,   353,   352,   128,
     190,   287,   332,   333,   334,   240,   353,     7,   240,   351,
     353,   180,    11,    12,    13,    15,    16,    18,    20,    25,
      26,    27,    28,    30,    34,    54,    55,    56,    57,    58,
      61,    62,    63,    64,    65,    66,    67,    68,    74,   109,
     118,   119,   151,   161,   162,   164,   197,   198,   232,   288,
     172,   296,   304,   286,    29,    31,    33,    29,    31,    33,
     218,   323,   316,   321,   316,   228,   330,   330,   128,   128,
      86,    87,    93,   116,   117,   260,   261,   265,   267,   280,
       1,   227,     9,    10,   378,   218,   378,   358,   369,   368,
     240,   240,   228,   240,   240,   240,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     180,   359,   363,   363,   367,   361,   361,     1,   238,   240,
      60,   380,   380,   380,   330,   338,   206,   242,   228,   240,
     242,   242,    37,    38,    39,   272,   278,   212,   240,   242,
     228,   240,   120,   120,   228,   240,     5,   228,   242,   240,
     240,   240,   120,   242,   240,     1,   330,   240,   242,   242,
     218,   243,   330,   242,   228,   240,   240,   287,   287,   287,
       1,   287,   287,   287,     1,   287,   287,   287,   287,   287,
     287,   287,     1,   287,   287,     1,   287,   287,   287,     1,
     287,     1,   287,     1,   287,     1,   287,     1,   287,     1,
     287,     1,   287,     1,   287,     1,   287,   287,    73,    78,
     101,   107,   121,   122,   123,   124,   130,   147,   152,   159,
     199,   200,   202,   212,   270,   271,   273,   275,   287,   287,
     289,   290,   287,   287,   287,   286,   144,   156,   305,   242,
     312,   311,   312,   311,   312,   313,   314,   315,   313,   313,
     316,   237,   317,   286,   287,   330,   330,   213,   218,   330,
     224,   128,   266,    97,   128,   262,   259,   227,   227,   227,
     227,   378,   378,   359,   359,   380,   380,   227,   212,   218,
     243,   341,   243,   212,   228,   272,   272,   243,   200,   212,
     287,   300,     8,   160,   287,     8,   243,   287,    75,   306,
     307,     1,   240,   243,   330,   242,   334,   278,   272,   277,
     272,   279,   212,   272,    71,    99,   291,     1,   228,   240,
     289,   289,   149,   318,   242,     8,   283,   284,   285,    11,
      11,    69,   269,   218,   330,   330,   128,   218,   330,   330,
       9,   238,   240,   251,   286,   342,   352,   240,   200,   212,
     332,   240,   240,   241,   150,   287,   299,   287,   303,   352,
     150,     8,   270,    96,   307,   308,   330,   242,   228,   272,
     272,   272,   272,   105,   106,   292,   290,   287,   286,   224,
      36,   240,   282,   228,   330,   330,   270,     5,   111,   268,
      11,    11,    70,   263,    11,    11,   263,   378,   256,   242,
      14,    32,   173,   212,   218,   219,   243,   339,   343,   242,
     272,   241,   272,   242,   240,   287,   104,   242,   287,   224,
     149,     8,   149,   242,   212,    76,   293,   238,   269,   270,
      69,   281,   285,   227,   227,   287,   330,   180,   348,    11,
      11,   286,    11,   272,   287,    69,   287,   224,   287,   272,
     330,    69,   294,   270,   243,   350,   264,    21,    22,   183,
     184,   217,   335,   340,   349,   350,   214,   215,   222,   344,
     344,   242,   214,   215,   216,   221,   222,   345,   350,   270,
     149,   354,   351,   228,    14,   354,   182,   346,   353,   347,
     353,   149,   287,   242,   330,    14,   186,   187,   188,   189,
     287,   346,   347
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
      yyerror (xpp_arg, YY_("syntax error: cannot back up")); \
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
# define YYLEX yylex (&yylval, xpp_arg)
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
		  Type, Value, xpp_arg); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, xpp_t * xpp_arg)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, xpp_arg)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    xpp_t * xpp_arg;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (xpp_arg);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, xpp_t * xpp_arg)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, xpp_arg)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    xpp_t * xpp_arg;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, xpp_arg);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, xpp_t * xpp_arg)
#else
static void
yy_reduce_print (yyvsp, yyrule, xpp_arg)
    YYSTYPE *yyvsp;
    int yyrule;
    xpp_t * xpp_arg;
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
		       		       , xpp_arg);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, xpp_arg); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, xpp_t * xpp_arg)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, xpp_arg)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    xpp_t * xpp_arg;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (xpp_arg);

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
int yyparse (xpp_t * xpp_arg);
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
yyparse (xpp_t * xpp_arg)
#else
int
yyparse (xpp_arg)
    xpp_t * xpp_arg;
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
#line 515 "./xpathp.y"
    {
		  xpp_arg->xpp_allowed_options = XP_XQUERY_OPTS | XP_XPATH_OPTS | XP_FREETEXT_OPTS;
		  xp_register_default_namespace_prefixes (xpp_arg);
		}
    break;

  case 3:
#line 519 "./xpathp.y"
    { xpp_arg->xpp_expr = (yyval.tree) = (yyvsp[(3) - (3)].tree); }
    break;

  case 4:
#line 521 "./xpathp.y"
    {
		  xpp_arg->xpp_allowed_options = XP_XPATH_OPTS | XP_FREETEXT_OPTS;
		  xp_register_default_namespace_prefixes (xpp_arg);
		}
    break;

  case 5:
#line 525 "./xpathp.y"
    { xpp_arg->xpp_expr = (yyval.tree) = (yyvsp[(3) - (3)].tree); }
    break;

  case 6:
#line 526 "./xpathp.y"
    { xpp_arg->xpp_allowed_options = XP_FREETEXT_OPTS; }
    break;

  case 7:
#line 526 "./xpathp.y"
    { xpp_arg->xpp_expr = (yyval.tree) = (yyvsp[(3) - (3)].tree); }
    break;

  case 8:
#line 527 "./xpathp.y"
    { (yyval.tree) = NULL; /* This never happens and it's here solely to remove warnings */ }
    break;

  case 9:
#line 528 "./xpathp.y"
    { xpyyerror (xpp_arg, "(internal SQL processing error) XQuery, XPath or Free-Text mark expected"); }
    break;

  case 10:
#line 532 "./xpathp.y"
    { xpyyerror (xpp_arg, "The XQuery expression is totally empty"); }
    break;

  case 11:
#line 534 "./xpathp.y"
    {
		  (yyval.tree) = xp_make_module (xpp_arg, NULL, NULL, (yyvsp[(3) - (4)].tree));
		}
    break;

  case 12:
#line 538 "./xpathp.y"
    {
		  xp_register_namespace_prefix (xpp_arg, (yyvsp[(3) - (6)].box), (yyvsp[(5) - (6)].box));
		}
    break;

  case 13:
#line 542 "./xpathp.y"
    {
		  (yyval.tree) = xp_make_module (xpp_arg, box_copy ((yyvsp[(3) - (9)].box)), box_copy ((yyvsp[(5) - (9)].box)), NULL);
		}
    break;

  case 14:
#line 548 "./xpathp.y"
    { (yyval.tree) = (yyvsp[(2) - (3)].tree); }
    break;

  case 17:
#line 557 "./xpathp.y"
    { (yyval.tree) = (XT*)((yyvsp[(2) - (3)].fts)); }
    break;

  case 19:
#line 566 "./xpathp.y"
    { ; }
    break;

  case 20:
#line 567 "./xpathp.y"
    { ; }
    break;

  case 24:
#line 577 "./xpathp.y"
    { xpyyerror (xpp_arg, "Missing semicolon after prolog (setter) declaration"); }
    break;

  case 27:
#line 583 "./xpathp.y"
    { xpyyerror (xpp_arg, "Prolog setter declaration can not appear after a non-setter declaration"); }
    break;

  case 28:
#line 587 "./xpathp.y"
    { XPP_PROLOG_SET (xe_xmlspace_mode, "xmlspace mode", XPP_XMLSPACE_PRESERVE); }
    break;

  case 29:
#line 588 "./xpathp.y"
    { XPP_PROLOG_SET (xe_xmlspace_mode, "xmlspace mode", XPP_XMLSPACE_STRIP); }
    break;

  case 30:
#line 589 "./xpathp.y"
    { XPP_PROLOG_SET (xe_dflt_collation, "default collation", box_copy ((yyvsp[(2) - (2)].box))); }
    break;

  case 31:
#line 590 "./xpathp.y"
    { XPP_PROLOG_SET (xe_base_uri, "base-uri", box_copy ((yyvsp[(2) - (2)].box))); }
    break;

  case 32:
#line 591 "./xpathp.y"
    { XPP_PROLOG_SET (xe_construction_mode, "construction mode", XPP_TYPE_PRESERVE); }
    break;

  case 33:
#line 592 "./xpathp.y"
    { XPP_PROLOG_SET (xe_construction_mode, "construction mode", XPP_TYPE_STRIP); }
    break;

  case 34:
#line 593 "./xpathp.y"
    { XPP_PROLOG_SET (xe_dflt_elt_namespace, "default element namespace", box_copy ((yyvsp[(3) - (3)].box))); }
    break;

  case 35:
#line 594 "./xpathp.y"
    { XPP_PROLOG_SET (xe_dflt_fn_namespace, "default function namespace", box_copy ((yyvsp[(3) - (3)].box))); }
    break;

  case 36:
#line 595 "./xpathp.y"
    { XPP_PROLOG_SET (xe_ordering_mode, "ordering mode", XPP_ORDERING_ORDERED); }
    break;

  case 37:
#line 596 "./xpathp.y"
    { XPP_PROLOG_SET (xe_ordering_mode, "ordering mode", XPP_ORDERING_UNORDERED); }
    break;

  case 38:
#line 597 "./xpathp.y"
    { XPP_PROLOG_SET (xe_validation_mode, "validation mode", XPP_VALIDATION_LAX); }
    break;

  case 39:
#line 598 "./xpathp.y"
    { XPP_PROLOG_SET (xe_validation_mode, "validation mode", XPP_VALIDATION_SKIP); }
    break;

  case 40:
#line 599 "./xpathp.y"
    { XPP_PROLOG_SET (xe_validation_mode, "validation mode", XPP_VALIDATION_STRICT); }
    break;

  case 43:
#line 605 "./xpathp.y"
    {
		xp_register_namespace_prefix (xpp_arg, (yyvsp[(2) - (5)].box), (yyvsp[(4) - (5)].box));
		 }
    break;

  case 44:
#line 608 "./xpathp.y"
    {
		xp_register_namespace_prefix (xpp_arg, (yyvsp[(2) - (5)].box), (yyvsp[(4) - (5)].box));
		 }
    break;

  case 46:
#line 612 "./xpathp.y"
    { /* dk_set_push (&(xpp_arg->xpp_preamble_decls), $1) */ ; }
    break;

  case 47:
#line 613 "./xpathp.y"
    { /* dk_set_push (&(xpp_arg->xpp_preamble_decls), $1) */ ; }
    break;

  case 48:
#line 618 "./xpathp.y"
    {
		  if ((yyvsp[(2) - (4)].box))
		    {
		      if (IS_BOX_POINTER ((yyvsp[(2) - (4)].box)))
			xp_register_namespace_prefix (xpp_arg, (yyvsp[(2) - (4)].box), (yyvsp[(3) - (4)].box));
		      else
			XPP_PROLOG_SET (xe_dflt_elt_namespace, "default element namespace", (yyvsp[(2) - (4)].box));
		    }
		  xp_import_schema (xpp_arg, (yyvsp[(2) - (4)].box), (yyvsp[(3) - (4)].box), (caddr_t *)revlist_to_array ((yyvsp[(4) - (4)].backstack)));
		}
    break;

  case 49:
#line 631 "./xpathp.y"
    { (yyval.box) = NULL; }
    break;

  case 50:
#line 632 "./xpathp.y"
    { (yyval.box) = (yyvsp[(2) - (3)].box); }
    break;

  case 51:
#line 633 "./xpathp.y"
    { (yyval.box) = (yyvsp[(2) - (3)].box); }
    break;

  case 52:
#line 634 "./xpathp.y"
    { (yyval.box) = (void *)1; }
    break;

  case 53:
#line 638 "./xpathp.y"
    { (yyval.backstack) = NULL; }
    break;

  case 54:
#line 639 "./xpathp.y"
    { dk_set_push (&((yyval.backstack)), (yyvsp[(2) - (3)].box)); (yyval.backstack) = dk_set_conc ((yyval.backstack), (yyvsp[(3) - (3)].backstack)); }
    break;

  case 55:
#line 643 "./xpathp.y"
    { (yyval.backstack) = NULL; }
    break;

  case 56:
#line 644 "./xpathp.y"
    { (yyval.backstack) = (yyvsp[(1) - (3)].backstack); dk_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].box)); }
    break;

  case 57:
#line 649 "./xpathp.y"
    {
		  if ((yyvsp[(2) - (4)].box))
		    xp_register_namespace_prefix (xpp_arg, (yyvsp[(2) - (4)].box), (yyvsp[(3) - (4)].box));
		  xp_import_module (xpp_arg, (yyvsp[(2) - (4)].box), (yyvsp[(3) - (4)].box), (caddr_t *)revlist_to_array ((yyvsp[(4) - (4)].backstack)));
		}
    break;

  case 58:
#line 657 "./xpathp.y"
    { (yyval.box) = NULL; }
    break;

  case 59:
#line 658 "./xpathp.y"
    { (yyval.box) = (yyvsp[(2) - (3)].box); }
    break;

  case 60:
#line 659 "./xpathp.y"
    { (yyval.box) = (yyvsp[(2) - (3)].box); }
    break;

  case 61:
#line 664 "./xpathp.y"
    {
	      xp_var_decl (xpp_arg, box_copy ((yyvsp[(2) - (4)].box)), (yyvsp[(3) - (4)].tree), (yyvsp[(4) - (4)].tree));
	    }
    break;

  case 62:
#line 670 "./xpathp.y"
    { (yyval.tree) = NULL; }
    break;

  case 63:
#line 671 "./xpathp.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 64:
#line 677 "./xpathp.y"
    { (yyval.tree) = NULL; }
    break;

  case 65:
#line 678 "./xpathp.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 67:
#line 683 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, XQCNAME, NULL, (XT *)(yyvsp[(1) - (1)].box), 0, XQ_SEQTYPE_REQ_ONE); }
    break;

  case 68:
#line 684 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, XQCNAME, NULL, (XT *)(yyvsp[(1) - (1)].box), 0, XQ_SEQTYPE_OPT_MANY); }
    break;

  case 69:
#line 685 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, XQCNAME, NULL, (XT *)(yyvsp[(1) - (1)].box), 0, XQ_SEQTYPE_REQ_MANY); }
    break;

  case 70:
#line 686 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, XQCNAME, NULL, (XT *)(yyvsp[(1) - (1)].box), 0, XQ_SEQTYPE_OPT_ONE); }
    break;

  case 71:
#line 687 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, DOCUMENT_NODE_LPAR_L, NULL, (yyvsp[(2) - (3)].tree), 0, (yyvsp[(3) - (3)].token_type)); }
    break;

  case 73:
#line 689 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, ATTRIBUTE_LPAR_L, (yyvsp[(2) - (3)].box), NULL, 0, (yyvsp[(3) - (3)].token_type)); }
    break;

  case 74:
#line 690 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, ATTRIBUTE_LPAR_L, (yyvsp[(2) - (5)].box), (XT *)(yyvsp[(4) - (5)].box), 0, (yyvsp[(5) - (5)].token_type)); }
    break;

  case 76:
#line 692 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, SCHEMA_ATTRIBUTE_LPAR_L, (yyvsp[(2) - (3)].box), NULL, 0, (yyvsp[(3) - (3)].token_type)); }
    break;

  case 77:
#line 693 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, PI_LPAR_L, NULL, (yyvsp[(2) - (3)].tree), 0, (yyvsp[(3) - (3)].token_type)); }
    break;

  case 78:
#line 694 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, COMMENT_LPAR_L, NULL, NULL, 0, (yyvsp[(2) - (2)].token_type)); }
    break;

  case 79:
#line 695 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, TEXT_LPAR_L, NULL, NULL, 0, (yyvsp[(2) - (2)].token_type)); }
    break;

  case 80:
#line 696 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, NODE_LPAR_L, NULL, NULL, 0, (yyvsp[(2) - (2)].token_type)); }
    break;

  case 81:
#line 697 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, ITEM_LPAR_RPAR_L, NULL, NULL, 0, XQ_SEQTYPE_REQ_ONE); }
    break;

  case 82:
#line 698 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, ITEM_LPAR_RPAR_L, NULL, NULL, 0, XQ_SEQTYPE_REQ_MANY); }
    break;

  case 83:
#line 699 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, ITEM_LPAR_RPAR_L, NULL, NULL, 0, XQ_SEQTYPE_OPT_ONE); }
    break;

  case 84:
#line 700 "./xpathp.y"
    { (yyval.tree) = NULL; }
    break;

  case 85:
#line 701 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, EMPTY_LPAR_RPAR_L, NULL, NULL, 0, XQ_SEQTYPE_OPT_ONE); }
    break;

  case 86:
#line 705 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, DOCUMENT_NODE_LPAR_L, NULL, (yyvsp[(2) - (3)].tree), 0, XQ_SEQTYPE_REQ_ONE); }
    break;

  case 88:
#line 707 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, ATTRIBUTE_LPAR_L, (yyvsp[(2) - (3)].box), NULL, 0, XQ_SEQTYPE_REQ_ONE); }
    break;

  case 89:
#line 708 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, ATTRIBUTE_LPAR_L, (yyvsp[(2) - (5)].box), (XT *)(yyvsp[(4) - (5)].box), 0, XQ_SEQTYPE_REQ_ONE); }
    break;

  case 91:
#line 710 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, SCHEMA_ATTRIBUTE_LPAR_L, (yyvsp[(2) - (3)].box), NULL, 0, XQ_SEQTYPE_REQ_ONE); }
    break;

  case 92:
#line 711 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, PI_LPAR_L, NULL, (yyvsp[(2) - (3)].tree), 0, XQ_SEQTYPE_REQ_ONE); }
    break;

  case 93:
#line 712 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, COMMENT_LPAR_L, NULL, NULL, 0, XQ_SEQTYPE_REQ_ONE); }
    break;

  case 94:
#line 713 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, TEXT_LPAR_L, NULL, NULL, 0, XQ_SEQTYPE_REQ_ONE); }
    break;

  case 95:
#line 714 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, NODE_LPAR_L, NULL, NULL, 0, XQ_SEQTYPE_REQ_ONE); }
    break;

  case 96:
#line 718 "./xpathp.y"
    { (yyval.token_type) = XQ_SEQTYPE_REQ_MANY; }
    break;

  case 97:
#line 719 "./xpathp.y"
    { (yyval.token_type) = XQ_SEQTYPE_OPT_ONE; }
    break;

  case 98:
#line 720 "./xpathp.y"
    { (yyval.token_type) = XQ_SEQTYPE_OPT_MANY; }
    break;

  case 99:
#line 724 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, ELEMENT_LPAR_L, NULL, NULL, 0, (yyvsp[(2) - (2)].token_type)); }
    break;

  case 100:
#line 725 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, ELEMENT_LPAR_L, (yyvsp[(2) - (3)].box), NULL, 0, (yyvsp[(3) - (3)].token_type)); }
    break;

  case 101:
#line 726 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, ELEMENT_LPAR_L, (yyvsp[(2) - (5)].box), (XT *)(yyvsp[(4) - (5)].box), 0, (yyvsp[(5) - (5)].token_type)); }
    break;

  case 102:
#line 727 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, ELEMENT_LPAR_L, (yyvsp[(2) - (6)].box), (XT *)(yyvsp[(4) - (6)].box), 1, (yyvsp[(6) - (6)].token_type)); }
    break;

  case 103:
#line 728 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, ELEMENT_LPAR_L, (yyvsp[(2) - (5)].box), (XT *)(yyvsp[(4) - (5)].box), 1, (yyvsp[(5) - (5)].token_type)); }
    break;

  case 104:
#line 732 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, ELEMENT_LPAR_L, NULL, NULL, 0, XQ_SEQTYPE_REQ_ONE); }
    break;

  case 105:
#line 733 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, ELEMENT_LPAR_L, (yyvsp[(2) - (3)].box), NULL, 0, XQ_SEQTYPE_REQ_ONE); }
    break;

  case 106:
#line 734 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, ELEMENT_LPAR_L, (yyvsp[(2) - (5)].box), (XT *)(yyvsp[(4) - (5)].box), 0, XQ_SEQTYPE_REQ_ONE); }
    break;

  case 107:
#line 735 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, ELEMENT_LPAR_L, (yyvsp[(2) - (6)].box), (XT *)(yyvsp[(4) - (6)].box), 1, XQ_SEQTYPE_REQ_ONE); }
    break;

  case 108:
#line 736 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, ELEMENT_LPAR_L, (yyvsp[(2) - (5)].box), (XT *)(yyvsp[(4) - (5)].box), 1, XQ_SEQTYPE_REQ_ONE); }
    break;

  case 109:
#line 740 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, SCHEMA_ELEMENT_LPAR_L, (yyvsp[(2) - (3)].box), NULL, 0, (yyvsp[(3) - (3)].token_type)); }
    break;

  case 110:
#line 744 "./xpathp.y"
    { (yyval.tree) = xp_make_seq_type (xpp_arg, SCHEMA_ELEMENT_LPAR_L, (yyvsp[(2) - (3)].box), NULL, 0, XQ_SEQTYPE_REQ_ONE); }
    break;

  case 111:
#line 748 "./xpathp.y"
    { (yyval.tree) = NULL; }
    break;

  case 112:
#line 749 "./xpathp.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 113:
#line 750 "./xpathp.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 114:
#line 751 "./xpathp.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 115:
#line 752 "./xpathp.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 117:
#line 757 "./xpathp.y"
    { (yyval.box) = box_dv_uname_string ("not"); }
    break;

  case 118:
#line 758 "./xpathp.y"
    { (yyval.box) = NULL; }
    break;

  case 119:
#line 762 "./xpathp.y"
    { (yyval.tree) = NULL; }
    break;

  case 120:
#line 763 "./xpathp.y"
    { (yyval.tree) = (XT *)(yyvsp[(1) - (1)].box); }
    break;

  case 121:
#line 764 "./xpathp.y"
    { (yyval.tree) = (XT *)(yyvsp[(1) - (1)].box); }
    break;

  case 122:
#line 769 "./xpathp.y"
    {
		  caddr_t fname = xp_make_extfunction_name (xpp_arg, NULL, (yyvsp[(2) - (4)].box));
		  xp_env_push (xpp_arg, "function", fname, 1);
		  (yyval.tree) = xp_make_defun (xpp_arg, fname, list_to_array (dk_set_nreverse ((yyvsp[(3) - (4)].backstack))), (yyvsp[(4) - (4)].tree), NULL);
		}
    break;

  case 123:
#line 775 "./xpathp.y"
    {
#ifdef MALLOC_DEBUG
		  dk_check_tree ((yyvsp[(6) - (6)].tree));
#endif
		  (yyval.tree) = (yyvsp[(5) - (6)].tree);
		  do
		    {
		      xp_query_t *xqr = xpp_arg->xpp_xp_env->xe_xqr;
		      long  n_slots = dk_set_length (xqr->xqr_state_map);
		      ptrlong *map = (ptrlong *) dk_alloc_box (sizeof (ptrlong) * n_slots, DV_SHORT_STRING);
		      int fill = 0;
		      DO_SET (ptrlong, pos, &xqr->xqr_state_map)
			{
			  map[fill++] = (pos);
			}
		      END_DO_SET();
		      xqr->xqr_slots = map;
		      xqr->xqr_n_slots = n_slots;
		      xqr->xqr_tree = (yyvsp[(6) - (6)].tree);
		      xqr->xqr_instance_length = sizeof (caddr_t) * xpp_arg->xpp_xp_env->xe_xqst_ctr;
		      (yyval.tree)->_.defun.body = xqr;
		    } while (0);
		  xpp_arg->xpp_xp_env->xe_xqr = NULL;
		  xp_env_pop(xpp_arg);
#ifdef MALLOC_DEBUG
		  dk_check_tree ((yyval.tree));
#endif
		}
    break;

  case 124:
#line 806 "./xpathp.y"
    { (yyval.tree) = NULL; }
    break;

  case 125:
#line 807 "./xpathp.y"
    { (yyval.tree) = (yyvsp[(3) - (3)].tree); }
    break;

  case 126:
#line 808 "./xpathp.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 127:
#line 812 "./xpathp.y"
    { (yyval.backstack) = NULL; }
    break;

  case 129:
#line 817 "./xpathp.y"
    { (yyval.backstack) = NULL; dk_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 130:
#line 818 "./xpathp.y"
    { (yyval.backstack) = (yyvsp[(1) - (3)].backstack); dk_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].tree)); }
    break;

  case 131:
#line 822 "./xpathp.y"
    { (yyval.tree) = xtlist (xpp_arg, 5, XQ_DEFPARAM, (yyvsp[(3) - (3)].tree), box_copy ((yyvsp[(2) - (3)].box)), (ptrlong)0, (ptrlong)0); }
    break;

  case 132:
#line 847 "./xpathp.y"
    {
		  if (dk_set_length((yyvsp[(1) - (1)].backstack)) > 1)
		    (yyval.tree) = xp_make_call (xpp_arg, "append", revlist_to_array ((yyvsp[(1) - (1)].backstack)));
		  else
		    (yyval.tree) = dk_set_pop (&((yyvsp[(1) - (1)].backstack)));
		}
    break;

  case 133:
#line 856 "./xpathp.y"
    { (yyval.tree) = xp_make_sortby (xpp_arg, (yyvsp[(1) - (2)].tree), (yyvsp[(2) - (2)].backstack)); }
    break;

  case 134:
#line 858 "./xpathp.y"
    {
		  (yyval.tree) = xp_make_call (xpp_arg, "or", list (2, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)));
		}
    break;

  case 135:
#line 861 "./xpathp.y"
    { xpyyerror (xpp_arg, "operand expected after 'OR'"); }
    break;

  case 136:
#line 863 "./xpathp.y"
    {
		  (yyval.tree) = xp_make_call (xpp_arg, "and", list (2, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)));
		}
    break;

  case 137:
#line 866 "./xpathp.y"
    { xpyyerror (xpp_arg, "operand expected after 'AND'"); }
    break;

  case 138:
#line 868 "./xpathp.y"
    {
		  (yyval.tree) = xp_make_call (xpp_arg, "not", list (1, (yyvsp[(2) - (2)].tree)));
		}
    break;

  case 139:
#line 871 "./xpathp.y"
    { xpyyerror (xpp_arg, "operand expected after 'NOT'"); }
    break;

  case 140:
#line 873 "./xpathp.y"
    {
		  (yyval.tree) = xp_make_call (xpp_arg, "EQ operator", list (2, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)));
		}
    break;

  case 141:
#line 876 "./xpathp.y"
    { xpyyerror (xpp_arg, "operand expected after 'eq'"); }
    break;

  case 142:
#line 878 "./xpathp.y"
    {
		  (yyval.tree) = xp_make_call (xpp_arg, box_dv_uname_string("GE operator"), list (2, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)));
		}
    break;

  case 143:
#line 881 "./xpathp.y"
    { xpyyerror (xpp_arg, "operand expected after 'ge'"); }
    break;

  case 144:
#line 883 "./xpathp.y"
    {
		  (yyval.tree) = xp_make_call (xpp_arg, "GT operator", list (2, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)));
		}
    break;

  case 145:
#line 886 "./xpathp.y"
    { xpyyerror (xpp_arg, "operand expected after 'gt'"); }
    break;

  case 146:
#line 888 "./xpathp.y"
    {
		  (yyval.tree) = xp_make_call (xpp_arg, "LE operator", list (2, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)));
		}
    break;

  case 147:
#line 891 "./xpathp.y"
    { xpyyerror (xpp_arg, "operand expected after 'le'"); }
    break;

  case 148:
#line 893 "./xpathp.y"
    {
		  (yyval.tree) = xp_make_call (xpp_arg, "LT operator", list (2, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)));
		}
    break;

  case 149:
#line 896 "./xpathp.y"
    { xpyyerror (xpp_arg, "operand expected after 'lt'"); }
    break;

  case 150:
#line 898 "./xpathp.y"
    {
		  (yyval.tree) = xp_make_call (xpp_arg, "NE operator", list (2, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)));
		}
    break;

  case 151:
#line 901 "./xpathp.y"
    { xpyyerror (xpp_arg, "operand expected after 'ne'"); }
    break;

  case 152:
#line 903 "./xpathp.y"
    {
		  (yyval.tree) = xp_make_call (xpp_arg, "BEFORE operator", list (2, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)));
		}
    break;

  case 153:
#line 906 "./xpathp.y"
    { xpyyerror (xpp_arg, "operand expected after '<<'"); }
    break;

  case 154:
#line 908 "./xpathp.y"
    {
		  (yyval.tree) = xp_make_call (xpp_arg, "BEFORE operator", list (2, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)));
		}
    break;

  case 155:
#line 911 "./xpathp.y"
    { xpyyerror (xpp_arg, "operand expected after 'before'"); }
    break;

  case 156:
#line 913 "./xpathp.y"
    {
		  (yyval.tree) = xp_make_call (xpp_arg, "AFTER operator", list (2, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)));
		}
    break;

  case 157:
#line 916 "./xpathp.y"
    { xpyyerror (xpp_arg, "operand expected after '>>'"); }
    break;

  case 158:
#line 918 "./xpathp.y"
    {
		  (yyval.tree) = xp_make_call (xpp_arg, "AFTER operator", list (2, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)));
		}
    break;

  case 159:
#line 921 "./xpathp.y"
    { xpyyerror (xpp_arg, "operand expected after 'after'"); }
    break;

  case 160:
#line 923 "./xpathp.y"
    { (yyval.tree) = xp_make_flwr (xpp_arg, (yyvsp[(1) - (5)].backstack), (yyvsp[(2) - (5)].tree), (yyvsp[(3) - (5)].backstack), (yyvsp[(5) - (5)].tree)); }
    break;

  case 161:
#line 925 "./xpathp.y"
    {
		  (yyval.tree) = xp_make_call (xpp_arg, "if", list (3, (yyvsp[(2) - (7)].tree), (yyvsp[(5) - (7)].tree), (yyvsp[(7) - (7)].tree)));
		}
    break;

  case 162:
#line 929 "./xpathp.y"
    {
		  (yyval.tree) = xp_make_call (xpp_arg, "some", list (3, xp_make_literal_tree (xpp_arg, (yyvsp[(2) - (6)].box), 1), (yyvsp[(4) - (6)].tree), (yyvsp[(6) - (6)].tree)));
		}
    break;

  case 163:
#line 933 "./xpathp.y"
    {
		  (yyval.tree) = xp_make_call (xpp_arg, "every", list (3, xp_make_literal_tree (xpp_arg, (yyvsp[(2) - (6)].box), 1), (yyvsp[(4) - (6)].tree), (yyvsp[(6) - (6)].tree)));
		}
    break;

  case 164:
#line 936 "./xpathp.y"
    { (yyval.tree) = xp_make_call (xpp_arg, "INSTANCE OF predicate", list (2, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree))); }
    break;

  case 165:
#line 937 "./xpathp.y"
    { (yyval.tree) = xp_make_cast (xpp_arg, XQ_CAST_AS_CNAME, NULL, (yyvsp[(1) - (2)].tree)); }
    break;

  case 166:
#line 938 "./xpathp.y"
    { (yyval.tree) = xp_make_cast (xpp_arg, XQ_CASTABLE_AS_CNAME, NULL, (yyvsp[(1) - (2)].tree)); }
    break;

  case 167:
#line 939 "./xpathp.y"
    { (yyval.tree) = xp_make_cast (xpp_arg, TREAT_AS_L, NULL, (yyvsp[(1) - (2)].tree)); }
    break;

  case 168:
#line 940 "./xpathp.y"
    { (yyval.tree) = xp_make_typeswitch (xpp_arg, (yyvsp[(2) - (5)].tree), (yyvsp[(4) - (5)].backstack), (yyvsp[(5) - (5)].trees)); }
    break;

  case 169:
#line 941 "./xpathp.y"
    { XBIN_OP ((yyval.tree), BOP_EQ, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 170:
#line 942 "./xpathp.y"
    { XBIN_OP ((yyval.tree), BOP_NEQ, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 171:
#line 943 "./xpathp.y"
    { XBIN_OP ((yyval.tree), BOP_SAME, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 172:
#line 944 "./xpathp.y"
    { XBIN_OP ((yyval.tree), BOP_NSAME, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 173:
#line 945 "./xpathp.y"
    { XBIN_OP ((yyval.tree), BOP_LIKE, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 174:
#line 946 "./xpathp.y"
    { XBIN_OP ((yyval.tree), BOP_LT, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 175:
#line 947 "./xpathp.y"
    { XBIN_OP ((yyval.tree), BOP_LTE, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 176:
#line 948 "./xpathp.y"
    { XBIN_OP ((yyval.tree), BOP_GT, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 177:
#line 949 "./xpathp.y"
    { XBIN_OP ((yyval.tree), BOP_GTE, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 178:
#line 955 "./xpathp.y"
    {
		  (yyval.tree) = xp_make_call (xpp_arg, "TO operator", list (2, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)));
		}
    break;

  case 179:
#line 958 "./xpathp.y"
    { XBIN_OP ((yyval.tree), BOP_PLUS, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 180:
#line 959 "./xpathp.y"
    { XBIN_OP ((yyval.tree), BOP_MINUS, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 181:
#line 960 "./xpathp.y"
    { XBIN_OP ((yyval.tree), BOP_TIMES, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 182:
#line 962 "./xpathp.y"
    {
		  (yyval.tree) = xp_make_call (xpp_arg, "IDIV operator", list (2, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)));
		}
    break;

  case 183:
#line 965 "./xpathp.y"
    { xpyyerror (xpp_arg, "operand expected after 'idiv'"); }
    break;

  case 184:
#line 966 "./xpathp.y"
    { XBIN_OP ((yyval.tree), BOP_DIV, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 185:
#line 967 "./xpathp.y"
    { XBIN_OP ((yyval.tree), BOP_MOD, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 186:
#line 968 "./xpathp.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 187:
#line 969 "./xpathp.y"
    { XBIN_OP ((yyval.tree), BOP_MINUS, box_num_nonull (0), (yyvsp[(2) - (2)].tree)); }
    break;

  case 188:
#line 971 "./xpathp.y"
    { (yyval.tree) = xp_make_call (xpp_arg, "union", list (2, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree))); }
    break;

  case 189:
#line 973 "./xpathp.y"
    { (yyval.tree) = xtlist (xpp_arg, 7, XP_UNION,
		    (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree), xe_new_xqst (xpp_arg, XQST_REF),
		    xe_new_xqst (xpp_arg, XQST_REF), xe_new_xqst (xpp_arg, XQST_REF),
		    xe_new_xqst (xpp_arg, XQST_INT) ); }
    break;

  case 190:
#line 978 "./xpathp.y"
    {
		  (yyval.tree) = xp_make_call (xpp_arg, "intersect", list (2, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)));
		}
    break;

  case 191:
#line 982 "./xpathp.y"
    {
		  (yyval.tree) = xp_make_call (xpp_arg, "except", list (2, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)));
		}
    break;

  case 192:
#line 985 "./xpathp.y"
    { (yyval.tree) = xp_make_call (xpp_arg, "VALIDATE operator", list (2, (yyvsp[(2) - (3)].tree), (yyvsp[(1) - (3)].token_type))); }
    break;

  case 194:
#line 990 "./xpathp.y"
    { (yyval.backstack) = (yyvsp[(2) - (3)].backstack); }
    break;

  case 195:
#line 991 "./xpathp.y"
    { xpyyerror (xpp_arg, "')' or ',' expected"); }
    break;

  case 196:
#line 995 "./xpathp.y"
    { (yyval.backstack) = NULL; dk_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 197:
#line 996 "./xpathp.y"
    { (yyval.backstack) = (yyvsp[(1) - (3)].backstack); dk_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].tree)); }
    break;

  case 198:
#line 1001 "./xpathp.y"
    { (yyval.tree) = xtlist (xpp_arg, 7, (yyvsp[(2) - (5)].token_type),
		  NULL,				    /* xs_query */
		  (yyvsp[(1) - (5)].tree),				    /* xs_tree */
		  (ptrlong)((XQ_DESCENDING == (yyvsp[(2) - (5)].token_type)) ? 1 : 0),  /* xs_is_desc */
		  (yyvsp[(5) - (5)].box),				    /* xs_type */
		  (yyvsp[(3) - (5)].token_type),				    /* xs_empty_weight */
		  ((yyvsp[(4) - (5)].box) ? xp_make_literal_tree (xpp_arg, (caddr_t)(yyvsp[(4) - (5)].box), 1) : NULL) ); /*	xs_collation, must be collation_t! */
		 }
    break;

  case 199:
#line 1012 "./xpathp.y"
    { (yyval.token_type) = XQ_ASCENDING; }
    break;

  case 200:
#line 1013 "./xpathp.y"
    { (yyval.token_type) = XQ_ASCENDING; }
    break;

  case 201:
#line 1014 "./xpathp.y"
    { (yyval.token_type) = XQ_DESCENDING; }
    break;

  case 202:
#line 1018 "./xpathp.y"
    { (yyval.token_type) = XQ_EMPTY_SQL_ORDER; }
    break;

  case 203:
#line 1019 "./xpathp.y"
    { (yyval.token_type) = XQ_EMPTY_GREATEST; }
    break;

  case 204:
#line 1020 "./xpathp.y"
    { (yyval.token_type) = XQ_EMPTY_LEAST; }
    break;

  case 205:
#line 1024 "./xpathp.y"
    { (yyval.box) = NULL; }
    break;

  case 206:
#line 1025 "./xpathp.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 207:
#line 1029 "./xpathp.y"
    { (yyval.box) = DV_UNKNOWN; }
    break;

  case 208:
#line 1030 "./xpathp.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 209:
#line 1034 "./xpathp.y"
    { (yyval.backstack) = NULL; dk_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].backstack)); }
    break;

  case 210:
#line 1035 "./xpathp.y"
    { (yyval.backstack) = (yyvsp[(1) - (2)].backstack); dk_set_push (&((yyval.backstack)), (yyvsp[(2) - (2)].backstack)); }
    break;

  case 213:
#line 1044 "./xpathp.y"
    { (yyval.backstack) = (yyvsp[(2) - (2)].backstack); dk_set_push (&((yyval.backstack)), (void *)(XQ_FOR)); }
    break;

  case 214:
#line 1048 "./xpathp.y"
    { (yyval.backstack) = NULL; dk_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 215:
#line 1049 "./xpathp.y"
    { (yyval.backstack) = (yyvsp[(1) - (4)].backstack); dk_set_push (&((yyval.backstack)), (yyvsp[(4) - (4)].tree)); }
    break;

  case 216:
#line 1054 "./xpathp.y"
    {
	      (yyval.bookmark) = dk_alloc_box (sizeof (xp_lexbmk_t), DV_ARRAY_OF_LONG);
              ((yyval.bookmark))[0] = xpp_arg->xpp_curr_lexem_bmk;
	    }
    break;

  case 217:
#line 1059 "./xpathp.y"
    {
              (yyval.tree) = xtlist (xpp_arg, 3, XQ_IN, box_copy ((yyvsp[(1) - (4)].box)), xp_embedded_xmlview (xpp_arg, (yyvsp[(3) - (4)].bookmark), (yyvsp[(4) - (4)].tree)));
	      dk_free_box ((yyvsp[(3) - (4)].bookmark));
            }
    break;

  case 218:
#line 1066 "./xpathp.y"
    { (yyval.backstack) = (yyvsp[(2) - (2)].backstack); dk_set_push (&((yyval.backstack)), (void *)(XQ_LET)); }
    break;

  case 219:
#line 1070 "./xpathp.y"
    { (yyval.backstack) = NULL; dk_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 220:
#line 1071 "./xpathp.y"
    { (yyval.backstack) = (yyvsp[(1) - (4)].backstack); dk_set_push (&((yyval.backstack)), (yyvsp[(4) - (4)].tree)); }
    break;

  case 221:
#line 1075 "./xpathp.y"
    { (yyval.tree) = xtlist (xpp_arg, 3, XQ_ASSIGN, box_copy ((yyvsp[(1) - (3)].box)), (yyvsp[(3) - (3)].tree)); }
    break;

  case 222:
#line 1079 "./xpathp.y"
    { (yyval.tree) = NULL; }
    break;

  case 223:
#line 1080 "./xpathp.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 224:
#line 1084 "./xpathp.y"
    { (yyval.backstack) = NULL; }
    break;

  case 225:
#line 1085 "./xpathp.y"
    { (yyval.backstack) = (yyvsp[(2) - (2)].backstack); dk_set_push (&((yyval.backstack)), (void *)((ptrlong)ORDER_BY_L)); }
    break;

  case 226:
#line 1086 "./xpathp.y"
    { (yyval.backstack) = (yyvsp[(2) - (2)].backstack); dk_set_push (&((yyval.backstack)), (void *)((ptrlong)STABLE_ORDER_BY_L)); }
    break;

  case 227:
#line 1090 "./xpathp.y"
    { (yyval.backstack) = NULL; dk_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].trees)); }
    break;

  case 228:
#line 1091 "./xpathp.y"
    { (yyval.backstack) = (yyvsp[(1) - (2)].backstack); dk_set_push (&((yyval.backstack)), (yyvsp[(2) - (2)].trees)); }
    break;

  case 229:
#line 1095 "./xpathp.y"
    { (yyval.trees) = (XT **) list (3, (yyvsp[(5) - (7)].tree), (yyvsp[(3) - (7)].box), (yyvsp[(7) - (7)].tree)); }
    break;

  case 230:
#line 1096 "./xpathp.y"
    { (yyval.trees) = (XT **) list (3, (yyvsp[(2) - (4)].tree), NULL, (yyvsp[(4) - (4)].tree)); }
    break;

  case 231:
#line 1100 "./xpathp.y"
    { (yyval.trees) = (XT **) list (3, NULL, (yyvsp[(3) - (5)].box), (yyvsp[(5) - (5)].tree)); }
    break;

  case 232:
#line 1101 "./xpathp.y"
    { (yyval.trees) = (XT **) list (3, NULL, NULL, (yyvsp[(3) - (3)].tree)); }
    break;

  case 233:
#line 1105 "./xpathp.y"
    { (yyval.token_type) = xpp_arg->xpp_xp_env->xe_validation_mode; }
    break;

  case 234:
#line 1106 "./xpathp.y"
    { (yyval.token_type) = XPP_VALIDATION_LAX; }
    break;

  case 235:
#line 1107 "./xpathp.y"
    { (yyval.token_type) = XPP_VALIDATION_STRICT; }
    break;

  case 236:
#line 1108 "./xpathp.y"
    { (yyval.token_type) = XPP_VALIDATION_SKIP; }
    break;

  case 239:
#line 1118 "./xpathp.y"
    { (yyval.tree) = xp_path (xpp_arg, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree), 0); }
    break;

  case 240:
#line 1119 "./xpathp.y"
    { (yyval.tree) = xp_path (xpp_arg, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree), XP_SLASH_SLASH); }
    break;

  case 241:
#line 1120 "./xpathp.y"
    { (yyval.tree) = xp_path (xpp_arg, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree), XP_DEREF); }
    break;

  case 242:
#line 1121 "./xpathp.y"
    { (yyval.tree) = xp_absolute (xpp_arg, (yyvsp[(2) - (2)].tree), XP_ABS_CHILD); }
    break;

  case 243:
#line 1122 "./xpathp.y"
    { (yyval.tree) = xp_absolute (xpp_arg, (yyvsp[(2) - (2)].tree), XP_ABS_SLASH_SLASH); }
    break;

  case 244:
#line 1123 "./xpathp.y"
    { (yyval.tree) = xp_make_step (xpp_arg, XP_ROOT, (XT*) XP_NODE, NULL); }
    break;

  case 245:
#line 1125 "./xpathp.y"
    {
		  XT *src = (yyvsp[(1) - (3)].tree);
		  (yyval.tree) = xp_make_call (xpp_arg, "map", list (2, src, (yyvsp[(3) - (3)].tree)));
		}
    break;

  case 246:
#line 1130 "./xpathp.y"
    {
		  XT *left = (yyvsp[(1) - (3)].tree);
		  XT *node_type = xp_make_seq_type (xpp_arg, NODE_LPAR_L, NULL, NULL, 0, XQ_SEQTYPE_REQ_ONE);
		  XT *last_step = xp_make_step (xpp_arg, XP_DESCENDANT_OR_SELF, node_type, NULL);
		  XT *src = xp_path (xpp_arg, left, last_step, 0);
		  (yyval.tree) = xp_make_call (xpp_arg, "map", list (2, src, (yyvsp[(3) - (3)].tree)));
		}
    break;

  case 247:
#line 1141 "./xpathp.y"
    {
		  (yyval.tree) = xp_make_filters (xpp_arg, (yyvsp[(1) - (2)].tree), dk_set_nreverse ((yyvsp[(2) - (2)].backstack)));
		}
    break;

  case 248:
#line 1148 "./xpathp.y"
    { (yyval.tree) = xp_step (xpp_arg, NULL, (yyvsp[(1) - (1)].tree), XP_BY_MAIN_STEP); }
    break;

  case 249:
#line 1149 "./xpathp.y"
    { (yyval.tree) = xp_step (xpp_arg, NULL, (yyvsp[(1) - (1)].tree), XP_BY_MAIN_STEP); }
    break;

  case 250:
#line 1150 "./xpathp.y"
    { (yyval.tree) = xp_step (xpp_arg, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree), XP_BY_MAIN_STEP); }
    break;

  case 251:
#line 1151 "./xpathp.y"
    { (yyval.tree) = xp_step (xpp_arg, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree), XP_SLASH_SLASH); }
    break;

  case 252:
#line 1152 "./xpathp.y"
    { (yyval.tree) = xp_step (xpp_arg, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree), XP_DEREF); }
    break;

  case 255:
#line 1162 "./xpathp.y"
    {
		  (yyval.tree) = xp_make_step (xpp_arg, (yyvsp[(1) - (3)].token_type), (yyvsp[(2) - (3)].tree),
		    ((NULL == (yyvsp[(3) - (3)].backstack)) ? NULL :
		      (XT **) (list_to_array (dk_set_nreverse ((yyvsp[(3) - (3)].backstack)))) ) ); }
    break;

  case 256:
#line 1167 "./xpathp.y"
    { (yyval.tree) = xp_make_step (xpp_arg, XP_PARENT, (XT *)XP_NODE, NULL); }
    break;

  case 257:
#line 1172 "./xpathp.y"
    {
		  (yyval.tree) = xp_make_step (xpp_arg, XP_CHILD, (yyvsp[(1) - (2)].tree), (XT **) list_to_array (dk_set_nreverse ((yyvsp[(2) - (2)].backstack))));
		  /* $$ = xp_make_filters (xpp_arg, $1, dk_set_nreverse ($2)); */
		}
    break;

  case 258:
#line 1180 "./xpathp.y"
    { (yyval.backstack) = NULL; }
    break;

  case 259:
#line 1181 "./xpathp.y"
    { (yyval.backstack) = (yyvsp[(1) - (2)].backstack); dk_set_push (&((yyval.backstack)), (yyvsp[(2) - (2)].tree)); }
    break;

  case 260:
#line 1185 "./xpathp.y"
    { xp_pred_start (xpp_arg); }
    break;

  case 261:
#line 1185 "./xpathp.y"
    { (yyval.tree) = xp_make_pred (xpp_arg, (yyvsp[(3) - (4)].tree)); }
    break;

  case 263:
#line 1190 "./xpathp.y"
    { xpyyerror (xpp_arg, "Unknown axis name"); }
    break;

  case 264:
#line 1198 "./xpathp.y"
    { (yyval.tree) = xp_make_literal_tree (xpp_arg, (yyvsp[(1) - (1)].box), 1); }
    break;

  case 266:
#line 1200 "./xpathp.y"
    { (yyval.tree) = (yyvsp[(2) - (3)].tree); }
    break;

  case 267:
#line 1201 "./xpathp.y"
    { (yyval.tree) = xp_make_call (xpp_arg, "append", list(0)); }
    break;

  case 268:
#line 1202 "./xpathp.y"
    { (yyval.tree) = xp_make_step (xpp_arg, XP_SELF, (XT *) XP_NODE, NULL); }
    break;

  case 273:
#line 1208 "./xpathp.y"
    {
		  (yyval.token_type) = xpp_arg->xpp_xp_env->xe_ordering_mode; xpp_arg->xpp_xp_env->xe_ordering_mode = (yyvsp[(1) - (1)].token_type);
		}
    break;

  case 274:
#line 1211 "./xpathp.y"
    { (yyval.tree) = (yyvsp[(3) - (4)].tree); xpp_arg->xpp_xp_env->xe_ordering_mode = (yyvsp[(2) - (4)].token_type);  }
    break;

  case 275:
#line 1215 "./xpathp.y"
    { (yyval.token_type) = XPP_ORDERING_ORDERED; }
    break;

  case 276:
#line 1216 "./xpathp.y"
    { (yyval.token_type) = XPP_ORDERING_UNORDERED; }
    break;

  case 280:
#line 1227 "./xpathp.y"
    { (yyval.tree) = xp_make_name_test_from_qname (xpp_arg, (yyvsp[(1) - (1)].box), 0); }
    break;

  case 281:
#line 1228 "./xpathp.y"
    { (yyval.tree) = xp_make_name_test_from_qname (xpp_arg, (yyvsp[(1) - (1)].box), 0); }
    break;

  case 282:
#line 1229 "./xpathp.y"
    { (yyval.tree) = xp_make_name_test_from_qname (xpp_arg, (yyvsp[(1) - (1)].box), 0); }
    break;

  case 283:
#line 1233 "./xpathp.y"
    { (yyval.tree) = (XT *) XP_ELT; }
    break;

  case 284:
#line 1234 "./xpathp.y"
    { (yyval.tree) = xtlist (xpp_arg, 4, XP_NAME_NSURI, xp_namespace_pref (xpp_arg, (yyvsp[(1) - (1)].box)), XP_STAR, NULL); }
    break;

  case 285:
#line 1235 "./xpathp.y"
    { (yyval.tree) = xtlist (xpp_arg, 4, XP_NAME_LOCAL, XP_STAR, box_copy ((yyvsp[(1) - (1)].box)), NULL); }
    break;

  case 286:
#line 1240 "./xpathp.y"
    {
		    (yyval.tree) = xp_make_call_or_funcall (xpp_arg, (yyvsp[(1) - (3)].box), list_to_array (dk_set_nreverse ((yyvsp[(2) - (3)].backstack))));
		}
    break;

  case 287:
#line 1244 "./xpathp.y"
    {
		    (yyval.tree) = xp_make_call_or_funcall (xpp_arg, (yyvsp[(1) - (2)].box), list(0));
		}
    break;

  case 288:
#line 1248 "./xpathp.y"
    {
		    (yyval.tree) = xp_make_call_or_funcall (xpp_arg, (yyvsp[(1) - (3)].box), list_to_array (dk_set_nreverse ((yyvsp[(2) - (3)].backstack))));
		    (yyval.tree) = xp_make_call (xpp_arg, "not", list(1, (yyval.tree)));
		}
    break;

  case 289:
#line 1253 "./xpathp.y"
    {
		    (yyval.tree) = xp_make_call_or_funcall (xpp_arg, (yyvsp[(1) - (2)].box), list(0));
		    (yyval.tree) = xp_make_call (xpp_arg, "not", list(1, (yyval.tree)));
		}
    break;

  case 290:
#line 1260 "./xpathp.y"
    { (yyval.tree) = xp_make_sqlcolumn_ref (xpp_arg, (yyvsp[(3) - (4)].box)); }
    break;

  case 291:
#line 1261 "./xpathp.y"
    { xpyyerror (xpp_arg, "')' expected after column name"); }
    break;

  case 292:
#line 1262 "./xpathp.y"
    { xpyyerror (xpp_arg, "Column name in sql:column must be a string constant"); }
    break;

  case 293:
#line 1263 "./xpathp.y"
    { xpyyerror (xpp_arg, "'(' expected after sql:column"); }
    break;

  case 294:
#line 1267 "./xpathp.y"
    { (yyval.tree) = xp_make_variable_ref (xpp_arg, (yyvsp[(2) - (2)].box)); }
    break;

  case 295:
#line 1268 "./xpathp.y"
    { (yyval.tree) = xp_make_variable_ref (xpp_arg, (yyvsp[(1) - (1)].box)); }
    break;

  case 300:
#line 1285 "./xpathp.y"
    {
		  (yyval.tree) = xp_make_call (xpp_arg, "DOCUMENT computed constructor", revlist_to_array ((yyvsp[(2) - (3)].backstack)));
		}
    break;

  case 301:
#line 1289 "./xpathp.y"
    {
		  dk_set_push (&((yyvsp[(2) - (3)].backstack)), xp_make_literal_tree (xpp_arg, xp_make_expanded_name (xpp_arg, (yyvsp[(1) - (3)].box), 0), 0));
		  (yyval.tree) = xp_make_call (xpp_arg, "ELEMENT computed constructor", revlist_to_array ((yyvsp[(2) - (3)].backstack)));
		}
    break;

  case 302:
#line 1294 "./xpathp.y"
    {
		  dk_set_push (&((yyvsp[(5) - (6)].backstack)), (yyvsp[(2) - (6)].tree));
		  (yyval.tree) = xp_make_call (xpp_arg, "ELEMENT computed constructor", revlist_to_array ((yyvsp[(5) - (6)].backstack)));
		}
    break;

  case 303:
#line 1299 "./xpathp.y"
    {
		  dk_set_push (&((yyvsp[(2) - (3)].backstack)), xp_make_literal_tree (xpp_arg, xp_make_expanded_name (xpp_arg, (yyvsp[(1) - (3)].box), 1), 0));
		  (yyval.tree) = xp_make_call (xpp_arg, "ATTRIBUTE computed constructor", revlist_to_array ((yyvsp[(2) - (3)].backstack)));
		}
    break;

  case 304:
#line 1304 "./xpathp.y"
    {
		  dk_set_push (&((yyvsp[(5) - (6)].backstack)), (yyvsp[(2) - (6)].tree));
		  (yyval.tree) = xp_make_call (xpp_arg, "ATTRIBUTE computed constructor", revlist_to_array ((yyvsp[(5) - (6)].backstack)));
		}
    break;

  case 305:
#line 1309 "./xpathp.y"
    {
		  (yyval.tree) = xp_make_call (xpp_arg, "TEXT computed constructor", revlist_to_array ((yyvsp[(2) - (3)].backstack)));
		}
    break;

  case 306:
#line 1313 "./xpathp.y"
    {
		  (yyval.tree) = xp_make_call (xpp_arg, "COMMENT computed constructor", revlist_to_array ((yyvsp[(2) - (3)].backstack)));
		}
    break;

  case 307:
#line 1317 "./xpathp.y"
    {
		  dk_set_push (&((yyvsp[(2) - (3)].backstack)), xp_make_literal_tree (xpp_arg, (yyvsp[(1) - (3)].box), 1));
		  (yyval.tree) = xp_make_call (xpp_arg, "PROCESSING-INSTRUCTION computed constructor", revlist_to_array ((yyvsp[(2) - (3)].backstack)));
		}
    break;

  case 308:
#line 1322 "./xpathp.y"
    {
		  dk_set_push (&((yyvsp[(5) - (6)].backstack)), (yyvsp[(2) - (6)].tree));
		  (yyval.tree) = xp_make_call (xpp_arg, "PROCESSING-INSTRUCTION computed constructor", revlist_to_array ((yyvsp[(5) - (6)].backstack)));
		}
    break;

  case 309:
#line 1329 "./xpathp.y"
    { (yyval.backstack) = NULL; }
    break;

  case 311:
#line 1334 "./xpathp.y"
    { (yyval.backstack) = NULL; if ((yyvsp[(1) - (1)].tree)) dk_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 312:
#line 1335 "./xpathp.y"
    { (yyval.backstack) = (yyvsp[(1) - (3)].backstack); if ((yyvsp[(3) - (3)].tree)) dk_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].tree)); }
    break;

  case 314:
#line 1340 "./xpathp.y"
    { (yyval.tree) = NULL; }
    break;

  case 315:
#line 1341 "./xpathp.y"
    { (yyval.tree) = NULL; }
    break;

  case 316:
#line 1342 "./xpathp.y"
    { (yyval.tree) = NULL; }
    break;

  case 318:
#line 1349 "./xpathp.y"
    { (yyval.tree) = xp_make_direct_comment_ctor (xpp_arg, xp_make_literal_tree (xpp_arg, (yyvsp[(2) - (2)].box), 1)); }
    break;

  case 319:
#line 1350 "./xpathp.y"
    { (yyval.tree) = xp_make_direct_pi_ctor (xpp_arg, xp_make_literal_tree (xpp_arg, (yyvsp[(2) - (3)].box), 1), xp_make_literal_tree (xpp_arg, (yyvsp[(3) - (3)].box), 1)); }
    break;

  case 320:
#line 1355 "./xpathp.y"
    {
		  (yyval.list) = xp_bookmark_namespaces (xpp_arg);
		}
    break;

  case 321:
#line 1358 "./xpathp.y"
    {
		  (yyval.box) = xpp_arg->xpp_xp_env->xe_dflt_elt_namespace;
		}
    break;

  case 322:
#line 1362 "./xpathp.y"
    {
		  (yyval.tree) = xp_make_direct_el_ctor (xpp_arg, (yyvsp[(4) - (6)].tree), dk_set_nreverse((yyvsp[(5) - (6)].backstack)), dk_set_nreverse((yyvsp[(6) - (6)].backstack)));
		  xp_unregister_local_namespaces (xpp_arg, (yyvsp[(2) - (6)].list));
		  xpp_arg->xpp_xp_env->xe_dflt_elt_namespace = (yyvsp[(3) - (6)].box);
		}
    break;

  case 323:
#line 1370 "./xpathp.y"
    { (yyval.backstack) = NULL; }
    break;

  case 324:
#line 1371 "./xpathp.y"
    { (yyval.backstack) = (yyvsp[(2) - (3)].backstack); }
    break;

  case 325:
#line 1375 "./xpathp.y"
    { /* no default action */; }
    break;

  case 326:
#line 1376 "./xpathp.y"
    { /*dk_free_box ($2)*/; }
    break;

  case 327:
#line 1380 "./xpathp.y"
    { (yyval.tree) = xp_make_literal_tree (xpp_arg, xp_make_expanded_name (xpp_arg, (yyvsp[(1) - (1)].box), 0), 0); }
    break;

  case 328:
#line 1381 "./xpathp.y"
    { (yyval.tree) = xp_make_literal_tree (xpp_arg, xp_make_expanded_name (xpp_arg, (yyvsp[(1) - (1)].box), 0), 0); }
    break;

  case 329:
#line 1382 "./xpathp.y"
    { (yyval.tree) = (yyvsp[(2) - (3)].tree); }
    break;

  case 330:
#line 1386 "./xpathp.y"
    { (yyval.backstack) = NULL; }
    break;

  case 331:
#line 1387 "./xpathp.y"
    { (yyval.backstack) = (yyvsp[(1) - (4)].backstack); dk_set_push (&((yyval.backstack)), (yyvsp[(2) - (4)].tree)); dk_set_push (&((yyval.backstack)), dk_set_nreverse((yyvsp[(4) - (4)].list))); }
    break;

  case 332:
#line 1388 "./xpathp.y"
    { (yyval.backstack) = (yyvsp[(1) - (4)].backstack); xpp_arg->xpp_xp_env->xe_dflt_elt_namespace = box_dv_short_string ((yyvsp[(4) - (4)].box)); }
    break;

  case 333:
#line 1389 "./xpathp.y"
    { (yyval.backstack) = (yyvsp[(1) - (4)].backstack); xp_register_namespace_prefix_by_xmlns (xpp_arg, (yyvsp[(2) - (4)].box), (yyvsp[(4) - (4)].box)); }
    break;

  case 334:
#line 1393 "./xpathp.y"
    { (yyval.tree) = xp_make_literal_tree (xpp_arg, xp_make_expanded_name (xpp_arg, (yyvsp[(1) - (1)].box), 1), 0); }
    break;

  case 335:
#line 1394 "./xpathp.y"
    { (yyval.tree) = xp_make_literal_tree (xpp_arg, xp_make_expanded_name (xpp_arg, (yyvsp[(1) - (1)].box), 1), 0); }
    break;

  case 336:
#line 1395 "./xpathp.y"
    { (yyval.tree) = (yyvsp[(2) - (3)].tree); }
    break;

  case 340:
#line 1406 "./xpathp.y"
    { (yyval.list) = NULL; dk_set_push (&((yyval.list)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 341:
#line 1407 "./xpathp.y"
    { (yyval.list) = NULL; dk_set_push (&((yyval.list)), xp_make_literal_tree (xpp_arg, (yyvsp[(1) - (1)].box), 1)); }
    break;

  case 342:
#line 1408 "./xpathp.y"
    { (yyval.list) = NULL; dk_set_push (&((yyval.list)), xp_make_literal_tree (xpp_arg, (yyvsp[(1) - (1)].box), 1)); }
    break;

  case 343:
#line 1409 "./xpathp.y"
    { (yyval.list) = NULL; dk_set_push (&((yyval.list)), xp_make_literal_tree (xpp_arg, (yyvsp[(1) - (1)].box), 1)); }
    break;

  case 344:
#line 1410 "./xpathp.y"
    { (yyval.list) = NULL; PUSH_STRING_ARG_OF_CONCAT((yyval.list), (yyvsp[(1) - (2)].box)); (yyval.list) = dk_set_conc ((yyvsp[(2) - (2)].backstack), (yyval.list)); }
    break;

  case 345:
#line 1411 "./xpathp.y"
    { (yyval.list) = NULL; PUSH_STRING_ARG_OF_CONCAT((yyval.list), (yyvsp[(1) - (2)].box)); (yyval.list) = dk_set_conc ((yyvsp[(2) - (2)].backstack), (yyval.list)); }
    break;

  case 346:
#line 1417 "./xpathp.y"
    { (yyval.backstack) = (yyvsp[(1) - (2)].backstack);
		  PUSH_STRING_ARG_OF_CONCAT((yyval.backstack), (yyvsp[(2) - (2)].box));
		}
    break;

  case 347:
#line 1421 "./xpathp.y"
    { (yyval.backstack) = (yyvsp[(1) - (3)].backstack);
		  PUSH_STRING_ARG_OF_CONCAT((yyval.backstack), (yyvsp[(2) - (3)].box));
		  (yyval.backstack) = dk_set_conc ((yyvsp[(3) - (3)].backstack), (yyval.backstack));
		}
    break;

  case 348:
#line 1429 "./xpathp.y"
    { (yyval.backstack) = (yyvsp[(1) - (2)].backstack);
		  PUSH_STRING_ARG_OF_CONCAT((yyval.backstack), (yyvsp[(2) - (2)].box));
		}
    break;

  case 349:
#line 1433 "./xpathp.y"
    { (yyval.backstack) = (yyvsp[(1) - (3)].backstack);
		  PUSH_STRING_ARG_OF_CONCAT((yyval.backstack), (yyvsp[(2) - (3)].box));
		  (yyval.backstack) = dk_set_conc ((yyvsp[(3) - (3)].backstack), (yyval.backstack));
		}
    break;

  case 350:
#line 1440 "./xpathp.y"
    { (yyval.backstack) = NULL; }
    break;

  case 351:
#line 1441 "./xpathp.y"
    { (yyval.backstack) = (yyvsp[(1) - (2)].backstack); dk_set_push (&((yyval.backstack)), (yyvsp[(2) - (2)].tree)); }
    break;

  case 354:
#line 1447 "./xpathp.y"
    { (yyval.tree) = xp_make_literal_tree (xpp_arg, (yyvsp[(1) - (1)].box), 1); }
    break;

  case 355:
#line 1448 "./xpathp.y"
    { (yyval.tree) = xp_make_literal_tree (xpp_arg, (yyvsp[(1) - (1)].box), 1); }
    break;

  case 356:
#line 1449 "./xpathp.y"
    { (yyval.tree) = xp_make_literal_tree (xpp_arg, (yyvsp[(1) - (1)].box), 1); }
    break;

  case 357:
#line 1450 "./xpathp.y"
    { (yyval.tree) = xp_make_literal_tree (xpp_arg, (yyvsp[(2) - (2)].box), 1); }
    break;

  case 358:
#line 1512 "./xpathp.y"
    { (yyval.tree) = (yyvsp[(2) - (3)].tree); }
    break;

  case 359:
#line 1518 "./xpathp.y"
    {
		  /* if (1 == dk_set_length($1))
		    $$ = dk_set_pop (&($1));
		  else*/
		    (yyval.tree) = xp_make_call (xpp_arg, "append", list_to_array (dk_set_nreverse ((yyvsp[(1) - (1)].backstack))));
		}
    break;

  case 360:
#line 1527 "./xpathp.y"
    { (yyval.backstack) = NULL; }
    break;

  case 362:
#line 1532 "./xpathp.y"
    { (yyval.backstack) = NULL; dk_set_push (&((yyval.backstack)), (yyvsp[(1) - (1)].tree)); }
    break;

  case 363:
#line 1533 "./xpathp.y"
    { (yyval.backstack) = (yyvsp[(1) - (3)].backstack); dk_set_push (&((yyval.backstack)), (yyvsp[(3) - (3)].tree)); }
    break;

  case 367:
#line 1549 "./xpathp.y"
    { ; }
    break;

  case 368:
#line 1550 "./xpathp.y"
    { ; }
    break;

  case 369:
#line 1554 "./xpathp.y"
    { ; }
    break;

  case 370:
#line 1555 "./xpathp.y"
    { xpyyerror (xpp_arg, "']' or option expected"); }
    break;

  case 371:
#line 1559 "./xpathp.y"
    { ; }
    break;

  case 372:
#line 1560 "./xpathp.y"
    { ; }
    break;

  case 373:
#line 1561 "./xpathp.y"
    { ; }
    break;

  case 374:
#line 1565 "./xpathp.y"
    { xp_reject_option_if_not_allowed (xpp_arg, XP_XPATH_OPTS); xpp_arg->xpp_xp_env->xe_is_http = 1; }
    break;

  case 375:
#line 1566 "./xpathp.y"
    { xp_reject_option_if_not_allowed (xpp_arg, XP_XPATH_OPTS); xpp_arg->xpp_xp_env->xe_is_for_key = 1; }
    break;

  case 376:
#line 1567 "./xpathp.y"
    { xp_reject_option_if_not_allowed (xpp_arg, XP_XPATH_OPTS); xpp_arg->xpp_xp_env->xe_is_for_attrs = 1; }
    break;

  case 377:
#line 1568 "./xpathp.y"
    { xp_reject_option_if_not_allowed (xpp_arg, XP_XPATH_OPTS); xpp_arg->xpp_xp_env->xe_is_sax = 1; }
    break;

  case 378:
#line 1569 "./xpathp.y"
    { xp_reject_option_if_not_allowed (xpp_arg, XP_XPATH_OPTS); xpp_arg->xpp_xp_env->xe_is_shallow = 1; }
    break;

  case 379:
#line 1570 "./xpathp.y"
    { xp_reject_option_if_not_allowed (xpp_arg, XP_XPATH_OPTS); xpp_arg->xpp_is_quiet = 1; }
    break;

  case 380:
#line 1571 "./xpathp.y"
    { xp_reject_option_if_not_allowed (xpp_arg, XP_XPATH_OPTS); xpp_arg->xpp_is_davprop = 1; }
    break;

  case 381:
#line 1572 "./xpathp.y"
    { xp_reject_option_if_not_allowed (xpp_arg, XP_XPATH_OPTS); xpp_arg->xpp_xp_env->xe_base_uri = box_copy_tree ((yyvsp[(2) - (2)].box)); }
    break;

  case 382:
#line 1573 "./xpathp.y"
    {
#ifdef OLD_VXML_TABLES
	   xp_reject_option_if_not_allowed (xpp_arg, XP_XPATH_OPTS); xpp_arg->xpp_xp_env->xe_doc_spec = box_copy_tree ((yyvsp[(2) - (2)].box));
#else
           xp_error (xpp_arg, "The __doc XPATH option is deprecated after version 2.7 of Virtuoso Universal Server and not available in any version of Virtuoso Open Source");
#endif
	   }
    break;

  case 383:
#line 1580 "./xpathp.y"
    {
		xp_reject_option_if_not_allowed (xpp_arg, XP_XPATH_OPTS);
		if (NULL != xpp_arg->xpp_xp_env->xe_view)
		  xp_error (xpp_arg, "XML view is specified twice by __view option");
		xpp_arg->xpp_xp_env->xe_view = xmls_view_def ((yyvsp[(2) - (2)].box));
		if (NULL == xpp_arg->xpp_xp_env->xe_view)
		  xp_error (xpp_arg, "Nonexistent XML view specified by __view option");
	   }
    break;

  case 384:
#line 1588 "./xpathp.y"
    { xp_reject_option_if_not_allowed (xpp_arg, XP_XPATH_OPTS); xpp_arg->xpp_xp_env->xe_result_tag = box_copy ((yyvsp[(2) - (2)].box)); }
    break;

  case 385:
#line 1589 "./xpathp.y"
    {
		xp_reject_option_if_not_allowed (xpp_arg, XP_XPATH_OPTS);
		if (!strncmp ((yyvsp[(1) - (3)].box), "xmlns:", 6))
		  xp_register_namespace_prefix (xpp_arg, (yyvsp[(1) - (3)].box)+6, (yyvsp[(3) - (3)].box));
		else
		  xpyyerror(xpp_arg, "Only xmlns special namespace may be used in parameter name");
	  }
    break;

  case 386:
#line 1596 "./xpathp.y"
    { XPP_PROLOG_SET (xe_dflt_elt_namespace, "default element namespace", (yyvsp[(3) - (3)].box)); }
    break;

  case 387:
#line 1597 "./xpathp.y"
    { xp_reject_option_if_not_allowed (xpp_arg, XP_FREETEXT_OPTS); xpp_arg->xpp_lang = lh_get_handler ((yyvsp[(2) - (2)].box)); }
    break;

  case 388:
#line 1598 "./xpathp.y"
    { xp_reject_option_if_not_allowed (xpp_arg, XP_FREETEXT_OPTS); xp_set_encoding_option (xpp_arg, (yyvsp[(2) - (2)].box)); }
    break;

  case 389:
#line 1599 "./xpathp.y"
    {
		dk_set_push (&(xpp_arg->xpp_dtd_config_tmp_set), box_dv_short_string ((yyvsp[(1) - (3)].box)));
		dk_set_push (&(xpp_arg->xpp_dtd_config_tmp_set), box_dv_short_string ((yyvsp[(3) - (3)].box)));
	  }
    break;

  case 391:
#line 1608 "./xpathp.y"
    { XBIN_OP ((yyval.tree), BOP_OR, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 392:
#line 1609 "./xpathp.y"
    { XBIN_OP ((yyval.tree), BOP_AND, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 393:
#line 1610 "./xpathp.y"
    { XBIN_OP ((yyval.tree), BOP_NOT, (yyvsp[(2) - (2)].tree), NULL); }
    break;

  case 394:
#line 1611 "./xpathp.y"
    { XBIN_OP ((yyval.tree), BOP_EQ, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 395:
#line 1612 "./xpathp.y"
    { XBIN_OP ((yyval.tree), BOP_NEQ, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 396:
#line 1613 "./xpathp.y"
    { XBIN_OP ((yyval.tree), BOP_LT, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 397:
#line 1614 "./xpathp.y"
    { XBIN_OP ((yyval.tree), BOP_LTE, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 398:
#line 1615 "./xpathp.y"
    { XBIN_OP ((yyval.tree), BOP_GT, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 399:
#line 1616 "./xpathp.y"
    { XBIN_OP ((yyval.tree), BOP_GTE, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 400:
#line 1617 "./xpathp.y"
    { XBIN_OP ((yyval.tree), BOP_LIKE, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 401:
#line 1618 "./xpathp.y"
    { XBIN_OP ((yyval.tree), BOP_MINUS, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 402:
#line 1619 "./xpathp.y"
    { XBIN_OP ((yyval.tree), BOP_PLUS, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 403:
#line 1620 "./xpathp.y"
    { XBIN_OP ((yyval.tree), BOP_TIMES, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 404:
#line 1621 "./xpathp.y"
    { XBIN_OP ((yyval.tree), BOP_DIV, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 405:
#line 1622 "./xpathp.y"
    { XBIN_OP ((yyval.tree), BOP_MOD, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)); }
    break;

  case 406:
#line 1624 "./xpathp.y"
    { (yyval.tree) = xtlist (xpp_arg, 7, XP_UNION,
		    (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree), xe_new_xqst (xpp_arg, XQST_REF),
		    xe_new_xqst (xpp_arg, XQST_REF), xe_new_xqst (xpp_arg, XQST_REF),
		    xe_new_xqst (xpp_arg, XQST_INT) ); }
    break;

  case 407:
#line 1628 "./xpathp.y"
    { XBIN_OP ((yyval.tree), BOP_MINUS, box_num_nonull (0), (yyvsp[(2) - (2)].tree)); }
    break;

  case 410:
#line 1636 "./xpathp.y"
    { (yyval.tree) = xp_make_step (xpp_arg, XP_ROOT, (XT*) XP_NODE, NULL); }
    break;

  case 411:
#line 1641 "./xpathp.y"
    { (yyval.tree) = xp_step (xpp_arg, NULL, (yyvsp[(1) - (1)].tree), XP_BY_MAIN_STEP); }
    break;

  case 412:
#line 1642 "./xpathp.y"
    { (yyval.tree) = xp_step (xpp_arg, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree), XP_BY_MAIN_STEP); }
    break;

  case 413:
#line 1643 "./xpathp.y"
    { (yyval.tree) = xp_step (xpp_arg, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree), XP_SLASH_SLASH); }
    break;

  case 414:
#line 1648 "./xpathp.y"
    { (yyval.tree) = xp_absolute (xpp_arg, (yyvsp[(2) - (2)].tree), XP_ABS_CHILD); }
    break;

  case 415:
#line 1649 "./xpathp.y"
    { (yyval.tree) = xp_absolute (xpp_arg, (yyvsp[(2) - (2)].tree), XP_ABS_SLASH_SLASH); }
    break;

  case 416:
#line 1654 "./xpathp.y"
    { (yyval.tree) = xp_make_step (xpp_arg, (yyvsp[(1) - (3)].token_type), (yyvsp[(2) - (3)].tree), (yyvsp[(3) - (3)].trees)); }
    break;

  case 417:
#line 1655 "./xpathp.y"
    { (yyval.tree) = xp_make_step (xpp_arg, XP_CHILD, (yyvsp[(1) - (2)].tree), (yyvsp[(2) - (2)].trees)); }
    break;

  case 418:
#line 1656 "./xpathp.y"
    { (yyval.tree) = xp_make_step (xpp_arg, XP_SELF, (XT*) XP_NODE, (yyvsp[(2) - (2)].trees)); }
    break;

  case 419:
#line 1657 "./xpathp.y"
    { (yyval.tree) = xp_make_step (xpp_arg, XP_PARENT, (XT*) XP_NODE, (yyvsp[(2) - (2)].trees)); }
    break;

  case 421:
#line 1663 "./xpathp.y"
    { (yyval.token_type) = XP_ATTRIBUTE; }
    break;

  case 422:
#line 1668 "./xpathp.y"
    { (yyval.tree) = xp_make_name_test_from_qname (xpp_arg, (yyvsp[(1) - (1)].box), 0); }
    break;

  case 423:
#line 1669 "./xpathp.y"
    { (yyval.tree) = xp_make_name_test_from_qname (xpp_arg, box_dv_uname_string ("not"), 0); }
    break;

  case 424:
#line 1670 "./xpathp.y"
    { (yyval.tree) = xp_make_name_test_from_qname (xpp_arg, (yyvsp[(1) - (1)].box), 0); }
    break;

  case 425:
#line 1671 "./xpathp.y"
    { (yyval.tree) = xtlist (xpp_arg, 4, XP_NAME_NSURI, xp_namespace_pref (xpp_arg, (yyvsp[(1) - (1)].box)), XP_STAR, NULL); }
    break;

  case 426:
#line 1672 "./xpathp.y"
    { (yyval.tree) = xtlist (xpp_arg, 4, XP_NAME_LOCAL, XP_STAR, box_copy ((yyvsp[(1) - (1)].box)), NULL); }
    break;

  case 427:
#line 1673 "./xpathp.y"
    { (yyval.tree) = (XT *) XP_ELT; }
    break;

  case 428:
#line 1674 "./xpathp.y"
    { (yyval.tree) = xp_make_name_test_from_qname (xpp_arg, (yyvsp[(2) - (3)].box), 0); (yyval.tree)->type = XP_PI; }
    break;

  case 429:
#line 1675 "./xpathp.y"
    { (yyval.tree) = xp_make_name_test_from_qname (xpp_arg, (yyvsp[(2) - (3)].box), 0); (yyval.tree)->type = XP_PI; }
    break;

  case 430:
#line 1676 "./xpathp.y"
    { (yyval.tree) = (XT*) XP_PI; }
    break;

  case 431:
#line 1677 "./xpathp.y"
    { (yyval.tree) = (XT*) XP_COMMENT; }
    break;

  case 432:
#line 1678 "./xpathp.y"
    { (yyval.tree) = (XT*) XP_TEXT; }
    break;

  case 433:
#line 1679 "./xpathp.y"
    { (yyval.tree) = (XT*) XP_NODE; }
    break;

  case 434:
#line 1680 "./xpathp.y"
    { (yyval.tree) = xp_make_name_test_from_qname (xpp_arg, (yyvsp[(1) - (1)].box), 0); }
    break;

  case 435:
#line 1685 "./xpathp.y"
    { (yyval.token_type) = XP_ANCESTOR; }
    break;

  case 436:
#line 1686 "./xpathp.y"
    { (yyval.token_type) = XP_ANCESTOR_OR_SELF; }
    break;

  case 437:
#line 1687 "./xpathp.y"
    { (yyval.token_type) = XP_ATTRIBUTE; }
    break;

  case 438:
#line 1688 "./xpathp.y"
    { (yyval.token_type) = XP_CHILD; }
    break;

  case 439:
#line 1689 "./xpathp.y"
    { (yyval.token_type) = XP_DESCENDANT; }
    break;

  case 440:
#line 1690 "./xpathp.y"
    { (yyval.token_type) = XP_DESCENDANT_OR_SELF; }
    break;

  case 441:
#line 1691 "./xpathp.y"
    { (yyval.token_type) = XP_FOLLOWING; }
    break;

  case 442:
#line 1692 "./xpathp.y"
    { (yyval.token_type) = XP_FOLLOWING_SIBLING; }
    break;

  case 443:
#line 1693 "./xpathp.y"
    { (yyval.token_type) = XP_NAMESPACE; xpyyerror (xpp_arg, "namespace axis not allowed"); }
    break;

  case 444:
#line 1694 "./xpathp.y"
    { (yyval.token_type) = XP_PARENT; }
    break;

  case 445:
#line 1695 "./xpathp.y"
    { (yyval.token_type) = XP_PRECEDING; }
    break;

  case 446:
#line 1696 "./xpathp.y"
    { (yyval.token_type) = XP_PRECEDING_SIBLING; }
    break;

  case 447:
#line 1697 "./xpathp.y"
    { (yyval.token_type) = XP_SELF; }
    break;

  case 448:
#line 1701 "./xpathp.y"
    { (yyval.trees) = NULL; }
    break;

  case 449:
#line 1702 "./xpathp.y"
    { (yyval.trees) = (XT **) list_to_array ((yyvsp[(1) - (1)].list)); }
    break;

  case 450:
#line 1706 "./xpathp.y"
    { xp_pred_start (xpp_arg); }
    break;

  case 451:
#line 1706 "./xpathp.y"
    { (yyval.tree) = xp_make_pred (xpp_arg, (yyvsp[(3) - (4)].tree)); }
    break;

  case 452:
#line 1710 "./xpathp.y"
    { (yyval.list) = CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 453:
#line 1711 "./xpathp.y"
    { (yyval.list) = NCONC ((yyvsp[(1) - (2)].list), CONS ((yyvsp[(2) - (2)].tree), NULL)); }
    break;

  case 454:
#line 1716 "./xpathp.y"
    { (yyval.tree) = xp_make_variable_ref(xpp_arg, (yyvsp[(2) - (2)].box)); }
    break;

  case 455:
#line 1717 "./xpathp.y"
    { (yyval.tree) = xp_make_variable_ref(xpp_arg, (yyvsp[(1) - (1)].box)); }
    break;

  case 457:
#line 1723 "./xpathp.y"
    { (yyval.tree) = (yyvsp[(2) - (3)].tree); }
    break;

  case 459:
#line 1725 "./xpathp.y"
    { (yyval.tree) = xp_make_literal_tree (xpp_arg, (yyvsp[(1) - (1)].box), 1); }
    break;

  case 460:
#line 1731 "./xpathp.y"
    {
		  (yyval.tree) = xp_make_call_or_funcall (xpp_arg, (yyvsp[(1) - (3)].box), list_to_array ((yyvsp[(2) - (3)].list)));
		}
    break;

  case 461:
#line 1735 "./xpathp.y"
    {
		  (yyval.tree) = xp_make_call_or_funcall (xpp_arg, (yyvsp[(1) - (3)].box), list_to_array ((yyvsp[(2) - (3)].list)));
		  (yyval.tree) = xp_make_call (xpp_arg, "not", list(1, (yyval.tree)));
		}
    break;

  case 462:
#line 1742 "./xpathp.y"
    { (yyval.list) = NULL; }
    break;

  case 463:
#line 1743 "./xpathp.y"
    { (yyval.list) = CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 464:
#line 1744 "./xpathp.y"
    { (yyval.list) = NCONC ((yyvsp[(1) - (3)].list), CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 467:
#line 1752 "./xpathp.y"
    { (yyval.tree) = xp_path (xpp_arg, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree), 0); }
    break;

  case 468:
#line 1753 "./xpathp.y"
    { (yyval.tree) = xp_path (xpp_arg, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree), XP_SLASH_SLASH); }
    break;

  case 470:
#line 1759 "./xpathp.y"
    { (yyval.tree) = xp_make_filter (xpp_arg, (yyvsp[(1) - (2)].tree), (yyvsp[(2) - (2)].tree)); }
    break;

  case 476:
#line 1778 "./xpathp.y"
    { (yyval.box) = xp_xml_view_name (xpp_arg, NULL, NULL, (yyvsp[(1) - (1)].box)); }
    break;

  case 477:
#line 1780 "./xpathp.y"
    { (yyval.box) = xp_xml_view_name (xpp_arg, NULL, (yyvsp[(1) - (3)].box), (yyvsp[(3) - (3)].box)); }
    break;

  case 478:
#line 1782 "./xpathp.y"
    { (yyval.box) = xp_xml_view_name (xpp_arg, (yyvsp[(1) - (5)].box), (yyvsp[(3) - (5)].box), (yyvsp[(5) - (5)].box)); }
    break;

  case 479:
#line 1784 "./xpathp.y"
    { /* Note one _DOT_DOT here, not two _DOTs */
		  (yyval.box) = xp_xml_view_name (xpp_arg, (yyvsp[(1) - (3)].box), NULL, (yyvsp[(3) - (3)].box)); }
    break;

  case 480:
#line 1789 "./xpathp.y"
    { (yyval.fts) = xp_word_or_phrase_from_string (xpp_arg, (yyvsp[(1) - (1)].box), xpp_arg->xpp_enc, xpp_arg->xpp_lang, 1); }
    break;

  case 481:
#line 1790 "./xpathp.y"
    { (yyval.fts) = xp_word_or_phrase_from_string (xpp_arg, (yyvsp[(1) - (1)].box), xpp_arg->xpp_enc, xpp_arg->xpp_lang, 1); }
    break;

  case 482:
#line 1791 "./xpathp.y"
    { (yyval.fts) = xp_word_from_exact_string (xpp_arg, (yyvsp[(2) - (2)].box), xpp_arg->xpp_enc, 1); }
    break;

  case 483:
#line 1792 "./xpathp.y"
    {TBIN_OP ((yyval.fts), BOP_AND, (yyvsp[(1) - (3)].fts), (yyvsp[(3) - (3)].fts)); }
    break;

  case 484:
#line 1793 "./xpathp.y"
    { TBIN_OP ((yyval.fts), XP_AND_NOT, (yyvsp[(1) - (4)].fts), (yyvsp[(4) - (4)].fts)); }
    break;

  case 485:
#line 1794 "./xpathp.y"
    { TBIN_OP ((yyval.fts), BOP_OR, (yyvsp[(1) - (3)].fts), (yyvsp[(3) - (3)].fts)); }
    break;

  case 486:
#line 1795 "./xpathp.y"
    { TBIN_OP ((yyval.fts), XP_NEAR, (yyvsp[(1) - (3)].fts), (yyvsp[(3) - (3)].fts)); }
    break;

  case 487:
#line 1796 "./xpathp.y"
    { (yyval.fts) = (yyvsp[(2) - (3)].fts); }
    break;

  case 488:
#line 1797 "./xpathp.y"
    { (yyval.fts) = (yyvsp[(4) - (5)].fts); }
    break;

  case 489:
#line 1798 "./xpathp.y"
    { xpyyerror (xpp_arg, "']' or option expected"); }
    break;


/* Line 1267 of yacc.c.  */
#line 6152 "xpathp.c"
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
      yyerror (xpp_arg, YY_("syntax error"));
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
	    yyerror (xpp_arg, yymsg);
	  }
	else
	  {
	    yyerror (xpp_arg, YY_("syntax error"));
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
		      yytoken, &yylval, xpp_arg);
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
		  yystos[yystate], yyvsp, xpp_arg);
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
  yyerror (xpp_arg, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, xpp_arg);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, xpp_arg);
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



