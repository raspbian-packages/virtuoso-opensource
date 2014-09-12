/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
/* Line 1529 of yacc.c.  */
#line 527 "xpathp.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



