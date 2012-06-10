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
/* Line 1489 of yacc.c.  */
#line 427 "sparql_p.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



