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
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NAME = 258,
     STRING = 259,
     WSTRING = 260,
     UNAME_LITERAL = 261,
     INTNUM = 262,
     IRI_LIT = 263,
     APPROXNUM = 264,
     NUM_ERROR = 265,
     AMMSC = 266,
     PARAMETER_L = 267,
     NAMED_PARAMETER = 268,
     BEGIN_EQCALL_X = 269,
     HTMLSTR = 270,
     SQL_TSI = 271,
     TIMESTAMP_FUNC = 272,
     BINARYNUM = 273,
     MSSQL_XMLCOL_NAME = 274,
     MSSQL_XMLCOL_NAME1 = 275,
     MSSQL_XMLCOL_NAMEYZ = 276,
     MSSQL_XMLCOL_NAMEZ = 277,
     MSSQL_XMLCOL_INTNUM = 278,
     TYPE = 279,
     FINAL_L = 280,
     METHOD = 281,
     CHECKED = 282,
     SYSTEM = 283,
     GENERATED = 284,
     SOURCE = 285,
     RESULT = 286,
     LOCATOR = 287,
     INSTANCE_L = 288,
     CONSTRUCTOR = 289,
     SELF_L = 290,
     OVERRIDING = 291,
     STYLE = 292,
     SQL_L = 293,
     GENERAL = 294,
     DETERMINISTIC = 295,
     NO_L = 296,
     CONTAINS = 297,
     READS = 298,
     DATA = 299,
     DISABLE_L = 300,
     NOVALIDATE_L = 301,
     ENABLE_L = 302,
     VALIDATE_L = 303,
     MODIFIES = 304,
     INPUT = 305,
     CALLED = 306,
     ADA = 307,
     C = 308,
     COBOL = 309,
     FORTRAN = 310,
     MUMPS = 311,
     PASCAL_L = 312,
     PLI = 313,
     NAME_L = 314,
     TEXT_L = 315,
     JAVA = 316,
     INOUT_L = 317,
     REMOTE = 318,
     KEYSET = 319,
     VALUE = 320,
     PARAMETER = 321,
     VARIABLE = 322,
     ADMIN_L = 323,
     ROLE_L = 324,
     TEMPORARY = 325,
     CLR = 326,
     ATTRIBUTE = 327,
     __SOAP_DOC = 328,
     __SOAP_DOCW = 329,
     __SOAP_HEADER = 330,
     __SOAP_HTTP = 331,
     __SOAP_NAME = 332,
     __SOAP_TYPE = 333,
     __SOAP_XML_TYPE = 334,
     __SOAP_FAULT = 335,
     __SOAP_DIME_ENC = 336,
     __SOAP_ENC_MIME = 337,
     __SOAP_OPTIONS = 338,
     FOREACH = 339,
     POSITION_L = 340,
     ARE = 341,
     REF = 342,
     STATIC_L = 343,
     SPECIFIC = 344,
     DYNAMIC = 345,
     COLUMN = 346,
     START_L = 347,
     __TAG_L = 348,
     RDF_BOX_L = 349,
     VECTOR_L = 350,
     FOR = 351,
     ORDER = 352,
     EXCEPT = 353,
     UNION = 354,
     INTERSECT = 355,
     AS = 356,
     DOUBLE_COLON = 357,
     COLON = 358,
     OR = 359,
     AND = 360,
     NOT = 361,
     COMPARISON = 362,
     EQUALS = 363,
     STRING_CONCAT_OPERATOR = 364,
     UMINUS = 365,
     ALL = 366,
     ANY = 367,
     ATTACH = 368,
     ASC = 369,
     AUTHORIZATION = 370,
     BETWEEN = 371,
     BIGINT = 372,
     BREAKUP = 373,
     BY = 374,
     CASCADE = 375,
     CHARACTER = 376,
     CHECK = 377,
     CLOSE = 378,
     COMMIT = 379,
     CONSTRAINT = 380,
     CONTINUE = 381,
     CREATE = 382,
     CUBE = 383,
     CURRENT = 384,
     CURSOR = 385,
     DECIMAL_L = 386,
     DECLARE = 387,
     DEFAULT = 388,
     DELETE_L = 389,
     DESC = 390,
     DISTINCT = 391,
     DOUBLE_L = 392,
     DROP = 393,
     ESCAPE = 394,
     EXISTS = 395,
     FETCH = 396,
     FLOAT_L = 397,
     FOREIGN = 398,
     FOUND = 399,
     FROM = 400,
     GOTO = 401,
     GO = 402,
     GRANT = 403,
     GROUP = 404,
     GROUPING = 405,
     HAVING = 406,
     IN_L = 407,
     INDEX = 408,
     INDEX_NO_FILL = 409,
     INDEX_ONLY = 410,
     INDICATOR = 411,
     INSERT = 412,
     INTEGER = 413,
     INTO = 414,
     IS = 415,
     KEY = 416,
     LANGUAGE = 417,
     ENCODING = 418,
     LIKE = 419,
     NULLX = 420,
     NUMERIC = 421,
     OF = 422,
     ON = 423,
     OPEN = 424,
     OPTION = 425,
     PRECISION = 426,
     PRIMARY = 427,
     PRIVILEGES = 428,
     PROCEDURE = 429,
     PUBLIC = 430,
     REAL = 431,
     REFERENCES = 432,
     RESTRICT = 433,
     ROLLBACK = 434,
     ROLLUP = 435,
     SCHEMA = 436,
     SELECT = 437,
     SET = 438,
     SMALLINT = 439,
     SOME = 440,
     SQLCODE = 441,
     SQLERROR = 442,
     TABLE = 443,
     TO = 444,
     UNIQUE = 445,
     UPDATE = 446,
     USER = 447,
     VALUES = 448,
     VIEW = 449,
     WHENEVER = 450,
     WHERE = 451,
     WITH = 452,
     WORK = 453,
     WITHOUT_L = 454,
     ARRAY = 455,
     CONTIGUOUS = 456,
     OBJECT_ID = 457,
     BITMAPPED = 458,
     UNDER = 459,
     CLUSTER = 460,
     CLUSTERED = 461,
     VARCHAR = 462,
     VARBINARY = 463,
     BINARY = 464,
     LONG_L = 465,
     REPLACING = 466,
     SOFT = 467,
     HASH = 468,
     LOOP = 469,
     IRI_ID = 470,
     IRI_ID_8 = 471,
     SAME_AS = 472,
     TRANSITIVE = 473,
     QUIETCAST_L = 474,
     SPARQL_L = 475,
     SHUTDOWN = 476,
     CHECKPOINT = 477,
     BACKUP = 478,
     REPLICATION = 479,
     SYNC = 480,
     ALTER = 481,
     ADD = 482,
     RENAME = 483,
     DISCONNECT = 484,
     MODIFY = 485,
     BEFORE = 486,
     AFTER = 487,
     INSTEAD = 488,
     TRIGGER = 489,
     REFERENCING = 490,
     OLD = 491,
     AGGREGATE = 492,
     FUNCTION = 493,
     OUT_L = 494,
     HANDLER = 495,
     IF = 496,
     THEN = 497,
     ELSE = 498,
     ELSEIF = 499,
     WHILE = 500,
     BEGINX = 501,
     ENDX = 502,
     RETURN = 503,
     CALL = 504,
     RETURNS = 505,
     DO = 506,
     EXCLUSIVE = 507,
     PREFETCH = 508,
     SQLSTATE_L = 509,
     SQLWARNING = 510,
     SQLEXCEPTION = 511,
     EXIT = 512,
     RESIGNAL = 513,
     REVOKE = 514,
     PASSWORD = 515,
     OFF = 516,
     LOGX = 517,
     TIMESTAMP = 518,
     DATE_L = 519,
     DATETIME = 520,
     TIME = 521,
     EXECUTE = 522,
     REXECUTE = 523,
     MODULE = 524,
     BEGIN_FN_X = 525,
     BEGIN_CALL_X = 526,
     BEGIN_OJ_X = 527,
     BEGIN_U_X = 528,
     CONVERT = 529,
     CASE = 530,
     WHEN = 531,
     IDENTITY = 532,
     LEFT = 533,
     RIGHT = 534,
     FULL = 535,
     OUTER = 536,
     INNER = 537,
     CROSS = 538,
     NATURAL = 539,
     USING = 540,
     JOIN = 541,
     USE = 542,
     COALESCE = 543,
     CAST = 544,
     NULLIF = 545,
     NEW = 546,
     CORRESPONDING = 547,
     BEST = 548,
     TOP = 549,
     PERCENT = 550,
     TIES = 551,
     XML = 552,
     XPATH = 553,
     PERSISTENT = 554,
     INTERVAL = 555,
     INCREMENT_L = 556,
     COMPRESS = 557,
     PARTITION = 558,
     DTD = 559,
     INTERNAL = 560,
     EXTERNAL = 561,
     COLLATE = 562,
     NCHAR = 563,
     NVARCHAR = 564,
     INCREMENTAL = 565,
     NONINCREMENTAL = 566,
     PURGE = 567,
     SNAPSHOT = 568,
     IDENTIFIED = 569,
     EXTRACT = 570,
     KWD_TAG = 571,
     LEXICAL_ERROR = 572,
     CURRENT_DATE = 573,
     CURRENT_TIME = 574,
     CURRENT_TIMESTAMP = 575,
     PERMISSION_SET = 576,
     AUTOREGISTER_L = 577,
     LIBRARY_L = 578,
     ASSEMBLY_L = 579,
     SAFE_L = 580,
     UNRESTRICTED_L = 581,
     TRANSACTION_L = 582,
     ISOLATION_L = 583,
     LEVEL_L = 584,
     READ_L = 585,
     COMMITTED_L = 586,
     UNCOMMITTED_L = 587,
     REPEATABLE_L = 588,
     SERIALIZABLE_L = 589,
     T_FINAL_AS = 590,
     T_MIN = 591,
     T_MAX = 592,
     T_IN = 593,
     T_OUT = 594,
     T_SHORTEST_ONLY = 595,
     T_DISTINCT = 596,
     T_EXISTS = 597,
     T_NO_ORDER = 598,
     T_NO_CYCLES = 599,
     T_CYCLES_ONLY = 600,
     T_END_FLAG = 601,
     T_DIRECTION = 602,
     WS_WHITESPACE = 603,
     WS_SPARQL_SKIP = 604,
     WS_PRAGMA_LINE = 605,
     WS_PRAGMA_PREFIX_1 = 606,
     WS_PRAGMA_PREFIX_2 = 607,
     WS_PRAGMA_PREFIX_3 = 608,
     WS_PRAGMA_C_ESC = 609,
     WS_PGRAGMA_UTF8_ESC = 610,
     WS_PRAGMA_PL_DEBUG = 611,
     WS_PRAGMA_SRC = 612,
     WS_COMMENT_EOL = 613,
     WS_COMMENT_BEGIN = 614,
     WS_COMMENT_END = 615,
     WS_COMMENT_LONG = 616,
     __COST = 617
   };
#endif
/* Tokens.  */
#define NAME 258
#define STRING 259
#define WSTRING 260
#define UNAME_LITERAL 261
#define INTNUM 262
#define IRI_LIT 263
#define APPROXNUM 264
#define NUM_ERROR 265
#define AMMSC 266
#define PARAMETER_L 267
#define NAMED_PARAMETER 268
#define BEGIN_EQCALL_X 269
#define HTMLSTR 270
#define SQL_TSI 271
#define TIMESTAMP_FUNC 272
#define BINARYNUM 273
#define MSSQL_XMLCOL_NAME 274
#define MSSQL_XMLCOL_NAME1 275
#define MSSQL_XMLCOL_NAMEYZ 276
#define MSSQL_XMLCOL_NAMEZ 277
#define MSSQL_XMLCOL_INTNUM 278
#define TYPE 279
#define FINAL_L 280
#define METHOD 281
#define CHECKED 282
#define SYSTEM 283
#define GENERATED 284
#define SOURCE 285
#define RESULT 286
#define LOCATOR 287
#define INSTANCE_L 288
#define CONSTRUCTOR 289
#define SELF_L 290
#define OVERRIDING 291
#define STYLE 292
#define SQL_L 293
#define GENERAL 294
#define DETERMINISTIC 295
#define NO_L 296
#define CONTAINS 297
#define READS 298
#define DATA 299
#define DISABLE_L 300
#define NOVALIDATE_L 301
#define ENABLE_L 302
#define VALIDATE_L 303
#define MODIFIES 304
#define INPUT 305
#define CALLED 306
#define ADA 307
#define C 308
#define COBOL 309
#define FORTRAN 310
#define MUMPS 311
#define PASCAL_L 312
#define PLI 313
#define NAME_L 314
#define TEXT_L 315
#define JAVA 316
#define INOUT_L 317
#define REMOTE 318
#define KEYSET 319
#define VALUE 320
#define PARAMETER 321
#define VARIABLE 322
#define ADMIN_L 323
#define ROLE_L 324
#define TEMPORARY 325
#define CLR 326
#define ATTRIBUTE 327
#define __SOAP_DOC 328
#define __SOAP_DOCW 329
#define __SOAP_HEADER 330
#define __SOAP_HTTP 331
#define __SOAP_NAME 332
#define __SOAP_TYPE 333
#define __SOAP_XML_TYPE 334
#define __SOAP_FAULT 335
#define __SOAP_DIME_ENC 336
#define __SOAP_ENC_MIME 337
#define __SOAP_OPTIONS 338
#define FOREACH 339
#define POSITION_L 340
#define ARE 341
#define REF 342
#define STATIC_L 343
#define SPECIFIC 344
#define DYNAMIC 345
#define COLUMN 346
#define START_L 347
#define __TAG_L 348
#define RDF_BOX_L 349
#define VECTOR_L 350
#define FOR 351
#define ORDER 352
#define EXCEPT 353
#define UNION 354
#define INTERSECT 355
#define AS 356
#define DOUBLE_COLON 357
#define COLON 358
#define OR 359
#define AND 360
#define NOT 361
#define COMPARISON 362
#define EQUALS 363
#define STRING_CONCAT_OPERATOR 364
#define UMINUS 365
#define ALL 366
#define ANY 367
#define ATTACH 368
#define ASC 369
#define AUTHORIZATION 370
#define BETWEEN 371
#define BIGINT 372
#define BREAKUP 373
#define BY 374
#define CASCADE 375
#define CHARACTER 376
#define CHECK 377
#define CLOSE 378
#define COMMIT 379
#define CONSTRAINT 380
#define CONTINUE 381
#define CREATE 382
#define CUBE 383
#define CURRENT 384
#define CURSOR 385
#define DECIMAL_L 386
#define DECLARE 387
#define DEFAULT 388
#define DELETE_L 389
#define DESC 390
#define DISTINCT 391
#define DOUBLE_L 392
#define DROP 393
#define ESCAPE 394
#define EXISTS 395
#define FETCH 396
#define FLOAT_L 397
#define FOREIGN 398
#define FOUND 399
#define FROM 400
#define GOTO 401
#define GO 402
#define GRANT 403
#define GROUP 404
#define GROUPING 405
#define HAVING 406
#define IN_L 407
#define INDEX 408
#define INDEX_NO_FILL 409
#define INDEX_ONLY 410
#define INDICATOR 411
#define INSERT 412
#define INTEGER 413
#define INTO 414
#define IS 415
#define KEY 416
#define LANGUAGE 417
#define ENCODING 418
#define LIKE 419
#define NULLX 420
#define NUMERIC 421
#define OF 422
#define ON 423
#define OPEN 424
#define OPTION 425
#define PRECISION 426
#define PRIMARY 427
#define PRIVILEGES 428
#define PROCEDURE 429
#define PUBLIC 430
#define REAL 431
#define REFERENCES 432
#define RESTRICT 433
#define ROLLBACK 434
#define ROLLUP 435
#define SCHEMA 436
#define SELECT 437
#define SET 438
#define SMALLINT 439
#define SOME 440
#define SQLCODE 441
#define SQLERROR 442
#define TABLE 443
#define TO 444
#define UNIQUE 445
#define UPDATE 446
#define USER 447
#define VALUES 448
#define VIEW 449
#define WHENEVER 450
#define WHERE 451
#define WITH 452
#define WORK 453
#define WITHOUT_L 454
#define ARRAY 455
#define CONTIGUOUS 456
#define OBJECT_ID 457
#define BITMAPPED 458
#define UNDER 459
#define CLUSTER 460
#define CLUSTERED 461
#define VARCHAR 462
#define VARBINARY 463
#define BINARY 464
#define LONG_L 465
#define REPLACING 466
#define SOFT 467
#define HASH 468
#define LOOP 469
#define IRI_ID 470
#define IRI_ID_8 471
#define SAME_AS 472
#define TRANSITIVE 473
#define QUIETCAST_L 474
#define SPARQL_L 475
#define SHUTDOWN 476
#define CHECKPOINT 477
#define BACKUP 478
#define REPLICATION 479
#define SYNC 480
#define ALTER 481
#define ADD 482
#define RENAME 483
#define DISCONNECT 484
#define MODIFY 485
#define BEFORE 486
#define AFTER 487
#define INSTEAD 488
#define TRIGGER 489
#define REFERENCING 490
#define OLD 491
#define AGGREGATE 492
#define FUNCTION 493
#define OUT_L 494
#define HANDLER 495
#define IF 496
#define THEN 497
#define ELSE 498
#define ELSEIF 499
#define WHILE 500
#define BEGINX 501
#define ENDX 502
#define RETURN 503
#define CALL 504
#define RETURNS 505
#define DO 506
#define EXCLUSIVE 507
#define PREFETCH 508
#define SQLSTATE_L 509
#define SQLWARNING 510
#define SQLEXCEPTION 511
#define EXIT 512
#define RESIGNAL 513
#define REVOKE 514
#define PASSWORD 515
#define OFF 516
#define LOGX 517
#define TIMESTAMP 518
#define DATE_L 519
#define DATETIME 520
#define TIME 521
#define EXECUTE 522
#define REXECUTE 523
#define MODULE 524
#define BEGIN_FN_X 525
#define BEGIN_CALL_X 526
#define BEGIN_OJ_X 527
#define BEGIN_U_X 528
#define CONVERT 529
#define CASE 530
#define WHEN 531
#define IDENTITY 532
#define LEFT 533
#define RIGHT 534
#define FULL 535
#define OUTER 536
#define INNER 537
#define CROSS 538
#define NATURAL 539
#define USING 540
#define JOIN 541
#define USE 542
#define COALESCE 543
#define CAST 544
#define NULLIF 545
#define NEW 546
#define CORRESPONDING 547
#define BEST 548
#define TOP 549
#define PERCENT 550
#define TIES 551
#define XML 552
#define XPATH 553
#define PERSISTENT 554
#define INTERVAL 555
#define INCREMENT_L 556
#define COMPRESS 557
#define PARTITION 558
#define DTD 559
#define INTERNAL 560
#define EXTERNAL 561
#define COLLATE 562
#define NCHAR 563
#define NVARCHAR 564
#define INCREMENTAL 565
#define NONINCREMENTAL 566
#define PURGE 567
#define SNAPSHOT 568
#define IDENTIFIED 569
#define EXTRACT 570
#define KWD_TAG 571
#define LEXICAL_ERROR 572
#define CURRENT_DATE 573
#define CURRENT_TIME 574
#define CURRENT_TIMESTAMP 575
#define PERMISSION_SET 576
#define AUTOREGISTER_L 577
#define LIBRARY_L 578
#define ASSEMBLY_L 579
#define SAFE_L 580
#define UNRESTRICTED_L 581
#define TRANSACTION_L 582
#define ISOLATION_L 583
#define LEVEL_L 584
#define READ_L 585
#define COMMITTED_L 586
#define UNCOMMITTED_L 587
#define REPEATABLE_L 588
#define SERIALIZABLE_L 589
#define T_FINAL_AS 590
#define T_MIN 591
#define T_MAX 592
#define T_IN 593
#define T_OUT 594
#define T_SHORTEST_ONLY 595
#define T_DISTINCT 596
#define T_EXISTS 597
#define T_NO_ORDER 598
#define T_NO_CYCLES 599
#define T_CYCLES_ONLY 600
#define T_END_FLAG 601
#define T_DIRECTION 602
#define WS_WHITESPACE 603
#define WS_SPARQL_SKIP 604
#define WS_PRAGMA_LINE 605
#define WS_PRAGMA_PREFIX_1 606
#define WS_PRAGMA_PREFIX_2 607
#define WS_PRAGMA_PREFIX_3 608
#define WS_PRAGMA_C_ESC 609
#define WS_PGRAGMA_UTF8_ESC 610
#define WS_PRAGMA_PL_DEBUG 611
#define WS_PRAGMA_SRC 612
#define WS_COMMENT_EOL 613
#define WS_COMMENT_BEGIN 614
#define WS_COMMENT_END 615
#define WS_COMMENT_LONG 616
#define __COST 617




/* Copy the first part of user declarations.  */
#line 30 "./sql3.y"


#include "libutil.h"
#include "sqlnode.h"
#include "sqlpar.h"
#include "sqlpfn.h"
#include "crsr.h"
#include "sqltype.h"
#include "sqlbif.h"
#include "soap.h" /* a SOAP related constants */
#include "subseq.h"
#include "sqlcmps.h"
#include "sqlcstate.h"

/* We are a little bit lazy here. Instead of converting NAME tokens
   like d and ts to stringdate, and t to stringtime, and maybe the
   rest to "unimplemented_odbc_brace_escape_keyword:%s"
   we just let them be as they are, and define aliases   d   and   ts
   for   stringdate    and   t    for   stringtime   in sqlbif.c.
   In effect, syntax like {any-name any-single-atom} in the place
   of atom will be converted to function call any-name(any-single-atom)
   Having funny one- or two-character bif-function names like d or ts
   does not make any of them reserved keywords, and they can be used
   to one's heart's contents as the names of tables, columns, etc.
 */
#define obe_keyword_to_bif_fun_name(X) ((X))

#ifdef DEBUG
#define yyerror(strg) yyerror_1(yystate, yyssa, yyssp, strg)
#define yyfatalerror(strg) yyfatalerror_1(yystate, yyssa, yyssp, strg)
#endif

#define assert_ms_compat(text)




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
#line 68 "./sql3.y"
{
  long intval;
  char *strval;
  sql_tree_t *tree;
  caddr_t box;
  dk_set_t list;
  long subtok;
  sqlp_join_t join;
}
/* Line 193 of yacc.c.  */
#line 867 "sql3.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 880 "sql3.c"

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
#define YYFINAL  337
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   22097

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  374
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  402
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1270
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2459

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   617

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     368,   369,   112,   110,   370,   111,   371,   113,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   367,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   372,     2,   373,     2,     2,     2,     2,     2,     2,
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
     105,   106,   107,   108,   109,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    37,    40,
      42,    44,    46,    48,    50,    52,    54,    56,    58,    60,
      62,    64,    66,    68,    70,    72,    74,    76,    78,    80,
      82,    84,    86,    88,    90,    92,    94,    96,    98,   100,
     102,   104,   106,   108,   110,   112,   114,   116,   118,   120,
     122,   124,   126,   128,   130,   132,   134,   136,   138,   140,
     142,   144,   146,   148,   150,   152,   154,   156,   158,   160,
     162,   164,   166,   168,   170,   172,   174,   176,   178,   180,
     182,   184,   186,   188,   190,   192,   194,   196,   198,   200,
     202,   204,   206,   208,   210,   212,   214,   216,   218,   220,
     222,   224,   226,   228,   230,   232,   234,   236,   238,   240,
     241,   244,   247,   248,   250,   253,   261,   268,   270,   274,
     276,   278,   282,   283,   285,   288,   292,   294,   298,   299,
     301,   303,   306,   309,   310,   313,   316,   319,   322,   328,
     329,   332,   336,   340,   343,   346,   349,   351,   355,   358,
     360,   362,   367,   370,   372,   375,   378,   380,   384,   389,
     393,   395,   401,   409,   412,   420,   428,   434,   440,   447,
     448,   451,   453,   457,   460,   465,   467,   469,   471,   473,
     475,   477,   480,   485,   487,   489,   492,   493,   495,   505,
     518,   523,   524,   526,   530,   534,   535,   537,   539,   543,
     545,   549,   556,   563,   570,   576,   578,   580,   582,   583,
     585,   587,   591,   593,   599,   604,   609,   611,   616,   621,
     622,   628,   641,   642,   646,   647,   651,   652,   656,   662,
     670,   678,   685,   693,   699,   700,   704,   711,   718,   725,
     732,   737,   738,   742,   745,   747,   749,   751,   755,   758,
     760,   762,   765,   768,   770,   774,   776,   778,   783,   787,
     791,   795,   800,   804,   809,   813,   819,   825,   831,   832,
     838,   849,   850,   853,   854,   859,   860,   863,   864,   868,
     870,   872,   874,   880,   887,   888,   892,   894,   898,   901,
     904,   905,   907,   909,   915,   921,   927,   928,   930,   931,
     934,   942,   949,   950,   953,   958,   959,   962,   967,   983,
     984,   987,   988,   992,   999,  1006,  1007,  1009,  1010,  1014,
    1015,  1021,  1022,  1025,  1026,  1029,  1030,  1033,  1035,  1037,
    1039,  1041,  1043,  1045,  1047,  1049,  1051,  1055,  1057,  1059,
    1061,  1063,  1065,  1067,  1069,  1071,  1073,  1075,  1077,  1079,
    1081,  1083,  1085,  1087,  1089,  1092,  1095,  1098,  1107,  1113,
    1118,  1124,  1131,  1133,  1135,  1137,  1138,  1141,  1149,  1154,
    1156,  1158,  1162,  1164,  1166,  1169,  1171,  1173,  1175,  1177,
    1179,  1181,  1184,  1189,  1192,  1196,  1200,  1202,  1205,  1208,
    1211,  1214,  1216,  1220,  1221,  1226,  1227,  1233,  1235,  1238,
    1240,  1244,  1245,  1249,  1253,  1256,  1257,  1260,  1268,  1270,
    1274,  1276,  1280,  1285,  1290,  1292,  1294,  1296,  1298,  1300,
    1302,  1305,  1308,  1311,  1314,  1317,  1319,  1322,  1323,  1327,
    1328,  1330,  1332,  1333,  1336,  1338,  1343,  1350,  1357,  1366,
    1368,  1376,  1386,  1387,  1389,  1393,  1397,  1404,  1406,  1410,
    1412,  1414,  1416,  1417,  1419,  1420,  1422,  1424,  1430,  1437,
    1442,  1448,  1453,  1459,  1461,  1463,  1465,  1468,  1470,  1476,
    1483,  1488,  1494,  1499,  1505,  1507,  1510,  1512,  1517,  1520,
    1526,  1528,  1530,  1531,  1537,  1542,  1547,  1552,  1556,  1562,
    1564,  1567,  1569,  1572,  1577,  1578,  1580,  1588,  1591,  1593,
    1597,  1599,  1603,  1607,  1608,  1610,  1612,  1617,  1623,  1625,
    1632,  1634,  1637,  1641,  1645,  1646,  1649,  1652,  1655,  1657,
    1659,  1660,  1662,  1665,  1667,  1669,  1673,  1677,  1683,  1684,
    1687,  1692,  1695,  1696,  1700,  1707,  1714,  1715,  1718,  1719,
    1722,  1726,  1731,  1735,  1739,  1742,  1746,  1748,  1750,  1752,
    1754,  1756,  1758,  1760,  1762,  1764,  1766,  1770,  1777,  1783,
    1789,  1794,  1795,  1798,  1803,  1808,  1812,  1817,  1821,  1828,
    1834,  1839,  1841,  1843,  1845,  1848,  1850,  1854,  1859,  1863,
    1867,  1871,  1875,  1878,  1881,  1883,  1885,  1887,  1889,  1891,
    1893,  1895,  1897,  1901,  1907,  1909,  1911,  1913,  1915,  1917,
    1919,  1921,  1923,  1925,  1927,  1929,  1931,  1933,  1935,  1937,
    1941,  1947,  1949,  1951,  1953,  1955,  1957,  1959,  1961,  1963,
    1965,  1967,  1969,  1971,  1978,  1979,  1982,  1990,  1994,  1998,
    2003,  2008,  2012,  2015,  2019,  2023,  2026,  2029,  2031,  2034,
    2035,  2037,  2039,  2043,  2049,  2057,  2062,  2069,  2071,  2073,
    2075,  2079,  2085,  2087,  2091,  2095,  2096,  2098,  2100,  2104,
    2108,  2110,  2115,  2124,  2131,  2138,  2145,  2152,  2159,  2168,
    2175,  2179,  2186,  2193,  2204,  2213,  2222,  2230,  2232,  2234,
    2239,  2241,  2246,  2251,  2255,  2262,  2267,  2271,  2273,  2277,
    2279,  2281,  2285,  2289,  2291,  2293,  2295,  2297,  2299,  2304,
    2308,  2310,  2313,  2315,  2318,  2323,  2326,  2331,  2334,  2339,
    2346,  2348,  2351,  2355,  2361,  2367,  2373,  2378,  2380,  2382,
    2384,  2386,  2388,  2390,  2392,  2394,  2398,  2402,  2406,  2410,
    2412,  2414,  2416,  2418,  2421,  2424,  2426,  2429,  2432,  2434,
    2436,  2438,  2442,  2448,  2453,  2455,  2459,  2465,  2470,  2472,
    2476,  2482,  2487,  2489,  2493,  2499,  2504,  2507,  2512,  2516,
    2518,  2522,  2528,  2536,  2543,  2545,  2549,  2555,  2563,  2570,
    2572,  2577,  2584,  2586,  2591,  2598,  2600,  2602,  2604,  2606,
    2611,  2613,  2616,  2619,  2622,  2624,  2629,  2634,  2636,  2638,
    2640,  2642,  2644,  2649,  2651,  2656,  2659,  2661,  2666,  2671,
    2673,  2675,  2677,  2679,  2681,  2686,  2691,  2693,  2698,  2701,
    2703,  2705,  2707,  2709,  2711,  2716,  2721,  2723,  2726,  2729,
    2732,  2734,  2742,  2744,  2746,  2748,  2750,  2752,  2753,  2755,
    2756,  2759,  2762,  2765,  2769,  2772,  2774,  2779,  2783,  2786,
    2789,  2791,  2793,  2795,  2797,  2799,  2801,  2803,  2817,  2818,
    2821,  2822,  2824,  2832,  2842,  2855,  2862,  2865,  2869,  2876,
    2878,  2880,  2881,  2884,  2887,  2891,  2893,  2897,  2902,  2909,
    2916,  2918,  2920,  2922,  2923,  2925,  2926,  2929,  2932,  2935,
    2938,  2941,  2944,  2946,  2950,  2954,  2956,  2958,  2960,  2962,
    2964,  2966,  2968,  2969,  2979,  2983,  2985,  2987,  2989,  2993,
    2998,  3000,  3002,  3004,  3006,  3008,  3010,  3012,  3014,  3016,
    3018,  3020,  3022,  3023,  3024,  3029,  3031,  3034,  3037,  3039,
    3040,  3043,  3046,  3048,  3052,  3054,  3058,  3062,  3066,  3068,
    3069,  3073,  3074,  3077,  3079,  3081,  3083,  3087,  3089,  3093,
    3096,  3099,  3103,  3105,  3107,  3109,  3111,  3113,  3115,  3117,
    3119,  3121,  3124,  3126,  3128,  3130,  3132,  3134,  3136,  3141,
    3147,  3151,  3158,  3160,  3162,  3164,  3168,  3171,  3174,  3177,
    3180,  3183,  3187,  3190,  3193,  3195,  3198,  3200,  3202,  3206,
    3211,  3215,  3220,  3222,  3224,  3231,  3232,  3235,  3241,  3244,
    3246,  3249,  3252,  3255,  3257,  3262,  3266,  3270,  3276,  3279,
    3283,  3286,  3288,  3294,  3296,  3298,  3300,  3302,  3303,  3305,
    3309,  3311,  3313,  3315,  3316,  3318,  3322,  3323,  3325,  3330,
    3340,  3350,  3361,  3362,  3365,  3367,  3369,  3371,  3374,  3376,
    3379,  3381,  3382,  3385,  3387,  3391,  3395,  3399,  3403,  3407,
    3411,  3415,  3416,  3419,  3421,  3425,  3429,  3431,  3435,  3439,
    3440,  3446,  3447,  3452,  3453,  3455,  3464,  3465,  3469,  3471,
    3475,  3477,  3481,  3482,  3484,  3485,  3488,  3489,  3492,  3495,
    3498,  3501,  3504,  3505,  3513,  3515,  3517,  3521,  3523,  3526,
    3527,  3531,  3541,  3546,  3550,  3552,  3556,  3562,  3567,  3569,
    3573,  3579,  3584,  3586,  3590,  3596,  3601,  3602,  3612,  3617,
    3618,  3624,  3630,  3633,  3634,  3637,  3638,  3641,  3645,  3647,
    3651,  3652,  3656,  3663,  3667,  3668,  3671,  3674,  3679,  3684,
    3685,  3689,  3697,  3698,  3703,  3708,  3709,  3712,  3713,  3715,
    3717,  3720,  3722,  3725,  3729,  3735,  3740,  3749,  3758,  3762,
    3764,  3766,  3769,  3770,  3772,  3774,  3778,  3779,  3781,  3783,
    3786,  3790,  3792,  3796,  3801,  3809,  3815,  3819,  3822,  3823,
    3827,  3831,  3838,  3839,  3842,  3843,  3845,  3847,  3850,  3853,
    3857,  3861,  3863,  3866,  3869,  3872,  3876,  3880,  3886,  3891,
    3895,  3900,  3904,  3906,  3908,  3910,  3912,  3914,  3916,  3918,
    3920,  3922,  3924,  3926,  3927,  3930,  3941,  3951,  3958,  3966,
    3973,  3977,  3987,  3996,  4000,  4007,  4012,  4023,  4034,  4043,
    4050,  4063,  4076,  4078,  4082,  4086,  4094,  4102,  4104,  4106,
    4112,  4117,  4121,  4126,  4129,  4133,  4134,  4139,  4144,  4145,
    4148,  4156,  4164,  4168,  4172,  4174,  4179,  4181,  4186,  4188,
    4195,  4203,  4205,  4207,  4211,  4217,  4219,  4223,  4228,  4235,
    4237,  4241,  4242,  4244,  4250,  4253,  4258,  4259,  4263,  4264,
    4267
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     375,     0,    -1,   376,   367,    -1,   376,    -1,   377,    -1,
     378,    -1,   424,    -1,   706,    -1,   420,    -1,   421,    -1,
     419,    -1,   759,    -1,   760,    -1,   761,    -1,   762,    -1,
     379,    -1,   414,    -1,   378,   379,    -1,   378,   414,    -1,
     383,    -1,   407,    -1,   775,    -1,   410,    -1,   408,    -1,
     415,    -1,   429,    -1,   431,    -1,   439,    -1,   440,    -1,
     438,    -1,   441,    -1,   442,    -1,   443,    -1,   712,    -1,
     714,    -1,   755,    -1,   771,    -1,     3,    -1,    24,    -1,
      25,    -1,    26,    -1,    27,    -1,    28,    -1,    29,    -1,
      30,    -1,    31,    -1,    32,    -1,    33,    -1,    34,    -1,
      35,    -1,    36,    -1,    37,    -1,    38,    -1,    39,    -1,
      40,    -1,    41,    -1,    45,    -1,    46,    -1,    48,    -1,
      47,    -1,    42,    -1,    43,    -1,    44,    -1,    49,    -1,
      50,    -1,    51,    -1,    52,    -1,    53,    -1,    54,    -1,
      55,    -1,    56,    -1,    57,    -1,    58,    -1,    59,    -1,
      60,    -1,    61,    -1,    62,    -1,    63,    -1,    64,    -1,
      65,    -1,    66,    -1,    67,    -1,    71,    -1,    70,    -1,
      68,    -1,    73,    -1,    74,    -1,    75,    -1,    76,    -1,
      77,    -1,    78,    -1,    79,    -1,    80,    -1,    81,    -1,
      82,    -1,    83,    -1,    92,    -1,    72,    -1,   272,    -1,
     325,    -1,   326,    -1,   327,    -1,   328,    -1,   329,    -1,
     330,    -1,   305,    -1,    84,    -1,    85,    -1,   331,    -1,
     332,    -1,   333,    -1,   334,    -1,   335,    -1,   336,    -1,
     337,    -1,   338,    -1,    93,    -1,    94,    -1,    95,    -1,
      -1,   201,    44,    -1,   203,    44,    -1,    -1,    91,    -1,
     140,    91,    -1,   131,   192,   603,   368,   384,   369,   382,
      -1,   131,   192,   603,   101,   519,   381,    -1,   385,    -1,
     384,   370,   385,    -1,   386,    -1,   400,    -1,   611,   610,
     394,    -1,    -1,   388,    -1,   388,   388,    -1,   172,   195,
     391,    -1,   389,    -1,   172,   138,   391,    -1,    -1,   389,
      -1,   124,    -1,   187,   169,    -1,   187,   137,    -1,    -1,
      47,    48,    -1,    47,    46,    -1,    45,    48,    -1,    45,
      46,    -1,   181,   600,   427,   387,   392,    -1,    -1,   394,
     398,    -1,    92,   201,   599,    -1,   305,   123,     7,    -1,
      41,   306,    -1,   306,   116,    -1,   306,    60,    -1,   395,
      -1,   397,   370,   395,    -1,   106,   169,    -1,   169,    -1,
     281,    -1,   281,   368,   397,   369,    -1,   176,   165,    -1,
     396,    -1,   137,   599,    -1,   311,   600,    -1,   393,    -1,
     318,   123,   611,    -1,   126,   368,   553,   369,    -1,   201,
     185,   399,    -1,   194,    -1,   368,     4,   370,     4,   369,
      -1,   368,     4,   370,     4,   370,     4,   369,    -1,   208,
     600,    -1,   401,   176,   165,   368,   403,   369,   406,    -1,
     401,   147,   165,   368,   402,   369,   393,    -1,   401,   126,
     368,   553,   369,    -1,   401,   194,   368,   402,   369,    -1,
     401,   153,   406,   368,   403,   369,    -1,    -1,   129,   380,
      -1,   611,    -1,   402,   370,   611,    -1,   611,   455,    -1,
     403,   370,   611,   455,    -1,   210,    -1,   194,    -1,   206,
      -1,   207,    -1,   140,    -1,    91,    -1,   106,   169,    -1,
      41,   176,   165,    87,    -1,   158,    -1,   404,    -1,   405,
     404,    -1,    -1,   405,    -1,   131,   406,   157,   612,   172,
     600,   368,   403,   369,    -1,   131,   406,   157,   612,   172,
     600,   368,   403,   369,   307,   774,   773,    -1,   142,   157,
     380,   409,    -1,    -1,   600,    -1,   142,   192,   600,    -1,
     142,   198,   600,    -1,    -1,    91,    -1,   386,    -1,   412,
     370,   386,    -1,   611,    -1,   413,   370,   611,    -1,   230,
     192,   600,   231,   411,   412,    -1,   230,   192,   600,   142,
     411,   413,    -1,   230,   192,   600,   234,   411,   386,    -1,
     230,   192,   600,   232,   603,    -1,   231,    -1,   142,    -1,
     234,    -1,    -1,   124,    -1,   182,    -1,   129,   380,   417,
      -1,   400,    -1,   230,   192,   600,   416,   418,    -1,   131,
     301,   185,     4,    -1,   142,   301,   185,     4,    -1,   519,
      -1,   427,   101,   422,   426,    -1,   427,   101,   224,   518,
      -1,    -1,   131,   198,   603,   425,   423,    -1,   131,   178,
     198,   603,   101,   600,   368,   540,   369,   368,   538,   369,
      -1,    -1,   201,   126,   174,    -1,    -1,   368,   402,   369,
      -1,    -1,   368,   402,   369,    -1,   152,   115,   177,   193,
     437,    -1,   152,   433,   172,   604,   193,   436,   432,    -1,
     152,   271,   172,   578,   193,   436,   432,    -1,   152,   272,
     172,     4,   193,   436,    -1,   152,   208,   172,   710,   193,
     436,   432,    -1,   152,   436,   193,   436,   430,    -1,    -1,
     201,    68,   174,    -1,   263,   433,   172,   604,   149,   436,
      -1,   263,   271,   172,   578,   149,   436,    -1,   263,   208,
     172,   710,   149,   436,    -1,   263,   272,   172,     4,   149,
     436,    -1,   263,   436,   149,   436,    -1,    -1,   201,   152,
     174,    -1,   115,   177,    -1,   115,    -1,   434,    -1,   435,
      -1,   434,   370,   435,    -1,   186,   428,    -1,   161,    -1,
     138,    -1,   195,   428,    -1,   181,   428,    -1,   437,    -1,
     436,   370,   437,    -1,   179,    -1,   615,    -1,   187,   264,
     380,   380,    -1,   131,   196,   615,    -1,   131,    69,   615,
      -1,   138,   196,   615,    -1,   138,   196,   615,   124,    -1,
     142,   196,   615,    -1,   142,   196,   615,   124,    -1,   142,
      69,   615,    -1,   187,   196,   153,   615,   615,    -1,   231,
     196,   153,   615,   615,    -1,   138,   196,   153,   615,   615,
      -1,    -1,   176,   165,   368,   402,   369,    -1,   117,   192,
     601,   444,   446,   149,   598,   447,   448,   449,    -1,    -1,
     101,   603,    -1,    -1,   196,   567,   264,   567,    -1,    -1,
     106,   186,    -1,    -1,    63,   101,   567,    -1,    88,    -1,
      90,    -1,    64,    -1,   136,   380,   134,    96,   519,    -1,
     136,   380,   450,   134,    96,   519,    -1,    -1,    97,   123,
     453,    -1,   454,    -1,   453,   370,   454,    -1,   567,   455,
      -1,   573,   455,    -1,    -1,   118,    -1,   139,    -1,   131,
     317,   266,    96,   600,    -1,   142,   317,   266,    96,   600,
      -1,   316,   317,   266,    96,   600,    -1,    -1,     4,    -1,
      -1,   200,     4,    -1,   131,   317,   600,   149,   600,   459,
     460,    -1,   131,   315,   317,   600,   101,     4,    -1,    -1,
     201,   138,    -1,   142,   317,   600,   462,    -1,    -1,   101,
     315,    -1,   195,   317,   600,   464,    -1,   131,    60,   471,
     157,   172,   600,   368,   611,   369,   472,   476,   473,   467,
     474,   475,    -1,    -1,   289,   242,    -1,    -1,   368,   611,
     369,    -1,   131,    60,   238,   172,   600,   468,    -1,   142,
      60,   238,   172,   600,   468,    -1,    -1,   301,    -1,    -1,
     201,   165,   611,    -1,    -1,   210,   201,   368,   402,   369,
      -1,    -1,   166,     4,    -1,    -1,   167,     4,    -1,    -1,
     106,   161,    -1,   477,    -1,   520,    -1,   510,    -1,   513,
      -1,   486,    -1,   481,    -1,   482,    -1,   665,    -1,   746,
      -1,    26,   253,   746,    -1,   750,    -1,   667,    -1,   707,
      -1,   480,    -1,   498,    -1,   618,    -1,   478,    -1,   445,
      -1,   456,    -1,   457,    -1,   458,    -1,   461,    -1,   463,
      -1,   465,    -1,   466,    -1,   469,    -1,   470,    -1,   291,
     380,    -1,   127,   613,    -1,   128,   202,    -1,   138,   149,
     604,   200,   133,   171,   613,   492,    -1,   138,   149,   604,
     516,   492,    -1,   145,   613,   163,   514,    -1,   145,   613,
       3,   163,   514,    -1,   145,   613,     3,   567,   163,   514,
      -1,   163,    -1,   215,    -1,   216,    -1,    -1,   157,     3,
      -1,   161,   484,   604,   485,   492,   428,   487,    -1,   197,
     368,   488,   369,    -1,   529,    -1,   489,    -1,   488,   370,
     489,    -1,   567,    -1,    97,    -1,   116,    97,    -1,   223,
      -1,   221,    -1,   204,    -1,   217,    -1,   100,    -1,   218,
      -1,   218,   144,    -1,   255,   106,   218,   144,    -1,   157,
     380,    -1,   157,   176,   165,    -1,   157,    60,   165,    -1,
     159,    -1,   201,     4,    -1,    41,   209,    -1,   163,   567,
      -1,     3,     7,    -1,   490,    -1,   491,   370,   490,    -1,
      -1,   174,   368,   491,   369,    -1,    -1,   192,   174,   368,
     491,   369,    -1,   256,    -1,   257,     7,    -1,   494,    -1,
     495,   370,   494,    -1,    -1,   368,   495,   369,    -1,   173,
     613,   496,    -1,   183,   202,    -1,    -1,   201,   496,    -1,
     186,   509,   532,   163,   514,   535,   499,    -1,     7,    -1,
     501,   370,     7,    -1,     7,    -1,   368,   501,   369,    -1,
     340,   368,   567,   369,    -1,   341,   368,   567,   369,    -1,
     345,    -1,   346,    -1,   348,    -1,   349,    -1,   347,    -1,
     344,    -1,   342,   502,    -1,   343,   502,    -1,   350,     7,
      -1,   339,     3,    -1,   351,     7,    -1,   503,    -1,   504,
     503,    -1,    -1,   222,   506,   504,    -1,    -1,   115,    -1,
     140,    -1,    -1,   201,   300,    -1,   507,    -1,   507,   298,
       7,   508,    -1,   507,   298,   368,   567,   369,   508,    -1,
     507,   298,     7,   370,     7,   508,    -1,   507,   298,   368,
     567,   370,   567,   369,   508,    -1,   505,    -1,   507,   298,
       7,   370,   111,     7,   508,    -1,   195,   604,   187,   511,
     200,   133,   171,   613,   492,    -1,    -1,   512,    -1,   511,
     370,   512,    -1,   611,   107,   567,    -1,   195,   604,   187,
     511,   516,   492,    -1,   515,    -1,   514,   370,   515,    -1,
     605,    -1,   751,    -1,   576,    -1,    -1,   549,    -1,    -1,
     297,    -1,   523,    -1,   521,   517,    99,   526,   525,    -1,
     521,   517,    99,   115,   526,   525,    -1,   521,   100,   526,
     525,    -1,   521,   100,   115,   526,   525,    -1,   521,    98,
     526,   525,    -1,   521,    98,   115,   526,   525,    -1,   518,
      -1,   524,    -1,   518,    -1,   224,   518,    -1,   522,    -1,
     521,   517,    99,   526,   522,    -1,   521,   517,    99,   115,
     526,   522,    -1,   521,   100,   526,   522,    -1,   521,   100,
     115,   526,   522,    -1,   521,    98,   526,   522,    -1,   521,
      98,   115,   526,   522,    -1,   527,    -1,   302,     4,    -1,
     528,    -1,   368,   520,   369,   452,    -1,   302,     4,    -1,
     368,   224,   518,   369,   452,    -1,   523,    -1,   524,    -1,
      -1,   296,   123,   368,   402,   369,    -1,   186,   509,   532,
     533,    -1,   186,   509,   532,   534,    -1,   186,   509,   532,
     535,    -1,   368,   585,   369,    -1,   368,   585,   200,   553,
     369,    -1,   530,    -1,   531,   530,    -1,   585,    -1,   122,
     531,    -1,   536,   516,   550,   551,    -1,    -1,   535,    -1,
     536,   516,   550,   551,   452,   552,   492,    -1,   149,   537,
      -1,   541,    -1,   537,   370,   541,    -1,   386,    -1,   538,
     370,   386,    -1,   368,   538,   369,    -1,    -1,   402,    -1,
     604,    -1,   368,   520,   369,   380,    -1,   368,   520,   369,
     101,   380,    -1,   546,    -1,   600,   368,   540,   369,   539,
     380,    -1,   604,    -1,   566,   380,    -1,   566,   101,   380,
      -1,   368,   546,   369,    -1,    -1,   282,   544,    -1,   283,
     544,    -1,   284,   544,    -1,   286,    -1,   287,    -1,    -1,
     285,    -1,   288,   543,    -1,   543,    -1,   547,    -1,   276,
     547,   251,    -1,   368,   547,   369,    -1,   541,   545,   290,
     542,   548,    -1,    -1,   172,   553,    -1,   289,   368,   402,
     369,    -1,   200,   553,    -1,    -1,   153,   123,   453,    -1,
     153,   123,   184,   368,   453,   369,    -1,   153,   123,   132,
     368,   453,   369,    -1,    -1,   155,   553,    -1,    -1,    96,
     195,    -1,    96,   301,     3,    -1,    96,   301,     3,     3,
      -1,   553,   104,   553,    -1,   553,   105,   553,    -1,   106,
     553,    -1,   368,   553,   369,    -1,   554,    -1,   556,    -1,
     557,    -1,   558,    -1,   560,    -1,   561,    -1,   562,    -1,
     564,    -1,   555,    -1,   567,    -1,   567,   107,   567,    -1,
     567,   106,   120,   567,   105,   567,    -1,   567,   120,   567,
     105,   567,    -1,   567,   106,   168,   567,   559,    -1,   567,
     168,   567,   559,    -1,    -1,   143,   587,    -1,   250,   143,
     587,   251,    -1,   567,   164,   106,   169,    -1,   567,   164,
     169,    -1,   567,   106,   156,   566,    -1,   567,   156,   566,
      -1,   567,   106,   156,   368,   584,   369,    -1,   567,   156,
     368,   584,   369,    -1,   567,   107,   563,   566,    -1,   116,
      -1,   115,    -1,   189,    -1,   144,   566,    -1,   566,    -1,
     368,   518,   369,    -1,   368,   224,   518,   369,    -1,   567,
     111,   567,    -1,   567,   110,   567,    -1,   567,   112,   567,
      -1,   567,   113,   567,    -1,   110,   567,    -1,   111,   567,
      -1,   660,    -1,   708,    -1,   605,    -1,   568,    -1,   583,
      -1,   586,    -1,   597,    -1,   565,    -1,   368,   567,   369,
      -1,   368,   567,   370,   584,   369,    -1,   582,    -1,   754,
      -1,   570,    -1,   572,    -1,   588,    -1,   589,    -1,   594,
      -1,   595,    -1,   575,    -1,   746,    -1,   749,    -1,   751,
      -1,   586,    -1,   597,    -1,   565,    -1,   368,   567,   369,
      -1,   368,   567,   370,   584,   369,    -1,   582,    -1,   754,
      -1,   570,    -1,   572,    -1,   588,    -1,   589,    -1,   594,
      -1,   595,    -1,   575,    -1,   746,    -1,   749,    -1,   752,
      -1,   278,   368,   607,   370,   567,   369,    -1,    -1,   311,
     600,    -1,   293,   368,   567,   101,   607,   571,   369,    -1,
      20,    23,    22,    -1,    20,    23,    21,    -1,    20,    23,
      19,    22,    -1,   567,   101,   380,   607,    -1,   567,   101,
     380,    -1,   567,   380,    -1,   567,   101,   573,    -1,   567,
     101,     4,    -1,   567,     4,    -1,   568,   661,    -1,   576,
      -1,   605,   661,    -1,    -1,   584,    -1,   380,    -1,   380,
     371,   753,    -1,   380,   371,   380,   371,   753,    -1,   380,
     371,   380,   371,   380,   371,   753,    -1,   380,   371,   371,
     753,    -1,   380,   371,   371,   380,   371,   753,    -1,   282,
      -1,   283,    -1,   266,    -1,   380,   320,   567,    -1,   579,
     370,   380,   320,   567,    -1,   574,    -1,   580,   370,   574,
      -1,   580,   370,   567,    -1,    -1,   579,    -1,   584,    -1,
     584,   370,   579,    -1,   584,   370,   580,    -1,   580,    -1,
     578,   368,   581,   369,    -1,    17,   368,    16,   370,   567,
     370,   567,   369,    -1,   319,   368,     3,   149,   567,   369,
      -1,   274,   380,   368,   577,   369,   251,    -1,   274,   282,
     368,   577,   369,   251,    -1,   274,   283,   368,   577,   369,
     251,    -1,   274,   266,   368,   577,   369,   251,    -1,   274,
     380,   368,   567,   156,   567,   369,   251,    -1,   275,   578,
     368,   577,   369,   251,    -1,   275,   578,   251,    -1,   274,
     196,   368,   577,   369,   251,    -1,   274,   125,   368,   577,
     369,   251,    -1,   274,    17,   368,    16,   370,   567,   370,
     567,   369,   251,    -1,   274,   278,   368,   567,   370,     3,
     369,   251,    -1,   274,   319,   368,     3,   149,   567,   369,
     251,    -1,   253,   368,   567,   369,   368,   581,   369,    -1,
     322,    -1,   323,    -1,   323,   368,   567,   369,    -1,   324,
      -1,   324,   368,   567,   369,    -1,   154,   368,   605,   369,
      -1,    14,   600,   251,    -1,    14,   600,   368,   577,   369,
     251,    -1,   250,   380,   587,   251,    -1,   277,     4,   251,
      -1,   567,    -1,   584,   370,   567,    -1,   567,    -1,   574,
      -1,   585,   370,   567,    -1,   585,   370,   574,    -1,   596,
      -1,   598,    -1,   196,    -1,   586,    -1,   583,    -1,   279,
     567,   591,   251,    -1,   279,   590,   251,    -1,   593,    -1,
     590,   593,    -1,   592,    -1,   591,   592,    -1,   280,   567,
     246,   567,    -1,   247,   567,    -1,   280,   553,   246,   567,
      -1,   247,   567,    -1,   292,   368,   584,   369,    -1,   294,
     368,   567,   370,   567,   369,    -1,   614,    -1,   614,   614,
      -1,   614,   160,   614,    -1,   241,   578,   368,   581,   369,
      -1,    11,   368,   140,   567,   369,    -1,    11,   368,   115,
     567,   369,    -1,    11,   368,   567,   369,    -1,     4,    -1,
       5,    -1,     6,    -1,     7,    -1,     9,    -1,    18,    -1,
       8,    -1,   169,    -1,    93,   171,   607,    -1,    93,   171,
     301,    -1,    93,   171,    94,    -1,    93,   171,    95,    -1,
       4,    -1,     5,    -1,     6,    -1,     7,    -1,   111,     7,
      -1,   110,     7,    -1,     9,    -1,   111,     9,    -1,   110,
       9,    -1,    18,    -1,   169,    -1,   380,    -1,   380,   371,
     380,    -1,   380,   371,   380,   371,   380,    -1,   380,   371,
     371,   380,    -1,   380,    -1,   380,   371,   380,    -1,   380,
     371,   380,   371,   380,    -1,   380,   371,   371,   380,    -1,
     380,    -1,   380,   371,   380,    -1,   380,   371,   380,   371,
     380,    -1,   380,   371,   371,   380,    -1,   380,    -1,   380,
     371,   380,    -1,   380,   371,   380,   371,   380,    -1,   380,
     371,   371,   380,    -1,   600,   493,    -1,   600,   101,   380,
     493,    -1,   600,   380,   493,    -1,   380,    -1,   380,   371,
     380,    -1,   380,   371,   380,   371,   380,    -1,   380,   371,
     380,   371,   380,   371,   380,    -1,   380,   371,   371,   380,
     371,   380,    -1,   112,    -1,   380,   371,   112,    -1,   380,
     371,   380,   371,   112,    -1,   380,   371,   380,   371,   380,
     371,   112,    -1,   380,   371,   371,   380,   371,   112,    -1,
     170,    -1,   170,   368,     7,   369,    -1,   170,   368,     7,
     370,     7,   369,    -1,   135,    -1,   135,   368,     7,   369,
      -1,   135,   368,     7,   370,     7,   369,    -1,   162,    -1,
     188,    -1,   121,    -1,   146,    -1,   146,   368,     7,   369,
      -1,   180,    -1,   141,   175,    -1,   214,   211,    -1,   214,
     212,    -1,   212,    -1,   212,   368,     7,   369,    -1,   213,
     368,     7,   369,    -1,   267,    -1,   269,    -1,   270,    -1,
     268,    -1,   312,    -1,   312,   368,     7,   369,    -1,   313,
      -1,   313,   368,     7,   369,    -1,   214,   313,    -1,   116,
      -1,   116,   368,     7,   369,    -1,   219,   368,     7,   369,
      -1,   219,    -1,   220,    -1,   606,    -1,   125,    -1,   211,
      -1,   211,   368,     7,   369,    -1,   125,   368,     7,   369,
      -1,   204,    -1,   204,   372,     7,   373,    -1,   609,   608,
      -1,   607,    -1,   709,    -1,   606,    -1,   125,    -1,   211,
      -1,   211,   368,     7,   369,    -1,   125,   368,     7,   369,
      -1,   709,    -1,   214,   709,    -1,   214,   116,    -1,   214,
     301,    -1,   380,    -1,   380,   371,   380,   371,   380,   371,
     380,    -1,   380,    -1,   380,    -1,    12,    -1,    13,    -1,
     380,    -1,    -1,     4,    -1,    -1,   370,     4,    -1,   225,
     616,    -1,   226,   616,    -1,   226,     4,     4,    -1,   227,
       4,    -1,   126,    -1,   229,   228,   616,   617,    -1,   233,
     228,   616,    -1,   266,   172,    -1,   266,   265,    -1,   619,
      -1,   622,    -1,   625,    -1,   745,    -1,   677,    -1,   685,
      -1,   686,    -1,   131,   241,   603,   628,   627,   149,   602,
     370,   602,   370,   602,   620,   621,    -1,    -1,   370,   602,
      -1,    -1,    97,    -1,   131,   626,   603,   628,   627,   637,
     642,    -1,   117,   626,   601,   628,   627,   637,   446,   149,
     598,    -1,   131,   626,   603,   628,   627,   637,   166,   742,
     310,    59,     4,   726,    -1,   626,   380,   628,   627,   637,
     642,    -1,   623,   367,    -1,   624,   623,   367,    -1,   131,
     273,   603,   250,   624,   251,    -1,   242,    -1,   178,    -1,
      -1,   254,   609,    -1,   368,   369,    -1,   368,   629,   369,
      -1,   630,    -1,   629,   370,   630,    -1,   631,   605,   609,
     637,    -1,   631,   605,   609,   137,   599,   637,    -1,   631,
     605,   609,   108,   599,   637,    -1,   156,    -1,   243,    -1,
      62,    -1,    -1,   631,    -1,    -1,    81,   156,    -1,    81,
     243,    -1,    81,    62,    -1,    82,   156,    -1,    82,   243,
      -1,    82,    62,    -1,   635,    -1,   634,   370,   635,    -1,
       3,   108,   599,    -1,    78,    -1,    75,    -1,    80,    -1,
      73,    -1,    79,    -1,    74,    -1,    76,    -1,    -1,    83,
     368,   636,   108,     4,   633,   370,   634,   369,    -1,   636,
       4,   633,    -1,     7,    -1,     9,    -1,   638,    -1,   639,
     370,   638,    -1,   366,   368,   639,   369,    -1,   500,    -1,
     510,    -1,   513,    -1,   486,    -1,   481,    -1,   482,    -1,
     479,    -1,   483,    -1,   497,    -1,   498,    -1,   480,    -1,
     640,    -1,    -1,    -1,   250,   643,   644,   251,    -1,   645,
      -1,   644,   645,    -1,   651,   367,    -1,   642,    -1,    -1,
     646,   647,    -1,   641,   367,    -1,   659,    -1,   380,   103,
     645,    -1,    15,    -1,   107,   567,    15,    -1,   113,   567,
      15,    -1,   224,   518,   367,    -1,   642,    -1,    -1,   649,
     641,   367,    -1,    -1,   650,   659,    -1,   451,    -1,   652,
      -1,   656,    -1,   136,   653,   609,    -1,   380,    -1,   653,
     370,   380,    -1,   106,   148,    -1,   258,     4,    -1,   258,
      65,     4,    -1,   260,    -1,   259,    -1,   642,    -1,   641,
      -1,   665,    -1,   749,    -1,   746,    -1,   667,    -1,   262,
      -1,   262,   567,    -1,   669,    -1,   660,    -1,   663,    -1,
     668,    -1,   676,    -1,   670,    -1,   199,   654,   150,   380,
      -1,   199,   654,   151,   193,   380,    -1,   199,   654,   137,
      -1,   136,   657,   244,    96,   658,   655,    -1,   130,    -1,
     261,    -1,   654,    -1,   658,   370,   654,    -1,   665,   367,
      -1,   749,   367,    -1,   746,   367,    -1,   667,   367,    -1,
     262,   367,    -1,   262,   567,   367,    -1,   669,   367,    -1,
     660,   367,    -1,   663,    -1,   668,   367,    -1,   676,    -1,
     670,    -1,   662,   108,   567,    -1,   605,   661,   108,   567,
      -1,   372,   567,   373,    -1,   661,   372,   567,   373,    -1,
     605,    -1,   751,    -1,   245,   368,   553,   369,   648,   664,
      -1,    -1,   247,   648,    -1,   253,   578,   368,   581,   369,
      -1,   224,   582,    -1,   582,    -1,   334,   336,    -1,   334,
     335,    -1,   337,   334,    -1,   338,    -1,   187,   380,   107,
     567,    -1,   187,   380,   172,    -1,   187,   380,   265,    -1,
     187,   331,   332,   333,   666,    -1,   150,   380,    -1,   151,
     193,   380,    -1,   252,   567,    -1,   252,    -1,   249,   368,
     553,   369,   648,    -1,   660,    -1,   652,    -1,   665,    -1,
     746,    -1,    -1,   671,    -1,   672,   370,   671,    -1,   660,
      -1,   665,    -1,   746,    -1,    -1,   673,    -1,   674,   370,
     673,    -1,    -1,   553,    -1,    96,   519,   255,   648,    -1,
      96,   368,   672,   367,   675,   367,   674,   369,   648,    -1,
      84,   368,   609,   380,   156,   567,   369,   255,   648,    -1,
     131,   238,   380,   680,   681,   172,   600,   678,   682,   679,
      -1,    -1,    97,     7,    -1,   642,    -1,   235,    -1,   236,
      -1,   237,   171,    -1,   161,    -1,   195,   427,    -1,   138,
      -1,    -1,   239,   683,    -1,   684,    -1,   683,   370,   684,
      -1,   240,   101,   380,    -1,   295,   101,   380,    -1,   142,
     238,   600,    -1,   142,   241,   600,    -1,   142,   626,   600,
      -1,   142,   273,   600,    -1,    -1,   101,   380,    -1,   605,
      -1,   567,   101,   380,    -1,   567,   156,   380,    -1,   688,
      -1,   689,   370,   688,    -1,   368,   689,   369,    -1,    -1,
     176,   165,   368,   402,   369,    -1,    -1,   172,   368,   553,
     369,    -1,    -1,     3,    -1,   600,   380,   687,   690,   692,
     691,   693,   695,    -1,    -1,   250,   697,   251,    -1,   529,
      -1,   250,   697,   251,    -1,   694,    -1,   697,   370,   694,
      -1,    -1,   303,    -1,    -1,   304,     7,    -1,    -1,   308,
     309,    -1,   308,   310,    -1,   308,     4,    -1,   185,   310,
      -1,   185,     4,    -1,    -1,   179,     4,   380,     4,   698,
     699,   700,    -1,     3,    -1,     4,    -1,     3,   107,   702,
      -1,   703,    -1,   704,   703,    -1,    -1,   372,   704,   373,
      -1,   131,   301,   198,   603,   101,   705,   696,   693,   701,
      -1,   142,   301,   198,   600,    -1,   567,   109,   567,    -1,
     380,    -1,   380,   371,   380,    -1,   380,   371,   380,   371,
     380,    -1,   380,   371,   371,   380,    -1,   380,    -1,   380,
     371,   380,    -1,   380,   371,   380,   371,   380,    -1,   380,
     371,   371,   380,    -1,   380,    -1,   380,   371,   380,    -1,
     380,   371,   380,   371,   380,    -1,   380,   371,   371,   380,
      -1,    -1,   131,    24,   711,   716,   715,   713,   717,   726,
     729,    -1,   142,    24,   710,   417,    -1,    -1,   166,   743,
     310,    59,     4,    -1,   310,    59,     4,   166,   743,    -1,
     166,   743,    -1,    -1,   208,   709,    -1,    -1,   101,   718,
      -1,   368,   719,   369,    -1,   723,    -1,   719,   370,   723,
      -1,    -1,   310,    59,     4,    -1,   310,    59,     4,   310,
      24,     4,    -1,   310,    24,     4,    -1,    -1,    77,     4,
      -1,    78,     4,    -1,    78,     4,    77,     4,    -1,    77,
       4,    78,     4,    -1,    -1,   310,    24,     4,    -1,   380,
     609,   724,   725,   571,   720,   721,    -1,    -1,   181,    86,
      27,   390,    -1,   181,    86,   106,    27,    -1,    -1,   137,
     599,    -1,    -1,   727,    -1,   728,    -1,   727,   728,    -1,
      25,    -1,   106,    25,    -1,    87,   289,   609,    -1,    87,
     149,   368,   402,   369,    -1,    87,   164,    28,    29,    -1,
     293,   368,    30,   101,    87,   369,   201,   380,    -1,   293,
     368,    87,   101,    30,   369,   201,   380,    -1,    35,   101,
      87,    -1,    70,    -1,   330,    -1,    78,     4,    -1,    -1,
     730,    -1,   736,    -1,   730,   370,   736,    -1,    -1,    88,
      -1,    33,    -1,   368,   369,    -1,   368,   733,   369,    -1,
     734,    -1,   733,   370,   734,    -1,   632,   605,   609,   722,
      -1,   731,    26,   753,   732,   254,   609,   738,    -1,    34,
      26,   753,   732,   738,    -1,   735,   737,   739,    -1,    36,
     735,    -1,    -1,    35,   101,    31,    -1,    35,   101,    32,
      -1,    35,   101,    31,    35,   101,    32,    -1,    -1,    89,
     603,    -1,    -1,   740,    -1,   741,    -1,   740,   741,    -1,
     166,   743,    -1,    66,    37,    38,    -1,    66,    37,    39,
      -1,    40,    -1,   106,    40,    -1,    41,    38,    -1,    42,
      38,    -1,    43,    38,    44,    -1,    49,    38,    44,    -1,
     254,   169,   172,   169,    50,    -1,    51,   172,   169,    50,
      -1,   310,    59,     4,    -1,   310,    67,    59,     4,    -1,
     310,    24,     4,    -1,    52,    -1,    53,    -1,    54,    -1,
      55,    -1,    56,    -1,    57,    -1,    58,    -1,    61,    -1,
      71,    -1,   742,    -1,    38,    -1,    -1,   254,   711,    -1,
     131,   731,    26,   753,   628,   627,   637,    96,   709,   642,
      -1,   131,    34,    26,   600,   628,   744,    96,   709,   642,
      -1,   709,   102,   753,   368,   581,   369,    -1,   380,   371,
     380,   371,   380,   371,   753,    -1,   380,   371,   371,   380,
     371,   753,    -1,   380,   371,   747,    -1,   380,   371,   380,
     371,   380,   371,   380,   371,   753,    -1,   380,   371,   371,
     380,   371,   380,   371,   753,    -1,   380,   371,   748,    -1,
     569,   371,   753,   368,   581,   369,    -1,   748,   368,   581,
     369,    -1,   368,   568,   101,   709,   369,   371,   753,   368,
     581,   369,    -1,   368,   605,   101,   709,   369,   371,   753,
     368,   581,   369,    -1,    26,   253,   569,   371,   753,   368,
     581,   369,    -1,    26,   253,   748,   368,   581,   369,    -1,
      26,   253,   368,   568,   101,   709,   369,   371,   753,   368,
     581,   369,    -1,    26,   253,   368,   605,   101,   709,   369,
     371,   753,   368,   581,   369,    -1,   752,    -1,   380,   371,
     747,    -1,   569,   371,   753,    -1,   368,   568,   101,   709,
     369,   371,   753,    -1,   368,   605,   101,   709,   369,   371,
     753,    -1,   380,    -1,   319,    -1,   295,   709,   368,   581,
     369,    -1,   230,    24,   709,   756,    -1,   231,    72,   723,
      -1,   142,    72,   380,   417,    -1,   231,   736,    -1,   142,
     735,   417,    -1,    -1,   201,   325,   107,   329,    -1,   201,
     325,   107,   330,    -1,    -1,   201,   326,    -1,   131,   327,
     600,   101,   567,   757,   758,    -1,   131,   328,   600,   149,
     567,   757,   758,    -1,   142,   327,   600,    -1,   142,   328,
     600,    -1,   162,    -1,   162,   368,     7,   369,    -1,   121,
      -1,   121,   368,     7,   369,    -1,   211,    -1,   211,   368,
       7,   370,     7,   369,    -1,   211,   368,   111,     7,   370,
       7,   369,    -1,     3,    -1,   764,    -1,   765,   370,   764,
      -1,   368,     7,   370,     7,   369,    -1,   766,    -1,   767,
     370,   766,    -1,   153,   368,   765,   369,    -1,   153,   368,
     765,   369,   155,   767,    -1,   768,    -1,   769,   370,   768,
      -1,    -1,   137,    -1,   131,   209,     3,   770,   769,    -1,
       3,   763,    -1,   773,   370,     3,   763,    -1,    -1,   368,
     772,   369,    -1,    -1,   209,     3,    -1,   230,   157,     3,
     172,   600,   307,   774,   773,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   651,   651,   652,   655,   662,   664,   665,   666,   667,
     668,   669,   670,   671,   672,   688,   689,   690,   691,   695,
     697,   698,   699,   700,   701,   703,   704,   705,   706,   707,
     708,   709,   710,   711,   712,   713,   714,   718,   719,   720,
     721,   722,   723,   724,   725,   726,   727,   728,   729,   730,
     731,   732,   733,   734,   735,   736,   737,   738,   739,   740,
     741,   742,   743,   744,   745,   746,   747,   748,   749,   750,
     751,   752,   753,   754,   755,   756,   757,   758,   759,   760,
     761,   762,   763,   764,   765,   766,   767,   768,   769,   770,
     771,   772,   773,   774,   775,   776,   777,   778,   779,   780,
     781,   782,   783,   784,   785,   786,   787,   788,   789,   790,
     791,   792,   793,   794,   795,   796,   797,   798,   799,   803,
     804,   805,   809,   810,   811,   816,   819,   824,   825,   830,
     831,   835,   840,   841,   845,   856,   857,   861,   865,   866,
     870,   871,   872,   876,   877,   878,   879,   880,   884,   892,
     893,   897,   898,   910,   911,   912,   917,   918,   922,   923,
     924,   925,   926,   927,   928,   929,   930,   931,   933,   934,
     943,   948,   949,   954,   956,   959,   961,   963,   968,   972,
     973,   977,   978,   982,   983,   987,   988,   989,   990,   991,
     992,   993,   994,   995,   999,  1000,  1004,  1005,  1009,  1012,
    1019,  1023,  1024,  1028,  1029,  1033,  1034,  1038,  1039,  1043,
    1044,  1048,  1058,  1068,  1075,  1081,  1082,  1083,  1087,  1088,
    1089,  1093,  1097,  1101,  1118,  1125,  1132,  1137,  1141,  1148,
    1148,  1151,  1159,  1160,  1164,  1165,  1169,  1170,  1174,  1176,
    1178,  1184,  1190,  1197,  1202,  1203,  1211,  1214,  1220,  1226,
    1232,  1237,  1238,  1242,  1255,  1268,  1272,  1273,  1278,  1280,
    1281,  1282,  1284,  1290,  1291,  1296,  1297,  1301,  1306,  1307,
    1311,  1312,  1313,  1314,  1315,  1319,  1324,  1329,  1335,  1336,
    1344,  1354,  1355,  1360,  1363,  1368,  1369,  1373,  1374,  1382,
    1383,  1384,  1389,  1393,  1400,  1401,  1405,  1406,  1411,  1413,
    1418,  1419,  1420,  1425,  1432,  1439,  1446,  1447,  1451,  1452,
    1456,  1460,  1467,  1468,  1472,  1479,  1480,  1484,  1497,  1510,
    1511,  1515,  1516,  1520,  1528,  1536,  1537,  1541,  1542,  1546,
    1547,  1551,  1552,  1556,  1557,  1561,  1562,  1567,  1571,  1573,
    1574,  1575,  1576,  1577,  1578,  1579,  1580,  1581,  1582,  1583,
    1584,  1585,  1586,  1587,  1588,  1589,  1590,  1591,  1592,  1593,
    1594,  1595,  1596,  1597,  1601,  1608,  1613,  1618,  1623,  1630,
    1632,  1637,  1645,  1646,  1647,  1652,  1653,  1658,  1663,  1665,
    1669,  1670,  1675,  1681,  1682,  1683,  1684,  1685,  1686,  1687,
    1688,  1689,  1690,  1691,  1692,  1693,  1694,  1695,  1696,  1697,
    1698,  1709,  1710,  1714,  1715,  1719,  1720,  1724,  1725,  1729,
    1730,  1735,  1736,  1740,  1746,  1751,  1752,  1756,  1785,  1786,
    1790,  1791,  1796,  1797,  1798,  1799,  1800,  1801,  1802,  1803,
    1804,  1805,  1806,  1807,  1808,  1813,  1814,  1818,  1818,  1824,
    1825,  1826,  1837,  1838,  1843,  1844,  1846,  1848,  1850,  1852,
    1853,  1859,  1867,  1868,  1869,  1874,  1878,  1891,  1892,  1897,
    1898,  1899,  1903,  1904,  1910,  1911,  1915,  1916,  1918,  1920,
    1922,  1924,  1926,  1931,  1932,  1936,  1937,  1941,  1942,  1944,
    1946,  1948,  1950,  1952,  1957,  1958,  1962,  1963,  1964,  1968,
    1972,  1973,  1977,  1978,  1983,  1991,  2003,  2020,  2021,  2027,
    2028,  2032,  2033,  2037,  2048,  2049,  2053,  2065,  2069,  2070,
    2076,  2077,  2083,  2088,  2089,  2093,  2095,  2099,  2103,  2105,
    2112,  2113,  2117,  2121,  2125,  2126,  2127,  2129,  2130,  2131,
    2134,  2136,  2140,  2144,  2151,  2152,  2153,  2157,  2165,  2166,
    2167,  2172,  2176,  2177,  2181,  2193,  2228,  2229,  2233,  2234,
    2235,  2236,  2242,  2244,  2246,  2248,  2249,  2253,  2254,  2255,
    2256,  2257,  2258,  2259,  2260,  2264,  2273,  2296,  2304,  2315,
    2321,  2329,  2330,  2336,  2345,  2350,  2354,  2360,  2363,  2366,
    2379,  2384,  2385,  2386,  2390,  2400,  2405,  2406,  2411,  2412,
    2413,  2414,  2415,  2416,  2418,  2419,  2420,  2421,  2422,  2426,
    2427,  2428,  2429,  2430,  2434,  2435,  2436,  2437,  2438,  2439,
    2440,  2441,  2442,  2443,  2444,  2445,  2449,  2450,  2451,  2452,
    2453,  2457,  2458,  2459,  2460,  2461,  2462,  2463,  2464,  2465,
    2466,  2467,  2468,  2472,  2481,  2482,  2486,  2499,  2501,  2503,
    2508,  2510,  2512,  2514,  2516,  2518,  2523,  2526,  2530,  2536,
    2537,  2544,  2545,  2546,  2547,  2548,  2549,  2550,  2551,  2552,
    2557,  2558,  2563,  2564,  2565,  2569,  2570,  2571,  2572,  2574,
    2575,  2579,  2591,  2597,  2603,  2605,  2607,  2609,  2611,  2618,
    2620,  2622,  2625,  2628,  2634,  2643,  2649,  2652,  2656,  2660,
    2664,  2668,  2672,  2682,  2684,  2704,  2709,  2715,  2716,  2720,
    2721,  2722,  2723,  2727,  2728,  2729,  2734,  2735,  2739,  2745,
    2750,  2751,  2755,  2756,  2760,  2762,  2767,  2769,  2774,  2779,
    2786,  2787,  2789,  2794,  2800,  2801,  2802,  2806,  2807,  2808,
    2809,  2810,  2811,  2812,  2813,  2814,  2815,  2816,  2817,  2821,
    2822,  2823,  2824,  2825,  2826,  2827,  2828,  2842,  2843,  2844,
    2850,  2851,  2852,  2853,  2857,  2858,  2859,  2860,  2864,  2865,
    2866,  2867,  2871,  2872,  2873,  2874,  2878,  2880,  2884,  2892,
    2895,  2898,  2901,  2904,  2907,  2910,  2913,  2916,  2919,  2926,
    2929,  2932,  2935,  2938,  2941,  2944,  2947,  2950,  2953,  2956,
    2959,  2962,  2965,  2968,  2971,  2974,  2977,  2980,  2983,  2986,
    2989,  2992,  2995,  2998,  3001,  3004,  3007,  3009,  3014,  3017,
    3020,  3026,  3027,  3030,  3033,  3036,  3042,  3043,  3047,  3051,
    3052,  3056,  3057,  3060,  3063,  3066,  3069,  3079,  3089,  3093,
    3100,  3108,  3116,  3120,  3124,  3125,  3129,  3133,  3134,  3138,
    3139,  3143,  3145,  3147,  3149,  3151,  3153,  3155,  3157,  3159,
    3180,  3181,  3182,  3183,  3184,  3185,  3186,  3190,  3200,  3201,
    3205,  3206,  3210,  3214,  3218,  3226,  3232,  3234,  3239,  3246,
    3247,  3251,  3252,  3256,  3257,  3261,  3263,  3268,  3270,  3272,
    3277,  3278,  3279,  3283,  3284,  3288,  3289,  3290,  3291,  3292,
    3293,  3294,  3298,  3299,  3303,  3307,  3308,  3309,  3310,  3311,
    3312,  3313,  3317,  3318,  3320,  3324,  3325,  3336,  3337,  3341,
    3346,  3347,  3348,  3349,  3350,  3351,  3352,  3353,  3354,  3355,
    3356,  3357,  3358,  3362,  3362,  3372,  3373,  3377,  3378,  3379,
    3379,  3383,  3384,  3385,  3386,  3387,  3395,  3403,  3410,  3411,
    3411,  3412,  3412,  3416,  3417,  3418,  3422,  3431,  3433,  3438,
    3439,  3440,  3444,  3445,  3449,  3450,  3451,  3452,  3453,  3454,
    3455,  3456,  3457,  3458,  3459,  3460,  3461,  3462,  3466,  3468,
    3470,  3472,  3477,  3478,  3482,  3483,  3487,  3488,  3489,  3490,
    3491,  3492,  3493,  3494,  3495,  3496,  3497,  3498,  3502,  3503,
    3511,  3512,  3516,  3517,  3546,  3554,  3555,  3559,  3561,  3562,
    3566,  3567,  3568,  3569,  3573,  3576,  3579,  3582,  3588,  3589,
    3593,  3594,  3598,  3603,  3604,  3605,  3606,  3610,  3611,  3612,
    3616,  3617,  3618,  3622,  3623,  3624,  3628,  3629,  3633,  3635,
    3637,  3642,  3648,  3649,  3653,  3657,  3658,  3659,  3663,  3664,
    3666,  3670,  3671,  3675,  3676,  3680,  3681,  3685,  3694,  3699,
    3704,  3719,  3720,  3724,  3731,  3732,  3745,  3746,  3751,  3755,
    3756,  3762,  3763,  3768,  3769,  3774,  3794,  3795,  3800,  3801,
    3811,  3812,  3816,  3817,  3821,  3822,  3838,  3839,  3840,  3841,
    3842,  3843,  3847,  3848,  3858,  3859,  3863,  3873,  3876,  3882,
    3883,  3889,  3896,  3917,  3927,  3928,  3929,  3930,  3934,  3935,
    3936,  3937,  3941,  3942,  3943,  3944,  3948,  3948,  3959,  3966,
    3967,  3973,  3979,  3988,  3989,  3993,  3994,  3998,  4003,  4004,
    4008,  4009,  4010,  4011,  4015,  4016,  4017,  4018,  4019,  4023,
    4024,  4028,  4035,  4036,  4037,  4041,  4042,  4046,  4047,  4051,
    4052,  4056,  4057,  4058,  4059,  4060,  4061,  4062,  4063,  4064,
    4065,  4066,  4070,  4071,  4075,  4076,  4080,  4081,  4082,  4086,
    4087,  4091,  4093,  4098,  4103,  4108,  4116,  4121,  4129,  4130,
    4131,  4132,  4136,  4137,  4141,  4142,  4146,  4150,  4158,  4159,
    4160,  4161,  4162,  4163,  4164,  4165,  4166,  4167,  4168,  4169,
    4170,  4171,  4175,  4176,  4177,  4178,  4179,  4180,  4181,  4182,
    4183,  4187,  4188,  4192,  4193,  4197,  4202,  4210,  4215,  4224,
    4233,  4237,  4247,  4257,  4261,  4263,  4265,  4267,  4272,  4274,
    4276,  4278,  4283,  4284,  4289,  4291,  4293,  4298,  4299,  4303,
    4308,  4312,  4313,  4314,  4315,  4319,  4320,  4321,  4325,  4326,
    4330,  4338,  4346,  4354,  4366,  4367,  4368,  4369,  4370,  4371,
    4372,  4377,  4381,  4382,  4386,  4390,  4391,  4396,  4397,  4402,
    4403,  4407,  4408,  4412,  4417,  4418,  4422,  4423,  4426,  4427,
    4432
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "WSTRING",
  "UNAME_LITERAL", "INTNUM", "IRI_LIT", "APPROXNUM", "NUM_ERROR", "AMMSC",
  "PARAMETER_L", "NAMED_PARAMETER", "BEGIN_EQCALL_X", "HTMLSTR", "SQL_TSI",
  "TIMESTAMP_FUNC", "BINARYNUM", "MSSQL_XMLCOL_NAME", "MSSQL_XMLCOL_NAME1",
  "MSSQL_XMLCOL_NAMEYZ", "MSSQL_XMLCOL_NAMEZ", "MSSQL_XMLCOL_INTNUM",
  "TYPE", "FINAL_L", "METHOD", "CHECKED", "SYSTEM", "GENERATED", "SOURCE",
  "RESULT", "LOCATOR", "INSTANCE_L", "CONSTRUCTOR", "SELF_L", "OVERRIDING",
  "STYLE", "SQL_L", "GENERAL", "DETERMINISTIC", "NO_L", "CONTAINS",
  "READS", "DATA", "DISABLE_L", "NOVALIDATE_L", "ENABLE_L", "VALIDATE_L",
  "MODIFIES", "INPUT", "CALLED", "ADA", "C", "COBOL", "FORTRAN", "MUMPS",
  "PASCAL_L", "PLI", "NAME_L", "TEXT_L", "JAVA", "INOUT_L", "REMOTE",
  "KEYSET", "VALUE", "PARAMETER", "VARIABLE", "ADMIN_L", "ROLE_L",
  "TEMPORARY", "CLR", "ATTRIBUTE", "__SOAP_DOC", "__SOAP_DOCW",
  "__SOAP_HEADER", "__SOAP_HTTP", "__SOAP_NAME", "__SOAP_TYPE",
  "__SOAP_XML_TYPE", "__SOAP_FAULT", "__SOAP_DIME_ENC", "__SOAP_ENC_MIME",
  "__SOAP_OPTIONS", "FOREACH", "POSITION_L", "ARE", "REF", "STATIC_L",
  "SPECIFIC", "DYNAMIC", "COLUMN", "START_L", "__TAG_L", "RDF_BOX_L",
  "VECTOR_L", "FOR", "ORDER", "EXCEPT", "UNION", "INTERSECT", "AS",
  "DOUBLE_COLON", "COLON", "OR", "AND", "NOT", "COMPARISON", "EQUALS",
  "STRING_CONCAT_OPERATOR", "'+'", "'-'", "'*'", "'/'", "UMINUS", "ALL",
  "ANY", "ATTACH", "ASC", "AUTHORIZATION", "BETWEEN", "BIGINT", "BREAKUP",
  "BY", "CASCADE", "CHARACTER", "CHECK", "CLOSE", "COMMIT", "CONSTRAINT",
  "CONTINUE", "CREATE", "CUBE", "CURRENT", "CURSOR", "DECIMAL_L",
  "DECLARE", "DEFAULT", "DELETE_L", "DESC", "DISTINCT", "DOUBLE_L", "DROP",
  "ESCAPE", "EXISTS", "FETCH", "FLOAT_L", "FOREIGN", "FOUND", "FROM",
  "GOTO", "GO", "GRANT", "GROUP", "GROUPING", "HAVING", "IN_L", "INDEX",
  "INDEX_NO_FILL", "INDEX_ONLY", "INDICATOR", "INSERT", "INTEGER", "INTO",
  "IS", "KEY", "LANGUAGE", "ENCODING", "LIKE", "NULLX", "NUMERIC", "OF",
  "ON", "OPEN", "OPTION", "PRECISION", "PRIMARY", "PRIVILEGES",
  "PROCEDURE", "PUBLIC", "REAL", "REFERENCES", "RESTRICT", "ROLLBACK",
  "ROLLUP", "SCHEMA", "SELECT", "SET", "SMALLINT", "SOME", "SQLCODE",
  "SQLERROR", "TABLE", "TO", "UNIQUE", "UPDATE", "USER", "VALUES", "VIEW",
  "WHENEVER", "WHERE", "WITH", "WORK", "WITHOUT_L", "ARRAY", "CONTIGUOUS",
  "OBJECT_ID", "BITMAPPED", "UNDER", "CLUSTER", "CLUSTERED", "VARCHAR",
  "VARBINARY", "BINARY", "LONG_L", "REPLACING", "SOFT", "HASH", "LOOP",
  "IRI_ID", "IRI_ID_8", "SAME_AS", "TRANSITIVE", "QUIETCAST_L", "SPARQL_L",
  "SHUTDOWN", "CHECKPOINT", "BACKUP", "REPLICATION", "SYNC", "ALTER",
  "ADD", "RENAME", "DISCONNECT", "MODIFY", "BEFORE", "AFTER", "INSTEAD",
  "TRIGGER", "REFERENCING", "OLD", "AGGREGATE", "FUNCTION", "OUT_L",
  "HANDLER", "IF", "THEN", "ELSE", "ELSEIF", "WHILE", "BEGINX", "ENDX",
  "RETURN", "CALL", "RETURNS", "DO", "EXCLUSIVE", "PREFETCH", "SQLSTATE_L",
  "SQLWARNING", "SQLEXCEPTION", "EXIT", "RESIGNAL", "REVOKE", "PASSWORD",
  "OFF", "LOGX", "TIMESTAMP", "DATE_L", "DATETIME", "TIME", "EXECUTE",
  "REXECUTE", "MODULE", "BEGIN_FN_X", "BEGIN_CALL_X", "BEGIN_OJ_X",
  "BEGIN_U_X", "CONVERT", "CASE", "WHEN", "IDENTITY", "LEFT", "RIGHT",
  "FULL", "OUTER", "INNER", "CROSS", "NATURAL", "USING", "JOIN", "USE",
  "COALESCE", "CAST", "NULLIF", "NEW", "CORRESPONDING", "BEST", "TOP",
  "PERCENT", "TIES", "XML", "XPATH", "PERSISTENT", "INTERVAL",
  "INCREMENT_L", "COMPRESS", "PARTITION", "DTD", "INTERNAL", "EXTERNAL",
  "COLLATE", "NCHAR", "NVARCHAR", "INCREMENTAL", "NONINCREMENTAL", "PURGE",
  "SNAPSHOT", "IDENTIFIED", "EXTRACT", "KWD_TAG", "LEXICAL_ERROR",
  "CURRENT_DATE", "CURRENT_TIME", "CURRENT_TIMESTAMP", "PERMISSION_SET",
  "AUTOREGISTER_L", "LIBRARY_L", "ASSEMBLY_L", "SAFE_L", "UNRESTRICTED_L",
  "TRANSACTION_L", "ISOLATION_L", "LEVEL_L", "READ_L", "COMMITTED_L",
  "UNCOMMITTED_L", "REPEATABLE_L", "SERIALIZABLE_L", "T_FINAL_AS", "T_MIN",
  "T_MAX", "T_IN", "T_OUT", "T_SHORTEST_ONLY", "T_DISTINCT", "T_EXISTS",
  "T_NO_ORDER", "T_NO_CYCLES", "T_CYCLES_ONLY", "T_END_FLAG",
  "T_DIRECTION", "WS_WHITESPACE", "WS_SPARQL_SKIP", "WS_PRAGMA_LINE",
  "WS_PRAGMA_PREFIX_1", "WS_PRAGMA_PREFIX_2", "WS_PRAGMA_PREFIX_3",
  "WS_PRAGMA_C_ESC", "WS_PGRAGMA_UTF8_ESC", "WS_PRAGMA_PL_DEBUG",
  "WS_PRAGMA_SRC", "WS_COMMENT_EOL", "WS_COMMENT_BEGIN", "WS_COMMENT_END",
  "WS_COMMENT_LONG", "__COST", "';'", "'('", "')'", "','", "'.'", "'['",
  "']'", "$accept", "sql_list", "sql_list1", "sql", "schema_element_list",
  "schema_element", "identifier", "opt_with_data", "base_table_opt",
  "base_table_def", "base_table_element_commalist", "base_table_element",
  "column_def", "opt_referential_triggered_action", "referential_rule",
  "delete_referential_rule", "opt_on_delete_referential_rule",
  "referential_action", "referential_state", "references",
  "column_def_opt_list", "identity_opt", "compression_spec",
  "identity_opt_list", "column_def_opt", "column_xml_schema_def",
  "table_constraint_def", "opt_constraint_name", "column_commalist",
  "index_column_commalist", "index_option", "index_option_list",
  "opt_index_option_list", "create_index_def", "drop_index", "opt_table",
  "drop_table", "opt_col_add_column", "add_col_column_def_list",
  "add_col_column_list", "add_column", "table_rename", "constraint_op",
  "opt_drop_behavior", "opt_table_constraint_def", "alter_constraint",
  "create_xml_schema", "drop_xml_schema", "view_query_spec",
  "view_def_select_and_opt", "view_def", "@1", "opt_with_check_option",
  "opt_column_commalist", "priv_opt_column_commalist", "privilege_def",
  "opt_with_admin_option", "privilege_revoke", "opt_with_grant_option",
  "privileges", "operation_commalist", "operation", "grantee_commalist",
  "grantee", "set_pass", "create_user_statement", "delete_user_statement",
  "set_group_stmt", "add_group_stmt", "delete_group_stmt",
  "opt_attach_primary_key", "attach_table", "opt_as", "opt_login",
  "opt_not_select", "opt_remote_name", "cursor_type", "cursor_def",
  "opt_order_by_clause", "ordering_spec_commalist", "ordering_spec",
  "opt_asc_desc", "create_snapshot_log", "drop_snapshot_log",
  "purge_snapshot_log", "opt_snapshot_string_literal",
  "opt_snapshot_where_clause", "create_snapshot", "opt_with_delete",
  "drop_snapshot", "opt_nonincremental", "refresh_snapshot",
  "create_freetext_index", "opt_data_modification_action", "opt_column",
  "create_freetext_trigger", "drop_freetext_trigger", "opt_xml",
  "opt_with_key", "opt_with", "opt_lang", "opt_enc",
  "opt_deffer_generation", "manipulative_statement", "use_statement",
  "close_statement", "commit_statement", "delete_statement_positioned",
  "delete_statement_searched", "fetch_statement", "insert_mode",
  "opt_index", "insert_statement", "values_or_query_spec",
  "insert_atom_commalist", "insert_atom", "sql_option",
  "sql_opt_commalist", "opt_sql_opt", "opt_table_opt", "cursor_option",
  "cursor_options_commalist", "opt_cursor_options_list", "open_statement",
  "rollback_statement", "with_opt_cursor_options_list",
  "selectinto_statement", "colnum_commalist_2", "colnum_commalist",
  "trans_opt", "trans_list", "trans_decl", "@2", "opt_all_distinct",
  "opt_ties", "opt_top", "update_statement_positioned",
  "assignment_commalist", "assignment", "update_statement_searched",
  "target_commalist", "target", "opt_where_clause", "opt_best",
  "sqlonly_query_exp", "query_exp", "query_or_sparql_exp",
  "non_final_union_exp", "non_final_query_term", "sqlonly_query_term",
  "sparqlonly_query_term", "query_term", "opt_corresponding",
  "non_final_query_spec", "query_opt_from_spec", "query_spec",
  "breakup_term", "breakup_list", "selection", "non_final_table_exp",
  "table_exp_opt", "table_exp", "from_clause", "table_ref_commalist",
  "proc_col_list", "opt_proc_col_list", "column_commalist_or_empty",
  "table_ref", "table_ref_nj", "jtype", "opt_outer", "join",
  "joined_table", "joined_table_1", "join_condition", "where_clause",
  "opt_group_by_clause", "opt_having_clause", "opt_lock_mode",
  "search_condition", "predicate", "scalar_exp_predicate",
  "comparison_predicate", "between_predicate", "like_predicate",
  "opt_escape", "test_for_null", "in_predicate", "all_or_any_predicate",
  "any_all_some", "existence_test", "scalar_subquery", "subquery",
  "scalar_exp", "scalar_exp_no_col_ref",
  "scalar_exp_no_col_ref_no_mem_obs_chain", "cvt_exp", "opt_collate_exp",
  "cast_exp", "mssql_xml_col", "as_expression", "array_ref",
  "lvalue_array_ref", "opt_scalar_exp_commalist", "function_name",
  "kwd_commalist", "as_commalist", "opt_arg_commalist", "function_call",
  "obe_literal", "scalar_exp_commalist", "select_scalar_exp_commalist",
  "atom_no_obe", "atom", "simple_case", "searched_case",
  "searched_when_list", "simple_when_list", "simple_when", "searched_when",
  "coalesce_exp", "nullif_exp", "parameter_ref", "aggregate_ref",
  "literal", "signed_literal", "q_table_name", "attach_q_table_name",
  "new_proc_or_bif_name", "new_table_name", "table", "column_ref",
  "base_data_type", "data_type", "array_modifier", "data_type_ref",
  "column_data_type", "column", "index", "cursor", "parameter", "user",
  "opt_log", "comma_opt_log", "admin_statement",
  "user_aggregate_declaration", "user_aggregate_merge_opt",
  "user_aggregate_order_opt", "routine_declaration", "module_body_part",
  "module_body", "module_declaration", "routine_head", "opt_return",
  "rout_parameter_list", "parameter_commalist", "rout_parameter",
  "parameter_mode", "opt_parameter_mode", "opt_soap_enc_mode",
  "soap_proc_opt_list", "soap_proc_opt", "soap_kwd", "rout_alt_type",
  "cost_number", "cost_number_list", "cost_decl", "routine_statement",
  "compound_statement", "@3", "statement_list", "statement_in_cs", "@4",
  "statement_in_cs_oper", "statement", "@5", "@6", "local_declaration",
  "variable_declaration", "variable_list", "condition",
  "handler_statement", "handler_declaration", "handler_type",
  "cond_value_list", "control_statement", "assignment_statement",
  "array_index_list", "lvalue", "if_statement", "opt_else",
  "call_statement", "txn_isolation_level", "set_statement",
  "goto_statement", "return_statement", "while_statement",
  "for_init_statement", "for_init_statement_list", "for_inc_statement",
  "for_inc_statement_list", "for_opt_search_cond", "for_statement",
  "trigger_def", "opt_order", "trig_action", "action_time", "event",
  "opt_old_ref", "old_commalist", "old_alias", "drop_trigger", "drop_proc",
  "opt_element", "xml_col", "xml_col_list", "opt_xml_col_list", "opt_pk",
  "opt_join", "opt_elt", "xml_join_elt", "opt_xml_child", "top_xml_child",
  "xml_join_list", "opt_persist", "opt_interval", "opt_metas",
  "opt_publish", "xmlview_param_value", "xmlview_param", "xmlview_params",
  "opt_xmlview_params", "xml_view", "drop_xml_view",
  "string_concatenation_operator", "q_type_name", "q_old_type_name",
  "new_type_name", "user_defined_type", "@7", "user_defined_type_drop",
  "opt_external_and_language_clause", "opt_subtype_clause",
  "opt_as_type_representation", "type_representation", "type_member_list",
  "opt_external_clause", "opt_soap_clause", "opt_external_type",
  "type_member", "opt_reference_scope_check", "opt_default_clause",
  "opt_type_option_list", "type_option_list", "type_option",
  "opt_method_specification_list", "method_specification_list",
  "method_type", "decl_parameter_list", "decl_parameter_commalist",
  "decl_parameter", "partial_method_specification", "method_specification",
  "opt_self_result", "opt_specific_method_name",
  "opt_method_characteristics", "method_characteristics",
  "method_characteristic", "external_language_name", "language_name",
  "opt_constructor_return", "method_declaration",
  "static_method_invocation", "identifier_chain",
  "identifier_chain_method", "method_invocation",
  "top_level_method_invocation", "member_observer",
  "member_observer_no_id_chain", "method_identifier", "new_invocation",
  "user_defined_type_alter", "alter_type_action",
  "opt_with_permission_set", "opt_with_autoregister", "create_library",
  "create_assembly", "drop_library", "drop_assembly", "col_partition",
  "host", "host_list", "range", "range_list", "host_group",
  "host_group_list", "opt_modulo", "cluster_def", "col_part_commalist",
  "col_part_list", "opt_cluster", "partition_def", 0
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
      43,    45,    42,    47,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   415,   416,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,   556,   557,   558,   559,   560,
     561,   562,   563,   564,   565,   566,   567,   568,   569,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   586,   587,   588,   589,   590,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
     611,   612,   613,   614,   615,   616,   617,    59,    40,    41,
      44,    46,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   374,   375,   375,   376,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   378,   378,   378,   378,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   381,
     381,   381,   382,   382,   382,   383,   383,   384,   384,   385,
     385,   386,   387,   387,   387,   388,   388,   389,   390,   390,
     391,   391,   391,   392,   392,   392,   392,   392,   393,   394,
     394,   395,   395,   396,   396,   396,   397,   397,   398,   398,
     398,   398,   398,   398,   398,   398,   398,   398,   398,   398,
     398,   399,   399,   400,   400,   400,   400,   400,   400,   401,
     401,   402,   402,   403,   403,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   405,   405,   406,   406,   407,   407,
     408,   409,   409,   410,   410,   411,   411,   412,   412,   413,
     413,   414,   414,   414,   415,   416,   416,   416,   417,   417,
     417,   418,   418,   419,   420,   421,   422,   423,   423,   425,
     424,   424,   426,   426,   427,   427,   428,   428,   429,   429,
     429,   429,   429,   429,   430,   430,   431,   431,   431,   431,
     431,   432,   432,   433,   433,   433,   434,   434,   435,   435,
     435,   435,   435,   436,   436,   437,   437,   438,   439,   439,
     440,   440,   440,   440,   440,   441,   442,   443,   444,   444,
     445,   446,   446,   447,   447,   448,   448,   449,   449,   450,
     450,   450,   451,   451,   452,   452,   453,   453,   454,   454,
     455,   455,   455,   456,   457,   458,   459,   459,   460,   460,
     461,   461,   462,   462,   463,   464,   464,   465,   466,   467,
     467,   468,   468,   469,   470,   471,   471,   472,   472,   473,
     473,   474,   474,   475,   475,   476,   476,   377,   477,   477,
     477,   477,   477,   477,   477,   477,   477,   477,   477,   477,
     477,   477,   477,   477,   477,   477,   477,   477,   477,   477,
     477,   477,   477,   477,   478,   479,   480,   481,   482,   483,
     483,   483,   484,   484,   484,   485,   485,   486,   487,   487,
     488,   488,   489,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   491,   491,   492,   492,   493,   493,   494,   494,   495,
     495,   496,   496,   497,   498,   499,   499,   500,   501,   501,
     502,   502,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   503,   503,   503,   504,   504,   506,   505,   507,
     507,   507,   508,   508,   509,   509,   509,   509,   509,   509,
     509,   510,   511,   511,   511,   512,   513,   514,   514,   515,
     515,   515,   516,   516,   517,   517,   518,   518,   518,   518,
     518,   518,   518,   519,   519,   520,   520,   521,   521,   521,
     521,   521,   521,   521,   522,   522,   523,   523,   523,   524,
     525,   525,   526,   526,   527,   528,   529,   530,   530,   531,
     531,   532,   532,   533,   534,   534,   535,   536,   537,   537,
     538,   538,   539,   540,   540,   541,   541,   541,   541,   541,
     542,   542,   542,   542,   543,   543,   543,   543,   543,   543,
     544,   544,   545,   545,   546,   546,   546,   547,   548,   548,
     548,   549,   550,   550,   550,   550,   551,   551,   552,   552,
     552,   552,   553,   553,   553,   553,   553,   554,   554,   554,
     554,   554,   554,   554,   554,   555,   556,   557,   557,   558,
     558,   559,   559,   559,   560,   560,   561,   561,   561,   561,
     562,   563,   563,   563,   564,   565,   566,   566,   567,   567,
     567,   567,   567,   567,   567,   567,   567,   567,   567,   568,
     568,   568,   568,   568,   568,   568,   568,   568,   568,   568,
     568,   568,   568,   568,   568,   568,   569,   569,   569,   569,
     569,   569,   569,   569,   569,   569,   569,   569,   569,   569,
     569,   569,   569,   570,   571,   571,   572,   573,   573,   573,
     574,   574,   574,   574,   574,   574,   575,   575,   576,   577,
     577,   578,   578,   578,   578,   578,   578,   578,   578,   578,
     579,   579,   580,   580,   580,   581,   581,   581,   581,   581,
     581,   582,   582,   582,   582,   582,   582,   582,   582,   582,
     582,   582,   582,   582,   582,   582,   582,   582,   582,   582,
     582,   582,   582,   377,   377,   583,   583,   584,   584,   585,
     585,   585,   585,   586,   586,   586,   587,   587,   588,   589,
     590,   590,   591,   591,   592,   592,   593,   593,   594,   595,
     596,   596,   596,   597,   597,   597,   597,   598,   598,   598,
     598,   598,   598,   598,   598,   598,   598,   598,   598,   599,
     599,   599,   599,   599,   599,   599,   599,   599,   599,   599,
     600,   600,   600,   600,   601,   601,   601,   601,   602,   602,
     602,   602,   603,   603,   603,   603,   604,   604,   604,   605,
     605,   605,   605,   605,   605,   605,   605,   605,   605,   606,
     606,   606,   606,   606,   606,   606,   606,   606,   606,   606,
     606,   606,   606,   606,   606,   606,   606,   606,   606,   606,
     606,   606,   606,   606,   606,   606,   606,   606,   606,   606,
     606,   607,   607,   607,   607,   607,   608,   608,   609,   609,
     609,   610,   610,   610,   610,   610,   610,   610,   610,   610,
     611,   611,   612,   613,   614,   614,   615,   616,   616,   617,
     617,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     377,   377,   377,   377,   377,   377,   377,   619,   620,   620,
     621,   621,   622,   622,   622,   623,   624,   624,   625,   626,
     626,   627,   627,   628,   628,   629,   629,   630,   630,   630,
     631,   631,   631,   632,   632,   633,   633,   633,   633,   633,
     633,   633,   634,   634,   635,   636,   636,   636,   636,   636,
     636,   636,   637,   637,   637,   638,   638,   639,   639,   640,
     641,   641,   641,   641,   641,   641,   641,   641,   641,   641,
     641,   641,   641,   643,   642,   644,   644,   645,   645,   646,
     645,   647,   647,   647,   647,   647,   647,   647,   648,   649,
     648,   650,   648,   651,   651,   651,   652,   653,   653,   654,
     654,   654,   654,   654,   655,   655,   655,   655,   655,   655,
     655,   655,   655,   655,   655,   655,   655,   655,   656,   656,
     656,   656,   657,   657,   658,   658,   659,   659,   659,   659,
     659,   659,   659,   659,   659,   659,   659,   659,   660,   660,
     661,   661,   662,   662,   663,   664,   664,   665,   665,   665,
     666,   666,   666,   666,   667,   667,   667,   667,   668,   668,
     669,   669,   670,   671,   671,   671,   671,   672,   672,   672,
     673,   673,   673,   674,   674,   674,   675,   675,   676,   676,
     676,   677,   678,   678,   679,   680,   680,   680,   681,   681,
     681,   682,   682,   683,   683,   684,   684,   685,   686,   686,
     686,   687,   687,   688,   688,   688,   689,   689,   690,   691,
     691,   692,   692,   693,   693,   694,   695,   695,   696,   696,
     697,   697,   698,   698,   699,   699,   700,   700,   700,   700,
     700,   700,   701,   701,   702,   702,   703,   704,   704,   705,
     705,   706,   707,   708,   709,   709,   709,   709,   710,   710,
     710,   710,   711,   711,   711,   711,   713,   712,   714,   715,
     715,   715,   715,   716,   716,   717,   717,   718,   719,   719,
     720,   720,   720,   720,   721,   721,   721,   721,   721,   722,
     722,   723,   724,   724,   724,   725,   725,   726,   726,   727,
     727,   728,   728,   728,   728,   728,   728,   728,   728,   728,
     728,   728,   729,   729,   730,   730,   731,   731,   731,   732,
     732,   733,   733,   734,   735,   735,   736,   736,   737,   737,
     737,   737,   738,   738,   739,   739,   740,   740,   741,   741,
     741,   741,   741,   741,   741,   741,   741,   741,   741,   741,
     741,   741,   742,   742,   742,   742,   742,   742,   742,   742,
     742,   743,   743,   744,   744,   745,   745,   746,   747,   747,
     747,   748,   748,   748,   749,   749,   749,   749,   750,   750,
     750,   750,   751,   751,   752,   752,   752,   753,   753,   754,
     755,   756,   756,   756,   756,   757,   757,   757,   758,   758,
     759,   760,   761,   762,   763,   763,   763,   763,   763,   763,
     763,   764,   765,   765,   766,   767,   767,   768,   768,   769,
     769,   770,   770,   771,   772,   772,   773,   773,   774,   774,
     775
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     2,     0,     1,     2,     7,     6,     1,     3,     1,
       1,     3,     0,     1,     2,     3,     1,     3,     0,     1,
       1,     2,     2,     0,     2,     2,     2,     2,     5,     0,
       2,     3,     3,     2,     2,     2,     1,     3,     2,     1,
       1,     4,     2,     1,     2,     2,     1,     3,     4,     3,
       1,     5,     7,     2,     7,     7,     5,     5,     6,     0,
       2,     1,     3,     2,     4,     1,     1,     1,     1,     1,
       1,     2,     4,     1,     1,     2,     0,     1,     9,    12,
       4,     0,     1,     3,     3,     0,     1,     1,     3,     1,
       3,     6,     6,     6,     5,     1,     1,     1,     0,     1,
       1,     3,     1,     5,     4,     4,     1,     4,     4,     0,
       5,    12,     0,     3,     0,     3,     0,     3,     5,     7,
       7,     6,     7,     5,     0,     3,     6,     6,     6,     6,
       4,     0,     3,     2,     1,     1,     1,     3,     2,     1,
       1,     2,     2,     1,     3,     1,     1,     4,     3,     3,
       3,     4,     3,     4,     3,     5,     5,     5,     0,     5,
      10,     0,     2,     0,     4,     0,     2,     0,     3,     1,
       1,     1,     5,     6,     0,     3,     1,     3,     2,     2,
       0,     1,     1,     5,     5,     5,     0,     1,     0,     2,
       7,     6,     0,     2,     4,     0,     2,     4,    15,     0,
       2,     0,     3,     6,     6,     0,     1,     0,     3,     0,
       5,     0,     2,     0,     2,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     8,     5,     4,
       5,     6,     1,     1,     1,     0,     2,     7,     4,     1,
       1,     3,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     2,     4,     2,     3,     3,     1,     2,     2,     2,
       2,     1,     3,     0,     4,     0,     5,     1,     2,     1,
       3,     0,     3,     3,     2,     0,     2,     7,     1,     3,
       1,     3,     4,     4,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     2,     1,     2,     0,     3,     0,
       1,     1,     0,     2,     1,     4,     6,     6,     8,     1,
       7,     9,     0,     1,     3,     3,     6,     1,     3,     1,
       1,     1,     0,     1,     0,     1,     1,     5,     6,     4,
       5,     4,     5,     1,     1,     1,     2,     1,     5,     6,
       4,     5,     4,     5,     1,     2,     1,     4,     2,     5,
       1,     1,     0,     5,     4,     4,     4,     3,     5,     1,
       2,     1,     2,     4,     0,     1,     7,     2,     1,     3,
       1,     3,     3,     0,     1,     1,     4,     5,     1,     6,
       1,     2,     3,     3,     0,     2,     2,     2,     1,     1,
       0,     1,     2,     1,     1,     3,     3,     5,     0,     2,
       4,     2,     0,     3,     6,     6,     0,     2,     0,     2,
       3,     4,     3,     3,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     6,     5,     5,
       4,     0,     2,     4,     4,     3,     4,     3,     6,     5,
       4,     1,     1,     1,     2,     1,     3,     4,     3,     3,
       3,     3,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       5,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     6,     0,     2,     7,     3,     3,     4,
       4,     3,     2,     3,     3,     2,     2,     1,     2,     0,
       1,     1,     3,     5,     7,     4,     6,     1,     1,     1,
       3,     5,     1,     3,     3,     0,     1,     1,     3,     3,
       1,     4,     8,     6,     6,     6,     6,     6,     8,     6,
       3,     6,     6,    10,     8,     8,     7,     1,     1,     4,
       1,     4,     4,     3,     6,     4,     3,     1,     3,     1,
       1,     3,     3,     1,     1,     1,     1,     1,     4,     3,
       1,     2,     1,     2,     4,     2,     4,     2,     4,     6,
       1,     2,     3,     5,     5,     5,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     1,
       1,     1,     1,     2,     2,     1,     2,     2,     1,     1,
       1,     3,     5,     4,     1,     3,     5,     4,     1,     3,
       5,     4,     1,     3,     5,     4,     2,     4,     3,     1,
       3,     5,     7,     6,     1,     3,     5,     7,     6,     1,
       4,     6,     1,     4,     6,     1,     1,     1,     1,     4,
       1,     2,     2,     2,     1,     4,     4,     1,     1,     1,
       1,     1,     4,     1,     4,     2,     1,     4,     4,     1,
       1,     1,     1,     1,     4,     4,     1,     4,     2,     1,
       1,     1,     1,     1,     4,     4,     1,     2,     2,     2,
       1,     7,     1,     1,     1,     1,     1,     0,     1,     0,
       2,     2,     2,     3,     2,     1,     4,     3,     2,     2,
       1,     1,     1,     1,     1,     1,     1,    13,     0,     2,
       0,     1,     7,     9,    12,     6,     2,     3,     6,     1,
       1,     0,     2,     2,     3,     1,     3,     4,     6,     6,
       1,     1,     1,     0,     1,     0,     2,     2,     2,     2,
       2,     2,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     0,     9,     3,     1,     1,     1,     3,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     0,     4,     1,     2,     2,     1,     0,
       2,     2,     1,     3,     1,     3,     3,     3,     1,     0,
       3,     0,     2,     1,     1,     1,     3,     1,     3,     2,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     4,     5,
       3,     6,     1,     1,     1,     3,     2,     2,     2,     2,
       2,     3,     2,     2,     1,     2,     1,     1,     3,     4,
       3,     4,     1,     1,     6,     0,     2,     5,     2,     1,
       2,     2,     2,     1,     4,     3,     3,     5,     2,     3,
       2,     1,     5,     1,     1,     1,     1,     0,     1,     3,
       1,     1,     1,     0,     1,     3,     0,     1,     4,     9,
       9,    10,     0,     2,     1,     1,     1,     2,     1,     2,
       1,     0,     2,     1,     3,     3,     3,     3,     3,     3,
       3,     0,     2,     1,     3,     3,     1,     3,     3,     0,
       5,     0,     4,     0,     1,     8,     0,     3,     1,     3,
       1,     3,     0,     1,     0,     2,     0,     2,     2,     2,
       2,     2,     0,     7,     1,     1,     3,     1,     2,     0,
       3,     9,     4,     3,     1,     3,     5,     4,     1,     3,
       5,     4,     1,     3,     5,     4,     0,     9,     4,     0,
       5,     5,     2,     0,     2,     0,     2,     3,     1,     3,
       0,     3,     6,     3,     0,     2,     2,     4,     4,     0,
       3,     7,     0,     4,     4,     0,     2,     0,     1,     1,
       2,     1,     2,     3,     5,     4,     8,     8,     3,     1,
       1,     2,     0,     1,     1,     3,     0,     1,     1,     2,
       3,     1,     3,     4,     7,     5,     3,     2,     0,     3,
       3,     6,     0,     2,     0,     1,     1,     2,     2,     3,
       3,     1,     2,     2,     2,     3,     3,     5,     4,     3,
       4,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,    10,     9,     6,     7,     6,
       3,     9,     8,     3,     6,     4,    10,    10,     8,     6,
      12,    12,     1,     3,     3,     7,     7,     1,     1,     5,
       4,     3,     4,     2,     3,     0,     4,     4,     0,     2,
       7,     7,     3,     3,     1,     4,     1,     4,     1,     6,
       7,     1,     1,     3,     5,     1,     3,     4,     6,     1,
       3,     0,     1,     5,     2,     4,     0,     3,     0,     2,
       8
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,    37,     0,     0,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    60,    61,    62,    56,    57,    59,    58,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    84,    83,
      82,    97,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,   106,   107,    96,   116,   117,   118,     0,
     845,     0,   196,     0,     0,     0,     0,     0,     0,   439,
       0,     0,     0,   837,   837,     0,     0,     0,     0,     0,
       0,     0,   659,    98,     0,     0,   657,   658,     0,     0,
     105,     0,     0,   687,   688,   690,    99,   100,   101,   102,
     103,   104,   108,   109,   110,   111,   112,   113,   114,   115,
       0,     0,     3,     4,     5,    15,   651,    19,    20,    23,
      22,    16,    24,    10,     8,     9,     6,    25,    26,    29,
      27,    28,    30,    31,    32,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   337,   353,   350,   342,   343,
     341,   351,   339,   340,   475,   338,   464,   477,   466,   484,
     486,     0,   999,   352,   850,   851,   852,   344,   348,   854,
     855,   856,     7,   349,     0,    33,    34,   853,   345,   347,
      35,    11,    12,    13,    14,    36,    21,    40,   750,     0,
       0,     0,   870,     0,   869,     0,   366,     0,  1158,     0,
       0,   325,     0,  1157,   190,     0,   189,   193,   870,     0,
     186,     0,     0,   187,   188,     0,   185,     0,     0,     0,
       0,     0,     0,     0,     0,   194,   197,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   254,   260,   259,
     265,   236,   236,   236,     0,     0,    98,   836,     0,   255,
     256,     0,   263,   266,     0,   372,   373,   374,     0,   414,
     440,   441,   437,   449,   444,     0,     0,     0,   108,     0,
       0,   405,     0,     0,   659,   651,   476,   998,   838,   841,
     838,   842,   844,   837,     0,     0,     0,     0,   837,     0,
       0,   254,     0,     0,    98,     0,     0,   848,   849,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   364,
     488,     0,     0,     0,     0,     0,     0,     1,     2,   196,
       0,     0,     0,     0,    17,    18,     0,   492,   492,   465,
       0,   665,     0,     0,   693,   649,     0,   727,   728,   729,
     730,   733,   731,     0,   834,   835,   732,   116,   774,   734,
     705,     0,     0,     0,     0,     0,     0,     0,     0,   769,
     601,   585,     0,     0,   606,   607,   612,   647,   604,   599,
     608,   609,   610,   611,   703,   600,   704,     0,   720,   346,
       0,   614,   615,  1222,   605,   754,   278,     0,  1102,  1113,
       0,     0,     0,   326,     0,   269,   191,     0,   762,     0,
     268,   229,  1261,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   195,     0,     0,     0,   462,     0,   270,
    1098,   218,     0,   274,   201,   203,   272,   204,  1047,  1048,
    1050,     0,     0,     0,   312,  1242,  1243,  1049,   253,     0,
     262,   258,   261,     0,     0,     0,     0,     0,     0,     0,
     769,     0,   375,     0,     0,     0,     0,     0,     0,     0,
       0,   504,   699,   597,     0,   700,   598,   501,   596,   594,
       0,   595,   613,     0,   615,     0,     0,     0,     0,  1005,
    1006,   315,     0,     0,   405,   766,   452,     0,   843,   839,
    1094,     0,     0,     0,     0,   847,     0,   665,   253,     0,
       0,     0,     0,     0,     0,   649,   649,   649,     0,   649,
     649,     0,   649,   680,   649,     0,     0,     0,     0,   294,
       0,  1228,     0,  1095,   652,   492,     0,     0,   492,     0,
     492,   769,   697,   662,   666,   670,     0,   667,  1227,     0,
       0,   751,   697,     0,   650,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   710,     0,     0,     0,     0,     0,
       0,     0,     0,   597,   596,     0,     0,   646,     0,   648,
       0,   721,   665,     0,     0,   281,     0,   871,     0,     0,
    1109,     0,     0,     0,     0,     0,     0,     0,   179,   234,
    1262,     0,  1035,  1036,     0,     0,   871,     0,   224,     0,
       0,     0,     0,     0,     0,   832,     0,   871,     0,     0,
     403,   463,     0,   271,     0,   219,   220,  1108,     0,   200,
     202,   273,   225,  1092,     0,     0,   314,     0,   830,     0,
     181,     0,     0,     0,     0,   257,   244,   264,     0,   692,
       0,   403,     0,     0,     0,     0,     0,   429,   424,   425,
     428,   426,   427,     0,     0,   435,   438,   442,     0,   592,
     593,     0,   499,   502,     0,     0,   597,   596,     0,   494,
     495,   505,   462,   645,     0,     0,     0,     0,     0,     0,
     642,     0,     0,   648,     0,   665,     0,   267,     0,  1004,
       0,   317,   405,     0,   768,   462,   453,     0,     0,  1227,
       0,   846,     0,  1156,  1156,  1230,     0,   205,   205,     0,
     205,   179,     0,     0,     0,     0,     0,     0,     0,   250,
       0,     0,     0,     0,     0,     0,     0,     0,   697,     0,
       0,     0,     0,   689,   691,     0,   487,     0,  1097,   655,
       0,     0,     0,     0,   482,   490,   491,   471,     0,   480,
     469,   492,     0,     0,     0,     0,   671,     0,   665,   753,
       0,     0,     0,     0,     0,     0,     0,   737,   738,   806,
     787,   812,   782,     0,   788,   785,   779,   790,   786,   813,
     794,     0,     0,   809,   810,   797,   800,   798,   799,   736,
     801,   803,   811,   735,   665,     0,   717,     0,     0,     0,
       0,   556,   564,   557,   558,   559,   560,   561,   562,   563,
     565,     0,     0,     0,   712,   709,   711,     0,     0,     0,
     665,     0,     0,     0,   586,   602,     0,     0,     0,   775,
       0,   770,  1223,  1213,     0,     0,  1224,   722,     0,     0,
     755,     0,     0,     0,   882,   880,   881,   873,     0,   875,
       0,     0,   902,     0,  1103,  1114,     0,     0,  1106,  1203,
     192,   321,     0,     0,     0,   763,   473,   119,   474,     0,
       0,     0,   127,   129,   130,     0,     0,     0,   230,     0,
       0,  1259,  1263,  1037,  1040,  1038,   234,     0,     0,     0,
       0,     0,  1089,     0,   303,   306,  1235,  1235,     0,   902,
     871,     0,   541,     0,   368,   277,     0,  1099,   321,   304,
     313,   238,     0,   237,     0,     0,     0,     0,     0,     0,
     243,     0,   770,   376,   236,   433,     0,     0,   420,     0,
     430,   431,   432,   434,   436,     0,     0,   445,     0,     0,
     500,     0,   707,   706,     0,   696,     0,     0,     0,     0,
     507,   508,   518,   534,   405,   515,     0,   542,   644,     0,
     641,   643,  1093,   589,   588,   590,   591,  1224,   701,   702,
       0,   988,     0,   275,     0,     0,  1003,  1007,   316,   767,
       0,     0,     0,   403,     0,  1227,     0,   840,     0,  1095,
       0,     0,     0,   218,  1156,     0,  1168,  1233,     0,   206,
       0,     0,   214,     0,     0,   222,   223,   276,   665,   997,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   305,     0,     0,   205,   205,
     205,     0,  1096,   653,   483,   472,     0,     0,   481,   470,
       0,   478,   467,   660,     0,   664,   663,   698,   668,   669,
       0,   752,   694,   698,     0,     0,     0,   726,     0,     0,
       0,   791,     0,     0,     0,     0,     0,   792,   793,   805,
       0,     0,     0,     0,     0,   554,     0,   584,     0,     0,
     565,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     715,     0,   708,   713,   718,     0,     0,     0,   587,     0,
       0,     0,     0,  1097,     0,   990,     0,   665,  1215,   757,
       0,     0,   282,     0,   874,     0,     0,   819,   872,   820,
     898,   900,   896,   901,   895,   899,   897,     0,     0,   281,
    1105,     0,  1202,  1192,  1193,  1194,  1195,  1196,  1197,  1198,
    1199,  1200,  1201,  1112,     0,  1115,     0,     0,     0,   323,
       0,     0,   765,     0,     0,     0,   126,   180,   173,   122,
     179,     0,     0,   196,     0,     0,   822,   823,     0,   821,
     149,   826,     0,     0,     0,     0,  1039,     0,     0,   866,
     868,     0,     0,     0,     0,   311,   307,   308,     0,  1238,
    1238,     0,     0,   902,     0,     0,  1101,     0,   324,     0,
     182,   251,   251,   241,   251,     0,     0,     0,     0,     0,
       0,   418,     0,   443,   442,     0,   442,     0,     0,   497,
     695,     0,     0,   524,   534,     0,     0,   534,     0,   530,
     530,   530,   528,   529,   524,   533,     0,   513,     0,   546,
       0,   640,   665,   989,  1215,  1001,  1000,  1002,     0,     0,
     383,   389,     0,     0,   396,     0,     0,   387,   388,   390,
     386,   385,     0,   401,     0,     0,   454,   456,   455,  1227,
    1097,     0,     0,   218,     0,  1234,  1167,     0,  1231,     0,
    1174,  1268,   212,   209,   207,   211,   213,   180,     0,   248,
     247,   249,   246,     0,   682,   681,   677,     0,   675,   676,
       0,     0,   674,   679,   673,   295,   296,   300,   300,   656,
       0,     0,     0,   479,   468,     0,  1207,     0,   725,   724,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   723,     0,   555,   552,   553,   716,     0,     0,     0,
     582,   581,   583,     0,   566,     0,     0,   577,     0,   575,
     571,     0,   634,     0,  1229,   603,     0,     0,     0,   776,
       0,   771,  1210,   991,     0,   756,     0,   283,   876,   902,
     816,   818,     0,   885,     0,  1104,     0,     0,     0,  1137,
    1204,     0,     0,     0,   513,   764,   120,   121,   123,     0,
     125,   128,     0,     0,     0,     0,     0,     0,     0,   828,
     829,   827,   131,   235,     0,   232,   226,  1251,  1252,     0,
    1260,  1032,   758,     0,   867,   871,     0,  1087,     0,   439,
       0,  1068,  1063,     0,   310,     0,     0,  1240,  1241,     0,
       0,   923,   862,     0,   833,   403,     0,  1100,     0,     0,
     242,   240,   239,   245,     0,   771,     0,   377,   379,   422,
     423,   421,     0,   447,   442,   446,     0,     0,     0,     0,
     535,     0,     0,   536,   509,   531,   525,   526,   527,   532,
       0,   514,     0,     0,     0,   294,     0,   638,   637,     0,
     400,   398,   384,    74,     0,   393,   399,   397,   391,     0,
     406,     0,     0,  1096,     0,  1232,     0,  1132,     0,  1181,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1166,  1175,  1176,     0,  1266,     0,     0,   221,   686,     0,
       0,     0,     0,     0,   301,   302,   298,   299,   654,   493,
     294,   661,   672,   807,   815,   783,     0,   789,   780,     0,
     814,   795,   796,   808,   802,   804,   633,     0,     0,   576,
     571,   580,     0,     0,   574,     0,     0,   570,   714,     0,
       0,   719,     0,     0,   778,   773,     0,     0,  1214,   279,
       0,   285,     0,     0,   877,     0,     0,     0,     0,   904,
       0,     0,     0,     0,  1116,  1141,     0,  1149,     0,     0,
       0,     0,  1150,  1152,  1138,  1139,     0,   322,     0,     0,
     124,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   159,     0,     0,   170,     0,   160,     0,     0,
       0,   166,   163,   150,   228,     0,   227,  1257,     0,     0,
    1041,     0,     0,   902,     0,  1090,  1088,     0,     0,  1070,
       0,  1064,  1082,   309,     0,  1239,     0,   300,     0,   929,
       0,   367,   404,     0,     0,   773,     0,     0,   419,   450,
     442,   498,     0,     0,   294,     0,   516,     0,   538,     0,
     520,     0,     0,     0,   543,   547,   548,   639,  1214,   395,
     394,     0,   402,   403,   883,  1172,     0,     0,  1135,  1169,
    1170,  1183,  1184,     0,     0,     0,     0,  1182,  1178,     0,
       0,     0,     0,  1177,  1269,  1266,  1270,   210,   208,     0,
     684,   685,   678,   297,   489,     0,     0,     0,     0,   569,
     568,   579,   572,     0,   635,   636,  1225,  1226,     0,     0,
     777,   772,     0,     0,   287,   739,   740,   741,   742,   745,
     748,     0,     0,   749,   902,   902,     0,     0,   888,   886,
     887,   891,   889,   890,   863,  1110,  1111,     0,  1118,     0,
    1151,     0,     0,     0,  1142,     0,  1107,  1153,  1154,  1140,
    1206,   327,     0,   176,     0,     0,     0,   177,   825,   824,
     153,   158,     0,   164,   162,   234,     0,     0,   155,   154,
     165,     0,     0,     0,  1253,  1033,     0,     0,     0,   759,
       0,     0,  1084,  1085,  1086,     0,  1051,  1069,     0,     0,
    1091,  1236,  1237,   198,     0,   183,     0,     0,     0,   943,
     928,   929,   925,   922,     0,   944,   945,     0,     0,   252,
     772,     0,   380,   382,   448,  1225,  1226,   517,   518,     0,
       0,   537,     0,   521,     0,     0,     0,     0,     0,   403,
     392,   451,  1159,   884,     0,     0,  1161,     0,  1165,     0,
       0,     0,   634,     0,  1185,  1186,     0,  1179,  1180,     0,
    1191,  1189,     0,     0,     0,     0,     0,   784,   781,   567,
     578,     0,   665,   665,  1212,  1227,  1209,     0,     0,   286,
       0,   280,   744,   747,   743,   746,   879,   878,   817,   885,
    1117,     0,  1148,     0,     0,  1143,     0,     0,  1156,     0,
     335,     0,     0,   178,   196,     0,   132,     0,   169,     0,
       0,   156,     0,   167,   233,     0,  1255,  1258,     0,     0,
    1042,  1043,  1034,  1031,   761,     0,     0,   865,   496,   462,
       0,     0,  1071,     0,  1268,   300,     0,   972,   973,   947,
       0,     0,     0,     0,   953,   952,     0,   924,   926,   934,
     106,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     439,     0,     0,     0,     0,     0,  1011,     0,     0,   769,
     916,   920,   914,   915,   917,   913,   918,   919,   910,   911,
     912,   999,   992,   921,     0,   930,   932,     0,   984,     0,
       0,     0,     0,   987,   986,   613,   614,   927,  1205,   831,
     378,     0,   665,   665,   523,   539,     0,   522,   510,     0,
     519,     0,     0,   549,     0,   506,     0,  1160,   883,  1173,
    1172,   138,     0,  1136,  1120,     0,  1188,     0,  1190,  1246,
    1244,  1248,  1264,  1267,     0,   683,   573,     0,     0,  1227,
    1208,   284,     0,     0,  1119,     0,  1145,     0,     0,  1155,
       0,     0,   329,     0,   175,   174,   168,     0,   143,   133,
     136,     0,     0,     0,   161,     0,     0,     0,     0,     0,
       0,   760,   858,   542,  1052,     0,  1061,     0,  1266,   184,
    1137,   291,   289,   290,     0,     0,     0,   946,     0,   949,
     950,     0,   970,     0,     0,     0,  1017,     0,     0,     0,
     365,     0,  1008,     0,   411,     0,     0,     0,     0,  1010,
     980,     0,     0,   929,   931,   983,   976,   979,   985,   982,
     978,   977,   381,     0,     0,     0,   512,     0,   545,   544,
     550,  1129,  1162,  1164,     0,   139,  1133,  1134,     0,  1124,
    1171,  1187,     0,     0,     0,     0,  1216,  1217,   288,     0,
    1144,     0,     0,   328,   336,     0,   319,   231,     0,     0,
       0,     0,   148,   134,     0,   151,   152,   157,     0,  1256,
    1045,  1046,  1044,     0,   860,   546,     0,   596,  1056,     0,
       0,  1059,  1072,   199,   864,     0,     0,   948,     0,   951,
     968,     0,     0,     0,     0,  1014,  1013,  1015,  1018,     0,
    1016,   941,   935,   936,     0,     0,  1009,     0,   413,     0,
     937,     0,     0,   981,   905,   906,   907,     0,   933,  1216,
    1217,   540,   511,   551,     0,  1163,     0,     0,     0,     0,
    1131,     0,     0,     0,     0,  1265,     0,     0,   892,     0,
       0,     0,     0,   331,   140,     0,   137,   135,   147,   146,
     145,   144,     0,     0,   859,   861,   857,   294,     0,     0,
    1058,     0,     0,     0,  1063,  1073,  1074,   292,     0,   974,
     922,   969,     0,   947,  1026,     0,   938,  1028,   922,     0,
       0,     0,   369,   457,   461,   459,   460,   407,     0,   409,
       0,     0,   941,   941,   909,     0,     0,  1123,  1121,  1125,
    1126,  1247,  1245,     0,     0,     0,   903,     0,     0,     0,
       0,   320,     0,   333,   142,   141,   171,     0,  1254,  1054,
    1055,  1057,     0,     0,  1066,     0,  1076,   293,     0,   960,
       0,   955,   954,   971,   963,   964,   956,   959,   965,   962,
     967,   966,   613,   614,     0,  1027,     0,  1019,     0,   942,
     370,     0,     0,   408,   412,     0,     0,   995,  1012,   908,
    1130,     0,     0,     0,     0,     0,   894,   893,  1146,  1147,
       0,   332,     0,   318,     0,  1062,     0,     0,  1065,  1075,
       0,     0,  1083,   961,   975,     0,  1023,   940,   371,   458,
     410,   415,   941,   994,     0,  1128,  1127,  1249,     0,   330,
     334,   172,     0,     0,  1081,  1080,  1079,  1077,  1078,     0,
    1020,  1021,  1024,     0,  1022,   411,   417,   996,  1122,  1250,
    1060,  1067,   941,   941,     0,   416,  1030,  1029,  1025
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   121,   122,   123,   124,   125,   379,  1176,  1410,   127,
     891,   892,   893,  2088,  2089,  2090,  2166,  2276,  2192,  1641,
    1422,  1941,  1642,  1942,  1643,  1938,   894,   895,  1491,  1666,
     235,   236,   237,   128,   129,   639,   130,  1020,  1305,  1302,
     131,   132,   731,   637,  1026,   133,   134,   135,  1425,   898,
     136,   609,  1646,   899,   460,   137,   940,   138,  1460,   268,
     269,   270,   271,   272,   139,   140,   141,   142,   143,   144,
     595,   145,   863,  1591,  1754,  1911,  2115,  1839,   756,  1325,
    1326,  1546,   146,   147,   148,  1207,  1444,   149,   646,   150,
     711,   151,   152,  2273,  1169,   153,   154,   414,  1930,  2186,
    2343,  2403,  2082,   155,   156,  2000,  2001,  2002,  2003,  2004,
     278,   661,  2005,  1467,  1851,  1852,  1283,  1284,   924,   505,
    2319,  2320,  2238,  2006,  2007,  2446,  2008,  1232,   950,   675,
     676,   283,   473,   284,   957,   285,  2009,   715,   716,  2010,
    2312,  2313,   630,   350,   581,   887,   336,   166,   167,   168,
     766,   767,   547,   169,   170,  1441,   682,   683,   481,   689,
     690,   691,  1959,   970,  2039,  1865,  1492,  1243,  1688,  1255,
    1486,  1256,   972,   973,  1861,   631,  1259,  1495,  1869,   922,
     821,   822,   823,   824,   825,  1577,   826,   827,   828,  1363,
     829,   380,   381,   830,   483,   484,   384,  1580,   385,  1328,
     553,   386,   387,   563,   171,   554,   555,   556,   388,   486,
     557,   487,   389,   964,   390,   391,   573,   833,   834,   574,
     392,   393,   394,   395,   396,  1764,   291,   406,  1433,   419,
     975,   488,   812,  1137,  1391,  1138,  1190,   650,   626,  1455,
     398,   273,   299,   721,   173,   174,  2204,  2286,   175,   909,
     910,   176,   911,   872,   597,   868,   869,   870,  1874,  1599,
    2267,  2268,  1148,  1149,  2246,  2247,  2013,  2014,  2306,  1669,
    1841,  1842,  1843,  2015,  2307,  2308,  2309,  1844,  1845,  1970,
    1976,  2363,  1846,  1971,  2300,  2016,   489,   703,   490,  2018,
    2423,  2019,   997,  2020,  2021,  2022,  2023,  2228,  2229,  2442,
    2443,  2376,  2024,   179,  1650,  1953,   615,   907,  1817,  1950,
    1951,   180,   181,  1961,  2208,  2209,  2106,  2294,  2211,  1662,
    1659,  2408,  1442,  1660,  2296,  2356,  2412,  1830,  1824,  1437,
    1438,  1204,   182,   183,   491,   184,   441,   409,   185,  1165,
     186,   878,   600,  1399,  1604,  1777,  2169,  2260,  2255,  1298,
    1708,  1882,  1613,  1614,  1615,  1786,  1787,  1012,  1705,  1875,
    1876,  1016,  1017,  1300,  1878,  1530,  1531,  1532,  1162,  1163,
    1167,   187,   492,  1382,   493,   401,   189,   494,   403,   544,
     404,   190,   725,  1209,  1447,   191,   192,   193,   194,  2062,
    1428,  1429,  1946,  1947,   901,   902,   611,   195,  1894,  1726,
    1534,   196
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2149
static const yytype_int16 yypact[] =
{
   11002, -2149, 21444,  -178, -2149, -2149,   -46, -2149, -2149, -2149,
   -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149,
   -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149,
   -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149,
   -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149,
   -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149,
   -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149,   635,
   -2149,   252,  1195,    36,   856, 17135,  -140,   576,   262,   666,
   17995, 19319, 14797,   496,   515,   557,   357,   292,   504,   489,
   15310, 17320,   -14, -2149, 17505, 17883, -2149, -2149, 21444,   762,
   -2149,   470,   434, -2149,   448,   458, -2149, -2149, -2149, -2149,
   -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149,
     187,   844,   486, -2149,  1003, -2149,    -8, -2149, -2149, -2149,
   -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149,
   -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149,
   -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149,
   -2149, -2149, -2149, -2149, -2149, -2149,    22, -2149, -2149, -2149,
   -2149,   516, -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149,
   -2149, -2149, -2149, -2149,   787, -2149, -2149, -2149, -2149, -2149,
   -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149,   590,   215,
     981, 14107, -2149, 21444, -2149, 21444, -2149, 21444, -2149,   947,
     833,   250, 21444, -2149, -2149,   843, -2149, -2149,   824, 21444,
   -2149, 21444, 21444, -2149, -2149,  1015, -2149, 21444, 21444, 21444,
      33,   710, 19402, 21444, 21444, -2149,  1273,   880, 21444,  1018,
   21444, 19485, 21444,   812, 21444, 21444, 21444, 21444, 21444, 21444,
   21444, 21444,   310, 19800, 21444, 21444, 21444,   906, -2149, -2149,
   -2149,   737,   737,   737,   885,   953,   958, -2149,   971,   783,
   -2149,   -52, -2149, -2149, 19883, -2149, -2149, -2149, 21444, -2149,
   -2149, -2149, -2149, -2149,   860, 11347,  1012, 21444,   848,   391,
   21444, 18310,  1016,   839, -2149,   883, -2149, -2149, -2149, -2149,
    1227, -2149, -2149,   496, 21444,  1217, 21444,  1098,   496, 12727,
     889,  1105,  1091,  1132,  1141,  1162,   -53, -2149, -2149,   986,
    1022,  1024,  1026,  1035,  1042,  1046,  1048,  1064,   285, -2149,
     370,  1092,  1381, 12727, 12727,   -79,  1007, -2149, -2149,  1851,
    1238,   869,   390,   395, -2149, -2149,  3790,    55,    57, -2149,
    1356, 12727, 19976,  4697, -2149, 12727,  1108, -2149, -2149, -2149,
   -2149, -2149, -2149,  1114, -2149, -2149, -2149,  1288, -2149, -2149,
   -2149, 17883,  1127,  9967,  1131,  1134,  1138, 21444,  7897,    59,
    1133, -2149,  1149,  1157,  1174,  1176,  1178, -2149,  1180,  1189,
    1196,  1200,  1214,  1221, -2149,  1242, -2149,  1149,   558,   299,
    1165,  1244, -2149,  1254,  1258,  1270,  1359,  1187,  1272,  1375,
   21444,  1423,  1463, -2149,  1498, -2149, -2149, 21444,  1287,    26,
   -2149, -2149,  1536,   957,  1187,  1425,  1685, 21444, 21444,  1591,
    1545,  1595,  1556, -2149, 21444,  1187, 19976,  1510, 21444,  1593,
    1344,   438,  1552, -2149, 21444, -2149,  1614, -2149, -2149, -2149,
   -2149,  1736, 21444,  1655,  1571, -2149, -2149, -2149,  1576, 21444,
   -2149, -2149, -2149, 21444, 17883,  1769, 21444,   928, 20291, 20291,
    1404,  1408,  1621,  1803,    54, 12727, 12727,  1413, 21444,  1779,
    7897,  1637, 16951,  1149,  1416, -2149, -2149,  1418,   -23, -2149,
    1690, -2149,  1429,  1433,  1694, 21444, 21444,  1472, 12727, -2149,
   -2149,  1705, 21444,  1633,  1616, -2149, 21444,  4173, -2149,  1440,
    1447,    34,  1652,   580, 21444, -2149,   820, 12727, -2149, 21444,
   17883,  1823, 21444, 20291,  1809, 12727, 12727, 12727, 12727, 12727,
   12727,  1827, 12727, -2149, 12727,  1737,  1686,   845,   875,  1740,
   21444, -2149, 19976,   324, -2149,  1538,  1715,   297,  1538,   297,
     111,    27, 16951, -2149,  1470,  1471,  1477,  1478, -2149,  1479,
   21444,  1481,  1814,  1484,  1485, 12727, 10312,  1768,  1486,  1609,
   12727, 10657,   753,   -56, -2149, 12727, 12727, 12727,  1490,   -79,
    8242,  1491,   538,    -4,     9,  2737, 12727,  1499, 19976,  1499,
     734, -2149, 12727,  4780,  1684,  1773,   113,  1626,  4863, 21444,
     216,  1187,  1794, 21444,  1711,  1785,  5211,   297, 18393,  1523,
   -2149,  1745, -2149, -2149,  1731,   483,  1626,   243, -2149,  1805,
    1806, 21444, 21444, 12727, 12727, -2149,  1741,  1626,  1187,  8587,
    1734, -2149, 21444, -2149,  5294, -2149, -2149, -2149, 21444, -2149,
   -2149, -2149, -2149, -2149, 21444,  1774, -2149, 20291,  1547,   530,
   -2149,  1723,  1726,  1735,  1739, -2149,   -73, -2149,  4256, -2149,
    1930,  1734,  1931,  1567,  1572,    73,    73, -2149, -2149, -2149,
   -2149, -2149, -2149,  1929,  1934, -2149,  1803,   -69, 12727, -2149,
   -2149, 12727, -2149,  1413,   834,  1692,    20,    17, 15738, -2149,
   -2149, -2149,  1744, -2149, 18513, 12727, 12727, 12727, 12727, 12727,
   -2149, 19976, 12727,    18, 12727, 12727, 21444, -2149,  -128,  1814,
    1630, -2149,  1616,  1587, -2149,   -41, -2149,  1852, 19976,  1590,
    1954, -2149,  5377,  1043,   849, -2149, 21444,  1623,  1656, 21444,
    1895,    52, 21444,  1594,  1597,  1816,  1818,  1820,  1824,  1600,
    1602,  1605,  1606,  1607,   479,  1608,  1615,  1834,  1610,  1620,
    1629, 21444, 12727, -2149, -2149,  1862, -2149,   678,   543, -2149,
   19976,   297,  1622,   257, -2149, -2149, -2149, -2149,   297, -2149,
   -2149,  1538,   297, 12727, 21444, 12727, -2149, 12727, 12727, -2149,
   21444,  1751, 12727,   641, 12727, 12727,   990, -2149, -2149,  1635,
   -2149,  1638,  1639,  1835,  1644, -2149,  1657, -2149, -2149,  1659,
    1660,  1661,   -29,  1662, -2149, -2149, -2149, -2149, -2149, -2149,
    1663,  1665, -2149, -2149, 12727,  1650,  1814, 10657,  1666,  6862,
     527, -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149,
    1840, 12727, 12727,   570, -2149, -2149, -2149,   553,  1703,   685,
   12727,  1677,   -79,  1491, -2149,  1678, 12727, 21444, 21444, -2149,
   19976,    82, -2149, -2149,   193, 12727,  1682, -2149,  1687, 21444,
    1680,  1696, 21444,  1903, -2149, -2149, -2149, -2149,   743, -2149,
   19883, 16169,  1821, 21444,  1691, -2149,  2021,  1994, -2149,  1801,
   -2149,  1697, 21444, 21444, 21444,  1695, -2149,   738, -2149, 21444,
   21444,   857, -2149, -2149, -2149,   916, 16484, 21444, -2149,  1966,
    1700, -2149,  1702, -2149, -2149, -2149,  1523,  1898,  1935,  1716,
     532, 21444,  1713,  2082, -2149,  2083,  1452,  1452, 21444,  1821,
    1626,  1919,  1156,  1725, -2149, -2149, 21444,  1720,  1697, -2149,
   -2149, -2149, 21444, -2149, 21444, 20291, 20291, 20291, 20291,  2026,
   -2149, 21444,  1724, -2149,   737, -2149, 12727, 12727, -2149,  2089,
   -2149, -2149, -2149, -2149, -2149,  1797,   156, -2149,   632,   143,
   -2149,  1288, -2149, -2149,  1847, -2149, 21444, 21444, 15738, 14882,
    1729,  1135, -2149, -2149, 15655, -2149, 10657,  1947, -2149,  2078,
    1609, -2149,   879,  1164,  1164, -2149, -2149,  1742, 16951, -2149,
   12727,  1814,  1733, -2149,   943,  1770, -2149, -2149, -2149, -2149,
    1453,  8932, 21444,  1734, 12727,  1738, 19976, -2149, 21444,  1746,
    2079, 21444,  2085,   438,   929, 21444,  2073, -2149,  1808, -2149,
   21444, 21444, -2149, 21444, 21444, -2149, -2149, -2149, 12727, -2149,
   20291, 20291, 20291, 20291, 12727,  1861,  1865,  1867,  2110,  1868,
    1869, 12727, 12727,  1870,  1871, -2149,  1008, 11692,  2032,  2032,
    2032, 19976,   610, -2149, -2149, -2149, 21444,   -79, -2149, -2149,
     297, -2149, -2149,  1814,  1810, 16951, -2149, 16951,  1470,  1471,
    1760, -2149, -2149,  1814, 12727,  1051,  1089, -2149,  2125,  2127,
    2129, -2149,  2130,  2131,  2132,  2133,  2148, -2149, -2149, -2149,
    2150,  2151,  2152,  1791, 12727, -2149,   270, -2149,  7207,    32,
     651, 10657, 10657, 12727,   669,  9277, 12727,  1793,   521, 12727,
    1814,  1334, -2149, -2149, -2149,  1609, 12727,  1795, -2149,  1677,
     915,  1798,  1799,   700,  3258, -2149,   432, 12727,    64, -2149,
   21444, 21444, -2149,  1568, -2149,    91, 16169, -2149,  1958, -2149,
   -2149, -2149, -2149, -2149, -2149, -2149, -2149,  1802,  2159,  1773,
   -2149, 21444, -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149,
   -2149, -2149, -2149,  1856,  2165,  2070, 21444,  2077, 21444, -2149,
    1807,  1811, -2149, 21444,  2134,  2136, -2149, -2149, -2149,   596,
   18393,  1813,  2009,  1273,  2011,  1815,  1819,  1825, 17680, -2149,
   -2149, -2149,   918,   436,  2174,  1745, -2149, 21444, 21444, -2149,
   -2149,  1817,  1187,  2179,   447, -2149, -2149,  1988,  1864,  1991,
    1991,  1826,   326,  1821, 21444,  1453, -2149, 21444, -2149,  1828,
   -2149,    38,    38,  1600,    38,  2022,  1830, 20374,   638,  1128,
    1136, -2149,   920, -2149,  1996,  2188,  1996, 12727, 10657, -2149,
   -2149,  1829,  1833,   985,  1952, 14882,  1837,  1838, 15738,  1923,
    1923,  1923, -2149, -2149,  1113, -2149,  1914, 21444,  2090,  2057,
    1085, -2149, 12727,  1814, -2149, -2149, -2149, -2149,  2208,  2007,
   -2149, -2149,  2120, 20472, -2149, 12727,  2214, -2149, -2149,  2075,
   -2149, -2149,  2114, -2149,   942,  2051, -2149, -2149,  1814,  1854,
   -2149, 21444, 19976,   438, 19976, -2149, -2149, 16169, -2149,  2122,
     642,  2017,  1857, -2149, -2149,  1858, -2149,    84,  1866,  1600,
    1600,  1600,  1600,   721, -2149, -2149, -2149,  1872, -2149, -2149,
    1183,  1197, -2149, -2149, -2149,  1863, -2149,  1570,    86, -2149,
   19976,   948,  1874, -2149, -2149, 12727, -2149,  1220, -2149, -2149,
    1875,  1879,   950,  1880,   954,  1881,  1882,  1883,  1884,  1886,
    1888, -2149,  1230, -2149,  2135, -2149,  1814, 12727,  1891, 12727,
   -2149, -2149, -2149,  1666,  1814,  1376,  7897, -2149,  2065, -2149,
    1427, 12727,  1925,  1235, -2149,  1890,  1892,  1893, 18828, -2149,
   21444,    87, -2149, -2149,  1896, -2149,   967,  2066, -2149,  1653,
    1894, -2149,  1589,  1216,  2118, -2149,  2209,  2103,  1902,   110,
   -2149, 21444,  1904, 21444, 21444, -2149, -2149, -2149, -2149,  2180,
   -2149, -2149, 10657,  1906,  1907,  1908, 21444,  2265,  2270, -2149,
   -2149, -2149,  1010, -2149,   -79,  2084, -2149, -2149, -2149,   980,
   -2149,  2182,  1909,  1916, -2149,  1626,  2177, -2149,    50,   666,
   21444, -2149,  2284,  2285, -2149,  2181,  1964, -2149, -2149, 21444,
    1961, -2149, -2149,  2195, -2149,  1734,   982, -2149, 21444,  2140,
   -2149, -2149, -2149, -2149, 20787,  1922,  1926, -2149, -2149, -2149,
   -2149, -2149,  2288, -2149,  1996, -2149,  1257,    35,  1927,  1928,
   -2149,  1939, 20880, -2149,  1135, -2149, -2149, -2149, -2149, -2149,
   15824,  1941,  1943,  9622, 10657,   606,  2282, -2149, -2149,  1944,
   -2149, -2149, -2149,  2149,  2155, -2149,  1814, -2149, -2149,  2097,
   -2149,  1453, 21444, -2149,  1949, -2149,  1949,    15,  1295, -2149,
    2283,  2286,  2287,  2289,  2154,  2292,  2290,  2021,  2153,  1023,
   -2149,   642, -2149,  2320,  1963, 21444, 21444, -2149, -2149, 12727,
    2081,  2086,  2087, 11692, -2149, -2149, -2149, -2149, -2149, -2149,
    1740,  1814, -2149, -2149, -2149, -2149,  2326, -2149, -2149,  2327,
   -2149, -2149, -2149, -2149, -2149, -2149, -2149,  1756,  7897, -2149,
    1427, -2149, 12727,   987, -2149,   834,  2192, -2149,  1814, 21444,
    1967, -2149, 19976, 19976, -2149,   756,  1968,  3620,    67, -2149,
   12727,  2234,  1596,  1596, -2149,  2334,  2235,   485,   512, -2149,
    1568,  2338,  2021, 21444, -2149, -2149,  2243, -2149,  2341,     5,
    2324,  1982, -2149,  1052,   110, -2149,  2101, -2149,  1983,  1986,
   -2149,    43, 21444, 21444, 21444,   993,  1987,  1990,  2054,  2193,
    1989,  1596, -2149,  2196, 21444, -2149,  2178,  1997,   656, 21444,
    2241, -2149, -2149, -2149, -2149,  2242, -2149,  2212,  2174,  2362,
    2137,  5725, 21444,  1821,  1368, -2149, -2149, 11347, 21444, -2149,
     -80, -2149,  2191, -2149,  1045, -2149,  1013,    86,  2061,   550,
   21444, -2149, -2149,  2001,  2199, -2149, 20963, 12727, -2149, -2149,
    1996, -2149, 19976, 19976, 18921, 21444, -2149, 15227,   -21, 21278,
   -2149,  2006,  2010,  2014,  1863,  1156,  2279, -2149, -2149, -2149,
   -2149,  2233, -2149,  1734,   132,  2294,  2138,  2293,  2247,  2351,
   -2149, -2149, -2149,  2343,  2344,  2220,  1424, -2149, -2149,  2218,
    2389,  2390,  2336, -2149, -2149,    56, -2149, -2149, -2149,  1317,
   -2149, -2149, -2149, -2149, -2149,  2027,  2028, 12727,  1037, -2149,
    1814, -2149, -2149,   834, -2149, -2149,  2030,  2031, 19976, 19976,
   -2149,   801,  1039,  2215,  2337, -2149, -2149, -2149, -2149, -2149,
   -2149,  1086,  1168, -2149,  1821,  1821,  2029,  2400, -2149, -2149,
   -2149, -2149, -2149, -2149, -2149, -2149, -2149,  1095, -2149,  2318,
   -2149,  2038,  2379, 16169, -2149,   693, -2149,  2039, -2149, -2149,
   -2149,  2207,  2042, -2149,  1100,  1123,  1139, -2149, -2149, -2149,
   -2149, -2149, 10657, -2149, -2149,  1523,  2043,    65, -2149, -2149,
   -2149, 21444,  2238,  2045, -2149, -2149,   -61,  2101, 21444,  2048,
    2050,  2101, -2149, -2149, -2149,  1637,  2322, -2149, 21444,  2417,
   -2149, -2149, -2149,  2117, 21444, -2149,  2366, 19004,   417, -2149,
   -2149,   526, -2149,  6517,  2059, -2149, -2149,  2101, 21444, -2149,
   -2149,  1144, -2149,  1814, -2149,  2060,  2068, -2149,  2058, 10657,
    2072, -2149, 21444, -2149, 21444, 21444, 11692, 11692,   344,  1734,
   -2149, -2149, -2149, -2149, 19883,  1146, -2149, 21444, -2149, 16169,
     137,  1596,  1925,  2328, -2149, -2149,  2388, -2149, -2149,  2272,
   -2149, -2149,  2438,   567,  2074,  2076,  2194, -2149, -2149,  1814,
   -2149,  2197, 12727, 12727, -2149,  2080, -2149,  4349, 12727, -2149,
    2346, -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149,  1216,
   -2149, 21444, -2149, 21444,  2415,  1958,  2348,  2349,   884,  2295,
    2347, 21444,  2271, -2149,  1273,    51,  2291,  2453, -2149,  2257,
    2339, -2149,  1155, -2149, -2149,  2452, -2149,  2091,  2363,  2364,
    2096, -2149, -2149, -2149, -2149, 21444, 21444, -2149, -2149,  1744,
   21444,  2099, -2149, 21444,  2017,    86,  2464, -2149, -2149,   781,
    6170,  2225,  2325,   173, -2149, -2149,   829, -2149, -2149, -2149,
    2104,   433, 12727, 12727, 21444,  2329, 21444, 21444,  2281, 21444,
     666, 21759, 21444, 14797,  2108,  2109, 12727, 12037,  2111,     6,
   -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149,
   -2149,  1159,  1149, -2149,  2116, -2149, -2149,  2119, -2149,  2121,
    2123,  2126,  2128, -2149, -2149,   682,   689, -2149, -2149, -2149,
   -2149, 12727, 12727, 12727, -2149,  1156, 21444, -2149, -2149,  1209,
   -2149,  1212,  1228, -2149,  2484, -2149, 16169, -2149,    91, -2149,
     431,  2317,  2465, -2149,  2184,  2466, -2149,  2446, -2149,  2139,
    2141,  2142, -2149, -2149,  2496, -2149, -2149,  2143,  2144,  2145,
    2146,  1814, 12727,  2147, -2149,  1239, -2149,  2413,  2471, -2149,
   21444,  2342,  2296,  1248, -2149, -2149, -2149,   595,  1140,  2291,
   -2149,  2156,  1596,  2495, -2149,    65,  2157,  2045, 21444, 21444,
     -61, -2149,  2160,  1947, -2149, 12727,  2332,  2501,  1963, -2149,
     110, -2149, -2149, -2149,  2412,  2377, 21444,  1958,  2419, -2149,
   -2149,  2514, -2149, 21444,  2330, 16169, 13072,  2264,  1527,  1539,
   -2149,   130, -2149, 21444,  2163, 11347,  2158, 10657, 10657,  1814,
   -2149,   895,  1188,   550, -2149, -2149, -2149, -2149, -2149, -2149,
   -2149, -2149, -2149,  2164,  2166,  1251, -2149, 21444, -2149, -2149,
    2517,   349, -2149, -2149,  2383, -2149, -2149, -2149,   162,  1480,
   -2149, -2149,  2515,  2525,   161,   567,    70,    72,  1814,  2521,
   -2149,  2167,  2168, -2149, -2149,  2333,  2249, -2149,   494,   494,
    1170,  1184, -2149, -2149,  2535, -2149, -2149, -2149,  2533, -2149,
   -2149, -2149, -2149, 21444,  2444,  2057,  1683,   254, -2149,  1253,
    2175,  2368,  2239, -2149, -2149,   297,  2449, -2149,   417, -2149,
   -2149, 21444, 21361, 21444, 14797, -2149, -2149, -2149, -2149,   581,
     299,  1346, -2149, -2149, 12382, 14452, -2149,  1371, -2149,  2384,
   -2149,    88,    94, -2149, -2149, -2149, -2149,  1264, -2149, -2149,
   -2149, -2149, -2149, -2149,  2522, -2149,  2544,  2545,  2546,  2547,
   -2149,  2183,  2185,  2186,  2548, -2149,  2445,  1276, -2149,  2356,
    2357,  2198,  2319,  2393, -2149,   338, -2149, -2149, -2149, -2149,
   -2149, -2149,  1330,  2200, -2149, -2149, -2149,  1740, 21444, 21444,
   -2149, 12727, 10657,  2395,  2284, -2149,  2258, -2149,   297, -2149,
    5823, -2149,  2407, -2149, 10657, 13417, -2149, -2149,  1373,  7552,
   14452,  1340,  2201, -2149,  1332,  1149,  2202, -2149,  2557, -2149,
    1372, 14452,  1346,  1346, -2149,  1188,  2561, -2149,  2260,  2489,
    2491, -2149, -2149,  2565,  2203,  1596, -2149,  2521, 21444, 21444,
   21444, -2149,  2571,  2409, -2149, -2149, -2149,  2573, -2149, -2149,
   -2149, -2149,    96,  2210,  2331,  2572,   -25, -2149, 16820, 12727,
     417, -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149,
   -2149, -2149,   766,   775, 12727,  1156,  2213, -2149,  2217, -2149,
    2201, 14452, 14452, -2149, -2149,  1371,   -49,  2335, -2149, -2149,
   -2149,  2563,  2581,  2584,  2221,  2582, -2149, -2149, -2149, -2149,
    1384, -2149,  2587, -2149,  2223, -2149, 21444, 21444, -2149, -2149,
      74,   100, -2149,  1814, -2149,  1329, 13762, -2149,  2201, -2149,
   -2149,  2392,  1346, -2149,  2590, -2149, -2149, -2149,  2226, -2149,
   -2149, -2149,  1389,   211, -2149, -2149, -2149, -2149, -2149,  2350,
   -2149, -2149, -2149,  1393,   299,  2163, -2149, -2149, -2149, -2149,
   -2149, -2149,  1346,  1346, 13762, -2149, -2149, -2149, -2149
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2149, -2149, -2149, -2149, -2149,  2472,     8, -2149, -2149, -2149,
   -2149,  1417, -1003, -2149,   509,   548, -2149,   419, -2149,   674,
   -2149,   518, -2149, -2149, -2149, -2149,  1885, -2149,  -452,   122,
    2375, -2149, -1155, -2149, -2149, -2149, -2149,  -617, -2149, -2149,
    2488, -2149, -2149,  -936, -2149, -2149, -2149, -2149, -2149, -2149,
   -2149, -2149, -2149,  -881,  -224, -2149, -2149, -2149,    28,  2523,
   -2149,  2161,   -62,  -325, -2149, -2149, -2149, -2149, -2149, -2149,
   -2149, -2149,  1466, -2149, -2149, -2149, -2149, -2149, -1464, -1438,
    1074, -1291, -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149,
   -2149, -2149, -2149, -2149,  1693, -2149, -2149, -2149, -2149, -2149,
   -2149, -2149, -2149, -2149, -2149, -2149,  2618,  2619,  2620, -2149,
   -2149, -2149,  2622, -2149, -2149,   592,  1115,  1409,  -645,  -326,
     240, -2149,   182, -2149,  2629, -2149, -2149, -2149,  1965,  1956,
   -2149, -2149, -2149, -2149, -1174, -1392,  2630, -2149,  1631,  2634,
   -2148,   253,  -679, -2149,    30, -1172,    14, -2149,  -491,  -481,
    -596,  -476,  -274, -2149, -2149,  1410,  1953, -2149, -1603, -2149,
   -2149, -1783,  2162, -2149,   706, -2149,  1236,  -643, -2149,  1385,
     517, -2149,   955,  -876, -2149, -2149,   541,   440, -2149,  -544,
   -2149, -2149, -2149, -2149, -2149,  1071, -2149, -2149, -2149, -2149,
   -2149, -2149,  -783,  1905,   -63,  2447, -2149,   764, -2149,  1955,
    -276, -2149, -1139,   683,    29,  1873,  1876,  -426,     0,  -669,
    -188,  1970,  -662, -1330, -2149, -2149, -2149, -2149,  1822,  2088,
   -2149, -2149, -2149, -2149, -1084, -1536,    77,  2442, -1608,  -205,
     -75,  -100,  1758,  -521, -2149, -1110, -2149,  -456, -2149, -1449,
    -283,   -98,    47, -2149, -2149, -2149, -2149, -2149, -2149,  1748,
   -2149, -2149,   785,  -584,  -384, -2149,  1517, -1633, -2149,   740,
   -2149,   319,  1268,  -878,   337, -2149, -2149, -1636, -1178, -2149,
   -2149, -1765, -2149, -2149, -1428, -2149, -2149, -2149, -1992, -2149,
   -1745, -2149, -2149, -2149, -2149,   354, -1727,  -378, -2149,   364,
   -2149,     2, -2149,     3,   365,   366,   367,   363, -2149,   217,
   -2149, -2149,   369, -2149, -2149, -2149, -2149, -2149, -2149, -2149,
     572, -2149, -2149, -2149,   379, -2149, -2149, -2149, -2149,   380,
     847, -2149, -2149,   266, -2149, -2149, -2149, -2149, -2149,  1241,
   -2149, -2149, -2149, -2149, -2149,  -235,   248,  1511, -2149, -2149,
   -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149, -2149, -1528,
   -2149, -2149,   566, -2149,  1067, -2149, -2149,  2612,  1169, -2149,
     640,  -642, -1526, -2149,   636, -2149, -2149,  1160,  1243, -1025,
   -2149, -2149,     1,  2107,  -189, -1791, -2149,  -196, -2149,  -222,
   -2149, -2149, -2149,  1777,  1487, -2149, -2149, -2149, -2149,   520,
    1050, -2149,   599, -2149,  1504, -2149, -2149, -2149, -2149, -1660,
     736, -2149
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1228
static const yytype_int16 yytable[] =
{
     172,   188,   177,   178,   587,   402,   292,   649,   126,   485,
     198,   888,   400,   977,   165,   962,   944,   421,  1304,   589,
    1306,  1426,   963,   424,   425,  1196,  1389,   820,  1414,   316,
     164,  1696,   908,   435,  1452,  1097,  1003,  1547,   461,   462,
     616,  1212,  1958,   919,  1820,   971,   813,  1657,   815,  1387,
     717,   627,  2026,  1436,  1825,  1694,   764,  1765,   769,  1893,
    1473,   677,  1475,  1703, -1219,  1895,   765, -1218,   765,   511,
   -1220,  1873, -1221,   770,   549,  1778,  1978,  1295,  2434,   199,
     948,  1013,   297,   267,  -218,  -992,  1734,  1788,   289,   198,
     295,   734,  1244,  1247, -1094,  1803,   523,   847,   295,   267,
     688,   397,   327,   295,  2436,   587,   329,    79, -1094,  2143,
     848,  1021,   296,  1023,   415,   591,  2017,  -992,   967,   310,
     347,   966,   348,   420,   328,  -992,   990,   607,   939, -1094,
     559,   301,   955,  2234,  2225,  1605,  1101,  1102,   382,  1101,
    1102,   468,   578,   439,   657,  1606,   443,  1101,  1102,   446,
     164,  1859,   896,   864,  1781,  1101,  1102,  1939,   317,  1001,
    2410, -1094,  2380,  1234,  2051,   437,   858,   564,  2263,  1782,
     545,  1827,   548,  2386,   471,   864,   723,  2120,   714,  1948,
    1607,  1024,  1087,  1088, -1095,   240,  2256,  1517,  1608, -1096,
     200,   570,  1101,  1102,   864,   835,  1707,  1609,  1101,  1102,
    1101,  1102,   399,   472,  1544,   587,   994,   201,   635,   995,
     996,   405,   605,   405,   628,   408,  1610,   879,   426,  1390,
     267,  2257,   619,    99,   571,  1545,   771,   418,   274,   267,
     418,   427,   241,  2418,  1949,   423,   418,   418,  2121,  1459,
     198,   198,   198,  2052,   920,  1742,   418,   865,   198,   267,
     440,   318,   267,   444,   198,   267,   198,   198,   198,   198,
     890,   198,   198,   198,   198,   724,   636,  1235,  1860,   865,
    1054,   761,  2264,  1095,   768,  1099,   772,  1058,   584,   992,
     765,  1061,   470,  2411,  1089,  1055,   198,   765,   865,   120,
    1828,   765,  1059,  2235,  1783,   496,  1062,   469,   198,   504,
    1679,   956,   695,   696,   697,   698,   699,   857,   587,   430,
     431,   432,   510,  2225,   198,   583,   304,   469,   469,   349,
     759,  2382,   931,   445,  1367,   447,   448,   449,   450,  1002,
     454,   455,   456,   457,   866,  1453,  1213,   564,   564,   564,
     632,   564,   564,  1238,   564,  2053,   564,   773,  2102,   586,
     509,   546,  1070,   546,   543,   515,   866,  1515,  1287,   551,
     558,   561,  -992,   346,   875,   296,   856,   501,   586,  1247,
    1940,  1537,  1296,    79,  -651,   866,  1835,   585,  2248,   295,
     687,   586,   876,   513,  2435,   510,   999,   837,  1093,   586,
     855,   654,   586,  2074,   608,  -651,   853,   706,   585,  2226,
     568,  1353,  2079,  1611,  1681,   485,   656,   546,   469,  2437,
    2438,   335,  1793,  1901,  1117,  1873,   732,   686,   198,   304,
    2086,   202,   678,  1655,  1725,   418,   989,  -651,  2041,  2042,
     585, -1219,  1021,  1023, -1218,   418,   198, -1220,  1790, -1221,
    1612,   949,   625,    79,   558,  1192,   267,   738,  2213,   305,
   -1227,  -218,   198,  1124,   206, -1227,    79,  2322,  1587,  1261,
     198,   739,  2451,  2323,   279,  2405,   354,   648,  -485,  -485,
    -485,   440,   295,  2299,   198,  2344,   267,   267,  1220,   987,
     687,  1057,   867,    79,   306,   204,   684,   601,   412,    99,
     700,  1840,  1450,   652,   579,   451,   759,  1060,   498,  1066,
     298,  1872,  1718,   267,   707,   620,  1854,  2345,   452,  2373,
     712,  1594,  1239,   702,   648,   719,  1774,   686,  2026,   300,
    1877,   640,   267,  1972,  1022,   551,   877,   440,   295,   643,
     198,   267,  2239,  1728,   925,  2130,   533,  2131,  1053,  2043,
    2134,   695,   696,   697,   698,   699,   717,  1768,   198,   736,
     758,   413,   305,  1390,  1099,   120,  2195,  1354,  1355,    99,
     700,   302,   635,   499,  1303,   896,  1125,   896,   779,  1333,
     364,   365,    99,  2364,  1771,  1569,  1451,  1776,  2226,   765,
    1571,  1828,  2017,   355,  1334,   303,   286,   540,   695,   696,
     697,   698,   699,   851,  1372,  2284,   558,   888,  2135,    99,
     551,   860,  1308,  2421,  1331,  1484,   874,   510,   993,   841,
     843,   198,  1121,  1122,   885,  2414,   648,   757,  2274,    79,
     636,   904,    79, -1053, -1053,   120,   586,  1368,   759,   198,
     198,  1101,  1102,  1439,  1027,  1390,  1139,   886,   120,  1952,
     267,  1769,   927,  1957,   905,  2044,   198,   695,   696,   697,
     698,   699,   198,   534,   287,   267,   500,  1132,  1120,  2254,
    1424,  1191,  1837,  1840,  2361,   763,   942,  -485,  1772,  2028,
    -630,  -613,  2378,  1925,  2109,  1973,  1974,  1975,   906,  1386,
     881,  2275,  1519,  1520,  1521,  1522,  1837,  1408,  2059,  2440,
    1369,  1523, -1227,  1524,  1477,   760,   198,  1440,   914,   915,
     307,  1384,   980,   755,  -503,  -503,  -503,  1689,  1525,   558,
     202,   651,  1402,   551,   267,   928,  1808,   308,   590,   687,
    1228,   929,   727,  1926,   896,  1838,  1005,  2440,  1770,  2060,
    1009,  1241,  1242,  2188,   198,    99,  1409,   418,    99,   275,
     267,   695,   696,   697,   698,   699,   364,   365,  1526,  1838,
     695,   696,   697,   698,   699,  1773,   686,  1104,  1105,   198,
     695,   696,   697,   698,   699,   974,   330,   735,  1052,  2050,
    1136,  1106,  1809,  1103,   204,  1821,  1451,  1977,  2061,  2085,
    1927,   280,  1064,  1200,  1053,   551,   551,   331,  1071,  1357,
    2189,   276,   277,   164,   695,   696,   697,   698,   699,  2396,
    1451,  2126,   332,  1018,   763,  1383,   281,  1107,  1527,  2127,
    1671,   728,   729,   202,   730,  1108,   333,   831,  1435,  1109,
    1048,  1112,   551,  1696,  1439,  1358,   334,   203,  1045,  1329,
     695,   696,   697,   698,   699,  1466,  1499,  1359,   357,   358,
     359,   360,   361,   362,   337,  2111,   364,   365,   551,  1038,
     832,  1653,   366,   338,   205,   510,   510,   238,  1123,   256,
    2117,  2038,   695,   696,   697,   698,   699,  1129,  1621,  2112,
     418,  2113,  1119,  1221,  1222,  1223,  1224,   204,   470,   510,
     242,  1150,   208,  1010,   351,  1014,  1916,  1917,   282,   352,
     198,   198,  1172,   242,  2387,  2388,  1528,  1177,   198,   933,
     934,  1139,  1053,  -503,   510,   648,   962,   845,   846,  1049,
     729, -1227,  1050,   963,  1051,  2114,   243,   208,  1010,  1202,
    1014,  1015,  1114,   782,  1936,   244,   198,   961,  2038,   695,
     696,   697,   698,   699,  1216,   853,  2161,   213,   244,  1174,
    1219,  1175,   648,   267,   267,   267,   267,  1618,  2304,  1226,
    1695,  2305,  1529,  1421,   695,   696,   697,   698,   699,  1170,
    1171,   353,   208,  1010,  1625,  1840,  2122,  1178,  1309,  1310,
    1311,  1312,   213,   410,   510,   510,   198,   198, -1227,  2123,
    2124,  1330,   504,  1246,   695,   696,   697,   698,   699,   696,
     697,   698,   699,  1667,  2447,  1211,   700,   356,   687,   164,
     831,  1236,  1237,   369,   695,   696,   697,   698,   699,   411,
     648,  1074,   416,   245,  1289,  2222,  1290,   213,   422,  1293,
     845,   846,   417,  1297,  2456,  2457,   245,   428,   648,   648,
     370,   648,  1307,   832,   202,   686,   551,   434,   267,   267,
     267,   267,  1181,  2297,   436,   974,   974,  1720,   246,  2150,
     442,  1628,   247,  -630,   248,  1116,  2151,   463,  1871,   558,
    -631,   246,  1139,  1182,   648,   247,   258,   248, -1227,  1183,
    1514,  1378,  1516,   700,   962,   700,   208,  1010, -1156,  1727,
     896,   963,  1721,   458,   478,   208,  1010,  1332,  1014,   259,
    1722,  1539,  1184,  1912,   249,  1913,  2314,   250,   204,   695,
     696,   697,   698,   699,  1496,   459,  1497,  1498,  1548,   261,
    1185,   479,  1134,  1135,   262,  1011,  1629,   695,   696,   697,
     698,   699,  2362,   263, -1227,   464,  2357,  1748,   843,   251,
     465,   213,  1381,  -958,   339,   551,  1630,  -630,  1385,   648,
     213,   340,  -957,   466,   510,   341,  -631,  1631,   695,   696,
     697,   698,   699,   467,  2252,    75,  1329,   252,   474,  1395,
     695,   696,   697,   698,   699,   495,  1616,  1667,  1667, -1227,
    1794,  2314,  1907,   253,   408,  1914,   648,  1915,  1573,  1632,
     497,  1405,  2314,   254,   255,  2190,  1633,  2191,   648,   733,
     342,  1634,   612,   613,   614,  2244,   510,  2245,   695,   696,
     697,   698,   699,   506,  1635,   198,  1432,   309,   741,   742,
     743,  1636,   745,   746,   753,   749,  2278,   750,  2279,   207,
     512, -1156,  1454,   886,  2045,  1457,  1179,  1180,   208,   209,
    2280,   508,  2281,   343,    88,  1465,   210,   695,   696,   697,
     698,   699,  2314,  2314,   754,   695,   696,   697,   698,   699,
    1461,   514,  1462,   198,   507,   211,   198,   517,  1935,  1481,
    1101,  1102,  2243,   519,   212,   648,    91,  1249,  1250,  1251,
     551,  1252,  1253,  1254,  1431,   164,   698,   699,  1265,  1266,
    2103,  1505,   518,   213,  1375,   782,   214,  1423,   934,  1471,
    1472,  1637,   695,   696,   697,   698,   699,  1597,  1598,  1513,
     558,   215,   558,  1908,   520,   510,   695,   696,   697,   698,
     699,  1510,  1511,   521,   210,  2035,  1638,  1549,   934,  1555,
    1556,  1639,   974,  1558,  1559,   974,  1709,  1710,  1640,   695,
     696,   697,   698,   699,   522,   216,  1589,   934,   558,   695,
     696,   697,   698,   699,   695,   696,   697,   698,   699,  1647,
    1648,  1672,  1511,   217,   524,  1943,  1741,   782,   535,  1077,
    1746,  1747,  1797,   934,   214,  1548,   695,   696,   697,   698,
     699,  1822,  1823,   218,  1831,  1832,   539,  1324,  1965,   215,
    1738,   485,  1833,  1834,   536,   888,  1585,   219,  1586,   220,
     525,   221,   526,   222,   527,  1249,  1250,  1251,   853,  1252,
    1253,   223,   224,   528,   225,   226,  1900,   782,   896,   510,
     529,   648,   648,   216,   530,  1690,   531,  1249,  1250,  1251,
    1338,  1252,  1253,  1254,   648,  -524,   695,   696,   697,   698,
     699,   217,   532,   227,   241,  1847,   228,   204,   695,   696,
     697,   698,   699,   695,   696,   697,   698,   699,   198,   695,
     696,   697,   698,   699,  1644,   550,  1268,   648,  1339,   567,
    1855,  1856,  1887,  1888,  1920,  1921,  1673,   220,   229,  1932,
     934,  2075,  1675,  -939,  -939,   896,  2067,  2068,   565,   223,
     224,  1572,   566,   226,  -939,   695,   696,   697,   698,   699,
    1686,  -939,  1933,  1834,  1269,   569,   230,  1469,   198,   575,
    1984,    71,   576,  2381,  -618,  1470,   577,  -939,  1934,  1834,
     231,  1985,   232,  2030,  2031,  2047,  2048,  1658,  1986,  -939,
    1454,   586,   233,   234,  2094,  2095,  1904,  1906,   588,  -939,
    -621,  -604,  -939,   592,    77,   594,   695,   696,   697,   698,
     699,  -939,  2232,   648,   648,  -623,  1989,  -624,  1139,  -629,
    1270,  -621,  1541,  1271,  2233,   596,    78,  2258,  2259,  1990,
    -616,   695,   696,   697,   698,   699,  1542,  -625,  1992,  1272,
    1575,  -626,   357,   358,   359,   360,   361,   362,  2156,  2157,
    1371,  2158,  1543,   599,  2155,  -627,   366,   198,   602,  1552,
     558,   558,  -628,  2241,  2242,  1751,  1451,  2159,  1543,  1566,
    1755,  1756,  1757,  1758,  1581,  1759,  2153,  2154,  2180,   934,
    1273,  1297,  1274,  -617,  1760,  -631,  1275,  2187,  2157,   888,
    2251,   934,  2290,  2291,  2183,  -632,  1680,  2317,  2318,  -622,
     648,   648,   648,  2324,  2325,   603,   695,   696,   697,   698,
     699,   593,   198,   598,  1139,  2336,  2337,   198,   695,   696,
     697,   698,   699,  1208,  1276,   604,  1744,  1277,   606,  1819,
    1432,   961,  1140,  1141,  1142,  1143,  1826,  1144,  1145,  1146,
    1278,  1279,  2049,   610,  1280,   617,  1281,  1576,   510,   695,
     696,   697,   698,   699,  1850,  2070,  1896,   621,  1544,   618,
     558,   558,  1686,  1857,   622,   198,   623,  1863,  2439,  2346,
    2347,   896,   888,  -647,  -647,   624,  1761,  1762,  1282,  1545,
     629,  1805,  -939,  -939,  1019,   634,  1810,   633,   853,   695,
     696,   697,   698,   699,   638,   789,  1140,  1141,  1142,  1143,
     790,  1144,  1145,  1146,   791,  1139,  1147,   369,   641,  1998,
     642,  2384,  2385,  2012,   792,  1795,  1796,  1019,  2352,  -216,
     793,   644,  -216,  2429,   934,   794,   558,  1905,  2450,   934,
    2375,  1592,  2453,  2454,   974,  1763,  1042,  1487,  1488,   647,
    -216,   795,   645,   653,  2046,   658,  -216,   659,   660,   796,
     382,   681,  -215,   685,  2288,  -215,   688,   701,   702,   797,
    1593,   510,   695,   696,   697,   698,   699,   798,   704,  -216,
    -630,   705,  -993,  -215,  1115,   708,   710,   713,   503,  -215,
     720,  1139,   695,   696,   697,   698,   699,  -216,   722,   648,
     799,   800,   801,   802,   726,   740,  1954,   737,   803,   804,
     747,  -216,  -215,   751,   546,   752,   198,   755,   762,  2289,
     774,   775,   648,  2011,  2025,  1969,   776,   778,   777,   861,
    -215,  1999,   780,   781,   814,   782,  2029,  1390,   840,   485,
     844,  1737,   787,   788,  -215,   695,   696,   697,   698,   699,
    2037,   855,   648,  2040,   862,   207,   805,   806,   807,   808,
     871,   880,   470,   882,   789,   418,   883,   510,  2400,   790,
    1139,   897,   210,   791,  1140,  1141,  1142,  1143,   900,  1144,
    1145,  1146,   903,   792,  1147,  1658,   912,   913,   923,   793,
     551,   551,   930,   918,   794,  2069,   935,   292,   932,   936,
     212,   810,   811,   695,   696,   697,   698,   699,   937,  1297,
     795,   648,   938,   943,   945,   946,   952,   589,   796,   648,
     947,   953,   214,   965,   976,   998,  1104,  1105,   797,   695,
     696,   697,   698,   699,  2432,  1000,   798,   215,  1007,  1004,
    1106,  1006,  1028,  2101,  1432,  1030,  1029,  1031,  2104,  1032,
     469,  2107,  1034,  1033,  1035,  1036,  1037,  1039,   510,   799,
     800,   801,   802,  1041,  1040,  1047,  1019,   803,   804,  1043,
    1056,   216,  1454,   297,  1454,  2132,  1107,  1454,  1044,   289,
     198,   295,  1072,  1078,  1108,  2207,  1079,  1080,  1109,   217,
    1081,   886,  1082,  1153,  1154,  1155,  1156,  1157,  1158,  1159,
    1094,  -217,  1160,  2136,  -217,  1083,  2012,  1084,  1085,  1086,
    1090,  1091,  1161,  1092,  1096,   805,   806,   807,   808,  2316,
     551,   551,  -217,   219,   648,   220,  1118,   221,  -217,  -619,
    1127,  1130,  1133,  1164,   510,  1166,  1128,   223,   224,  1152,
     225,   226,  1151,   382,  1131,  1168,  1173,  1193,  1194,   809,
    1197,  -217,  1195,  1153,  1154,  1155,  1156,  1157,  1158,  1159,
     810,   811,  1160,  1199,  1198,  1203,  1205,  1206,   648,  -217,
    1214,  1217,  1161,  1215,  1225,  1227,  1231,  1233,  1240,  1248,
    1258,  1260,  1264,  -217,  1267,  1292,  2200,  2201,  1299,  1051,
    1262,  1294,  1314,  1317,  2316,  1301,  1315,  1291,  1316,  1318,
    1319,  1322,  1323,  1019,  2217,  2316,  2011,  2230,  2227,  1336,
    1335,  2220,  1340,   510,  1341,  2315,  1342,  1343,  1344,  1345,
    1346,  2236,   662,   663,   664,   665,   666,   667,   668,   669,
     670,   671,   672,   673,   674,  1347,   164,  1348,  1349,  1350,
    1351,  1366,  1390,  1393,  1374,   648,  1396,  1376,  1377,  1397,
    1392,  1398,   382,  1401,  1413,  1403,  1415,  1427,  1406,  1404,
    1407,  1412,  1436,  1416,  1434,  2316,  2316,  1417,  1443,  1445,
     482,  2207,  1446,  1418,  1449,  1474,  1463,   955,  1478,  1458,
    2012,  1464,  1479,  1480,  1490,  2012,  1482,  1483,  1485,  2012,
    2315,  1432,  1494,  1493,   516,  1500,  1501,  1502,  1507,  1508,
    1509,  2315,  1512,  1518,   297,  1330,  1533,  1535,  1536,  2301,
    2302,  2303,   295,  1543,  1574,  1538,  1579,   382,   537,   538,
    1102,  1540,   382,  1550,  1553,   886,   382,   382,  1554,  1557,
    1560,  1561,  1562,  1563,  1332,  1564,   552,  1565,   382,  1568,
     562,  -620,  1590,  1582,  1583,  1588,  1595,  1600,  1601,  1602,
    1603,  1620,  1626,  1617,  1622,  1623,  1624,  1627,   572,  1649,
    1651,  2315,  2315,   582,  1654,  1645,  1652,  1661,  1664,  1663,
    1665,  1670,  1674,  1676,  1677,  1678,  2349,  2350,  1682,  1683,
    2011,  2372,  2366,  2367,  1697,  2011,  2230,  2227,  1684,  2011,
    2025,   934,  1691,  1698,  1699,  1701,  2012,  1704,   382,   382,
    1700,  1711,  1719,  1724,  1712,  1713,  1715,  1714,   886,  1716,
    1717,  1725,  1730,  1735,  1736,  1743,  1745,  1731,  1732,  1749,
    1753,  1766,  1775,  1767,  1779,  1780,  2398,  2399,   648,  1784,
    1785,  1451,  1791,   382,  2012,  1792,  1798,  1802,   297,  1799,
    1800,  1804,  1801,  1806,  1811,  1807,   295,  1813,  1812,  1815,
    1829,  1836,  1848,  1849,  1864,  1868,  1816,  1870,  1866,  1880,
     679,   680,  1867,  1877,  1881,   582,  1883,  1884,  1885,  1886,
    1889,   382,  1879,  1890,  1891,  1892,  1897,  1898,  1902,  1903,
    1910,  1909,  1918,   709,  1919,  1922,  1923,  1924,  1929,  1928,
    1931,  1937,  1944,  1945,   648,   198,  2011,  2444,  2441,  1955,
    1956,  1963,   552,  1960,  1964,  1966,  2027,  2034,  2032,  2055,
     562,   562,   562,   744,   562,   562,  2033,   748,  2056,   562,
    2036,  2057,  2058,  2063,  2076,  2065,  2064,  2072,  2066,  2077,
    2078,  1748,  1634,  2081,  2011,  2444,  2441,  2091,  2092,  2096,
    2080,  2097,  2093,  2087,  2098,  2099,  2100,  2105,  2110,  2118,
     783,   786,  2125,  2119,  2133,   816,  2137,  2138,   240,  2142,
     562,   838,   839,  2144,  1658,   582,  2145,  2160,  2146,  2164,
    2147,   854,  2167,  2148,  2168,  2149,  2171,   552,  2170,  2175,
    2181,  2182,  2196,  2184,  2210,  2212,  2185,  2172,  2215,  2173,
    2174,  2216,  2176,  2177, -1211,  2218,  1907,  2179,  2219,  2231,
    2253,  2188,  2261,  2221,  2266,  2240,  2194,  2198,   916,   917,
    2203,  2237,  2262,  2249,  2271,  2250,  2269,  2270,  2272,  2282,
    2283,  2285,  2295,  2292,  2293,  2298,  2326,  2321,  2327,  2328,
    2329,  2330,  2331,  2335,  2332,  2334,  2333,  2338,  2339,  2342,
    2353,  2341,  2355,  2374,  2383,  2390,  2340,  2392,  2393,  2348,
    2391,  2382,  2394,  2395,  -615,  2401,  2402,  2404,  2406,  2409,
    2416,  2407,  2422,   958,  2417,  2425,   482,  2424,  2426,  2428,
    2427,  2430,  2431,  2445,  2448,  2449,   344,  1411,  2193,  2165,
     982,   983,   984,   985,   986,  2452,  2084,   988,  2277,   991,
     552,   433,   345,  2197,   315,  1394,  1025,  1733,   157,   158,
     159,  1218,   160,  2152,  1456,  2420,  1702,  2455,   655,   161,
     162,   951,   954,  1286,   163,  2419,   960,  2083,  1468,  1489,
    1619,  1739,  1858,   692,  2205,  2287,  2054,   407,   383,   981,
    1068,   959,  1388,  1069,  1189,  1113,  2397,  1046,  1201,  2073,
    1596,   836,  2389,  2379,  2365,  2368,  2369,  2370,  2377,  2371,
    2351,  2458,  2202,  2433,  2354,  1962,  2214,  1400,  1063,  1656,
    1065,  1789,  1067,   552,   239,  1706,  2163,  1073,  2162,  1075,
    1076,  1723,   852,  1668,  1210,  2265,  2199,  1448,  1814,  1430,
    2108,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   552,
       0,     0,     0,     0,  1100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1110,  1111,     0,     0,
       1,     0,     0,     0,     0,   552,     0,     0,     0,     0,
       0,   562,     0,     0,     0,     0,     0,     0,     0,     0,
    1126,     4,     5,   197,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,    65,
      66,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   849,
       0,  1229,  1230,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1263,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1288,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   552,     0,     0,     0,     0,     0,  1313,
       0,     0,     0,     0,     0,     0,  1320,  1321,     0,     0,
       0,     0,  1327,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1337,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1352,
       0,     0,     0,  1100,     0,     0,     0,     0,  1356,    93,
    1364,  1365,     0,     0,  1370,     0,     0,     0,     0,     0,
       0,  1373,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   552,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   541,     0,     0,     0,
       0,     0,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   850,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1476,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   552,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1506,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1551,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,  1567,     0,  1570,     0,     0,     0,     0,     0,
       0,   562,     0,     0,     0,     0,  1578,     0,     0,     0,
       0,     0,     4,     5,   197,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,     0,     0,     0,     0,     0,     0,
      65,    66,    67,    68,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1379,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1327,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1729,     0,     0,     0,  1327,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   562,     0,     0,     0,  1740,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1752,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   482,   100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   541,     0,     0,
       0,     0,  1853,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     0,     0,     0,     0,  1380,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1899,     0,     4,     5,   197,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,     0,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,     0,     0,     0,     0,
       0,     0,    65,    66,    67,    68,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1750,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1327,  1327,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   552,   552,     0,
       0,     0,     0,  2071,     4,     5,   197,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,     0,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,     0,     0,     0,     0,
       0,     0,    65,    66,    67,    68,     0,  2128,  2129,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,  2139,  2141,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1853,   552,   552,   541,
       0,     0,     0,     0,     0,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2178,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1380,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2206,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     482,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   541,
       0,     0,     0,     0,     0,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2311,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   542,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2206,     4,     5,   197,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,     1,
       0,     0,     0,     0,  2413,    65,    66,    67,    68,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2415,
       4,     5,   197,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,     0,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   849,     0,
       0,     0,     0,     4,     5,   197,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     0,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     0,     0,     0,     0,     0,
       0,    65,    66,    67,    68,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   541,     0,     0,     0,     0,     0,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   718,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,   941,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   541,     0,
       0,     0,     0,     0,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1380,     4,     5,   197,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     1,     0,     0,     0,     0,     0,    65,
      66,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     5,   197,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,     0,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,     1,     0,     0,     0,
       0,     0,    65,    66,    67,    68,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     4,     5,   197,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,     0,
       0,     0,     0,     0,     0,    65,    66,    67,    68,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   560,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   859,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   873,     4,     5,   197,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
       0,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     1,     0,     0,
       0,     0,     0,    65,    66,    67,    68,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     4,     5,
     197,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     0,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
       1,     0,     0,     0,     0,     0,    65,    66,    67,    68,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     5,   197,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,    65,
      66,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   884,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   926,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1008,     4,
       5,   197,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     0,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     0,     0,     0,     0,     0,     0,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     1,   357,   358,   359,
     360,   361,   362,     0,   363,   364,   365,     0,     0,     0,
       3,   366,     0,     0,     0,     0,     0,     4,     5,   197,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,  1980,    64,     0,
       0,     0,     0,     0,     0,    65,   367,    67,    68,  1981,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   368,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1984,    71,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1985,     0,     0,     0,     0,     0,     0,  1986,     0,
       0,     0,     0,  1987,  1988,     0,     0,    76,     0,     0,
       0,     0,     0,     0,    77,     0,     0,     0,     0,     0,
       0,     0,   369,     0,     0,     0,  1989,    93,     0,     0,
       0,     0,     0,     0,     0,     0,    78,     0,     0,  1990,
    1991,     0,     0,     0,     0,     0,     0,     0,  1992,   370,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2358,     0,     0,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   371,     0,     0,     0,  1994,     0,
       0,     0,  1995,  1451,     0,  1996,    90,     0,     0,     0,
       0,     0,     0,     0,     0,  2359,     0,     0,     0,   294,
       0,     0,     0,     0,     0,    93,  1818,    94,    95,     0,
       0,   372,   373,     0,     0,    96,    97,     0,     0,     0,
       0,     0,     0,     0,     0,   374,   375,   376,   377,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   102,     0,     0,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1998,
       0,   480,     0,  2360,     4,     5,   197,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,     0,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,     0,     0,     0,     0,
       0,     0,    65,    66,    67,    68,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   789,     0,     0,     0,
       0,   790,     0,     0,     0,   791,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   792,     0,     0,     0,     0,
       0,   793,     0,     0,     0,     0,   794,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   795,     0,     0,     0,     0,     0,     0,     0,
     796,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     797,     0,     0,     0,     0,     0,     0,     0,   798,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   799,   800,   801,   802,     0,     0,     0,     0,   803,
     804,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   805,   806,   807,
     808,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,   810,   811,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,   357,   358,   359,   360,   361,   362,     0,   363,   364,
     365,     0,  1979,     0,     3,   366,     0,     0,     0,     0,
    2116,     4,     5,   197,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,  1980,    64,     0,     0,     0,     0,     0,     0,    65,
     367,    67,    68,  1981,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1982,     0,     0,     0,     0,   368,
    1983,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1984,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1985,     0,     0,     0,     0,
       0,     0,  1986,     0,     0,     0,     0,  1987,  1988,     0,
       0,    76,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,   369,     0,     0,     0,
    1989,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,     0,     0,  1990,  1991,     0,     0,     0,     0,     0,
       0,     0,  1992,   370,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1993,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   371,     0,
       0,     0,  1994,     0,     0,     0,  1995,     0,     0,  1996,
      90,     0,     0,     0,     0,     0,     0,     0,     0,  1997,
       0,     0,     0,   294,     0,     0,     0,     0,     0,    93,
       0,    94,    95,     0,     0,   372,   373,     0,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,   374,
     375,   376,   377,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,   357,   358,   359,   360,
     361,   362,     0,   363,   364,   365,     0,     0,     0,     3,
     366,     0,     0,  1998,     0,   480,     4,     5,   197,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,    65,   367,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   817,     0,
       0,     0,   475,   476,   368,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   818,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   369,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   370,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   579,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   371,     0,     0,     0,     0,     0,     0,
       0,     0,   478,     0,     0,   293,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   294,     0,
       0,     0,     0,     0,    93,     0,    94,    95,     0,   479,
     372,   373,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,   374,   375,   376,   377,     0,     0,
       0,     0,     0,     0,    99,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,   357,   358,   359,   360,   361,   362,     0,   363,   364,
     365,     0,     0,     0,     3,   366,     0,     0,     0,     0,
    1098,     4,     5,   197,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,    65,
     367,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   817,     0,     0,     0,   475,   476,   368,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   818,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   369,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   370,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   842,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   371,     0,
       0,     0,     0,     0,     0,     0,     0,   478,     0,     0,
     293,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   294,     0,     0,     0,     0,     0,    93,
       0,    94,    95,     0,   479,   372,   373,     0,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,   374,
     375,   376,   377,     0,     0,     0,     0,     0,     0,    99,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,   357,   358,   359,   360,
     361,   362,     0,   363,   364,   365,     0,     0,     0,     3,
     366,     0,     0,     0,     0,  1098,     4,     5,   197,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,  1980,    64,     0,     0,
       0,     0,     0,     0,    65,   367,    67,    68,  1981,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   368,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1987,  1988,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   369,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1991,
       0,     0,     0,     0,     0,     0,     0,     0,   370,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2358,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   371,     0,     0,     0,  1994,     0,     0,
       0,  1995,     0,     0,  1996,    90,     0,     0,     0,     0,
       0,     0,     0,     0,  1997,     0,     0,     0,   294,     0,
       0,     0,     0,     0,    93,     0,    94,    95,     0,     0,
     372,   373,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,   374,   375,   376,   377,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,   357,   358,   359,   360,   361,   362,     0,   363,   364,
     365,     0,     0,     0,     3,   366,     0,     0,     0,     0,
     480,     4,     5,   197,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,    65,
     367,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   475,   476,   368,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   369,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   370,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   579,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   371,     0,
       0,     0,     0,     0,     0,     0,     0,   478,     0,     0,
     293,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   294,     0,     0,     0,     0,     0,    93,
       0,    94,    95,     0,   479,   372,   373,     0,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,   374,
     375,   376,   377,     0,     0,     0,     0,     0,     0,    99,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,   357,   358,   359,   360,
     361,   362,     0,   363,   364,   365,     0,     0,     0,     3,
     366,     0,     0,     0,     0,   580,     4,     5,   197,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,    65,   367,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   475,   476,   368,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   369,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   370,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   842,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   371,     0,     0,     0,     0,     0,     0,
       0,     0,   478,     0,     0,   293,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   294,     0,
       0,     0,     0,     0,    93,     0,    94,    95,     0,   479,
     372,   373,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,   374,   375,   376,   377,     0,     0,
       0,     0,     0,     0,    99,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,   357,   358,   359,   360,   361,   362,     0,   363,   364,
     365,     0,     0,     0,     3,   366,     0,     0,     0,     0,
     580,     4,     5,   197,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,    65,
     367,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   817,     0,     0,     0,   475,   476,   368,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     921,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   818,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   369,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   370,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   371,     0,
       0,     0,     0,     0,     0,     0,     0,   478,     0,     0,
     293,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   294,     0,     0,     0,     0,     0,    93,
       0,    94,    95,     0,   479,   372,   373,     0,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,   374,
     375,   376,   377,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,   357,   358,   359,   360,
     361,   362,     0,   363,   364,   365,     0,     0,     0,     3,
     366,     0,     0,     0,     0,   819,     4,     5,   197,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,    65,   367,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   817,     0,
       0,     0,   475,   476,   368,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1285,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   818,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   369,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   370,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   371,     0,     0,     0,     0,     0,     0,
       0,     0,   478,     0,     0,   293,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   294,     0,
       0,     0,     0,     0,    93,     0,    94,    95,     0,   479,
     372,   373,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,   374,   375,   376,   377,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,   357,   358,   359,   360,   361,   362,     0,   363,   364,
     365,     0,     0,     0,     3,   366,     0,     0,     0,     0,
     819,     4,     5,   197,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,    65,
     367,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   475,   476,   368,
       0,     0,  1360,  1361,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   369,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1362,     0,     0,     0,
       0,     0,     0,   370,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   371,     0,
       0,     0,     0,     0,     0,     0,     0,   478,     0,     0,
     293,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   294,     0,     0,     0,     0,     0,    93,
       0,    94,    95,     0,   479,   372,   373,     0,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,   374,
     375,   376,   377,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,   357,   358,   359,   360,
     361,   362,     0,   363,   364,   365,     0,     0,     0,     3,
     366,     0,   979,     0,     0,   480,     4,     5,   197,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,    65,   367,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   475,   476,   368,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1692,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   369,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1693,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   370,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   371,     0,     0,     0,     0,     0,     0,
       0,     0,   478,     0,     0,   293,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   294,     0,
       0,     0,     0,     0,    93,     0,    94,    95,     0,   479,
     372,   373,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,   374,   375,   376,   377,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,   357,   358,   359,   360,   361,   362,     0,   363,   364,
     365,     0,     0,     0,     3,   366,     0,     0,     0,     0,
     480,     4,     5,   197,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,    65,
     367,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   475,   476,   368,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   369,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   370,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   371,     0,
       0,     0,     0,     0,   570,     0,     0,   478,     0,     0,
     293,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   294,     0,     0,     0,     0,     0,    93,
       0,    94,    95,     0,   479,   372,   373,   571,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,   374,
     375,   376,   377,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,   357,   358,   359,   360,
     361,   362,     0,   363,   364,   365,     0,     0,     0,     3,
     366,     0,     0,     0,     0,   480,     4,     5,   197,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,    65,   367,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   475,   476,   368,     0,     0,   784,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   785,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   369,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   370,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   371,     0,     0,     0,     0,     0,     0,
       0,     0,   478,     0,     0,   293,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   294,     0,
       0,     0,     0,     0,    93,     0,    94,    95,     0,   479,
     372,   373,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,   374,   375,   376,   377,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,   357,   358,   359,   360,   361,   362,     0,   363,   364,
     365,     0,     0,     0,     3,   366,     0,     0,     0,     0,
     480,     4,     5,   197,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,    65,
     367,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   817,     0,     0,     0,   475,   476,   368,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   818,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   369,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   370,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   371,     0,
       0,     0,     0,     0,     0,     0,     0,   478,     0,     0,
     293,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   294,     0,     0,     0,     0,     0,    93,
       0,    94,    95,     0,   479,   372,   373,     0,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,   374,
     375,   376,   377,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     0,     3,
       0,     0,     0,     0,     0,   819,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,    65,    66,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    69,
       0,     0,     0,     0,     0,     0,     0,     0,    70,     0,
      71,     0,     0,    72,     0,     0,     0,     0,     0,     0,
      73,     0,     0,     0,    74,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,     0,    76,     0,     0,     0,
       0,     0,     0,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     0,     0,    79,    80,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    82,    83,    84,    85,
       0,    86,    87,    88,     0,    89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    91,     0,     0,    92,     0,
       0,     0,     0,     0,    93,     0,    94,    95,     0,     0,
       0,     0,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,    98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    99,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   102,     0,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,   357,   358,   359,   360,   361,   362,     0,   363,   364,
     365,     0,     0,     0,     3,   366,     0,     0,     0,     0,
     120,     4,     5,   197,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,    65,
     367,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   475,   476,   368,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   477,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   369,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   370,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   371,     0,
       0,     0,     0,     0,     0,     0,     0,   478,     0,     0,
     293,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   294,     0,     0,     0,     0,     0,    93,
       0,    94,    95,     0,   479,   372,   373,     0,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,   374,
     375,   376,   377,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,   357,   358,   359,   360,
     361,   362,     0,   363,   364,   365,     0,     0,     0,     3,
     366,     0,   979,     0,     0,   480,     4,     5,   197,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,    65,   367,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   475,   476,   368,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   369,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   370,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   371,     0,     0,     0,     0,     0,     0,
       0,     0,   478,     0,     0,   293,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   294,     0,
       0,     0,     0,     0,    93,     0,    94,    95,     0,   479,
     372,   373,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,   374,   375,   376,   377,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,   357,   358,   359,   360,   361,   362,     0,   363,   364,
     365,     0,     0,     0,     3,   366,     0,     0,     0,     0,
     480,     4,     5,   197,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,    65,
     367,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   475,   476,   368,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   369,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   370,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   371,     0,
       0,     0,     0,     0,     0,     0,     0,   478,     0,     0,
     293,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   294,     0,     0,     0,     0,     0,    93,
       0,    94,    95,     0,   479,   372,   373,     0,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,   374,
     375,   376,   377,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,   357,   358,   359,   360,
     361,   362,     0,   363,   364,   365,     0,     0,     0,     3,
     366,     0,     0,     0,  2140,   480,     4,     5,   197,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,    65,   367,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   475,   476,   368,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,  2310,     0,     0,     0,     0,
       0,   369,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   370,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   371,     0,     0,     0,     0,     0,     0,
       0,     0,   478,     0,     0,   293,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   294,     0,
       0,     0,     0,     0,    93,     0,    94,    95,     0,   479,
     372,   373,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,   374,   375,   376,   377,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,   357,   358,   359,   360,   361,   362,     0,   363,   364,
     365,     0,     0,     0,     3,   366,     0,     0,     0,     0,
     480,     4,     5,   197,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,    65,
     367,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   475,   476,   368,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   369,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   370,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   371,     0,
       0,     0,     0,     0,     0,     0,     0,   478,     0,     0,
     293,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   294,     0,     0,     0,     0,     0,    93,
       0,    94,    95,     0,   479,   372,   373,     0,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,   374,
     375,   376,   377,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,   357,   358,   359,   360,
     361,   362,     0,   363,   364,   365,     0,     0,     0,     3,
     366,     0,     0,     0,     0,   480,     4,     5,   197,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,    65,   367,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   368,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   369,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   370,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2224,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   371,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   294,     0,
       0,     0,     0,     0,    93,     0,    94,    95,     0,     0,
     372,   373,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,   374,   375,   376,   377,     0,     0,
       0,     0,     0,     0,    99,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,   357,   358,   359,   360,   361,   362,     0,   363,   364,
     365,     0,     0,     0,     3,   366,     0,     0,     0,     0,
     580,     4,     5,   197,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,    65,
     367,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   368,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   369,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   370,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2358,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   371,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   294,     0,     0,     0,     0,     0,    93,
       0,    94,    95,     0,     0,   372,   373,     0,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,   374,
     375,   376,   377,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,   357,   358,   359,   360,
     361,   362,     0,   363,   364,   365,     0,     0,     0,     3,
     366,     0,     0,     0,     0,   480,     4,     5,   197,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,    65,   367,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   368,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   369,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   370,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2358,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   371,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   294,     0,
       0,     0,     0,     0,    93,     0,    94,    95,     0,     0,
     372,   373,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,   374,   375,   376,   377,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,   357,   358,   359,   360,   361,   362,     0,   363,   364,
     365,     0,     0,     0,     3,   366,     0,     0,     0,     0,
     480,     4,     5,   197,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,    65,
     367,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   368,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   369,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   370,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   371,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     293,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   294,     0,     0,     0,     0,     0,    93,
       0,    94,    95,     0,     0,   372,   373,     0,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,   374,
     375,   376,   377,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,   357,   358,   359,   360,
     361,   362,     0,   363,   364,   365,     0,     0,     0,     3,
     366,     0,     0,     0,     0,   378,     4,     5,   197,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,    65,   367,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   368,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   369,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   370,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   371,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   293,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   294,     0,
       0,     0,     0,     0,    93,     0,    94,    95,     0,     0,
     372,   373,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,   374,   375,   376,   377,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     3,     0,     0,     0,     0,     0,
     480,     4,     5,   197,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     1,     0,     0,     0,    65,
      66,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     5,   197,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    76,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,    65,    66,    67,    68,     0,     0,
       0,     0,     0,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     293,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   294,     0,     0,     0,     0,    79,    93,
       0,    94,    95,     0,     0,     0,     0,     0,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    99,
       0,     0,   100,     0,     0,     0,   335,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    93,     0,     0,     0,   968,     0,
       0,     0,     0,     0,     0,   120,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    99,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1245,     4,     5,   197,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     1,     0,     0,     0,     0,     0,    65,
      66,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     5,   197,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,     0,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,     0,     0,     0,     0,
       0,     0,    65,    66,    67,    68,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   579,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,     0,   968,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    99,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   294,     0,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    96,    97,     0,  1245,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   309,     4,
       5,   197,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     0,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     1,     0,     0,     0,     0,     0,    65,    66,    67,
      68,     0,     0,     0,     0,     0,   502,     0,     0,     0,
       0,     0,     4,     5,   197,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,     0,     0,     0,     1,     0,     0,
      65,    66,    67,    68,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   503,     4,     5,
     197,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     0,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
       0,     0,     0,     0,     0,     0,    65,    66,    67,    68,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,     0,   968,     0,     0,     0,     0,     0,
       0,     0,     0,  1257,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   969,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1687,     4,     5,   197,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     0,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     0,     0,     0,     0,     0,
       0,    65,    66,    67,    68,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   789,     0,     0,     0,     0,
     790,     0,     0,     0,   791,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   792,     0,     0,     0,     0,     0,
     793,     0,     0,     0,     0,   794,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   795,     0,     0,     0,     0,     0,     0,     0,   796,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   797,
       0,     0,     0,     0,     0,     0,     0,   798,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     799,   800,   801,   802,     0,     0,     0,     0,   803,   804,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   805,   806,   807,   808,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,   810,   811,     0,     0,     0,     0,     1,     0,     0,
       0,     0,     0,     0,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,     4,     5,
     197,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     0,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
       0,     0,     0,     0,     0,     0,    65,    66,    67,    68,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     789,     0,     0,     0,     0,   790,     0,     0,     0,  1186,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   792,
       0,     0,     0,     0,     0,   793,     0,     0,     0,     0,
     794,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   795,     0,     0,     0,
       0,     0,     0,     0,   796,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   797,     0,     0,     0,     0,     0,
       0,     0,   798,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1187,   800,   801,  1188,     0,
       0,     0,     0,   803,   804,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   805,   806,   807,   808,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,   810,   811,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,     0,     0,
       0,     0,     0,     0,     4,     5,   197,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,     0,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,     0,     0,     0,     0,
       0,     0,    65,    66,    67,    68,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,   693,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,     4,     5,   197,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
       0,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     0,     0,     0,
       0,     0,     0,    65,    66,    67,    68,     0,     0,     0,
       0,     0,   694,     0,     0,     0,     0,     0,     0,     0,
     695,   696,   697,   698,   699,     0,     0,     0,     0,     0,
       0,     0,     0,   293,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   294,     0,     0,     0,
       0,     0,    93,     0,    94,    95,     0,     0,     0,     0,
       0,     0,    96,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,   102,
       0,     0,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,     4,
       5,   197,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     0,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     0,     0,    93,     0,     0,     0,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     257,     0,     0,     0,     0,     0,   100,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   258,     0,     0,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
       0,     0,     0,     0,     0,     0,   259,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   260,     0,   261,     0,     0,     0,
       0,   262,     0,     1,     0,     0,     0,     0,     0,     0,
     263,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   264,     4,     5,   197,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,     0,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,   265,   266,     0,     0,
       0,     0,    65,    66,    67,    68,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   311,     0,     0,     0,     0,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   258,     0,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,     0,     0,     0,     0,     0,     0,
       0,   259,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   260,
       0,   261,     0,     0,     0,     0,   262,     0,     1,     0,
       0,     0,     0,     0,     0,   263,     0,     0,     0,     0,
       0,     0,   319,     0,     0,     0,     0,     0,   312,     4,
       5,   197,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     0,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,   313,   314,     0,     0,     0,     0,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,     0,     0,     0,     0,
     320,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   321,     0,     0,     4,     5,   197,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,     0,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,     0,     0,     0,     0,
       0,   322,    65,    66,    67,    68,     0,    93,     0,     0,
       0,     0,     0,   323,     0,     0,     0,   324,   325,     0,
       0,     0,     0,     0,     0,     0,  1419,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   326,     0,     0,     0,     0,     0,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     0,     0,     0,
       0,  1087,  1088,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     4,     5,   197,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    93,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,     0,
       0,     0,     0,     0,     0,    65,    66,    67,    68,     0,
       0,  1420,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,  1089,     0,     0,     0,     0,     1,     0,
       0,     0,     0,     0,     0,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,     4,
       5,   197,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     0,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     0,     0,     0,     0,     0,     0,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   294,
       0,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    96,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,     0,
       0,   286,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   287,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     0,     0,     0,     0,     0,
     106,   107,   108,   109,   110,   111,   288,   113,   114,   115,
     116,   117,   118,   119,     4,     5,   197,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,     0,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,     1,     0,     0,     0,
       0,     0,    65,    66,    67,    68,     0,     0,     0,     0,
       0,   502,     0,     0,     0,     0,     0,     4,     5,   197,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,     0,
       0,     0,     0,     0,     0,    65,    66,    67,    68,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   503,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,   978,     0,     0,
       0,     0,   889,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   979,     0,     0,     0,     4,     5,   197,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    93,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,     0,
       0,   890,     0,     0,     0,    65,    66,    67,    68,     0,
       0,     0,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     0,     0,     0,     0,     0,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,     4,     5,   197,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,     0,     0,     0,     0,     0,     0,
      65,    66,    67,    68,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1584,     0,     0,     0,     0,     4,     5,   197,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
       0,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     1,     0,     0,
       0,     0,     0,    65,    66,    67,    68,     0,   755,     0,
       0,     0,  1685,     0,     0,     0,     0,     0,     4,     5,
     197,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     0,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
       0,     0,     0,     0,     0,     0,    65,    66,    67,    68,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,  1967,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   541,     0,     0,
       0,     0,     0,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
       0,     0,     0,     0,     0,  1968,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,     0,     0,     0,     0,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,     4,     5,   197,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     0,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     1,     0,     0,     0,     0,
       0,    65,    66,    67,    68,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     5,   197,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     1,     0,
       0,     0,     0,     0,    65,    66,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       5,   197,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     0,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     0,     0,     0,     0,     0,     0,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   290,     0,   438,     0,
       0,     0,     0,     0,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   429,     0,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     0,     0,     0,     0,     0,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,     4,     5,   197,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,     0,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,     1,     0,     0,     0,
       0,     0,    65,    66,    67,    68,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     4,     5,   197,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,     0,
       0,     0,     0,     0,     0,    65,    66,    67,    68,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   368,     0,     0,     0,     0,
       4,     5,   197,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,     0,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,     0,     0,     0,     0,   453,     0,    65,    66,
      67,    68,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,   541,     0,     0,     0,     0,
       0,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,     4,     5,   197,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
       0,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     1,     0,     0,
       0,     0,     0,    65,    66,    67,    68,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     4,     5,
     197,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     0,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
       0,     0,     0,     0,     0,     0,    65,    66,    67,    68,
     260,     0,     0,     0,     0,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1379,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     5,   197,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,  1503,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,    93,    65,    66,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,     0,  1504,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     4,     5,   197,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,    65,
      66,    67,    68,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1584,
       0,     0,     0,     0,     4,     5,   197,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,     0,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,     1,     0,     0,     0,
       0,     0,    65,    66,    67,    68,     0,     0,     0,     0,
       0,  1685,     0,     0,     0,     0,     0,     4,     5,   197,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,     0,
       0,     0,     0,     0,     0,    65,    66,    67,    68,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1750,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     0,     0,     0,     0,     0,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,     4,     5,   197,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,     1,     0,     0,     0,     0,     0,
      65,    66,    67,    68,     0,     0,     0,     0,     0,  1862,
       0,     0,     0,     0,     0,     4,     5,   197,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
       0,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     1,     0,     0,
       0,     0,     0,    65,    66,    67,    68,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     4,     5,
     197,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     0,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
       0,     0,     0,     0,     0,     0,    65,    66,    67,    68,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1390,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,     0,     0,     0,     0,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,     4,     5,   197,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     0,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     0,     0,     0,     0,     0,
       0,    65,    66,    67,    68,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   106,   107,   108,   109,   110,   111,
     288,   113,   114,   115,   116,   117,   118,   119
};

static const yytype_int16 yycheck[] =
{
       0,     0,     0,     0,   382,   201,    81,   459,     0,   285,
       2,   607,   201,   692,     0,   684,   661,   222,  1021,   397,
    1023,  1193,   684,   228,   229,   906,  1136,   571,  1183,    91,
       0,  1495,   616,   238,  1212,   818,   715,  1328,   262,   263,
     424,   919,  1825,   627,  1652,   688,   567,  1439,   569,  1133,
     506,   435,  1843,     3,  1657,  1493,   547,  1593,   549,     3,
    1234,     7,  1236,  1512,     0,  1725,   547,     0,   549,   304,
       0,  1704,     0,   549,   348,  1603,  1841,  1013,     4,     2,
       7,   723,    82,    75,     0,   108,  1550,  1613,    80,    81,
      82,   517,   968,   969,   102,  1631,   149,   101,    90,    91,
     149,   201,    94,    95,     4,   483,    98,   186,   102,   103,
     101,   728,    82,   730,   212,   398,  1843,   108,   101,    90,
      98,   101,   100,   221,    95,   108,   108,   101,   201,   102,
     352,    84,   201,     3,  2126,    25,   104,   105,   201,   104,
     105,   193,   377,   241,   469,    35,   244,   104,   105,   247,
     120,   172,   608,    62,   149,   104,   105,    92,   172,   200,
     185,   102,  2310,     7,    27,   240,   592,   355,     7,   164,
     115,   251,   115,  2321,   274,    62,   142,     4,   504,   240,
      70,   129,   211,   212,   102,   149,    24,  1297,    78,   102,
     368,   247,   104,   105,    62,   251,   181,    87,   104,   105,
     104,   105,   201,   278,   118,   583,   334,   253,   124,   337,
     338,   203,   417,   205,   436,   207,   106,   601,   185,   204,
     212,    59,   427,   302,   280,   139,   115,   219,   368,   221,
     222,   198,   196,  2381,   295,   227,   228,   229,    65,   201,
     232,   233,   234,   106,   628,  1575,   238,   156,   240,   241,
     242,   265,   244,   245,   246,   247,   248,   249,   250,   251,
     208,   253,   254,   255,   256,   231,   182,   111,   289,   156,
     761,   545,   111,   817,   548,   819,   550,   768,   378,   705,
     761,   772,   274,   308,   313,   761,   278,   768,   156,   368,
     370,   772,   768,   163,   289,   287,   772,   370,   290,   291,
    1474,   370,   109,   110,   111,   112,   113,   590,   686,   232,
     233,   234,   304,  2305,   306,   378,    24,   370,   370,   297,
     542,   370,   647,   246,  1107,   248,   249,   250,   251,   370,
     253,   254,   255,   256,   243,  1213,   920,   525,   526,   527,
     438,   529,   530,   200,   532,  1881,   534,   320,  1956,   372,
     303,   296,   778,   296,   346,   308,   243,  1293,  1003,   351,
     352,   353,   108,   371,   599,   335,   588,   290,   372,  1245,
     305,  1307,  1014,   186,   368,   243,  1667,   371,  2143,   371,
     480,   372,   166,   306,   310,   377,   712,   575,   814,   372,
     372,   466,   372,  1921,   368,   368,   585,   495,   371,  2126,
     371,   369,  1928,   293,   369,   681,   468,   296,   370,   309,
     310,   224,   369,  1743,   840,  2048,   514,   480,   410,    24,
     369,   178,   368,   373,   368,   417,   702,   368,  1866,  1867,
     371,   367,  1049,  1050,   367,   427,   428,   367,  1616,   367,
     330,   368,   434,   186,   436,   897,   438,   522,  2108,   157,
     368,   367,   444,   371,   202,   368,   186,   369,   371,   980,
     452,   523,   251,   369,   202,   369,   251,   459,    98,    99,
     100,   463,   464,  2218,   466,   137,   468,   469,   934,   701,
     580,   224,   369,   186,   192,   242,   478,   410,   238,   302,
     482,  1669,   166,   464,   224,   185,   718,   771,   107,   775,
       4,   369,  1527,   495,   496,   428,  1680,   169,   198,  2300,
     502,  1389,   369,   370,   506,   507,  1600,   580,  2309,     4,
      89,   444,   514,   106,   729,   517,   310,   519,   520,   452,
     522,   523,  2135,  1536,   632,  1984,   251,  1986,   760,   195,
    1989,   109,   110,   111,   112,   113,  1002,    62,   540,   520,
     542,   301,   157,   204,  1098,   368,  2092,  1101,  1102,   302,
     552,     4,   124,   172,  1020,  1021,   373,  1023,   560,  1060,
      12,    13,   302,  2300,    62,  1358,   250,  1602,  2305,  1060,
    1363,   370,  2309,   368,  1060,   228,   196,   192,   109,   110,
     111,   112,   113,   585,  1115,  2203,   588,  1193,  1990,   302,
     592,   593,  1028,  2386,  1056,  1248,   598,   599,   706,   579,
     580,   603,   847,   848,   606,  2360,   608,   540,   124,   186,
     182,   138,   186,   369,   370,   368,   372,   106,   850,   621,
     622,   104,   105,   186,   732,   204,   871,   607,   368,  1817,
     632,   156,   634,  1821,   161,   301,   638,   109,   110,   111,
     112,   113,   644,   368,   264,   647,   265,   862,   846,   310,
     224,   896,   136,  1841,  2300,   368,   658,   297,   156,  1847,
     371,   372,  2308,  1783,  1965,   258,   259,   260,   195,  1131,
     603,   187,    40,    41,    42,    43,   136,    91,   121,  2416,
     169,    49,   368,    51,  1238,   371,   688,   250,   621,   622,
     196,  1127,   694,    97,    98,    99,   100,  1490,    66,   701,
     178,   463,  1168,   705,   706,   638,    60,   228,   160,   819,
     944,   644,   142,    30,  1180,   199,   718,  2454,   243,   162,
     722,   966,   967,   138,   726,   302,   140,   729,   302,   163,
     732,   109,   110,   111,   112,   113,    12,    13,   106,   199,
     109,   110,   111,   112,   113,   243,   819,   106,   107,   751,
     109,   110,   111,   112,   113,   688,     4,   519,   760,  1879,
     870,   120,   116,   246,   242,  1653,   250,   251,   211,  1934,
      87,   115,   774,   251,  1006,   777,   778,   317,   780,   120,
     195,   215,   216,   763,   109,   110,   111,   112,   113,  2335,
     250,   368,   368,   726,   368,   373,   140,   156,   166,  1981,
    1455,   231,   232,   178,   234,   164,   368,   247,  1202,   168,
     142,   251,   814,  2287,   186,   156,   368,   192,   751,  1051,
     109,   110,   111,   112,   113,   197,  1262,   168,     4,     5,
       6,     7,     8,     9,     0,    64,    12,    13,   840,   370,
     280,  1435,    18,   367,    69,   847,   848,    72,   850,    74,
    1970,  1864,   109,   110,   111,   112,   113,   859,  1412,    88,
     862,    90,   842,   935,   936,   937,   938,   242,   870,   871,
      24,   873,    33,    34,   368,    36,  1764,  1765,   222,   102,
     882,   883,   884,    24,  2322,  2323,   254,   889,   890,   369,
     370,  1136,  1124,   297,   896,   897,  1575,   369,   370,   231,
     232,   368,   234,  1575,   371,   134,    60,    33,    34,   911,
      36,    72,   369,   370,  1805,    69,   918,    93,  1931,   109,
     110,   111,   112,   113,   926,  1124,  2046,    88,    69,   201,
     932,   203,   934,   935,   936,   937,   938,  1403,   367,   941,
    1494,   370,   310,  1188,   109,   110,   111,   112,   113,   882,
     883,   371,    33,    34,  1416,  2143,   137,   890,  1030,  1031,
    1032,  1033,    88,    26,   966,   967,   968,   969,   368,   150,
     151,   371,   974,   969,   109,   110,   111,   112,   113,   110,
     111,   112,   113,  1449,  2422,   918,   988,    16,  1098,   969,
     247,   369,   370,   169,   109,   110,   111,   112,   113,   176,
    1002,   370,   169,   157,  1006,  2125,  1008,    88,     3,  1011,
     369,   370,   198,  1015,  2452,  2453,   157,   317,  1020,  1021,
     196,  1023,  1024,   280,   178,  1098,  1028,   157,  1030,  1031,
    1032,  1033,   126,  2215,    26,   968,   969,    24,   192,   367,
     238,    41,   196,   371,   198,   370,   367,   172,  1703,  1051,
     371,   192,  1297,   147,  1056,   196,   138,   198,   368,   153,
    1292,   371,  1294,  1065,  1743,  1067,    33,    34,    26,  1535,
    1536,  1743,    59,   177,   250,    33,    34,  1057,    36,   161,
      67,   370,   176,     7,   238,     9,  2235,   241,   242,   109,
     110,   111,   112,   113,    19,   368,    21,    22,  1330,   181,
     194,   277,   369,   370,   186,    72,   106,   109,   110,   111,
     112,   113,  2300,   195,   368,   172,  2298,   371,  1098,   273,
     172,    88,  1124,   367,   131,  1127,   126,   371,  1130,  1131,
      88,   138,   367,   172,  1136,   142,   371,   137,   109,   110,
     111,   112,   113,   370,  2157,   152,  1378,   301,   298,  1151,
     109,   110,   111,   112,   113,   153,  1401,  1623,  1624,   368,
    1622,  2310,   371,   317,  1166,     7,  1168,     9,  1366,   169,
     332,  1173,  2321,   327,   328,    45,   176,    47,  1180,   369,
     187,   181,   235,   236,   237,     7,  1188,     9,   109,   110,
     111,   112,   113,   187,   194,  1197,  1198,   368,   525,   526,
     527,   201,   529,   530,   369,   532,    46,   534,    48,    24,
       3,    26,  1214,  1193,  1869,  1217,   369,   370,    33,    34,
      46,     4,    48,   230,   231,  1227,    41,   109,   110,   111,
     112,   113,  2381,  2382,   369,   109,   110,   111,   112,   113,
    1222,   153,  1224,  1245,   371,    60,  1248,   368,  1802,  1245,
     104,   105,   367,   172,    69,  1257,   263,   282,   283,   284,
    1262,   286,   287,   288,  1197,  1245,   112,   113,   335,   336,
    1959,  1273,   177,    88,   369,   370,    91,   369,   370,   369,
     370,   281,   109,   110,   111,   112,   113,    81,    82,  1291,
    1292,   106,  1294,   264,   172,  1297,   109,   110,   111,   112,
     113,   369,   370,   172,    41,  1859,   306,   369,   370,   369,
     370,   311,  1245,   369,   370,  1248,    31,    32,   318,   109,
     110,   111,   112,   113,   172,   140,   369,   370,  1330,   109,
     110,   111,   112,   113,   109,   110,   111,   112,   113,   369,
     370,   369,   370,   158,   368,  1811,   369,   370,   266,   369,
    1582,  1583,   369,   370,    91,  1587,   109,   110,   111,   112,
     113,     3,     4,   178,   329,   330,   369,   369,  1834,   106,
    1568,  1657,   369,   370,     3,  1981,  1378,   192,  1380,   194,
     368,   196,   368,   198,   368,   282,   283,   284,  1587,   286,
     287,   206,   207,   368,   209,   210,   369,   370,  1864,  1401,
     368,  1403,  1404,   140,   368,  1490,   368,   282,   283,   284,
     369,   286,   287,   288,  1416,   290,   109,   110,   111,   112,
     113,   158,   368,   238,   196,  1670,   241,   242,   109,   110,
     111,   112,   113,   109,   110,   111,   112,   113,  1440,   109,
     110,   111,   112,   113,  1424,    99,     3,  1449,   369,   171,
    1682,  1683,    38,    39,   369,   370,  1458,   194,   273,   369,
     370,  1923,  1464,   127,   128,  1931,  1902,  1903,   370,   206,
     207,   105,   368,   210,   138,   109,   110,   111,   112,   113,
    1482,   145,   369,   370,    41,   368,   301,   369,  1490,   368,
     127,   128,   368,   163,   371,   369,   368,   161,   369,   370,
     315,   138,   317,   369,   370,   369,   370,  1440,   145,   173,
    1512,   372,   327,   328,   369,   370,  1748,  1749,   371,   183,
     371,   372,   186,   368,   161,   176,   109,   110,   111,   112,
     113,   195,    15,  1535,  1536,   371,   173,   371,  1783,   371,
      97,   371,   369,   100,    15,   368,   183,    77,    78,   186,
     371,   109,   110,   111,   112,   113,   369,   371,   195,   116,
     143,   371,     4,     5,     6,     7,     8,     9,   369,   370,
     246,   369,   370,   208,  2036,   371,    18,  1579,   165,   369,
    1582,  1583,   371,  2137,  2138,  1587,   250,   369,   370,   369,
       4,     5,     6,     7,   369,     9,  2032,  2033,   369,   370,
     157,  1603,   159,   371,    18,   371,   163,   369,   370,  2215,
     369,   370,   369,   370,  2080,   371,   369,   256,   257,   371,
    1622,  1623,  1624,   369,   370,   172,   109,   110,   111,   112,
     113,   371,  1634,   371,  1879,   369,   370,  1639,   109,   110,
     111,   112,   113,   201,   201,   157,  1579,   204,   371,  1651,
    1652,    93,    73,    74,    75,    76,  1658,    78,    79,    80,
     217,   218,  1877,   137,   221,   250,   223,   250,  1670,   109,
     110,   111,   112,   113,  1676,  1907,   369,    96,   118,     4,
    1682,  1683,  1684,  1685,   149,  1687,   101,  1689,   369,   369,
     370,  2157,  2298,   371,   372,   149,   110,   111,   255,   139,
     200,  1634,   366,   367,    91,   371,  1639,   124,  1907,   109,
     110,   111,   112,   113,   172,   116,    73,    74,    75,    76,
     121,    78,    79,    80,   125,  1970,    83,   169,   124,   366,
       4,   369,   370,  1843,   135,  1623,  1624,    91,  2292,   126,
     141,    96,   129,   369,   370,   146,  1748,  1749,   369,   370,
    2304,   108,   369,   370,  1687,   169,   156,  1250,  1251,   193,
     147,   162,   201,     4,  1874,   371,   153,   369,   157,   170,
    1843,   368,   126,     4,   101,   129,   149,   371,   370,   180,
     137,  1783,   109,   110,   111,   112,   113,   188,   108,   176,
     371,   368,   108,   147,   101,   333,   101,   174,   192,   153,
     370,  2046,   109,   110,   111,   112,   113,   194,   371,  1811,
     211,   212,   213,   214,   172,    16,  1818,     4,   219,   220,
       3,   208,   176,    96,   296,   149,  1828,    97,   123,   156,
     370,   370,  1834,  1843,  1843,  1837,   369,   368,   370,   165,
     194,  1843,   371,   369,   368,   370,  1848,   204,   368,  2135,
     369,   105,    94,    95,   208,   109,   110,   111,   112,   113,
    1862,   372,  1864,  1865,   101,    24,   267,   268,   269,   270,
     254,    87,  1874,   172,   116,  1877,   101,  1879,  2340,   121,
    2125,   368,    41,   125,    73,    74,    75,    76,   153,    78,
      79,    80,   171,   135,    83,  1828,   101,   101,   174,   141,
    1902,  1903,   138,   172,   146,  1907,   193,  1992,   371,   193,
      69,   312,   313,   109,   110,   111,   112,   113,   193,  1921,
     162,  1923,   193,     3,     3,   368,     7,  2315,   170,  1931,
     368,     7,    91,   251,   200,   315,   106,   107,   180,   109,
     110,   111,   112,   113,  2406,   368,   188,   106,     4,   107,
     120,   371,   368,  1955,  1956,   149,   369,   149,  1960,   149,
     370,  1963,   370,   149,   369,   369,   369,   369,  1970,   211,
     212,   213,   214,   149,   369,   123,    91,   219,   220,   369,
     368,   140,  1984,  1993,  1986,  1987,   156,  1989,   369,  1991,
    1992,  1993,   251,   368,   164,  2105,   368,   368,   168,   158,
     175,  1981,   368,    52,    53,    54,    55,    56,    57,    58,
     370,   126,    61,  1993,   129,   368,  2126,   368,   368,   368,
     368,   368,    71,   368,   368,   267,   268,   269,   270,  2235,
    2032,  2033,   147,   192,  2036,   194,   369,   196,   153,   371,
     368,   371,   149,    59,  2046,   254,   369,   206,   207,    38,
     209,   210,   371,  2126,   368,   368,   371,   101,   368,   301,
     172,   176,   370,    52,    53,    54,    55,    56,    57,    58,
     312,   313,    61,   367,   149,   372,     4,     4,  2080,   194,
     171,   371,    71,   368,    68,   371,     7,   300,   251,   370,
     153,    23,   369,   208,   334,    26,  2098,  2099,    35,   371,
     368,    26,   251,     3,  2310,   307,   251,   371,   251,   251,
     251,   251,   251,    91,  2116,  2321,  2126,  2126,  2126,   369,
     320,  2123,     7,  2125,     7,  2235,     7,     7,     7,     7,
       7,  2133,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,     7,  2126,     7,     7,     7,
     369,   368,   204,     4,   369,  2157,   310,   369,   369,     4,
     368,   101,  2235,    96,   165,   368,   165,     3,    44,   368,
      44,   368,     3,   368,   367,  2381,  2382,   368,   200,   325,
     285,  2291,   201,   368,   368,     7,   174,   201,   369,   371,
    2300,   371,   369,   251,   290,  2305,   369,   369,   285,  2309,
    2310,  2203,   155,   123,   309,     7,   209,    97,     4,   144,
     106,  2321,   171,   101,  2224,   371,   209,   370,   370,  2221,
    2222,  2223,  2224,   370,   169,   369,   311,  2300,   333,   334,
     105,   369,  2305,   369,   369,  2215,  2309,  2310,   369,   369,
     369,   369,   369,   369,  2224,   369,   351,   369,  2321,   368,
     355,   371,   196,   371,   371,   369,   372,   149,    59,   166,
     368,    91,     7,   369,   368,   368,   368,     7,   373,    97,
     371,  2381,  2382,   378,   107,   201,   370,     3,   107,     4,
     326,    96,   152,   371,   368,     7,  2288,  2289,   371,   371,
    2300,  2300,  2300,  2300,    22,  2305,  2305,  2305,   369,  2309,
    2309,   370,   369,   369,   165,   218,  2416,   368,  2381,  2382,
     165,    38,   169,     3,    38,    38,   172,    38,  2298,    37,
      40,   368,   251,     7,     7,   143,   369,   251,   251,   371,
     106,     7,     4,   108,   101,     4,  2338,  2339,  2340,    25,
     368,   250,   369,  2416,  2454,   369,   369,   368,  2358,   369,
     306,   165,   169,   185,   123,   368,  2358,   155,   126,     7,
     179,   310,   371,   174,   368,    96,   239,   144,   368,    86,
     475,   476,   368,    89,   137,   480,    35,    44,    44,   169,
     172,  2454,   254,     4,     4,    59,   369,   369,   368,   368,
      63,   186,   373,   498,     4,    87,   368,    28,   201,   370,
     368,   368,   174,   368,  2406,  2407,  2416,  2416,  2416,   371,
     370,     4,   517,   101,   307,    59,   367,   369,   368,   101,
     525,   526,   527,   528,   529,   530,   368,   532,    50,   534,
     368,   169,     4,   369,    29,   251,   370,   101,   251,   101,
     101,   371,   181,   106,  2454,  2454,  2454,     4,   201,     7,
     165,   370,   123,   172,   101,   101,   370,   368,     4,   244,
     565,   566,   368,   148,   193,   570,   368,   368,   149,   368,
     575,   576,   577,   367,  2407,   580,   367,     3,   367,   172,
     367,   586,    27,   367,   310,   367,    50,   592,    32,     3,
      87,    30,     7,   161,   172,     4,   210,   368,    96,   368,
     368,   134,   369,   369,   368,    96,   371,   370,     4,   255,
       3,   138,     7,   193,     3,   367,   370,   370,   623,   624,
     370,   368,     7,   369,   201,   369,   369,   369,   289,     4,
       7,    97,   303,   368,   176,    96,    24,   163,     4,     4,
       4,     4,   369,   108,   369,     7,   370,   201,   201,   166,
     165,   242,   304,   156,     7,     4,   368,    78,    77,   369,
     310,   370,     7,   370,   372,     4,   167,     4,   368,     7,
     367,   250,   247,   678,   367,     4,   681,    24,     4,     7,
     369,     4,   369,   201,     4,   369,   124,  1180,  2089,  2051,
     695,   696,   697,   698,   699,   255,  1932,   702,  2189,   704,
     705,   236,   124,  2095,    91,  1149,   731,  1543,     0,     0,
       0,   928,     0,  2031,  1215,  2385,  1511,  2445,   467,     0,
       0,   666,   676,  1002,     0,  2382,   683,  1931,  1228,  1254,
    1404,  1570,  1687,   481,  2103,  2205,  1882,   205,   201,   694,
     777,   681,  1135,   777,   896,   833,  2337,   752,   910,  1919,
    1392,   573,  2325,  2309,  2300,  2300,  2300,  2300,  2305,  2300,
    2291,  2454,  2100,  2407,  2294,  1828,  2110,  1166,   773,  1438,
     775,  1614,   777,   778,    72,  1516,  2050,   782,  2048,   784,
     785,  1531,   585,  1450,   917,  2175,  2097,  1210,  1648,  1195,
    1964,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   814,
      -1,    -1,    -1,    -1,   819,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   831,   832,    -1,    -1,
       3,    -1,    -1,    -1,    -1,   840,    -1,    -1,    -1,    -1,
      -1,   846,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     855,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
      -1,   946,   947,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   990,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1004,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1028,    -1,    -1,    -1,    -1,    -1,  1034,
      -1,    -1,    -1,    -1,    -1,    -1,  1041,  1042,    -1,    -1,
      -1,    -1,  1047,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1074,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1094,
      -1,    -1,    -1,  1098,    -1,    -1,    -1,    -1,  1103,   272,
    1105,  1106,    -1,    -1,  1109,    -1,    -1,    -1,    -1,    -1,
      -1,  1116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,    -1,    -1,
      -1,    -1,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   371,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1262,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1275,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1335,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,  1357,    -1,  1359,    -1,    -1,    -1,    -1,    -1,
      -1,  1366,    -1,    -1,    -1,    -1,  1371,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1493,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1539,    -1,    -1,    -1,  1543,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1568,    -1,    -1,    -1,  1572,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1590,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1657,   305,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,    -1,
      -1,    -1,  1677,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,   371,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1737,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1866,  1867,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1902,  1903,    -1,
      -1,    -1,    -1,  1908,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    93,    94,    95,    -1,  1982,  1983,    -1,
      -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1996,  1997,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2031,  2032,  2033,   319,
      -1,    -1,    -1,    -1,    -1,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2072,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   371,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,
      -1,    -1,    -1,    -1,    -1,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2234,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   371,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2291,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,     3,
      -1,    -1,    -1,    -1,  2359,    92,    93,    94,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2374,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    93,    94,    95,   272,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   319,    -1,    -1,    -1,    -1,    -1,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   371,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   272,    -1,    -1,    -1,    -1,    -1,   371,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,
      -1,    -1,    -1,    -1,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     371,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,     3,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,     3,    -1,    -1,    -1,
      -1,    -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   272,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   371,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   371,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   371,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,     3,    -1,    -1,
      -1,    -1,    -1,    92,    93,    94,    95,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
       3,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   371,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   272,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   371,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   371,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,
      95,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    13,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   138,    -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,
      -1,    -1,    -1,   150,   151,    -1,    -1,   154,    -1,    -1,
      -1,    -1,    -1,    -1,   161,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   169,    -1,    -1,    -1,   173,   272,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,   186,
     187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,   196,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   224,    -1,    -1,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   241,    -1,    -1,    -1,   245,    -1,
      -1,    -1,   249,   250,    -1,   252,   253,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,    -1,   266,
      -1,    -1,    -1,    -1,    -1,   272,   371,   274,   275,    -1,
      -1,   278,   279,    -1,    -1,   282,   283,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   292,   293,   294,   295,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   319,    -1,    -1,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   366,
      -1,   368,    -1,   370,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,
      -1,   121,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,
      -1,   141,    -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     180,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   188,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   211,   212,   213,   214,    -1,    -1,    -1,    -1,   219,
     220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,   268,   269,
     270,    -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,
      -1,    -1,   312,   313,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      13,    -1,    15,    -1,    17,    18,    -1,    -1,    -1,    -1,
     370,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,   112,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   127,   128,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   138,    -1,    -1,    -1,    -1,
      -1,    -1,   145,    -1,    -1,    -1,    -1,   150,   151,    -1,
      -1,   154,    -1,    -1,    -1,    -1,    -1,    -1,   161,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,
     173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,    -1,    -1,   186,   187,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   195,   196,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   241,    -1,
      -1,    -1,   245,    -1,    -1,    -1,   249,    -1,    -1,   252,
     253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   262,
      -1,    -1,    -1,   266,    -1,    -1,    -1,    -1,    -1,   272,
      -1,   274,   275,    -1,    -1,   278,   279,    -1,    -1,   282,
     283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   292,
     293,   294,   295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,    -1,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    -1,    -1,    -1,    17,
      18,    -1,    -1,   366,    -1,   368,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,   110,   111,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   241,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   250,    -1,    -1,   253,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   266,    -1,
      -1,    -1,    -1,    -1,   272,    -1,   274,   275,    -1,   277,
     278,   279,    -1,    -1,   282,   283,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   292,   293,   294,   295,    -1,    -1,
      -1,    -1,    -1,    -1,   302,    -1,    -1,   305,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   319,    -1,    -1,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      13,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
     368,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,    -1,    -1,   110,   111,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   241,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   250,    -1,    -1,
     253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   266,    -1,    -1,    -1,    -1,    -1,   272,
      -1,   274,   275,    -1,   277,   278,   279,    -1,    -1,   282,
     283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   292,
     293,   294,   295,    -1,    -1,    -1,    -1,    -1,    -1,   302,
      -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,    -1,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,   368,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   150,   151,    -1,    -1,   154,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   241,    -1,    -1,    -1,   245,    -1,    -1,
      -1,   249,    -1,    -1,   252,   253,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   262,    -1,    -1,    -1,   266,    -1,
      -1,    -1,    -1,    -1,   272,    -1,   274,   275,    -1,    -1,
     278,   279,    -1,    -1,   282,   283,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   292,   293,   294,   295,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   319,    -1,    -1,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      13,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
     368,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,   111,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   241,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   250,    -1,    -1,
     253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   266,    -1,    -1,    -1,    -1,    -1,   272,
      -1,   274,   275,    -1,   277,   278,   279,    -1,    -1,   282,
     283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   292,
     293,   294,   295,    -1,    -1,    -1,    -1,    -1,    -1,   302,
      -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,    -1,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,   368,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,   111,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   241,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   250,    -1,    -1,   253,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   266,    -1,
      -1,    -1,    -1,    -1,   272,    -1,   274,   275,    -1,   277,
     278,   279,    -1,    -1,   282,   283,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   292,   293,   294,   295,    -1,    -1,
      -1,    -1,    -1,    -1,   302,    -1,    -1,   305,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   319,    -1,    -1,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      13,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
     368,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,    -1,    -1,   110,   111,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   241,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   250,    -1,    -1,
     253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   266,    -1,    -1,    -1,    -1,    -1,   272,
      -1,   274,   275,    -1,   277,   278,   279,    -1,    -1,   282,
     283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   292,
     293,   294,   295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,    -1,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,   368,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,   110,   111,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   241,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   250,    -1,    -1,   253,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   266,    -1,
      -1,    -1,    -1,    -1,   272,    -1,   274,   275,    -1,   277,
     278,   279,    -1,    -1,   282,   283,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   292,   293,   294,   295,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   319,    -1,    -1,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      13,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
     368,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,   111,   112,
      -1,    -1,   115,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   189,    -1,    -1,    -1,
      -1,    -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   241,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   250,    -1,    -1,
     253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   266,    -1,    -1,    -1,    -1,    -1,   272,
      -1,   274,   275,    -1,   277,   278,   279,    -1,    -1,   282,
     283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   292,
     293,   294,   295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,    -1,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    -1,    -1,    -1,    17,
      18,    -1,    20,    -1,    -1,   368,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,   111,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   184,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   241,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   250,    -1,    -1,   253,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   266,    -1,
      -1,    -1,    -1,    -1,   272,    -1,   274,   275,    -1,   277,
     278,   279,    -1,    -1,   282,   283,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   292,   293,   294,   295,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   319,    -1,    -1,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      13,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
     368,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,   111,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   241,    -1,
      -1,    -1,    -1,    -1,   247,    -1,    -1,   250,    -1,    -1,
     253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   266,    -1,    -1,    -1,    -1,    -1,   272,
      -1,   274,   275,    -1,   277,   278,   279,   280,    -1,   282,
     283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   292,
     293,   294,   295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,    -1,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,   368,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,   111,   112,    -1,    -1,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   241,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   250,    -1,    -1,   253,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   266,    -1,
      -1,    -1,    -1,    -1,   272,    -1,   274,   275,    -1,   277,
     278,   279,    -1,    -1,   282,   283,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   292,   293,   294,   295,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   319,    -1,    -1,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      13,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
     368,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,    -1,    -1,   110,   111,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   241,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   250,    -1,    -1,
     253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   266,    -1,    -1,    -1,    -1,    -1,   272,
      -1,   274,   275,    -1,   277,   278,   279,    -1,    -1,   282,
     283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   292,
     293,   294,   295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,    -1,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    -1,   368,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,    -1,
     128,    -1,    -1,   131,    -1,    -1,    -1,    -1,    -1,    -1,
     138,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   152,    -1,   154,    -1,    -1,    -1,
      -1,    -1,    -1,   161,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,   186,   187,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   224,   225,   226,   227,
      -1,   229,   230,   231,    -1,   233,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   263,    -1,    -1,   266,    -1,
      -1,    -1,    -1,    -1,   272,    -1,   274,   275,    -1,    -1,
      -1,    -1,    -1,    -1,   282,   283,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   291,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   302,    -1,    -1,   305,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,    -1,
      -1,   319,    -1,    -1,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      13,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
     368,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,   111,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   241,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   250,    -1,    -1,
     253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   266,    -1,    -1,    -1,    -1,    -1,   272,
      -1,   274,   275,    -1,   277,   278,   279,    -1,    -1,   282,
     283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   292,
     293,   294,   295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,    -1,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    -1,    -1,    -1,    17,
      18,    -1,    20,    -1,    -1,   368,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,   111,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   241,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   250,    -1,    -1,   253,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   266,    -1,
      -1,    -1,    -1,    -1,   272,    -1,   274,   275,    -1,   277,
     278,   279,    -1,    -1,   282,   283,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   292,   293,   294,   295,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   319,    -1,    -1,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      13,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
     368,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,   111,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   241,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   250,    -1,    -1,
     253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   266,    -1,    -1,    -1,    -1,    -1,   272,
      -1,   274,   275,    -1,   277,   278,   279,    -1,    -1,   282,
     283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   292,
     293,   294,   295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,    -1,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,   367,   368,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,   111,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   163,    -1,    -1,    -1,    -1,
      -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   241,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   250,    -1,    -1,   253,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   266,    -1,
      -1,    -1,    -1,    -1,   272,    -1,   274,   275,    -1,   277,
     278,   279,    -1,    -1,   282,   283,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   292,   293,   294,   295,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   319,    -1,    -1,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      13,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
     368,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,   111,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   241,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   250,    -1,    -1,
     253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   266,    -1,    -1,    -1,    -1,    -1,   272,
      -1,   274,   275,    -1,   277,   278,   279,    -1,    -1,   282,
     283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   292,
     293,   294,   295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,    -1,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,   368,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   241,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   266,    -1,
      -1,    -1,    -1,    -1,   272,    -1,   274,   275,    -1,    -1,
     278,   279,    -1,    -1,   282,   283,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   292,   293,   294,   295,    -1,    -1,
      -1,    -1,    -1,    -1,   302,    -1,    -1,   305,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   319,    -1,    -1,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      13,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
     368,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   241,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   266,    -1,    -1,    -1,    -1,    -1,   272,
      -1,   274,   275,    -1,    -1,   278,   279,    -1,    -1,   282,
     283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   292,
     293,   294,   295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,    -1,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,   368,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   241,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   266,    -1,
      -1,    -1,    -1,    -1,   272,    -1,   274,   275,    -1,    -1,
     278,   279,    -1,    -1,   282,   283,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   292,   293,   294,   295,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   319,    -1,    -1,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      13,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,
     368,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   241,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   266,    -1,    -1,    -1,    -1,    -1,   272,
      -1,   274,   275,    -1,    -1,   278,   279,    -1,    -1,   282,
     283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   292,
     293,   294,   295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,    -1,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,   368,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   241,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   266,    -1,
      -1,    -1,    -1,    -1,   272,    -1,   274,   275,    -1,    -1,
     278,   279,    -1,    -1,   282,   283,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   292,   293,   294,   295,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   319,    -1,    -1,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,
     368,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    -1,     3,    -1,    -1,    -1,    92,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,   154,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   266,    -1,    -1,    -1,    -1,   186,   272,
      -1,   274,   275,    -1,    -1,    -1,    -1,    -1,    -1,   282,
     283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   302,
      -1,    -1,   305,    -1,    -1,    -1,   224,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,    -1,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,   276,    -1,
      -1,    -1,    -1,    -1,    -1,   368,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   302,    -1,    -1,   305,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     368,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,     3,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   272,
      -1,    -1,    -1,   276,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   302,
      -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   266,    -1,    -1,    -1,
      -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   282,   283,    -1,   368,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   368,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,     3,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,
      95,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    -1,    -1,    -1,     3,    -1,    -1,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     272,    -1,    -1,    -1,   276,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   368,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   368,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   368,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,
     121,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,    -1,
     141,    -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   188,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     211,   212,   213,   214,    -1,    -1,    -1,    -1,   219,   220,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   267,   268,   269,   270,
      -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,
      -1,   312,   313,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    -1,    -1,    -1,    -1,   121,    -1,    -1,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
      -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,
     146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   162,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   180,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   188,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   211,   212,   213,   214,    -1,
      -1,    -1,    -1,   219,   220,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   267,   268,   269,   270,    -1,   272,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,
      -1,    -1,    -1,    -1,    -1,    -1,   312,   313,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   154,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    93,    94,    95,    -1,    -1,    -1,
      -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   253,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   266,    -1,    -1,    -1,
      -1,    -1,   272,    -1,   274,   275,    -1,    -1,    -1,    -1,
      -1,    -1,   282,   283,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,   319,
      -1,    -1,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    -1,    -1,   272,    -1,    -1,    -1,    92,    93,    94,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     115,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   138,    -1,    -1,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
      -1,    -1,    -1,    -1,    -1,    -1,   161,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   179,    -1,   181,    -1,    -1,    -1,
      -1,   186,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
     195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   208,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,   271,   272,    -1,    -1,
      -1,    -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   115,    -1,    -1,    -1,    -1,
     305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,    -1,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,
      -1,   181,    -1,    -1,    -1,    -1,   186,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,   195,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,   208,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,   271,   272,    -1,    -1,    -1,    -1,    92,    93,    94,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   196,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    -1,    -1,    -1,    -1,
      -1,   266,    92,    93,    94,    95,    -1,   272,    -1,    -1,
      -1,    -1,    -1,   278,    -1,    -1,    -1,   282,   283,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   319,    -1,    -1,    -1,    -1,    -1,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,
      -1,   211,   212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,   272,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,    -1,
      -1,   301,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   313,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   266,
      -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   282,   283,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,
      -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   264,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,     3,    -1,    -1,    -1,
      -1,    -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
      -1,   101,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,
      -1,    -1,   129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,   272,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    -1,
      -1,   208,    -1,    -1,    -1,    92,    93,    94,    95,    -1,
      -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    94,    95,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,     3,    -1,    -1,
      -1,    -1,    -1,    92,    93,    94,    95,    -1,    97,    -1,
      -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,
     272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   305,   130,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,    -1,
      -1,    -1,    -1,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
      -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,     3,    -1,    -1,    -1,    -1,
      -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,     3,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   317,    -1,   153,    -1,
      -1,    -1,    -1,    -1,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   266,    -1,
      -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,     3,    -1,    -1,    -1,
      -1,    -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    -1,    -1,    -1,    -1,   266,    -1,    92,    93,
      94,    95,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,   319,    -1,    -1,    -1,    -1,
      -1,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,     3,    -1,    -1,
      -1,    -1,    -1,    92,    93,    94,    95,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,
     179,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,   272,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,   176,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    -1,    -1,    -1,    -1,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    95,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,     3,    -1,    -1,    -1,
      -1,    -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
      -1,   101,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,   272,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,     3,    -1,    -1,    -1,    -1,    -1,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,   101,
      -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,     3,    -1,    -1,
      -1,    -1,    -1,    92,    93,    94,    95,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,    14,    17,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    92,    93,    94,    95,   117,
     126,   128,   131,   138,   142,   152,   154,   161,   183,   186,
     187,   195,   224,   225,   226,   227,   229,   230,   231,   233,
     253,   263,   266,   272,   274,   275,   282,   283,   291,   302,
     305,   316,   319,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     368,   375,   376,   377,   378,   379,   380,   383,   407,   408,
     410,   414,   415,   419,   420,   421,   424,   429,   431,   438,
     439,   440,   441,   442,   443,   445,   456,   457,   458,   461,
     463,   465,   466,   469,   470,   477,   478,   480,   481,   482,
     486,   498,   510,   513,   518,   520,   521,   522,   523,   527,
     528,   578,   582,   618,   619,   622,   625,   665,   667,   677,
     685,   686,   706,   707,   709,   712,   714,   745,   746,   750,
     755,   759,   760,   761,   762,   771,   775,    26,   380,   600,
     368,   253,   178,   192,   242,   626,   202,    24,    33,    34,
      41,    60,    69,    88,    91,   106,   140,   158,   178,   192,
     194,   196,   198,   206,   207,   209,   210,   238,   241,   273,
     301,   315,   317,   327,   328,   404,   405,   406,   626,   731,
     149,   196,    24,    60,    69,   157,   192,   196,   198,   238,
     241,   273,   301,   317,   327,   328,   626,   115,   138,   161,
     179,   181,   186,   195,   208,   271,   272,   380,   433,   434,
     435,   436,   437,   615,   368,   163,   215,   216,   484,   202,
     115,   140,   222,   505,   507,   509,   196,   264,   331,   380,
     317,   600,   604,   253,   266,   380,   518,   582,     4,   616,
       4,   616,     4,   228,    24,   157,   192,   196,   228,   368,
     578,   115,   208,   271,   272,   433,   436,   172,   265,    17,
     125,   196,   266,   278,   282,   283,   319,   380,   578,   380,
       4,   317,   368,   368,   368,   224,   520,     0,   367,   131,
     138,   142,   187,   230,   379,   414,   371,    98,   100,   297,
     517,   368,   102,   371,   251,   368,    16,     4,     5,     6,
       7,     8,     9,    11,    12,    13,    18,    93,   112,   169,
     196,   241,   278,   279,   292,   293,   294,   295,   368,   380,
     565,   566,   568,   569,   570,   572,   575,   576,   582,   586,
     588,   589,   594,   595,   596,   597,   598,   605,   614,   746,
     748,   749,   751,   752,   754,   380,   601,   601,   380,   711,
      26,   176,   238,   301,   471,   615,   169,   198,   380,   603,
     615,   603,     3,   380,   603,   603,   185,   198,   317,   266,
     600,   600,   600,   404,   157,   603,    26,   604,   153,   615,
     380,   710,   238,   615,   380,   600,   615,   600,   600,   600,
     600,   185,   198,   266,   600,   600,   600,   600,   177,   368,
     428,   428,   428,   172,   172,   172,   172,   370,   193,   370,
     380,   605,   604,   506,   298,   110,   111,   122,   250,   277,
     368,   532,   567,   568,   569,   574,   583,   585,   605,   660,
     662,   708,   746,   748,   751,   153,   380,   332,   107,   172,
     265,   600,   101,   192,   380,   493,   187,   371,     4,   616,
     380,   709,     3,   600,   153,   616,   567,   368,   177,   172,
     172,   172,   172,   149,   368,   368,   368,   368,   368,   368,
     368,   368,   368,   251,   368,   266,     3,   567,   567,   369,
     192,   319,   371,   380,   753,   115,   296,   526,   115,   526,
      99,   380,   567,   574,   579,   580,   581,   584,   380,   753,
     371,   380,   567,   577,   584,   370,   368,   171,   578,   368,
     247,   280,   567,   590,   593,   368,   368,   368,   709,   224,
     368,   518,   567,   568,   605,   371,   372,   661,   371,   661,
     160,   614,   368,   371,   176,   444,   368,   628,   371,   208,
     716,   600,   165,   172,   157,   603,   371,   101,   368,   425,
     137,   770,   235,   236,   237,   680,   628,   250,     4,   603,
     600,    96,   149,   101,   149,   380,   612,   628,   753,   200,
     516,   549,   615,   124,   371,   124,   182,   417,   172,   409,
     600,   124,     4,   600,    96,   201,   462,   193,   380,   402,
     611,   710,   578,     4,   604,   435,   436,   437,   371,   369,
     157,   485,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   503,   504,     7,   368,   567,
     567,   368,   530,   531,   380,     4,   568,   605,   149,   533,
     534,   535,   536,     4,   101,   109,   110,   111,   112,   113,
     380,   371,   370,   661,   108,   368,   615,   380,   333,   567,
     101,   464,   380,   174,   493,   511,   512,   611,   371,   380,
     370,   617,   371,   142,   231,   756,   172,   142,   231,   232,
     234,   416,   615,   369,   581,   710,   578,     4,   604,   436,
      16,   577,   577,   577,   567,   577,   577,     3,   567,   577,
     577,    96,   149,   369,   369,    97,   452,   600,   380,   753,
     371,   526,   123,   368,   522,   523,   524,   525,   526,   522,
     525,   115,   526,   320,   370,   370,   369,   370,   368,   380,
     371,   369,   370,   567,   115,   140,   567,    94,    95,   116,
     121,   125,   135,   141,   146,   162,   170,   180,   188,   211,
     212,   213,   214,   219,   220,   267,   268,   269,   270,   301,
     312,   313,   606,   607,   368,   607,   567,   106,   144,   368,
     553,   554,   555,   556,   557,   558,   560,   561,   562,   564,
     567,   247,   280,   591,   592,   251,   593,   584,   567,   567,
     368,   518,   224,   518,   369,   369,   370,   101,   101,   112,
     371,   380,   747,   748,   567,   372,   753,   614,   581,   371,
     380,   165,   101,   446,    62,   156,   243,   369,   629,   630,
     631,   254,   627,   371,   380,   709,   166,   310,   715,   628,
      87,   600,   172,   101,   371,   380,   518,   519,   524,   129,
     208,   384,   385,   386,   400,   401,   611,   368,   423,   427,
     153,   768,   769,   171,   138,   161,   195,   681,   627,   623,
     624,   626,   101,   101,   600,   600,   567,   567,   172,   627,
     628,   133,   553,   174,   492,   615,   371,   380,   600,   600,
     138,   437,   371,   369,   370,   193,   193,   193,   193,   201,
     430,   371,   380,     3,   492,     3,   368,   368,     7,   368,
     502,   502,     7,     7,   503,   201,   370,   508,   567,   585,
     530,    93,   583,   586,   587,   251,   101,   101,   276,   368,
     537,   541,   546,   547,   600,   604,   200,   516,     4,    20,
     380,   573,   567,   567,   567,   567,   567,   753,   567,   574,
     108,   567,   581,   615,   334,   337,   338,   666,   315,   493,
     368,   200,   370,   516,   107,   380,   371,     4,   371,   380,
      34,    72,   731,   735,    36,    72,   735,   736,   600,    91,
     411,   411,   603,   411,   129,   400,   418,   615,   368,   369,
     149,   149,   149,   149,   370,   369,   369,   369,   370,   369,
     369,   149,   156,   369,   369,   600,   567,   123,   142,   231,
     234,   371,   380,   753,   522,   525,   368,   224,   522,   525,
     526,   522,   525,   567,   380,   567,   574,   567,   579,   580,
     581,   380,   251,   567,   370,   567,   567,   369,   368,   368,
     368,   175,   368,   368,   368,   368,   368,   211,   212,   313,
     368,   368,   368,   581,   370,   553,   368,   566,   368,   553,
     567,   104,   105,   246,   106,   107,   120,   156,   164,   168,
     567,   567,   251,   592,   369,   101,   370,   581,   369,   518,
     584,   709,   709,   380,   371,   373,   567,   368,   369,   380,
     371,   368,   603,   149,   369,   370,   605,   607,   609,   709,
      73,    74,    75,    76,    78,    79,    80,    83,   636,   637,
     380,   371,    38,    52,    53,    54,    55,    56,    57,    58,
      61,    71,   742,   743,    59,   713,   254,   744,   368,   468,
     600,   600,   380,   371,   201,   203,   381,   380,   600,   369,
     370,   126,   147,   153,   176,   194,   125,   211,   214,   606,
     610,   709,   402,   101,   368,   370,   427,   172,   149,   367,
     251,   623,   380,   372,   705,     4,     4,   459,   201,   757,
     757,   600,   637,   627,   171,   368,   380,   371,   468,   380,
     611,   436,   436,   436,   436,    68,   380,   371,   428,   567,
     567,     7,   501,   300,     7,   111,   369,   370,   200,   369,
     251,   709,   709,   541,   547,   368,   520,   547,   370,   282,
     283,   284,   286,   287,   288,   543,   545,   368,   153,   550,
      23,   607,   368,   567,   369,   335,   336,   334,     3,    41,
      97,   100,   116,   157,   159,   163,   201,   204,   217,   218,
     221,   223,   255,   490,   491,   133,   512,   492,   567,   380,
     380,   371,    26,   380,    26,   417,   735,   380,   723,    35,
     737,   307,   413,   611,   386,   412,   386,   380,   581,   436,
     436,   436,   436,   567,   251,   251,   251,     3,   251,   251,
     567,   567,   251,   251,   369,   453,   454,   567,   573,   753,
     371,   402,   518,   522,   525,   320,   369,   567,   369,   369,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,   369,   567,   369,   553,   553,   567,   120,   156,   168,
     115,   116,   189,   563,   567,   567,   368,   566,   106,   169,
     567,   246,   607,   567,   369,   369,   369,   369,   371,   112,
     371,   380,   747,   373,   581,   380,   402,   598,   630,   609,
     204,   608,   368,     4,   446,   380,   310,     4,   101,   717,
     711,    96,   611,   368,   368,   380,    44,    44,    91,   140,
     382,   385,   368,   165,   406,   165,   368,   368,   368,   116,
     301,   709,   394,   369,   224,   422,   519,     3,   764,   765,
     768,   600,   380,   602,   367,   628,     3,   703,   704,   186,
     250,   529,   696,   200,   460,   325,   201,   758,   758,   368,
     166,   250,   642,   637,   380,   613,   491,   380,   371,   201,
     432,   432,   432,   174,   371,   380,   197,   487,   529,   369,
     369,   369,   370,   508,     7,   508,   567,   553,   369,   369,
     251,   520,   369,   369,   541,   285,   544,   544,   544,   543,
     290,   402,   540,   123,   155,   551,    19,    21,    22,   581,
       7,   209,    97,    60,   176,   380,   567,     4,   144,   106,
     369,   370,   171,   380,   753,   417,   753,   609,   101,    40,
      41,    42,    43,    49,    51,    66,   106,   166,   254,   310,
     739,   740,   741,   209,   774,   370,   370,   417,   369,   370,
     369,   369,   369,   370,   118,   139,   455,   455,   753,   369,
     369,   567,   369,   369,   369,   369,   370,   369,   369,   370,
     369,   369,   369,   369,   369,   369,   369,   567,   368,   566,
     567,   566,   105,   584,   169,   143,   250,   559,   567,   311,
     571,   369,   371,   371,   112,   380,   380,   371,   369,   369,
     196,   447,   108,   137,   637,   372,   636,    81,    82,   633,
     149,    59,   166,   368,   718,    25,    35,    70,    78,    87,
     106,   293,   330,   726,   727,   728,   709,   369,   611,   540,
      91,   553,   368,   368,   368,   402,     7,     7,    41,   106,
     126,   137,   169,   176,   181,   194,   201,   281,   306,   311,
     318,   393,   396,   398,   518,   201,   426,   369,   370,    97,
     678,   371,   370,   627,   107,   373,   703,   509,   600,   694,
     697,     3,   693,     4,   107,   326,   403,   611,   742,   643,
      96,   492,   369,   380,   152,   380,   371,   368,     7,   508,
     369,   369,   371,   371,   369,   101,   380,   368,   542,   566,
     604,   369,   132,   184,   453,   553,   452,    22,   369,   165,
     165,   218,   490,   613,   368,   732,   732,   181,   724,    31,
      32,    38,    38,    38,    38,   172,    37,    40,   743,   169,
      24,    59,    67,   741,     3,   368,   773,   611,   386,   567,
     251,   251,   251,   454,   452,     7,     7,   105,   584,   559,
     567,   369,   587,   143,   600,   369,   753,   753,   371,   371,
     112,   380,   567,   106,   448,     4,     5,     6,     7,     9,
      18,   110,   111,   169,   599,   599,     7,   108,    62,   156,
     243,    62,   156,   243,   598,     4,   743,   719,   723,   101,
       4,   149,   164,   289,    25,   368,   729,   730,   736,   728,
     642,   369,   369,   369,   402,   403,   403,   369,   369,   369,
     306,   169,   368,   599,   165,   600,   185,   368,    60,   116,
     600,   123,   126,   155,   764,     7,   239,   682,   371,   380,
     602,   637,     3,     4,   702,   532,   380,   251,   370,   179,
     701,   329,   330,   369,   370,   455,   310,   136,   199,   451,
     642,   644,   645,   646,   651,   652,   656,   709,   371,   174,
     380,   488,   489,   567,   508,   753,   753,   380,   546,   172,
     289,   548,   101,   380,   368,   539,   368,   368,    96,   552,
     144,   492,   369,   631,   632,   733,   734,    89,   738,   254,
      86,   137,   725,    35,    44,    44,   169,    38,    39,   172,
       4,     4,    59,     3,   772,   773,   369,   369,   369,   567,
     369,   587,   368,   368,   753,   380,   753,   371,   264,   186,
      63,   449,     7,     9,     7,     9,   637,   637,   373,     4,
     369,   370,    87,   368,    28,   609,    30,    87,   370,   201,
     472,   368,   369,   369,   369,   553,   427,   368,   399,    92,
     305,   395,   397,   611,   174,   368,   766,   767,   240,   295,
     683,   684,   642,   679,   380,   371,   370,   642,   535,   536,
     101,   687,   694,     4,   307,   611,    59,   130,   261,   380,
     653,   657,   106,   258,   259,   260,   654,   251,   645,    15,
      84,    96,   107,   113,   127,   138,   145,   150,   151,   173,
     186,   187,   195,   224,   245,   249,   252,   262,   366,   380,
     479,   480,   481,   482,   483,   486,   497,   498,   500,   510,
     513,   582,   605,   640,   641,   647,   659,   660,   663,   665,
     667,   668,   669,   670,   676,   746,   749,   367,   642,   380,
     369,   370,   368,   368,   369,   553,   368,   380,   386,   538,
     380,   453,   453,   195,   301,   492,   605,   369,   370,   603,
     609,    27,   106,   599,   571,   101,    50,   169,     4,   121,
     162,   211,   763,   369,   370,   251,   251,   581,   581,   380,
     753,   567,   101,   633,   723,   402,    29,   101,   101,   736,
     165,   106,   476,   538,   393,   406,   369,   172,   387,   388,
     389,     4,   201,   123,   369,   370,     7,   370,   101,   101,
     370,   380,   602,   516,   380,   368,   690,   380,   774,   455,
       4,    64,    88,    90,   134,   450,   370,   609,   244,   148,
       4,    65,   137,   150,   151,   368,   368,   519,   567,   567,
     613,   613,   380,   193,   613,   509,   518,   368,   368,   567,
     367,   567,   368,   103,   367,   367,   367,   367,   367,   367,
     367,   367,   489,   581,   581,   402,   369,   370,   369,   369,
       3,   609,   734,   738,   172,   389,   390,    27,   310,   720,
      32,    50,   368,   368,   368,     3,   369,   369,   567,   370,
     369,    87,    30,   611,   161,   210,   473,   369,   138,   195,
      45,    47,   392,   388,   370,   599,     7,   395,   370,   766,
     380,   380,   684,   370,   620,   550,   567,   605,   688,   689,
     172,   692,     4,   773,   726,    96,   134,   380,    96,     4,
     380,   193,   609,   136,   224,   652,   660,   665,   671,   672,
     746,   255,    15,    15,     3,   163,   380,   368,   496,   532,
     367,   553,   553,   367,     7,     9,   638,   639,   645,   369,
     369,   369,   386,     3,   310,   722,    24,    59,    77,    78,
     721,     7,     7,     7,   111,   763,     3,   634,   635,   369,
     369,   201,   289,   467,   124,   187,   391,   391,    46,    48,
      46,    48,     4,     7,   602,    97,   621,   551,   101,   156,
     369,   370,   368,   176,   691,   303,   698,   519,    96,   654,
     658,   380,   380,   380,   367,   370,   642,   648,   649,   650,
     163,   567,   514,   515,   576,   605,   751,   256,   257,   494,
     495,   163,   369,   369,   369,   370,    24,     4,     4,     4,
       4,   369,   369,   370,     7,   108,   369,   370,   201,   201,
     368,   242,   166,   474,   137,   169,   369,   370,   369,   380,
     380,   688,   553,   165,   693,   304,   699,   519,   224,   262,
     370,   641,   642,   655,   660,   663,   665,   667,   668,   669,
     670,   676,   746,   749,   156,   553,   675,   671,   641,   659,
     514,   163,   370,     7,   369,   370,   514,   648,   648,   638,
       4,   310,    78,    77,     7,   370,   599,   635,   380,   380,
     402,     4,   167,   475,     4,   369,   368,   250,   695,     7,
     185,   308,   700,   567,   654,   567,   367,   367,   514,   515,
     494,   535,   247,   664,    24,     4,     4,   369,     7,   369,
       4,   369,   402,   697,     4,   310,     4,   309,   310,   369,
     660,   665,   673,   674,   746,   201,   499,   648,     4,   369,
     369,   251,   255,   369,   370,   496,   648,   648,   673
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
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



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
#line 651 "./sql3.y"
    { }
    break;

  case 3:
#line 652 "./sql3.y"
    { }
    break;

  case 4:
#line 655 "./sql3.y"
    { parse_tree = (yyvsp[(1) - (1)].tree); }
    break;

  case 5:
#line 662 "./sql3.y"
    { (yyval.tree) = t_listst (2, SCHEMA_ELEMENT_LIST,
							t_list_to_array ((yyvsp[(1) - (1)].list))); }
    break;

  case 6:
#line 664 "./sql3.y"
    { (yyval.tree) = t_listst (2, SCHEMA_ELEMENT_LIST, t_list (1, (yyvsp[(1) - (1)].tree))); }
    break;

  case 7:
#line 665 "./sql3.y"
    { (yyval.tree) = t_listst (2, SCHEMA_ELEMENT_LIST, t_list (1, (yyvsp[(1) - (1)].tree))); }
    break;

  case 8:
#line 666 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 9:
#line 667 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 10:
#line 668 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 11:
#line 669 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 12:
#line 670 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 13:
#line 671 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 14:
#line 672 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 15:
#line 688 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 16:
#line 689 "./sql3.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); }
    break;

  case 17:
#line 690 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (2)].list), t_CONS ((yyvsp[(2) - (2)].tree), NULL)); }
    break;

  case 18:
#line 691 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].list)); }
    break;

  case 37:
#line 718 "./sql3.y"
    { (yyval.box) = (yyvsp[(1) - (1)].box); }
    break;

  case 38:
#line 719 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 39:
#line 720 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 40:
#line 721 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 41:
#line 722 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 42:
#line 723 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 43:
#line 724 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 44:
#line 725 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 45:
#line 726 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 46:
#line 727 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 47:
#line 728 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 48:
#line 729 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 49:
#line 730 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 50:
#line 731 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 51:
#line 732 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 52:
#line 733 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 53:
#line 734 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 54:
#line 735 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 55:
#line 736 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 56:
#line 737 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 57:
#line 738 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 58:
#line 739 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 59:
#line 740 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 60:
#line 741 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 61:
#line 742 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 62:
#line 743 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 63:
#line 744 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 64:
#line 745 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 65:
#line 746 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 66:
#line 747 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 67:
#line 748 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 68:
#line 749 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 69:
#line 750 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 70:
#line 751 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 71:
#line 752 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 72:
#line 753 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 73:
#line 754 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 74:
#line 755 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 75:
#line 756 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 76:
#line 757 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 77:
#line 758 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 78:
#line 759 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 79:
#line 760 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 80:
#line 761 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 81:
#line 762 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 82:
#line 763 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 83:
#line 764 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 84:
#line 765 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 85:
#line 766 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 86:
#line 767 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 87:
#line 768 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 88:
#line 769 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 89:
#line 770 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 90:
#line 771 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 91:
#line 772 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 92:
#line 773 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 93:
#line 774 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 94:
#line 775 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 95:
#line 776 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 96:
#line 777 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 97:
#line 778 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 98:
#line 779 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 99:
#line 780 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 100:
#line 781 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 101:
#line 782 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 102:
#line 783 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 103:
#line 784 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 104:
#line 785 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 105:
#line 786 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 106:
#line 787 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ((yyvsp[(1) - (1)].box)); }
    break;

  case 107:
#line 788 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ((yyvsp[(1) - (1)].box)); }
    break;

  case 108:
#line 789 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ((yyvsp[(1) - (1)].box)); }
    break;

  case 109:
#line 790 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ((yyvsp[(1) - (1)].box)); }
    break;

  case 110:
#line 791 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ((yyvsp[(1) - (1)].box)); }
    break;

  case 111:
#line 792 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ((yyvsp[(1) - (1)].box)); }
    break;

  case 112:
#line 793 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ((yyvsp[(1) - (1)].box)); }
    break;

  case 113:
#line 794 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ((yyvsp[(1) - (1)].box)); }
    break;

  case 114:
#line 795 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ((yyvsp[(1) - (1)].box)); }
    break;

  case 115:
#line 796 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ((yyvsp[(1) - (1)].box)); }
    break;

  case 116:
#line 797 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ("__tag"); }
    break;

  case 117:
#line 798 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 118:
#line 799 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 119:
#line 803 "./sql3.y"
    { (yyval.intval) = 0; }
    break;

  case 120:
#line 804 "./sql3.y"
    { (yyval.intval) = 1; }
    break;

  case 121:
#line 805 "./sql3.y"
    { (yyval.intval) = 0; }
    break;

  case 122:
#line 809 "./sql3.y"
    { (yyval.intval) = T_ROW; }
    break;

  case 123:
#line 810 "./sql3.y"
    { (yyval.intval) = T_COLUMN; }
    break;

  case 124:
#line 811 "./sql3.y"
    { (yyval.intval) = T_DISTINCT_COLUMNS; }
    break;

  case 125:
#line 817 "./sql3.y"
    { (yyval.tree) = t_listst (4, TABLE_DEF, (yyvsp[(3) - (7)].strval),
				 t_list_to_array (sqlc_ensure_primary_key (sqlp_process_col_options ((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].list)))), (yyvsp[(7) - (7)].intval)); }
    break;

  case 126:
#line 820 "./sql3.y"
    { (yyval.tree) = t_listst (4, CREATE_TABLE_AS, (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].tree), t_box_num ((ptrlong) (yyvsp[(6) - (6)].intval))); }
    break;

  case 128:
#line 826 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].list)); }
    break;

  case 130:
#line 831 "./sql3.y"
    { (yyval.list) = t_CONS (NULL, t_CONS ((yyvsp[(1) - (1)].tree), NULL)); }
    break;

  case 131:
#line 836 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (3)].strval), t_CONS (t_list (2, (yyvsp[(2) - (3)].tree), t_list_to_array ((yyvsp[(3) - (3)].list))), NULL)); }
    break;

  case 132:
#line 840 "./sql3.y"
    { (yyval.tree) = t_listst (2, 0, 0); }
    break;

  case 133:
#line 841 "./sql3.y"
    {
			  caddr_t *l = (caddr_t *)(yyvsp[(1) - (1)].tree);
			(yyval.tree) = (l[0] ? t_listst (2, 0, l[1]) : t_listst (2, l[1], 0));
		      }
    break;

  case 134:
#line 846 "./sql3.y"
    {
			  caddr_t *l  = (caddr_t *)(yyvsp[(1) - (2)].tree);
			  caddr_t *ll = (caddr_t *)(yyvsp[(2) - (2)].tree);
			if (l[0] == ll [0])
			  yyerror ("duplicated referential actions");
			(yyval.tree) = (l[0] ? t_listst (2, ll[1], l[1]) : t_listst (2, l[1], ll[1]));
		      }
    break;

  case 135:
#line 856 "./sql3.y"
    { (yyval.tree) = t_listst (2, 0, (ptrlong) (yyvsp[(3) - (3)].intval)); }
    break;

  case 136:
#line 857 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 137:
#line 861 "./sql3.y"
    { (yyval.tree) = t_listst (2, (ptrlong) 1, (ptrlong) (yyvsp[(3) - (3)].intval)); }
    break;

  case 138:
#line 865 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 139:
#line 866 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 140:
#line 870 "./sql3.y"
    { (yyval.intval) = 1; }
    break;

  case 141:
#line 871 "./sql3.y"
    { (yyval.intval) = 2; }
    break;

  case 142:
#line 872 "./sql3.y"
    { (yyval.intval) = 3; }
    break;

  case 143:
#line 876 "./sql3.y"
    { (yyval.intval) = 0; }
    break;

  case 144:
#line 877 "./sql3.y"
    { (yyval.intval) = 0; }
    break;

  case 145:
#line 878 "./sql3.y"
    { (yyval.intval) = 1; }
    break;

  case 146:
#line 879 "./sql3.y"
    { (yyval.intval) = 2; }
    break;

  case 147:
#line 880 "./sql3.y"
    { (yyval.intval) = 3; }
    break;

  case 148:
#line 885 "./sql3.y"
    {
		  caddr_t *l = (caddr_t *) (yyvsp[(4) - (5)].tree);
		  (yyval.tree) = t_listst (9, FOREIGN_KEY, NULL, (yyvsp[(2) - (5)].strval), (yyvsp[(3) - (5)].tree), NULL, l[0], l[1], NULL, (ptrlong) (yyvsp[(5) - (5)].intval));
		}
    break;

  case 149:
#line 892 "./sql3.y"
    { (yyval.list) = NULL; }
    break;

  case 150:
#line 893 "./sql3.y"
    { (yyval.list) = (yyvsp[(2) - (2)].tree) ? t_NCONC ((yyvsp[(1) - (2)].list), t_CONS ((yyvsp[(2) - (2)].tree), NULL)) : (yyvsp[(1) - (2)].list); }
    break;

  case 151:
#line 897 "./sql3.y"
    { (yyval.tree) = t_listst (2, CO_ID_START, (yyvsp[(3) - (3)].box)); }
    break;

  case 152:
#line 898 "./sql3.y"
    { (yyval.tree) = t_listst (2, CO_ID_INCREMENT_BY, (yyvsp[(3) - (3)].box)); }
    break;

  case 153:
#line 910 "./sql3.y"
    { (yyval.tree) = t_listst (2, CO_COMPRESS, (ptrlong)CC_NONE); }
    break;

  case 154:
#line 911 "./sql3.y"
    { (yyval.tree) = t_listst (2, CO_COMPRESS, (ptrlong)CC_OFFSET); }
    break;

  case 155:
#line 912 "./sql3.y"
    { (yyval.tree) = t_listst (2, CO_COMPRESS, (ptrlong)CC_PREFIX); }
    break;

  case 156:
#line 917 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 157:
#line 918 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 158:
#line 922 "./sql3.y"
    { (yyval.tree) = (ST *) COL_NOT_NULL; }
    break;

  case 159:
#line 923 "./sql3.y"
    { (yyval.tree) = (ST *) NULL; }
    break;

  case 160:
#line 924 "./sql3.y"
    { (yyval.tree) = (ST *) CO_IDENTITY; }
    break;

  case 161:
#line 925 "./sql3.y"
    { (yyval.tree) = t_listst (2, CO_IDENTITY, t_list_to_array ((yyvsp[(3) - (4)].list))); }
    break;

  case 162:
#line 926 "./sql3.y"
    { (yyval.tree) = t_listst (5, INDEX_DEF, NULL, NULL, NULL, (ST *) 0); }
    break;

  case 163:
#line 927 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 164:
#line 928 "./sql3.y"
    { (yyval.tree) = t_listst (2, COL_DEFAULT, (yyvsp[(2) - (2)].box)); }
    break;

  case 165:
#line 929 "./sql3.y"
    { (yyval.tree) = t_listst (2, COL_COLLATE, (yyvsp[(2) - (2)].strval)); }
    break;

  case 166:
#line 930 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 167:
#line 931 "./sql3.y"
    { (yyval.tree) = t_listst (2, COL_XML_ID, (yyvsp[(3) - (3)].strval)); }
    break;

  case 168:
#line 933 "./sql3.y"
    { (yyval.tree) = t_listst (3, CHECK_CONSTR, (yyvsp[(3) - (4)].tree), NULL); }
    break;

  case 169:
#line 935 "./sql3.y"
    {
		  ST * check;
		  BIN_OP (check, BOP_NULL,
		    t_listst (3, CALL_STMT,
		      t_sqlp_box_id_upcase ("DB.DBA.XML_COLUMN_SCHEMA_VALIDATE"), (yyvsp[(3) - (3)].tree) ),
		      NULL );
		  (yyval.tree) = t_listst (3, CHECK_XMLSCHEMA_CONSTR, check, NULL);
		}
    break;

  case 170:
#line 943 "./sql3.y"
    { (yyval.tree) = t_listst (5, UNIQUE_DEF, NULL, NULL, NULL,
					    (ST *) t_list (1, t_box_string ("unique"))); }
    break;

  case 171:
#line 948 "./sql3.y"
    { (yyval.tree) = t_listst (6, NULL, NULL, NULL, (yyvsp[(2) - (5)].box), (yyvsp[(4) - (5)].box), (caddr_t) t_NULLCONST); }
    break;

  case 172:
#line 949 "./sql3.y"
    { (yyval.tree) = t_listst (6, NULL, NULL, NULL, (yyvsp[(2) - (7)].box), (yyvsp[(4) - (7)].box), (yyvsp[(6) - (7)].box)); }
    break;

  case 173:
#line 955 "./sql3.y"
    { (yyval.tree) = t_listst (2, TABLE_UNDER, t_list (1, (yyvsp[(2) - (2)].strval))); }
    break;

  case 174:
#line 957 "./sql3.y"
    { (yyval.tree) = t_listst (5, INDEX_DEF, NULL, NULL,
		    sqlp_string_col_list ((caddr_t *) t_list_to_array ((yyvsp[(5) - (7)].list))), (yyvsp[(7) - (7)].tree)); }
    break;

  case 175:
#line 960 "./sql3.y"
    { (yyval.tree) = (yyvsp[(7) - (7)].tree); (yyvsp[(7) - (7)].tree)->_.fkey.fk_cols = (caddr_t*) t_list_to_array ((yyvsp[(5) - (7)].list)); (yyvsp[(7) - (7)].tree)->_.fkey.fk_name = (yyvsp[(1) - (7)].box); }
    break;

  case 176:
#line 962 "./sql3.y"
    { (yyval.tree) = t_listst (3, CHECK_CONSTR, (yyvsp[(4) - (5)].tree), (yyvsp[(1) - (5)].box)); }
    break;

  case 177:
#line 964 "./sql3.y"
    { (yyval.tree) =
		  t_listst (5, UNIQUE_DEF, (yyvsp[(1) - (5)].box), NULL,
		      sqlp_string_col_list ((caddr_t *) t_list_to_array ((yyvsp[(4) - (5)].list))),
		      (ST *) t_list (1, t_box_string ("unique"))); }
    break;

  case 178:
#line 968 "./sql3.y"
    { (yyval.tree) = t_listst (4, COLUMN_GROUP, (yyvsp[(1) - (6)].box), (yyvsp[(3) - (6)].tree), sqlp_string_col_list (t_list_to_array ((yyvsp[(5) - (6)].list)))); }
    break;

  case 179:
#line 972 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 180:
#line 973 "./sql3.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 181:
#line 977 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].strval), NULL); }
    break;

  case 182:
#line 978 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].strval), NULL)); }
    break;

  case 183:
#line 982 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (2)].strval), NULL); }
    break;

  case 184:
#line 983 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (4)].list), t_CONS ((yyvsp[(3) - (4)].strval), NULL)); }
    break;

  case 185:
#line 987 "./sql3.y"
    { (yyval.box) = t_box_string ("clustered"); }
    break;

  case 186:
#line 988 "./sql3.y"
    { (yyval.box) = t_box_string ("unique"); }
    break;

  case 187:
#line 989 "./sql3.y"
    { (yyval.box) = t_box_string ("object_id"); }
    break;

  case 188:
#line 990 "./sql3.y"
    { (yyval.box) = t_box_string ("bitmap"); }
    break;

  case 189:
#line 991 "./sql3.y"
    { (yyval.box) = t_box_string ("distinct"); }
    break;

  case 190:
#line 992 "./sql3.y"
    { (yyval.box) = t_box_string ("column"); }
    break;

  case 191:
#line 993 "./sql3.y"
    { (yyval.box) = t_box_string ("not_null"); }
    break;

  case 192:
#line 994 "./sql3.y"
    { (yyval.box) = t_box_string ("no_pk"); }
    break;

  case 193:
#line 995 "./sql3.y"
    { (yyval.box) = t_box_string ("no_fill"); }
    break;

  case 194:
#line 999 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].box), NULL); }
    break;

  case 195:
#line 1000 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (2)].list), t_CONS ((yyvsp[(2) - (2)].box), NULL)); }
    break;

  case 196:
#line 1004 "./sql3.y"
    { (yyval.tree) = (ST *) 0; }
    break;

  case 197:
#line 1005 "./sql3.y"
    { (yyval.tree) = (ST *) t_list_to_array ((yyvsp[(1) - (1)].list)); }
    break;

  case 198:
#line 1011 "./sql3.y"
    { (yyval.tree) = t_listst (5, INDEX_DEF, (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), t_list_to_array ((yyvsp[(8) - (9)].list)), (yyvsp[(2) - (9)].tree)); }
    break;

  case 199:
#line 1014 "./sql3.y"
    { ST * opts = (ST *) t_box_append_1  ((caddr_t) (yyvsp[(2) - (12)].tree), (caddr_t) t_listst (5, PARTITION_DEF,  NULL, NULL, (yyvsp[(11) - (12)].box), t_list_to_array ((yyvsp[(12) - (12)].list))));
		 (yyval.tree) = t_listst (5, INDEX_DEF, (yyvsp[(4) - (12)].strval), (yyvsp[(6) - (12)].strval), t_list_to_array ((yyvsp[(8) - (12)].list)), opts); }
    break;

  case 200:
#line 1019 "./sql3.y"
    { (yyval.tree) = t_listst (3, INDEX_DROP, (yyvsp[(3) - (4)].box), (yyvsp[(4) - (4)].box)); }
    break;

  case 201:
#line 1023 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 202:
#line 1024 "./sql3.y"
    { (yyval.box) = (yyvsp[(1) - (1)].strval); }
    break;

  case 203:
#line 1028 "./sql3.y"
    { (yyval.tree) = t_listst (2, TABLE_DROP, (yyvsp[(3) - (3)].strval)); }
    break;

  case 204:
#line 1029 "./sql3.y"
    { (yyval.tree) = t_listst (2, TABLE_DROP, (yyvsp[(3) - (3)].strval)); }
    break;

  case 205:
#line 1033 "./sql3.y"
    { (yyval.intval) = 0; }
    break;

  case 206:
#line 1034 "./sql3.y"
    { (yyval.intval) = 1; }
    break;

  case 207:
#line 1038 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].list), NULL); }
    break;

  case 208:
#line 1039 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].list), NULL)); }
    break;

  case 209:
#line 1043 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].strval), NULL); }
    break;

  case 210:
#line 1044 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].strval), NULL)); }
    break;

  case 211:
#line 1049 "./sql3.y"
    {
		  dk_set_t ret = NULL, col_defs_list = (yyvsp[(6) - (6)].list);
		  DO_SET (dk_set_t, col_def, &col_defs_list)
		    {
		      t_set_push (&ret, t_listst (3, ADD_COLUMN, (yyvsp[(3) - (6)].strval), t_list_to_array (col_def)));
		    }
		  END_DO_SET ();
		  (yyval.list) = ret;
		}
    break;

  case 212:
#line 1059 "./sql3.y"
    {
		  dk_set_t ret = NULL, col_ref_list = (yyvsp[(6) - (6)].list);
		  DO_SET (caddr_t, col_ref, &col_ref_list)
		    {
		      t_set_push (&ret, t_listst (3, DROP_COL, (yyvsp[(3) - (6)].strval), col_ref));
		    }
		  END_DO_SET ();
		  (yyval.list) = ret;
		}
    break;

  case 213:
#line 1069 "./sql3.y"
    {
		  (yyval.list) = t_CONS (t_listst (3, MODIFY_COLUMN, (yyvsp[(3) - (6)].strval), t_list_to_array ((yyvsp[(6) - (6)].list))), NULL);
		}
    break;

  case 214:
#line 1076 "./sql3.y"
    { (yyval.tree) = t_listst (3, TABLE_RENAME, (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); }
    break;

  case 215:
#line 1081 "./sql3.y"
    { (yyval.subtok) = 1; }
    break;

  case 216:
#line 1082 "./sql3.y"
    { (yyval.subtok) = 2; }
    break;

  case 217:
#line 1083 "./sql3.y"
    { (yyval.subtok) = 3; }
    break;

  case 218:
#line 1087 "./sql3.y"
    { (yyval.intval) = 0; }
    break;

  case 219:
#line 1088 "./sql3.y"
    { (yyval.intval) = 1; }
    break;

  case 220:
#line 1089 "./sql3.y"
    { (yyval.intval) = 2; }
    break;

  case 221:
#line 1094 "./sql3.y"
    {
		  (yyval.tree) = t_listst (9, FOREIGN_KEY, NULL, NULL, NULL, NULL, NULL, NULL, (ptrlong) (yyvsp[(2) - (3)].box), (ptrlong) 0);
		}
    break;

  case 222:
#line 1097 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 223:
#line 1102 "./sql3.y"
    { ST * c = (yyvsp[(5) - (5)].tree);
	if (INDEX_DEF == c->type)
	  c->type = 0;
	else if (c->type == FOREIGN_KEY)
	  c->type = 1;
	else if (c->type == UNIQUE_DEF)
	  c->type = 2;
	else if (c->type == CHECK_CONSTR)
	  c->type = 3;
	else
	  yyerror ("ALTER TABLE constraint must be foreign key, primary key, unique or check");
	(yyval.tree) = (ST*) t_list (3, CALL_STMT, t_sqlp_box_id_upcase ("DB.DBA.ddl_alter_constr"),
		   t_list (3, (yyvsp[(3) - (5)].strval), (ptrlong) (yyvsp[(4) - (5)].subtok), t_list (2, QUOTE, (yyvsp[(5) - (5)].tree)))); }
    break;

  case 224:
#line 1119 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
		  t_sqlp_box_id_upcase ("DB.DBA.SYS_CREATE_XML_SCHEMA"),
		  t_list (1, (yyvsp[(4) - (4)].box))); }
    break;

  case 225:
#line 1126 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
		  t_sqlp_box_id_upcase ("DB.DBA.SYS_DROP_XML_SCHEMA"),
		  t_list (1, (yyvsp[(4) - (4)].box))); }
    break;

  case 227:
#line 1138 "./sql3.y"
    { (yyval.tree) = t_listst (5, VIEW_DEF, NULL /* temp value, will set in view_def rule */,
			sqlp_view_def ((ST **) (yyvsp[(1) - (4)].tree),
			  (yyvsp[(3) - (4)].tree), 0), NULL, (ptrlong) (yyvsp[(4) - (4)].subtok)); }
    break;

  case 228:
#line 1142 "./sql3.y"
    { (yyval.tree) = t_listst (5, VIEW_DEF, NULL /* temp value, will set in view_def rule */,
			sqlp_view_def ((ST **) (yyvsp[(1) - (4)].tree),
			  (yyvsp[(4) - (4)].tree), 0), NULL, (ptrlong) 0); }
    break;

  case 229:
#line 1148 "./sql3.y"
    { sqlp_in_view ((yyvsp[(3) - (3)].strval)); }
    break;

  case 230:
#line 1150 "./sql3.y"
    { (yyval.tree) = (yyvsp[(5) - (5)].tree); (yyval.tree)->_.view_def.name = (yyvsp[(3) - (5)].strval); }
    break;

  case 231:
#line 1152 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (5, VIEW_DEF, (yyvsp[(4) - (12)].strval),
		    t_list (4, PROC_TABLE, (yyvsp[(6) - (12)].strval), (yyvsp[(8) - (12)].tree),
		      t_list_to_array (sqlc_ensure_primary_key (sqlp_process_col_options ((yyvsp[(4) - (12)].strval), (yyvsp[(11) - (12)].list))))),
		    NULL, NULL); }
    break;

  case 232:
#line 1159 "./sql3.y"
    { (yyval.subtok) = 0; }
    break;

  case 233:
#line 1160 "./sql3.y"
    { (yyval.subtok) = 1; }
    break;

  case 234:
#line 1164 "./sql3.y"
    { (yyval.tree) = t_listst (0); }
    break;

  case 235:
#line 1165 "./sql3.y"
    { (yyval.tree) = (ST *) t_list_to_array ((yyvsp[(2) - (3)].list)); }
    break;

  case 236:
#line 1169 "./sql3.y"
    { (yyval.tree) = (ST *) 0; }
    break;

  case 237:
#line 1170 "./sql3.y"
    { (yyval.tree) = (ST *) t_list_to_array ((yyvsp[(2) - (3)].list)); }
    break;

  case 238:
#line 1175 "./sql3.y"
    { (yyval.tree) = t_listst (3, SET_GROUP_STMT, (yyvsp[(5) - (5)].box), t_box_string ("dba")); }
    break;

  case 239:
#line 1177 "./sql3.y"
    { (yyval.tree) = t_listst (4, GRANT_STMT, (yyvsp[(2) - (7)].box), (yyvsp[(4) - (7)].strval), t_list_to_array ((yyvsp[(6) - (7)].list))); }
    break;

  case 240:
#line 1179 "./sql3.y"
    { (yyval.tree) = t_listst (4, GRANT_STMT,
		    t_list (1,
		      t_listst (3, NULL, GR_EXECUTE, NULL)),
		    t_list (5, TABLE_DOTTED, (yyvsp[(4) - (7)].box), NULL, sqlp_view_u_id (), sqlp_view_g_id ()),
		    t_list_to_array ((yyvsp[(6) - (7)].list))); }
    break;

  case 241:
#line 1185 "./sql3.y"
    { (yyval.tree) = t_listst (4, GRANT_STMT,
		    t_list (1,
                      t_listst (3, NULL, GR_REXECUTE, NULL)),
		    t_list (5, TABLE_DOTTED, (yyvsp[(4) - (6)].box), NULL, sqlp_view_u_id (), sqlp_view_g_id ()),
		    t_list_to_array ((yyvsp[(6) - (6)].list))); }
    break;

  case 242:
#line 1191 "./sql3.y"
    { (yyval.tree) = t_listst (4, GRANT_STMT,
		    t_list (1,
		      t_listst (3, NULL, GR_UDT_UNDER, NULL)),
		    t_list (5, TABLE_DOTTED, (yyvsp[(4) - (7)].strval), NULL, sqlp_view_u_id (), sqlp_view_g_id ()),
		    t_list_to_array ((yyvsp[(6) - (7)].list))); }
    break;

  case 243:
#line 1198 "./sql3.y"
    { (yyval.tree) = t_listst (4, GRANT_ROLE_STMT, t_list_to_array ((yyvsp[(2) - (5)].list)), t_list_to_array ((yyvsp[(4) - (5)].list)), (ptrlong) (yyvsp[(5) - (5)].subtok)); }
    break;

  case 244:
#line 1202 "./sql3.y"
    { (yyval.subtok) = 0; }
    break;

  case 245:
#line 1203 "./sql3.y"
    { (yyval.subtok) = 1; }
    break;

  case 246:
#line 1212 "./sql3.y"
    { (yyval.tree) = t_listst (4, REVOKE_STMT, (yyvsp[(2) - (6)].box), (yyvsp[(4) - (6)].strval), t_list_to_array ((yyvsp[(6) - (6)].list))); }
    break;

  case 247:
#line 1215 "./sql3.y"
    { (yyval.tree) = t_listst (4, REVOKE_STMT,
		    t_list (1,
		      t_listst (3, NULL, GR_EXECUTE, NULL)),
		    t_list (5, TABLE_DOTTED, (yyvsp[(4) - (6)].box), NULL, sqlp_view_u_id (), sqlp_view_g_id ()),
		    t_list_to_array ((yyvsp[(6) - (6)].list))); }
    break;

  case 248:
#line 1221 "./sql3.y"
    { (yyval.tree) = t_listst (4, REVOKE_STMT,
		    t_list (1,
		      t_listst (3, NULL, GR_UDT_UNDER, NULL)),
		    t_list (5, TABLE_DOTTED, (yyvsp[(4) - (6)].strval), NULL, sqlp_view_u_id (), sqlp_view_g_id ()),
		    t_list_to_array ((yyvsp[(6) - (6)].list))); }
    break;

  case 249:
#line 1227 "./sql3.y"
    { (yyval.tree) = t_listst (4, REVOKE_STMT,
		    t_list (1,
		      t_listst (3, NULL, GR_REXECUTE, NULL)),
		    t_list (5, TABLE_DOTTED, (yyvsp[(4) - (6)].box), NULL, sqlp_view_u_id (), sqlp_view_g_id ()),
		    t_list_to_array ((yyvsp[(6) - (6)].list))); }
    break;

  case 250:
#line 1233 "./sql3.y"
    { (yyval.tree) = t_listst (4, REVOKE_ROLE_STMT, t_list_to_array ((yyvsp[(2) - (4)].list)), t_list_to_array ((yyvsp[(4) - (4)].list)), 0); }
    break;

  case 251:
#line 1237 "./sql3.y"
    { (yyval.subtok) = 0; }
    break;

  case 252:
#line 1238 "./sql3.y"
    { (yyval.subtok) = 1; }
    break;

  case 253:
#line 1243 "./sql3.y"
    {
			  (yyval.box) = t_listbox (5,
				t_list (3, NULL, GR_SELECT, NULL),
				t_list (3, NULL, GR_INSERT, NULL),
				t_list (3, NULL, GR_UPDATE, NULL),
				t_list (3, NULL, GR_DELETE, NULL),
				t_list (3, NULL, GR_REFERENCES, NULL),
				t_list (3, NULL, GR_REXECUTE, NULL),
				t_list (3, NULL, GR_EXECUTE, NULL),
				t_list (3, NULL, GR_UDT_UNDER, NULL)
				);
			}
    break;

  case 254:
#line 1256 "./sql3.y"
    {
			  (yyval.box) = t_listbox (6,
				t_list (3, NULL, GR_SELECT, NULL),
				t_list (3, NULL, GR_INSERT, NULL),
				t_list (3, NULL, GR_UPDATE, NULL),
				t_list (3, NULL, GR_DELETE, NULL),
				t_list (3, NULL, GR_REFERENCES, NULL),
				t_list (3, NULL, GR_REXECUTE, NULL),
				t_list (3, NULL, GR_EXECUTE, NULL),
				t_list (3, NULL, GR_UDT_UNDER, NULL)
				);
			}
    break;

  case 255:
#line 1268 "./sql3.y"
    { (yyval.box) = t_list_to_array_box ((yyvsp[(1) - (1)].list)); }
    break;

  case 256:
#line 1272 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 257:
#line 1274 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 258:
#line 1279 "./sql3.y"
    { (yyval.tree) = t_listst (3, NULL, GR_SELECT, (yyvsp[(2) - (2)].tree)); }
    break;

  case 259:
#line 1280 "./sql3.y"
    { (yyval.tree) = t_listst (3, NULL, GR_INSERT, NULL); }
    break;

  case 260:
#line 1281 "./sql3.y"
    { (yyval.tree) = t_listst (3, NULL, GR_DELETE, NULL); }
    break;

  case 261:
#line 1283 "./sql3.y"
    { (yyval.tree) = t_listst (3, NULL, GR_UPDATE, (yyvsp[(2) - (2)].tree)); }
    break;

  case 262:
#line 1285 "./sql3.y"
    { (yyval.tree) = t_listst (3, NULL, GR_REFERENCES, (yyvsp[(2) - (2)].tree)); }
    break;

  case 263:
#line 1290 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].box), NULL); }
    break;

  case 264:
#line 1292 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].box), NULL)); }
    break;

  case 265:
#line 1296 "./sql3.y"
    { (yyval.box) = (caddr_t) U_ID_PUBLIC; }
    break;

  case 267:
#line 1302 "./sql3.y"
    { (yyval.tree) = t_listst (3, SET_PASS_STMT, (yyvsp[(3) - (4)].box), (yyvsp[(4) - (4)].box)); }
    break;

  case 268:
#line 1306 "./sql3.y"
    { (yyval.tree) = t_listst (2, CREATE_USER_STMT, (yyvsp[(3) - (3)].box)); }
    break;

  case 269:
#line 1307 "./sql3.y"
    { (yyval.tree) = t_listst (2, CREATE_ROLE_STMT, (yyvsp[(3) - (3)].box)); }
    break;

  case 270:
#line 1311 "./sql3.y"
    { (yyval.tree) = t_listst (2, DELETE_USER_STMT, (yyvsp[(3) - (3)].box)); }
    break;

  case 271:
#line 1312 "./sql3.y"
    { (yyval.tree) = t_listst (3, DELETE_USER_STMT, (yyvsp[(3) - (4)].box), t_box_num (1)); }
    break;

  case 272:
#line 1313 "./sql3.y"
    { (yyval.tree) = t_listst (2, DELETE_USER_STMT, (yyvsp[(3) - (3)].box)); }
    break;

  case 273:
#line 1314 "./sql3.y"
    { (yyval.tree) = t_listst (3, DELETE_USER_STMT, (yyvsp[(3) - (4)].box), t_box_num (1)); }
    break;

  case 274:
#line 1315 "./sql3.y"
    { (yyval.tree) = t_listst (2, DROP_ROLE_STMT, (yyvsp[(3) - (3)].box)); }
    break;

  case 275:
#line 1320 "./sql3.y"
    { (yyval.tree) = t_listst (3, SET_GROUP_STMT, (yyvsp[(4) - (5)].box), (yyvsp[(5) - (5)].box)); }
    break;

  case 276:
#line 1325 "./sql3.y"
    { (yyval.tree) = t_listst (3, ADD_GROUP_STMT, (yyvsp[(4) - (5)].box), (yyvsp[(5) - (5)].box)); }
    break;

  case 277:
#line 1330 "./sql3.y"
    { (yyval.tree) = t_listst (3, DELETE_GROUP_STMT, (yyvsp[(4) - (5)].box), (yyvsp[(5) - (5)].box)); }
    break;

  case 278:
#line 1335 "./sql3.y"
    { (yyval.tree) = (ST *) t_alloc_box (0, DV_DB_NULL); }
    break;

  case 279:
#line 1337 "./sql3.y"
    {
		  (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("vector"),
		      sqlp_string_col_list (t_list_to_array ((yyvsp[(4) - (5)].list))));
		}
    break;

  case 280:
#line 1345 "./sql3.y"
    {
	      caddr_t *l = (caddr_t *) (yyvsp[(8) - (10)].tree);
	      (yyval.tree) = t_listst (3, CALL_STMT,
		  (yyvsp[(9) - (10)].box),
		  t_list (7, (yyvsp[(7) - (10)].box), (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].box), l[0], l[1], (yyvsp[(4) - (10)].tree), (yyvsp[(10) - (10)].tree)));
	    }
    break;

  case 281:
#line 1354 "./sql3.y"
    { (yyval.box) = t_alloc_box (0, DV_DB_NULL); }
    break;

  case 282:
#line 1355 "./sql3.y"
    { (yyval.box) = (yyvsp[(2) - (2)].strval); }
    break;

  case 283:
#line 1360 "./sql3.y"
    { (yyval.tree) = t_listst (2, t_alloc_box (0, DV_DB_NULL),
			t_alloc_box (0, DV_DB_NULL));
		}
    break;

  case 284:
#line 1364 "./sql3.y"
    { (yyval.tree) = t_listst (2, (yyvsp[(2) - (4)].tree), (yyvsp[(4) - (4)].tree)); }
    break;

  case 285:
#line 1368 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ("DB.DBA.vd_attach_view"); }
    break;

  case 286:
#line 1369 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ("DB.DBA.vd_attach_view_no_select"); }
    break;

  case 287:
#line 1373 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 288:
#line 1375 "./sql3.y"
    {
		  (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("concat"),
		      t_list (2, t_box_string ("\1"), (yyvsp[(3) - (3)].tree)));
		}
    break;

  case 289:
#line 1382 "./sql3.y"
    { (yyval.intval) = _SQL_CURSOR_STATIC; }
    break;

  case 290:
#line 1383 "./sql3.y"
    { (yyval.intval) = _SQL_CURSOR_DYNAMIC; }
    break;

  case 291:
#line 1384 "./sql3.y"
    { (yyval.intval) = _SQL_CURSOR_KEYSET_DRIVEN; }
    break;

  case 292:
#line 1390 "./sql3.y"
    {
				  (yyval.tree) = t_listst (5, CURSOR_DEF, (yyvsp[(2) - (5)].box), (yyvsp[(5) - (5)].tree), _SQL_CURSOR_FORWARD_ONLY, NULL);
				}
    break;

  case 293:
#line 1394 "./sql3.y"
    {
				  (yyval.tree) = t_listst (5, CURSOR_DEF, (yyvsp[(2) - (6)].box), (yyvsp[(6) - (6)].tree), (ptrlong) (yyvsp[(3) - (6)].intval), NULL);
				}
    break;

  case 294:
#line 1400 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 295:
#line 1401 "./sql3.y"
    { (yyval.box) = t_list_to_array_box ((yyvsp[(3) - (3)].list)); }
    break;

  case 296:
#line 1405 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 297:
#line 1407 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 298:
#line 1412 "./sql3.y"
    { (yyval.tree) = t_listst (3, ORDER_BY, (caddr_t) (yyvsp[(1) - (2)].tree), (ptrlong) (yyvsp[(2) - (2)].subtok));  }
    break;

  case 299:
#line 1414 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (3, ORDER_BY, t_list (3, COL_DOTTED, NULL, sqlp_xml_col_name ((yyvsp[(1) - (2)].tree))), (ptrlong) (yyvsp[(2) - (2)].subtok)); }
    break;

  case 300:
#line 1418 "./sql3.y"
    { (yyval.subtok) = ORDER_ASC; }
    break;

  case 301:
#line 1419 "./sql3.y"
    { (yyval.subtok) = ORDER_ASC; }
    break;

  case 302:
#line 1420 "./sql3.y"
    { (yyval.subtok) = ORDER_DESC; }
    break;

  case 303:
#line 1426 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
		  t_sqlp_box_id_upcase ("DB.DBA.repl_create_snapshot_log"),
		  t_list (1, (yyvsp[(5) - (5)].strval))); }
    break;

  case 304:
#line 1433 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
		  t_sqlp_box_id_upcase ("DB.DBA.repl_drop_snapshot_log"),
		  t_list (1, (yyvsp[(5) - (5)].strval))); }
    break;

  case 305:
#line 1440 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
		  t_sqlp_box_id_upcase ("DB.DBA.repl_purge_snapshot_log"),
		  t_list (1, (yyvsp[(5) - (5)].strval))); }
    break;

  case 306:
#line 1446 "./sql3.y"
    { (yyval.box) = (caddr_t) t_NULLCONST; }
    break;

  case 307:
#line 1447 "./sql3.y"
    { (yyval.box) = (yyvsp[(1) - (1)].box); }
    break;

  case 308:
#line 1451 "./sql3.y"
    { (yyval.box) = (caddr_t) t_NULLCONST; }
    break;

  case 309:
#line 1452 "./sql3.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 310:
#line 1457 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
		  t_sqlp_box_id_upcase ("DB.DBA.repl_create_inc_snapshot"),
		  t_list (4, (yyvsp[(6) - (7)].box), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].box), (yyvsp[(3) - (7)].strval))); }
    break;

  case 311:
#line 1461 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
		  t_sqlp_box_id_upcase ("DB.DBA.repl_create_snapshot"),
		  t_list (2, (yyvsp[(6) - (6)].box), (yyvsp[(4) - (6)].strval))); }
    break;

  case 312:
#line 1467 "./sql3.y"
    { (yyval.box) = t_box_num (0); }
    break;

  case 313:
#line 1468 "./sql3.y"
    { (yyval.box) = t_box_num (1); }
    break;

  case 314:
#line 1473 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
		  t_sqlp_box_id_upcase ("DB.DBA.repl_drop_snapshot"),
		  t_list (2, (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].box))); }
    break;

  case 315:
#line 1479 "./sql3.y"
    { (yyval.subtok) = 0; }
    break;

  case 316:
#line 1480 "./sql3.y"
    { (yyval.subtok) = 1; }
    break;

  case 317:
#line 1485 "./sql3.y"
    {
	      if ((yyvsp[(4) - (4)].subtok))
		(yyval.tree) = t_listst (3, CALL_STMT,
		    t_sqlp_box_id_upcase ("DB.DBA.repl_refresh_noninc_snapshot"),
		    t_list (1, (yyvsp[(3) - (4)].strval)));
	      else
		(yyval.tree) = t_listst (3, CALL_STMT,
		    t_sqlp_box_id_upcase ("DB.DBA.repl_refresh_inc_snapshot"),
		    t_list (1, (yyvsp[(3) - (4)].strval))); }
    break;

  case 318:
#line 1498 "./sql3.y"
    {
	    /*  if (!stricmp ($2, "TEXT"))
		{*/
		  (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("DB.DBA.vt_create_text_index"),
		      t_list (9, (yyvsp[(6) - (15)].strval), t_box_string ((yyvsp[(8) - (15)].strval)), (yyvsp[(10) - (15)].box), (yyvsp[(3) - (15)].box), (yyvsp[(11) - (15)].box), t_list(2, QUOTE, (yyvsp[(12) - (15)].tree)), (yyvsp[(13) - (15)].box), (yyvsp[(14) - (15)].box), (yyvsp[(15) - (15)].box)));
/*		}
	      else
		yyerror ("Not a text index");*/
	    }
    break;

  case 319:
#line 1510 "./sql3.y"
    { (yyval.box) = t_box_num(0); }
    break;

  case 320:
#line 1511 "./sql3.y"
    { (yyval.box) = t_box_num(1); }
    break;

  case 321:
#line 1515 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 322:
#line 1516 "./sql3.y"
    { (yyval.box) = t_box_string ((yyvsp[(2) - (3)].strval)); }
    break;

  case 323:
#line 1521 "./sql3.y"
    {
	      (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("DB.DBA.vt_create_ftt"),
		  t_list (4, (yyvsp[(5) - (6)].strval), NULL, (yyvsp[(6) - (6)].box), NULL));
	    }
    break;

  case 324:
#line 1529 "./sql3.y"
    {
	      (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("DB.DBA.vt_drop_ftt"),
		  t_list (2, (yyvsp[(5) - (6)].strval), (yyvsp[(6) - (6)].box)));
	    }
    break;

  case 325:
#line 1536 "./sql3.y"
    { (yyval.box) = t_box_num (0); }
    break;

  case 326:
#line 1537 "./sql3.y"
    { (yyval.box) = t_box_num (1); }
    break;

  case 327:
#line 1541 "./sql3.y"
    { (yyval.box) = (caddr_t) t_NULLCONST; }
    break;

  case 328:
#line 1542 "./sql3.y"
    { (yyval.box) = t_box_string ((yyvsp[(3) - (3)].strval)); }
    break;

  case 329:
#line 1546 "./sql3.y"
    { (yyval.tree) = (ST*) t_NULLCONST; }
    break;

  case 330:
#line 1547 "./sql3.y"
    { (yyval.tree) = (ST*) t_list_to_array ((yyvsp[(4) - (5)].list)); }
    break;

  case 331:
#line 1551 "./sql3.y"
    { (yyval.box) = (caddr_t) t_NULLCONST; }
    break;

  case 332:
#line 1552 "./sql3.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 333:
#line 1556 "./sql3.y"
    { (yyval.box) = (caddr_t) t_NULLCONST; }
    break;

  case 334:
#line 1557 "./sql3.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 335:
#line 1561 "./sql3.y"
    { (yyval.box) = t_box_num (0); }
    break;

  case 336:
#line 1562 "./sql3.y"
    { (yyval.box) = t_box_num (1); }
    break;

  case 346:
#line 1580 "./sql3.y"
    { (yyval.tree) = (yyvsp[(3) - (3)].tree); }
    break;

  case 364:
#line 1602 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
			t_sqlp_box_id_upcase ("set_qualifier"),
			t_list (1, sqlp_new_qualifier_name ((yyvsp[(2) - (2)].box), box_length ((yyvsp[(2) - (2)].box))))); }
    break;

  case 365:
#line 1608 "./sql3.y"
    { (yyval.tree) = t_listst (2, CLOSE_STMT, (yyvsp[(2) - (2)].box)); }
    break;

  case 366:
#line 1613 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (3, CALL_STMT, t_sqlp_box_id_upcase ("__commit"), t_list (0)); }
    break;

  case 367:
#line 1619 "./sql3.y"
    { (yyval.tree) = t_listst (4, DELETE_POS, (yyvsp[(7) - (8)].box), (yyvsp[(3) - (8)].strval), (yyvsp[(8) - (8)].tree)); }
    break;

  case 368:
#line 1624 "./sql3.y"
    { (yyval.tree) = t_listst (2, DELETE_SRC,
		      sqlp_infoschema_redirect (t_listst (9, TABLE_EXP, t_list (1, (yyvsp[(3) - (5)].strval)),
		      (yyvsp[(4) - (5)].tree), NULL, NULL, NULL, NULL, (yyvsp[(5) - (5)].tree), NULL))); }
    break;

  case 369:
#line 1631 "./sql3.y"
    { (yyval.tree) = t_listst (5, FETCH_STMT, (yyvsp[(2) - (4)].box), t_list_to_array ((yyvsp[(4) - (4)].list)), (ptrlong) _SQL_FETCH_NEXT, t_box_num (1)); }
    break;

  case 370:
#line 1633 "./sql3.y"
    {
		  ptrlong fetch_type = sqlp_fetch_type_to_code ((yyvsp[(3) - (5)].box));
		  (yyval.tree) = t_listst (5, FETCH_STMT, (yyvsp[(2) - (5)].box), t_list_to_array ((yyvsp[(5) - (5)].list)), fetch_type, t_box_num (1));
		}
    break;

  case 371:
#line 1638 "./sql3.y"
    {
		  ptrlong fetch_type = sqlp_fetch_type_to_code ((yyvsp[(3) - (6)].box));
		  (yyval.tree) = t_listst (5, FETCH_STMT, (yyvsp[(2) - (6)].box), t_list_to_array ((yyvsp[(6) - (6)].list)), fetch_type, (yyvsp[(4) - (6)].tree));
		}
    break;

  case 372:
#line 1645 "./sql3.y"
    { (yyval.subtok) = INS_NORMAL; }
    break;

  case 373:
#line 1646 "./sql3.y"
    { (yyval.subtok) = INS_REPLACING; }
    break;

  case 374:
#line 1647 "./sql3.y"
    { (yyval.subtok) = INS_SOFT; }
    break;

  case 375:
#line 1652 "./sql3.y"
    { (yyval.box) = NULL;}
    break;

  case 376:
#line 1653 "./sql3.y"
    {(yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 377:
#line 1659 "./sql3.y"
    { (yyval.tree) = t_listst (7, INSERT_STMT, (yyvsp[(3) - (7)].strval), (yyvsp[(6) - (7)].tree), (yyvsp[(7) - (7)].tree), (ptrlong) (yyvsp[(2) - (7)].subtok), (yyvsp[(4) - (7)].box), (yyvsp[(5) - (7)].tree)); }
    break;

  case 378:
#line 1664 "./sql3.y"
    { (yyval.tree) = t_listst (2, INSERT_VALUES, sqlp_wrapper_sqlxml((ST**)t_list_to_array ((yyvsp[(3) - (4)].list)))); }
    break;

  case 380:
#line 1669 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 381:
#line 1671 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 383:
#line 1681 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_ORDER, t_CONS (1, NULL)); }
    break;

  case 384:
#line 1682 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_ANY_ORDER, t_CONS (1, NULL)); }
    break;

  case 385:
#line 1683 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_SPARQL, t_CONS (1, NULL)); }
    break;

  case 386:
#line 1684 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_SAME_AS, t_CONS (1, NULL)); }
    break;

  case 387:
#line 1685 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_ARRAY, t_CONS (1, NULL)); }
    break;

  case 388:
#line 1686 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_JOIN, t_CONS (OPT_HASH, NULL)); }
    break;

  case 389:
#line 1687 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_JOIN, t_CONS (OPT_INTERSECT, NULL)); }
    break;

  case 390:
#line 1688 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_JOIN, t_CONS (OPT_LOOP, NULL)); }
    break;

  case 391:
#line 1689 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_SUBQ_LOOP, t_CONS (SUBQ_LOOP, NULL)); }
    break;

  case 392:
#line 1690 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_SUBQ_LOOP, t_CONS (SUBQ_NO_LOOP, NULL)); }
    break;

  case 393:
#line 1691 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_INDEX, t_CONS ((yyvsp[(2) - (2)].box), NULL)); }
    break;

  case 394:
#line 1692 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_INDEX, t_CONS (t_box_string ("PRIMARY KEY"), NULL)); }
    break;

  case 395:
#line 1693 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_INDEX, t_CONS (t_box_string ("TEXT KEY"), NULL)); }
    break;

  case 396:
#line 1694 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_INDEX_ONLY, t_CONS (t_box_num (1), NULL)); }
    break;

  case 397:
#line 1695 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_RDF_INFERENCE, t_CONS ((yyvsp[(2) - (2)].box), NULL)); }
    break;

  case 398:
#line 1696 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_NO_CLUSTER, t_CONS (1, NULL)); }
    break;

  case 399:
#line 1697 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_INTO, t_CONS ((yyvsp[(2) - (2)].tree), NULL)); }
    break;

  case 400:
#line 1698 "./sql3.y"
    {
	  if (!stricmp ((yyvsp[(1) - (2)].box), "vacuum"))
	    (yyval.list) = t_CONS (OPT_VACUUM, t_CONS ((yyvsp[(2) - (2)].box), NULL));
	  else if (!stricmp ((yyvsp[(1) - (2)].box), "RANDOM"))
	    (yyval.list) = t_CONS (OPT_RANDOM_FETCH, t_CONS ((yyvsp[(2) - (2)].box), NULL));
	  else
	    (yyval.list) = NULL;
	}
    break;

  case 401:
#line 1709 "./sql3.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); }
    break;

  case 402:
#line 1710 "./sql3.y"
    { (yyval.list) = NCONC ((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].list)); }
    break;

  case 403:
#line 1714 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 404:
#line 1715 "./sql3.y"
    { (yyval.tree) = (ST*) t_list_to_array ((yyvsp[(3) - (4)].list)); }
    break;

  case 405:
#line 1719 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 406:
#line 1720 "./sql3.y"
    { (yyval.tree) = (ST*) t_list_to_array ((yyvsp[(4) - (5)].list)); }
    break;

  case 407:
#line 1724 "./sql3.y"
    { (yyval.tree)  = (ST *) EXCLUSIVE_OPT; }
    break;

  case 408:
#line 1725 "./sql3.y"
    { (yyval.tree) = t_listst (2, PREFETCH_OPT, (yyvsp[(2) - (2)].box)); }
    break;

  case 409:
#line 1729 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 410:
#line 1731 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 411:
#line 1735 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 412:
#line 1736 "./sql3.y"
    { (yyval.box) = t_list_to_array_box ((yyvsp[(2) - (3)].list)); }
    break;

  case 413:
#line 1741 "./sql3.y"
    { (yyval.tree) = t_listst (4, OPEN_STMT, (yyvsp[(2) - (3)].box), (yyvsp[(3) - (3)].box), NULL); }
    break;

  case 414:
#line 1746 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (3, CALL_STMT, t_sqlp_box_id_upcase ("__rollback"), t_list (0)); }
    break;

  case 415:
#line 1751 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 416:
#line 1752 "./sql3.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 417:
#line 1758 "./sql3.y"
    { char *tmp_cr = "temp_cr";
		  ST *qspec = t_listst (5,
		      SELECT_STMT,
		      (yyvsp[(2) - (7)].tree),
		      sqlp_stars (sqlp_wrapper_sqlxml ((ST **) (yyvsp[(3) - (7)].tree)), (yyvsp[(6) - (7)].tree)->_.table_exp.from),
		      NULL,
		      (yyvsp[(6) - (7)].tree));
		  sqlp_breakup (qspec);
                  qspec = sqlp_add_top_1 (qspec);

		  (yyval.tree) = t_listst (5,
		    COMPOUND_STMT,
		    t_list (4,
		      t_list (5, CURSOR_DEF, t_box_string (tmp_cr), qspec, _SQL_CURSOR_FORWARD_ONLY, NULL),
		      t_list (4, OPEN_STMT, t_box_string (tmp_cr), (yyvsp[(7) - (7)].box), NULL),
		      t_list (5, FETCH_STMT, t_box_string (tmp_cr), t_list_to_array ((yyvsp[(5) - (7)].list)), (ptrlong) _SQL_FETCH_NEXT, NULL),
		      t_list (2, CLOSE_STMT, t_box_string (tmp_cr))),
                    t_box_num (scn3_lineno),
                    t_box_num (scn3_get_lineno()),
                    t_box_string (scn3_get_file_name()));
		}
    break;

  case 418:
#line 1785 "./sql3.y"
    { (yyval.list) = t_CONS (sqlp_col_num ((yyvsp[(1) - (1)].box)), NULL); }
    break;

  case 419:
#line 1786 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS (sqlp_col_num ((yyvsp[(3) - (3)].box)), NULL)); }
    break;

  case 420:
#line 1790 "./sql3.y"
    { (yyval.box) = t_listbox (1, sqlp_col_num ((yyvsp[(1) - (1)].box))); }
    break;

  case 421:
#line 1791 "./sql3.y"
    { (yyval.box) = t_list_to_array_box ((yyvsp[(2) - (3)].list)); }
    break;

  case 422:
#line 1796 "./sql3.y"
    { global_trans->_.trans.min = (yyvsp[(3) - (4)].tree); }
    break;

  case 423:
#line 1797 "./sql3.y"
    { global_trans->_.trans.max = (yyvsp[(3) - (4)].tree); }
    break;

  case 424:
#line 1798 "./sql3.y"
    { global_trans->_.trans.distinct = 1; }
    break;

  case 425:
#line 1799 "./sql3.y"
    { global_trans->_.trans.exists = 1; }
    break;

  case 426:
#line 1800 "./sql3.y"
    { global_trans->_.trans.no_cycles = 1; }
    break;

  case 427:
#line 1801 "./sql3.y"
    { global_trans->_.trans.cycles_only = 1; }
    break;

  case 428:
#line 1802 "./sql3.y"
    { global_trans->_.trans.no_order = 1; }
    break;

  case 429:
#line 1803 "./sql3.y"
    { global_trans->_.trans.shortest_only = 1; }
    break;

  case 430:
#line 1804 "./sql3.y"
    { global_trans->_.trans.in = (ptrlong*) (yyvsp[(2) - (2)].box); }
    break;

  case 431:
#line 1805 "./sql3.y"
    { global_trans->_.trans.out = (ptrlong*) (yyvsp[(2) - (2)].box); }
    break;

  case 432:
#line 1806 "./sql3.y"
    { global_trans->_.trans.end_flag = (ptrlong)sqlp_col_num ((yyvsp[(2) - (2)].box)); }
    break;

  case 433:
#line 1807 "./sql3.y"
    { global_trans->_.trans.final_as = (yyvsp[(2) - (2)].box); }
    break;

  case 434:
#line 1808 "./sql3.y"
    { global_trans->_.trans.direction = unbox ((yyvsp[(2) - (2)].box)); }
    break;

  case 437:
#line 1818 "./sql3.y"
    { global_trans = (ST *) t_alloc_box (sizeof (sql_tree_t), DV_ARRAY_OF_POINTER); memset (global_trans, 0, box_length ((caddr_t)global_trans));}
    break;

  case 438:
#line 1819 "./sql3.y"
    { (yyval.tree) = global_trans; global_trans = NULL; }
    break;

  case 439:
#line 1824 "./sql3.y"
    { (yyval.intval) = 0; }
    break;

  case 440:
#line 1825 "./sql3.y"
    { (yyval.intval) = 0; }
    break;

  case 441:
#line 1826 "./sql3.y"
    { (yyval.intval) = 1; }
    break;

  case 442:
#line 1837 "./sql3.y"
    { (yyval.intval) = 0; }
    break;

  case 443:
#line 1838 "./sql3.y"
    { (yyval.intval) = 1; }
    break;

  case 444:
#line 1843 "./sql3.y"
    { (yyval.tree) = (ST*) (ptrlong) (yyvsp[(1) - (1)].intval); }
    break;

  case 445:
#line 1845 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (7, SELECT_TOP, (ptrlong) (yyvsp[(1) - (4)].intval), (yyvsp[(3) - (4)].box), t_box_num (0), /*$4, $5*/ 0, (ptrlong) (yyvsp[(4) - (4)].intval), NULL); }
    break;

  case 446:
#line 1847 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (7, SELECT_TOP, (ptrlong) (yyvsp[(1) - (6)].intval), (yyvsp[(4) - (6)].tree), t_box_num (0), /*$6, $7*/ 0, (ptrlong) (yyvsp[(6) - (6)].intval), NULL); }
    break;

  case 447:
#line 1849 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (7, SELECT_TOP, (ptrlong) (yyvsp[(1) - (6)].intval), (yyvsp[(5) - (6)].box), (yyvsp[(3) - (6)].box), /*$6, $7*/ 0, (ptrlong) (yyvsp[(6) - (6)].intval), NULL); }
    break;

  case 448:
#line 1851 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (7, SELECT_TOP, (ptrlong) (yyvsp[(1) - (8)].intval), (yyvsp[(6) - (8)].tree), (yyvsp[(4) - (8)].tree), /*$8, $9*/ 0, (ptrlong) (yyvsp[(8) - (8)].intval), NULL); }
    break;

  case 449:
#line 1852 "./sql3.y"
    { (yyval.tree) = t_listst (7, SELECT_TOP, NULL, NULL, NULL, NULL, NULL, (yyvsp[(1) - (1)].tree));}
    break;

  case 450:
#line 1854 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (7, SELECT_TOP, (ptrlong) (yyvsp[(1) - (7)].intval), t_box_num_and_zero (-1 * unbox((yyvsp[(6) - (7)].box))), (yyvsp[(3) - (7)].box), /*$6, $7*/ 0, (ptrlong) (yyvsp[(7) - (7)].intval), NULL); }
    break;

  case 451:
#line 1860 "./sql3.y"
    { ST ** asg = (ST **) t_list_to_array ((yyvsp[(4) - (9)].list));
		  ST ** cols = asg_col_list (asg);
		  ST ** vals = asg_val_list (asg);
		  (yyval.tree) = t_listst (6, UPDATE_POS, (yyvsp[(2) - (9)].strval), cols, vals, (yyvsp[(8) - (9)].box), (yyvsp[(9) - (9)].tree)); }
    break;

  case 452:
#line 1867 "./sql3.y"
    { (yyval.list) = NULL; }
    break;

  case 453:
#line 1868 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].box), NULL); }
    break;

  case 454:
#line 1870 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].box), NULL)); }
    break;

  case 455:
#line 1874 "./sql3.y"
    { (yyval.box) = t_listbox (2, (yyvsp[(1) - (3)].strval), sqlp_wrapper_sqlxml_assign((ST*)(yyvsp[(3) - (3)].tree))); }
    break;

  case 456:
#line 1879 "./sql3.y"
    {
		  ST **asg = (ST **) t_list_to_array ((yyvsp[(4) - (6)].list));
		  ST **cols = asg_col_list (asg);
		  ST **vals = asg_val_list (asg);
		  ST *table_exp = sqlp_infoschema_redirect (t_listst (9, TABLE_EXP,
		      t_list (1, t_box_copy_tree ((yyvsp[(2) - (6)].strval))), (yyvsp[(5) - (6)].tree), NULL, NULL, NULL, NULL, (yyvsp[(6) - (6)].tree), NULL));

		  (yyval.tree) = t_listst (5, UPDATE_SRC, (yyvsp[(2) - (6)].strval), cols, vals, table_exp);
		}
    break;

  case 457:
#line 1891 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 458:
#line 1892 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 462:
#line 1903 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 464:
#line 1910 "./sql3.y"
    { (yyval.subtok) = 0; }
    break;

  case 465:
#line 1911 "./sql3.y"
    { (yyval.subtok) = 1; }
    break;

  case 467:
#line 1917 "./sql3.y"
    { (yyval.tree) = t_listst (5, UNION_ST, (yyvsp[(1) - (5)].tree), (yyvsp[(5) - (5)].tree), (yyvsp[(4) - (5)].tree), sqlp_bunion_flag ((yyvsp[(1) - (5)].tree), (yyvsp[(5) - (5)].tree), (yyvsp[(2) - (5)].subtok))); }
    break;

  case 468:
#line 1919 "./sql3.y"
    { (yyval.tree) = t_listst (5, UNION_ALL_ST, (yyvsp[(1) - (6)].tree), (yyvsp[(6) - (6)].tree), (yyvsp[(5) - (6)].tree), sqlp_bunion_flag ((yyvsp[(1) - (6)].tree), (yyvsp[(6) - (6)].tree), (yyvsp[(2) - (6)].subtok))); }
    break;

  case 469:
#line 1921 "./sql3.y"
    { (yyval.tree) = t_listst (4, INTERSECT_ST, (yyvsp[(1) - (4)].tree), (yyvsp[(4) - (4)].tree), (yyvsp[(3) - (4)].tree)); }
    break;

  case 470:
#line 1923 "./sql3.y"
    { (yyval.tree) = t_listst (4, INTERSECT_ALL_ST, (yyvsp[(1) - (5)].tree), (yyvsp[(5) - (5)].tree), (yyvsp[(4) - (5)].tree)); }
    break;

  case 471:
#line 1925 "./sql3.y"
    { (yyval.tree) = t_listst (4, EXCEPT_ST, (yyvsp[(1) - (4)].tree), (yyvsp[(4) - (4)].tree), (yyvsp[(3) - (4)].tree)); }
    break;

  case 472:
#line 1927 "./sql3.y"
    { (yyval.tree) = t_listst (4, EXCEPT_ALL_ST, (yyvsp[(1) - (5)].tree), (yyvsp[(5) - (5)].tree), (yyvsp[(4) - (5)].tree)); }
    break;

  case 476:
#line 1937 "./sql3.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 478:
#line 1943 "./sql3.y"
    { (yyval.tree) = t_listst (5, UNION_ST, (yyvsp[(1) - (5)].tree), (yyvsp[(5) - (5)].tree), (yyvsp[(4) - (5)].tree), sqlp_bunion_flag ((yyvsp[(1) - (5)].tree), (yyvsp[(5) - (5)].tree), (yyvsp[(2) - (5)].subtok))); }
    break;

  case 479:
#line 1945 "./sql3.y"
    { (yyval.tree) = t_listst (5, UNION_ALL_ST, (yyvsp[(1) - (6)].tree), (yyvsp[(6) - (6)].tree), (yyvsp[(5) - (6)].tree), sqlp_bunion_flag ((yyvsp[(1) - (6)].tree), (yyvsp[(6) - (6)].tree), (yyvsp[(2) - (6)].subtok))); }
    break;

  case 480:
#line 1947 "./sql3.y"
    { (yyval.tree) = t_listst (4, INTERSECT_ST, (yyvsp[(1) - (4)].tree), (yyvsp[(4) - (4)].tree), (yyvsp[(3) - (4)].tree)); }
    break;

  case 481:
#line 1949 "./sql3.y"
    { (yyval.tree) = t_listst (4, INTERSECT_ALL_ST, (yyvsp[(1) - (5)].tree), (yyvsp[(5) - (5)].tree), (yyvsp[(4) - (5)].tree)); }
    break;

  case 482:
#line 1951 "./sql3.y"
    { (yyval.tree) = t_listst (4, EXCEPT_ST, (yyvsp[(1) - (4)].tree), (yyvsp[(4) - (4)].tree), (yyvsp[(3) - (4)].tree)); }
    break;

  case 483:
#line 1953 "./sql3.y"
    { (yyval.tree) = t_listst (4, EXCEPT_ALL_ST, (yyvsp[(1) - (5)].tree), (yyvsp[(5) - (5)].tree), (yyvsp[(4) - (5)].tree)); }
    break;

  case 485:
#line 1958 "./sql3.y"
    { (yyval.tree) = sqlp_embedded_xpath ((yyvsp[(2) - (2)].box)); }
    break;

  case 487:
#line 1963 "./sql3.y"
    { (yyval.tree) = sqlp_inline_order_by ((yyvsp[(2) - (4)].tree), (ST **) (yyvsp[(4) - (4)].box)); }
    break;

  case 488:
#line 1964 "./sql3.y"
    { (yyval.tree) = sqlp_embedded_xpath ((yyvsp[(2) - (2)].box)); }
    break;

  case 489:
#line 1968 "./sql3.y"
    { (yyval.tree) = sqlp_inline_order_by ((yyvsp[(3) - (5)].tree), (ST **) (yyvsp[(5) - (5)].box)); }
    break;

  case 490:
#line 1972 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 491:
#line 1973 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 492:
#line 1977 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 493:
#line 1979 "./sql3.y"
    { (yyval.tree) = (ST*) t_list_to_array ((yyvsp[(4) - (5)].list)); }
    break;

  case 494:
#line 1984 "./sql3.y"
    { (yyval.tree) = t_listst (5, SELECT_STMT, (yyvsp[(2) - (4)].tree),
		      sqlp_stars (sqlp_wrapper_sqlxml ((ST **) (yyvsp[(3) - (4)].tree)), (yyvsp[(4) - (4)].tree)->_.table_exp.from) , NULL, (yyvsp[(4) - (4)].tree));
		  sqlp_breakup ((yyval.tree)); }
    break;

  case 495:
#line 1991 "./sql3.y"
    {
		  if (NULL == (yyvsp[(4) - (4)].tree))
		    (yyval.tree) = t_listst (5, SELECT_STMT, NULL,
		      sqlp_stars (sqlp_wrapper_sqlxml ((ST **) (yyvsp[(3) - (4)].tree)), NULL) , NULL, NULL);
		  else
		    (yyval.tree) = t_listst (5, SELECT_STMT, (yyvsp[(2) - (4)].tree),
		      sqlp_stars (sqlp_wrapper_sqlxml ((ST **) (yyvsp[(3) - (4)].tree)), (yyvsp[(4) - (4)].tree)->_.table_exp.from) , NULL, (yyvsp[(4) - (4)].tree));
		  sqlp_breakup ((yyval.tree)); }
    break;

  case 496:
#line 2004 "./sql3.y"
    { (yyval.tree) = t_listst (5, SELECT_STMT, (yyvsp[(2) - (4)].tree),
		      sqlp_stars (sqlp_wrapper_sqlxml ((ST **) (yyvsp[(3) - (4)].tree)), (yyvsp[(4) - (4)].tree)->_.table_exp.from) , NULL, (yyvsp[(4) - (4)].tree));
		  sqlp_breakup ((yyval.tree)); }
    break;

  case 497:
#line 2020 "./sql3.y"
    { (yyval.list) = dk_set_conc ((yyvsp[(2) - (3)].list), t_CONS (t_list (5, BOP_AS, (ptrlong) 1, NULL, t_box_string ("__brkup_cond"), NULL), NULL)); }
    break;

  case 498:
#line 2021 "./sql3.y"
    {
	  ST * cond = (ST*) t_list (5, BOP_AS, t_list (2, SEARCHED_CASE, t_list (4, (yyvsp[(4) - (5)].tree), (caddr_t)1,  t_list (2, QUOTE, NULL), 0)), NULL, t_box_string ("__brkup_cond"), NULL);
	  (yyval.list) = dk_set_conc ((yyvsp[(2) - (5)].list), t_CONS (cond, NULL)); }
    break;

  case 499:
#line 2027 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].list), NULL);}
    break;

  case 500:
#line 2028 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (2)].list), t_CONS ((yyvsp[(2) - (2)].list), NULL)); }
    break;

  case 501:
#line 2032 "./sql3.y"
    { (yyval.tree) = (ST *) t_list_to_array ((yyvsp[(1) - (1)].list)); }
    break;

  case 502:
#line 2033 "./sql3.y"
    { (yyval.tree) = (ST *) t_list_to_array (t_CONS (t_list (1, SELECT_BREAKUP), (yyvsp[(2) - (2)].list))); }
    break;

  case 503:
#line 2038 "./sql3.y"
    {
			ST ** group_by = 0;
			if ((yyvsp[(3) - (4)].tree))
			  group_by =  ((ST***)(yyvsp[(3) - (4)].tree))[0];
			(yyval.tree) = sqlp_infoschema_redirect (t_listst (9,
				TABLE_EXP, (yyvsp[(1) - (4)].tree), (yyvsp[(2) - (4)].tree), group_by, (yyvsp[(4) - (4)].tree), NULL, NULL, NULL, (yyvsp[(3) - (4)].tree)));
		}
    break;

  case 504:
#line 2048 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 506:
#line 2055 "./sql3.y"
    {
			ST ** group_by = 0;
			if ((yyvsp[(3) - (7)].tree))
			  group_by =  ((ST***)(yyvsp[(3) - (7)].tree))[0];
			(yyval.tree) = sqlp_infoschema_redirect (t_listst (9,
				TABLE_EXP, (yyvsp[(1) - (7)].tree), (yyvsp[(2) - (7)].tree), group_by, (yyvsp[(4) - (7)].tree), (yyvsp[(5) - (7)].box), (ptrlong) (yyvsp[(6) - (7)].subtok), (yyvsp[(7) - (7)].tree), (yyvsp[(3) - (7)].tree)));
		}
    break;

  case 507:
#line 2065 "./sql3.y"
    { (yyval.tree) = (ST *) t_list_to_array ((yyvsp[(2) - (2)].list)); }
    break;

  case 508:
#line 2069 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].box), NULL); }
    break;

  case 509:
#line 2071 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].box), NULL)); }
    break;

  case 510:
#line 2076 "./sql3.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); }
    break;

  case 511:
#line 2077 "./sql3.y"
    { (yyval.list) =t_NCONC ((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].list)); }
    break;

  case 512:
#line 2083 "./sql3.y"
    { (yyval.tree) = (ST*) t_list_to_array ((yyvsp[(2) - (3)].list)); }
    break;

  case 513:
#line 2088 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (0); }
    break;

  case 514:
#line 2089 "./sql3.y"
    { (yyval.tree) = (ST *) t_list_to_array ((yyvsp[(1) - (1)].list)); }
    break;

  case 515:
#line 2094 "./sql3.y"
    { (yyval.box) = t_listbox (3, TABLE_REF,(yyvsp[(1) - (1)].strval), (caddr_t) NULL); }
    break;

  case 516:
#line 2096 "./sql3.y"
    {
		  (yyval.box) = t_listbox (3, DERIVED_TABLE, sqlp_view_def (NULL, (yyvsp[(2) - (4)].tree), 0), (yyvsp[(4) - (4)].box));
		}
    break;

  case 517:
#line 2100 "./sql3.y"
    {
		  (yyval.box) = t_listbox (3, DERIVED_TABLE, sqlp_view_def (NULL, (yyvsp[(2) - (5)].tree), 0), (yyvsp[(5) - (5)].box));
		}
    break;

  case 518:
#line 2104 "./sql3.y"
    { (yyval.box) = t_listbox (3, TABLE_REF,(yyvsp[(1) - (1)].tree), (caddr_t) NULL); }
    break;

  case 519:
#line 2106 "./sql3.y"
    {
		  (yyval.box) =  t_listbox (3, DERIVED_TABLE, t_list (4, PROC_TABLE, (yyvsp[(1) - (6)].strval), (yyvsp[(3) - (6)].tree), (yyvsp[(5) - (6)].tree)), (yyvsp[(6) - (6)].box));
		}
    break;

  case 520:
#line 2112 "./sql3.y"
    { (yyval.box) = t_listbox (3, TABLE_REF,(yyvsp[(1) - (1)].strval), (caddr_t) NULL); }
    break;

  case 521:
#line 2114 "./sql3.y"
    {
		  (yyval.box) = t_listbox (3, DERIVED_TABLE, sqlp_view_def (NULL, (yyvsp[(1) - (2)].tree), 0), (caddr_t) (yyvsp[(2) - (2)].box));
		}
    break;

  case 522:
#line 2118 "./sql3.y"
    {
		  (yyval.box) = t_listbox (3, DERIVED_TABLE, sqlp_view_def (NULL, (yyvsp[(1) - (3)].tree), 0), (caddr_t) (yyvsp[(3) - (3)].box));
		}
    break;

  case 523:
#line 2121 "./sql3.y"
    { (yyval.box) = (caddr_t) (yyvsp[(2) - (3)].tree); }
    break;

  case 524:
#line 2125 "./sql3.y"
    { (yyval.subtok) = J_INNER; }
    break;

  case 525:
#line 2126 "./sql3.y"
    { (yyval.subtok) = OJ_LEFT; }
    break;

  case 526:
#line 2127 "./sql3.y"
    { (yyval.subtok) = OJ_RIGHT; }
    break;

  case 527:
#line 2129 "./sql3.y"
    { (yyval.subtok) = OJ_FULL; }
    break;

  case 528:
#line 2130 "./sql3.y"
    { (yyval.subtok) = J_INNER; }
    break;

  case 529:
#line 2131 "./sql3.y"
    { (yyval.subtok) = J_CROSS; }
    break;

  case 532:
#line 2141 "./sql3.y"
    { (yyval.join).type = (yyvsp[(2) - (2)].subtok);
		  (yyval.join).natural = 1;
		}
    break;

  case 533:
#line 2145 "./sql3.y"
    { (yyval.join).type = (yyvsp[(1) - (1)].subtok);
		  (yyval.join).natural = 0;
		}
    break;

  case 534:
#line 2151 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 535:
#line 2152 "./sql3.y"
    { (yyval.tree) = (yyvsp[(2) - (3)].tree); }
    break;

  case 536:
#line 2153 "./sql3.y"
    { (yyval.tree) = (yyvsp[(2) - (3)].tree); }
    break;

  case 537:
#line 2158 "./sql3.y"
    {
		  (yyval.tree) = t_listst (6, JOINED_TABLE, (yyvsp[(2) - (5)].join).natural, (yyvsp[(2) - (5)].join).type,
			(yyvsp[(1) - (5)].box), (yyvsp[(4) - (5)].box), (yyvsp[(5) - (5)].tree));
		}
    break;

  case 538:
#line 2165 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 539:
#line 2166 "./sql3.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 540:
#line 2168 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (2, JC_USING, t_list_to_array ((yyvsp[(3) - (4)].list))); }
    break;

  case 541:
#line 2172 "./sql3.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 542:
#line 2176 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 543:
#line 2178 "./sql3.y"
    {
			(yyval.tree) = (ST*) t_list_to_array(t_CONS (t_list_to_array ((yyvsp[(3) - (3)].list)), NULL));
		}
    break;

  case 544:
#line 2182 "./sql3.y"
    {
			dk_set_t group_by_full = 0;
			dk_set_t first_group_by_key = (dk_set_t)(yyvsp[(5) - (6)].list);
			while (first_group_by_key)
			{
			  group_by_full = t_NCONC (group_by_full, t_CONS (t_list_to_array (first_group_by_key), NULL));
			  first_group_by_key = first_group_by_key->next;
			}
			group_by_full = t_NCONC (group_by_full, t_CONS (t_list_to_array (NULL), NULL));
			(yyval.tree) = (ST*) t_list_to_array (group_by_full);
		}
    break;

  case 545:
#line 2194 "./sql3.y"
    {
		  ST ** etalon = (ST**) t_list_to_array ((yyvsp[(5) - (6)].list));
		  dk_set_t group_by_full = 0;
		  int inx;
		  for (inx = 0; inx <= BOX_ELEMENTS_INT (etalon); inx++)
		    {
		      subseq_t * ss = ss_iter_init ((caddr_t*) etalon, BOX_ELEMENTS (etalon) - inx);
		      for (;ss_iter_next(ss);)
		        {
		          dk_set_t group_by_keys = 0;
		          int inx2;
		          DO_BOX (ST*, st2, inx2, ss->ss_state)
		            {
		              group_by_keys = t_NCONC (group_by_keys, t_CONS (st2, NULL));
		            }
		          END_DO_BOX;
		          group_by_full = t_NCONC (group_by_full,
					t_CONS(t_list_to_array (group_by_keys), NULL));
				}
			  ss_iter_free (ss);
			}
		  (yyval.tree) = (ST*) t_list_to_array (group_by_full);
		}
    break;

  case 546:
#line 2228 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 547:
#line 2229 "./sql3.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 548:
#line 2233 "./sql3.y"
    { (yyval.subtok) = 0; }
    break;

  case 549:
#line 2234 "./sql3.y"
    { (yyval.subtok) = PL_EXCLUSIVE; }
    break;

  case 550:
#line 2235 "./sql3.y"
    { (yyval.subtok) = sqlp_xml_select_flags ((yyvsp[(3) - (3)].box), NULL); }
    break;

  case 551:
#line 2236 "./sql3.y"
    { (yyval.subtok) = sqlp_xml_select_flags ((yyvsp[(3) - (4)].box), (yyvsp[(4) - (4)].box)); }
    break;

  case 552:
#line 2243 "./sql3.y"
    { BIN_OP ((yyval.tree), BOP_OR, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)) }
    break;

  case 553:
#line 2245 "./sql3.y"
    { BIN_OP ((yyval.tree), BOP_AND, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)) }
    break;

  case 554:
#line 2247 "./sql3.y"
    { UN_OP ((yyval.tree), BOP_NOT, (yyvsp[(2) - (2)].tree)) }
    break;

  case 555:
#line 2248 "./sql3.y"
    { (yyval.tree) = (yyvsp[(2) - (3)].tree); }
    break;

  case 565:
#line 2265 "./sql3.y"
    {
		  ST *eq_op;
		  BIN_OP (eq_op, BOP_EQ, (ST *) t_box_num_and_zero (0), (yyvsp[(1) - (1)].tree));
		  NEGATE ((yyval.tree), eq_op);
                }
    break;

  case 566:
#line 2274 "./sql3.y"
    { BIN_OP ((yyval.tree), (yyvsp[(2) - (3)].subtok), (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree));
		  /*IvAn*/ if ((yyval.tree)->type == BOP_NEQ)
		    {
		      ST *cmp_tree = (yyval.tree);
		      (yyval.tree)->type = BOP_EQ;
		      NEGATE ((yyval.tree), cmp_tree);
		    }/* */
		  }
    break;

  case 567:
#line 2297 "./sql3.y"
    { ST *copy = (ST *) t_box_copy_tree ((caddr_t) (yyvsp[(1) - (6)].tree));
		  ST *low_test;
		  ST *high_test;
		  BIN_OP (low_test, BOP_LT, (yyvsp[(1) - (6)].tree), (yyvsp[(4) - (6)].tree));
		  BIN_OP (high_test, BOP_GT, copy, (yyvsp[(6) - (6)].tree));
		  BIN_OP ((yyval.tree), BOP_OR, low_test, high_test);
		}
    break;

  case 568:
#line 2305 "./sql3.y"
    { ST *copy = (ST *) t_box_copy_tree ((caddr_t) (yyvsp[(1) - (5)].tree));
		  ST *low_test;
		  ST *high_test;
		  BIN_OP (low_test, BOP_GTE, (yyvsp[(1) - (5)].tree), (yyvsp[(3) - (5)].tree));
		  BIN_OP (high_test, BOP_LTE, copy, (yyvsp[(5) - (5)].tree));
		  BIN_OP ((yyval.tree), BOP_AND, low_test, high_test);
		}
    break;

  case 569:
#line 2316 "./sql3.y"
    { ST* tmp;
		  BIN_OP (tmp, BOP_LIKE, (yyvsp[(1) - (5)].tree), (ST *) (yyvsp[(4) - (5)].tree));
		  tmp->_.bin_exp.more = (yyvsp[(5) - (5)].box);
		  NEGATE ((yyval.tree), tmp);
		}
    break;

  case 570:
#line 2322 "./sql3.y"
    {
		  BIN_OP ((yyval.tree), BOP_LIKE, (yyvsp[(1) - (4)].tree), (ST *) (yyvsp[(3) - (4)].tree));
		  (yyval.tree)->_.bin_exp.more = (yyvsp[(4) - (4)].box);
		}
    break;

  case 571:
#line 2329 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 572:
#line 2331 "./sql3.y"
    {
		  if (!DV_STRINGP ((yyvsp[(2) - (2)].box)) || box_length ((yyvsp[(2) - (2)].box)) != 2)
		    yy_new_error ("Invalid escape character in LIKE", "37000", "SQ136");
		  (yyval.box) = (yyvsp[(2) - (2)].box);
	  	}
    break;

  case 573:
#line 2337 "./sql3.y"
    {
		  if (!DV_STRINGP ((yyvsp[(3) - (4)].box)) || box_length ((yyvsp[(3) - (4)].box)) != 2)
		    yy_new_error ("Invalid escape character in LIKE", "37000", "SQ136");
		  (yyval.box) = (yyvsp[(3) - (4)].box);
		}
    break;

  case 574:
#line 2346 "./sql3.y"
    { ST *tmp;
		  BIN_OP (tmp, BOP_NULL, (yyvsp[(1) - (4)].tree), NULL);
		  NEGATE ((yyval.tree), tmp);
		}
    break;

  case 575:
#line 2350 "./sql3.y"
    { BIN_OP ((yyval.tree), BOP_NULL, (yyvsp[(1) - (3)].tree), NULL); }
    break;

  case 576:
#line 2355 "./sql3.y"
    {
		  ST *in = NULL;
		  in = SUBQ_PRED (SOME_PRED, (yyvsp[(1) - (4)].tree), sqlp_wpar_nonselect ((yyvsp[(4) - (4)].tree)), BOP_EQ, NULL);
		  NEGATE ((yyval.tree), in);
		}
    break;

  case 577:
#line 2361 "./sql3.y"
    {
		  (yyval.tree) = SUBQ_PRED (SOME_PRED, (yyvsp[(1) - (3)].tree), sqlp_wpar_nonselect ((yyvsp[(3) - (3)].tree)), BOP_EQ, NULL); }
    break;

  case 578:
#line 2364 "./sql3.y"
    { (yyval.tree) = sqlp_in_exp ((yyvsp[(1) - (6)].tree), (yyvsp[(5) - (6)].list), 1);
		}
    break;

  case 579:
#line 2367 "./sql3.y"
    { (yyval.tree) = sqlp_in_exp ((yyvsp[(1) - (5)].tree), (yyvsp[(4) - (5)].list), 0);
		}
    break;

  case 580:
#line 2380 "./sql3.y"
    { (yyval.tree) = SUBQ_PRED ((yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].tree), sqlp_wpar_nonselect ((yyvsp[(4) - (4)].tree)), (yyvsp[(2) - (4)].subtok), NULL); }
    break;

  case 581:
#line 2384 "./sql3.y"
    { (yyval.intval) = SOME_PRED; }
    break;

  case 582:
#line 2385 "./sql3.y"
    { (yyval.intval) = ALL_PRED; }
    break;

  case 583:
#line 2386 "./sql3.y"
    { (yyval.intval) = SOME_PRED; }
    break;

  case 584:
#line 2391 "./sql3.y"
    {
		  /* exists (select * ..) becomes exists (select 1 ...) */
		  ST * ext_subq = (yyvsp[(2) - (2)].tree);
		  ext_subq->_.select_stmt.selection = (caddr_t*) t_list (1, t_box_num (1));
		  ext_subq->_.select_stmt.top = NULL;
		  (yyval.tree) = (ST *) SUBQ_PRED (EXISTS_PRED, NULL, ext_subq, NULL, NULL); }
    break;

  case 585:
#line 2400 "./sql3.y"
    { (yyval.tree) = (ST *) t_list (2, SCALAR_SUBQ, sqlp_add_top_1 ((yyvsp[(1) - (1)].tree))); }
    break;

  case 586:
#line 2405 "./sql3.y"
    { (yyval.tree) = (yyvsp[(2) - (3)].tree); }
    break;

  case 587:
#line 2406 "./sql3.y"
    { (yyval.tree) = (yyvsp[(3) - (4)].tree); }
    break;

  case 588:
#line 2411 "./sql3.y"
    { BIN_OP ((yyval.tree), BOP_MINUS, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)) }
    break;

  case 589:
#line 2412 "./sql3.y"
    { BIN_OP ((yyval.tree), BOP_PLUS, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)) }
    break;

  case 590:
#line 2413 "./sql3.y"
    { BIN_OP ((yyval.tree), BOP_TIMES, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)) }
    break;

  case 591:
#line 2414 "./sql3.y"
    { BIN_OP ((yyval.tree), BOP_DIV, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)) }
    break;

  case 592:
#line 2415 "./sql3.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 593:
#line 2416 "./sql3.y"
    { if (sqlp_is_num_lit ((caddr_t)((yyvsp[(2) - (2)].tree)))) (yyval.tree) = sqlp_minus ((caddr_t)((yyvsp[(2) - (2)].tree)));
				          else BIN_OP ((yyval.tree), BOP_MINUS, (ST*) t_box_num (0), (yyvsp[(2) - (2)].tree)) }
    break;

  case 596:
#line 2420 "./sql3.y"
    { (yyval.tree) = (sql_tree_t *) (yyvsp[(1) - (1)].tree); }
    break;

  case 599:
#line 2426 "./sql3.y"
    { (yyval.tree) = (sql_tree_t *) (yyvsp[(1) - (1)].box); }
    break;

  case 602:
#line 2429 "./sql3.y"
    { (yyval.tree) = (yyvsp[(2) - (3)].tree); }
    break;

  case 603:
#line 2431 "./sql3.y"
    { dk_set_t exps = t_CONS ((yyvsp[(2) - (5)].tree), (yyvsp[(4) - (5)].list));
		  (yyval.tree) = t_listst (2, COMMA_EXP, t_list_to_array (exps));
		}
    break;

  case 616:
#line 2449 "./sql3.y"
    { (yyval.tree) = (sql_tree_t *) (yyvsp[(1) - (1)].box); }
    break;

  case 619:
#line 2452 "./sql3.y"
    { (yyval.tree) = (yyvsp[(2) - (3)].tree); }
    break;

  case 620:
#line 2454 "./sql3.y"
    { dk_set_t exps = t_CONS ((yyvsp[(2) - (5)].tree), (yyvsp[(4) - (5)].list));
		  (yyval.tree) = t_listst (2, COMMA_EXP, t_list_to_array (exps));
		}
    break;

  case 633:
#line 2473 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("_cvt"),
			t_list (2,
			  t_list (2, QUOTE, (yyvsp[(3) - (6)].tree)),
			  sqlp_wrapper_sqlxml_assign ((yyvsp[(5) - (6)].tree)) ) );
		}
    break;

  case 634:
#line 2481 "./sql3.y"
    { (yyval.strval) = NULL; }
    break;

  case 635:
#line 2482 "./sql3.y"
    { (yyval.strval) = (yyvsp[(2) - (2)].strval); }
    break;

  case 636:
#line 2487 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("_cvt"),
			t_list ((yyvsp[(6) - (7)].strval) == NULL ? 2 : 3, t_list (2, QUOTE, (yyvsp[(5) - (7)].tree)),
			sqlp_wrapper_sqlxml_assign ((yyvsp[(3) - (7)].tree)), (yyvsp[(6) - (7)].strval) ) );
		}
    break;

  case 637:
#line 2500 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (5, XML_COL, (yyvsp[(1) - (3)].box), (yyvsp[(2) - (3)].box), (yyvsp[(3) - (3)].box), XML_COL_ATTR); }
    break;

  case 638:
#line 2502 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (5, XML_COL, (yyvsp[(1) - (3)].box), (yyvsp[(2) - (3)].box), t_sym_string(""), sqlp_xml_col_directive ((yyvsp[(3) - (3)].box))); }
    break;

  case 639:
#line 2504 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (5, XML_COL, (yyvsp[(1) - (4)].box), (yyvsp[(2) - (4)].box), (yyvsp[(3) - (4)].box), sqlp_xml_col_directive ((yyvsp[(4) - (4)].box))); }
    break;

  case 640:
#line 2509 "./sql3.y"
    { (yyval.tree) = t_listst (5, BOP_AS, (yyvsp[(1) - (4)].tree), NULL, (yyvsp[(3) - (4)].box), (yyvsp[(4) - (4)].tree)); }
    break;

  case 641:
#line 2511 "./sql3.y"
    { (yyval.tree) = t_listst (5, BOP_AS, (yyvsp[(1) - (3)].tree), NULL, (yyvsp[(3) - (3)].box), NULL); }
    break;

  case 642:
#line 2513 "./sql3.y"
    { (yyval.tree) = t_listst (5, BOP_AS, (yyvsp[(1) - (2)].tree), NULL, (yyvsp[(2) - (2)].box), NULL); }
    break;

  case 643:
#line 2515 "./sql3.y"
    { (yyval.tree) = t_listst (6, BOP_AS, (yyvsp[(1) - (3)].tree), NULL, sqlp_xml_col_name ((yyvsp[(3) - (3)].tree)), NULL, (yyvsp[(3) - (3)].tree)); }
    break;

  case 644:
#line 2517 "./sql3.y"
    { (yyval.tree) = t_listst (5, BOP_AS, (yyvsp[(1) - (3)].tree), NULL, t_sym_string ((yyvsp[(3) - (3)].box)), NULL); }
    break;

  case 645:
#line 2519 "./sql3.y"
    { (yyval.tree) = t_listst (5, BOP_AS, (yyvsp[(1) - (2)].tree), NULL, t_sym_string ((yyvsp[(2) - (2)].box)), NULL); }
    break;

  case 646:
#line 2524 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("aref"),
		    t_list_to_array (t_CONS ((yyvsp[(1) - (2)].tree), (yyvsp[(2) - (2)].list))) ); }
    break;

  case 648:
#line 2531 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("aref"),
		    t_list_to_array (t_CONS ((yyvsp[(1) - (2)].tree), (yyvsp[(2) - (2)].list))) ); }
    break;

  case 649:
#line 2536 "./sql3.y"
    { (yyval.list) = NULL; }
    break;

  case 651:
#line 2544 "./sql3.y"
    { (yyval.box) = sqlp_proc_name (NULL, 0, NULL, 0, NULL, (yyvsp[(1) - (1)].box)); }
    break;

  case 652:
#line 2545 "./sql3.y"
    { (yyval.box) = sqlp_proc_name (NULL, 0, (yyvsp[(1) - (3)].box), box_length ((yyvsp[(1) - (3)].box)), NULL, (yyvsp[(3) - (3)].box)); }
    break;

  case 653:
#line 2546 "./sql3.y"
    { (yyval.box) = sqlp_proc_name ((yyvsp[(1) - (5)].box), box_length ((yyvsp[(1) - (5)].box)), (yyvsp[(3) - (5)].box), box_length ((yyvsp[(3) - (5)].box)), NULL, (yyvsp[(5) - (5)].box)); }
    break;

  case 654:
#line 2547 "./sql3.y"
    { (yyval.box) = sqlp_proc_name ((yyvsp[(1) - (7)].box), box_length ((yyvsp[(1) - (7)].box)), (yyvsp[(3) - (7)].box), box_length ((yyvsp[(3) - (7)].box)), (yyvsp[(5) - (7)].box), (yyvsp[(7) - (7)].box)); }
    break;

  case 655:
#line 2548 "./sql3.y"
    { (yyval.box) = sqlp_proc_name ((yyvsp[(1) - (4)].box), box_length ((yyvsp[(1) - (4)].box)), NULL, 0, NULL, (yyvsp[(4) - (4)].box)); }
    break;

  case 656:
#line 2549 "./sql3.y"
    { (yyval.box) = sqlp_proc_name ((yyvsp[(1) - (6)].box), box_length ((yyvsp[(1) - (6)].box)), NULL, 0, (yyvsp[(4) - (6)].box), (yyvsp[(6) - (6)].box)); }
    break;

  case 657:
#line 2550 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ("left"); }
    break;

  case 658:
#line 2551 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ("right"); }
    break;

  case 659:
#line 2552 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ("log"); }
    break;

  case 660:
#line 2557 "./sql3.y"
    { (yyval.list) = t_CONS (t_list (3, KWD_PARAM, (yyvsp[(1) - (3)].box), (yyvsp[(3) - (3)].tree)), NULL);}
    break;

  case 661:
#line 2558 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (5)].list), t_CONS (t_list (3, KWD_PARAM, (yyvsp[(3) - (5)].box), (yyvsp[(5) - (5)].tree)), NULL)); }
    break;

  case 662:
#line 2563 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 663:
#line 2564 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 664:
#line 2565 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL));}
    break;

  case 665:
#line 2569 "./sql3.y"
    { (yyval.list) = NULL; }
    break;

  case 666:
#line 2570 "./sql3.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); }
    break;

  case 667:
#line 2571 "./sql3.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); }
    break;

  case 668:
#line 2572 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].list)); }
    break;

  case 669:
#line 2574 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].list)); }
    break;

  case 670:
#line 2575 "./sql3.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); }
    break;

  case 671:
#line 2580 "./sql3.y"
    {
		  ST **arglist = (ST **)t_list_to_array ((yyvsp[(3) - (4)].list));
		  ST *fun_ref = sqlp_make_user_aggregate_fun_ref ((yyvsp[(1) - (4)].box), arglist, 0);
		  if (NULL != fun_ref)
		    (yyval.tree) = fun_ref;
		  else
		    {
		      (yyval.tree) = t_listst (3, CALL_STMT, (yyvsp[(1) - (4)].box), arglist);
		      (yyval.tree) = sqlp_patch_call_if_special ((yyval.tree));
		    }
		}
    break;

  case 672:
#line 2592 "./sql3.y"
    {
		  (yyval.tree) = t_listst (3, CALL_STMT,
		      t_sqlp_box_id_upcase ((yyvsp[(1) - (8)].subtok) == SQL_FN_TIMESTAMPADD ? "timestampadd" : "timestampdiff"),
		      t_listst (3, t_box_num((yyvsp[(3) - (8)].subtok)), (yyvsp[(5) - (8)].tree), (yyvsp[(7) - (8)].tree)));
		}
    break;

  case 673:
#line 2598 "./sql3.y"
    {
		  (yyval.tree) = t_listst (3, CALL_STMT,
		      t_sqlp_box_id_upcase ("__extract"),
		      t_listst (2, t_box_string ((yyvsp[(3) - (6)].box)), (yyvsp[(5) - (6)].tree)));
		}
    break;

  case 674:
#line 2604 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, (yyvsp[(2) - (6)].box), t_list_to_array ((yyvsp[(4) - (6)].list))); }
    break;

  case 675:
#line 2606 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("left"), t_list_to_array ((yyvsp[(4) - (6)].list))); }
    break;

  case 676:
#line 2608 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("right"), t_list_to_array ((yyvsp[(4) - (6)].list))); }
    break;

  case 677:
#line 2610 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("log"), t_list_to_array ((yyvsp[(4) - (6)].list))); }
    break;

  case 678:
#line 2612 "./sql3.y"
    {
		  if (stricmp ((yyvsp[(2) - (8)].box), "POSITION"))
		    yyerror ("syntax error");
		  (yyval.tree) = t_listst (3, CALL_STMT, (yyvsp[(2) - (8)].box),
		      t_listst (2, (yyvsp[(4) - (8)].tree), (yyvsp[(6) - (8)].tree)));
		}
    break;

  case 679:
#line 2619 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, (yyvsp[(2) - (6)].box), t_list_to_array ((yyvsp[(4) - (6)].list))); }
    break;

  case 680:
#line 2621 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, (yyvsp[(2) - (3)].box), t_list_to_array (NULL)); }
    break;

  case 681:
#line 2623 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
			t_sqlp_box_id_upcase ("get_user"), t_list_to_array ((yyvsp[(4) - (6)].list))); }
    break;

  case 682:
#line 2626 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
			t_sqlp_box_id_upcase ("chr"), t_list_to_array ((yyvsp[(4) - (6)].list))); }
    break;

  case 683:
#line 2629 "./sql3.y"
    {
		  (yyval.tree) = t_listst (3, CALL_STMT,
		      t_sqlp_box_id_upcase ((yyvsp[(2) - (10)].subtok) == SQL_FN_TIMESTAMPADD ? "timestampadd" : "timestampdiff"),
		      t_listst (3, t_box_num((yyvsp[(4) - (10)].subtok)), (yyvsp[(6) - (10)].tree), (yyvsp[(8) - (10)].tree)));
		}
    break;

  case 684:
#line 2635 "./sql3.y"
    {
		  caddr_t data_type = sqlc_convert_odbc_to_sql_type ((yyvsp[(6) - (8)].box));
		  if (!data_type)
		    yyerror ("Not valid data type in CONVERT ODBC Scalar function");
		  (yyval.tree) = t_listst (3, CALL_STMT,
		      t_sqlp_box_id_upcase ("_cvt"),
		      t_listst (2, t_list (2, QUOTE, data_type), (yyvsp[(4) - (8)].tree)));
		}
    break;

  case 685:
#line 2644 "./sql3.y"
    {
		  (yyval.tree) = t_listst (3, CALL_STMT,
		      t_sqlp_box_id_upcase ("__extract"),
		      t_listst (2, t_box_string ((yyvsp[(4) - (8)].box)), (yyvsp[(6) - (8)].tree)));
		}
    break;

  case 686:
#line 2650 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, t_list (1, (yyvsp[(3) - (7)].tree)),
			t_list_to_array ((yyvsp[(6) - (7)].list))); }
    break;

  case 687:
#line 2653 "./sql3.y"
    {
		  (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("curdate"), t_list (0));
		}
    break;

  case 688:
#line 2657 "./sql3.y"
    {
		  (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("curtime"), t_list (0));
		}
    break;

  case 689:
#line 2661 "./sql3.y"
    {
		  (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("curtime"), t_list (1, (yyvsp[(3) - (4)].tree)));
		}
    break;

  case 690:
#line 2665 "./sql3.y"
    {
		  (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("curdatetime"), t_list (0));
		}
    break;

  case 691:
#line 2669 "./sql3.y"
    {
		  (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("curdatetime"), t_list (1, (yyvsp[(3) - (4)].tree)));
		}
    break;

  case 692:
#line 2673 "./sql3.y"
    {
		  caddr_t bit = t_box_num (0);
		  caddr_t bit_index = t_box_num (0);
		  (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("__grouping"), t_list (3, (yyvsp[(3) - (4)].tree), bit, bit_index));
		}
    break;

  case 693:
#line 2683 "./sql3.y"
    { (yyval.tree) = t_listst (4, CALL_STMT, (yyvsp[(2) - (3)].strval), t_list_to_array (NULL), (yyvsp[(1) - (3)].box)); }
    break;

  case 694:
#line 2685 "./sql3.y"
    { (yyval.tree) = t_listst (4, CALL_STMT, (yyvsp[(2) - (6)].strval), t_list_to_array ((yyvsp[(4) - (6)].list)), (yyvsp[(1) - (6)].box)); }
    break;

  case 695:
#line 2705 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
			t_sqlp_box_id_upcase (obe_keyword_to_bif_fun_name ((yyvsp[(2) - (4)].box))),
			t_list (1, (yyvsp[(3) - (4)].box)));
		}
    break;

  case 696:
#line 2710 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (3, CALL_STMT, t_sqlp_box_id_upcase ("get_keyword"),
				   t_list (2, (yyvsp[(2) - (3)].box), t_list (3, COL_DOTTED, NULL, t_sqlp_box_id_upcase ("params")))); }
    break;

  case 697:
#line 2715 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 698:
#line 2716 "./sql3.y"
    { t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 699:
#line 2720 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 700:
#line 2721 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 701:
#line 2722 "./sql3.y"
    { t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 702:
#line 2723 "./sql3.y"
    { t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 705:
#line 2729 "./sql3.y"
    { (yyval.box) = t_listbox (3, CALL_STMT,
				t_sqlp_box_id_upcase ("get_user"), t_list (0)); }
    break;

  case 707:
#line 2735 "./sql3.y"
    { (yyval.box) = (caddr_t) (yyvsp[(1) - (1)].tree); }
    break;

  case 708:
#line 2740 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (2, SIMPLE_CASE,
			t_list_to_array (t_CONS ((yyvsp[(2) - (4)].tree), (yyvsp[(3) - (4)].list)))); }
    break;

  case 709:
#line 2746 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (2, SEARCHED_CASE, t_list_to_array ((yyvsp[(2) - (3)].list))); }
    break;

  case 710:
#line 2750 "./sql3.y"
    { (yyval.list) =  (yyvsp[(1) - (1)].list); }
    break;

  case 711:
#line 2751 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].list)); }
    break;

  case 712:
#line 2755 "./sql3.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); }
    break;

  case 713:
#line 2756 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].list)); }
    break;

  case 714:
#line 2761 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(2) - (4)].tree), t_CONS ((yyvsp[(4) - (4)].tree), NULL)); }
    break;

  case 715:
#line 2763 "./sql3.y"
    { (yyval.list) = t_CONS ( t_list (2, QUOTE, NULL), t_CONS ((yyvsp[(2) - (2)].tree), NULL)); }
    break;

  case 716:
#line 2768 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(2) - (4)].tree), t_CONS ((yyvsp[(4) - (4)].tree), NULL)); }
    break;

  case 717:
#line 2770 "./sql3.y"
    { (yyval.list) = t_CONS ( t_list (2, QUOTE, NULL), t_CONS ((yyvsp[(2) - (2)].tree), NULL)); }
    break;

  case 718:
#line 2775 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (2, COALESCE_EXP, t_list_to_array ((yyvsp[(3) - (4)].list))); }
    break;

  case 719:
#line 2780 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (2, SIMPLE_CASE,
		  	t_list (5, (yyvsp[(3) - (6)].tree), (yyvsp[(5) - (6)].tree), t_alloc_box (0, DV_DB_NULL),
			t_list (2, QUOTE, NULL), t_box_copy_tree ((caddr_t) (yyvsp[(3) - (6)].tree)))); }
    break;

  case 721:
#line 2788 "./sql3.y"
    { (yyval.box) = t_listbox (3, PARAM_WITH_IND, (yyvsp[(1) - (2)].box), (yyvsp[(2) - (2)].box)); }
    break;

  case 722:
#line 2790 "./sql3.y"
    { (yyval.box) = t_listbox (3, PARAM_WITH_IND, (yyvsp[(1) - (3)].box), (yyvsp[(3) - (3)].box)); }
    break;

  case 723:
#line 2795 "./sql3.y"
    {
		  ST **arglist = (ST **)(t_list_to_array ((yyvsp[(4) - (5)].list)));
		  (yyval.tree) = sqlp_make_user_aggregate_fun_ref ((yyvsp[(2) - (5)].box), arglist, 1);
		}
    break;

  case 724:
#line 2800 "./sql3.y"
    { FN_REF ((yyval.tree), (yyvsp[(1) - (5)].subtok), 1, (yyvsp[(4) - (5)].tree)) }
    break;

  case 725:
#line 2801 "./sql3.y"
    { FN_REF ((yyval.tree), (yyvsp[(1) - (5)].subtok), 0, (yyvsp[(4) - (5)].tree)) }
    break;

  case 726:
#line 2802 "./sql3.y"
    { FN_REF ((yyval.tree), (yyvsp[(1) - (4)].subtok), 0, (yyvsp[(3) - (4)].tree)) }
    break;

  case 734:
#line 2813 "./sql3.y"
    { (yyval.box) = (caddr_t) t_NULLCONST; }
    break;

  case 735:
#line 2814 "./sql3.y"
    { (yyval.box) = ((caddr_t *)(yyvsp[(3) - (3)].tree))[0]; }
    break;

  case 736:
#line 2815 "./sql3.y"
    { (yyval.box) = (caddr_t) DV_XML_ENTITY; }
    break;

  case 737:
#line 2816 "./sql3.y"
    { (yyval.box) = (caddr_t) DV_RDF; }
    break;

  case 738:
#line 2817 "./sql3.y"
    { (yyval.box) = (caddr_t) DV_ARRAY_OF_POINTER; }
    break;

  case 743:
#line 2825 "./sql3.y"
    { (yyval.box) = t_box_num_and_zero (-1 * unbox ((yyvsp[(2) - (2)].box))); }
    break;

  case 744:
#line 2826 "./sql3.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 746:
#line 2829 "./sql3.y"
    {
		  switch (DV_TYPE_OF ((yyvsp[(2) - (2)].box)))
		    {
		      case DV_NUMERIC:
			    {
			      numeric_t y = t_numeric_allocate ();
			      numeric_negate (y, (numeric_t) (yyvsp[(2) - (2)].box));
			      (yyval.box) = (caddr_t) y;
			      break;
			    }
		      case DV_DOUBLE_FLOAT:  (yyval.box) = t_box_double (-1.0 * unbox_double ((yyvsp[(2) - (2)].box))); break;
		    }
		}
    break;

  case 747:
#line 2842 "./sql3.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 749:
#line 2844 "./sql3.y"
    { (yyval.box) = (caddr_t) t_NULLCONST; }
    break;

  case 750:
#line 2850 "./sql3.y"
    { (yyval.strval) = sqlp_table_name (NULL, 0, NULL, 0, (yyvsp[(1) - (1)].box), 1); }
    break;

  case 751:
#line 2851 "./sql3.y"
    { (yyval.strval) = sqlp_table_name (NULL, 0, (yyvsp[(1) - (3)].box), box_length ((yyvsp[(1) - (3)].box)), (yyvsp[(3) - (3)].box), 1); }
    break;

  case 752:
#line 2852 "./sql3.y"
    { (yyval.strval) = sqlp_table_name ((yyvsp[(1) - (5)].box), box_length ((yyvsp[(1) - (5)].box)), (yyvsp[(3) - (5)].box), box_length ((yyvsp[(3) - (5)].box)), (yyvsp[(5) - (5)].box), 1); }
    break;

  case 753:
#line 2853 "./sql3.y"
    { (yyval.strval) = sqlp_table_name ((yyvsp[(1) - (4)].box), box_length ((yyvsp[(1) - (4)].box)), NULL, 0, (yyvsp[(4) - (4)].box), 1); }
    break;

  case 754:
#line 2857 "./sql3.y"
    { (yyval.strval) = sqlp_table_name (NULL, 0, NULL, 0, (yyvsp[(1) - (1)].box), 0); }
    break;

  case 755:
#line 2858 "./sql3.y"
    { (yyval.strval) = sqlp_table_name (NULL, 0, (yyvsp[(1) - (3)].box), box_length ((yyvsp[(1) - (3)].box)), (yyvsp[(3) - (3)].box), 0); }
    break;

  case 756:
#line 2859 "./sql3.y"
    { (yyval.strval) = sqlp_table_name ((yyvsp[(1) - (5)].box), box_length ((yyvsp[(1) - (5)].box)), (yyvsp[(3) - (5)].box), box_length ((yyvsp[(3) - (5)].box)), (yyvsp[(5) - (5)].box), 0); }
    break;

  case 757:
#line 2860 "./sql3.y"
    { (yyval.strval) = sqlp_table_name ((yyvsp[(1) - (4)].box), box_length ((yyvsp[(1) - (4)].box)), NULL, 0, (yyvsp[(4) - (4)].box), 0); }
    break;

  case 758:
#line 2864 "./sql3.y"
    { (yyval.strval) = (bif_find((yyvsp[(1) - (1)].box)) ? (yyvsp[(1) - (1)].box) : sqlp_new_table_name (NULL, 0, NULL, 0, (yyvsp[(1) - (1)].box))); }
    break;

  case 759:
#line 2865 "./sql3.y"
    { (yyval.strval) = sqlp_new_table_name (NULL, 0, (yyvsp[(1) - (3)].box), box_length ((yyvsp[(1) - (3)].box)), (yyvsp[(3) - (3)].box)); }
    break;

  case 760:
#line 2866 "./sql3.y"
    { (yyval.strval) = sqlp_new_table_name ((yyvsp[(1) - (5)].box), box_length ((yyvsp[(1) - (5)].box)), (yyvsp[(3) - (5)].box), box_length ((yyvsp[(3) - (5)].box)), (yyvsp[(5) - (5)].box)); }
    break;

  case 761:
#line 2867 "./sql3.y"
    { (yyval.strval) = sqlp_new_table_name ((yyvsp[(1) - (4)].box), box_length ((yyvsp[(1) - (4)].box)), NULL, 0, (yyvsp[(4) - (4)].box)); }
    break;

  case 762:
#line 2871 "./sql3.y"
    { (yyval.strval) = sqlp_new_table_name (NULL, 0, NULL, 0, (yyvsp[(1) - (1)].box)); }
    break;

  case 763:
#line 2872 "./sql3.y"
    { (yyval.strval) = sqlp_new_table_name (NULL, 0, (yyvsp[(1) - (3)].box), box_length ((yyvsp[(1) - (3)].box)), (yyvsp[(3) - (3)].box)); }
    break;

  case 764:
#line 2873 "./sql3.y"
    { (yyval.strval) = sqlp_new_table_name ((yyvsp[(1) - (5)].box), box_length ((yyvsp[(1) - (5)].box)), (yyvsp[(3) - (5)].box), box_length ((yyvsp[(3) - (5)].box)), (yyvsp[(5) - (5)].box)); }
    break;

  case 765:
#line 2874 "./sql3.y"
    { (yyval.strval) = sqlp_new_table_name ((yyvsp[(1) - (4)].box), box_length ((yyvsp[(1) - (4)].box)), NULL, 0, (yyvsp[(4) - (4)].box)); }
    break;

  case 766:
#line 2879 "./sql3.y"
    { (yyval.strval) = t_listbox (6, TABLE_DOTTED, (yyvsp[(1) - (2)].strval), NULL, sqlp_view_u_id (), sqlp_view_g_id (), (yyvsp[(2) - (2)].tree)); }
    break;

  case 767:
#line 2881 "./sql3.y"
    {
		  (yyval.strval) = t_listbox (6, TABLE_DOTTED, (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].box), sqlp_view_u_id (), sqlp_view_g_id (), (yyvsp[(4) - (4)].tree));
		}
    break;

  case 768:
#line 2885 "./sql3.y"
    {
		  (yyval.strval) = t_listbox (6, TABLE_DOTTED, (yyvsp[(1) - (3)].strval), (yyvsp[(2) - (3)].box), sqlp_view_u_id (), sqlp_view_g_id (), (yyvsp[(3) - (3)].tree));
		}
    break;

  case 769:
#line 2893 "./sql3.y"
    { (yyval.tree) = t_listst (3, COL_DOTTED, NULL, (yyvsp[(1) - (1)].box));
		}
    break;

  case 770:
#line 2896 "./sql3.y"
    { (yyval.tree) = t_listst (3, COL_DOTTED, c_pref (NULL, 0, NULL, 0, (yyvsp[(1) - (3)].box)), (yyvsp[(3) - (3)].box));
		}
    break;

  case 771:
#line 2899 "./sql3.y"
    { (yyval.tree) = t_listst (3, COL_DOTTED, c_pref (NULL, 0, (yyvsp[(1) - (5)].box), box_length ((yyvsp[(1) - (5)].box)), (yyvsp[(3) - (5)].box)), (yyvsp[(5) - (5)].box));
		}
    break;

  case 772:
#line 2902 "./sql3.y"
    { (yyval.tree) = t_listst (3, COL_DOTTED, c_pref ((yyvsp[(1) - (7)].box), box_length ((yyvsp[(1) - (7)].box)), (yyvsp[(3) - (7)].box), box_length ((yyvsp[(3) - (7)].box)), (yyvsp[(5) - (7)].box)), (yyvsp[(7) - (7)].box));
		}
    break;

  case 773:
#line 2905 "./sql3.y"
    { (yyval.tree) = t_listst (3, COL_DOTTED, c_pref ((yyvsp[(1) - (6)].box), box_length ((yyvsp[(1) - (6)].box)), NULL, 0, (yyvsp[(4) - (6)].box)), (yyvsp[(6) - (6)].box));
		}
    break;

  case 774:
#line 2908 "./sql3.y"
    { (yyval.tree) = t_listst (3, COL_DOTTED, (long) 0, STAR);
		}
    break;

  case 775:
#line 2911 "./sql3.y"
    { (yyval.tree) = t_listst (3, COL_DOTTED, c_pref (NULL, 0, NULL, 0, (yyvsp[(1) - (3)].box)), STAR);
		}
    break;

  case 776:
#line 2914 "./sql3.y"
    { (yyval.tree) = t_listst (3, COL_DOTTED, c_pref (NULL, 0, (yyvsp[(1) - (5)].box), box_length ((yyvsp[(1) - (5)].box)), (yyvsp[(3) - (5)].box)), STAR);
		}
    break;

  case 777:
#line 2917 "./sql3.y"
    { (yyval.tree) = t_listst (3, COL_DOTTED, c_pref ((yyvsp[(1) - (7)].box), box_length ((yyvsp[(1) - (7)].box)), (yyvsp[(3) - (7)].box), box_length ((yyvsp[(3) - (7)].box)), (yyvsp[(5) - (7)].box)), STAR);
		}
    break;

  case 778:
#line 2920 "./sql3.y"
    { (yyval.tree) = t_listst (3, COL_DOTTED, c_pref ((yyvsp[(1) - (6)].box), box_length ((yyvsp[(1) - (6)].box)), NULL, 0, (yyvsp[(4) - (6)].box)), STAR);
		}
    break;

  case 779:
#line 2927 "./sql3.y"
    { (yyval.tree) = sqlp_numeric (0, 0);
		}
    break;

  case 780:
#line 2930 "./sql3.y"
    { (yyval.tree) = sqlp_numeric ((yyvsp[(3) - (4)].box), 0);
		}
    break;

  case 781:
#line 2933 "./sql3.y"
    { (yyval.tree) = sqlp_numeric ((yyvsp[(3) - (6)].box), (yyvsp[(5) - (6)].box));
		}
    break;

  case 782:
#line 2936 "./sql3.y"
    { (yyval.tree) = sqlp_numeric (0, 0);
		}
    break;

  case 783:
#line 2939 "./sql3.y"
    { (yyval.tree) = sqlp_numeric ((yyvsp[(3) - (4)].box), 0);
		}
    break;

  case 784:
#line 2942 "./sql3.y"
    { (yyval.tree) = sqlp_numeric ((yyvsp[(3) - (6)].box), (yyvsp[(5) - (6)].box));
		}
    break;

  case 785:
#line 2945 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_LONG_INT, (long) 0);
		}
    break;

  case 786:
#line 2948 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_SHORT_INT, (long) 0);
		}
    break;

  case 787:
#line 2951 "./sql3.y"
    { (yyval.tree) = t_listst (3, (ptrlong) DV_INT64, t_box_num (19), t_box_num (0));
		}
    break;

  case 788:
#line 2954 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_DOUBLE_FLOAT, (long) 0);
		}
    break;

  case 789:
#line 2957 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_DOUBLE_FLOAT, (long) 0);
		}
    break;

  case 790:
#line 2960 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_SINGLE_FLOAT, (long) 0);
		}
    break;

  case 791:
#line 2963 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_DOUBLE_FLOAT, (long) 0);
		}
    break;

  case 792:
#line 2966 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_BLOB, t_box_num (0x7fffffff));
		}
    break;

  case 793:
#line 2969 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_BLOB_BIN, t_box_num (0x7fffffff));
		}
    break;

  case 794:
#line 2972 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_BIN, (long) 0);
		}
    break;

  case 795:
#line 2975 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_BIN, (yyvsp[(3) - (4)].box));
		}
    break;

  case 796:
#line 2978 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_BIN, (yyvsp[(3) - (4)].box));
		}
    break;

  case 797:
#line 2981 "./sql3.y"
    { (yyval.tree) = t_listst (3, (long) DV_TIMESTAMP, (long) 10, (long) 6);
		}
    break;

  case 798:
#line 2984 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_DATETIME, (long) 19);
		}
    break;

  case 799:
#line 2987 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_TIME, (long) 8);
		}
    break;

  case 800:
#line 2990 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_DATE, (long) 10);
		}
    break;

  case 801:
#line 2993 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_WIDE, (long) 1);
		}
    break;

  case 802:
#line 2996 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_WIDE, (yyvsp[(3) - (4)].box));
		}
    break;

  case 803:
#line 2999 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_WIDE, (long) 0);
		}
    break;

  case 804:
#line 3002 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_WIDE, (yyvsp[(3) - (4)].box));
		}
    break;

  case 805:
#line 3005 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_BLOB_WIDE, t_box_num (0x7fffffff));
		}
    break;

  case 806:
#line 3008 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_ANY, (long) 0); }
    break;

  case 807:
#line 3010 "./sql3.y"
    {
		  assert_ms_compat("Columns of type ANY (length) may be created only in MS-compatibility mode");
		  (yyval.tree) = t_listst (2, (long) DV_ANY, (long) 0);
		}
    break;

  case 808:
#line 3015 "./sql3.y"
    { (yyval.tree) = t_listst (2, (ptrlong) DV_IRI_ID, (yyvsp[(3) - (4)].box));
		}
    break;

  case 809:
#line 3018 "./sql3.y"
    { (yyval.tree) = t_listst (2, (ptrlong) DV_IRI_ID, (ptrlong)12); /* #i+10digits */
		}
    break;

  case 810:
#line 3021 "./sql3.y"
    { (yyval.tree) = t_listst (2, (ptrlong) DV_IRI_ID_8, (ptrlong)22); /* #i+20digits */
		}
    break;

  case 812:
#line 3028 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_LONG_STRING, (long) 1);
		}
    break;

  case 813:
#line 3031 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_LONG_STRING, (long) 0);
		}
    break;

  case 814:
#line 3034 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_LONG_STRING, (yyvsp[(3) - (4)].box));
		}
    break;

  case 815:
#line 3037 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_LONG_STRING, (yyvsp[(3) - (4)].box));
		}
    break;

  case 816:
#line 3042 "./sql3.y"
    { (yyval.box) = t_box_num (0x7fffffff); }
    break;

  case 817:
#line 3043 "./sql3.y"
    { (yyval.box) = (yyvsp[(3) - (4)].box); }
    break;

  case 818:
#line 3048 "./sql3.y"
    {
		  (yyval.tree) = t_listst (5, (long) DV_ARRAY_OF_POINTER, (yyvsp[(2) - (2)].box), 0, 0, (yyvsp[(1) - (2)].tree));
		}
    break;

  case 819:
#line 3051 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 820:
#line 3052 "./sql3.y"
    { (yyval.tree) = t_listst (4, (long) DV_OBJECT, 0, 0, (yyvsp[(1) - (1)].strval)); }
    break;

  case 822:
#line 3058 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_LONG_STRING, (long) 1);
		}
    break;

  case 823:
#line 3061 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_LONG_STRING, (long) 0);
		}
    break;

  case 824:
#line 3064 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_LONG_STRING, (yyvsp[(3) - (4)].box));
		}
    break;

  case 825:
#line 3067 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_LONG_STRING, (yyvsp[(3) - (4)].box));
		}
    break;

  case 826:
#line 3070 "./sql3.y"
    {
		  if (!CASEMODESTRCMP ((yyvsp[(1) - (1)].strval), xmltype_class_name))
		    {
		      (yyval.tree) = t_listst (5, (long) DV_BLOB, t_box_num (0x7fffffff), NULL, NULL,
			t_list (2, t_box_string ("xml_col"), t_box_string ("1")) );
		    }
		  else
		    (yyval.tree) = t_listst (4, (long) DV_OBJECT, 0, 0, (yyvsp[(1) - (1)].strval));
		}
    break;

  case 827:
#line 3080 "./sql3.y"
    {
		  if (!CASEMODESTRCMP ((yyvsp[(2) - (2)].strval), xmltype_class_name))
		    {
		      (yyval.tree) = t_listst (5, (long) DV_BLOB, t_box_num (0x7fffffff), NULL, NULL,
			t_list (2, t_box_string ("xml_col"), t_box_string ("1")) );
		    }
		  else
		    (yyval.tree) = t_listst (4, (long) DV_BLOB, t_box_num (0x7fffffff), NULL, (yyvsp[(2) - (2)].strval));
		}
    break;

  case 828:
#line 3090 "./sql3.y"
    {
		  (yyval.tree) = t_listst (4, (long) DV_BLOB, t_box_num (0x7fffffff), NULL, t_box_string ("DB.DBA.__ANY"));
		}
    break;

  case 829:
#line 3094 "./sql3.y"
    { (yyval.tree) = t_listst (5, (long) DV_BLOB, t_box_num (0x7fffffff), NULL, NULL,
		    t_list (2, t_box_string ("xml_col"), t_box_string ("1")));
		}
    break;

  case 830:
#line 3101 "./sql3.y"
    {
		  if (strchr ((yyvsp[(1) - (1)].box), '.'))
		    yy_new_error ("Dots not allowed inside column names", "37000", "SQ137");
		  else
		    (yyval.strval) = (yyvsp[(1) - (1)].box);
		}
    break;

  case 831:
#line 3109 "./sql3.y"
    {
		  assert_ms_compat("Qualified column names are allowed only in MS-compatibility mode.");
		  (yyval.strval) = (yyvsp[(7) - (7)].box);
		}
    break;

  case 832:
#line 3116 "./sql3.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].box); }
    break;

  case 833:
#line 3120 "./sql3.y"
    { (yyval.box) = (yyvsp[(1) - (1)].box); }
    break;

  case 834:
#line 3124 "./sql3.y"
    { (yyval.box) = (yyvsp[(1) - (1)].box); }
    break;

  case 835:
#line 3125 "./sql3.y"
    { (yyval.box) = (yyvsp[(1) - (1)].box); }
    break;

  case 836:
#line 3129 "./sql3.y"
    { (yyval.box) = (yyvsp[(1) - (1)].box); }
    break;

  case 837:
#line 3133 "./sql3.y"
    { (yyval.tree) = (ST *) 0; }
    break;

  case 838:
#line 3134 "./sql3.y"
    { (yyval.tree) = (ST *) (yyvsp[(1) - (1)].box); }
    break;

  case 839:
#line 3138 "./sql3.y"
    { (yyval.tree) = (ST *) 0; }
    break;

  case 840:
#line 3139 "./sql3.y"
    { (yyval.tree) = (ST *) (yyvsp[(2) - (2)].box); }
    break;

  case 841:
#line 3144 "./sql3.y"
    { (yyval.tree) = t_listst (4, OP_SHUTDOWN, (yyvsp[(2) - (2)].tree), NULL, NULL); }
    break;

  case 842:
#line 3146 "./sql3.y"
    { (yyval.tree) = t_listst (4, OP_CHECKPOINT, (yyvsp[(2) - (2)].tree), NULL, NULL); }
    break;

  case 843:
#line 3148 "./sql3.y"
    { (yyval.tree) = t_listst (4, OP_CHECKPOINT, (yyvsp[(2) - (3)].box), (yyvsp[(3) - (3)].box), NULL); }
    break;

  case 844:
#line 3150 "./sql3.y"
    { (yyval.tree) = t_listst (4, OP_BACKUP, (yyvsp[(2) - (2)].box), NULL, NULL); }
    break;

  case 845:
#line 3152 "./sql3.y"
    { (yyval.tree) = t_listst (4, OP_CHECK, NULL, NULL, NULL); }
    break;

  case 846:
#line 3154 "./sql3.y"
    { (yyval.tree) = t_listst (4, OP_SYNC_REPL, (yyvsp[(3) - (4)].tree), (yyvsp[(4) - (4)].tree), NULL); }
    break;

  case 847:
#line 3156 "./sql3.y"
    { (yyval.tree) = t_listst (4, OP_DISC_REPL, (yyvsp[(3) - (3)].tree), NULL, NULL); }
    break;

  case 848:
#line 3158 "./sql3.y"
    { (yyval.tree) = t_listst (4, OP_LOG_ON, NULL, NULL, NULL); }
    break;

  case 849:
#line 3160 "./sql3.y"
    { (yyval.tree) = t_listst (4, OP_LOG_OFF, NULL, NULL, NULL); }
    break;

  case 857:
#line 3193 "./sql3.y"
    {
		  (yyval.tree) = t_listst (9, USER_AGGREGATE_DECL, (yyvsp[(3) - (13)].strval), (yyvsp[(4) - (13)].box), (yyvsp[(5) - (13)].tree),
				 (yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval), (yyvsp[(11) - (13)].strval), (yyvsp[(12) - (13)].box), (yyvsp[(13) - (13)].box) );
		}
    break;

  case 858:
#line 3200 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 859:
#line 3201 "./sql3.y"
    { (yyval.box) = (yyvsp[(2) - (2)].strval); }
    break;

  case 860:
#line 3205 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 861:
#line 3206 "./sql3.y"
    { (yyval.box) = (caddr_t)1; }
    break;

  case 862:
#line 3212 "./sql3.y"
    { (yyval.tree) = t_listst (7, ROUTINE_DECL, (ptrlong) (yyvsp[(2) - (7)].subtok), (yyvsp[(3) - (7)].strval), (yyvsp[(4) - (7)].box), (yyvsp[(5) - (7)].tree), (yyvsp[(7) - (7)].tree), (yyvsp[(6) - (7)].box)); }
    break;

  case 863:
#line 3215 "./sql3.y"
    {
		  (yyval.tree) = t_listst (8, REMOTE_ROUTINE_DECL, (ptrlong) (yyvsp[(2) - (9)].subtok), (yyvsp[(3) - (9)].strval), (yyvsp[(4) - (9)].box), (yyvsp[(5) - (9)].tree), (yyvsp[(7) - (9)].box), (yyvsp[(9) - (9)].box), (yyvsp[(6) - (9)].box));
		}
    break;

  case 864:
#line 3220 "./sql3.y"
    { (yyval.tree) = sqlp_udt_create_external_proc ((ptrlong) (yyvsp[(2) - (12)].subtok), (yyvsp[(3) - (12)].strval),
		    (yyvsp[(4) - (12)].box), (yyvsp[(5) - (12)].tree), (yyvsp[(6) - (12)].box), (ptrlong) (yyvsp[(8) - (12)].intval), (yyvsp[(11) - (12)].box), (ST **) (yyvsp[(12) - (12)].tree)); }
    break;

  case 865:
#line 3228 "./sql3.y"
    { (yyval.tree) = t_listst (7, ROUTINE_DECL, (ptrlong) (yyvsp[(1) - (6)].subtok), (yyvsp[(2) - (6)].box), (yyvsp[(3) - (6)].box), (yyvsp[(4) - (6)].tree), (yyvsp[(6) - (6)].tree), (yyvsp[(5) - (6)].box)); }
    break;

  case 866:
#line 3233 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (2)].tree), NULL); }
    break;

  case 867:
#line 3235 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(2) - (3)].tree), NULL)); }
    break;

  case 868:
#line 3240 "./sql3.y"
    {
		  (yyval.tree) = t_listst (3, MODULE_DECL, (yyvsp[(3) - (6)].strval), t_list_to_array ((yyvsp[(5) - (6)].list)));
		}
    break;

  case 869:
#line 3246 "./sql3.y"
    { (yyval.subtok) = FUNCTION; }
    break;

  case 870:
#line 3247 "./sql3.y"
    { (yyval.subtok) = PROCEDURE; }
    break;

  case 871:
#line 3251 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 872:
#line 3252 "./sql3.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 873:
#line 3256 "./sql3.y"
    { (yyval.box) = (caddr_t) t_list (0); }
    break;

  case 874:
#line 3257 "./sql3.y"
    { (yyval.box) = t_list_to_array_box ((yyvsp[(2) - (3)].list)); }
    break;

  case 875:
#line 3262 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 876:
#line 3264 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 877:
#line 3269 "./sql3.y"
    { (yyval.tree) = t_listst (6, LOCAL_VAR, (ptrlong) (yyvsp[(1) - (4)].subtok), (yyvsp[(2) - (4)].tree), (yyvsp[(3) - (4)].tree), NULL, (yyvsp[(4) - (4)].box)); }
    break;

  case 878:
#line 3271 "./sql3.y"
    { (yyval.tree) = t_listst (6, LOCAL_VAR, (ptrlong) (yyvsp[(1) - (6)].subtok), (yyvsp[(2) - (6)].tree), (yyvsp[(3) - (6)].tree), (yyvsp[(5) - (6)].box), (yyvsp[(6) - (6)].box)); }
    break;

  case 879:
#line 3273 "./sql3.y"
    { (yyval.tree) = t_listst (6, LOCAL_VAR, (ptrlong) (yyvsp[(1) - (6)].subtok), (yyvsp[(2) - (6)].tree), (yyvsp[(3) - (6)].tree), (yyvsp[(5) - (6)].box), (yyvsp[(6) - (6)].box)); }
    break;

  case 880:
#line 3277 "./sql3.y"
    { (yyval.subtok) = IN_MODE; }
    break;

  case 881:
#line 3278 "./sql3.y"
    { (yyval.subtok) = OUT_MODE; }
    break;

  case 882:
#line 3279 "./sql3.y"
    { (yyval.subtok) = INOUT_MODE; }
    break;

  case 883:
#line 3283 "./sql3.y"
    { (yyval.subtok) = IN_MODE; }
    break;

  case 885:
#line 3288 "./sql3.y"
    { (yyval.subtok) = 0; }
    break;

  case 886:
#line 3289 "./sql3.y"
    { (yyval.subtok) = SOAP_MSG_IN;    }
    break;

  case 887:
#line 3290 "./sql3.y"
    { (yyval.subtok) = SOAP_MSG_OUT;   }
    break;

  case 888:
#line 3291 "./sql3.y"
    { (yyval.subtok) = SOAP_MSG_INOUT; }
    break;

  case 889:
#line 3292 "./sql3.y"
    { (yyval.subtok) = SOAP_MMSG_IN;    }
    break;

  case 890:
#line 3293 "./sql3.y"
    { (yyval.subtok) = SOAP_MMSG_OUT;   }
    break;

  case 891:
#line 3294 "./sql3.y"
    { (yyval.subtok) = SOAP_MMSG_INOUT; }
    break;

  case 892:
#line 3298 "./sql3.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); }
    break;

  case 893:
#line 3299 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].list)); }
    break;

  case 894:
#line 3303 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (3)].box), t_CONS ((yyvsp[(3) - (3)].box), NULL)); }
    break;

  case 895:
#line 3307 "./sql3.y"
    { (yyval.intval) = 0; }
    break;

  case 896:
#line 3308 "./sql3.y"
    { (yyval.intval) = SOAP_MSG_HEADER; }
    break;

  case 897:
#line 3309 "./sql3.y"
    { (yyval.intval) = SOAP_MSG_FAULT; }
    break;

  case 898:
#line 3310 "./sql3.y"
    { (yyval.intval) = SOAP_MSG_LITERAL; }
    break;

  case 899:
#line 3311 "./sql3.y"
    { (yyval.intval) = SOAP_MSG_XML; }
    break;

  case 900:
#line 3312 "./sql3.y"
    { (yyval.intval) = (SOAP_MSG_LITERALW|SOAP_MSG_LITERAL); }
    break;

  case 901:
#line 3313 "./sql3.y"
    { (yyval.intval) = SOAP_MSG_HTTP; }
    break;

  case 902:
#line 3317 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 903:
#line 3319 "./sql3.y"
    { (yyval.box) = t_listbox (3, (yyvsp[(5) - (9)].box), (ptrlong) ((yyvsp[(3) - (9)].intval)|(yyvsp[(6) - (9)].subtok)), t_list_to_array_box ((yyvsp[(8) - (9)].list))); }
    break;

  case 904:
#line 3320 "./sql3.y"
    { (yyval.box) = t_listbox (3, (yyvsp[(2) - (3)].box), (ptrlong) ((yyvsp[(1) - (3)].intval)|(yyvsp[(3) - (3)].subtok)), NULL); }
    break;

  case 905:
#line 3324 "./sql3.y"
    {  (yyval.box) = t_box_float ((float) unbox ((yyvsp[(1) - (1)].box))); }
    break;

  case 906:
#line 3325 "./sql3.y"
    { double d;
  switch (DV_TYPE_OF ((yyvsp[(1) - (1)].box)))
    {
    case DV_SINGLE_FLOAT: (yyval.box) = (yyvsp[(1) - (1)].box); break;
    case DV_DOUBLE_FLOAT: (yyval.box) = t_box_float ((float) unbox_double ((yyvsp[(1) - (1)].box))); break;
    case DV_NUMERIC: numeric_to_double ((numeric_t) (yyvsp[(1) - (1)].box), &d); (yyval.box) = t_box_float ((float)d); break;
    }
}
    break;

  case 907:
#line 3336 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].box), NULL); }
    break;

  case 908:
#line 3337 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].box), NULL)); }
    break;

  case 909:
#line 3341 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (2, PROC_COST, t_list_to_array ((yyvsp[(3) - (4)].list))); }
    break;

  case 922:
#line 3358 "./sql3.y"
    { (yyval.tree) = t_listst (1, NULL_STMT); }
    break;

  case 923:
#line 3362 "./sql3.y"
    { BR_PUSH }
    break;

  case 924:
#line 3363 "./sql3.y"
    { (yyval.tree) = t_listst (5, COMPOUND_STMT,
			   t_list_to_array ((yyvsp[(3) - (4)].list)),
			   t_box_num (BR_GET),
			   t_box_num (BR_LGET),
                           t_box_string (scn3_get_file_name ())
			); BR_POP }
    break;

  case 925:
#line 3372 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 926:
#line 3373 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (2)].list), t_CONS ((yyvsp[(2) - (2)].tree), NULL)); }
    break;

  case 929:
#line 3379 "./sql3.y"
    { BR_PUSH }
    break;

  case 930:
#line 3379 "./sql3.y"
    { (yyval.tree) = BR_CSTM ((yyvsp[(2) - (2)].tree)); BR_POP }
    break;

  case 933:
#line 3385 "./sql3.y"
    { (yyval.tree) = t_listst (3, LABELED_STMT, (yyvsp[(1) - (3)].box), (yyvsp[(3) - (3)].tree)); }
    break;

  case 934:
#line 3386 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (3, CALL_STMT, t_sqlp_box_id_upcase ("http"), t_list (1, (yyvsp[(1) - (1)].box))); }
    break;

  case 935:
#line 3387 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (5, COMPOUND_STMT,
              t_list (2,
		t_list (3, CALL_STMT, t_sqlp_box_id_upcase ("http_value"), t_list (1, (yyvsp[(2) - (3)].tree))),
		t_list (3, CALL_STMT, t_sqlp_box_id_upcase ("http"), t_list (1, (yyvsp[(3) - (3)].box)))),
              t_box_num (scn3_lineno),
              t_box_num (scn3_get_lineno ()),
              t_box_string (scn3_get_file_name ())
               ); }
    break;

  case 936:
#line 3395 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (5, COMPOUND_STMT,
              t_list (2,
		t_list (3, CALL_STMT, t_sqlp_box_id_upcase ("http_url"), t_list (1, (yyvsp[(2) - (3)].tree))),
		t_list (3, CALL_STMT, t_sqlp_box_id_upcase ("http"), t_list (1, (yyvsp[(3) - (3)].box)))),
              t_box_num (scn3_lineno),
              t_box_num (scn3_get_lineno ()),
              t_box_string (scn3_get_file_name ())
              ); }
    break;

  case 937:
#line 3403 "./sql3.y"
    {
          ST *qry = (yyvsp[(2) - (3)].tree);
          ST *scalar_qry = (yyval.tree) = (ST *) t_list (2, SCALAR_SUBQ, sqlp_add_top_1 (qry));
          (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("isnull"), t_list (1, scalar_qry)); }
    break;

  case 939:
#line 3411 "./sql3.y"
    { BR_PUSH }
    break;

  case 940:
#line 3411 "./sql3.y"
    { (yyval.tree) = BR_CSTM ((yyvsp[(2) - (3)].tree)); BR_POP }
    break;

  case 941:
#line 3412 "./sql3.y"
    { BR_PUSH }
    break;

  case 942:
#line 3412 "./sql3.y"
    { (yyval.tree) = BR_CSTM ((yyvsp[(2) - (2)].tree)); BR_POP }
    break;

  case 946:
#line 3423 "./sql3.y"
    {
		  ST **temp = (ST **) t_list_to_array ((yyvsp[(2) - (3)].list));
		  (yyval.tree) = t_listst (2, VARIABLE_DECL,
		      sqlp_local_variable_decls ((caddr_t *) temp, (yyvsp[(3) - (3)].tree)));
		}
    break;

  case 947:
#line 3432 "./sql3.y"
    { (yyval.list) = t_CONS (t_list (3, COL_DOTTED, NULL, (yyvsp[(1) - (1)].box)), NULL); }
    break;

  case 948:
#line 3434 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS (t_list (3, COL_DOTTED, NULL, (yyvsp[(3) - (3)].box)), NULL)); }
    break;

  case 949:
#line 3438 "./sql3.y"
    { (yyval.box) = (caddr_t) SQL_NO_DATA_FOUND; }
    break;

  case 950:
#line 3439 "./sql3.y"
    { (yyval.box) = (caddr_t) t_list (2, (yyvsp[(2) - (2)].box), sqlp_handler_star_pos ((yyvsp[(2) - (2)].box))); }
    break;

  case 951:
#line 3441 "./sql3.y"
    {
		  (yyval.box) = t_listbox (2, (yyvsp[(3) - (3)].box), sqlp_handler_star_pos ((yyvsp[(3) - (3)].box)));
		}
    break;

  case 952:
#line 3444 "./sql3.y"
    { (yyval.box) = (caddr_t) SQL_SQLEXCEPTION; }
    break;

  case 953:
#line 3445 "./sql3.y"
    { (yyval.box) = t_listbox (2, t_box_string ("01*"), 2); }
    break;

  case 960:
#line 3455 "./sql3.y"
    { (yyval.tree) = sqlp_resignal (NULL); }
    break;

  case 961:
#line 3456 "./sql3.y"
    { (yyval.tree) = sqlp_resignal ((yyvsp[(2) - (2)].tree)); }
    break;

  case 968:
#line 3467 "./sql3.y"
    { (yyval.tree) = t_listst (4, HANDLER_DECL, HANDT_CONTINUE, t_list (1, (yyvsp[(2) - (4)].box)), t_list (2, GOTO_STMT, (yyvsp[(4) - (4)].box))); }
    break;

  case 969:
#line 3469 "./sql3.y"
    { (yyval.tree) = t_listst (4, HANDLER_DECL, HANDT_CONTINUE, t_list (1, (yyvsp[(2) - (5)].box)), t_list (2, GOTO_STMT, (yyvsp[(5) - (5)].box))); }
    break;

  case 970:
#line 3471 "./sql3.y"
    { (yyval.tree) = t_listst (4, HANDLER_DECL, HANDT_CONTINUE, t_list (1, (yyvsp[(2) - (3)].box)), sqlp_resignal (NULL)); }
    break;

  case 971:
#line 3473 "./sql3.y"
    { (yyval.tree) = t_listst (4, HANDLER_DECL, (ptrlong) (yyvsp[(2) - (6)].intval), t_list_to_array ((yyvsp[(5) - (6)].list)), (yyvsp[(6) - (6)].tree)); }
    break;

  case 972:
#line 3477 "./sql3.y"
    { (yyval.intval) = HANDT_CONTINUE; }
    break;

  case 973:
#line 3478 "./sql3.y"
    { (yyval.intval) = HANDT_EXIT; }
    break;

  case 974:
#line 3482 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].box), NULL); }
    break;

  case 975:
#line 3483 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].box), NULL)); }
    break;

  case 980:
#line 3491 "./sql3.y"
    { (yyval.tree) = sqlp_resignal (NULL); }
    break;

  case 981:
#line 3492 "./sql3.y"
    { (yyval.tree) = sqlp_resignal ((yyvsp[(2) - (3)].tree)); }
    break;

  case 988:
#line 3502 "./sql3.y"
    { (yyval.tree) = t_listst (3, ASG_STMT, (yyvsp[(1) - (3)].tree), sqlp_wrapper_sqlxml_assign((ST*)(yyvsp[(3) - (3)].tree))); }
    break;

  case 989:
#line 3504 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
	    					t_sqlp_box_id_upcase ("aset"),
						t_list_to_array (t_CONS ((yyvsp[(1) - (4)].tree), t_NCONC ((yyvsp[(2) - (4)].list), t_CONS ((yyvsp[(4) - (4)].tree), NULL)))) ); }
    break;

  case 990:
#line 3511 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(2) - (3)].tree), NULL); }
    break;

  case 991:
#line 3512 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (4)].list), t_CONS ((yyvsp[(3) - (4)].tree), NULL)); }
    break;

  case 994:
#line 3547 "./sql3.y"
    { ST *first = t_listst (3, COND_CLAUSE, (yyvsp[(3) - (6)].tree), (yyvsp[(5) - (6)].tree));
		  ST *cond_list = t_listst (1, first);
		  (yyval.tree) = t_listst (3, IF_STMT, cond_list, (yyvsp[(6) - (6)].tree));
		}
    break;

  case 995:
#line 3554 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 996:
#line 3555 "./sql3.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 997:
#line 3560 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, (yyvsp[(2) - (5)].box), t_list_to_array ((yyvsp[(4) - (5)].list))); }
    break;

  case 998:
#line 3561 "./sql3.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 999:
#line 3562 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 1000:
#line 3566 "./sql3.y"
    { (yyval.box) = t_box_string ((yyvsp[(2) - (2)].box)); }
    break;

  case 1001:
#line 3567 "./sql3.y"
    { (yyval.box) = t_box_string ((yyvsp[(2) - (2)].box)); }
    break;

  case 1002:
#line 3568 "./sql3.y"
    { (yyval.box) = t_box_string ((yyvsp[(1) - (2)].box)); }
    break;

  case 1003:
#line 3569 "./sql3.y"
    { (yyval.box) = t_box_string ((yyvsp[(1) - (1)].box)); }
    break;

  case 1004:
#line 3574 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("__set"),
		      t_list (2, t_sqlp_box_upcase ((yyvsp[(2) - (4)].box)), (yyvsp[(4) - (4)].tree))); }
    break;

  case 1005:
#line 3577 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("__set"),
		      t_list (2, t_sqlp_box_upcase ((yyvsp[(2) - (3)].box)), t_box_num (1))); }
    break;

  case 1006:
#line 3580 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("__set"),
		      t_list (2, t_sqlp_box_upcase ((yyvsp[(2) - (3)].box)), t_box_num (0))); }
    break;

  case 1007:
#line 3583 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("__set"),
		      t_list (2, t_sqlp_box_upcase ((yyvsp[(3) - (5)].box)), (yyvsp[(5) - (5)].box))); }
    break;

  case 1008:
#line 3588 "./sql3.y"
    { (yyval.tree) = t_listst (2, GOTO_STMT, (yyvsp[(2) - (2)].box)); }
    break;

  case 1009:
#line 3589 "./sql3.y"
    { (yyval.tree) = t_listst (2, GOTO_STMT, (yyvsp[(3) - (3)].box)); }
    break;

  case 1010:
#line 3593 "./sql3.y"
    { (yyval.tree) = t_listst (2, RETURN_STMT, sqlp_wrapper_sqlxml_assign((ST*)(yyvsp[(2) - (2)].tree))); }
    break;

  case 1011:
#line 3594 "./sql3.y"
    { (yyval.tree) = t_listst (2, RETURN_STMT, NULL); }
    break;

  case 1012:
#line 3599 "./sql3.y"
    { (yyval.tree) = t_listst (3, WHILE_STMT, (yyvsp[(3) - (5)].tree), (yyvsp[(5) - (5)].tree)); }
    break;

  case 1017:
#line 3610 "./sql3.y"
    { (yyval.list) = NULL; }
    break;

  case 1018:
#line 3611 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 1019:
#line 3612 "./sql3.y"
    { (yyval.list) = (yyvsp[(3) - (3)].tree) ? t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)) : (yyvsp[(1) - (3)].list); }
    break;

  case 1023:
#line 3622 "./sql3.y"
    { (yyval.list) = NULL; }
    break;

  case 1024:
#line 3623 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 1025:
#line 3624 "./sql3.y"
    { (yyval.list) = (yyvsp[(3) - (3)].tree) ? t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)) : (yyvsp[(1) - (3)].list); }
    break;

  case 1026:
#line 3628 "./sql3.y"
    { NEGATE ((yyval.tree), t_listst (3, BOP_EQ, t_box_num_and_zero (0), t_box_num (1))); }
    break;

  case 1027:
#line 3629 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 1028:
#line 3634 "./sql3.y"
    { (yyval.tree) = sqlp_for_statement ((yyvsp[(2) - (4)].tree), (yyvsp[(4) - (4)].tree)); }
    break;

  case 1029:
#line 3636 "./sql3.y"
    { (yyval.tree) = sqlp_c_for_statement ((ST **) t_list_to_array ((yyvsp[(3) - (9)].list)), (yyvsp[(5) - (9)].tree), (ST **) t_list_to_array ((yyvsp[(7) - (9)].list)), (yyvsp[(9) - (9)].tree)); }
    break;

  case 1030:
#line 3638 "./sql3.y"
    { (yyval.tree) = sqlp_foreach_statement ((yyvsp[(3) - (9)].tree), (yyvsp[(4) - (9)].box), (yyvsp[(6) - (9)].tree), (yyvsp[(9) - (9)].tree)); }
    break;

  case 1031:
#line 3644 "./sql3.y"
    { (yyval.tree) = t_listst (8, TRIGGER_DEF, (yyvsp[(3) - (10)].box), (ptrlong) (yyvsp[(4) - (10)].subtok), (yyvsp[(5) - (10)].box), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].box), (yyvsp[(9) - (10)].box), (yyvsp[(10) - (10)].tree)); }
    break;

  case 1032:
#line 3648 "./sql3.y"
    { (yyval.box) = 0; }
    break;

  case 1033:
#line 3649 "./sql3.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 1035:
#line 3657 "./sql3.y"
    { (yyval.subtok) = TRIG_BEFORE; }
    break;

  case 1036:
#line 3658 "./sql3.y"
    { (yyval.subtok) = TRIG_AFTER; }
    break;

  case 1037:
#line 3659 "./sql3.y"
    { (yyval.subtok) = TRIG_INSTEAD; }
    break;

  case 1038:
#line 3663 "./sql3.y"
    { (yyval.box) = (caddr_t) TRIG_INSERT; }
    break;

  case 1039:
#line 3664 "./sql3.y"
    { (yyval.box) = (caddr_t) (yyvsp[(2) - (2)].tree); }
    break;

  case 1040:
#line 3666 "./sql3.y"
    { (yyval.box) = (caddr_t) TRIG_DELETE; }
    break;

  case 1041:
#line 3670 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 1042:
#line 3671 "./sql3.y"
    { (yyval.box) = (caddr_t) t_list_to_array ((yyvsp[(2) - (2)].list)); }
    break;

  case 1043:
#line 3675 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 1044:
#line 3676 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 1045:
#line 3680 "./sql3.y"
    { (yyval.tree) = t_listst (2, OLD_ALIAS, (yyvsp[(3) - (3)].box)); }
    break;

  case 1046:
#line 3681 "./sql3.y"
    { (yyval.tree) = t_listst (2, NEW_ALIAS, (yyvsp[(3) - (3)].box)); }
    break;

  case 1047:
#line 3686 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
			t_sqlp_box_id_upcase ("DB.DBA.ddl_drop_trigger"),
			t_list (1, t_box_string ((yyvsp[(3) - (3)].strval))));
		}
    break;

  case 1048:
#line 3695 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
			t_sqlp_box_id_upcase ("DB.DBA.ddl_drop_proc"),
			t_list (2, t_box_string ((yyvsp[(3) - (3)].strval)), 4));
		}
    break;

  case 1049:
#line 3700 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
			t_sqlp_box_id_upcase ("DB.DBA.ddl_drop_proc"),
			t_list (1, t_box_string ((yyvsp[(3) - (3)].strval))));
		}
    break;

  case 1050:
#line 3705 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
			t_sqlp_box_id_upcase ("DB.DBA.ddl_drop_proc"),
			t_list (2, t_box_string ((yyvsp[(3) - (3)].strval)), 0));
		}
    break;

  case 1051:
#line 3719 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 1052:
#line 3720 "./sql3.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 1053:
#line 3724 "./sql3.y"
    {
	  if ((yyvsp[(1) - (1)].tree)->_.col_ref.name == STAR)
	    yyerror ("No stars allowed inside XML view definition");
	  else
/*mapping schema*/
	    (yyval.tree) = (ST*) t_list (5, (yyvsp[(1) - (1)].tree), box_dv_uname_string ((yyvsp[(1) - (1)].tree)->_.col_ref.name), XV_XC_ATTRIBUTE, NULL, NULL);
	}
    break;

  case 1054:
#line 3731 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (5, (yyvsp[(1) - (3)].tree), box_dv_uname_string ((yyvsp[(3) - (3)].box)), XV_XC_ATTRIBUTE, NULL, NULL); }
    break;

  case 1055:
#line 3732 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (5, (yyvsp[(1) - (3)].tree), box_dv_uname_string ((yyvsp[(3) - (3)].box)), XV_XC_SUBELEMENT, NULL, NULL); }
    break;

  case 1056:
#line 3745 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 1057:
#line 3746 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 1058:
#line 3751 "./sql3.y"
    { (yyval.tree) = (ST*) t_list_to_array ((yyvsp[(2) - (3)].list)); }
    break;

  case 1059:
#line 3755 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 1060:
#line 3756 "./sql3.y"
    { (yyval.tree) = (ST *) t_list_to_array ((yyvsp[(4) - (5)].list)); }
    break;

  case 1061:
#line 3762 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 1062:
#line 3763 "./sql3.y"
    { (yyval.tree) = (yyvsp[(3) - (4)].tree); }
    break;

  case 1063:
#line 3768 "./sql3.y"
    { (yyval.subtok) = 0; }
    break;

  case 1064:
#line 3769 "./sql3.y"
    { (yyval.subtok) = 1; }
    break;

  case 1065:
#line 3775 "./sql3.y"
    {
/*mapping schema*/
	    (yyval.tree) = (ST*) t_list (12,
			     (yyvsp[(1) - (8)].strval), (yyvsp[(2) - (8)].box),
			     box_dv_uname_string ((yyvsp[(3) - (8)].box) ? (caddr_t) (yyvsp[(3) - (8)].box) : (yyvsp[(1) - (8)].strval)), (yyvsp[(4) - (8)].tree),
			     (yyvsp[(5) - (8)].tree), (ptrlong) 1, NULL /* no support for filter */,
			     (yyvsp[(8) - (8)].tree), NULL /* parent will be filled later */,
			     (yyvsp[(6) - (8)].tree), (ptrlong) (yyvsp[(7) - (8)].subtok), NULL);
/*end mapping schema*/
/*	    $$ = (ST*) t_list (11,
			     $1, $2,
			     ($3 ? (caddr_t) $3 : t_box_copy ($1)), $4,
			     $5, 1l, NULL / * no support for filter * /,
			     $8, NULL / * parent will be filled later * /,
			     $6, $7);*/
	  }
    break;

  case 1066:
#line 3794 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 1067:
#line 3795 "./sql3.y"
    { (yyval.tree) = (ST*) t_list_to_array ((yyvsp[(2) - (3)].list)); }
    break;

  case 1068:
#line 3800 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 1069:
#line 3801 "./sql3.y"
    { ST * tmp  = (ST*) t_list_to_array ((yyvsp[(2) - (3)].list));
/*mapping schema*/
	(yyval.tree) = (ST *) t_list (12, NULL, NULL, NULL, NULL, NULL, (ptrlong) 1, NULL, tmp, NULL, NULL, NULL, NULL); }
    break;

  case 1070:
#line 3811 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 1071:
#line 3812 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 1072:
#line 3816 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 1073:
#line 3817 "./sql3.y"
    { (yyval.box) = t_box_num (1); }
    break;

  case 1074:
#line 3821 "./sql3.y"
    { (yyval.box) = t_box_num (0); }
    break;

  case 1075:
#line 3822 "./sql3.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 1076:
#line 3838 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (2, t_box_num(0), t_box_string("")); }
    break;

  case 1077:
#line 3839 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (2, t_box_num(1), t_box_string("")); }
    break;

  case 1078:
#line 3840 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (2, t_box_num(2), t_box_string("")); }
    break;

  case 1079:
#line 3841 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (2, t_box_num(3), (yyvsp[(2) - (2)].box)); }
    break;

  case 1080:
#line 3842 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (2, t_box_num(5), t_box_string("")); }
    break;

  case 1081:
#line 3843 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (2, t_box_num(6), (yyvsp[(2) - (2)].box)); }
    break;

  case 1082:
#line 3847 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 1083:
#line 3849 "./sql3.y"
    {
	     if (stricmp ((yyvsp[(3) - (7)].box), "OWNER") && stricmp ((yyvsp[(3) - (7)].box), "NAME"))
	       yyerror ("syntax error at WebDAV OWNER keyword");
	     (yyval.tree) = (ST*) t_list (5, (yyvsp[(2) - (7)].box), (yyvsp[(4) - (7)].box), (yyvsp[(5) - (7)].box), (yyvsp[(6) - (7)].box), (yyvsp[(7) - (7)].tree));
	   }
    break;

  case 1086:
#line 3864 "./sql3.y"
    {
              if ((yyvsp[(2) - (3)].subtok) != BOP_EQ)
		yyerror ("'=' expected");
	      (yyval.tree) = (ST *) t_list (2, (yyvsp[(1) - (3)].box), (yyvsp[(3) - (3)].box));
            }
    break;

  case 1087:
#line 3875 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 1088:
#line 3877 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (2)].list), t_CONS ((yyvsp[(2) - (2)].tree), NULL)); }
    break;

  case 1089:
#line 3882 "./sql3.y"
    { (yyval.list) = NULL; }
    break;

  case 1090:
#line 3884 "./sql3.y"
    { (yyval.list) = (yyvsp[(2) - (3)].list); }
    break;

  case 1091:
#line 3890 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (12, XML_VIEW, (yyvsp[(4) - (9)].strval), NULL, NULL, 0,
			     (yyvsp[(7) - (9)].tree), (ptrlong) (yyvsp[(8) - (9)].subtok), (yyvsp[(9) - (9)].tree), t_list_to_array ((yyvsp[(6) - (9)].list)), NULL, NULL, NULL); }
    break;

  case 1092:
#line 3897 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("DB.DBA.xml_view_drop"), t_list (1, (yyvsp[(4) - (4)].strval))); }
    break;

  case 1093:
#line 3918 "./sql3.y"
    {
		  (yyval.tree) = t_listst (3, CALL_STMT,
		      t_sqlp_box_id_upcase ("concat"),
		      t_listst (2, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)));
		}
    break;

  case 1094:
#line 3927 "./sql3.y"
    { (yyval.strval) = sqlp_type_name (NULL, 0, NULL, 0, (yyvsp[(1) - (1)].box), 1); }
    break;

  case 1095:
#line 3928 "./sql3.y"
    { (yyval.strval) = sqlp_type_name (NULL, 0, (yyvsp[(1) - (3)].box), box_length ((yyvsp[(1) - (3)].box)), (yyvsp[(3) - (3)].box), 1); }
    break;

  case 1096:
#line 3929 "./sql3.y"
    { (yyval.strval) = sqlp_type_name ((yyvsp[(1) - (5)].box), box_length ((yyvsp[(1) - (5)].box)), (yyvsp[(3) - (5)].box), box_length ((yyvsp[(3) - (5)].box)), (yyvsp[(5) - (5)].box), 1); }
    break;

  case 1097:
#line 3930 "./sql3.y"
    { (yyval.strval) = sqlp_type_name ((yyvsp[(1) - (4)].box), box_length ((yyvsp[(1) - (4)].box)), NULL, 0, (yyvsp[(4) - (4)].box), 1); }
    break;

  case 1098:
#line 3934 "./sql3.y"
    { (yyval.strval) = sqlp_type_name (NULL, 0, NULL, 0, (yyvsp[(1) - (1)].box), 0); }
    break;

  case 1099:
#line 3935 "./sql3.y"
    { (yyval.strval) = sqlp_type_name (NULL, 0, (yyvsp[(1) - (3)].box), box_length ((yyvsp[(1) - (3)].box)), (yyvsp[(3) - (3)].box), 0); }
    break;

  case 1100:
#line 3936 "./sql3.y"
    { (yyval.strval) = sqlp_type_name ((yyvsp[(1) - (5)].box), box_length ((yyvsp[(1) - (5)].box)), (yyvsp[(3) - (5)].box), box_length ((yyvsp[(3) - (5)].box)), (yyvsp[(5) - (5)].box), 0); }
    break;

  case 1101:
#line 3937 "./sql3.y"
    { (yyval.strval) = sqlp_type_name ((yyvsp[(1) - (4)].box), box_length ((yyvsp[(1) - (4)].box)), NULL, 0, (yyvsp[(4) - (4)].box), 0); }
    break;

  case 1102:
#line 3941 "./sql3.y"
    { (yyval.strval) = sqlp_new_table_name (NULL, 0, NULL, 0, (yyvsp[(1) - (1)].box)); }
    break;

  case 1103:
#line 3942 "./sql3.y"
    { (yyval.strval) = sqlp_new_table_name (NULL, 0, (yyvsp[(1) - (3)].box), box_length ((yyvsp[(1) - (3)].box)), (yyvsp[(3) - (3)].box)); }
    break;

  case 1104:
#line 3943 "./sql3.y"
    { (yyval.strval) = sqlp_new_table_name ((yyvsp[(1) - (5)].box), box_length ((yyvsp[(1) - (5)].box)), (yyvsp[(3) - (5)].box), box_length ((yyvsp[(3) - (5)].box)), (yyvsp[(5) - (5)].box)); }
    break;

  case 1105:
#line 3944 "./sql3.y"
    { (yyval.strval) = sqlp_new_table_name ((yyvsp[(1) - (4)].box), box_length ((yyvsp[(1) - (4)].box)), NULL, 0, (yyvsp[(4) - (4)].box)); }
    break;

  case 1106:
#line 3948 "./sql3.y"
    { sqlp_udt_current_type = (yyvsp[(3) - (5)].strval); }
    break;

  case 1107:
#line 3950 "./sql3.y"
    {
	       (yyval.tree) = t_listst (7, UDT_DEF,
		   (yyvsp[(3) - (9)].strval), (yyvsp[(4) - (9)].strval), (yyvsp[(5) - (9)].tree), (yyvsp[(7) - (9)].tree), (yyvsp[(8) - (9)].tree), (yyvsp[(9) - (9)].tree));
	       sqlp_udt_current_type = NULL;
	       sqlp_udt_current_type_lang = UDT_LANG_NONE;
	     }
    break;

  case 1108:
#line 3960 "./sql3.y"
    {
	       (yyval.tree) = t_listst (3, UDT_DROP, (yyvsp[(3) - (4)].strval), (ptrlong) (yyvsp[(4) - (4)].intval));
	     }
    break;

  case 1109:
#line 3966 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 1110:
#line 3968 "./sql3.y"
    {
	       (yyval.tree) = t_listst (3, UDT_EXT,
		   (ptrlong) (yyvsp[(2) - (5)].intval), (yyvsp[(5) - (5)].box));
	       sqlp_udt_current_type_lang = (yyvsp[(2) - (5)].intval);
       	     }
    break;

  case 1111:
#line 3974 "./sql3.y"
    {
	       (yyval.tree) = t_listst (3, UDT_EXT,
		   (ptrlong) (yyvsp[(5) - (5)].intval), (yyvsp[(3) - (5)].box));
	       sqlp_udt_current_type_lang = (yyvsp[(5) - (5)].intval);
       	     }
    break;

  case 1112:
#line 3980 "./sql3.y"
    {
	       (yyval.tree) = t_listst (3, UDT_EXT,
		   (ptrlong) (yyvsp[(2) - (2)].intval), NULL);
	       sqlp_udt_current_type_lang = (yyvsp[(2) - (2)].intval);
       	     }
    break;

  case 1113:
#line 3988 "./sql3.y"
    { (yyval.strval) = NULL; }
    break;

  case 1114:
#line 3989 "./sql3.y"
    { (yyval.strval) = (yyvsp[(2) - (2)].strval); }
    break;

  case 1115:
#line 3993 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 1116:
#line 3994 "./sql3.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 1117:
#line 3998 "./sql3.y"
    { (yyval.tree) = (ST *) t_list_to_array ((yyvsp[(2) - (3)].list)); }
    break;

  case 1118:
#line 4003 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 1119:
#line 4004 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 1120:
#line 4008 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 1121:
#line 4009 "./sql3.y"
    { (yyval.tree) = t_listst (4, UDT_EXT, UDT_LANG_NONE, (yyvsp[(3) - (3)].box), NULL); }
    break;

  case 1122:
#line 4010 "./sql3.y"
    { (yyval.tree) = t_listst (4, UDT_EXT, UDT_LANG_NONE, (yyvsp[(3) - (6)].box), (yyvsp[(6) - (6)].box)); }
    break;

  case 1123:
#line 4011 "./sql3.y"
    { (yyval.tree) = t_listst (4, UDT_EXT, UDT_LANG_NONE, NULL, (yyvsp[(3) - (3)].box)); }
    break;

  case 1124:
#line 4015 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 1125:
#line 4016 "./sql3.y"
    { (yyval.tree) = t_listst (3, UDT_SOAP, NULL, (yyvsp[(2) - (2)].box)); }
    break;

  case 1126:
#line 4017 "./sql3.y"
    { (yyval.tree) = t_listst (3, UDT_SOAP, (yyvsp[(2) - (2)].box), NULL); }
    break;

  case 1127:
#line 4018 "./sql3.y"
    { (yyval.tree) = t_listst (3, UDT_SOAP, (yyvsp[(2) - (4)].box), (yyvsp[(4) - (4)].box)); }
    break;

  case 1128:
#line 4019 "./sql3.y"
    { (yyval.tree) = t_listst (3, UDT_SOAP, (yyvsp[(4) - (4)].box), (yyvsp[(2) - (4)].box)); }
    break;

  case 1129:
#line 4023 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 1130:
#line 4024 "./sql3.y"
    { (yyval.tree) = (ST *) (yyvsp[(3) - (3)].box); }
    break;

  case 1131:
#line 4029 "./sql3.y"
    {
	      (yyval.tree) = t_listst (8, UDT_MEMBER, (yyvsp[(1) - (7)].box), (yyvsp[(2) - (7)].tree), (yyvsp[(3) - (7)].tree), (yyvsp[(4) - (7)].box), (yyvsp[(5) - (7)].strval), (yyvsp[(6) - (7)].tree), (yyvsp[(7) - (7)].tree));
	    }
    break;

  case 1132:
#line 4035 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 1133:
#line 4036 "./sql3.y"
    { (yyval.tree) = (yyvsp[(4) - (4)].tree); }
    break;

  case 1134:
#line 4037 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 1135:
#line 4041 "./sql3.y"
    { (yyval.box) = t_alloc_box (0, DV_DB_NULL); }
    break;

  case 1136:
#line 4042 "./sql3.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 1137:
#line 4046 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 1138:
#line 4047 "./sql3.y"
    { (yyval.tree) = (ST *) t_list_to_array ((yyvsp[(1) - (1)].list)); }
    break;

  case 1139:
#line 4051 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 1140:
#line 4052 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (2)].list), t_CONS ((yyvsp[(2) - (2)].tree), NULL)); }
    break;

  case 1141:
#line 4056 "./sql3.y"
    { (yyval.tree) = t_listst (2, UDT_FINAL, 1); }
    break;

  case 1142:
#line 4057 "./sql3.y"
    { (yyval.tree) = t_listst (2, UDT_FINAL, 0); }
    break;

  case 1143:
#line 4058 "./sql3.y"
    { (yyval.tree) = t_listst (2, UDT_REF, (yyvsp[(3) - (3)].tree)); }
    break;

  case 1144:
#line 4059 "./sql3.y"
    { (yyval.tree) = t_listst (2, UDT_REF, (yyvsp[(4) - (5)].list)); }
    break;

  case 1145:
#line 4060 "./sql3.y"
    { (yyval.tree) = t_listst (1, UDT_REF);  }
    break;

  case 1146:
#line 4061 "./sql3.y"
    { (yyval.tree) = t_listst (3, UDT_REFCAST, 0, (yyvsp[(8) - (8)].box)); }
    break;

  case 1147:
#line 4062 "./sql3.y"
    { (yyval.tree) = t_listst (3, UDT_REFCAST, 1, (yyvsp[(8) - (8)].box)); }
    break;

  case 1148:
#line 4063 "./sql3.y"
    { (yyval.tree) = t_listst (2, UDT_REFCAST, 0); }
    break;

  case 1149:
#line 4064 "./sql3.y"
    { (yyval.tree) = t_listst (2, UDT_REFCAST, 1); }
    break;

  case 1150:
#line 4065 "./sql3.y"
    { (yyval.tree) = t_listst (2, UDT_UNRESTRICTED, 1); }
    break;

  case 1151:
#line 4066 "./sql3.y"
    { (yyval.tree) = t_listst (2, UDT_SOAP, (yyvsp[(2) - (2)].box)); }
    break;

  case 1152:
#line 4070 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 1153:
#line 4071 "./sql3.y"
    { (yyval.tree) = (ST *) t_list_to_array ((yyvsp[(1) - (1)].list)); }
    break;

  case 1154:
#line 4075 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 1155:
#line 4076 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 1156:
#line 4080 "./sql3.y"
    { (yyval.intval) = UDT_METHOD_INSTANCE; }
    break;

  case 1157:
#line 4081 "./sql3.y"
    { (yyval.intval) = UDT_METHOD_STATIC;  }
    break;

  case 1158:
#line 4082 "./sql3.y"
    { (yyval.intval) = UDT_METHOD_INSTANCE; }
    break;

  case 1159:
#line 4086 "./sql3.y"
    { (yyval.box) = (caddr_t) t_list (0); }
    break;

  case 1160:
#line 4087 "./sql3.y"
    { (yyval.box) = t_list_to_array_box ((yyvsp[(2) - (3)].list)); }
    break;

  case 1161:
#line 4092 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 1162:
#line 4094 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 1163:
#line 4099 "./sql3.y"
    { (yyval.tree) = t_listst (6, LOCAL_VAR, IN_L, (yyvsp[(2) - (4)].tree), (yyvsp[(3) - (4)].tree), NULL, (yyvsp[(4) - (4)].tree)); }
    break;

  case 1164:
#line 4104 "./sql3.y"
    {
	      (yyval.tree) = t_listst (6, UDT_METHOD,
		  (ptrlong) (yyvsp[(1) - (7)].intval), (yyvsp[(3) - (7)].box), (yyvsp[(4) - (7)].box), (yyvsp[(6) - (7)].tree), (yyvsp[(7) - (7)].strval));
	    }
    break;

  case 1165:
#line 4109 "./sql3.y"
    {
	      (yyval.tree) = t_listst (6, UDT_METHOD,
		  UDT_METHOD_CONSTRUCTOR, (yyvsp[(3) - (5)].box), (yyvsp[(4) - (5)].box), NULL, (yyvsp[(5) - (5)].strval));
	    }
    break;

  case 1166:
#line 4117 "./sql3.y"
    {
	      (yyval.tree) = t_listst (5, UDT_METHOD_DEF,
		  0, (yyvsp[(1) - (3)].tree), (ptrlong) (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].tree));
	    }
    break;

  case 1167:
#line 4122 "./sql3.y"
    {
	      (yyval.tree) = t_listst (5, UDT_METHOD_DEF,
		  1, (yyvsp[(2) - (2)].tree), NULL, NULL);
	    }
    break;

  case 1168:
#line 4129 "./sql3.y"
    { (yyval.intval) = 0; }
    break;

  case 1169:
#line 4130 "./sql3.y"
    { (yyval.intval) = 1; }
    break;

  case 1170:
#line 4131 "./sql3.y"
    { (yyval.intval) = 2; }
    break;

  case 1171:
#line 4132 "./sql3.y"
    { (yyval.intval) = 3; }
    break;

  case 1172:
#line 4136 "./sql3.y"
    { (yyval.strval) = NULL; }
    break;

  case 1173:
#line 4137 "./sql3.y"
    { (yyval.strval) = (yyvsp[(2) - (2)].strval); }
    break;

  case 1174:
#line 4141 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 1175:
#line 4142 "./sql3.y"
    { (yyval.tree) = (ST *)t_list_to_array ((yyvsp[(1) - (1)].list)); }
    break;

  case 1176:
#line 4147 "./sql3.y"
    {
	      (yyval.list) = ((yyvsp[(1) - (1)].tree) != NULL ? t_CONS ((yyvsp[(1) - (1)].tree), NULL) : NULL);
	    }
    break;

  case 1177:
#line 4151 "./sql3.y"
    {
	      if ((yyvsp[(2) - (2)].tree) != NULL)
		(yyval.list) = t_NCONC ((yyvsp[(1) - (2)].list), t_CONS ((yyvsp[(2) - (2)].tree), NULL));
	    }
    break;

  case 1178:
#line 4158 "./sql3.y"
    { (yyval.tree) = t_listst (4, UDT_EXT, (ptrlong) (yyvsp[(2) - (2)].intval), NULL, NULL); }
    break;

  case 1179:
#line 4159 "./sql3.y"
    { (yyval.tree) = NULL; /* no action for now */ }
    break;

  case 1180:
#line 4160 "./sql3.y"
    { (yyval.tree) = NULL; /* no action for now */ }
    break;

  case 1181:
#line 4161 "./sql3.y"
    { (yyval.tree) = NULL; /* no action for now */ }
    break;

  case 1182:
#line 4162 "./sql3.y"
    { (yyval.tree) = NULL; /* no action for now */ }
    break;

  case 1183:
#line 4163 "./sql3.y"
    { (yyval.tree) = NULL; /* no action for now */ }
    break;

  case 1184:
#line 4164 "./sql3.y"
    { (yyval.tree) = NULL; /* no action for now */ }
    break;

  case 1185:
#line 4165 "./sql3.y"
    { (yyval.tree) = NULL; /* no action for now */ }
    break;

  case 1186:
#line 4166 "./sql3.y"
    { (yyval.tree) = NULL; /* no action for now */ }
    break;

  case 1187:
#line 4167 "./sql3.y"
    { (yyval.tree) = NULL; /* no action for now */ }
    break;

  case 1188:
#line 4168 "./sql3.y"
    { (yyval.tree) = NULL; /* no action for now */ }
    break;

  case 1189:
#line 4169 "./sql3.y"
    { (yyval.tree) = t_listst (4, UDT_EXT, UDT_LANG_NONE, (yyvsp[(3) - (3)].box), NULL); }
    break;

  case 1190:
#line 4170 "./sql3.y"
    { (yyval.tree) = t_listst (4, UDT_VAR_EXT, UDT_LANG_NONE, (yyvsp[(4) - (4)].box), NULL); }
    break;

  case 1191:
#line 4171 "./sql3.y"
    { (yyval.tree) = t_listst (4, UDT_EXT, UDT_LANG_NONE, NULL, (yyvsp[(3) - (3)].box)); }
    break;

  case 1192:
#line 4175 "./sql3.y"
    { yyerror ("Language ADA not supported"); }
    break;

  case 1193:
#line 4176 "./sql3.y"
    { (yyval.intval) = UDT_LANG_C; }
    break;

  case 1194:
#line 4177 "./sql3.y"
    { yyerror ("Language COBOL not supported"); }
    break;

  case 1195:
#line 4178 "./sql3.y"
    { yyerror ("Language FORTRAN not supported"); }
    break;

  case 1196:
#line 4179 "./sql3.y"
    { yyerror ("Language MUMPS not supported"); }
    break;

  case 1197:
#line 4180 "./sql3.y"
    { yyerror ("Language PASCAL not supported"); }
    break;

  case 1198:
#line 4181 "./sql3.y"
    { yyerror ("Language PLI not supported"); }
    break;

  case 1199:
#line 4182 "./sql3.y"
    { (yyval.intval) = UDT_LANG_JAVA; }
    break;

  case 1200:
#line 4183 "./sql3.y"
    { (yyval.intval) = UDT_LANG_CLR; }
    break;

  case 1202:
#line 4188 "./sql3.y"
    { (yyval.intval) = UDT_LANG_SQL; }
    break;

  case 1203:
#line 4192 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 1204:
#line 4193 "./sql3.y"
    { (yyval.tree) = (ST *) (yyvsp[(2) - (2)].strval); }
    break;

  case 1205:
#line 4199 "./sql3.y"
    {
	     (yyval.tree) = (ST *) sqlp_udt_method_decl (0, (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].box), (yyvsp[(5) - (10)].box), (caddr_t) (yyvsp[(6) - (10)].tree), (yyvsp[(9) - (10)].strval), (caddr_t) (yyvsp[(10) - (10)].tree), (caddr_t) (yyvsp[(7) - (10)].box));
	   }
    break;

  case 1206:
#line 4204 "./sql3.y"
    {
	     (yyval.tree) = (ST *) sqlp_udt_method_decl (0, UDT_METHOD_CONSTRUCTOR, (yyvsp[(4) - (9)].strval), (yyvsp[(5) - (9)].box), (caddr_t) (yyvsp[(6) - (9)].tree), (yyvsp[(8) - (9)].strval), (caddr_t) (yyvsp[(9) - (9)].tree), NULL);
	   }
    break;

  case 1207:
#line 4211 "./sql3.y"
    { (yyval.tree) = t_listst (5, CALL_STMT, (yyvsp[(3) - (6)].box), t_list_to_array ((yyvsp[(5) - (6)].list)), NULL, (yyvsp[(1) - (6)].strval)); }
    break;

  case 1208:
#line 4216 "./sql3.y"
    {
	    dk_set_t set = NULL;
	    t_set_push (&set, (yyvsp[(1) - (7)].box));
	    t_set_push (&set, (yyvsp[(3) - (7)].box));
	    t_set_push (&set, (yyvsp[(5) - (7)].box));
	    t_set_push (&set, (yyvsp[(7) - (7)].box));
	    (yyval.list) = dk_set_nreverse (set);
	  }
    break;

  case 1209:
#line 4225 "./sql3.y"
    {
	    dk_set_t set = NULL;
	    t_set_push (&set, (yyvsp[(1) - (6)].box));
	    t_set_push (&set, t_box_string (""));
	    t_set_push (&set, (yyvsp[(4) - (6)].box));
	    t_set_push (&set, (yyvsp[(6) - (6)].box));
	    (yyval.list) = dk_set_nreverse (set);
	  }
    break;

  case 1210:
#line 4233 "./sql3.y"
    { (yyval.list) = t_NCONC (t_CONS ((yyvsp[(1) - (3)].box), NULL), (yyvsp[(3) - (3)].list)); }
    break;

  case 1211:
#line 4238 "./sql3.y"
    {
	    dk_set_t set = NULL;
	    t_set_push (&set, (yyvsp[(1) - (9)].box));
	    t_set_push (&set, (yyvsp[(3) - (9)].box));
	    t_set_push (&set, (yyvsp[(5) - (9)].box));
	    t_set_push (&set, (yyvsp[(7) - (9)].box));
	    t_set_push (&set, (yyvsp[(9) - (9)].box));
	    (yyval.list) = dk_set_nreverse (set);
	  }
    break;

  case 1212:
#line 4248 "./sql3.y"
    {
	    dk_set_t set = NULL;
	    t_set_push (&set, (yyvsp[(1) - (8)].box));
	    t_set_push (&set, t_box_string (""));
	    t_set_push (&set, (yyvsp[(4) - (8)].box));
	    t_set_push (&set, (yyvsp[(6) - (8)].box));
	    t_set_push (&set, (yyvsp[(8) - (8)].box));
	    (yyval.list) = dk_set_nreverse (set);
	  }
    break;

  case 1213:
#line 4257 "./sql3.y"
    { (yyval.list) = t_NCONC (t_CONS ((yyvsp[(1) - (3)].box), NULL), (yyvsp[(3) - (3)].list)); }
    break;

  case 1214:
#line 4262 "./sql3.y"
    { (yyval.tree) = t_listst (5, CALL_STMT, (yyvsp[(3) - (6)].box), t_list_to_array (t_CONS ((yyvsp[(1) - (6)].tree), (yyvsp[(5) - (6)].list))), NULL, (ptrlong) 1); }
    break;

  case 1215:
#line 4264 "./sql3.y"
    { (yyval.tree) = (ST *) sqlp_udt_identifier_chain_to_member_handler ((yyvsp[(1) - (4)].list), (caddr_t) (yyvsp[(3) - (4)].list), 0); }
    break;

  case 1216:
#line 4266 "./sql3.y"
    { (yyval.tree) = t_listst (5, CALL_STMT, (yyvsp[(7) - (10)].box), t_list_to_array (t_CONS ((yyvsp[(2) - (10)].tree), (yyvsp[(9) - (10)].list))), NULL, t_list (1, (yyvsp[(4) - (10)].strval))); }
    break;

  case 1217:
#line 4268 "./sql3.y"
    { (yyval.tree) = t_listst (5, CALL_STMT, (yyvsp[(7) - (10)].box), t_list_to_array (t_CONS ((yyvsp[(2) - (10)].tree), (yyvsp[(9) - (10)].list))), NULL, t_list (1, (yyvsp[(4) - (10)].strval))); }
    break;

  case 1218:
#line 4273 "./sql3.y"
    { (yyval.tree) = t_listst (5, CALL_STMT, (yyvsp[(5) - (8)].box), t_list_to_array (t_CONS ((yyvsp[(3) - (8)].tree), (yyvsp[(7) - (8)].list))), NULL, (ptrlong) 1); }
    break;

  case 1219:
#line 4275 "./sql3.y"
    { (yyval.tree) = (ST *) sqlp_udt_identifier_chain_to_member_handler ((yyvsp[(3) - (6)].list), (caddr_t) (yyvsp[(5) - (6)].list), 0); }
    break;

  case 1220:
#line 4277 "./sql3.y"
    { (yyval.tree) = t_listst (5, CALL_STMT, (yyvsp[(9) - (12)].box), t_list_to_array (t_CONS ((yyvsp[(4) - (12)].tree), (yyvsp[(11) - (12)].list))), NULL, t_list (1, (yyvsp[(6) - (12)].strval))); }
    break;

  case 1221:
#line 4279 "./sql3.y"
    { (yyval.tree) = t_listst (5, CALL_STMT, (yyvsp[(9) - (12)].box), t_list_to_array (t_CONS ((yyvsp[(4) - (12)].tree), (yyvsp[(11) - (12)].list))), NULL, t_list (1, (yyvsp[(6) - (12)].strval))); }
    break;

  case 1223:
#line 4285 "./sql3.y"
    { (yyval.tree) = (ST *) sqlp_udt_identifier_chain_to_member_handler (t_NCONC (t_CONS ((yyvsp[(1) - (3)].box), NULL), (yyvsp[(3) - (3)].list)), NULL, 1); }
    break;

  case 1224:
#line 4290 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, (yyvsp[(3) - (3)].box), t_list (1, (yyvsp[(1) - (3)].tree))); }
    break;

  case 1225:
#line 4292 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, t_list (2, (yyvsp[(7) - (7)].box), (yyvsp[(4) - (7)].strval)), t_list (1, (yyvsp[(2) - (7)].tree))); }
    break;

  case 1226:
#line 4294 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, t_list (2, (yyvsp[(7) - (7)].box), (yyvsp[(4) - (7)].strval)), t_list (1, (yyvsp[(2) - (7)].tree))); }
    break;

  case 1227:
#line 4298 "./sql3.y"
    { (yyval.box) = (yyvsp[(1) - (1)].box); }
    break;

  case 1228:
#line 4299 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 1229:
#line 4304 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, (yyvsp[(2) - (5)].strval), t_list_to_array ((yyvsp[(4) - (5)].list))); }
    break;

  case 1230:
#line 4308 "./sql3.y"
    { (yyval.tree) = t_listst (3, UDT_ALTER, (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].tree)); }
    break;

  case 1231:
#line 4312 "./sql3.y"
    { (yyval.tree) = t_listst (2, UDT_MEMBER_ADD, (yyvsp[(3) - (3)].tree)); }
    break;

  case 1232:
#line 4313 "./sql3.y"
    { (yyval.tree) = t_listst (3, UDT_MEMBER_DROP, (yyvsp[(3) - (4)].box), (ptrlong) (yyvsp[(4) - (4)].intval)); }
    break;

  case 1233:
#line 4314 "./sql3.y"
    { (yyval.tree) = t_listst (2, UDT_METHOD_ADD, (yyvsp[(2) - (2)].tree)); }
    break;

  case 1234:
#line 4315 "./sql3.y"
    { (yyval.tree) = t_listst (3, UDT_METHOD_DROP, (yyvsp[(2) - (3)].tree), (ptrlong) (yyvsp[(3) - (3)].intval)); }
    break;

  case 1235:
#line 4319 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 1236:
#line 4320 "./sql3.y"
    { (yyval.box) = t_box_num (1); }
    break;

  case 1237:
#line 4321 "./sql3.y"
    { (yyval.box) = t_box_num (2); }
    break;

  case 1238:
#line 4325 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 1239:
#line 4326 "./sql3.y"
    { (yyval.box) = t_box_num (1); }
    break;

  case 1240:
#line 4331 "./sql3.y"
    {
	     (yyval.tree) = (ST*) t_list (3, CALL_STMT, t_sqlp_box_id_upcase ("DB.DBA.CLR_CREATE_LIBRARY"),
		 t_list (4, (yyvsp[(5) - (7)].tree), (yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].box), (yyvsp[(6) - (7)].box)));
	   }
    break;

  case 1241:
#line 4339 "./sql3.y"
    {
	     (yyval.tree) = (ST*) t_list (3, CALL_STMT, t_sqlp_box_id_upcase ("DB.DBA.CLR_CREATE_ASSEMBLY"),
		 t_list (4, (yyvsp[(5) - (7)].tree), (yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].box), (yyvsp[(6) - (7)].box)));
	   }
    break;

  case 1242:
#line 4347 "./sql3.y"
    {
	     (yyval.tree) = (ST*) t_list (3, CALL_STMT, t_sqlp_box_id_upcase ("DB.DBA.CLR_DROP_LIBRARY"),
		 t_list (1, (yyvsp[(3) - (3)].strval)));
	   }
    break;

  case 1243:
#line 4355 "./sql3.y"
    {
	     (yyval.tree) = (ST*) t_list (3, CALL_STMT, t_sqlp_box_id_upcase ("DB.DBA.CLR_DROP_LIBRARY"),
		 t_list (1, (yyvsp[(3) - (3)].strval)));
	   }
    break;

  case 1244:
#line 4366 "./sql3.y"
    { (yyval.tree) = t_listst (5, NULL, NULL, (ptrlong)CP_INT, t_box_num (0xffff), NULL); }
    break;

  case 1245:
#line 4367 "./sql3.y"
    { (yyval.tree) = t_listst (5, NULL, NULL, (ptrlong)CP_INT, (yyvsp[(3) - (4)].box), NULL); }
    break;

  case 1246:
#line 4368 "./sql3.y"
    { (yyval.tree) = t_listst (5, NULL, NULL, (ptrlong)CP_INT, t_box_num (0xffff), NULL); }
    break;

  case 1247:
#line 4369 "./sql3.y"
    { (yyval.tree) = t_listst (5, NULL, NULL, (ptrlong)CP_INT, (yyvsp[(3) - (4)].box), NULL); }
    break;

  case 1248:
#line 4370 "./sql3.y"
    { (yyval.tree) = t_listst (5, NULL, NULL, (ptrlong)CP_WORD, NULL, t_box_num (0xffff)); }
    break;

  case 1249:
#line 4371 "./sql3.y"
    { (yyval.tree) = t_listst (5, NULL, NULL, (ptrlong)CP_WORD, (yyvsp[(3) - (6)].box), (yyvsp[(5) - (6)].box)); }
    break;

  case 1250:
#line 4372 "./sql3.y"
    { (yyval.tree) = t_listst (5, NULL, NULL, (ptrlong)CP_WORD, t_box_num (- unbox ((yyvsp[(4) - (7)].box))), (yyvsp[(6) - (7)].box)); }
    break;

  case 1251:
#line 4377 "./sql3.y"
    { (yyval.box) = (yyvsp[(1) - (1)].box); if (!cl_name_to_host ((yyvsp[(1) - (1)].box))) yyerror ("undefined host name in cluster def"); }
    break;

  case 1252:
#line 4381 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].box), NULL); }
    break;

  case 1253:
#line 4382 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].box), NULL)); }
    break;

  case 1254:
#line 4386 "./sql3.y"
    { (yyval.box) = t_listbox (2, (yyvsp[(2) - (5)].box), (yyvsp[(4) - (5)].box)); }
    break;

  case 1255:
#line 4390 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].box), NULL); }
    break;

  case 1256:
#line 4391 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].box), NULL)); }
    break;

  case 1257:
#line 4396 "./sql3.y"
    { (yyval.tree) = t_listst (3, NULL, t_list_to_array ((yyvsp[(3) - (4)].list)), NULL); }
    break;

  case 1258:
#line 4397 "./sql3.y"
    { (yyval.tree) = t_listst (3, NULL, t_list_to_array ((yyvsp[(3) - (6)].list)), t_list_to_array ((yyvsp[(6) - (6)].list))); }
    break;

  case 1259:
#line 4402 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 1260:
#line 4403 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 1261:
#line 4407 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 1262:
#line 4408 "./sql3.y"
    { (yyval.box) = (caddr_t) 1;}
    break;

  case 1263:
#line 4413 "./sql3.y"
    { (yyval.tree) = t_listst (4, CLUSTER_DEF, t_box_string ((yyvsp[(3) - (5)].box)), (yyvsp[(4) - (5)].box), t_list_to_array ((yyvsp[(5) - (5)].list))); }
    break;

  case 1264:
#line 4417 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(2) - (2)].tree), NULL); (yyvsp[(2) - (2)].tree)->_.col_part.col = (yyvsp[(1) - (2)].box); }
    break;

  case 1265:
#line 4418 "./sql3.y"
    { (yyvsp[(4) - (4)].tree)->_.col_part.col = (yyvsp[(3) - (4)].box); (yyval.list) = t_NCONC ((yyvsp[(1) - (4)].list), (yyvsp[(4) - (4)].tree));}
    break;

  case 1266:
#line 4422 "./sql3.y"
    { (yyval.list) = NULL;}
    break;

  case 1267:
#line 4423 "./sql3.y"
    { (yyval.list) = (yyvsp[(2) - (3)].list); }
    break;

  case 1268:
#line 4426 "./sql3.y"
    { (yyval.box) = t_sym_string  ("__ALL"); }
    break;

  case 1269:
#line 4427 "./sql3.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 1270:
#line 4433 "./sql3.y"
    { (yyval.tree) = t_listst (5, PARTITION_DEF,  (yyvsp[(5) - (8)].strval), (yyvsp[(3) - (8)].box), (yyvsp[(7) - (8)].box), t_list_to_array ((yyvsp[(8) - (8)].list))); }
    break;


/* Line 1267 of yacc.c.  */
#line 14570 "sql3.c"
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



