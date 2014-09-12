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
/* Line 1529 of yacc.c.  */
#line 431 "sparql_p.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



