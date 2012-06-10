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
#line 57 "./sql3.y"


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
#line 95 "./sql3.y"
{
  long intval;
  char *strval;
  sql_tree_t *tree;
  caddr_t box;
  dk_set_t list;
  long subtok;
  sqlp_join_t join;
}
/* Line 187 of yacc.c.  */
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
#define YYFINAL  339
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   22182

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  374
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  401
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1270
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2462

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
     585,   587,   591,   593,   599,   604,   609,   611,   613,   618,
     623,   624,   630,   643,   644,   648,   649,   653,   654,   658,
     664,   672,   680,   687,   695,   701,   702,   706,   713,   720,
     727,   734,   739,   740,   744,   747,   749,   751,   753,   757,
     760,   762,   764,   767,   770,   772,   776,   778,   780,   785,
     789,   793,   797,   802,   806,   811,   815,   821,   827,   833,
     834,   840,   851,   852,   855,   856,   861,   862,   865,   866,
     870,   872,   874,   876,   882,   889,   890,   894,   896,   900,
     903,   906,   907,   909,   911,   917,   923,   929,   930,   932,
     933,   936,   944,   951,   952,   955,   960,   961,   964,   969,
     985,   986,   989,   990,   994,  1001,  1008,  1009,  1011,  1012,
    1016,  1017,  1023,  1024,  1027,  1028,  1031,  1032,  1035,  1037,
    1039,  1041,  1043,  1045,  1047,  1049,  1051,  1053,  1055,  1059,
    1061,  1063,  1065,  1067,  1069,  1071,  1073,  1075,  1077,  1079,
    1081,  1083,  1085,  1087,  1089,  1091,  1093,  1096,  1099,  1102,
    1111,  1117,  1122,  1128,  1135,  1137,  1139,  1141,  1142,  1145,
    1153,  1158,  1160,  1162,  1166,  1168,  1170,  1173,  1175,  1177,
    1179,  1181,  1183,  1185,  1188,  1193,  1196,  1200,  1204,  1206,
    1209,  1212,  1215,  1218,  1220,  1224,  1225,  1230,  1231,  1237,
    1239,  1242,  1244,  1248,  1249,  1253,  1257,  1260,  1261,  1264,
    1272,  1274,  1278,  1280,  1284,  1289,  1294,  1296,  1298,  1300,
    1302,  1304,  1306,  1309,  1312,  1315,  1318,  1321,  1323,  1326,
    1327,  1331,  1332,  1334,  1336,  1337,  1340,  1342,  1347,  1354,
    1361,  1370,  1372,  1380,  1390,  1391,  1393,  1397,  1401,  1408,
    1410,  1414,  1416,  1418,  1420,  1421,  1423,  1424,  1426,  1428,
    1434,  1441,  1446,  1452,  1457,  1463,  1465,  1467,  1469,  1472,
    1474,  1480,  1487,  1492,  1498,  1503,  1509,  1511,  1514,  1516,
    1521,  1524,  1530,  1532,  1534,  1535,  1541,  1546,  1551,  1555,
    1559,  1565,  1567,  1570,  1572,  1575,  1580,  1588,  1591,  1593,
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
     378,    -1,   424,    -1,   705,    -1,   420,    -1,   421,    -1,
     419,    -1,   758,    -1,   759,    -1,   760,    -1,   761,    -1,
     379,    -1,   414,    -1,   378,   379,    -1,   378,   414,    -1,
     383,    -1,   407,    -1,   774,    -1,   410,    -1,   408,    -1,
     415,    -1,   429,    -1,   431,    -1,   439,    -1,   440,    -1,
     438,    -1,   441,    -1,   442,    -1,   443,    -1,   711,    -1,
     713,    -1,   754,    -1,   770,    -1,     3,    -1,    24,    -1,
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
     140,    91,    -1,   131,   192,   602,   368,   384,   369,   382,
      -1,   131,   192,   602,   101,   519,   381,    -1,   385,    -1,
     384,   370,   385,    -1,   386,    -1,   400,    -1,   610,   609,
     394,    -1,    -1,   388,    -1,   388,   388,    -1,   172,   195,
     391,    -1,   389,    -1,   172,   138,   391,    -1,    -1,   389,
      -1,   124,    -1,   187,   169,    -1,   187,   137,    -1,    -1,
      47,    48,    -1,    47,    46,    -1,    45,    48,    -1,    45,
      46,    -1,   181,   599,   427,   387,   392,    -1,    -1,   394,
     398,    -1,    92,   201,   598,    -1,   305,   123,     7,    -1,
      41,   306,    -1,   306,   116,    -1,   306,    60,    -1,   395,
      -1,   397,   370,   395,    -1,   106,   169,    -1,   169,    -1,
     281,    -1,   281,   368,   397,   369,    -1,   176,   165,    -1,
     396,    -1,   137,   598,    -1,   311,   599,    -1,   393,    -1,
     318,   123,   610,    -1,   126,   368,   552,   369,    -1,   201,
     185,   399,    -1,   194,    -1,   368,     4,   370,     4,   369,
      -1,   368,     4,   370,     4,   370,     4,   369,    -1,   208,
     599,    -1,   401,   176,   165,   368,   403,   369,   406,    -1,
     401,   147,   165,   368,   402,   369,   393,    -1,   401,   126,
     368,   552,   369,    -1,   401,   194,   368,   402,   369,    -1,
     401,   153,   406,   368,   403,   369,    -1,    -1,   129,   380,
      -1,   610,    -1,   402,   370,   610,    -1,   610,   455,    -1,
     403,   370,   610,   455,    -1,   210,    -1,   194,    -1,   206,
      -1,   207,    -1,   140,    -1,    91,    -1,   106,   169,    -1,
      41,   176,   165,    87,    -1,   158,    -1,   404,    -1,   405,
     404,    -1,    -1,   405,    -1,   131,   406,   157,   611,   172,
     599,   368,   403,   369,    -1,   131,   406,   157,   611,   172,
     599,   368,   403,   369,   307,   773,   772,    -1,   142,   157,
     380,   409,    -1,    -1,   599,    -1,   142,   192,   599,    -1,
     142,   198,   599,    -1,    -1,    91,    -1,   386,    -1,   412,
     370,   386,    -1,   610,    -1,   413,   370,   610,    -1,   230,
     192,   599,   231,   411,   412,    -1,   230,   192,   599,   142,
     411,   413,    -1,   230,   192,   599,   234,   411,   386,    -1,
     230,   192,   599,   232,   602,    -1,   231,    -1,   142,    -1,
     234,    -1,    -1,   124,    -1,   182,    -1,   129,   380,   417,
      -1,   400,    -1,   230,   192,   599,   416,   418,    -1,   131,
     301,   185,     4,    -1,   142,   301,   185,     4,    -1,   519,
      -1,   529,    -1,   427,   101,   422,   426,    -1,   427,   101,
     224,   518,    -1,    -1,   131,   198,   602,   425,   423,    -1,
     131,   178,   198,   602,   101,   599,   368,   539,   369,   368,
     537,   369,    -1,    -1,   201,   126,   174,    -1,    -1,   368,
     402,   369,    -1,    -1,   368,   402,   369,    -1,   152,   115,
     177,   193,   437,    -1,   152,   433,   172,   603,   193,   436,
     432,    -1,   152,   271,   172,   577,   193,   436,   432,    -1,
     152,   272,   172,     4,   193,   436,    -1,   152,   208,   172,
     709,   193,   436,   432,    -1,   152,   436,   193,   436,   430,
      -1,    -1,   201,    68,   174,    -1,   263,   433,   172,   603,
     149,   436,    -1,   263,   271,   172,   577,   149,   436,    -1,
     263,   208,   172,   709,   149,   436,    -1,   263,   272,   172,
       4,   149,   436,    -1,   263,   436,   149,   436,    -1,    -1,
     201,   152,   174,    -1,   115,   177,    -1,   115,    -1,   434,
      -1,   435,    -1,   434,   370,   435,    -1,   186,   428,    -1,
     161,    -1,   138,    -1,   195,   428,    -1,   181,   428,    -1,
     437,    -1,   436,   370,   437,    -1,   179,    -1,   614,    -1,
     187,   264,   380,   380,    -1,   131,   196,   614,    -1,   131,
      69,   614,    -1,   138,   196,   614,    -1,   138,   196,   614,
     124,    -1,   142,   196,   614,    -1,   142,   196,   614,   124,
      -1,   142,    69,   614,    -1,   187,   196,   153,   614,   614,
      -1,   231,   196,   153,   614,   614,    -1,   138,   196,   153,
     614,   614,    -1,    -1,   176,   165,   368,   402,   369,    -1,
     117,   192,   600,   444,   446,   149,   597,   447,   448,   449,
      -1,    -1,   101,   602,    -1,    -1,   196,   566,   264,   566,
      -1,    -1,   106,   186,    -1,    -1,    63,   101,   566,    -1,
      88,    -1,    90,    -1,    64,    -1,   136,   380,   134,    96,
     519,    -1,   136,   380,   450,   134,    96,   519,    -1,    -1,
      97,   123,   453,    -1,   454,    -1,   453,   370,   454,    -1,
     566,   455,    -1,   572,   455,    -1,    -1,   118,    -1,   139,
      -1,   131,   317,   266,    96,   599,    -1,   142,   317,   266,
      96,   599,    -1,   316,   317,   266,    96,   599,    -1,    -1,
       4,    -1,    -1,   200,     4,    -1,   131,   317,   599,   149,
     599,   459,   460,    -1,   131,   315,   317,   599,   101,     4,
      -1,    -1,   201,   138,    -1,   142,   317,   599,   462,    -1,
      -1,   101,   315,    -1,   195,   317,   599,   464,    -1,   131,
      60,   471,   157,   172,   599,   368,   610,   369,   472,   476,
     473,   467,   474,   475,    -1,    -1,   289,   242,    -1,    -1,
     368,   610,   369,    -1,   131,    60,   238,   172,   599,   468,
      -1,   142,    60,   238,   172,   599,   468,    -1,    -1,   301,
      -1,    -1,   201,   165,   610,    -1,    -1,   210,   201,   368,
     402,   369,    -1,    -1,   166,     4,    -1,    -1,   167,     4,
      -1,    -1,   106,   161,    -1,   477,    -1,   520,    -1,   529,
      -1,   510,    -1,   513,    -1,   486,    -1,   481,    -1,   482,
      -1,   664,    -1,   745,    -1,    26,   253,   745,    -1,   749,
      -1,   666,    -1,   706,    -1,   480,    -1,   498,    -1,   617,
      -1,   478,    -1,   445,    -1,   456,    -1,   457,    -1,   458,
      -1,   461,    -1,   463,    -1,   465,    -1,   466,    -1,   469,
      -1,   470,    -1,   291,   380,    -1,   127,   612,    -1,   128,
     202,    -1,   138,   149,   603,   200,   133,   171,   612,   492,
      -1,   138,   149,   603,   516,   492,    -1,   145,   612,   163,
     514,    -1,   145,   612,     3,   163,   514,    -1,   145,   612,
       3,   566,   163,   514,    -1,   163,    -1,   215,    -1,   216,
      -1,    -1,   157,     3,    -1,   161,   484,   603,   485,   492,
     428,   487,    -1,   197,   368,   488,   369,    -1,   528,    -1,
     489,    -1,   488,   370,   489,    -1,   566,    -1,    97,    -1,
     116,    97,    -1,   223,    -1,   221,    -1,   204,    -1,   217,
      -1,   100,    -1,   218,    -1,   218,   144,    -1,   255,   106,
     218,   144,    -1,   157,   380,    -1,   157,   176,   165,    -1,
     157,    60,   165,    -1,   159,    -1,   201,     4,    -1,    41,
     209,    -1,   163,   566,    -1,     3,     7,    -1,   490,    -1,
     491,   370,   490,    -1,    -1,   174,   368,   491,   369,    -1,
      -1,   192,   174,   368,   491,   369,    -1,   256,    -1,   257,
       7,    -1,   494,    -1,   495,   370,   494,    -1,    -1,   368,
     495,   369,    -1,   173,   612,   496,    -1,   183,   202,    -1,
      -1,   201,   496,    -1,   186,   509,   532,   163,   514,   534,
     499,    -1,     7,    -1,   501,   370,     7,    -1,     7,    -1,
     368,   501,   369,    -1,   340,   368,   566,   369,    -1,   341,
     368,   566,   369,    -1,   345,    -1,   346,    -1,   348,    -1,
     349,    -1,   347,    -1,   344,    -1,   342,   502,    -1,   343,
     502,    -1,   350,     7,    -1,   339,     3,    -1,   351,     7,
      -1,   503,    -1,   504,   503,    -1,    -1,   222,   506,   504,
      -1,    -1,   115,    -1,   140,    -1,    -1,   201,   300,    -1,
     507,    -1,   507,   298,     7,   508,    -1,   507,   298,   368,
     566,   369,   508,    -1,   507,   298,     7,   370,     7,   508,
      -1,   507,   298,   368,   566,   370,   566,   369,   508,    -1,
     505,    -1,   507,   298,     7,   370,   111,     7,   508,    -1,
     195,   603,   187,   511,   200,   133,   171,   612,   492,    -1,
      -1,   512,    -1,   511,   370,   512,    -1,   610,   107,   566,
      -1,   195,   603,   187,   511,   516,   492,    -1,   515,    -1,
     514,   370,   515,    -1,   604,    -1,   750,    -1,   575,    -1,
      -1,   548,    -1,    -1,   297,    -1,   523,    -1,   521,   517,
      99,   526,   525,    -1,   521,   517,    99,   115,   526,   525,
      -1,   521,   100,   526,   525,    -1,   521,   100,   115,   526,
     525,    -1,   521,    98,   526,   525,    -1,   521,    98,   115,
     526,   525,    -1,   518,    -1,   524,    -1,   518,    -1,   224,
     518,    -1,   522,    -1,   521,   517,    99,   526,   522,    -1,
     521,   517,    99,   115,   526,   522,    -1,   521,   100,   526,
     522,    -1,   521,   100,   115,   526,   522,    -1,   521,    98,
     526,   522,    -1,   521,    98,   115,   526,   522,    -1,   527,
      -1,   302,     4,    -1,   528,    -1,   368,   520,   369,   452,
      -1,   302,     4,    -1,   368,   224,   518,   369,   452,    -1,
     523,    -1,   524,    -1,    -1,   296,   123,   368,   402,   369,
      -1,   186,   509,   532,   533,    -1,   186,   509,   532,   534,
      -1,   186,   509,   532,    -1,   368,   584,   369,    -1,   368,
     584,   200,   552,   369,    -1,   530,    -1,   531,   530,    -1,
     584,    -1,   122,   531,    -1,   535,   516,   549,   550,    -1,
     535,   516,   549,   550,   452,   551,   492,    -1,   149,   536,
      -1,   540,    -1,   536,   370,   540,    -1,   386,    -1,   537,
     370,   386,    -1,   368,   537,   369,    -1,    -1,   402,    -1,
     603,    -1,   368,   520,   369,   380,    -1,   368,   520,   369,
     101,   380,    -1,   545,    -1,   599,   368,   539,   369,   538,
     380,    -1,   603,    -1,   565,   380,    -1,   565,   101,   380,
      -1,   368,   545,   369,    -1,    -1,   282,   543,    -1,   283,
     543,    -1,   284,   543,    -1,   286,    -1,   287,    -1,    -1,
     285,    -1,   288,   542,    -1,   542,    -1,   546,    -1,   276,
     546,   251,    -1,   368,   546,   369,    -1,   540,   544,   290,
     541,   547,    -1,    -1,   172,   552,    -1,   289,   368,   402,
     369,    -1,   200,   552,    -1,    -1,   153,   123,   453,    -1,
     153,   123,   184,   368,   453,   369,    -1,   153,   123,   132,
     368,   453,   369,    -1,    -1,   155,   552,    -1,    -1,    96,
     195,    -1,    96,   301,     3,    -1,    96,   301,     3,     3,
      -1,   552,   104,   552,    -1,   552,   105,   552,    -1,   106,
     552,    -1,   368,   552,   369,    -1,   553,    -1,   555,    -1,
     556,    -1,   557,    -1,   559,    -1,   560,    -1,   561,    -1,
     563,    -1,   554,    -1,   566,    -1,   566,   107,   566,    -1,
     566,   106,   120,   566,   105,   566,    -1,   566,   120,   566,
     105,   566,    -1,   566,   106,   168,   566,   558,    -1,   566,
     168,   566,   558,    -1,    -1,   143,   586,    -1,   250,   143,
     586,   251,    -1,   566,   164,   106,   169,    -1,   566,   164,
     169,    -1,   566,   106,   156,   565,    -1,   566,   156,   565,
      -1,   566,   106,   156,   368,   583,   369,    -1,   566,   156,
     368,   583,   369,    -1,   566,   107,   562,   565,    -1,   116,
      -1,   115,    -1,   189,    -1,   144,   565,    -1,   565,    -1,
     368,   518,   369,    -1,   368,   224,   518,   369,    -1,   566,
     111,   566,    -1,   566,   110,   566,    -1,   566,   112,   566,
      -1,   566,   113,   566,    -1,   110,   566,    -1,   111,   566,
      -1,   659,    -1,   707,    -1,   604,    -1,   567,    -1,   582,
      -1,   585,    -1,   596,    -1,   564,    -1,   368,   566,   369,
      -1,   368,   566,   370,   583,   369,    -1,   581,    -1,   753,
      -1,   569,    -1,   571,    -1,   587,    -1,   588,    -1,   593,
      -1,   594,    -1,   574,    -1,   745,    -1,   748,    -1,   750,
      -1,   585,    -1,   596,    -1,   564,    -1,   368,   566,   369,
      -1,   368,   566,   370,   583,   369,    -1,   581,    -1,   753,
      -1,   569,    -1,   571,    -1,   587,    -1,   588,    -1,   593,
      -1,   594,    -1,   574,    -1,   745,    -1,   748,    -1,   751,
      -1,   278,   368,   606,   370,   566,   369,    -1,    -1,   311,
     599,    -1,   293,   368,   566,   101,   606,   570,   369,    -1,
      20,    23,    22,    -1,    20,    23,    21,    -1,    20,    23,
      19,    22,    -1,   566,   101,   380,   606,    -1,   566,   101,
     380,    -1,   566,   380,    -1,   566,   101,   572,    -1,   566,
     101,     4,    -1,   566,     4,    -1,   567,   660,    -1,   575,
      -1,   604,   660,    -1,    -1,   583,    -1,   380,    -1,   380,
     371,   752,    -1,   380,   371,   380,   371,   752,    -1,   380,
     371,   380,   371,   380,   371,   752,    -1,   380,   371,   371,
     752,    -1,   380,   371,   371,   380,   371,   752,    -1,   282,
      -1,   283,    -1,   266,    -1,   380,   320,   566,    -1,   578,
     370,   380,   320,   566,    -1,   573,    -1,   579,   370,   573,
      -1,   579,   370,   566,    -1,    -1,   578,    -1,   583,    -1,
     583,   370,   578,    -1,   583,   370,   579,    -1,   579,    -1,
     577,   368,   580,   369,    -1,    17,   368,    16,   370,   566,
     370,   566,   369,    -1,   319,   368,     3,   149,   566,   369,
      -1,   274,   380,   368,   576,   369,   251,    -1,   274,   282,
     368,   576,   369,   251,    -1,   274,   283,   368,   576,   369,
     251,    -1,   274,   266,   368,   576,   369,   251,    -1,   274,
     380,   368,   566,   156,   566,   369,   251,    -1,   275,   577,
     368,   576,   369,   251,    -1,   275,   577,   251,    -1,   274,
     196,   368,   576,   369,   251,    -1,   274,   125,   368,   576,
     369,   251,    -1,   274,    17,   368,    16,   370,   566,   370,
     566,   369,   251,    -1,   274,   278,   368,   566,   370,     3,
     369,   251,    -1,   274,   319,   368,     3,   149,   566,   369,
     251,    -1,   253,   368,   566,   369,   368,   580,   369,    -1,
     322,    -1,   323,    -1,   323,   368,   566,   369,    -1,   324,
      -1,   324,   368,   566,   369,    -1,   154,   368,   604,   369,
      -1,    14,   599,   251,    -1,    14,   599,   368,   576,   369,
     251,    -1,   250,   380,   586,   251,    -1,   277,     4,   251,
      -1,   566,    -1,   583,   370,   566,    -1,   566,    -1,   573,
      -1,   584,   370,   566,    -1,   584,   370,   573,    -1,   595,
      -1,   597,    -1,   196,    -1,   585,    -1,   582,    -1,   279,
     566,   590,   251,    -1,   279,   589,   251,    -1,   592,    -1,
     589,   592,    -1,   591,    -1,   590,   591,    -1,   280,   566,
     246,   566,    -1,   247,   566,    -1,   280,   552,   246,   566,
      -1,   247,   566,    -1,   292,   368,   583,   369,    -1,   294,
     368,   566,   370,   566,   369,    -1,   613,    -1,   613,   613,
      -1,   613,   160,   613,    -1,   241,   577,   368,   580,   369,
      -1,    11,   368,   140,   566,   369,    -1,    11,   368,   115,
     566,   369,    -1,    11,   368,   566,   369,    -1,     4,    -1,
       5,    -1,     6,    -1,     7,    -1,     9,    -1,    18,    -1,
       8,    -1,   169,    -1,    93,   171,   606,    -1,    93,   171,
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
     371,   371,   380,    -1,   599,   493,    -1,   599,   101,   380,
     493,    -1,   599,   380,   493,    -1,   380,    -1,   380,   371,
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
      -1,   219,    -1,   220,    -1,   605,    -1,   125,    -1,   211,
      -1,   211,   368,     7,   369,    -1,   125,   368,     7,   369,
      -1,   204,    -1,   204,   372,     7,   373,    -1,   608,   607,
      -1,   606,    -1,   708,    -1,   605,    -1,   125,    -1,   211,
      -1,   211,   368,     7,   369,    -1,   125,   368,     7,   369,
      -1,   708,    -1,   214,   708,    -1,   214,   116,    -1,   214,
     301,    -1,   380,    -1,   380,   371,   380,   371,   380,   371,
     380,    -1,   380,    -1,   380,    -1,    12,    -1,    13,    -1,
     380,    -1,    -1,     4,    -1,    -1,   370,     4,    -1,   225,
     615,    -1,   226,   615,    -1,   226,     4,     4,    -1,   227,
       4,    -1,   126,    -1,   229,   228,   615,   616,    -1,   233,
     228,   615,    -1,   266,   172,    -1,   266,   265,    -1,   618,
      -1,   621,    -1,   624,    -1,   744,    -1,   676,    -1,   684,
      -1,   685,    -1,   131,   241,   602,   627,   626,   149,   601,
     370,   601,   370,   601,   619,   620,    -1,    -1,   370,   601,
      -1,    -1,    97,    -1,   131,   625,   602,   627,   626,   636,
     641,    -1,   117,   625,   600,   627,   626,   636,   446,   149,
     597,    -1,   131,   625,   602,   627,   626,   636,   166,   741,
     310,    59,     4,   725,    -1,   625,   380,   627,   626,   636,
     641,    -1,   622,   367,    -1,   623,   622,   367,    -1,   131,
     273,   602,   250,   623,   251,    -1,   242,    -1,   178,    -1,
      -1,   254,   608,    -1,   368,   369,    -1,   368,   628,   369,
      -1,   629,    -1,   628,   370,   629,    -1,   630,   604,   608,
     636,    -1,   630,   604,   608,   137,   598,   636,    -1,   630,
     604,   608,   108,   598,   636,    -1,   156,    -1,   243,    -1,
      62,    -1,    -1,   630,    -1,    -1,    81,   156,    -1,    81,
     243,    -1,    81,    62,    -1,    82,   156,    -1,    82,   243,
      -1,    82,    62,    -1,   634,    -1,   633,   370,   634,    -1,
       3,   108,   598,    -1,    78,    -1,    75,    -1,    80,    -1,
      73,    -1,    79,    -1,    74,    -1,    76,    -1,    -1,    83,
     368,   635,   108,     4,   632,   370,   633,   369,    -1,   635,
       4,   632,    -1,     7,    -1,     9,    -1,   637,    -1,   638,
     370,   637,    -1,   366,   368,   638,   369,    -1,   500,    -1,
     510,    -1,   513,    -1,   486,    -1,   481,    -1,   482,    -1,
     479,    -1,   483,    -1,   497,    -1,   498,    -1,   480,    -1,
     639,    -1,    -1,    -1,   250,   642,   643,   251,    -1,   644,
      -1,   643,   644,    -1,   650,   367,    -1,   641,    -1,    -1,
     645,   646,    -1,   640,   367,    -1,   658,    -1,   380,   103,
     644,    -1,    15,    -1,   107,   566,    15,    -1,   113,   566,
      15,    -1,   224,   518,   367,    -1,   641,    -1,    -1,   648,
     640,   367,    -1,    -1,   649,   658,    -1,   451,    -1,   651,
      -1,   655,    -1,   136,   652,   608,    -1,   380,    -1,   652,
     370,   380,    -1,   106,   148,    -1,   258,     4,    -1,   258,
      65,     4,    -1,   260,    -1,   259,    -1,   641,    -1,   640,
      -1,   664,    -1,   748,    -1,   745,    -1,   666,    -1,   262,
      -1,   262,   566,    -1,   668,    -1,   659,    -1,   662,    -1,
     667,    -1,   675,    -1,   669,    -1,   199,   653,   150,   380,
      -1,   199,   653,   151,   193,   380,    -1,   199,   653,   137,
      -1,   136,   656,   244,    96,   657,   654,    -1,   130,    -1,
     261,    -1,   653,    -1,   657,   370,   653,    -1,   664,   367,
      -1,   748,   367,    -1,   745,   367,    -1,   666,   367,    -1,
     262,   367,    -1,   262,   566,   367,    -1,   668,   367,    -1,
     659,   367,    -1,   662,    -1,   667,   367,    -1,   675,    -1,
     669,    -1,   661,   108,   566,    -1,   604,   660,   108,   566,
      -1,   372,   566,   373,    -1,   660,   372,   566,   373,    -1,
     604,    -1,   750,    -1,   245,   368,   552,   369,   647,   663,
      -1,    -1,   247,   647,    -1,   253,   577,   368,   580,   369,
      -1,   224,   581,    -1,   581,    -1,   334,   336,    -1,   334,
     335,    -1,   337,   334,    -1,   338,    -1,   187,   380,   107,
     566,    -1,   187,   380,   172,    -1,   187,   380,   265,    -1,
     187,   331,   332,   333,   665,    -1,   150,   380,    -1,   151,
     193,   380,    -1,   252,   566,    -1,   252,    -1,   249,   368,
     552,   369,   647,    -1,   659,    -1,   651,    -1,   664,    -1,
     745,    -1,    -1,   670,    -1,   671,   370,   670,    -1,   659,
      -1,   664,    -1,   745,    -1,    -1,   672,    -1,   673,   370,
     672,    -1,    -1,   552,    -1,    96,   519,   255,   647,    -1,
      96,   368,   671,   367,   674,   367,   673,   369,   647,    -1,
      84,   368,   608,   380,   156,   566,   369,   255,   647,    -1,
     131,   238,   380,   679,   680,   172,   599,   677,   681,   678,
      -1,    -1,    97,     7,    -1,   641,    -1,   235,    -1,   236,
      -1,   237,   171,    -1,   161,    -1,   195,   427,    -1,   138,
      -1,    -1,   239,   682,    -1,   683,    -1,   682,   370,   683,
      -1,   240,   101,   380,    -1,   295,   101,   380,    -1,   142,
     238,   599,    -1,   142,   241,   599,    -1,   142,   625,   599,
      -1,   142,   273,   599,    -1,    -1,   101,   380,    -1,   604,
      -1,   566,   101,   380,    -1,   566,   156,   380,    -1,   687,
      -1,   688,   370,   687,    -1,   368,   688,   369,    -1,    -1,
     176,   165,   368,   402,   369,    -1,    -1,   172,   368,   552,
     369,    -1,    -1,     3,    -1,   599,   380,   686,   689,   691,
     690,   692,   694,    -1,    -1,   250,   696,   251,    -1,   528,
      -1,   250,   696,   251,    -1,   693,    -1,   696,   370,   693,
      -1,    -1,   303,    -1,    -1,   304,     7,    -1,    -1,   308,
     309,    -1,   308,   310,    -1,   308,     4,    -1,   185,   310,
      -1,   185,     4,    -1,    -1,   179,     4,   380,     4,   697,
     698,   699,    -1,     3,    -1,     4,    -1,     3,   107,   701,
      -1,   702,    -1,   703,   702,    -1,    -1,   372,   703,   373,
      -1,   131,   301,   198,   602,   101,   704,   695,   692,   700,
      -1,   142,   301,   198,   599,    -1,   566,   109,   566,    -1,
     380,    -1,   380,   371,   380,    -1,   380,   371,   380,   371,
     380,    -1,   380,   371,   371,   380,    -1,   380,    -1,   380,
     371,   380,    -1,   380,   371,   380,   371,   380,    -1,   380,
     371,   371,   380,    -1,   380,    -1,   380,   371,   380,    -1,
     380,   371,   380,   371,   380,    -1,   380,   371,   371,   380,
      -1,    -1,   131,    24,   710,   715,   714,   712,   716,   725,
     728,    -1,   142,    24,   709,   417,    -1,    -1,   166,   742,
     310,    59,     4,    -1,   310,    59,     4,   166,   742,    -1,
     166,   742,    -1,    -1,   208,   708,    -1,    -1,   101,   717,
      -1,   368,   718,   369,    -1,   722,    -1,   718,   370,   722,
      -1,    -1,   310,    59,     4,    -1,   310,    59,     4,   310,
      24,     4,    -1,   310,    24,     4,    -1,    -1,    77,     4,
      -1,    78,     4,    -1,    78,     4,    77,     4,    -1,    77,
       4,    78,     4,    -1,    -1,   310,    24,     4,    -1,   380,
     608,   723,   724,   570,   719,   720,    -1,    -1,   181,    86,
      27,   390,    -1,   181,    86,   106,    27,    -1,    -1,   137,
     598,    -1,    -1,   726,    -1,   727,    -1,   726,   727,    -1,
      25,    -1,   106,    25,    -1,    87,   289,   608,    -1,    87,
     149,   368,   402,   369,    -1,    87,   164,    28,    29,    -1,
     293,   368,    30,   101,    87,   369,   201,   380,    -1,   293,
     368,    87,   101,    30,   369,   201,   380,    -1,    35,   101,
      87,    -1,    70,    -1,   330,    -1,    78,     4,    -1,    -1,
     729,    -1,   735,    -1,   729,   370,   735,    -1,    -1,    88,
      -1,    33,    -1,   368,   369,    -1,   368,   732,   369,    -1,
     733,    -1,   732,   370,   733,    -1,   631,   604,   608,   721,
      -1,   730,    26,   752,   731,   254,   608,   737,    -1,    34,
      26,   752,   731,   737,    -1,   734,   736,   738,    -1,    36,
     734,    -1,    -1,    35,   101,    31,    -1,    35,   101,    32,
      -1,    35,   101,    31,    35,   101,    32,    -1,    -1,    89,
     602,    -1,    -1,   739,    -1,   740,    -1,   739,   740,    -1,
     166,   742,    -1,    66,    37,    38,    -1,    66,    37,    39,
      -1,    40,    -1,   106,    40,    -1,    41,    38,    -1,    42,
      38,    -1,    43,    38,    44,    -1,    49,    38,    44,    -1,
     254,   169,   172,   169,    50,    -1,    51,   172,   169,    50,
      -1,   310,    59,     4,    -1,   310,    67,    59,     4,    -1,
     310,    24,     4,    -1,    52,    -1,    53,    -1,    54,    -1,
      55,    -1,    56,    -1,    57,    -1,    58,    -1,    61,    -1,
      71,    -1,   741,    -1,    38,    -1,    -1,   254,   710,    -1,
     131,   730,    26,   752,   627,   626,   636,    96,   708,   641,
      -1,   131,    34,    26,   599,   627,   743,    96,   708,   641,
      -1,   708,   102,   752,   368,   580,   369,    -1,   380,   371,
     380,   371,   380,   371,   752,    -1,   380,   371,   371,   380,
     371,   752,    -1,   380,   371,   746,    -1,   380,   371,   380,
     371,   380,   371,   380,   371,   752,    -1,   380,   371,   371,
     380,   371,   380,   371,   752,    -1,   380,   371,   747,    -1,
     568,   371,   752,   368,   580,   369,    -1,   747,   368,   580,
     369,    -1,   368,   567,   101,   708,   369,   371,   752,   368,
     580,   369,    -1,   368,   604,   101,   708,   369,   371,   752,
     368,   580,   369,    -1,    26,   253,   568,   371,   752,   368,
     580,   369,    -1,    26,   253,   747,   368,   580,   369,    -1,
      26,   253,   368,   567,   101,   708,   369,   371,   752,   368,
     580,   369,    -1,    26,   253,   368,   604,   101,   708,   369,
     371,   752,   368,   580,   369,    -1,   751,    -1,   380,   371,
     746,    -1,   568,   371,   752,    -1,   368,   567,   101,   708,
     369,   371,   752,    -1,   368,   604,   101,   708,   369,   371,
     752,    -1,   380,    -1,   319,    -1,   295,   708,   368,   580,
     369,    -1,   230,    24,   708,   755,    -1,   231,    72,   722,
      -1,   142,    72,   380,   417,    -1,   231,   735,    -1,   142,
     734,   417,    -1,    -1,   201,   325,   107,   329,    -1,   201,
     325,   107,   330,    -1,    -1,   201,   326,    -1,   131,   327,
     599,   101,   566,   756,   757,    -1,   131,   328,   599,   149,
     566,   756,   757,    -1,   142,   327,   599,    -1,   142,   328,
     599,    -1,   162,    -1,   162,   368,     7,   369,    -1,   121,
      -1,   121,   368,     7,   369,    -1,   211,    -1,   211,   368,
       7,   370,     7,   369,    -1,   211,   368,   111,     7,   370,
       7,   369,    -1,     3,    -1,   763,    -1,   764,   370,   763,
      -1,   368,     7,   370,     7,   369,    -1,   765,    -1,   766,
     370,   765,    -1,   153,   368,   764,   369,    -1,   153,   368,
     764,   369,   155,   766,    -1,   767,    -1,   768,   370,   767,
      -1,    -1,   137,    -1,   131,   209,     3,   769,   768,    -1,
       3,   762,    -1,   772,   370,     3,   762,    -1,    -1,   368,
     771,   369,    -1,    -1,   209,     3,    -1,   230,   157,     3,
     172,   599,   307,   773,   772,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   677,   677,   678,   681,   688,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   714,   715,   716,   717,   721,
     723,   724,   725,   726,   727,   729,   730,   731,   732,   733,
     734,   735,   736,   737,   738,   739,   740,   744,   745,   746,
     747,   748,   749,   750,   751,   752,   753,   754,   755,   756,
     757,   758,   759,   760,   761,   762,   763,   764,   765,   766,
     767,   768,   769,   770,   771,   772,   773,   774,   775,   776,
     777,   778,   779,   780,   781,   782,   783,   784,   785,   786,
     787,   788,   789,   790,   791,   792,   793,   794,   795,   796,
     797,   798,   799,   800,   801,   802,   803,   804,   805,   806,
     807,   808,   809,   810,   811,   812,   813,   814,   815,   816,
     817,   818,   819,   820,   821,   822,   823,   824,   825,   829,
     830,   831,   835,   836,   837,   842,   845,   850,   851,   856,
     857,   861,   866,   867,   871,   882,   883,   887,   891,   892,
     896,   897,   898,   902,   903,   904,   905,   906,   910,   918,
     919,   923,   924,   936,   937,   938,   943,   944,   948,   949,
     950,   951,   952,   953,   954,   955,   956,   957,   959,   960,
     969,   974,   975,   980,   982,   985,   987,   989,   994,   998,
     999,  1003,  1004,  1008,  1009,  1013,  1014,  1015,  1016,  1017,
    1018,  1019,  1020,  1021,  1025,  1026,  1030,  1031,  1035,  1038,
    1045,  1049,  1050,  1054,  1055,  1059,  1060,  1064,  1065,  1069,
    1070,  1074,  1084,  1094,  1101,  1107,  1108,  1109,  1113,  1114,
    1115,  1119,  1123,  1127,  1144,  1151,  1158,  1159,  1163,  1167,
    1174,  1174,  1177,  1185,  1186,  1190,  1191,  1195,  1196,  1200,
    1202,  1204,  1210,  1216,  1223,  1228,  1229,  1237,  1240,  1246,
    1252,  1258,  1263,  1264,  1268,  1281,  1294,  1298,  1299,  1304,
    1306,  1307,  1308,  1310,  1316,  1317,  1322,  1323,  1327,  1332,
    1333,  1337,  1338,  1339,  1340,  1341,  1345,  1350,  1355,  1361,
    1362,  1370,  1380,  1381,  1386,  1389,  1394,  1395,  1399,  1400,
    1408,  1409,  1410,  1415,  1419,  1426,  1427,  1431,  1432,  1437,
    1439,  1444,  1445,  1446,  1451,  1458,  1465,  1472,  1473,  1477,
    1478,  1482,  1486,  1493,  1494,  1498,  1505,  1506,  1510,  1523,
    1536,  1537,  1541,  1542,  1546,  1554,  1562,  1563,  1567,  1568,
    1572,  1573,  1577,  1578,  1582,  1583,  1587,  1588,  1593,  1597,
    1598,  1599,  1600,  1601,  1602,  1603,  1604,  1605,  1606,  1607,
    1608,  1609,  1610,  1611,  1612,  1613,  1614,  1615,  1616,  1617,
    1618,  1619,  1620,  1621,  1622,  1623,  1627,  1634,  1639,  1644,
    1649,  1656,  1658,  1663,  1671,  1672,  1673,  1678,  1679,  1684,
    1689,  1691,  1695,  1696,  1701,  1707,  1708,  1709,  1710,  1711,
    1712,  1713,  1714,  1715,  1716,  1717,  1718,  1719,  1720,  1721,
    1722,  1723,  1724,  1735,  1736,  1740,  1741,  1745,  1746,  1750,
    1751,  1755,  1756,  1761,  1762,  1766,  1772,  1777,  1778,  1782,
    1811,  1812,  1816,  1817,  1822,  1823,  1824,  1825,  1826,  1827,
    1828,  1829,  1830,  1831,  1832,  1833,  1834,  1839,  1840,  1844,
    1844,  1850,  1851,  1852,  1863,  1864,  1869,  1870,  1872,  1874,
    1876,  1878,  1879,  1885,  1893,  1894,  1895,  1900,  1904,  1917,
    1918,  1923,  1924,  1925,  1929,  1930,  1936,  1937,  1941,  1942,
    1944,  1946,  1948,  1950,  1952,  1957,  1958,  1962,  1963,  1967,
    1968,  1970,  1972,  1974,  1976,  1978,  1983,  1984,  1988,  1989,
    1990,  1994,  1998,  1999,  2003,  2004,  2009,  2017,  2024,  2034,
    2035,  2041,  2042,  2046,  2047,  2051,  2062,  2074,  2078,  2079,
    2085,  2086,  2092,  2097,  2098,  2102,  2104,  2108,  2112,  2114,
    2121,  2122,  2126,  2130,  2134,  2135,  2136,  2138,  2139,  2140,
    2143,  2145,  2149,  2153,  2160,  2161,  2162,  2166,  2174,  2175,
    2176,  2181,  2185,  2186,  2190,  2202,  2237,  2238,  2242,  2243,
    2244,  2245,  2251,  2253,  2255,  2257,  2258,  2262,  2263,  2264,
    2265,  2266,  2267,  2268,  2269,  2273,  2282,  2305,  2313,  2324,
    2330,  2338,  2339,  2345,  2354,  2359,  2363,  2369,  2372,  2375,
    2388,  2393,  2394,  2395,  2399,  2409,  2420,  2421,  2426,  2427,
    2428,  2429,  2430,  2431,  2433,  2434,  2435,  2436,  2437,  2441,
    2442,  2443,  2458,  2459,  2463,  2464,  2465,  2466,  2467,  2468,
    2469,  2470,  2471,  2472,  2473,  2474,  2478,  2479,  2480,  2495,
    2496,  2500,  2501,  2502,  2503,  2504,  2505,  2506,  2507,  2508,
    2509,  2510,  2511,  2515,  2524,  2525,  2529,  2542,  2544,  2546,
    2551,  2553,  2555,  2557,  2559,  2561,  2566,  2569,  2573,  2579,
    2580,  2587,  2588,  2589,  2590,  2591,  2592,  2593,  2594,  2595,
    2600,  2601,  2606,  2607,  2608,  2612,  2613,  2614,  2615,  2617,
    2618,  2622,  2634,  2640,  2646,  2648,  2650,  2652,  2654,  2661,
    2663,  2665,  2668,  2671,  2677,  2686,  2692,  2695,  2699,  2703,
    2707,  2711,  2715,  2725,  2727,  2747,  2752,  2758,  2759,  2763,
    2764,  2765,  2766,  2770,  2771,  2772,  2777,  2778,  2782,  2788,
    2793,  2794,  2798,  2799,  2803,  2805,  2810,  2812,  2817,  2822,
    2829,  2830,  2832,  2837,  2843,  2844,  2845,  2849,  2850,  2851,
    2852,  2853,  2854,  2855,  2856,  2857,  2858,  2859,  2860,  2864,
    2865,  2866,  2867,  2868,  2869,  2870,  2871,  2885,  2886,  2887,
    2899,  2900,  2901,  2902,  2906,  2907,  2908,  2909,  2913,  2914,
    2915,  2916,  2920,  2921,  2922,  2923,  2927,  2929,  2933,  2941,
    2944,  2947,  2950,  2953,  2956,  2959,  2962,  2965,  2968,  2975,
    2978,  2981,  2984,  2987,  2990,  2993,  2996,  2999,  3002,  3005,
    3008,  3011,  3014,  3017,  3020,  3023,  3026,  3029,  3032,  3035,
    3038,  3041,  3044,  3047,  3050,  3053,  3056,  3058,  3063,  3066,
    3069,  3075,  3076,  3079,  3082,  3085,  3091,  3092,  3096,  3100,
    3101,  3105,  3106,  3109,  3112,  3115,  3118,  3128,  3138,  3142,
    3149,  3157,  3165,  3169,  3173,  3174,  3184,  3188,  3189,  3193,
    3194,  3198,  3200,  3202,  3204,  3206,  3208,  3210,  3212,  3214,
    3235,  3236,  3237,  3238,  3239,  3240,  3241,  3245,  3255,  3256,
    3260,  3261,  3265,  3269,  3273,  3281,  3287,  3289,  3294,  3301,
    3302,  3306,  3307,  3311,  3312,  3316,  3318,  3323,  3325,  3327,
    3332,  3333,  3334,  3338,  3339,  3343,  3344,  3345,  3346,  3347,
    3348,  3349,  3353,  3354,  3358,  3362,  3363,  3364,  3365,  3366,
    3367,  3368,  3372,  3373,  3375,  3379,  3380,  3391,  3392,  3396,
    3401,  3402,  3403,  3404,  3405,  3406,  3407,  3408,  3409,  3410,
    3411,  3412,  3413,  3417,  3417,  3427,  3428,  3432,  3433,  3434,
    3434,  3438,  3439,  3440,  3441,  3442,  3450,  3458,  3465,  3466,
    3466,  3467,  3467,  3471,  3472,  3473,  3477,  3486,  3488,  3493,
    3494,  3495,  3499,  3500,  3504,  3505,  3506,  3507,  3508,  3509,
    3510,  3511,  3512,  3513,  3514,  3515,  3516,  3517,  3521,  3523,
    3525,  3527,  3532,  3533,  3537,  3538,  3542,  3543,  3544,  3545,
    3546,  3547,  3548,  3549,  3550,  3551,  3552,  3553,  3557,  3558,
    3566,  3567,  3571,  3572,  3601,  3609,  3610,  3614,  3616,  3617,
    3621,  3622,  3623,  3624,  3628,  3631,  3634,  3637,  3643,  3644,
    3648,  3649,  3653,  3658,  3659,  3660,  3661,  3665,  3666,  3667,
    3671,  3672,  3673,  3677,  3678,  3679,  3683,  3684,  3688,  3690,
    3692,  3697,  3703,  3704,  3708,  3712,  3713,  3714,  3718,  3719,
    3721,  3725,  3726,  3730,  3731,  3735,  3736,  3740,  3749,  3754,
    3759,  3774,  3775,  3779,  3786,  3787,  3800,  3801,  3806,  3810,
    3811,  3817,  3818,  3823,  3824,  3829,  3849,  3850,  3855,  3856,
    3866,  3867,  3871,  3872,  3876,  3877,  3893,  3894,  3895,  3896,
    3897,  3898,  3902,  3903,  3913,  3914,  3918,  3928,  3931,  3937,
    3938,  3944,  3951,  3972,  3982,  3983,  3984,  3985,  3989,  3990,
    3991,  3992,  3996,  3997,  3998,  3999,  4003,  4003,  4014,  4021,
    4022,  4028,  4034,  4043,  4044,  4048,  4049,  4053,  4058,  4059,
    4063,  4064,  4065,  4066,  4070,  4071,  4072,  4073,  4074,  4078,
    4079,  4083,  4090,  4091,  4092,  4096,  4097,  4101,  4102,  4106,
    4107,  4111,  4112,  4113,  4114,  4115,  4116,  4117,  4118,  4119,
    4120,  4121,  4125,  4126,  4130,  4131,  4135,  4136,  4137,  4141,
    4142,  4146,  4148,  4153,  4158,  4163,  4171,  4176,  4184,  4185,
    4186,  4187,  4191,  4192,  4196,  4197,  4201,  4205,  4213,  4214,
    4215,  4216,  4217,  4218,  4219,  4220,  4221,  4222,  4223,  4224,
    4225,  4226,  4230,  4231,  4232,  4233,  4234,  4235,  4236,  4237,
    4238,  4242,  4243,  4247,  4248,  4252,  4257,  4265,  4270,  4279,
    4288,  4292,  4302,  4312,  4316,  4318,  4320,  4322,  4327,  4329,
    4331,  4333,  4338,  4339,  4344,  4346,  4348,  4353,  4354,  4358,
    4363,  4367,  4368,  4369,  4370,  4374,  4375,  4376,  4380,  4381,
    4385,  4393,  4401,  4409,  4421,  4422,  4423,  4424,  4425,  4426,
    4427,  4432,  4436,  4437,  4441,  4445,  4446,  4451,  4452,  4457,
    4458,  4462,  4463,  4467,  4472,  4473,  4477,  4478,  4481,  4482,
    4487
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
  "non_final_query_spec", "query_spec", "query_no_from_spec",
  "breakup_term", "breakup_list", "selection", "non_final_table_exp",
  "table_exp", "from_clause", "table_ref_commalist", "proc_col_list",
  "opt_proc_col_list", "column_commalist_or_empty", "table_ref",
  "table_ref_nj", "jtype", "opt_outer", "join", "joined_table",
  "joined_table_1", "join_condition", "where_clause",
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
     417,   418,   418,   419,   420,   421,   422,   422,   423,   423,
     425,   424,   424,   426,   426,   427,   427,   428,   428,   429,
     429,   429,   429,   429,   429,   430,   430,   431,   431,   431,
     431,   431,   432,   432,   433,   433,   433,   434,   434,   435,
     435,   435,   435,   435,   436,   436,   437,   437,   438,   439,
     439,   440,   440,   440,   440,   440,   441,   442,   443,   444,
     444,   445,   446,   446,   447,   447,   448,   448,   449,   449,
     450,   450,   450,   451,   451,   452,   452,   453,   453,   454,
     454,   455,   455,   455,   456,   457,   458,   459,   459,   460,
     460,   461,   461,   462,   462,   463,   464,   464,   465,   466,
     467,   467,   468,   468,   469,   470,   471,   471,   472,   472,
     473,   473,   474,   474,   475,   475,   476,   476,   377,   477,
     477,   477,   477,   477,   477,   477,   477,   477,   477,   477,
     477,   477,   477,   477,   477,   477,   477,   477,   477,   477,
     477,   477,   477,   477,   477,   477,   478,   479,   480,   481,
     482,   483,   483,   483,   484,   484,   484,   485,   485,   486,
     487,   487,   488,   488,   489,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   491,   491,   492,   492,   493,   493,   494,
     494,   495,   495,   496,   496,   497,   498,   499,   499,   500,
     501,   501,   502,   502,   503,   503,   503,   503,   503,   503,
     503,   503,   503,   503,   503,   503,   503,   504,   504,   506,
     505,   507,   507,   507,   508,   508,   509,   509,   509,   509,
     509,   509,   509,   510,   511,   511,   511,   512,   513,   514,
     514,   515,   515,   515,   516,   516,   517,   517,   518,   518,
     518,   518,   518,   518,   518,   519,   519,   520,   520,   521,
     521,   521,   521,   521,   521,   521,   522,   522,   523,   523,
     523,   524,   525,   525,   526,   526,   527,   528,   529,   530,
     530,   531,   531,   532,   532,   533,   534,   535,   536,   536,
     537,   537,   538,   539,   539,   540,   540,   540,   540,   540,
     541,   541,   541,   541,   542,   542,   542,   542,   542,   542,
     543,   543,   544,   544,   545,   545,   545,   546,   547,   547,
     547,   548,   549,   549,   549,   549,   550,   550,   551,   551,
     551,   551,   552,   552,   552,   552,   552,   553,   553,   553,
     553,   553,   553,   553,   553,   554,   555,   556,   556,   557,
     557,   558,   558,   558,   559,   559,   560,   560,   560,   560,
     561,   562,   562,   562,   563,   564,   565,   565,   566,   566,
     566,   566,   566,   566,   566,   566,   566,   566,   566,   567,
     567,   567,   567,   567,   567,   567,   567,   567,   567,   567,
     567,   567,   567,   567,   567,   567,   568,   568,   568,   568,
     568,   568,   568,   568,   568,   568,   568,   568,   568,   568,
     568,   568,   568,   569,   570,   570,   571,   572,   572,   572,
     573,   573,   573,   573,   573,   573,   574,   574,   575,   576,
     576,   577,   577,   577,   577,   577,   577,   577,   577,   577,
     578,   578,   579,   579,   579,   580,   580,   580,   580,   580,
     580,   581,   581,   581,   581,   581,   581,   581,   581,   581,
     581,   581,   581,   581,   581,   581,   581,   581,   581,   581,
     581,   581,   581,   377,   377,   582,   582,   583,   583,   584,
     584,   584,   584,   585,   585,   585,   586,   586,   587,   588,
     589,   589,   590,   590,   591,   591,   592,   592,   593,   594,
     595,   595,   595,   596,   596,   596,   596,   597,   597,   597,
     597,   597,   597,   597,   597,   597,   597,   597,   597,   598,
     598,   598,   598,   598,   598,   598,   598,   598,   598,   598,
     599,   599,   599,   599,   600,   600,   600,   600,   601,   601,
     601,   601,   602,   602,   602,   602,   603,   603,   603,   604,
     604,   604,   604,   604,   604,   604,   604,   604,   604,   605,
     605,   605,   605,   605,   605,   605,   605,   605,   605,   605,
     605,   605,   605,   605,   605,   605,   605,   605,   605,   605,
     605,   605,   605,   605,   605,   605,   605,   605,   605,   605,
     605,   606,   606,   606,   606,   606,   607,   607,   608,   608,
     608,   609,   609,   609,   609,   609,   609,   609,   609,   609,
     610,   610,   611,   612,   613,   613,   614,   615,   615,   616,
     616,   617,   617,   617,   617,   617,   617,   617,   617,   617,
     377,   377,   377,   377,   377,   377,   377,   618,   619,   619,
     620,   620,   621,   621,   621,   622,   623,   623,   624,   625,
     625,   626,   626,   627,   627,   628,   628,   629,   629,   629,
     630,   630,   630,   631,   631,   632,   632,   632,   632,   632,
     632,   632,   633,   633,   634,   635,   635,   635,   635,   635,
     635,   635,   636,   636,   636,   637,   637,   638,   638,   639,
     640,   640,   640,   640,   640,   640,   640,   640,   640,   640,
     640,   640,   640,   642,   641,   643,   643,   644,   644,   645,
     644,   646,   646,   646,   646,   646,   646,   646,   647,   648,
     647,   649,   647,   650,   650,   650,   651,   652,   652,   653,
     653,   653,   653,   653,   654,   654,   654,   654,   654,   654,
     654,   654,   654,   654,   654,   654,   654,   654,   655,   655,
     655,   655,   656,   656,   657,   657,   658,   658,   658,   658,
     658,   658,   658,   658,   658,   658,   658,   658,   659,   659,
     660,   660,   661,   661,   662,   663,   663,   664,   664,   664,
     665,   665,   665,   665,   666,   666,   666,   666,   667,   667,
     668,   668,   669,   670,   670,   670,   670,   671,   671,   671,
     672,   672,   672,   673,   673,   673,   674,   674,   675,   675,
     675,   676,   677,   677,   678,   679,   679,   679,   680,   680,
     680,   681,   681,   682,   682,   683,   683,   684,   685,   685,
     685,   686,   686,   687,   687,   687,   688,   688,   689,   690,
     690,   691,   691,   692,   692,   693,   694,   694,   695,   695,
     696,   696,   697,   697,   698,   698,   699,   699,   699,   699,
     699,   699,   700,   700,   701,   701,   702,   703,   703,   704,
     704,   705,   706,   707,   708,   708,   708,   708,   709,   709,
     709,   709,   710,   710,   710,   710,   712,   711,   713,   714,
     714,   714,   714,   715,   715,   716,   716,   717,   718,   718,
     719,   719,   719,   719,   720,   720,   720,   720,   720,   721,
     721,   722,   723,   723,   723,   724,   724,   725,   725,   726,
     726,   727,   727,   727,   727,   727,   727,   727,   727,   727,
     727,   727,   728,   728,   729,   729,   730,   730,   730,   731,
     731,   732,   732,   733,   734,   734,   735,   735,   736,   736,
     736,   736,   737,   737,   738,   738,   739,   739,   740,   740,
     740,   740,   740,   740,   740,   740,   740,   740,   740,   740,
     740,   740,   741,   741,   741,   741,   741,   741,   741,   741,
     741,   742,   742,   743,   743,   744,   744,   745,   746,   746,
     746,   747,   747,   747,   748,   748,   748,   748,   749,   749,
     749,   749,   750,   750,   751,   751,   751,   752,   752,   753,
     754,   755,   755,   755,   755,   756,   756,   756,   757,   757,
     758,   759,   760,   761,   762,   762,   762,   762,   762,   762,
     762,   763,   764,   764,   765,   766,   766,   767,   767,   768,
     768,   769,   769,   770,   771,   771,   772,   772,   773,   773,
     774
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
       1,     3,     1,     5,     4,     4,     1,     1,     4,     4,
       0,     5,    12,     0,     3,     0,     3,     0,     3,     5,
       7,     7,     6,     7,     5,     0,     3,     6,     6,     6,
       6,     4,     0,     3,     2,     1,     1,     1,     3,     2,
       1,     1,     2,     2,     1,     3,     1,     1,     4,     3,
       3,     3,     4,     3,     4,     3,     5,     5,     5,     0,
       5,    10,     0,     2,     0,     4,     0,     2,     0,     3,
       1,     1,     1,     5,     6,     0,     3,     1,     3,     2,
       2,     0,     1,     1,     5,     5,     5,     0,     1,     0,
       2,     7,     6,     0,     2,     4,     0,     2,     4,    15,
       0,     2,     0,     3,     6,     6,     0,     1,     0,     3,
       0,     5,     0,     2,     0,     2,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     8,
       5,     4,     5,     6,     1,     1,     1,     0,     2,     7,
       4,     1,     1,     3,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     2,     4,     2,     3,     3,     1,     2,
       2,     2,     2,     1,     3,     0,     4,     0,     5,     1,
       2,     1,     3,     0,     3,     3,     2,     0,     2,     7,
       1,     3,     1,     3,     4,     4,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     1,     2,     0,
       3,     0,     1,     1,     0,     2,     1,     4,     6,     6,
       8,     1,     7,     9,     0,     1,     3,     3,     6,     1,
       3,     1,     1,     1,     0,     1,     0,     1,     1,     5,
       6,     4,     5,     4,     5,     1,     1,     1,     2,     1,
       5,     6,     4,     5,     4,     5,     1,     2,     1,     4,
       2,     5,     1,     1,     0,     5,     4,     4,     3,     3,
       5,     1,     2,     1,     2,     4,     7,     2,     1,     3,
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
     845,     0,   196,     0,     0,     0,     0,     0,     0,   441,
       0,     0,     0,   837,   837,     0,     0,     0,     0,     0,
       0,     0,   659,    98,     0,     0,   657,   658,     0,     0,
     105,     0,     0,   687,   688,   690,    99,   100,   101,   102,
     103,   104,   108,   109,   110,   111,   112,   113,   114,   115,
       0,     0,     3,     4,     5,    15,   651,    19,    20,    23,
      22,    16,    24,    10,     8,     9,     6,    25,    26,    29,
      27,    28,    30,    31,    32,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   338,   355,   352,   344,   345,
     343,   353,   341,   342,   477,   339,   466,   479,   468,   486,
     488,   340,     0,   999,   354,   850,   851,   852,   346,   350,
     854,   855,   856,     7,   351,     0,    33,    34,   853,   347,
     349,    35,    11,    12,    13,    14,    36,    21,    40,   750,
       0,     0,     0,   870,     0,   869,     0,   368,     0,  1158,
       0,     0,   326,     0,  1157,   190,     0,   189,   193,   870,
       0,   186,     0,     0,   187,   188,     0,   185,     0,     0,
       0,     0,     0,     0,     0,     0,   194,   197,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   255,   261,
     260,   266,   237,   237,   237,     0,     0,    98,   836,     0,
     256,   257,     0,   264,   267,     0,   374,   375,   376,     0,
     416,   442,   443,   439,   451,   446,     0,     0,     0,   108,
       0,     0,   407,     0,   441,     0,   659,   651,   478,   998,
     838,   841,   838,   842,   844,   837,     0,     0,     0,     0,
     837,     0,     0,   255,     0,     0,    98,     0,     0,   848,
     849,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   366,   490,     0,     0,     0,     0,     0,     0,     1,
       2,   196,     0,     0,     0,     0,    17,    18,     0,   494,
     494,   467,     0,   665,     0,     0,   693,   649,     0,   727,
     728,   729,   730,   733,   731,     0,   834,   835,   732,   116,
     774,   734,   705,     0,     0,     0,     0,     0,     0,     0,
       0,   769,   601,   585,     0,     0,   606,   607,   612,   647,
     604,   599,   608,   609,   610,   611,   703,   600,   704,     0,
     720,   348,     0,   614,   615,  1222,   605,   754,   279,     0,
    1102,  1113,     0,     0,     0,   327,     0,   270,   191,     0,
     762,     0,   269,   230,  1261,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   195,     0,     0,     0,   464,
       0,   271,  1098,   218,     0,   275,   201,   203,   273,   204,
    1047,  1048,  1050,     0,     0,     0,   313,  1242,  1243,  1049,
     254,     0,   263,   259,   262,     0,     0,     0,     0,     0,
       0,     0,   769,     0,   377,     0,     0,     0,     0,     0,
       0,     0,     0,   498,   699,   597,     0,   700,   598,   503,
     596,   594,     0,   595,   613,     0,   615,     0,     0,     0,
       0,  1005,  1006,   316,     0,     0,   407,   766,   454,     0,
       0,   843,   839,  1094,     0,     0,     0,     0,   847,     0,
     665,   254,     0,     0,     0,     0,     0,     0,   649,   649,
     649,     0,   649,   649,     0,   649,   680,   649,     0,     0,
       0,     0,   295,     0,  1228,     0,  1095,   652,   494,     0,
       0,   494,     0,   494,   769,   697,   662,   666,   670,     0,
     667,  1227,     0,     0,   751,   697,     0,   650,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   710,     0,     0,
       0,     0,     0,     0,     0,     0,   597,   596,     0,     0,
     646,     0,   648,     0,   721,   665,     0,     0,   282,     0,
     871,     0,     0,  1109,     0,     0,     0,     0,     0,     0,
       0,   179,   235,  1262,     0,  1035,  1036,     0,     0,   871,
       0,   224,     0,     0,     0,     0,     0,     0,   832,     0,
     871,     0,     0,   405,   465,     0,   272,     0,   219,   220,
    1108,     0,   200,   202,   274,   225,  1092,     0,     0,   315,
       0,   830,     0,   181,     0,     0,     0,     0,   258,   245,
     265,     0,   692,     0,   405,     0,     0,     0,     0,     0,
     431,   426,   427,   430,   428,   429,     0,     0,   437,   440,
     444,     0,   592,   593,     0,   501,   504,     0,     0,   597,
     596,     0,   496,   497,   464,   645,     0,     0,     0,     0,
       0,     0,   642,     0,     0,   648,     0,   665,     0,   268,
       0,  1004,     0,   318,   407,     0,   768,   464,   455,     0,
       0,     0,  1227,     0,   846,     0,  1156,  1156,  1230,     0,
     205,   205,     0,   205,   179,     0,     0,     0,     0,     0,
       0,     0,   251,     0,     0,     0,     0,     0,     0,     0,
       0,   697,     0,     0,     0,     0,   689,   691,     0,   489,
       0,  1097,   655,     0,     0,     0,     0,   484,   492,   493,
     473,     0,   482,   471,   494,     0,     0,     0,     0,   671,
       0,   665,   753,     0,     0,     0,     0,     0,     0,     0,
     737,   738,   806,   787,   812,   782,     0,   788,   785,   779,
     790,   786,   813,   794,     0,     0,   809,   810,   797,   800,
     798,   799,   736,   801,   803,   811,   735,   665,     0,   717,
       0,     0,     0,     0,   556,   564,   557,   558,   559,   560,
     561,   562,   563,   565,     0,     0,     0,   712,   709,   711,
       0,     0,     0,   665,     0,     0,     0,   586,   602,     0,
       0,     0,   775,     0,   770,  1223,  1213,     0,     0,  1224,
     722,     0,     0,   755,     0,     0,     0,   882,   880,   881,
     873,     0,   875,     0,     0,   902,     0,  1103,  1114,     0,
       0,  1106,  1203,   192,   322,     0,     0,     0,   763,   475,
     119,   476,     0,     0,     0,   127,   129,   130,     0,     0,
       0,   231,     0,     0,  1259,  1263,  1037,  1040,  1038,   235,
       0,     0,     0,     0,     0,  1089,     0,   304,   307,  1235,
    1235,     0,   902,   871,     0,   541,     0,   370,   278,     0,
    1099,   322,   305,   314,   239,     0,   238,     0,     0,     0,
       0,     0,     0,   244,     0,   770,   378,   237,   435,     0,
       0,   422,     0,   432,   433,   434,   436,   438,     0,     0,
     447,     0,     0,   502,     0,   707,   706,     0,   696,     0,
       0,     0,     0,   507,   508,   518,   534,   407,   515,     0,
     542,   644,     0,   641,   643,  1093,   589,   588,   590,   591,
    1224,   701,   702,     0,   988,     0,   276,     0,     0,  1003,
    1007,   317,   767,     0,     0,     0,   405,     0,  1227,     0,
     840,     0,  1095,     0,     0,     0,   218,  1156,     0,  1168,
    1233,     0,   206,     0,     0,   214,     0,     0,   222,   223,
     277,   665,   997,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   306,     0,
       0,   205,   205,   205,     0,  1096,   653,   485,   474,     0,
       0,   483,   472,     0,   480,   469,   660,     0,   664,   663,
     698,   668,   669,     0,   752,   694,   698,     0,     0,     0,
     726,     0,     0,     0,   791,     0,     0,     0,     0,     0,
     792,   793,   805,     0,     0,     0,     0,     0,   554,     0,
     584,     0,     0,   565,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   715,     0,   708,   713,   718,     0,     0,
       0,   587,     0,     0,     0,     0,  1097,     0,   990,     0,
     665,  1215,   757,     0,     0,   283,     0,   874,     0,     0,
     819,   872,   820,   898,   900,   896,   901,   895,   899,   897,
       0,     0,   282,  1105,     0,  1202,  1192,  1193,  1194,  1195,
    1196,  1197,  1198,  1199,  1200,  1201,  1112,     0,  1115,     0,
       0,     0,   324,     0,     0,   765,     0,     0,     0,   126,
     180,   173,   122,   179,     0,     0,   196,     0,     0,   822,
     823,     0,   821,   149,   826,     0,     0,     0,     0,  1039,
       0,     0,   866,   868,     0,     0,     0,     0,   312,   308,
     309,     0,  1238,  1238,     0,     0,   902,     0,     0,  1101,
       0,   325,     0,   182,   252,   252,   242,   252,     0,     0,
       0,     0,     0,     0,   420,     0,   445,   444,     0,   444,
       0,     0,   499,   695,     0,     0,   524,   534,     0,     0,
     534,     0,   530,   530,   530,   528,   529,   524,   533,     0,
     513,     0,   546,     0,   640,   665,   989,  1215,  1001,  1000,
    1002,     0,     0,   385,   391,     0,     0,   398,     0,     0,
     389,   390,   392,   388,   387,     0,   403,     0,     0,   456,
     458,   457,  1227,  1097,     0,     0,   218,     0,  1234,  1167,
       0,  1231,     0,  1174,  1268,   212,   209,   207,   211,   213,
     180,     0,   249,   248,   250,   247,     0,   682,   681,   677,
       0,   675,   676,     0,     0,   674,   679,   673,   296,   297,
     301,   301,   656,     0,     0,     0,   481,   470,     0,  1207,
       0,   725,   724,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   723,     0,   555,   552,   553,   716,
       0,     0,     0,   582,   581,   583,     0,   566,     0,     0,
     577,     0,   575,   571,     0,   634,     0,  1229,   603,     0,
       0,     0,   776,     0,   771,  1210,   991,     0,   756,     0,
     284,   876,   902,   816,   818,     0,   885,     0,  1104,     0,
       0,     0,  1137,  1204,     0,     0,     0,   513,   764,   120,
     121,   123,     0,   125,   128,     0,     0,     0,     0,     0,
       0,     0,   828,   829,   827,   131,   236,     0,   233,   226,
     227,  1251,  1252,     0,  1260,  1032,   758,     0,   867,   871,
       0,  1087,     0,   441,     0,  1068,  1063,     0,   311,     0,
       0,  1240,  1241,     0,     0,   923,   862,     0,   833,   405,
       0,  1100,     0,     0,   243,   241,   240,   246,     0,   771,
       0,   379,   381,   424,   425,   423,     0,   449,   444,   448,
       0,     0,     0,     0,   535,     0,     0,   536,   509,   531,
     525,   526,   527,   532,     0,   514,     0,     0,     0,   295,
       0,   638,   637,     0,   402,   400,   386,    74,     0,   395,
     401,   399,   393,     0,   408,     0,     0,  1096,     0,  1232,
       0,  1132,     0,  1181,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1166,  1175,  1176,     0,  1266,     0,
       0,   221,   686,     0,     0,     0,     0,     0,   302,   303,
     299,   300,   654,   495,   295,   661,   672,   807,   815,   783,
       0,   789,   780,     0,   814,   795,   796,   808,   802,   804,
     633,     0,     0,   576,   571,   580,     0,     0,   574,     0,
       0,   570,   714,     0,     0,   719,     0,     0,   778,   773,
       0,     0,  1214,   280,     0,   286,     0,     0,   877,     0,
       0,     0,     0,   904,     0,     0,     0,     0,  1116,  1141,
       0,  1149,     0,     0,     0,     0,  1150,  1152,  1138,  1139,
       0,   323,     0,     0,   124,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   159,     0,     0,   170,
       0,   160,     0,     0,     0,   166,   163,   150,   229,     0,
     228,  1257,     0,     0,  1041,     0,     0,   902,     0,  1090,
    1088,     0,     0,  1070,     0,  1064,  1082,   310,     0,  1239,
       0,   301,     0,   929,     0,   369,   406,     0,     0,   773,
       0,     0,   421,   452,   444,   500,     0,     0,   295,     0,
     516,     0,   538,     0,   520,     0,     0,     0,   543,   547,
     548,   639,  1214,   397,   396,     0,   404,   405,   883,  1172,
       0,     0,  1135,  1169,  1170,  1183,  1184,     0,     0,     0,
       0,  1182,  1178,     0,     0,     0,     0,  1177,  1269,  1266,
    1270,   210,   208,     0,   684,   685,   678,   298,   491,     0,
       0,     0,     0,   569,   568,   579,   572,     0,   635,   636,
    1225,  1226,     0,     0,   777,   772,     0,     0,   288,   739,
     740,   741,   742,   745,   748,     0,     0,   749,   902,   902,
       0,     0,   888,   886,   887,   891,   889,   890,   863,  1110,
    1111,     0,  1118,     0,  1151,     0,     0,     0,  1142,     0,
    1107,  1153,  1154,  1140,  1206,   328,     0,   176,     0,     0,
       0,   177,   825,   824,   153,   158,     0,   164,   162,   235,
       0,     0,   155,   154,   165,     0,     0,     0,  1253,  1033,
       0,     0,     0,   759,     0,     0,  1084,  1085,  1086,     0,
    1051,  1069,     0,     0,  1091,  1236,  1237,   198,     0,   183,
       0,     0,     0,   943,   928,   929,   925,   922,     0,   944,
     945,     0,     0,   253,   772,     0,   382,   384,   450,  1225,
    1226,   517,   518,     0,     0,   537,     0,   521,     0,     0,
       0,     0,     0,   405,   394,   453,  1159,   884,     0,     0,
    1161,     0,  1165,     0,     0,     0,   634,     0,  1185,  1186,
       0,  1179,  1180,     0,  1191,  1189,     0,     0,     0,     0,
       0,   784,   781,   567,   578,     0,   665,   665,  1212,  1227,
    1209,     0,     0,   287,     0,   281,   744,   747,   743,   746,
     879,   878,   817,   885,  1117,     0,  1148,     0,     0,  1143,
       0,     0,  1156,     0,   336,     0,     0,   178,   196,     0,
     132,     0,   169,     0,     0,   156,     0,   167,   234,     0,
    1255,  1258,     0,     0,  1042,  1043,  1034,  1031,   761,     0,
       0,   865,   464,     0,     0,  1071,     0,  1268,   301,     0,
     972,   973,   947,     0,     0,     0,     0,   953,   952,     0,
     924,   926,   934,   106,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   441,     0,     0,     0,     0,     0,  1011,
       0,     0,   769,   916,   920,   914,   915,   917,   913,   918,
     919,   910,   911,   912,   999,   992,   921,     0,   930,   932,
       0,   984,     0,     0,     0,     0,   987,   986,   613,   614,
     927,  1205,   831,   380,     0,   665,   665,   523,   539,     0,
     522,   510,     0,   519,     0,     0,   549,     0,   506,     0,
    1160,   883,  1173,  1172,   138,     0,  1136,  1120,     0,  1188,
       0,  1190,  1246,  1244,  1248,  1264,  1267,     0,   683,   573,
       0,     0,  1227,  1208,   285,     0,     0,  1119,     0,  1145,
       0,     0,  1155,     0,     0,   330,     0,   175,   174,   168,
       0,   143,   133,   136,     0,     0,     0,   161,     0,     0,
       0,     0,     0,     0,   760,   858,   542,  1052,     0,  1061,
       0,  1266,   184,  1137,   292,   290,   291,     0,     0,     0,
     946,     0,   949,   950,     0,   970,     0,     0,     0,  1017,
       0,     0,     0,   367,     0,  1008,     0,   413,     0,     0,
       0,     0,  1010,   980,     0,     0,   929,   931,   983,   976,
     979,   985,   982,   978,   977,   383,     0,     0,     0,   512,
       0,   545,   544,   550,  1129,  1162,  1164,     0,   139,  1133,
    1134,     0,  1124,  1171,  1187,     0,     0,     0,     0,  1216,
    1217,   289,     0,  1144,     0,     0,   329,   337,     0,   320,
     232,     0,     0,     0,     0,   148,   134,     0,   151,   152,
     157,     0,  1256,  1045,  1046,  1044,     0,   860,   546,     0,
     596,  1056,     0,     0,  1059,  1072,   199,   864,     0,     0,
     948,     0,   951,   968,     0,     0,     0,     0,  1014,  1013,
    1015,  1018,     0,  1016,   941,   935,   936,     0,     0,  1009,
       0,   415,     0,   937,     0,     0,   981,   905,   906,   907,
       0,   933,  1216,  1217,   540,   511,   551,     0,  1163,     0,
       0,     0,     0,  1131,     0,     0,     0,     0,  1265,     0,
       0,   892,     0,     0,     0,     0,   332,   140,     0,   137,
     135,   147,   146,   145,   144,     0,     0,   859,   861,   857,
     295,     0,     0,  1058,     0,     0,     0,  1063,  1073,  1074,
     293,     0,   974,   922,   969,     0,   947,  1026,     0,   938,
    1028,   922,     0,     0,     0,   371,   459,   463,   461,   462,
     409,     0,   411,     0,     0,   941,   941,   909,     0,     0,
    1123,  1121,  1125,  1126,  1247,  1245,     0,     0,     0,   903,
       0,     0,     0,     0,   321,     0,   334,   142,   141,   171,
       0,  1254,  1054,  1055,  1057,     0,     0,  1066,     0,  1076,
     294,     0,   960,     0,   955,   954,   971,   963,   964,   956,
     959,   965,   962,   967,   966,   613,   614,     0,  1027,     0,
    1019,     0,   942,   372,     0,     0,   410,   414,     0,     0,
     995,  1012,   908,  1130,     0,     0,     0,     0,     0,   894,
     893,  1146,  1147,     0,   333,     0,   319,     0,  1062,     0,
       0,  1065,  1075,     0,     0,  1083,   961,   975,     0,  1023,
     940,   373,   460,   412,   417,   941,   994,     0,  1128,  1127,
    1249,     0,   331,   335,   172,     0,     0,  1081,  1080,  1079,
    1077,  1078,     0,  1020,  1021,  1024,     0,  1022,   413,   419,
     996,  1122,  1250,  1060,  1067,   941,   941,     0,   418,  1030,
    1029,  1025
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   121,   122,   123,   124,   125,   381,  1179,  1413,   127,
     894,   895,   896,  2091,  2092,  2093,  2169,  2279,  2195,  1645,
    1425,  1945,  1646,  1946,  1647,  1942,   897,   898,  1495,  1670,
     236,   237,   238,   128,   129,   642,   130,  1023,  1308,  1305,
     131,   132,   734,   640,  1029,   133,   134,   135,  1428,   901,
     136,   612,  1650,   902,   462,   137,   943,   138,  1464,   269,
     270,   271,   272,   273,   139,   140,   141,   142,   143,   144,
     598,   145,   866,  1595,  1758,  1915,  2118,  1843,   759,  1328,
    1329,  1550,   146,   147,   148,  1210,  1448,   149,   649,   150,
     713,   151,   152,  2276,  1172,   153,   154,   416,  1934,  2189,
    2346,  2406,  2085,   155,   156,  2003,  2004,  2005,  2006,  2007,
     279,   664,  2008,  1471,  1855,  1856,  1286,  1287,   927,   507,
    2322,  2323,  2241,  2009,  2010,  2449,  2011,  1235,   953,   678,
     679,   284,   475,   285,   960,   286,  2012,   717,   718,  2013,
    2315,  2316,   633,   352,   584,   890,   338,   166,   167,   168,
     769,   770,   550,   169,   170,   171,   685,   686,   483,   692,
     693,   694,   973,  2042,  1869,  1496,  1246,  1692,  1258,  1490,
    1259,   975,   976,  1865,   634,  1262,  1499,  1873,   925,   824,
     825,   826,   827,   828,  1581,   829,   830,   831,  1366,   832,
     382,   383,   833,   485,   486,   386,  1584,   387,  1331,   556,
     388,   389,   566,   172,   557,   558,   559,   390,   488,   560,
     489,   391,   967,   392,   393,   576,   836,   837,   577,   394,
     395,   396,   397,   398,  1768,   292,   408,  1437,   421,   978,
     490,   815,  1140,  1394,  1141,  1193,   653,   629,  1459,   400,
     274,   301,   724,   174,   175,  2207,  2289,   176,   912,   913,
     177,   914,   875,   600,   871,   872,   873,  1878,  1603,  2270,
    2271,  1151,  1152,  2249,  2250,  2016,  2017,  2309,  1673,  1845,
    1846,  1847,  2018,  2310,  2311,  2312,  1848,  1849,  1973,  1979,
    2366,  1850,  1974,  2303,  2019,   491,   705,   492,  2021,  2426,
    2022,  1000,  2023,  2024,  2025,  2026,  2231,  2232,  2445,  2446,
    2379,  2027,   180,  1654,  1957,   618,   910,  1821,  1954,  1955,
     181,   182,  1964,  2211,  2212,  2109,  2297,  2214,  1666,  1663,
    2411,  1446,  1664,  2299,  2359,  2415,  1834,  1828,  1441,  1442,
    1207,   183,   184,   493,   185,   443,   411,   186,  1168,   187,
     881,   603,  1402,  1608,  1781,  2172,  2263,  2258,  1301,  1712,
    1886,  1617,  1618,  1619,  1790,  1791,  1015,  1709,  1879,  1880,
    1019,  1020,  1303,  1882,  1534,  1535,  1536,  1165,  1166,  1170,
     188,   494,  1385,   495,   403,   190,   496,   405,   547,   406,
     191,   728,  1212,  1451,   192,   193,   194,   195,  2065,  1432,
    1433,  1950,  1951,   904,   905,   614,   196,  1898,  1730,  1538,
     197
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2133
static const yytype_int16 yypact[] =
{
   11087, -2133, 21529,  -101, -2133, -2133,   125, -2133, -2133, -2133,
   -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133,
   -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133,
   -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133,
   -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133,
   -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133,
   -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133,   634,
   -2133,   164,  2511,    48,   732, 17220,   109,   943,   365,   556,
   18080, 19404, 14882,   672,   679,   721,   521,   351,   546,   569,
   15395, 17405,   401, -2133, 17590, 17968, -2133, -2133, 21529,   842,
   -2133,   554,   509, -2133,   524,   531, -2133, -2133, -2133, -2133,
   -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133,
     273,   904,   552, -2133,  1355, -2133,    36, -2133, -2133, -2133,
   -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133,
   -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133,
   -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133,
   -2133, -2133, -2133, -2133, -2133, -2133,   204, -2133, -2133, -2133,
   -2133, -2133,   619, -2133, -2133, -2133, -2133, -2133, -2133, -2133,
   -2133, -2133, -2133, -2133, -2133,   812, -2133, -2133, -2133, -2133,
   -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133,   622,
     -94,   934, 14192, -2133, 21529, -2133, 21529, -2133, 21529, -2133,
     977,   860,   -97, 21529, -2133, -2133,   877, -2133, -2133,   858,
   21529, -2133, 21529, 21529, -2133, -2133,  1061, -2133, 21529, 21529,
   21529,   438,   758, 19487, 21529, 21529, -2133,  1164,   924, 21529,
    1076, 21529, 19570, 21529,   850, 21529, 21529, 21529, 21529, 21529,
   21529, 21529, 21529,   547, 19885, 21529, 21529, 21529,   931, -2133,
   -2133, -2133,   762,   762,   762,   954,   964,   983, -2133,   989,
     806, -2133,   -53, -2133, -2133, 19968, -2133, -2133, -2133, 21529,
   -2133, -2133, -2133, -2133, -2133,   882, 11432,  1032, 21529,   856,
      29, 21529, 18395,  1019,   556,   915, -2133,   839, -2133, -2133,
   -2133, -2133,  1220, -2133, -2133,   672, 21529,  1303, 21529,  1156,
     672, 12812,   955,  1155,  1185,  1197,  1207,  1218,   -39, -2133,
   -2133,  1005,  1018,  1030,  1033,  1043,  1052,  1064,  1083,  1088,
     -78, -2133,   220,  1193,  1404, 12812, 12812,   280,  1098, -2133,
   -2133,  1615,  1273,   356,   373,   428, -2133, -2133,  3876,    14,
      17, -2133,  1376, 12812, 20061,  4782, -2133, 12812,  1111, -2133,
   -2133, -2133, -2133, -2133, -2133,  1119, -2133, -2133, -2133,  1324,
   -2133, -2133, -2133, 17968,  1133, 10052,  1135,  1140,  1144, 21529,
    7982,    35,  1121, -2133,  1126,  1143,  1158,  1160,  1166, -2133,
    1192,  1194,  1236,  1245,  1256,  1269, -2133,  1274, -2133,  1126,
     497,   484,  1177,  1276, -2133,  1278,  1279,  1286,  1330,  1182,
    1287,  1347, 21529,  1407,  1428, -2133,  1502, -2133, -2133, 21529,
    1291,    26, -2133, -2133,  1534,  1025,  1182,  1423,  1670, 21529,
   21529,  1579,  1527,  1582,  1538, -2133, 21529,  1182, 20061,  1489,
   21529,  1566,  1322,   577,  1520, -2133, 21529, -2133,  1574, -2133,
   -2133, -2133, -2133,  1698, 21529,  1607,  1504, -2133, -2133, -2133,
    1514, 21529, -2133, -2133, -2133, 21529, 17968,  1720, 21529,  1138,
   20376, 20376,  1364,  1357,  1581,  1688,    67, 12812, 12812,  1368,
   21529,  1735,  7982,  1591, 17036,  1126,  1372, -2133, -2133,  1374,
      -8, -2133,  1638, -2133,  1377,  1381,  1642, 21529, 21529,  1418,
   12812, -2133, -2133,  1655, 21529,  1584,  1567, -2133, 21529, 11432,
    4258, -2133,  1393,  1400,   341,  1600,   707, 21529, -2133,   711,
   12812, -2133, 21529, 17968,  1770, 21529, 20376,  1759, 12812, 12812,
   12812, 12812, 12812, 12812,  1774, 12812, -2133, 12812,  1682,  1632,
     852,   897,  1690, 21529, -2133, 20061,   406, -2133,  1493,  1667,
     299,  1493,   299,    19,    33, 17036, -2133,  1422,  1424,  1427,
    1429, -2133,  1430, 21529,  1426,  1911,  1434,  1431, 12812, 10397,
    1441,  1438,  1738, 12812, 10742,  1141,   936, -2133, 12812, 12812,
   12812,  1440,   280,  8327,  1444,   551,   -14,    -4,  2822, 12812,
    1447, 20061,  1447,  1008, -2133, 12812,  4865,  1645,  1719,     5,
    1572,  4948, 21529,   -18,  1182,  1740, 21529,  1659,  1727,  5296,
     299, 18478,  1464, -2133,  1680, -2133, -2133,  1663,   862,  1572,
     504, -2133,  1737,  1741, 21529, 21529, 12812, 12812, -2133,  1664,
    1572,  1182,  8672,  1665, -2133, 21529, -2133,  5379, -2133, -2133,
   -2133, 21529, -2133, -2133, -2133, -2133, -2133, 21529,  1706, -2133,
   20376,  1472,   660, -2133,  1652,  1657,  1658,  1669, -2133,   -23,
   -2133,  4341, -2133,  1853,  1665,  1854,  1497,  1512,    88,    88,
   -2133, -2133, -2133, -2133, -2133, -2133,  1874,  1875, -2133,  1688,
     -21, 12812, -2133, -2133, 12812, -2133,  1368,   832,  1636,    13,
       7, 15823, -2133, -2133,  1683, -2133, 18598, 12812, 12812, 12812,
   12812, 12812, -2133, 20061, 12812,    -7, 12812, 12812, 21529, -2133,
     844,  1911,  1573, -2133,  1567,  1522, -2133,   -40, -2133,  1795,
    1591, 20061,  1528,  1899, -2133,  5462,   846,  1065, -2133, 21529,
    1362,  1420, 21529,  1594,   426, 21529,  1536,  1540,  1756,  1758,
    1761,  1764,  1546,  1547,  1558,  1559,  1560,   515,  1561,  1563,
    1785,  1705,  1576,  1578, 21529, 12812, -2133, -2133,  1813, -2133,
     764,   588, -2133, 20061,   299,  1580,   313, -2133, -2133, -2133,
   -2133,   299, -2133, -2133,  1493,   299, 12812, 21529, 12812, -2133,
   12812, 12812, -2133, 21529,  1702, 12812,   611, 12812, 12812,   941,
   -2133, -2133,  1587, -2133,  1588,  1597,  1784,  1598, -2133,  1602,
   -2133, -2133,  1605,  1608,  1609,    59,  1617, -2133, -2133, -2133,
   -2133, -2133, -2133,  1619,  1620, -2133, -2133, 12812,  1621,  1911,
   10742,  1624,  6947,   177, -2133, -2133, -2133, -2133, -2133, -2133,
   -2133, -2133, -2133,  1673, 12812, 12812,   939, -2133, -2133, -2133,
     776,  1811,   654, 12812,  1606,   280,  1444, -2133,  1618, 12812,
   21529, 21529, -2133, 20061,    93, -2133, -2133,    42, 12812,  1625,
   -2133,  1630, 21529,  1641,  1633, 21529,  1860, -2133, -2133, -2133,
   -2133,   848, -2133, 19968, 16254,  1639, 21529,  1671, -2133,  1840,
    1951, -2133,  1771, -2133,  1677, 21529, 21529, 21529,  1675, -2133,
     -31, -2133, 21529, 21529,   888, -2133, -2133, -2133,  1302, 16569,
   21529, -2133,  1912,  1681, -2133,  1689, -2133, -2133, -2133,  1464,
    1869,  1909,  1693,   387, 21529,  1692,  2057, -2133,  2058,  1176,
    1176, 21529,  1639,  1572,  1910,  1167,  1709, -2133, -2133, 21529,
    1699,  1677, -2133, -2133, -2133, 21529, -2133, 21529, 20376, 20376,
   20376, 20376,  2014, -2133, 21529,  1712, -2133,   762, -2133, 12812,
   12812, -2133,  2077, -2133, -2133, -2133, -2133, -2133,  1787,   473,
   -2133,   642,   176, -2133,  1324, -2133, -2133,  1834, -2133, 21529,
   21529, 15823, 14967,  1718,  1696, -2133, -2133, 15740, -2133, 10742,
    1936, -2133,  2067,  1738, -2133,  1124,  1179,  1179, -2133, -2133,
    1724, 17036, -2133, 12812,  1911,  1725, -2133,   979,  1762, -2133,
   -2133, -2133, -2133,  1309,  9017, 21529,  1665, 12812,  1722, 20061,
   -2133, 21529,  1726,  2069, 21529,  2072,   577,   879, 21529,  2064,
   -2133,  1793, -2133, 21529, 21529, -2133, 21529, 21529, -2133, -2133,
   -2133, 12812, -2133, 20376, 20376, 20376, 20376, 12812,  1850,  1852,
    1855,  2099,  1856,  1857, 12812, 12812,  1861,  1862, -2133,   961,
   11777,  2013,  2013,  2013, 20061,   604, -2133, -2133, -2133, 21529,
     280, -2133, -2133,   299, -2133, -2133,  1911,  1791, 17036, -2133,
   17036,  1422,  1424,  1736, -2133, -2133,  1911, 12812,   984,  1003,
   -2133,  2107,  2109,  2110, -2133,  2111,  2112,  2113,  2114,  2115,
   -2133, -2133, -2133,  2116,  2117,  2118,  1763, 12812, -2133,   340,
   -2133,  7292,    21,   722, 10742, 10742, 12812,   627,  9362, 12812,
    1767,   600, 12812,  1911,  1333, -2133, -2133, -2133,  1738, 12812,
    1772, -2133,  1606,   957,  1773,  1776,   669,  3345, -2133,   214,
   12812,    64, -2133, 21529, 21529, -2133,  1432, -2133,   488, 16254,
   -2133,  1935, -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133,
    1775,  2136,  1719, -2133, 21529, -2133, -2133, -2133, -2133, -2133,
   -2133, -2133, -2133, -2133, -2133, -2133,  1836,  2143,  2047, 21529,
    2054, 21529, -2133,  1783,  1786, -2133, 21529,  2108,  2119, -2133,
   -2133, -2133,   409, 18478,  1788,  1988,  1164,  1990,  1789,  1790,
    1794, 17765, -2133, -2133, -2133,   967,   432,  2157,  1680, -2133,
   21529, 21529, -2133, -2133,  1797,  1182,  2158,   508, -2133, -2133,
    1965,  1841,  1966,  1966,  1801,    11,  1639, 21529,  1309, -2133,
   21529, -2133,  1799, -2133,   -15,   -15,  1546,   -15,  1997,  1802,
   20459,   677,  1009,  1039, -2133,   970, -2133,  1971,  2167,  1971,
   12812, 10742, -2133, -2133,  1806,  1807,  1792,  1926, 14967,  1809,
    1810, 15823,  1895,  1895,  1895, -2133, -2133,  1326, -2133,  1891,
   21529,  2059,  2028,  1201, -2133, 12812,  1911, -2133, -2133, -2133,
   -2133,  2177,  1976, -2133, -2133,  2091, 20557, -2133, 12812,  2185,
   -2133, -2133,  2046, -2133, -2133,  2085, -2133,   973,  2021, -2133,
   -2133,  1911,  1822, -2133, 21529, 20061,   577, 20061, -2133, -2133,
   16254, -2133,  2093,   644,  1989,  1826, -2133, -2133,  1827, -2133,
      91,  1830,  1546,  1546,  1546,  1546,   695, -2133, -2133, -2133,
    1831, -2133, -2133,  1057,  1062, -2133, -2133, -2133,  1832, -2133,
    1851,   591, -2133, 20061,   975,  1835, -2133, -2133, 12812, -2133,
    1085, -2133, -2133,  1837,  1838,   982,  1839,   985,  1842,  1843,
    1844,  1846,  1847,  1848, -2133,  1091, -2133,  2096, -2133,  1911,
   12812,  1858, 12812, -2133, -2133, -2133,  1624,  1911,  1906,  7982,
   -2133,  2034, -2133,  1254, 12812,  1894,  1102, -2133,  1849,  1859,
    1865, 18913, -2133, 21529,    97, -2133, -2133,  1868, -2133,   991,
    2022, -2133,  1654,  1866, -2133,  1993,  1267,  2070, -2133,  2162,
    2056,  1863,    96, -2133, 21529,  1870, 21529, 21529, -2133, -2133,
   -2133, -2133,  2132, -2133, -2133, 10742,  1872,  1873,  1877, 21529,
    2217,  2218, -2133, -2133, -2133,   963, -2133,   280,  2027, -2133,
   -2133, -2133, -2133,  1006, -2133,  2145,  1876,  1879, -2133,  1572,
    2122, -2133,    56,   556, 21529, -2133,  2240,  2242, -2133,  2146,
    1924, -2133, -2133, 21529,  1814, -2133, -2133,  2156, -2133,  1665,
    1012, -2133, 21529,  2102, -2133, -2133, -2133, -2133, 20872,  1884,
    1888, -2133, -2133, -2133, -2133, -2133,  2251, -2133,  1971, -2133,
    1120,   102,  1890,  1892, -2133,  1893, 20965, -2133,  1696, -2133,
   -2133, -2133, -2133, -2133, 15909,  1889,  1897,  9707, 10742,    47,
    2245, -2133, -2133,  1902, -2133, -2133, -2133,  2103,  2120, -2133,
    1911, -2133, -2133,  2060, -2133,  1309, 21529, -2133,  1896, -2133,
    1896,    -6,  1353, -2133,  2234,  2236,  2237,  2238,  2105,  2243,
    2239,  1840,  2121,   899, -2133,   644, -2133,  2280,  1916, 21529,
   21529, -2133, -2133, 12812,  2035,  2036,  2037, 11777, -2133, -2133,
   -2133, -2133, -2133, -2133,  1690,  1911, -2133, -2133, -2133, -2133,
    2282, -2133, -2133,  2284, -2133, -2133, -2133, -2133, -2133, -2133,
   -2133,  1943,  7982, -2133,  1254, -2133, 12812,  1023, -2133,   832,
    2149, -2133,  1911, 21529,  1925, -2133, 20061, 20061, -2133,   739,
    1922,  3705,    69, -2133, 12812,  2189,  1289,  1289, -2133,  2289,
    2193,   514,   517, -2133,  1432,  2293,  1840, 21529, -2133, -2133,
    2201, -2133,  2303,   332,  2286,  1946, -2133,   950,    96, -2133,
    2065, -2133,  1947,  1948, -2133,   106, 21529, 21529, 21529,  1035,
    1949,  1950,  2015,  2151,  1956,  1289, -2133,  2160, 21529, -2133,
    2141,  1959,   478, 21529,  2205, -2133, -2133, -2133, -2133,  2203,
   -2133,  2175,  2157,  2325,  2094,  5810, 21529,  1639,  1391, -2133,
   -2133, 11432, 21529, -2133,   196, -2133,  2155, -2133,  1089, -2133,
    1060,   591,  2025,   336, 21529, -2133, -2133,  1967,  2163, -2133,
   21048, 12812, -2133, -2133,  1971, -2133, 20061, 20061, 19006, 21529,
   -2133, 15312,    62, 21363, -2133,  1968,  1975,  1977,  1832,  1167,
    2250, -2133, -2133, -2133, -2133,  2195, -2133,  1665,    23,  2258,
    2098,  2262,  2216,  2319, -2133, -2133, -2133,  2311,  2312,  2188,
    1396, -2133, -2133,  2186,  2355,  2356,  2304, -2133, -2133,    60,
   -2133, -2133, -2133,  1130, -2133, -2133, -2133, -2133, -2133,  1995,
    1996, 12812,  1078, -2133,  1911, -2133, -2133,   832, -2133, -2133,
    1998,  2000, 20061, 20061, -2133,   772,   579,  2184,  2308, -2133,
   -2133, -2133, -2133, -2133, -2133,   926,  1007, -2133,  1639,  1639,
    1999,  2369, -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133,
   -2133,  1093, -2133,  2287, -2133,  2007,  2349, 16254, -2133,   159,
   -2133,  2008, -2133, -2133, -2133,  2178,  2012, -2133,  1095,  1104,
    1110, -2133, -2133, -2133, -2133, -2133, 10742, -2133, -2133,  1464,
    2016,    24, -2133, -2133, -2133, 21529,  2207,  2017, -2133, -2133,
     495,  2065, 21529,  2011,  2018,  2065, -2133, -2133, -2133,  1591,
    2285, -2133, 21529,  2379, -2133, -2133, -2133,  2080, 21529, -2133,
    2330, 19089,   454, -2133, -2133,   718, -2133,  6602,  2023, -2133,
   -2133,  2065, 21529, -2133, -2133,  1115, -2133,  1911, -2133,  2024,
    2026, -2133,  2029, 10742,  2031, -2133, 21529, -2133, 21529, 21529,
   11777, 11777,   -56,  1665, -2133, -2133, -2133, -2133, 19968,  1147,
   -2133, 21529, -2133, 16254,   116,  1289,  1894,  2290, -2133, -2133,
    2343, -2133, -2133,  2226, -2133, -2133,  2392,   582,  2032,  2030,
    2152, -2133, -2133,  1911, -2133,  2153, 12812, 12812, -2133,  2038,
   -2133,  4434, 12812, -2133,  2296, -2133, -2133, -2133, -2133, -2133,
   -2133, -2133, -2133,  1267, -2133, 21529, -2133, 21529,  2373,  1935,
    2305,  2306,   869,  2246,  2299, 21529,  2227, -2133,  1164,   113,
    2241,  2406, -2133,  2211,  2292, -2133,  1151, -2133, -2133,  2409,
   -2133,  2052,  2322,  2323,  2055, -2133, -2133, -2133, -2133, 21529,
   21529, -2133,  1683, 21529,  2061, -2133, 21529,  1989,   591,  2422,
   -2133, -2133,   863,  6255,  2183,  2283,   676, -2133, -2133,   746,
   -2133, -2133, -2133,  2062,   304, 12812, 12812, 21529,  2279, 21529,
   21529,  2244, 21529,   556, 21844, 21529, 14882,  2066,  2068, 12812,
   12122,  2071,    20, -2133, -2133, -2133, -2133, -2133, -2133, -2133,
   -2133, -2133, -2133, -2133,  1162,  1126, -2133,  2073, -2133, -2133,
    2074, -2133,  2075,  2076,  2078,  2079, -2133, -2133,  -177,  -171,
   -2133, -2133, -2133, -2133, 12812, 12812, 12812, -2133,  1167, 21529,
   -2133, -2133,  1153, -2133,  1171,  1174, -2133,  2429, -2133, 16254,
   -2133,   488, -2133,    74,  2261,  2408, -2133,  2128,  2412, -2133,
    2397, -2133,  2081,  2082,  2083, -2133, -2133,  2445, -2133, -2133,
    2084,  2086,  2089,  2088,  1911, 12812,  2092, -2133,  1184, -2133,
    2365,  2424, -2133, 21529,  2300,  2253,  1189, -2133, -2133, -2133,
     512,   477,  2241, -2133,  2097,  1289,  2459, -2133,    24,  2100,
    2017, 21529, 21529,   495, -2133,  2101,  1936, -2133, 12812,  2301,
    2464,  1916, -2133,    96, -2133, -2133, -2133,  2376,  2340, 21529,
    1935,  2380, -2133, -2133,  2471, -2133, 21529,  2288, 16254, 13157,
    2222,  1513,  1556, -2133,   269, -2133, 21529,  2123, 11432,  2125,
   10742, 10742,  1911, -2133,   756,  1059,   336, -2133, -2133, -2133,
   -2133, -2133, -2133, -2133, -2133, -2133,  2124,  2126,  1191, -2133,
   21529, -2133, -2133,  2475,   -42, -2133, -2133,  2341, -2133, -2133,
   -2133,   803,  1491, -2133, -2133,  2473,  2476,   479,   582,    75,
      78,  1911,  2479, -2133,  2129,  2130, -2133, -2133,  2302,  2196,
   -2133,   595,   595,  1219,  1229, -2133, -2133,  2480, -2133, -2133,
   -2133,  2481, -2133, -2133, -2133, -2133, 21529,  2389,  2028,  1656,
     187, -2133,  1205,  2133,  2313,  2187, -2133, -2133,   299,  2398,
   -2133,   454, -2133, -2133, 21529, 21446, 21529, 14882, -2133, -2133,
   -2133, -2133,   793,   484,  1152, -2133, -2133, 12467, 14537, -2133,
    1321, -2133,  2334, -2133,   115,   120, -2133, -2133, -2133, -2133,
    1211, -2133, -2133, -2133, -2133, -2133, -2133,  2478, -2133,  2496,
    2500,  2501,  2502, -2133,  2139,  2140,  2142,  2503, -2133,  2403,
    1214, -2133,  2320,  2324,  2159,  2271,  2348, -2133,   358, -2133,
   -2133, -2133, -2133, -2133, -2133,  1223,  2154, -2133, -2133, -2133,
    1690, 21529, 21529, -2133, 12812, 10742,  2361,  2240, -2133,  2224,
   -2133,   299, -2133,  5908, -2133,  2374, -2133, 10742, 13502, -2133,
   -2133,  1173,  7637, 14537,  1568,  2161, -2133,  1217,  1126,  2164,
   -2133,  2522, -2133,  1235, 14537,  1152,  1152, -2133,  1059,  2528,
   -2133,  2223,  2456,  2461, -2133, -2133,  2532,  2170,  1289, -2133,
    2479, 21529, 21529, 21529, -2133,  2537,  2375, -2133, -2133, -2133,
    2539, -2133, -2133, -2133, -2133,   122,  2179,  2298,  2542,   272,
   -2133, 16905, 12812,   454, -2133, -2133, -2133, -2133, -2133, -2133,
   -2133, -2133, -2133, -2133, -2133,   448,   573, 12812,  1167,  2190,
   -2133,  2191, -2133,  2161, 14537, 14537, -2133, -2133,  1321,   -32,
    2307, -2133, -2133, -2133,  2526,  2547,  2549,  2192,  2552, -2133,
   -2133, -2133, -2133,  1250, -2133,  2558, -2133,  2194, -2133, 21529,
   21529, -2133, -2133,    92,    90, -2133,  1911, -2133,  1136, 13847,
   -2133,  2161, -2133, -2133,  2345,  1152, -2133,  2560, -2133, -2133,
   -2133,  2199, -2133, -2133, -2133,  1261,   330, -2133, -2133, -2133,
   -2133, -2133,  2314, -2133, -2133, -2133,  1263,   484,  2123, -2133,
   -2133, -2133, -2133, -2133, -2133,  1152,  1152, 13847, -2133, -2133,
   -2133, -2133
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2133, -2133, -2133, -2133, -2133,  2449,     8, -2133, -2133, -2133,
   -2133,  1392, -1004, -2133,   482,   523, -2133,   386, -2133,   643,
   -2133,   483, -2133, -2133, -2133, -2133,  1864, -2133,  -437,    10,
    2346, -2133, -1158, -2133, -2133, -2133, -2133,  -603, -2133, -2133,
    2460, -2133, -2133,  -939, -2133, -2133, -2133, -2133, -2133, -2133,
   -2133, -2133, -2133,  -894,  -219, -2133, -2133, -2133,   104,  2494,
   -2133,  2127,    51,  -322, -2133, -2133, -2133, -2133, -2133, -2133,
   -2133, -2133,  1435, -2133, -2133, -2133, -2133, -2133, -1474, -1449,
    1041, -1289, -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133,
   -2133, -2133, -2133, -2133,  1660, -2133, -2133, -2133, -2133, -2133,
   -2133, -2133, -2133, -2133, -2133, -2133,  2586,  2589,  2590, -2133,
   -2133, -2133,  2592, -2133, -2133,   559,  1079,  1379,  -646,  -373,
     207, -2133,   152, -2133,  2601, -2133, -2133, -2133,  1934,  1927,
   -2133, -2133, -2133, -2133, -1177,  -289,  2604, -2133,  1603,  2605,
   -2132,   222,  -680, -2133,    30, -1173,    16, -2133,  -495,  -432,
    -601,  -466,  -245, -2133, -1038,  1413,  1929, -2133,  -496, -2133,
     221, -1782, -2133,   681, -2133,  1204,  -640, -2133,  1361,   390,
   -2133,   921,  -879, -2133, -2133,   513,   412, -2133,  -543, -2133,
   -2133, -2133, -2133, -2133,  1047, -2133, -2133, -2133, -2133, -2133,
   -2133,  -768,  1987,  -175,  2420, -2133,   737, -2133,  1928,  -274,
   -2133, -1586,  1409,   -25,  1845,  1867,  -484,     0,  -670,  -244,
    1942,  -668, -1395, -2133, -2133, -2133, -2133,  1796,  2051, -2133,
   -2133, -2133, -2133, -1084, -1563,   162,  2423, -1606,  -190,   -70,
     -43,  1729,  -516, -2133, -1113, -2133,  -435, -2133, -1448,  -281,
     -57,    40, -2133, -2133, -2133, -2133, -2133, -2133,  1717, -2133,
   -2133,  1055,  -587,  -391, -2133,  1495, -1627, -2133,   708, -2133,
     294,  1240,  -881,   308, -2133, -2133, -1509, -1186, -2133, -2133,
   -1769, -2133, -2133, -1608, -2133, -2133, -2133, -1962, -2133, -1848,
   -2133, -2133, -2133, -2133,   325, -1789,  -378, -2133,   335, -2133,
       2, -2133,     3,   337,   338,   339,   331, -2133,   186, -2133,
   -2133,   342, -2133, -2133, -2133, -2133, -2133, -2133, -2133,   541,
   -2133, -2133, -2133,   352, -2133, -2133, -2133, -2133,   353,   816,
   -2133, -2133,   239, -2133, -2133, -2133, -2133, -2133,  1210, -2133,
   -2133, -2133, -2133, -2133,  -197,   296,  1484, -2133, -2133, -2133,
   -2133, -2133, -2133, -2133, -2133, -2133, -2133, -2133, -1541, -2133,
   -2133,   542, -2133,  1036, -2133, -2133,  2584,  1137, -2133,   607,
    -647, -1546, -2133,   606, -2133, -2133,  1125,  1208, -1373, -2133,
   -2133,     1,  2087,  -195, -1809, -2133,  -198, -2133,  -270, -2133,
   -2133, -2133,  1743,  1448, -2133, -2133, -2133, -2133,   486,  1013,
   -2133,   566, -2133,  1469, -2133, -2133, -2133, -2133, -1668,   703,
   -2133
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1228
static const yytype_int16 yytable[] =
{
     173,   189,   178,   179,   404,   509,   590,   402,   126,   891,
     199,   293,   487,   720,   980,  1199,   165,   965,   947,   966,
    1307,   592,  1309,  1429,   652,  1700,  1392,   384,  1417,  1456,
     164,   823,   911,   423,  1769,   619,   737,  1006,  2029,   426,
     427,  1215,  1551,   922,   463,   464,   630,  1962,  1698,   437,
    1824,   974,  1390,  1100,   816,   767,   818,   772,  2020,  1440,
    1477,  1899,  1479,  1897, -1219,   312,  1782,   867,  1707, -1218,
     330,  1792,  1807,   719,   680, -1220,  1981,  1298, -1221,  1016,
    1738,  1877,   299,   268,   562,   867,   773,   850,   290,   199,
     297,  -218,  1247,  1250,  2439,   951,  2437,   851,   297,   268,
    -992,   993,   329,   297,  -992,   552,   331,   590,   970,   514,
     526,   861,   298,   567,   969,  -992,  1943,   691,   768,   594,
     768,  1609, -1094,  2146,   303,  1104,  1105,   610,  1024,   548,
    1026,  1610,   551,   716,   774, -1094,   500, -1094, -1094,  2046,
     470,   414,   318,  2054,   758,  -505,  -505,  -505,   879,   660,
     164,   697,   698,   699,   700,   701,   417,   356,  1722,   399,
    1004,   868,  1393,  1881,   200,   422,  1611,  2228,   631,  1445,
    1177,   439,  1178,   536,  1612,  1711,   899,  1454,   942,   868,
     958,  2383,   581,  1613,  1746,   441,  1463,  1521,   445,  1930,
    2153,   448,  2389,  1472,  -630, -1095,  2154,   241,  1393, -1096,
    -631,   501,  1614,   401,   415,   586,  1104,  1105,   590,   474,
    1104,  1105,   407,   882,   407,   638,   410,  1104,  1105,  1104,
    1105,   268,  2055,   995,  1104,  1105,  1104,  1105,   420,   608,
     268,   420,   473,  1780,  1863,   487,   425,   420,   420,   622,
     923,   199,   199,   199,   242,  2047,  1931,   420,   869,   199,
     268,   442,  2421,   268,   446,   199,   268,   199,   199,   199,
     199,  1455,   199,   199,   199,   199,   869,   201,  2257,  1057,
    1090,  1091,  2237,   639,   357,   762,  1061,  1098,  1393,  1102,
    1064,  1104,  1105,   472,   567,   567,   567,   199,   567,   567,
     537,   567,   880,   567,   502,  -992,   498,  1073,  1058,   199,
     506,  1683,   349,   764,   350,  1062,   771,   689,   775,  1065,
     549,   590,   860,   549,   513,   549,   199,   471,  -487,  -487,
    -487,   859,  2056,   697,   698,   699,   700,   701,   934,  1944,
    1005,   471,   768,  1096,   840,  1457,  1216,   587,  2385,   768,
    2229,  1002,  1370,   768,  -505,   512,  2228,   471,   571,   959,
     518,  1864,  1905,   776,  2105,   471,   546,  1519,   589,  1120,
    1290,   554,   561,   564,   589,   858,   207,   298,   589,  1250,
    1299,  1541,  1092,  2302,   870,   306,  1241,  2251,   202,   589,
     243,   297,  1839,   635,  2077,   589,  2082,   513,  -651,  1615,
    1356,   588,  1876,   856,   611,   432,   433,   434,   657,  2440,
    2441,  -651,  2438,  -651,   588,   878,   588,   348,   689,   447,
     487,   449,   450,   451,   452,  1128,   456,   457,   458,   459,
     199,  2044,  2045,  1106,  1877,   245,  1616,   420,  1729,  1659,
     992, -1219,  2238,   990,  1794,   681, -1218,   420,   199,   690,
     708,   655, -1220,  2216,   628, -1221,   561,  1831,   268,  1024,
    1026,   762,   306,   503,   199,   741,   952,  2413,  -218,   294,
     735, -1227,   199,  1195,  1127, -1227,   294,  1264,  1591,   651,
     516,  1685,  1841,   442,   297,  1797,   199,   275,   268,   268,
    1237,  1785,  2089,   726,  2325,   294,  2266,  1844,   687,  2326,
     294,  2408,   702,  1056,  2376,  2347,  1786,   337,   739,   294,
    1411,   351,  1223,  2029,  1069,   268,   709,  1858,   307,   366,
     367,  1598,   714,   246,  2367,  2417,   651,  -487,   722,  2229,
    1778,   659,  2193,  2020,  2194,   268,   294,  2348,   554,  1063,
     442,   297,  2198,   199,   268,  1842,  1732,  1060,  1812,  2133,
     690,  2134,  1025,   308,  2137,  1242,   704,  1311,   247,  1412,
     867,   199,   248,   761,   249,  1027, -1053, -1053,  1102,   589,
    1975,  1357,  1358,   702,   582,   203,  1832,   280,  1336,   287,
     719,   782,   727,   319,   604,    99,  1772,   742,   928,  1775,
    2414,  2454,    99,   762,  1238,   307,  1455,  1386,  1306,   899,
    2267,   899,   623,  1573,  1813,   891,   854,  1337,  1575,   561,
    2287,    99,  1375,   554,   863,  1123,    99,  1962,   643,   877,
     513,  1488,   844,   846,   199,    99,   646,   888,    79,   651,
     543,  1787,  1334,   428,   697,   698,   699,   700,   701,   205,
    2443,   768,   199,   199,   893,  1956,   429,   288,  1203,  1961,
     889,   120,    99,   268,   868,   930,  1387,   689,   120,   199,
    2191,   996,  2317,  1124,  1125,   199,  1427,   593,   268,  1844,
     697,   698,   699,   700,   701,  2031,   320,   766,  2443,   945,
    1773,   281,  2129,  1776,  1929,  1135,   300,  1142,  1030,  2112,
    2123,   120,   203,   302,  1523,  1524,  1525,  1526,   697,   698,
     699,   700,   701,  1527,  1443,  1528,   282,  1389,  1481,   199,
    1832,   638,  1194,  2062,   983,   760,  1371,  2192,   120,  1548,
    1529,   561,  1976,  1977,  1978,   554,   268,  2390,  2391,  2277,
     697,   698,   699,   700,   701,   304,  1693,  2317,  1231,  1008,
    1549,   869,   453,  1012,    99,  1952,  1405,   199,  2317,  1056,
     420,  2124,   309,   268,  2063,   454,   205,  1360,   899,   305,
    1530,   697,   698,   699,   700,   701,   243,  1774,  1444,   639,
    1777,   654,   199,   697,   698,   699,   700,   701,   884,  1372,
    2053,  1055,  1244,  1245, -1227,  2399,  1825,   763,   283,   690,
    2088,  1503,  2278,  1361,  1332,  1067,   917,   918,   554,   554,
    1953,  1074,   244,  2064,  2364,  1362,   164,   310,  2317,  2317,
     766,   245,  2381,   931,   697,   698,   699,   700,   701,   932,
    1531,  2130,   203,  1675,  1439,  -958,  1700,  2450,   738,  -630,
     697,   698,   699,   700,   701,   554,   204,  2259,  1107,  1108,
    1139,   697,   698,   699,   700,   701,   359,   360,   361,   362,
     363,   364,  1109,  1912,   366,   367,   332,  2459,  2460,   730,
     368,   554,  1657,   977,  1841,  -630,  -613,  1056,   513,   513,
    2120,  1126,  2260,  1443,  2041,   697,   698,   699,   700,   701,
    1132,   333,  1625,   420,  1470,  1122,   205,   334,  1110,   209,
    1013,   472,   513,  2125,  1153,  1041,  1111,  1920,  1921,   246,
    1112,  1021,   335,   199,   199,  1175,  2126,  2127,  1532,   336,
    1180,   199,   209,  1013,   339,  1017,  1051,   513,   651,   965,
     203,   966,   209,  1013,   354,  1940,  1048,  1842,  1014,   340,
     848,   849,  1205,  1724,   247,   964,   689,  2114,   248,   199,
     249,  2041,   856,  1916,   214,  1917,  2164,  1219,   731,   732,
    -957,   733,  1142,  1222,  -631,   651,   268,   268,   268,   268,
     358,  2115,  1229,  2116,  1533,  1699, -1227,   214,  1725,  1054,
    1844,   697,   698,   699,   700,   701,  1726,   214,  1455,  1980,
     250,  1622, -1227,   251,   205,  1333, -1156,   513,   513,   199,
     199,  1077,  1629,   209,  1013,   506,  1017,   353,  1249,  1224,
    1225,  1226,  1227,   355,  1424,  1052,   732,  2117,  1053,   702,
     907,   371,   164,   412,  1632,   252,   697,   698,   699,   700,
     701,  1239,  1240,   651,  1918,  2225,  1919,  1292,  1671,  1293,
     366,   367,  1296,   908,  1119,  1518,  1300,  1520,   372,   936,
     937,   651,   651,   253,   651,  1310,   413, -1227,   214,   554,
    1381,   268,   268,   268,   268,  2300,   418,  1173,  1174,   254,
     697,   698,   699,   700,   701,  1181,   419,   909,   690,   255,
     256,  1875,   561,  1552,   424,  1543,  2247,   651,  2248,  1633,
     697,   698,   699,   700,   701,   430,   702,   965,   702,   966,
     736,   436,   480,  1214,  1312,  1313,  1314,  1315,   444,  1634,
    1335,   848,   849,   697,   698,   699,   700,   701,   209,  1013,
    1635,  1017,   438,  1142,  1731,   899,   276, -1227,   460,   481,
    1752,  1332,   697,   698,   699,   700,   701,  2365,   697,   698,
     699,   700,   701,  2246,   206,  1577,   465,   239,  2360,   257,
     461,   846,  1636,   977,   977,  1384,   466,  1018,   554,  1637,
   -1227,  1388,   651,  1911,  1638,  1117,   785,   513,   697,   698,
     699,   700,   701,   214,  1661,   467,  2255,  1639,   277,   278,
    2307,   468,  1398,  2308,  1640,  1829,   697,   698,   699,   700,
     701,   697,   698,   699,   700,   701,   469,   410,   997,   651,
     476,   998,   999,   573,  1408,   497,   834,   838,   499,  1798,
    1115,   651,  1671,  1671,   697,   698,   699,   700,   701,   513,
     697,   698,   699,   700,   701,   211,   508,  1620,   199,  1436,
     510,   697,   698,   699,   700,   701,   574,  1137,  1138,   835,
    1500,   756,  1501,  1502,   511,  1458,   889,  2048,  1461,   697,
     698,   699,   700,   701,   698,   699,   700,   701,  1469,   697,
     698,   699,   700,   701,  1641,   697,   698,   699,   700,   701,
     697,   698,   699,   700,   701,   215,   199,  1182,  1183,   199,
     615,   616,   617,  1939,  1485,  2281,   757,  2282,   651,  1642,
     216,  1104,  1105,   554,  1643,  2283,   259,  2284,   164,  -939,
    -939,  1644,  2106,   311,  1509,   697,   698,   699,   700,   701,
    -939,   700,   701,  1759,  1760,  1761,  1762,  -939,  1763,   260,
    1987,    71,  1517,   561,   217,   561,   515,  1764,   513,   517,
    1080,  1988,  1271,  -939,  1268,  1269,  1750,  1751,  1989,   262,
    2038,  1552,   218,   520,   263,  -939,  1378,   785,  1742,  1465,
    1327,  1466,   521,   264,    77,  -939,  1426,   937,  -939,  1475,
    1476,   561,  1514,  1515,  1553,   937,  1992,  -939,  1601,  1602,
    1272,  1559,  1560,  1341,  1562,  1563,    78,   522,   221,  1993,
    1593,   937,  1435,   697,   698,   699,   700,   701,  1995,   523,
     224,   225,  1342,   527,   227,  1651,  1652,  1211,  1473,   524,
    1947,  1676,  1515,   891,  1713,  1714,   528,   487,   834,  1589,
     525,  1590,  1745,   785,  1826,  1827,   856,  1579,   529,  1765,
    1766,   530,  1455,  1968,  1801,   937,  1273,   539,  1474,  1274,
     977,   531,   513,   977,   651,   651,  1859,  1860,  1835,  1836,
     532,   835,  2070,  2071,  1694,  1275,  1545,   651,  1184,  1837,
    1838,  1546,   533,   899,  1891,  1892,   359,   360,   361,   362,
     363,   364,   697,   698,   699,   700,   701,  1904,   785,  1185,
     368,   534,   199,  1022,  1556,  1186,   535,  1648,  1767,   538,
    1570,   651,  1924,  1925,  1936,   937,  1276,   542,  1277,   242,
    1677,  1585,  1278,  1937,  1838,   553,  1679,  1851,  1187,  1938,
    1838,   568,  1908,  1910,  2033,  2034,   341,   569,  -216,  1684,
    2078,  -216,  -618,   342,  1690,   570,  1188,   343,   589,  1900,
     899,   572,   199,   578,  1580,  2442,   597,    75,   579,  -216,
    1279,  1022,   580,  1280,   591,  -216,  2050,  2051,  -939,  -939,
    2097,  2098,  2159,  2160,  1458,   964,  1281,  1282,  2235,  -623,
    1283,  -624,  1284,  -621,  -604,   790,   791,  -629,  -216,  2001,
    2161,  1547,   344,  2162,  1547,   595,  -215,   651,   651,  -215,
     599,  2156,  2157,  2183,   937,   602,  -216,   792,  2190,  2160,
    2254,   937,   793,  -621,  1285,  -616,   794,  -215,  2261,  2262,
    -216,  2236,   605,  -215,  2293,  2294,   795,  2320,  2321,  1374,
    2327,  2328,   796,  2339,  2340,   345,    88,   797,  -647,  -647,
    1142,   199,  2349,  2350,   561,   561,  -215,  2244,  2245,  1755,
     606,   371,  2158,   798,  2387,  2388,  1662,  -625,  1252,  1253,
    1254,   799,  1255,  1256,  -215,  1300,  -626,   891,    91,  2432,
     937,   800,   697,   698,   699,   700,   701,  -627,  -215,   801,
    2453,   937,  2456,  2457,   651,   651,   651,  1799,  1800,   208,
    -628,  2073,  2242,  1491,  1492,  -617,   199,  -631,  2186,  -632,
    -622,   199,   802,   803,   804,   805,   211,   596,   601,   607,
     806,   807,   609,  1823,  1436,   697,   698,   699,   700,   701,
    1830,   613,   384,   620,   621,   624,   625,   697,   698,   699,
     700,   701,   513,   626,   213,  1022,  1142,   627,  1854,   632,
     636,  2052,   641,   637,   561,   561,  1690,  1861,   644,   199,
     891,  1867,   645,   647,  2138,   648,   215,   650,   808,   809,
     810,   811,  1143,  1144,  1145,  1146,   856,  1147,  1148,  1149,
    -217,   216,  1150,  -217,   656,   899,   662,  1143,  1144,  1145,
    1146,  2384,  1147,  1148,  1149,   661,   684,  1150,   663,   688,
     691,  -217,   812,   703,   704,  1748,   706,  -217,  -630,   707,
    -993,   710,  2355,   813,   814,   217,   712,  2291,   715,   505,
     561,  1909,  1596,   723,  2378,   697,   698,   699,   700,   701,
    -217,   725,   729,   218,   740,   743,  1142,   750,   754,  1107,
    1108,   755,   697,   698,   699,   700,   701,   758,  -217,   549,
     765,  1597,   777,  1109,   778,   513,   779,   783,   781,   780,
    1809,   785,  -217,   784,  2015,  1814,   817,   220,   843,   221,
     864,   222,  2292,   847,   697,   698,   699,   700,   701,   858,
     865,   224,   225,   651,   226,   227,   874,   883,   886,  1110,
    1958,   885,   900,   903,   906,  2049,   921,  1111,   915,   926,
     199,  1112,   916,   935,   933,   938,   651,  2014,  2028,  1972,
     939,   940,  1142,   977,   792,  2002,   946,   948,  1393,   793,
    2032,  1045,   941,   794,   487,   949,  1156,  1157,  1158,  1159,
    1160,  1161,  1162,   795,  2040,  1163,   651,  2043,  1155,   796,
     950,   955,   956,   979,   797,  1164,   472,   968,  1001,   420,
    1003,   513,  1156,  1157,  1158,  1159,  1160,  1161,  1162,  1009,
     798,  1163,  1007,  1010,  1031,  1033,  2403,  1034,   799,  1032,
    1035,  1164,  1118,  1036,   554,   554,   471,  1037,   800,  2072,
     697,   698,   699,   700,   701,   293,   801,  1038,  1039,  1040,
    1042,  1142,  1043,  1300,  1044,   651,  1050,   744,   745,   746,
     592,   748,   749,   651,   752,  1046,   753,  1047,  1059,   802,
     803,   804,   805,  1075,   384,  1081,  1082,   806,   807,  1084,
     697,   698,   699,   700,   701,  1083,  1085,  2104,  1436,  1548,
    1086,  2107,  2435,  1087,  2110,  1121,  1088,  1089,  1252,  1253,
    1254,   513,  1255,  1256,  1257,  1093,  -524,  1094,  1095,  -619,
    1549,  1097,  1099,  1130,  1662,  1458,   299,  1458,  2135,  1131,
    1458,  1134,   290,   199,   297,   808,   809,   810,   811,  1136,
    1167,  1576,  1133,  1196,   889,   697,   698,   699,   700,   701,
     697,   698,   699,   700,   701,  1169,  2139,   665,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
    2319,  1200,  1154,   554,   554,  1171,  1176,   651,  1741,  1197,
     813,   814,   697,   698,   699,   700,   701,   513,  1201,  1198,
    1202,  1208,  1209,   384,  1206,  2210,  1143,  1144,  1145,  1146,
    1220,  1147,  1148,  1149,  1252,  1253,  1254,  1218,  1255,  1256,
    1257,  1217,  1228,  1230,  1234,  1243,  2015,  1236,  1251,  1261,
    1263,   651,  1265,  1054,  1267,  1295,  1270,  1294,  1297,  1302,
    1304,  1317,  1320,  1318,  1022,  1339,  1319,  1321,  1322,  2203,
    2204,  1338,  1325,  1326,  1343,  2319,  1344,  1345,  1346,  1347,
    1348,  1349,  1350,  1351,  1352,  1353,  2319,  2220,   384,  2014,
    2233,  2230,  1354,   384,  2223,  1369,   513,   384,   384,  1393,
    1396,  1377,  1379,  1395,  2239,  1380,  1399,  1400,  1401,   384,
    1404,  1406,  1409,  1416,  1407,  1418,  1415,  1419,  1420,   164,
    1431,  1440,  1421,  1410,  1438,  1447,  1449,  1450,   651,  1453,
    1462,  1467,   958,  1468,  1478,  1482,  1483,  1484,  1486,  1487,
    1489,  1494,  1497,  1498,  1504,  1505,  2319,  2319,  1506,  1511,
    1512,  1513,  1516,  1333,  1522,  2318,  1539,  1540,  1537,  1542,
    1544,  1105,  1547,  1578,  1554,  1583,  1557,  1558,  1561,   384,
     384,  1564,  1565,  1566,  1436,  1567,  1568,  1569,  1594,  1604,
    -620,  1605,  1606,  1624,  1630,  1631,  1572,   299,  1649,  1658,
    1586,  1607,  2304,  2305,  2306,   297,  1587,  1592,  1599,  1621,
    1626,  1627,  1653,  1665,   384,  1628,  1667,  1655,   889,  1656,
    1669,  2210,  1674,  1668,  1678,  1680,  1681,  1335,  1682,   937,
    2015,  1686,  1688,  1687,  1708,  2015,  1695,  1701,  1703,  2015,
    2318,  1702,  1715,   484,  1716,  1717,  1718,  1719,  1705,  1721,
    1720,  2318,   384,  1728,  1729,  1704,  1734,  1735,  1736,  1739,
    1723,  1740,  1747,  1753,  1749,  1757,  1770,  1779,   519,  2352,
    2353,  1771,  1783,  2014,  2375,  2369,  2370,  1784,  2014,  2233,
    2230,  1788,  2014,  2028,  1789,  1455,  1795,  1796,  1802,  1803,
    1805,  1804,   540,   541,  1806,  1808,  1810,  1811,  1815,  1816,
    1817,   889,  1819,  1820,  1833,  1840,  1868,  1853,  1852,  1874,
     555,  2318,  2318,  1870,   565,  1871,  1872,  1881,  1884,  2401,
    2402,   651,  1883,  1885,  1887,  1888,  1889,  1890,  1893,  1894,
    1895,   299,   575,  1896,  1901,  1902,  1906,   585,  1907,   297,
    1913,  1914,  1922,  1923,  1926,  1927,  2015,  1928,  1932,  1933,
    1935,  1948,  1959,  1966,  1941,  1949,  1963,  1967,  1960,  1969,
    2030,  2058,  2035,  2059,  2036,  2060,  2061,  2075,  2037,  2039,
    2067,  2066,  2079,  2068,  2069,  2084,  2080,  2081,  1638,  1752,
    2094,  2083,  2095,  2090,  2015,  2096,  2099,   651,   199,  2014,
    2447,  2444,  2100,  2101,  2102,  2103,  2113,  2121,   241,  2108,
    2128,  2122,  2163,  2167,  2140,  2170,  2141,  2136,  2171,  2145,
    2147,  2148,  2149,  2150,  2173,  2151,  2152,  2174,  2178,  2175,
    2176,  2177,  2184,  2179,  2185,  2180, -1211,  2014,  2447,  2444,
    1911,  2187,  2182,  2188,   682,   683,  2199,  2197,  2215,   585,
    2201,  2206,  2218,  2213,  2219,  2222,  2221,  2234,  2256,  2191,
    2264,  2224,  2269,  2265,  2285,  2275,  2288,   711,  2286,  2296,
    2298,  2240,  2243,  2252,  2301,  2253,   484,  2324,  2272,  2273,
    2330,  2295,  2329,  2274,  2331,  2332,  2333,   555,  2334,  2335,
    2337,  2338,  2336,  2344,  2345,   565,   565,   565,   747,   565,
     565,  2341,   751,  2351,   565,  2342,  2356,  2343,  2358,  2386,
    2377,  2385,  2393,  2394,  2395,   208,  -615, -1156,  2396,  2397,
    2398,  2404,  2405,  2407,   209,   210,  2448,  2409,  2410,  2412,
    2427,  2428,   211,  2429,  2425,   786,   789,  2419,  2420,  2431,
     819,  2430,  2433,  2434,  2451,   565,   841,   842,  2452,  2455,
     585,   212,  1662,   346,  2196,  1414,   857,  2168,  2280,  2087,
     213,  2200,   555,   435,   347,   317,   157,  1397,  1737,   158,
     159,  1221,   160,  2155,  1706,  2423,   658,  1460,  1028,   214,
    2458,   161,   215,   954,   162,   163,   957,  2422,  1289,  1430,
    2424,  1623,  1862,   919,   920,   963,  2086,   216,  1493,  2208,
    2290,  1743,   385,  2057,   984,  1071,   962,   839,  1192,   409,
    1204,  2076,  1116,  1391,  2400,  1600,  2392,  2382,  2368,  2380,
    2371,  2372,  2373,  2461,  2205,  2374,  2354,  1072,  1965,  2436,
    2357,   217,  1660,  1403,  1793,  2217,   240,  1710,  2165,  2166,
    1727,  1452,  1672,  1213,  2268,  1818,  2202,  1434,   961,   218,
    2111,   484,     0,     0,     0,   855,     0,     0,     0,     0,
       0,     0,     0,     0,   985,   986,   987,   988,   989,   219,
       0,   991,     0,   994,   555,     0,     0,     0,     0,     0,
       0,     0,     0,   220,     0,   221,     0,   222,     0,   223,
       0,     0,     0,     0,     0,     0,     0,   224,   225,     0,
     226,   227,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1049,     0,     0,     0,     0,     0,     0,   228,
       0,     0,   229,   205,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1066,     0,  1068,     0,  1070,   555,     0,
       0,     0,  1076,     0,  1078,  1079,     0,     0,     0,     0,
       0,     0,     0,     0,   230,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   555,     0,     0,     0,     0,  1103,
       0,     0,   231,     0,     0,     0,     0,     0,     0,     0,
       0,  1113,  1114,     0,     0,     1,   232,     0,   233,     0,
     555,     0,     0,     0,     0,     0,   565,     0,   234,   235,
       0,     0,     0,     0,     0,  1129,     4,     5,   198,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,    65,    66,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   852,     0,  1232,  1233,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1266,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1291,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   555,     0,
       0,     0,     0,     0,  1316,     0,     0,     0,     0,     0,
       0,  1323,  1324,     0,     0,     0,     0,  1330,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1340,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1355,     0,     0,     0,  1103,     0,
       0,     0,     0,  1359,    93,  1367,  1368,     0,     0,  1373,
       0,     0,     0,     0,     0,     0,  1376,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   555,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   544,     0,     0,     0,     0,     0,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   853,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1480,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   555,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1510,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1555,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1571,     1,  1574,
       0,     0,     0,     0,     0,     0,   565,     0,     0,     0,
       0,  1582,     0,     0,     0,     0,     0,     0,     0,     4,
       5,   198,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     0,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     0,     0,     0,     0,     0,     0,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1382,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1330,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1733,     0,     0,     0,  1330,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   565,
       0,     0,     0,  1744,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1756,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   484,     0,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   544,     0,     0,     0,  1857,     0,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     0,     0,     0,     0,  1383,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1903,     4,
       5,   198,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     0,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     0,     0,     0,     0,     0,     0,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1754,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1330,  1330,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   555,   555,     0,     0,     0,     0,  2074,
       4,     5,   198,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,     0,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,  2131,  2132,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,  2142,  2144,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1857,   555,   555,   544,     0,     0,     0,     0,     0,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2181,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1383,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2209,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   484,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   544,     0,     0,     0,     0,
       0,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2314,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   545,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2209,     4,     5,   198,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,     1,     0,     0,     0,     0,  2416,
      65,    66,    67,    68,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2418,     4,     5,   198,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
       0,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     0,     0,     0,
       0,     0,     0,    65,    66,    67,    68,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   852,     0,     0,     0,     0,     4,     5,
     198,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     0,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
       0,     0,     0,     0,     0,     0,    65,    66,    67,    68,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   544,     0,     0,
       0,     0,     0,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   721,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,   944,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   544,     0,     0,     0,     0,     0,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1383,     4,     5,   198,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     1,     0,
       0,     0,     0,     0,    65,    66,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       5,   198,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     0,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     1,     0,     0,     0,     0,     0,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     5,   198,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,     0,     0,     0,     0,     0,     0,
      65,    66,    67,    68,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,   563,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   862,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   876,
       4,     5,   198,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,     0,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,     1,     0,     0,     0,     0,     0,    65,    66,
      67,    68,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     5,   198,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     0,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     1,     0,     0,     0,     0,
       0,    65,    66,    67,    68,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     5,   198,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,    65,    66,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   887,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     929,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1011,     4,     5,   198,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,     0,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,     0,     0,     0,     0,
       0,     0,    65,    66,    67,    68,     0,     0,     0,     0,
       0,     1,   359,   360,   361,   362,   363,   364,     0,   365,
     366,   367,     0,     0,     0,     3,   368,     0,     0,     0,
       0,     0,     4,     5,   198,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,  1983,    64,     0,     0,     0,     0,     0,     0,
      65,   369,    67,    68,  1984,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     370,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1987,    71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1988,     0,     0,     0,
       0,     0,     0,  1989,     0,     0,     0,     0,  1990,  1991,
       0,     0,    76,     0,     0,     0,     0,     0,     0,    77,
       0,     0,     0,     0,     0,     0,     0,   371,     0,     0,
       0,  1992,    93,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,     0,  1993,  1994,     0,     0,     0,     0,
       0,     0,     0,  1995,   372,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2361,     0,     0,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   373,
       0,     0,     0,  1997,     0,     0,     0,  1998,  1455,     0,
    1999,    90,     0,     0,     0,     0,     0,     0,     0,     0,
    2362,     0,     0,     0,   296,     0,     0,     0,     0,     0,
      93,  1822,    94,    95,     0,     0,   374,   375,     0,     0,
      96,    97,     0,     0,     0,     0,     0,     0,     0,     0,
     376,   377,   378,   379,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   102,     0,     0,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2001,     0,   482,     0,  2363,     4,
       5,   198,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     0,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     0,     0,     0,     0,     0,     0,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   792,     0,     0,     0,     0,   793,     0,     0,     0,
     794,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     795,     0,     0,     0,     0,     0,   796,     0,     0,     0,
       0,   797,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   798,     0,     0,
       0,     0,     0,     0,     0,   799,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   800,     0,     0,     0,     0,
       0,     0,     0,   801,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   802,   803,   804,   805,
       0,     0,     0,     0,   806,   807,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   808,   809,   810,   811,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,     0,     0,     0,     0,     0,     0,   813,   814,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,   359,   360,   361,   362,
     363,   364,     0,   365,   366,   367,     0,  1982,     0,     3,
     368,     0,     0,     0,     0,  2119,     4,     5,   198,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,  1983,    64,     0,     0,
       0,     0,     0,     0,    65,   369,    67,    68,  1984,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1985,
       0,     0,     0,     0,   370,  1986,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1987,
      71,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1988,     0,     0,     0,     0,     0,     0,  1989,     0,     0,
       0,     0,  1990,  1991,     0,     0,    76,     0,     0,     0,
       0,     0,     0,    77,     0,     0,     0,     0,     0,     0,
       0,   371,     0,     0,     0,  1992,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     0,     0,  1993,  1994,
       0,     0,     0,     0,     0,     0,     0,  1995,   372,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1996,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   373,     0,     0,     0,  1997,     0,     0,
       0,  1998,     0,     0,  1999,    90,     0,     0,     0,     0,
       0,     0,     0,     0,  2000,     0,     0,     0,   296,     0,
       0,     0,     0,     0,    93,     0,    94,    95,     0,     0,
     374,   375,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,   376,   377,   378,   379,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,   359,   360,   361,   362,   363,   364,     0,   365,   366,
     367,     0,     0,     0,     3,   368,     0,     0,  2001,     0,
     482,     4,     5,   198,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,    65,
     369,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   820,     0,     0,     0,   477,   478,   370,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   821,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   371,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   294,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   372,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   582,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   373,     0,
       0,     0,     0,     0,     0,     0,     0,   480,     0,     0,
     295,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   296,     0,     0,     0,     0,     0,    93,
       0,    94,    95,     0,   481,   374,   375,     0,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,   376,
     377,   378,   379,     0,     0,     0,     0,     0,     0,    99,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,   359,   360,   361,   362,
     363,   364,     0,   365,   366,   367,     0,     0,     0,     3,
     368,     0,     0,     0,     0,  1101,     4,     5,   198,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,    65,   369,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   820,     0,
       0,     0,   477,   478,   370,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   821,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   371,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   294,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   372,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   845,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   373,     0,     0,     0,     0,     0,     0,
       0,     0,   480,     0,     0,   295,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   296,     0,
       0,     0,     0,     0,    93,     0,    94,    95,     0,   481,
     374,   375,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,   376,   377,   378,   379,     0,     0,
       0,     0,     0,     0,    99,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,   359,   360,   361,   362,   363,   364,     0,   365,   366,
     367,     0,     0,     0,     3,   368,     0,     0,     0,     0,
    1101,     4,     5,   198,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,  1983,    64,     0,     0,     0,     0,     0,     0,    65,
     369,    67,    68,  1984,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   370,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1990,  1991,     0,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   371,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1994,     0,     0,     0,     0,     0,
       0,     0,     0,   372,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2361,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   373,     0,
       0,     0,  1997,     0,     0,     0,  1998,     0,     0,  1999,
      90,     0,     0,     0,     0,     0,     0,     0,     0,  2000,
       0,     0,     0,   296,     0,     0,     0,     0,     0,    93,
       0,    94,    95,     0,     0,   374,   375,     0,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,   376,
     377,   378,   379,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,   359,   360,   361,   362,
     363,   364,     0,   365,   366,   367,     0,     0,     0,     3,
     368,     0,     0,     0,     0,   482,     4,     5,   198,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,    65,   369,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   477,   478,   370,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   371,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   294,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   372,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   582,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   373,     0,     0,     0,     0,     0,     0,
       0,     0,   480,     0,     0,   295,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   296,     0,
       0,     0,     0,     0,    93,     0,    94,    95,     0,   481,
     374,   375,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,   376,   377,   378,   379,     0,     0,
       0,     0,     0,     0,    99,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,   359,   360,   361,   362,   363,   364,     0,   365,   366,
     367,     0,     0,     0,     3,   368,     0,     0,     0,     0,
     583,     4,     5,   198,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,    65,
     369,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   477,   478,   370,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   371,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   294,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   372,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   845,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   373,     0,
       0,     0,     0,     0,     0,     0,     0,   480,     0,     0,
     295,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   296,     0,     0,     0,     0,     0,    93,
       0,    94,    95,     0,   481,   374,   375,     0,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,   376,
     377,   378,   379,     0,     0,     0,     0,     0,     0,    99,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,   359,   360,   361,   362,
     363,   364,     0,   365,   366,   367,     0,     0,     0,     3,
     368,     0,     0,     0,     0,   583,     4,     5,   198,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,    65,   369,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   820,     0,
       0,     0,   477,   478,   370,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   924,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   821,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   371,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   372,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   373,     0,     0,     0,     0,     0,     0,
       0,     0,   480,     0,     0,   295,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   296,     0,
       0,     0,     0,     0,    93,     0,    94,    95,     0,   481,
     374,   375,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,   376,   377,   378,   379,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,   359,   360,   361,   362,   363,   364,     0,   365,   366,
     367,     0,     0,     0,     3,   368,     0,     0,     0,     0,
     822,     4,     5,   198,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,    65,
     369,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   820,     0,     0,     0,   477,   478,   370,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1288,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   821,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   371,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   372,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   373,     0,
       0,     0,     0,     0,     0,     0,     0,   480,     0,     0,
     295,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   296,     0,     0,     0,     0,     0,    93,
       0,    94,    95,     0,   481,   374,   375,     0,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,   376,
     377,   378,   379,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,   359,   360,   361,   362,
     363,   364,     0,   365,   366,   367,     0,     0,     0,     3,
     368,     0,     0,     0,     0,   822,     4,     5,   198,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,    65,   369,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   477,   478,   370,     0,     0,  1363,  1364,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   371,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1365,     0,     0,     0,     0,     0,     0,   372,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   373,     0,     0,     0,     0,     0,     0,
       0,     0,   480,     0,     0,   295,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   296,     0,
       0,     0,     0,     0,    93,     0,    94,    95,     0,   481,
     374,   375,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,   376,   377,   378,   379,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,   359,   360,   361,   362,   363,   364,     0,   365,   366,
     367,     0,     0,     0,     3,   368,     0,   982,     0,     0,
     482,     4,     5,   198,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,    65,
     369,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   477,   478,   370,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1696,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   371,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1697,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   372,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   373,     0,
       0,     0,     0,     0,     0,     0,     0,   480,     0,     0,
     295,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   296,     0,     0,     0,     0,     0,    93,
       0,    94,    95,     0,   481,   374,   375,     0,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,   376,
     377,   378,   379,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,   359,   360,   361,   362,
     363,   364,     0,   365,   366,   367,     0,     0,     0,     3,
     368,     0,     0,     0,     0,   482,     4,     5,   198,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,    65,   369,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   477,   478,   370,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   371,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   372,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   373,     0,     0,     0,     0,     0,   573,
       0,     0,   480,     0,     0,   295,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   296,     0,
       0,     0,     0,     0,    93,     0,    94,    95,     0,   481,
     374,   375,   574,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,   376,   377,   378,   379,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,   359,   360,   361,   362,   363,   364,     0,   365,   366,
     367,     0,     0,     0,     3,   368,     0,     0,     0,     0,
     482,     4,     5,   198,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,    65,
     369,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   477,   478,   370,
       0,     0,   787,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   788,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   371,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   372,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   373,     0,
       0,     0,     0,     0,     0,     0,     0,   480,     0,     0,
     295,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   296,     0,     0,     0,     0,     0,    93,
       0,    94,    95,     0,   481,   374,   375,     0,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,   376,
     377,   378,   379,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,   359,   360,   361,   362,
     363,   364,     0,   365,   366,   367,     0,     0,     0,     3,
     368,     0,     0,     0,     0,   482,     4,     5,   198,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,    65,   369,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   820,     0,
       0,     0,   477,   478,   370,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   821,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   371,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   372,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   373,     0,     0,     0,     0,     0,     0,
       0,     0,   480,     0,     0,   295,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   296,     0,
       0,     0,     0,     0,    93,     0,    94,    95,     0,   481,
     374,   375,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,   376,   377,   378,   379,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     0,     3,     0,     0,     0,     0,     0,
     822,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,    65,
      66,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    69,     0,     0,     0,     0,     0,
       0,     0,     0,    70,     0,    71,     0,     0,    72,     0,
       0,     0,     0,     0,     0,    73,     0,     0,     0,    74,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
       0,    76,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,     0,     0,    79,    80,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    82,    83,    84,    85,     0,    86,    87,    88,     0,
      89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      91,     0,     0,    92,     0,     0,     0,     0,     0,    93,
       0,    94,    95,     0,     0,     0,     0,     0,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,    98,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    99,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,   102,     0,     0,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,   359,   360,   361,   362,
     363,   364,     0,   365,   366,   367,     0,     0,     0,     3,
     368,     0,     0,     0,     0,   120,     4,     5,   198,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,    65,   369,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   477,   478,   370,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   479,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   371,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   372,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   373,     0,     0,     0,     0,     0,     0,
       0,     0,   480,     0,     0,   295,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   296,     0,
       0,     0,     0,     0,    93,     0,    94,    95,     0,   481,
     374,   375,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,   376,   377,   378,   379,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,   359,   360,   361,   362,   363,   364,     0,   365,   366,
     367,     0,     0,     0,     3,   368,     0,   982,     0,     0,
     482,     4,     5,   198,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,    65,
     369,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   477,   478,   370,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   371,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   372,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   373,     0,
       0,     0,     0,     0,     0,     0,     0,   480,     0,     0,
     295,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   296,     0,     0,     0,     0,     0,    93,
       0,    94,    95,     0,   481,   374,   375,     0,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,   376,
     377,   378,   379,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,   359,   360,   361,   362,
     363,   364,     0,   365,   366,   367,     0,     0,     0,     3,
     368,     0,     0,     0,     0,   482,     4,     5,   198,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,    65,   369,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   477,   478,   370,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   371,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   372,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   373,     0,     0,     0,     0,     0,     0,
       0,     0,   480,     0,     0,   295,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   296,     0,
       0,     0,     0,     0,    93,     0,    94,    95,     0,   481,
     374,   375,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,   376,   377,   378,   379,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,   359,   360,   361,   362,   363,   364,     0,   365,   366,
     367,     0,     0,     0,     3,   368,     0,     0,     0,  2143,
     482,     4,     5,   198,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,    65,
     369,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   477,   478,   370,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
    2313,     0,     0,     0,     0,     0,   371,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   372,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   373,     0,
       0,     0,     0,     0,     0,     0,     0,   480,     0,     0,
     295,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   296,     0,     0,     0,     0,     0,    93,
       0,    94,    95,     0,   481,   374,   375,     0,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,   376,
     377,   378,   379,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,   359,   360,   361,   362,
     363,   364,     0,   365,   366,   367,     0,     0,     0,     3,
     368,     0,     0,     0,     0,   482,     4,     5,   198,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,    65,   369,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   477,   478,   370,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   371,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   372,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   373,     0,     0,     0,     0,     0,     0,
       0,     0,   480,     0,     0,   295,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   296,     0,
       0,     0,     0,     0,    93,     0,    94,    95,     0,   481,
     374,   375,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,   376,   377,   378,   379,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,   359,   360,   361,   362,   363,   364,     0,   365,   366,
     367,     0,     0,     0,     3,   368,     0,     0,     0,     0,
     482,     4,     5,   198,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,    65,
     369,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   370,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2226,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   371,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   294,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   372,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2227,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   373,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   296,     0,     0,     0,     0,     0,    93,
       0,    94,    95,     0,     0,   374,   375,     0,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,   376,
     377,   378,   379,     0,     0,     0,     0,     0,     0,    99,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,   359,   360,   361,   362,
     363,   364,     0,   365,   366,   367,     0,     0,     0,     3,
     368,     0,     0,     0,     0,   583,     4,     5,   198,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,    65,   369,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   370,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2226,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   371,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   372,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2361,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   373,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   296,     0,
       0,     0,     0,     0,    93,     0,    94,    95,     0,     0,
     374,   375,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,   376,   377,   378,   379,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,   359,   360,   361,   362,   363,   364,     0,   365,   366,
     367,     0,     0,     0,     3,   368,     0,     0,     0,     0,
     482,     4,     5,   198,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,    65,
     369,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   370,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   371,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   372,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2361,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   373,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   296,     0,     0,     0,     0,     0,    93,
       0,    94,    95,     0,     0,   374,   375,     0,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,   376,
     377,   378,   379,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,   359,   360,   361,   362,
     363,   364,     0,   365,   366,   367,     0,     0,     0,     3,
     368,     0,     0,     0,     0,   482,     4,     5,   198,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,    65,   369,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   370,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   371,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   372,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   373,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   295,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   296,     0,
       0,     0,     0,     0,    93,     0,    94,    95,     0,     0,
     374,   375,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,   376,   377,   378,   379,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,   359,   360,   361,   362,   363,   364,     0,   365,   366,
     367,     0,     0,     0,     3,   368,     0,     0,     0,     0,
     380,     4,     5,   198,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,    65,
     369,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   370,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   371,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   372,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   373,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     295,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   296,     0,     0,     0,     0,     0,    93,
       0,    94,    95,     0,     0,   374,   375,     0,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,   376,
     377,   378,   379,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
       0,     0,     0,     0,     0,   482,     4,     5,   198,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       1,     0,     0,     0,    65,    66,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     5,   198,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    76,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,     0,    65,
      66,    67,    68,     0,     0,     0,     0,     0,   294,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   295,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   296,     0,
       0,     0,     0,   294,    93,     0,    94,    95,     0,     0,
       0,     0,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    99,     0,     0,   100,     0,     0,
       0,   337,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,     0,   971,     0,     0,     0,     0,     0,     0,
     120,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    99,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1248,     4,     5,   198,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     1,     0,
       0,     0,     0,     0,    65,    66,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       5,   198,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     0,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     0,     0,     0,     0,     0,     0,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,     0,   294,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   582,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    93,     0,     0,     0,   971,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    99,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   296,     0,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    96,    97,     0,
    1248,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   311,     4,     5,   198,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,     0,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,     1,     0,     0,     0,
       0,     0,    65,    66,    67,    68,     0,     0,     0,     0,
       0,   504,     0,     0,     0,     0,     0,     4,     5,   198,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,     0,
       0,     0,     1,     0,     0,    65,    66,    67,    68,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   505,     4,     5,   198,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     0,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     0,     0,     0,     0,     0,
       0,    65,    66,    67,    68,     0,     0,     0,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,     0,   971,
       0,     0,     0,     0,     0,     0,     0,     0,  1260,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   972,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1691,     4,     5,
     198,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     0,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
       0,     0,     0,     0,     0,     0,    65,    66,    67,    68,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     792,     0,     0,     0,     0,   793,     0,     0,     0,   794,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   795,
       0,     0,     0,     0,     0,   796,     0,     0,     0,     0,
     797,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   798,     0,     0,     0,
       0,     0,     0,     0,   799,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   800,     0,     0,     0,     0,     0,
       0,     0,   801,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   802,   803,   804,   805,     0,
       0,     0,     0,   806,   807,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   808,   809,   810,   811,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,   813,   814,     0,     0,
       0,     0,     1,     0,     0,     0,     0,     0,     0,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,     4,     5,   198,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     0,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     0,     0,     0,     0,     0,
       0,    65,    66,    67,    68,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   792,     0,     0,     0,     0,
     793,     0,     0,     0,  1189,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   795,     0,     0,     0,     0,     0,
     796,     0,     0,     0,     0,   797,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   798,     0,     0,     0,     0,     0,     0,     0,   799,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   800,
       0,     0,     0,     0,     0,     0,     0,   801,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1190,   803,   804,  1191,     0,     0,     0,     0,   806,   807,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   808,   809,   810,   811,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,   813,   814,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     0,     0,     0,     0,     0,     0,     4,
       5,   198,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     0,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     0,     0,     0,     0,     0,     0,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
     695,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
       4,     5,   198,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,     0,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,     0,     0,     0,     0,     0,   696,     0,     0,
       0,     0,     0,     0,     0,   697,   698,   699,   700,   701,
       0,     0,     0,     0,     0,     0,     0,     0,   295,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   296,     0,     0,     0,     0,     0,    93,     0,    94,
      95,     0,     0,     0,     0,     0,     0,    96,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,   102,     0,     0,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,     4,     5,   198,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,     0,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,     0,     0,    93,     0,
       0,     0,    65,    66,    67,    68,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   258,     0,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   259,     0,
       0,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,     0,     0,     0,     0,     0,
       0,   260,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   261,
       0,   262,     0,     0,     0,     0,   263,     0,     1,     0,
       0,     0,     0,     0,     0,   264,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   265,     4,
       5,   198,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     0,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,   266,   267,     0,     0,     0,     0,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     313,     0,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   259,     0,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,     0,
       0,     0,     0,     0,     0,     0,   260,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   261,     0,   262,     0,     0,     0,
       0,   263,     0,     1,     0,     0,     0,     0,     0,     0,
     264,     0,     0,     0,     0,     0,     0,   321,     0,     0,
       0,     0,     0,   314,     4,     5,   198,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,     0,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,   315,   316,     0,     0,
       0,     0,    65,    66,    67,    68,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,     0,     0,     0,     0,   322,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   323,     0,     0,     4,
       5,   198,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     0,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     0,     0,     0,     0,     0,   324,    65,    66,    67,
      68,     0,    93,     0,     0,     0,     0,     0,   325,     0,
       0,     0,   326,   327,     0,     0,     0,     0,     0,     0,
       0,  1422,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   328,
       0,     0,     0,     0,     0,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     0,     0,     0,  1090,  1091,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     5,   198,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    93,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,     0,     0,     0,     0,     0,     0,
      65,    66,    67,    68,     0,     0,  1423,     0,     0,     0,
     100,     0,     0,     0,     0,     0,     0,     0,  1092,     0,
       0,     0,     0,     1,     0,     0,     0,     0,     0,     0,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,     4,     5,   198,     7,     8,     9,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   296,     0,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      96,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,     0,     0,   287,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   288,     0,     0,     0,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     0,     0,     0,   106,   107,   108,   109,   110,
     111,   289,   113,   114,   115,   116,   117,   118,   119,     4,
       5,   198,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     0,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     1,     0,     0,     0,     0,     0,    65,    66,    67,
      68,     0,     0,     0,     0,     0,   504,     0,     0,     0,
       0,     0,     4,     5,   198,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,     0,     0,     0,     0,     0,     0,
      65,    66,    67,    68,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   505,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,   981,     0,     0,     0,     0,   892,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   982,     0,
       0,     0,     4,     5,   198,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    93,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,     0,     0,   893,     0,     0,     0,
      65,    66,    67,    68,     0,     0,     0,     0,     0,     0,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     0,     0,     0,
       0,     0,     0,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,     4,     5,   198,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,     0,
       0,     0,     0,     0,     0,    65,    66,    67,    68,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1588,     0,     0,     0,     0,
       4,     5,   198,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,     0,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,     1,     0,     0,     0,     0,     0,    65,    66,
      67,    68,     0,   758,     0,     0,     0,  1689,     0,     0,
       0,     0,     0,     4,     5,   198,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     0,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     0,     0,     0,     0,     0,
       0,    65,    66,    67,    68,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,  1970,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   544,     0,     0,     0,     0,     0,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,     0,     0,     0,     0,     0,
    1971,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     0,     0,     0,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,     4,     5,
     198,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     0,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
       1,     0,     0,     0,     0,     0,    65,    66,    67,    68,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     5,   198,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     1,     0,     0,     0,     0,     0,    65,
      66,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     5,   198,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,     0,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,     0,     0,     0,     0,
       0,     0,    65,    66,    67,    68,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   291,     0,   440,     0,     0,     0,     0,     0,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   431,     0,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     0,     0,     0,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,     4,
       5,   198,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     0,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     1,     0,     0,     0,     0,     0,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     5,   198,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,     0,     0,     0,     0,     0,     0,
      65,    66,    67,    68,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     370,     0,     0,     0,     0,     4,     5,   198,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
       0,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     0,     0,     0,
       0,   455,     0,    65,    66,    67,    68,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
     544,     0,     0,     0,     0,     0,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
       4,     5,   198,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,     0,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,     1,     0,     0,     0,     0,     0,    65,    66,
      67,    68,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     5,   198,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     0,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     0,     0,     0,     0,     0,
       0,    65,    66,    67,    68,   261,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1382,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     5,   198,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,  1507,    41,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     0,     0,     0,     0,     0,    93,    65,
      66,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,  1508,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     0,     0,     0,
       0,     0,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     4,     5,   198,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,    65,    66,    67,    68,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1588,     0,     0,     0,     0,     4,
       5,   198,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     0,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     1,     0,     0,     0,     0,     0,    65,    66,    67,
      68,     0,     0,     0,     0,     0,  1689,     0,     0,     0,
       0,     0,     4,     5,   198,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     0,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,     0,     0,     0,     0,     0,     0,
      65,    66,    67,    68,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1754,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     0,     0,     0,
       0,     0,     0,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,     4,     5,   198,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,     0,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,     1,
       0,     0,     0,     0,     0,    65,    66,    67,    68,     0,
       0,     0,     0,     0,  1866,     0,     0,     0,     0,     0,
       4,     5,   198,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,     0,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,     1,     0,     0,     0,     0,     0,    65,    66,
      67,    68,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     5,   198,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     0,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     0,     0,     0,     0,     0,
       0,    65,    66,    67,    68,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1393,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     0,     0,     0,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,     4,     5,
     198,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,     0,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
       0,     0,     0,     0,     0,     0,    65,    66,    67,    68,
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
       0,     0,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   106,
     107,   108,   109,   110,   111,   289,   113,   114,   115,   116,
     117,   118,   119
};

static const yytype_int16 yycheck[] =
{
       0,     0,     0,     0,   202,   294,   384,   202,     0,   610,
       2,    81,   286,   509,   694,   909,     0,   687,   664,   687,
    1024,   399,  1026,  1196,   461,  1499,  1139,   202,  1186,  1215,
       0,   574,   619,   223,  1597,   426,   520,   717,  1847,   229,
     230,   922,  1331,   630,   263,   264,   437,  1829,  1497,   239,
    1656,   691,  1136,   821,   570,   550,   572,   552,  1847,     3,
    1237,  1729,  1239,     3,     0,    90,  1607,    62,  1516,     0,
      95,  1617,  1635,   508,     7,     0,  1845,  1016,     0,   726,
    1554,  1708,    82,    75,   354,    62,   552,   101,    80,    81,
      82,     0,   971,   972,     4,     7,     4,   101,    90,    91,
     108,   108,    94,    95,   108,   350,    98,   485,   101,   306,
     149,   595,    82,   357,   101,   108,    92,   149,   550,   400,
     552,    25,   102,   103,    84,   104,   105,   101,   731,   115,
     733,    35,   115,   506,   115,   102,   107,   102,   102,   195,
     193,   238,    91,    27,    97,    98,    99,   100,   166,   471,
     120,   109,   110,   111,   112,   113,   213,   251,  1531,   202,
     200,   156,   204,    89,     2,   222,    70,  2129,   438,  1207,
     201,   241,   203,   251,    78,   181,   611,   166,   201,   156,
     201,  2313,   379,    87,  1579,   242,   201,  1300,   245,    30,
     367,   248,  2324,  1231,   371,   102,   367,   149,   204,   102,
     371,   172,   106,   202,   301,   380,   104,   105,   586,   279,
     104,   105,   204,   604,   206,   124,   208,   104,   105,   104,
     105,   213,   106,   707,   104,   105,   104,   105,   220,   419,
     222,   223,   275,  1606,   172,   509,   228,   229,   230,   429,
     631,   233,   234,   235,   196,   301,    87,   239,   243,   241,
     242,   243,  2384,   245,   246,   247,   248,   249,   250,   251,
     252,   250,   254,   255,   256,   257,   243,   368,   310,   764,
     211,   212,     3,   182,   368,   545,   771,   820,   204,   822,
     775,   104,   105,   275,   528,   529,   530,   279,   532,   533,
     368,   535,   310,   537,   265,   108,   288,   781,   764,   291,
     292,  1478,    98,   548,   100,   771,   551,   482,   553,   775,
     296,   689,   593,   296,   306,   296,   308,   370,    98,    99,
     100,   591,  1885,   109,   110,   111,   112,   113,   650,   305,
     370,   370,   764,   817,   578,  1216,   923,   380,   370,   771,
    2129,   714,  1110,   775,   297,   305,  2308,   370,   373,   370,
     310,   289,  1747,   320,  1960,   370,   348,  1296,   372,   843,
    1006,   353,   354,   355,   372,   372,   202,   337,   372,  1248,
    1017,  1310,   313,  2221,   369,    24,   200,  2146,   253,   372,
      24,   373,  1671,   440,  1925,   372,  1932,   379,   368,   293,
     369,   371,   369,   588,   368,   233,   234,   235,   468,   309,
     310,   368,   310,   368,   371,   602,   371,   371,   583,   247,
     684,   249,   250,   251,   252,   373,   254,   255,   256,   257,
     412,  1870,  1871,   246,  2051,    69,   330,   419,   368,   373,
     704,   367,   163,   703,  1620,   368,   367,   429,   430,   482,
     497,   466,   367,  2111,   436,   367,   438,   251,   440,  1052,
    1053,   721,    24,   291,   446,   525,   368,   185,   367,   186,
     517,   368,   454,   900,   371,   368,   186,   983,   371,   461,
     308,   369,   136,   465,   466,   369,   468,   368,   470,   471,
       7,   149,   369,   142,   369,   186,     7,  1673,   480,   369,
     186,   369,   484,   763,  2303,   137,   164,   224,   523,   186,
      91,   297,   937,  2312,   778,   497,   498,  1684,   157,    12,
      13,  1392,   504,   157,  2303,  2363,   508,   297,   510,  2308,
    1604,   470,    45,  2312,    47,   517,   186,   169,   520,   774,
     522,   523,  2095,   525,   526,   199,  1540,   224,    60,  1987,
     583,  1989,   732,   192,  1992,   369,   370,  1031,   192,   140,
      62,   543,   196,   545,   198,   129,   369,   370,  1101,   372,
     106,  1104,  1105,   555,   224,   178,   370,   202,  1063,   196,
    1005,   563,   231,   172,   412,   302,    62,   526,   635,    62,
     308,   251,   302,   853,   111,   157,   250,   373,  1023,  1024,
     111,  1026,   430,  1361,   116,  1196,   588,  1063,  1366,   591,
    2206,   302,  1118,   595,   596,   849,   302,  2389,   446,   601,
     602,  1251,   582,   583,   606,   302,   454,   609,   186,   611,
     192,   289,  1059,   185,   109,   110,   111,   112,   113,   242,
    2419,  1063,   624,   625,   208,  1821,   198,   264,   251,  1825,
     610,   368,   302,   635,   156,   637,  1130,   822,   368,   641,
     138,   708,  2238,   850,   851,   647,   224,   160,   650,  1845,
     109,   110,   111,   112,   113,  1851,   265,   368,  2457,   661,
     156,   115,   368,   156,  1787,   865,     4,   874,   735,  1968,
       4,   368,   178,     4,    40,    41,    42,    43,   109,   110,
     111,   112,   113,    49,   186,    51,   140,  1134,  1241,   691,
     370,   124,   899,   121,   696,   543,   106,   195,   368,   118,
      66,   703,   258,   259,   260,   707,   708,  2325,  2326,   124,
     109,   110,   111,   112,   113,     4,  1494,  2313,   947,   721,
     139,   243,   185,   725,   302,   240,  1171,   729,  2324,  1009,
     732,    65,   196,   735,   162,   198,   242,   120,  1183,   228,
     106,   109,   110,   111,   112,   113,    24,   243,   250,   182,
     243,   465,   754,   109,   110,   111,   112,   113,   606,   169,
    1883,   763,   969,   970,   368,  2338,  1657,   371,   222,   822,
    1938,  1265,   187,   156,  1054,   777,   624,   625,   780,   781,
     295,   783,    60,   211,  2303,   168,   766,   228,  2384,  2385,
     368,    69,  2311,   641,   109,   110,   111,   112,   113,   647,
     166,  1984,   178,  1459,  1205,   367,  2290,  2425,   522,   371,
     109,   110,   111,   112,   113,   817,   192,    24,   106,   107,
     873,   109,   110,   111,   112,   113,     4,     5,     6,     7,
       8,     9,   120,   264,    12,    13,     4,  2455,  2456,   142,
      18,   843,  1439,   691,   136,   371,   372,  1127,   850,   851,
    1973,   853,    59,   186,  1868,   109,   110,   111,   112,   113,
     862,   317,  1415,   865,   197,   845,   242,   368,   156,    33,
      34,   873,   874,   137,   876,   370,   164,  1768,  1769,   157,
     168,   729,   368,   885,   886,   887,   150,   151,   254,   368,
     892,   893,    33,    34,     0,    36,   142,   899,   900,  1579,
     178,  1579,    33,    34,   102,  1809,   754,   199,    72,   367,
     369,   370,   914,    24,   192,    93,  1101,    64,   196,   921,
     198,  1935,  1127,     7,    88,     9,  2049,   929,   231,   232,
     367,   234,  1139,   935,   371,   937,   938,   939,   940,   941,
      16,    88,   944,    90,   310,  1498,   368,    88,    59,   371,
    2146,   109,   110,   111,   112,   113,    67,    88,   250,   251,
     238,  1406,   368,   241,   242,   371,    26,   969,   970,   971,
     972,   370,  1419,    33,    34,   977,    36,   368,   972,   938,
     939,   940,   941,   371,  1191,   231,   232,   134,   234,   991,
     138,   169,   972,    26,    41,   273,   109,   110,   111,   112,
     113,   369,   370,  1005,     7,  2128,     9,  1009,  1453,  1011,
      12,    13,  1014,   161,   370,  1295,  1018,  1297,   196,   369,
     370,  1023,  1024,   301,  1026,  1027,   176,   368,    88,  1031,
     371,  1033,  1034,  1035,  1036,  2218,   169,   885,   886,   317,
     109,   110,   111,   112,   113,   893,   198,   195,  1101,   327,
     328,  1707,  1054,  1333,     3,   370,     7,  1059,     9,   106,
     109,   110,   111,   112,   113,   317,  1068,  1747,  1070,  1747,
     369,   157,   250,   921,  1033,  1034,  1035,  1036,   238,   126,
    1060,   369,   370,   109,   110,   111,   112,   113,    33,    34,
     137,    36,    26,  1300,  1539,  1540,   163,   368,   177,   277,
     371,  1381,   109,   110,   111,   112,   113,  2303,   109,   110,
     111,   112,   113,   367,    69,  1369,   172,    72,  2301,    74,
     368,  1101,   169,   971,   972,  1127,   172,    72,  1130,   176,
     368,  1133,  1134,   371,   181,   369,   370,  1139,   109,   110,
     111,   112,   113,    88,  1443,   172,  2160,   194,   215,   216,
     367,   172,  1154,   370,   201,  1661,   109,   110,   111,   112,
     113,   109,   110,   111,   112,   113,   370,  1169,   334,  1171,
     298,   337,   338,   247,  1176,   153,   247,   251,   332,  1626,
     251,  1183,  1627,  1628,   109,   110,   111,   112,   113,  1191,
     109,   110,   111,   112,   113,    41,   187,  1404,  1200,  1201,
     371,   109,   110,   111,   112,   113,   280,   369,   370,   280,
      19,   369,    21,    22,     4,  1217,  1196,  1873,  1220,   109,
     110,   111,   112,   113,   110,   111,   112,   113,  1230,   109,
     110,   111,   112,   113,   281,   109,   110,   111,   112,   113,
     109,   110,   111,   112,   113,    91,  1248,   369,   370,  1251,
     235,   236,   237,  1806,  1248,    46,   369,    48,  1260,   306,
     106,   104,   105,  1265,   311,    46,   138,    48,  1248,   127,
     128,   318,  1962,   368,  1276,   109,   110,   111,   112,   113,
     138,   112,   113,     4,     5,     6,     7,   145,     9,   161,
     127,   128,  1294,  1295,   140,  1297,     3,    18,  1300,   153,
     369,   138,     3,   161,   335,   336,  1586,  1587,   145,   181,
    1863,  1591,   158,   368,   186,   173,   369,   370,  1572,  1225,
     369,  1227,   177,   195,   161,   183,   369,   370,   186,   369,
     370,  1333,   369,   370,   369,   370,   173,   195,    81,    82,
      41,   369,   370,   369,   369,   370,   183,   172,   194,   186,
     369,   370,  1200,   109,   110,   111,   112,   113,   195,   172,
     206,   207,   369,   368,   210,   369,   370,   201,   369,   172,
    1815,   369,   370,  1984,    31,    32,   368,  1661,   247,  1381,
     172,  1383,   369,   370,     3,     4,  1591,   143,   368,   110,
     111,   368,   250,  1838,   369,   370,    97,     3,   369,   100,
    1248,   368,  1404,  1251,  1406,  1407,  1686,  1687,   329,   330,
     368,   280,  1906,  1907,  1494,   116,   369,  1419,   126,   369,
     370,   369,   368,  1868,    38,    39,     4,     5,     6,     7,
       8,     9,   109,   110,   111,   112,   113,   369,   370,   147,
      18,   368,  1444,    91,   369,   153,   368,  1427,   169,   266,
     369,  1453,   369,   370,   369,   370,   157,   369,   159,   196,
    1462,   369,   163,   369,   370,    99,  1468,  1674,   176,   369,
     370,   370,  1752,  1753,   369,   370,   131,   368,   126,   369,
    1927,   129,   371,   138,  1486,   171,   194,   142,   372,   369,
    1935,   368,  1494,   368,   250,   369,   176,   152,   368,   147,
     201,    91,   368,   204,   371,   153,   369,   370,   366,   367,
     369,   370,   369,   370,  1516,    93,   217,   218,    15,   371,
     221,   371,   223,   371,   372,    94,    95,   371,   176,   366,
     369,   370,   187,   369,   370,   368,   126,  1539,  1540,   129,
     368,  2035,  2036,   369,   370,   208,   194,   116,   369,   370,
     369,   370,   121,   371,   255,   371,   125,   147,    77,    78,
     208,    15,   165,   153,   369,   370,   135,   256,   257,   246,
     369,   370,   141,   369,   370,   230,   231,   146,   371,   372,
    1787,  1583,   369,   370,  1586,  1587,   176,  2140,  2141,  1591,
     172,   169,  2039,   162,   369,   370,  1444,   371,   282,   283,
     284,   170,   286,   287,   194,  1607,   371,  2218,   263,   369,
     370,   180,   109,   110,   111,   112,   113,   371,   208,   188,
     369,   370,   369,   370,  1626,  1627,  1628,  1627,  1628,    24,
     371,  1911,  2138,  1253,  1254,   371,  1638,   371,  2083,   371,
     371,  1643,   211,   212,   213,   214,    41,   371,   371,   157,
     219,   220,   371,  1655,  1656,   109,   110,   111,   112,   113,
    1662,   137,  1847,   250,     4,    96,   149,   109,   110,   111,
     112,   113,  1674,   101,    69,    91,  1883,   149,  1680,   200,
     124,  1881,   172,   371,  1686,  1687,  1688,  1689,   124,  1691,
    2301,  1693,     4,    96,  1993,   201,    91,   193,   267,   268,
     269,   270,    73,    74,    75,    76,  1911,    78,    79,    80,
     126,   106,    83,   129,     4,  2160,   369,    73,    74,    75,
      76,   163,    78,    79,    80,   371,   368,    83,   157,     4,
     149,   147,   301,   371,   370,  1583,   108,   153,   371,   368,
     108,   333,  2295,   312,   313,   140,   101,   101,   174,   192,
    1752,  1753,   108,   370,  2307,   109,   110,   111,   112,   113,
     176,   371,   172,   158,     4,    16,  1973,     3,    96,   106,
     107,   149,   109,   110,   111,   112,   113,    97,   194,   296,
     123,   137,   370,   120,   370,  1787,   369,   371,   368,   370,
    1638,   370,   208,   369,  1847,  1643,   368,   192,   368,   194,
     165,   196,   156,   369,   109,   110,   111,   112,   113,   372,
     101,   206,   207,  1815,   209,   210,   254,    87,   101,   156,
    1822,   172,   368,   153,   171,  1878,   172,   164,   101,   174,
    1832,   168,   101,   371,   138,   193,  1838,  1847,  1847,  1841,
     193,   193,  2049,  1691,   116,  1847,     3,     3,   204,   121,
    1852,   156,   193,   125,  2138,   368,    52,    53,    54,    55,
      56,    57,    58,   135,  1866,    61,  1868,  1869,    38,   141,
     368,     7,     7,   200,   146,    71,  1878,   251,   315,  1881,
     368,  1883,    52,    53,    54,    55,    56,    57,    58,   371,
     162,    61,   107,     4,   368,   149,  2343,   149,   170,   369,
     149,    71,   101,   149,  1906,  1907,   370,   370,   180,  1911,
     109,   110,   111,   112,   113,  1995,   188,   369,   369,   369,
     369,  2128,   369,  1925,   149,  1927,   123,   528,   529,   530,
    2318,   532,   533,  1935,   535,   369,   537,   369,   368,   211,
     212,   213,   214,   251,  2129,   368,   368,   219,   220,   175,
     109,   110,   111,   112,   113,   368,   368,  1959,  1960,   118,
     368,  1963,  2409,   368,  1966,   369,   368,   368,   282,   283,
     284,  1973,   286,   287,   288,   368,   290,   368,   368,   371,
     139,   370,   368,   368,  1832,  1987,  1996,  1989,  1990,   369,
    1992,   368,  1994,  1995,  1996,   267,   268,   269,   270,   149,
      59,   105,   371,   101,  1984,   109,   110,   111,   112,   113,
     109,   110,   111,   112,   113,   254,  1996,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
    2238,   172,   371,  2035,  2036,   368,   371,  2039,   105,   368,
     312,   313,   109,   110,   111,   112,   113,  2049,   149,   370,
     367,     4,     4,  2238,   372,  2108,    73,    74,    75,    76,
     371,    78,    79,    80,   282,   283,   284,   368,   286,   287,
     288,   171,    68,   371,     7,   251,  2129,   300,   370,   153,
      23,  2083,   368,   371,   369,    26,   334,   371,    26,    35,
     307,   251,     3,   251,    91,   369,   251,   251,   251,  2101,
    2102,   320,   251,   251,     7,  2313,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,  2324,  2119,  2303,  2129,
    2129,  2129,   369,  2308,  2126,   368,  2128,  2312,  2313,   204,
       4,   369,   369,   368,  2136,   369,   310,     4,   101,  2324,
      96,   368,    44,   165,   368,   165,   368,   368,   368,  2129,
       3,     3,   368,    44,   367,   200,   325,   201,  2160,   368,
     371,   174,   201,   371,     7,   369,   369,   251,   369,   369,
     285,   290,   123,   155,     7,   209,  2384,  2385,    97,     4,
     144,   106,   171,   371,   101,  2238,   370,   370,   209,   369,
     369,   105,   370,   169,   369,   311,   369,   369,   369,  2384,
    2385,   369,   369,   369,  2206,   369,   369,   369,   196,   149,
     371,    59,   166,    91,     7,     7,   368,  2227,   201,   107,
     371,   368,  2224,  2225,  2226,  2227,   371,   369,   372,   369,
     368,   368,    97,     3,  2419,   368,     4,   371,  2218,   370,
     326,  2294,    96,   107,   152,   371,   368,  2227,     7,   370,
    2303,   371,   369,   371,   368,  2308,   369,    22,   165,  2312,
    2313,   369,    38,   286,    38,    38,    38,   172,   218,    40,
      37,  2324,  2457,     3,   368,   165,   251,   251,   251,     7,
     169,     7,   143,   371,   369,   106,     7,     4,   311,  2291,
    2292,   108,   101,  2303,  2303,  2303,  2303,     4,  2308,  2308,
    2308,    25,  2312,  2312,   368,   250,   369,   369,   369,   369,
     169,   306,   335,   336,   368,   165,   185,   368,   123,   126,
     155,  2301,     7,   239,   179,   310,   368,   174,   371,   144,
     353,  2384,  2385,   368,   357,   368,    96,    89,    86,  2341,
    2342,  2343,   254,   137,    35,    44,    44,   169,   172,     4,
       4,  2361,   375,    59,   369,   369,   368,   380,   368,  2361,
     186,    63,   373,     4,    87,   368,  2419,    28,   370,   201,
     368,   174,   371,     4,   368,   368,   101,   307,   370,    59,
     367,   101,   368,    50,   368,   169,     4,   101,   369,   368,
     370,   369,    29,   251,   251,   106,   101,   101,   181,   371,
       4,   165,   201,   172,  2457,   123,     7,  2409,  2410,  2419,
    2419,  2419,   370,   101,   101,   370,     4,   244,   149,   368,
     368,   148,     3,   172,   368,    27,   368,   193,   310,   368,
     367,   367,   367,   367,    32,   367,   367,    50,     3,   368,
     368,   368,    87,   369,    30,   369,   368,  2457,  2457,  2457,
     371,   161,   370,   210,   477,   478,     7,   370,     4,   482,
     370,   370,    96,   172,   134,     4,    96,   255,     3,   138,
       7,   193,     3,     7,     4,   289,    97,   500,     7,   176,
     303,   368,   367,   369,    96,   369,   509,   163,   369,   369,
       4,   368,    24,   201,     4,     4,     4,   520,   369,   369,
       7,   108,   370,   242,   166,   528,   529,   530,   531,   532,
     533,   201,   535,   369,   537,   201,   165,   368,   304,     7,
     156,   370,     4,   310,    78,    24,   372,    26,    77,     7,
     370,     4,   167,     4,    33,    34,   201,   368,   250,     7,
      24,     4,    41,     4,   247,   568,   569,   367,   367,     7,
     573,   369,     4,   369,     4,   578,   579,   580,   369,   255,
     583,    60,  2410,   124,  2092,  1183,   589,  2054,  2192,  1936,
      69,  2098,   595,   237,   124,    91,     0,  1152,  1547,     0,
       0,   931,     0,  2034,  1515,  2388,   469,  1218,   734,    88,
    2448,     0,    91,   669,     0,     0,   679,  2385,  1005,  1196,
    2389,  1407,  1691,   626,   627,   686,  1935,   106,  1257,  2106,
    2208,  1574,   202,  1886,   696,   780,   684,   576,   899,   206,
     913,  1923,   836,  1138,  2340,  1395,  2328,  2312,  2303,  2308,
    2303,  2303,  2303,  2457,  2103,  2303,  2294,   780,  1832,  2410,
    2297,   140,  1442,  1169,  1618,  2113,    72,  1520,  2051,  2053,
    1535,  1213,  1454,   920,  2178,  1652,  2100,  1198,   681,   158,
    1967,   684,    -1,    -1,    -1,   588,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   697,   698,   699,   700,   701,   178,
      -1,   704,    -1,   706,   707,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   192,    -1,   194,    -1,   196,    -1,   198,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,   207,    -1,
     209,   210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   755,    -1,    -1,    -1,    -1,    -1,    -1,   238,
      -1,    -1,   241,   242,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   776,    -1,   778,    -1,   780,   781,    -1,
      -1,    -1,   785,    -1,   787,   788,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   273,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   817,    -1,    -1,    -1,    -1,   822,
      -1,    -1,   301,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   834,   835,    -1,    -1,     3,   315,    -1,   317,    -1,
     843,    -1,    -1,    -1,    -1,    -1,   849,    -1,   327,   328,
      -1,    -1,    -1,    -1,    -1,   858,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,   949,   950,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     993,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1007,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1031,    -1,
      -1,    -1,    -1,    -1,  1037,    -1,    -1,    -1,    -1,    -1,
      -1,  1044,  1045,    -1,    -1,    -1,    -1,  1050,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1077,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1097,    -1,    -1,    -1,  1101,    -1,
      -1,    -1,    -1,  1106,   272,  1108,  1109,    -1,    -1,  1112,
      -1,    -1,    -1,    -1,    -1,    -1,  1119,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1130,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   319,    -1,    -1,    -1,    -1,    -1,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   371,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1240,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1265,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1278,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1338,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1360,     3,  1362,
      -1,    -1,    -1,    -1,    -1,    -1,  1369,    -1,    -1,    -1,
      -1,  1374,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1497,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1543,    -1,    -1,    -1,  1547,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1572,
      -1,    -1,    -1,  1576,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1594,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1661,    -1,
     305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   319,    -1,    -1,    -1,  1681,    -1,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   371,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1741,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1870,  1871,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1906,  1907,    -1,    -1,    -1,    -1,  1912,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,  1985,  1986,    -1,    -1,    -1,   272,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1999,  2000,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2034,  2035,  2036,   319,    -1,    -1,    -1,    -1,    -1,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2075,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   371,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2138,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   319,    -1,    -1,    -1,    -1,
      -1,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2237,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   371,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2294,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,     3,    -1,    -1,    -1,    -1,  2362,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2377,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    93,    94,    95,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,    24,    25,
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
      -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,    -1,
      -1,    -1,    -1,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   371,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,
      -1,    -1,   371,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   319,    -1,    -1,    -1,    -1,    -1,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   371,    24,    25,    26,    27,
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
      85,     3,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,   371,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   371,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   371,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,     3,    -1,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
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
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   371,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     371,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   371,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    13,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    94,    95,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   127,   128,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   138,    -1,    -1,    -1,
      -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,   150,   151,
      -1,    -1,   154,    -1,    -1,    -1,    -1,    -1,    -1,   161,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,
      -1,   173,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   183,    -1,    -1,   186,   187,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   195,   196,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   224,    -1,    -1,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   241,
      -1,    -1,    -1,   245,    -1,    -1,    -1,   249,   250,    -1,
     252,   253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     262,    -1,    -1,    -1,   266,    -1,    -1,    -1,    -1,    -1,
     272,   371,   274,   275,    -1,    -1,   278,   279,    -1,    -1,
     282,   283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     292,   293,   294,   295,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,    -1,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   366,    -1,   368,    -1,   370,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116,    -1,    -1,    -1,    -1,   121,    -1,    -1,    -1,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,    -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,
      -1,   146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   180,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   188,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   211,   212,   213,   214,
      -1,    -1,    -1,    -1,   219,   220,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   267,   268,   269,   270,    -1,   272,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     305,    -1,    -1,    -1,    -1,    -1,    -1,   312,   313,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    -1,    15,    -1,    17,
      18,    -1,    -1,    -1,    -1,   370,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,    -1,    -1,    -1,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,
     128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     138,    -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,
      -1,    -1,   150,   151,    -1,    -1,   154,    -1,    -1,    -1,
      -1,    -1,    -1,   161,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   169,    -1,    -1,    -1,   173,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,   186,   187,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,   196,    -1,
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
      13,    -1,    -1,    -1,    17,    18,    -1,    -1,   366,    -1,
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
      93,    94,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,   151,    -1,
      -1,   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,   111,   112,    -1,    -1,   115,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   189,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,
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
      13,    -1,    -1,    -1,    17,    18,    -1,    20,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,   241,    -1,    -1,    -1,    -1,    -1,   247,
      -1,    -1,   250,    -1,    -1,   253,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   266,    -1,
      -1,    -1,    -1,    -1,   272,    -1,   274,   275,    -1,   277,
     278,   279,   280,    -1,   282,   283,    -1,    -1,    -1,    -1,
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
      -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,   110,   111,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    14,    -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,
     368,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   117,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   126,    -1,   128,    -1,    -1,   131,    -1,
      -1,    -1,    -1,    -1,    -1,   138,    -1,    -1,    -1,   142,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,
      -1,   154,    -1,    -1,    -1,    -1,    -1,    -1,   161,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,    -1,    -1,   186,   187,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   224,   225,   226,   227,    -1,   229,   230,   231,    -1,
     233,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     263,    -1,    -1,   266,    -1,    -1,    -1,    -1,    -1,   272,
      -1,   274,   275,    -1,    -1,    -1,    -1,    -1,    -1,   282,
     283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   291,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   302,
      -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   316,    -1,    -1,   319,    -1,    -1,   322,
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
      -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,
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
      13,    -1,    -1,    -1,    17,    18,    -1,    20,    -1,    -1,
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
      13,    -1,    -1,    -1,    17,    18,    -1,    -1,    -1,   367,
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
     163,    -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   266,    -1,    -1,    -1,    -1,    -1,   272,
      -1,   274,   275,    -1,    -1,   278,   279,    -1,    -1,   282,
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
      -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,
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
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    -1,   368,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    -1,
       3,    -1,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,   154,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,   186,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   266,    -1,
      -1,    -1,    -1,   186,   272,    -1,   274,   275,    -1,    -1,
      -1,    -1,    -1,    -1,   282,   283,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   302,    -1,    -1,   305,    -1,    -1,
      -1,   224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   319,    -1,    -1,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   272,
      -1,    -1,    -1,   276,    -1,    -1,    -1,    -1,    -1,    -1,
     368,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   302,
      -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   368,    24,    25,    26,    27,
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
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,   276,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   302,    -1,    -1,   305,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   266,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   282,   283,    -1,
     368,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   368,    24,    25,    26,    27,    28,    29,
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
      -1,    -1,     3,    -1,    -1,    92,    93,    94,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   192,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,   276,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   368,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   368,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   368,    24,    25,
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
      -1,   312,   313,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    24,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,   110,   111,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   253,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   266,    -1,    -1,    -1,    -1,    -1,   272,    -1,   274,
     275,    -1,    -1,    -1,    -1,    -1,    -1,   282,   283,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,   319,    -1,    -1,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    -1,    -1,   272,    -1,
      -1,    -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   115,    -1,    -1,    -1,    -1,
      -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,    -1,
      -1,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,    -1,    -1,    -1,    -1,    -1,
      -1,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,
      -1,   181,    -1,    -1,    -1,    -1,   186,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,   195,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   208,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,   271,   272,    -1,    -1,    -1,    -1,    92,    93,    94,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     115,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   138,    -1,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   161,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   179,    -1,   181,    -1,    -1,    -1,
      -1,   186,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
     195,    -1,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,
      -1,    -1,    -1,   208,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,   271,   272,    -1,    -1,
      -1,    -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     305,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    -1,    -1,    -1,    -1,    -1,   266,    92,    93,    94,
      95,    -1,   272,    -1,    -1,    -1,    -1,    -1,   278,    -1,
      -1,    -1,   282,   283,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,
      -1,    -1,    -1,    -1,    -1,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,   211,   212,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,   272,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    94,    95,    -1,    -1,   301,    -1,    -1,    -1,
     305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   313,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,    24,    25,    26,    27,    28,    29,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   266,    -1,    -1,    -1,    -1,    -1,
     272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     282,   283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   305,    -1,    -1,   196,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   264,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,    24,
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
      82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,    -1,    -1,    -1,    -1,   129,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,   272,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    -1,    -1,   208,    -1,    -1,    -1,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,
     305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    -1,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,    24,    25,    26,
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
      84,    85,     3,    -1,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    97,    -1,    -1,    -1,   101,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,   130,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   319,    -1,    -1,    -1,    -1,    -1,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,    -1,    -1,    -1,    -1,    -1,
     261,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,    24,    25,
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
      -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   317,    -1,   153,    -1,    -1,    -1,    -1,    -1,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   266,    -1,    -1,    -1,    -1,    -1,   272,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,     3,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
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
      79,    80,    81,    82,    83,    84,    85,    -1,    -1,    -1,
      -1,   266,    -1,    92,    93,    94,    95,   272,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
     319,    -1,    -1,    -1,    -1,    -1,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,     3,    -1,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    93,    94,    95,   179,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    -1,    -1,    -1,    -1,   272,    92,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   272,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   272,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,    24,
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
      82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    94,    95,   272,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    -1,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,     3,
      -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,    -1,
      -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,     3,    -1,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338
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
     528,   529,   577,   581,   617,   618,   621,   624,   664,   666,
     676,   684,   685,   705,   706,   708,   711,   713,   744,   745,
     749,   754,   758,   759,   760,   761,   770,   774,    26,   380,
     599,   368,   253,   178,   192,   242,   625,   202,    24,    33,
      34,    41,    60,    69,    88,    91,   106,   140,   158,   178,
     192,   194,   196,   198,   206,   207,   209,   210,   238,   241,
     273,   301,   315,   317,   327,   328,   404,   405,   406,   625,
     730,   149,   196,    24,    60,    69,   157,   192,   196,   198,
     238,   241,   273,   301,   317,   327,   328,   625,   115,   138,
     161,   179,   181,   186,   195,   208,   271,   272,   380,   433,
     434,   435,   436,   437,   614,   368,   163,   215,   216,   484,
     202,   115,   140,   222,   505,   507,   509,   196,   264,   331,
     380,   317,   599,   603,   186,   253,   266,   380,   518,   581,
       4,   615,     4,   615,     4,   228,    24,   157,   192,   196,
     228,   368,   577,   115,   208,   271,   272,   433,   436,   172,
     265,    17,   125,   196,   266,   278,   282,   283,   319,   380,
     577,   380,     4,   317,   368,   368,   368,   224,   520,     0,
     367,   131,   138,   142,   187,   230,   379,   414,   371,    98,
     100,   297,   517,   368,   102,   371,   251,   368,    16,     4,
       5,     6,     7,     8,     9,    11,    12,    13,    18,    93,
     112,   169,   196,   241,   278,   279,   292,   293,   294,   295,
     368,   380,   564,   565,   567,   568,   569,   571,   574,   575,
     581,   585,   587,   588,   593,   594,   595,   596,   597,   604,
     613,   745,   747,   748,   750,   751,   753,   380,   600,   600,
     380,   710,    26,   176,   238,   301,   471,   614,   169,   198,
     380,   602,   614,   602,     3,   380,   602,   602,   185,   198,
     317,   266,   599,   599,   599,   404,   157,   602,    26,   603,
     153,   614,   380,   709,   238,   614,   380,   599,   614,   599,
     599,   599,   599,   185,   198,   266,   599,   599,   599,   599,
     177,   368,   428,   428,   428,   172,   172,   172,   172,   370,
     193,   370,   380,   604,   603,   506,   298,   110,   111,   122,
     250,   277,   368,   532,   566,   567,   568,   573,   582,   584,
     604,   659,   661,   707,   745,   747,   750,   153,   380,   332,
     107,   172,   265,   599,   101,   192,   380,   493,   187,   509,
     371,     4,   615,   380,   708,     3,   599,   153,   615,   566,
     368,   177,   172,   172,   172,   172,   149,   368,   368,   368,
     368,   368,   368,   368,   368,   368,   251,   368,   266,     3,
     566,   566,   369,   192,   319,   371,   380,   752,   115,   296,
     526,   115,   526,    99,   380,   566,   573,   578,   579,   580,
     583,   380,   752,   371,   380,   566,   576,   583,   370,   368,
     171,   577,   368,   247,   280,   566,   589,   592,   368,   368,
     368,   708,   224,   368,   518,   566,   567,   604,   371,   372,
     660,   371,   660,   160,   613,   368,   371,   176,   444,   368,
     627,   371,   208,   715,   599,   165,   172,   157,   602,   371,
     101,   368,   425,   137,   769,   235,   236,   237,   679,   627,
     250,     4,   602,   599,    96,   149,   101,   149,   380,   611,
     627,   752,   200,   516,   548,   614,   124,   371,   124,   182,
     417,   172,   409,   599,   124,     4,   599,    96,   201,   462,
     193,   380,   402,   610,   709,   577,     4,   603,   435,   436,
     437,   371,   369,   157,   485,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   503,   504,
       7,   368,   566,   566,   368,   530,   531,   380,     4,   567,
     604,   149,   533,   534,   535,     4,   101,   109,   110,   111,
     112,   113,   380,   371,   370,   660,   108,   368,   614,   380,
     333,   566,   101,   464,   380,   174,   493,   511,   512,   610,
     532,   371,   380,   370,   616,   371,   142,   231,   755,   172,
     142,   231,   232,   234,   416,   614,   369,   580,   709,   577,
       4,   603,   436,    16,   576,   576,   576,   566,   576,   576,
       3,   566,   576,   576,    96,   149,   369,   369,    97,   452,
     599,   380,   752,   371,   526,   123,   368,   522,   523,   524,
     525,   526,   522,   525,   115,   526,   320,   370,   370,   369,
     370,   368,   380,   371,   369,   370,   566,   115,   140,   566,
      94,    95,   116,   121,   125,   135,   141,   146,   162,   170,
     180,   188,   211,   212,   213,   214,   219,   220,   267,   268,
     269,   270,   301,   312,   313,   605,   606,   368,   606,   566,
     106,   144,   368,   552,   553,   554,   555,   556,   557,   559,
     560,   561,   563,   566,   247,   280,   590,   591,   251,   592,
     583,   566,   566,   368,   518,   224,   518,   369,   369,   370,
     101,   101,   112,   371,   380,   746,   747,   566,   372,   752,
     613,   580,   371,   380,   165,   101,   446,    62,   156,   243,
     369,   628,   629,   630,   254,   626,   371,   380,   708,   166,
     310,   714,   627,    87,   599,   172,   101,   371,   380,   518,
     519,   524,   129,   208,   384,   385,   386,   400,   401,   610,
     368,   423,   427,   153,   767,   768,   171,   138,   161,   195,
     680,   626,   622,   623,   625,   101,   101,   599,   599,   566,
     566,   172,   626,   627,   133,   552,   174,   492,   614,   371,
     380,   599,   599,   138,   437,   371,   369,   370,   193,   193,
     193,   193,   201,   430,   371,   380,     3,   492,     3,   368,
     368,     7,   368,   502,   502,     7,     7,   503,   201,   370,
     508,   566,   584,   530,    93,   582,   585,   586,   251,   101,
     101,   276,   368,   536,   540,   545,   546,   599,   603,   200,
     516,     4,    20,   380,   572,   566,   566,   566,   566,   566,
     752,   566,   573,   108,   566,   580,   614,   334,   337,   338,
     665,   315,   493,   368,   200,   370,   516,   107,   380,   371,
       4,   371,   380,    34,    72,   730,   734,    36,    72,   734,
     735,   599,    91,   411,   411,   602,   411,   129,   400,   418,
     614,   368,   369,   149,   149,   149,   149,   370,   369,   369,
     369,   370,   369,   369,   149,   156,   369,   369,   599,   566,
     123,   142,   231,   234,   371,   380,   752,   522,   525,   368,
     224,   522,   525,   526,   522,   525,   566,   380,   566,   573,
     566,   578,   579,   580,   380,   251,   566,   370,   566,   566,
     369,   368,   368,   368,   175,   368,   368,   368,   368,   368,
     211,   212,   313,   368,   368,   368,   580,   370,   552,   368,
     565,   368,   552,   566,   104,   105,   246,   106,   107,   120,
     156,   164,   168,   566,   566,   251,   591,   369,   101,   370,
     580,   369,   518,   583,   708,   708,   380,   371,   373,   566,
     368,   369,   380,   371,   368,   602,   149,   369,   370,   604,
     606,   608,   708,    73,    74,    75,    76,    78,    79,    80,
      83,   635,   636,   380,   371,    38,    52,    53,    54,    55,
      56,    57,    58,    61,    71,   741,   742,    59,   712,   254,
     743,   368,   468,   599,   599,   380,   371,   201,   203,   381,
     380,   599,   369,   370,   126,   147,   153,   176,   194,   125,
     211,   214,   605,   609,   708,   402,   101,   368,   370,   427,
     172,   149,   367,   251,   622,   380,   372,   704,     4,     4,
     459,   201,   756,   756,   599,   636,   626,   171,   368,   380,
     371,   468,   380,   610,   436,   436,   436,   436,    68,   380,
     371,   428,   566,   566,     7,   501,   300,     7,   111,   369,
     370,   200,   369,   251,   708,   708,   540,   546,   368,   520,
     546,   370,   282,   283,   284,   286,   287,   288,   542,   544,
     368,   153,   549,    23,   606,   368,   566,   369,   335,   336,
     334,     3,    41,    97,   100,   116,   157,   159,   163,   201,
     204,   217,   218,   221,   223,   255,   490,   491,   133,   512,
     492,   566,   380,   380,   371,    26,   380,    26,   417,   734,
     380,   722,    35,   736,   307,   413,   610,   386,   412,   386,
     380,   580,   436,   436,   436,   436,   566,   251,   251,   251,
       3,   251,   251,   566,   566,   251,   251,   369,   453,   454,
     566,   572,   752,   371,   402,   518,   522,   525,   320,   369,
     566,   369,   369,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,   369,   566,   369,   552,   552,   566,
     120,   156,   168,   115,   116,   189,   562,   566,   566,   368,
     565,   106,   169,   566,   246,   606,   566,   369,   369,   369,
     369,   371,   112,   371,   380,   746,   373,   580,   380,   402,
     597,   629,   608,   204,   607,   368,     4,   446,   380,   310,
       4,   101,   716,   710,    96,   610,   368,   368,   380,    44,
      44,    91,   140,   382,   385,   368,   165,   406,   165,   368,
     368,   368,   116,   301,   708,   394,   369,   224,   422,   519,
     529,     3,   763,   764,   767,   599,   380,   601,   367,   627,
       3,   702,   703,   186,   250,   528,   695,   200,   460,   325,
     201,   757,   757,   368,   166,   250,   641,   636,   380,   612,
     491,   380,   371,   201,   432,   432,   432,   174,   371,   380,
     197,   487,   528,   369,   369,   369,   370,   508,     7,   508,
     566,   552,   369,   369,   251,   520,   369,   369,   540,   285,
     543,   543,   543,   542,   290,   402,   539,   123,   155,   550,
      19,    21,    22,   580,     7,   209,    97,    60,   176,   380,
     566,     4,   144,   106,   369,   370,   171,   380,   752,   417,
     752,   608,   101,    40,    41,    42,    43,    49,    51,    66,
     106,   166,   254,   310,   738,   739,   740,   209,   773,   370,
     370,   417,   369,   370,   369,   369,   369,   370,   118,   139,
     455,   455,   752,   369,   369,   566,   369,   369,   369,   369,
     370,   369,   369,   370,   369,   369,   369,   369,   369,   369,
     369,   566,   368,   565,   566,   565,   105,   583,   169,   143,
     250,   558,   566,   311,   570,   369,   371,   371,   112,   380,
     380,   371,   369,   369,   196,   447,   108,   137,   636,   372,
     635,    81,    82,   632,   149,    59,   166,   368,   717,    25,
      35,    70,    78,    87,   106,   293,   330,   725,   726,   727,
     708,   369,   610,   539,    91,   552,   368,   368,   368,   402,
       7,     7,    41,   106,   126,   137,   169,   176,   181,   194,
     201,   281,   306,   311,   318,   393,   396,   398,   518,   201,
     426,   369,   370,    97,   677,   371,   370,   626,   107,   373,
     702,   509,   599,   693,   696,     3,   692,     4,   107,   326,
     403,   610,   741,   642,    96,   492,   369,   380,   152,   380,
     371,   368,     7,   508,   369,   369,   371,   371,   369,   101,
     380,   368,   541,   565,   603,   369,   132,   184,   453,   552,
     452,    22,   369,   165,   165,   218,   490,   612,   368,   731,
     731,   181,   723,    31,    32,    38,    38,    38,    38,   172,
      37,    40,   742,   169,    24,    59,    67,   740,     3,   368,
     772,   610,   386,   566,   251,   251,   251,   454,   452,     7,
       7,   105,   583,   558,   566,   369,   586,   143,   599,   369,
     752,   752,   371,   371,   112,   380,   566,   106,   448,     4,
       5,     6,     7,     9,    18,   110,   111,   169,   598,   598,
       7,   108,    62,   156,   243,    62,   156,   243,   597,     4,
     742,   718,   722,   101,     4,   149,   164,   289,    25,   368,
     728,   729,   735,   727,   641,   369,   369,   369,   402,   403,
     403,   369,   369,   369,   306,   169,   368,   598,   165,   599,
     185,   368,    60,   116,   599,   123,   126,   155,   763,     7,
     239,   681,   371,   380,   601,   636,     3,     4,   701,   532,
     380,   251,   370,   179,   700,   329,   330,   369,   370,   455,
     310,   136,   199,   451,   641,   643,   644,   645,   650,   651,
     655,   708,   371,   174,   380,   488,   489,   566,   508,   752,
     752,   380,   545,   172,   289,   547,   101,   380,   368,   538,
     368,   368,    96,   551,   144,   492,   369,   630,   631,   732,
     733,    89,   737,   254,    86,   137,   724,    35,    44,    44,
     169,    38,    39,   172,     4,     4,    59,     3,   771,   772,
     369,   369,   369,   566,   369,   586,   368,   368,   752,   380,
     752,   371,   264,   186,    63,   449,     7,     9,     7,     9,
     636,   636,   373,     4,   369,   370,    87,   368,    28,   608,
      30,    87,   370,   201,   472,   368,   369,   369,   369,   552,
     427,   368,   399,    92,   305,   395,   397,   610,   174,   368,
     765,   766,   240,   295,   682,   683,   641,   678,   380,   371,
     370,   641,   535,   101,   686,   693,     4,   307,   610,    59,
     130,   261,   380,   652,   656,   106,   258,   259,   260,   653,
     251,   644,    15,    84,    96,   107,   113,   127,   138,   145,
     150,   151,   173,   186,   187,   195,   224,   245,   249,   252,
     262,   366,   380,   479,   480,   481,   482,   483,   486,   497,
     498,   500,   510,   513,   581,   604,   639,   640,   646,   658,
     659,   662,   664,   666,   667,   668,   669,   675,   745,   748,
     367,   641,   380,   369,   370,   368,   368,   369,   552,   368,
     380,   386,   537,   380,   453,   453,   195,   301,   492,   604,
     369,   370,   602,   608,    27,   106,   598,   570,   101,    50,
     169,     4,   121,   162,   211,   762,   369,   370,   251,   251,
     580,   580,   380,   752,   566,   101,   632,   722,   402,    29,
     101,   101,   735,   165,   106,   476,   537,   393,   406,   369,
     172,   387,   388,   389,     4,   201,   123,   369,   370,     7,
     370,   101,   101,   370,   380,   601,   516,   380,   368,   689,
     380,   773,   455,     4,    64,    88,    90,   134,   450,   370,
     608,   244,   148,     4,    65,   137,   150,   151,   368,   368,
     519,   566,   566,   612,   612,   380,   193,   612,   509,   518,
     368,   368,   566,   367,   566,   368,   103,   367,   367,   367,
     367,   367,   367,   367,   367,   489,   580,   580,   402,   369,
     370,   369,   369,     3,   608,   733,   737,   172,   389,   390,
      27,   310,   719,    32,    50,   368,   368,   368,     3,   369,
     369,   566,   370,   369,    87,    30,   610,   161,   210,   473,
     369,   138,   195,    45,    47,   392,   388,   370,   598,     7,
     395,   370,   765,   380,   380,   683,   370,   619,   549,   566,
     604,   687,   688,   172,   691,     4,   772,   725,    96,   134,
     380,    96,     4,   380,   193,   608,   136,   224,   651,   659,
     664,   670,   671,   745,   255,    15,    15,     3,   163,   380,
     368,   496,   532,   367,   552,   552,   367,     7,     9,   637,
     638,   644,   369,   369,   369,   386,     3,   310,   721,    24,
      59,    77,    78,   720,     7,     7,     7,   111,   762,     3,
     633,   634,   369,   369,   201,   289,   467,   124,   187,   391,
     391,    46,    48,    46,    48,     4,     7,   601,    97,   620,
     550,   101,   156,   369,   370,   368,   176,   690,   303,   697,
     519,    96,   653,   657,   380,   380,   380,   367,   370,   641,
     647,   648,   649,   163,   566,   514,   515,   575,   604,   750,
     256,   257,   494,   495,   163,   369,   369,   369,   370,    24,
       4,     4,     4,     4,   369,   369,   370,     7,   108,   369,
     370,   201,   201,   368,   242,   166,   474,   137,   169,   369,
     370,   369,   380,   380,   687,   552,   165,   692,   304,   698,
     519,   224,   262,   370,   640,   641,   654,   659,   662,   664,
     666,   667,   668,   669,   675,   745,   748,   156,   552,   674,
     670,   640,   658,   514,   163,   370,     7,   369,   370,   514,
     647,   647,   637,     4,   310,    78,    77,     7,   370,   598,
     634,   380,   380,   402,     4,   167,   475,     4,   369,   368,
     250,   694,     7,   185,   308,   699,   566,   653,   566,   367,
     367,   514,   515,   494,   534,   247,   663,    24,     4,     4,
     369,     7,   369,     4,   369,   402,   696,     4,   310,     4,
     309,   310,   369,   659,   664,   672,   673,   745,   201,   499,
     647,     4,   369,   369,   251,   255,   369,   370,   496,   647,
     647,   672
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
#line 677 "./sql3.y"
    { }
    break;

  case 3:
#line 678 "./sql3.y"
    { }
    break;

  case 4:
#line 681 "./sql3.y"
    { parse_tree = (yyvsp[(1) - (1)].tree); }
    break;

  case 5:
#line 688 "./sql3.y"
    { (yyval.tree) = t_listst (2, SCHEMA_ELEMENT_LIST,
							t_list_to_array ((yyvsp[(1) - (1)].list))); }
    break;

  case 6:
#line 690 "./sql3.y"
    { (yyval.tree) = t_listst (2, SCHEMA_ELEMENT_LIST, t_list (1, (yyvsp[(1) - (1)].tree))); }
    break;

  case 7:
#line 691 "./sql3.y"
    { (yyval.tree) = t_listst (2, SCHEMA_ELEMENT_LIST, t_list (1, (yyvsp[(1) - (1)].tree))); }
    break;

  case 8:
#line 692 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 9:
#line 693 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 10:
#line 694 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 11:
#line 695 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 12:
#line 696 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 13:
#line 697 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 14:
#line 698 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 15:
#line 714 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 16:
#line 715 "./sql3.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); }
    break;

  case 17:
#line 716 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (2)].list), t_CONS ((yyvsp[(2) - (2)].tree), NULL)); }
    break;

  case 18:
#line 717 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].list)); }
    break;

  case 37:
#line 744 "./sql3.y"
    { (yyval.box) = (yyvsp[(1) - (1)].box); }
    break;

  case 38:
#line 745 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 39:
#line 746 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 40:
#line 747 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 41:
#line 748 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 42:
#line 749 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 43:
#line 750 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 44:
#line 751 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 45:
#line 752 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 46:
#line 753 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 47:
#line 754 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 48:
#line 755 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 49:
#line 756 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 50:
#line 757 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 51:
#line 758 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 52:
#line 759 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 53:
#line 760 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 54:
#line 761 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 55:
#line 762 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 56:
#line 763 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 57:
#line 764 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 58:
#line 765 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 59:
#line 766 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 60:
#line 767 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 61:
#line 768 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 62:
#line 769 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 63:
#line 770 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 64:
#line 771 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 65:
#line 772 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 66:
#line 773 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 67:
#line 774 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 68:
#line 775 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 69:
#line 776 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 70:
#line 777 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 71:
#line 778 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 72:
#line 779 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 73:
#line 780 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 74:
#line 781 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 75:
#line 782 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 76:
#line 783 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 77:
#line 784 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 78:
#line 785 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 79:
#line 786 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 80:
#line 787 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 81:
#line 788 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 82:
#line 789 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 83:
#line 790 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 84:
#line 791 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 85:
#line 792 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 86:
#line 793 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 87:
#line 794 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 88:
#line 795 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 89:
#line 796 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 90:
#line 797 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 91:
#line 798 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 92:
#line 799 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 93:
#line 800 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 94:
#line 801 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 95:
#line 802 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 96:
#line 803 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 97:
#line 804 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 98:
#line 805 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 99:
#line 806 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 100:
#line 807 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 101:
#line 808 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 102:
#line 809 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 103:
#line 810 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 104:
#line 811 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 105:
#line 812 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 106:
#line 813 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ((yyvsp[(1) - (1)].box)); }
    break;

  case 107:
#line 814 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ((yyvsp[(1) - (1)].box)); }
    break;

  case 108:
#line 815 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ((yyvsp[(1) - (1)].box)); }
    break;

  case 109:
#line 816 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ((yyvsp[(1) - (1)].box)); }
    break;

  case 110:
#line 817 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ((yyvsp[(1) - (1)].box)); }
    break;

  case 111:
#line 818 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ((yyvsp[(1) - (1)].box)); }
    break;

  case 112:
#line 819 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ((yyvsp[(1) - (1)].box)); }
    break;

  case 113:
#line 820 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ((yyvsp[(1) - (1)].box)); }
    break;

  case 114:
#line 821 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ((yyvsp[(1) - (1)].box)); }
    break;

  case 115:
#line 822 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ((yyvsp[(1) - (1)].box)); }
    break;

  case 116:
#line 823 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ("__tag"); }
    break;

  case 117:
#line 824 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 118:
#line 825 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 119:
#line 829 "./sql3.y"
    { (yyval.intval) = 0; }
    break;

  case 120:
#line 830 "./sql3.y"
    { (yyval.intval) = 1; }
    break;

  case 121:
#line 831 "./sql3.y"
    { (yyval.intval) = 0; }
    break;

  case 122:
#line 835 "./sql3.y"
    { (yyval.intval) = T_ROW; }
    break;

  case 123:
#line 836 "./sql3.y"
    { (yyval.intval) = T_COLUMN; }
    break;

  case 124:
#line 837 "./sql3.y"
    { (yyval.intval) = T_DISTINCT_COLUMNS; }
    break;

  case 125:
#line 843 "./sql3.y"
    { (yyval.tree) = t_listst (4, TABLE_DEF, (yyvsp[(3) - (7)].strval),
				 t_list_to_array (sqlc_ensure_primary_key (sqlp_process_col_options ((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].list)))), (yyvsp[(7) - (7)].intval)); }
    break;

  case 126:
#line 846 "./sql3.y"
    { (yyval.tree) = t_listst (4, CREATE_TABLE_AS, (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].tree), t_box_num ((ptrlong) (yyvsp[(6) - (6)].intval))); }
    break;

  case 128:
#line 852 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].list)); }
    break;

  case 130:
#line 857 "./sql3.y"
    { (yyval.list) = t_CONS (NULL, t_CONS ((yyvsp[(1) - (1)].tree), NULL)); }
    break;

  case 131:
#line 862 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (3)].strval), t_CONS (t_list (2, (yyvsp[(2) - (3)].tree), t_list_to_array ((yyvsp[(3) - (3)].list))), NULL)); }
    break;

  case 132:
#line 866 "./sql3.y"
    { (yyval.tree) = t_listst (2, 0, 0); }
    break;

  case 133:
#line 867 "./sql3.y"
    {
			  caddr_t *l = (caddr_t *)(yyvsp[(1) - (1)].tree);
			(yyval.tree) = (l[0] ? t_listst (2, 0, l[1]) : t_listst (2, l[1], 0));
		      }
    break;

  case 134:
#line 872 "./sql3.y"
    {
			  caddr_t *l  = (caddr_t *)(yyvsp[(1) - (2)].tree);
			  caddr_t *ll = (caddr_t *)(yyvsp[(2) - (2)].tree);
			if (l[0] == ll [0])
			  yyerror ("duplicated referential actions");
			(yyval.tree) = (l[0] ? t_listst (2, ll[1], l[1]) : t_listst (2, l[1], ll[1]));
		      }
    break;

  case 135:
#line 882 "./sql3.y"
    { (yyval.tree) = t_listst (2, 0, (ptrlong) (yyvsp[(3) - (3)].intval)); }
    break;

  case 136:
#line 883 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 137:
#line 887 "./sql3.y"
    { (yyval.tree) = t_listst (2, (ptrlong) 1, (ptrlong) (yyvsp[(3) - (3)].intval)); }
    break;

  case 138:
#line 891 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 139:
#line 892 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 140:
#line 896 "./sql3.y"
    { (yyval.intval) = 1; }
    break;

  case 141:
#line 897 "./sql3.y"
    { (yyval.intval) = 2; }
    break;

  case 142:
#line 898 "./sql3.y"
    { (yyval.intval) = 3; }
    break;

  case 143:
#line 902 "./sql3.y"
    { (yyval.intval) = 0; }
    break;

  case 144:
#line 903 "./sql3.y"
    { (yyval.intval) = 0; }
    break;

  case 145:
#line 904 "./sql3.y"
    { (yyval.intval) = 1; }
    break;

  case 146:
#line 905 "./sql3.y"
    { (yyval.intval) = 2; }
    break;

  case 147:
#line 906 "./sql3.y"
    { (yyval.intval) = 3; }
    break;

  case 148:
#line 911 "./sql3.y"
    {
		  caddr_t *l = (caddr_t *) (yyvsp[(4) - (5)].tree);
		  (yyval.tree) = t_listst (9, FOREIGN_KEY, NULL, (yyvsp[(2) - (5)].strval), (yyvsp[(3) - (5)].tree), NULL, l[0], l[1], NULL, (ptrlong) (yyvsp[(5) - (5)].intval));
		}
    break;

  case 149:
#line 918 "./sql3.y"
    { (yyval.list) = NULL; }
    break;

  case 150:
#line 919 "./sql3.y"
    { (yyval.list) = (yyvsp[(2) - (2)].tree) ? t_NCONC ((yyvsp[(1) - (2)].list), t_CONS ((yyvsp[(2) - (2)].tree), NULL)) : (yyvsp[(1) - (2)].list); }
    break;

  case 151:
#line 923 "./sql3.y"
    { (yyval.tree) = t_listst (2, CO_ID_START, (yyvsp[(3) - (3)].box)); }
    break;

  case 152:
#line 924 "./sql3.y"
    { (yyval.tree) = t_listst (2, CO_ID_INCREMENT_BY, (yyvsp[(3) - (3)].box)); }
    break;

  case 153:
#line 936 "./sql3.y"
    { (yyval.tree) = t_listst (2, CO_COMPRESS, (ptrlong)CC_NONE); }
    break;

  case 154:
#line 937 "./sql3.y"
    { (yyval.tree) = t_listst (2, CO_COMPRESS, (ptrlong)CC_OFFSET); }
    break;

  case 155:
#line 938 "./sql3.y"
    { (yyval.tree) = t_listst (2, CO_COMPRESS, (ptrlong)CC_PREFIX); }
    break;

  case 156:
#line 943 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 157:
#line 944 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 158:
#line 948 "./sql3.y"
    { (yyval.tree) = (ST *) COL_NOT_NULL; }
    break;

  case 159:
#line 949 "./sql3.y"
    { (yyval.tree) = (ST *) NULL; }
    break;

  case 160:
#line 950 "./sql3.y"
    { (yyval.tree) = (ST *) CO_IDENTITY; }
    break;

  case 161:
#line 951 "./sql3.y"
    { (yyval.tree) = t_listst (2, CO_IDENTITY, t_list_to_array ((yyvsp[(3) - (4)].list))); }
    break;

  case 162:
#line 952 "./sql3.y"
    { (yyval.tree) = t_listst (5, INDEX_DEF, NULL, NULL, NULL, (ST *) 0); }
    break;

  case 163:
#line 953 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 164:
#line 954 "./sql3.y"
    { (yyval.tree) = t_listst (2, COL_DEFAULT, (yyvsp[(2) - (2)].box)); }
    break;

  case 165:
#line 955 "./sql3.y"
    { (yyval.tree) = t_listst (2, COL_COLLATE, (yyvsp[(2) - (2)].strval)); }
    break;

  case 166:
#line 956 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 167:
#line 957 "./sql3.y"
    { (yyval.tree) = t_listst (2, COL_XML_ID, (yyvsp[(3) - (3)].strval)); }
    break;

  case 168:
#line 959 "./sql3.y"
    { (yyval.tree) = t_listst (3, CHECK_CONSTR, (yyvsp[(3) - (4)].tree), NULL); }
    break;

  case 169:
#line 961 "./sql3.y"
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
#line 969 "./sql3.y"
    { (yyval.tree) = t_listst (5, UNIQUE_DEF, NULL, NULL, NULL,
					    (ST *) t_list (1, t_box_string ("unique"))); }
    break;

  case 171:
#line 974 "./sql3.y"
    { (yyval.tree) = t_listst (6, NULL, NULL, NULL, (yyvsp[(2) - (5)].box), (yyvsp[(4) - (5)].box), (caddr_t) t_NULLCONST); }
    break;

  case 172:
#line 975 "./sql3.y"
    { (yyval.tree) = t_listst (6, NULL, NULL, NULL, (yyvsp[(2) - (7)].box), (yyvsp[(4) - (7)].box), (yyvsp[(6) - (7)].box)); }
    break;

  case 173:
#line 981 "./sql3.y"
    { (yyval.tree) = t_listst (2, TABLE_UNDER, t_list (1, (yyvsp[(2) - (2)].strval))); }
    break;

  case 174:
#line 983 "./sql3.y"
    { (yyval.tree) = t_listst (5, INDEX_DEF, NULL, NULL,
		    sqlp_string_col_list ((caddr_t *) t_list_to_array ((yyvsp[(5) - (7)].list))), (yyvsp[(7) - (7)].tree)); }
    break;

  case 175:
#line 986 "./sql3.y"
    { (yyval.tree) = (yyvsp[(7) - (7)].tree); (yyvsp[(7) - (7)].tree)->_.fkey.fk_cols = (caddr_t*) t_list_to_array ((yyvsp[(5) - (7)].list)); (yyvsp[(7) - (7)].tree)->_.fkey.fk_name = (yyvsp[(1) - (7)].box); }
    break;

  case 176:
#line 988 "./sql3.y"
    { (yyval.tree) = t_listst (3, CHECK_CONSTR, (yyvsp[(4) - (5)].tree), (yyvsp[(1) - (5)].box)); }
    break;

  case 177:
#line 990 "./sql3.y"
    { (yyval.tree) =
		  t_listst (5, UNIQUE_DEF, (yyvsp[(1) - (5)].box), NULL,
		      sqlp_string_col_list ((caddr_t *) t_list_to_array ((yyvsp[(4) - (5)].list))),
		      (ST *) t_list (1, t_box_string ("unique"))); }
    break;

  case 178:
#line 994 "./sql3.y"
    { (yyval.tree) = t_listst (4, COLUMN_GROUP, (yyvsp[(1) - (6)].box), (yyvsp[(3) - (6)].tree), sqlp_string_col_list (t_list_to_array ((yyvsp[(5) - (6)].list)))); }
    break;

  case 179:
#line 998 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 180:
#line 999 "./sql3.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 181:
#line 1003 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].strval), NULL); }
    break;

  case 182:
#line 1004 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].strval), NULL)); }
    break;

  case 183:
#line 1008 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (2)].strval), NULL); }
    break;

  case 184:
#line 1009 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (4)].list), t_CONS ((yyvsp[(3) - (4)].strval), NULL)); }
    break;

  case 185:
#line 1013 "./sql3.y"
    { (yyval.box) = t_box_string ("clustered"); }
    break;

  case 186:
#line 1014 "./sql3.y"
    { (yyval.box) = t_box_string ("unique"); }
    break;

  case 187:
#line 1015 "./sql3.y"
    { (yyval.box) = t_box_string ("object_id"); }
    break;

  case 188:
#line 1016 "./sql3.y"
    { (yyval.box) = t_box_string ("bitmap"); }
    break;

  case 189:
#line 1017 "./sql3.y"
    { (yyval.box) = t_box_string ("distinct"); }
    break;

  case 190:
#line 1018 "./sql3.y"
    { (yyval.box) = t_box_string ("column"); }
    break;

  case 191:
#line 1019 "./sql3.y"
    { (yyval.box) = t_box_string ("not_null"); }
    break;

  case 192:
#line 1020 "./sql3.y"
    { (yyval.box) = t_box_string ("no_pk"); }
    break;

  case 193:
#line 1021 "./sql3.y"
    { (yyval.box) = t_box_string ("no_fill"); }
    break;

  case 194:
#line 1025 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].box), NULL); }
    break;

  case 195:
#line 1026 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (2)].list), t_CONS ((yyvsp[(2) - (2)].box), NULL)); }
    break;

  case 196:
#line 1030 "./sql3.y"
    { (yyval.tree) = (ST *) 0; }
    break;

  case 197:
#line 1031 "./sql3.y"
    { (yyval.tree) = (ST *) t_list_to_array ((yyvsp[(1) - (1)].list)); }
    break;

  case 198:
#line 1037 "./sql3.y"
    { (yyval.tree) = t_listst (5, INDEX_DEF, (yyvsp[(4) - (9)].strval), (yyvsp[(6) - (9)].strval), t_list_to_array ((yyvsp[(8) - (9)].list)), (yyvsp[(2) - (9)].tree)); }
    break;

  case 199:
#line 1040 "./sql3.y"
    { ST * opts = (ST *) t_box_append_1  ((caddr_t) (yyvsp[(2) - (12)].tree), (caddr_t) t_listst (5, PARTITION_DEF,  NULL, NULL, (yyvsp[(11) - (12)].box), t_list_to_array ((yyvsp[(12) - (12)].list))));
		 (yyval.tree) = t_listst (5, INDEX_DEF, (yyvsp[(4) - (12)].strval), (yyvsp[(6) - (12)].strval), t_list_to_array ((yyvsp[(8) - (12)].list)), opts); }
    break;

  case 200:
#line 1045 "./sql3.y"
    { (yyval.tree) = t_listst (3, INDEX_DROP, (yyvsp[(3) - (4)].box), (yyvsp[(4) - (4)].box)); }
    break;

  case 201:
#line 1049 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 202:
#line 1050 "./sql3.y"
    { (yyval.box) = (yyvsp[(1) - (1)].strval); }
    break;

  case 203:
#line 1054 "./sql3.y"
    { (yyval.tree) = t_listst (2, TABLE_DROP, (yyvsp[(3) - (3)].strval)); }
    break;

  case 204:
#line 1055 "./sql3.y"
    { (yyval.tree) = t_listst (2, TABLE_DROP, (yyvsp[(3) - (3)].strval)); }
    break;

  case 205:
#line 1059 "./sql3.y"
    { (yyval.intval) = 0; }
    break;

  case 206:
#line 1060 "./sql3.y"
    { (yyval.intval) = 1; }
    break;

  case 207:
#line 1064 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].list), NULL); }
    break;

  case 208:
#line 1065 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].list), NULL)); }
    break;

  case 209:
#line 1069 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].strval), NULL); }
    break;

  case 210:
#line 1070 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].strval), NULL)); }
    break;

  case 211:
#line 1075 "./sql3.y"
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
#line 1085 "./sql3.y"
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
#line 1095 "./sql3.y"
    {
		  (yyval.list) = t_CONS (t_listst (3, MODIFY_COLUMN, (yyvsp[(3) - (6)].strval), t_list_to_array ((yyvsp[(6) - (6)].list))), NULL);
		}
    break;

  case 214:
#line 1102 "./sql3.y"
    { (yyval.tree) = t_listst (3, TABLE_RENAME, (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].strval)); }
    break;

  case 215:
#line 1107 "./sql3.y"
    { (yyval.subtok) = 1; }
    break;

  case 216:
#line 1108 "./sql3.y"
    { (yyval.subtok) = 2; }
    break;

  case 217:
#line 1109 "./sql3.y"
    { (yyval.subtok) = 3; }
    break;

  case 218:
#line 1113 "./sql3.y"
    { (yyval.intval) = 0; }
    break;

  case 219:
#line 1114 "./sql3.y"
    { (yyval.intval) = 1; }
    break;

  case 220:
#line 1115 "./sql3.y"
    { (yyval.intval) = 2; }
    break;

  case 221:
#line 1120 "./sql3.y"
    {
		  (yyval.tree) = t_listst (9, FOREIGN_KEY, NULL, NULL, NULL, NULL, NULL, NULL, (ptrlong) (yyvsp[(2) - (3)].box), (ptrlong) 0);
		}
    break;

  case 222:
#line 1123 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 223:
#line 1128 "./sql3.y"
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
#line 1145 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
		  t_sqlp_box_id_upcase ("DB.DBA.SYS_CREATE_XML_SCHEMA"),
		  t_list (1, (yyvsp[(4) - (4)].box))); }
    break;

  case 225:
#line 1152 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
		  t_sqlp_box_id_upcase ("DB.DBA.SYS_DROP_XML_SCHEMA"),
		  t_list (1, (yyvsp[(4) - (4)].box))); }
    break;

  case 228:
#line 1164 "./sql3.y"
    { (yyval.tree) = t_listst (5, VIEW_DEF, NULL /* temp value, will set in view_def rule */,
			sqlp_view_def ((ST **) (yyvsp[(1) - (4)].tree),
			  (yyvsp[(3) - (4)].tree), 0), NULL, (ptrlong) (yyvsp[(4) - (4)].subtok)); }
    break;

  case 229:
#line 1168 "./sql3.y"
    { (yyval.tree) = t_listst (5, VIEW_DEF, NULL /* temp value, will set in view_def rule */,
			sqlp_view_def ((ST **) (yyvsp[(1) - (4)].tree),
			  (yyvsp[(4) - (4)].tree), 0), NULL, (ptrlong) 0); }
    break;

  case 230:
#line 1174 "./sql3.y"
    { sqlp_in_view ((yyvsp[(3) - (3)].strval)); }
    break;

  case 231:
#line 1176 "./sql3.y"
    { (yyval.tree) = (yyvsp[(5) - (5)].tree); (yyval.tree)->_.view_def.name = (yyvsp[(3) - (5)].strval); }
    break;

  case 232:
#line 1178 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (5, VIEW_DEF, (yyvsp[(4) - (12)].strval),
		    t_list (4, PROC_TABLE, (yyvsp[(6) - (12)].strval), (yyvsp[(8) - (12)].tree),
		      t_list_to_array (sqlc_ensure_primary_key (sqlp_process_col_options ((yyvsp[(4) - (12)].strval), (yyvsp[(11) - (12)].list))))),
		    NULL, NULL); }
    break;

  case 233:
#line 1185 "./sql3.y"
    { (yyval.subtok) = 0; }
    break;

  case 234:
#line 1186 "./sql3.y"
    { (yyval.subtok) = 1; }
    break;

  case 235:
#line 1190 "./sql3.y"
    { (yyval.tree) = t_listst (0); }
    break;

  case 236:
#line 1191 "./sql3.y"
    { (yyval.tree) = (ST *) t_list_to_array ((yyvsp[(2) - (3)].list)); }
    break;

  case 237:
#line 1195 "./sql3.y"
    { (yyval.tree) = (ST *) 0; }
    break;

  case 238:
#line 1196 "./sql3.y"
    { (yyval.tree) = (ST *) t_list_to_array ((yyvsp[(2) - (3)].list)); }
    break;

  case 239:
#line 1201 "./sql3.y"
    { (yyval.tree) = t_listst (3, SET_GROUP_STMT, (yyvsp[(5) - (5)].box), t_box_string ("dba")); }
    break;

  case 240:
#line 1203 "./sql3.y"
    { (yyval.tree) = t_listst (4, GRANT_STMT, (yyvsp[(2) - (7)].box), (yyvsp[(4) - (7)].strval), t_list_to_array ((yyvsp[(6) - (7)].list))); }
    break;

  case 241:
#line 1205 "./sql3.y"
    { (yyval.tree) = t_listst (4, GRANT_STMT,
		    t_list (1,
		      t_listst (3, NULL, GR_EXECUTE, NULL)),
		    t_list (5, TABLE_DOTTED, (yyvsp[(4) - (7)].box), NULL, sqlp_view_u_id (), sqlp_view_g_id ()),
		    t_list_to_array ((yyvsp[(6) - (7)].list))); }
    break;

  case 242:
#line 1211 "./sql3.y"
    { (yyval.tree) = t_listst (4, GRANT_STMT,
		    t_list (1,
                      t_listst (3, NULL, GR_REXECUTE, NULL)),
		    t_list (5, TABLE_DOTTED, (yyvsp[(4) - (6)].box), NULL, sqlp_view_u_id (), sqlp_view_g_id ()),
		    t_list_to_array ((yyvsp[(6) - (6)].list))); }
    break;

  case 243:
#line 1217 "./sql3.y"
    { (yyval.tree) = t_listst (4, GRANT_STMT,
		    t_list (1,
		      t_listst (3, NULL, GR_UDT_UNDER, NULL)),
		    t_list (5, TABLE_DOTTED, (yyvsp[(4) - (7)].strval), NULL, sqlp_view_u_id (), sqlp_view_g_id ()),
		    t_list_to_array ((yyvsp[(6) - (7)].list))); }
    break;

  case 244:
#line 1224 "./sql3.y"
    { (yyval.tree) = t_listst (4, GRANT_ROLE_STMT, t_list_to_array ((yyvsp[(2) - (5)].list)), t_list_to_array ((yyvsp[(4) - (5)].list)), (ptrlong) (yyvsp[(5) - (5)].subtok)); }
    break;

  case 245:
#line 1228 "./sql3.y"
    { (yyval.subtok) = 0; }
    break;

  case 246:
#line 1229 "./sql3.y"
    { (yyval.subtok) = 1; }
    break;

  case 247:
#line 1238 "./sql3.y"
    { (yyval.tree) = t_listst (4, REVOKE_STMT, (yyvsp[(2) - (6)].box), (yyvsp[(4) - (6)].strval), t_list_to_array ((yyvsp[(6) - (6)].list))); }
    break;

  case 248:
#line 1241 "./sql3.y"
    { (yyval.tree) = t_listst (4, REVOKE_STMT,
		    t_list (1,
		      t_listst (3, NULL, GR_EXECUTE, NULL)),
		    t_list (5, TABLE_DOTTED, (yyvsp[(4) - (6)].box), NULL, sqlp_view_u_id (), sqlp_view_g_id ()),
		    t_list_to_array ((yyvsp[(6) - (6)].list))); }
    break;

  case 249:
#line 1247 "./sql3.y"
    { (yyval.tree) = t_listst (4, REVOKE_STMT,
		    t_list (1,
		      t_listst (3, NULL, GR_UDT_UNDER, NULL)),
		    t_list (5, TABLE_DOTTED, (yyvsp[(4) - (6)].strval), NULL, sqlp_view_u_id (), sqlp_view_g_id ()),
		    t_list_to_array ((yyvsp[(6) - (6)].list))); }
    break;

  case 250:
#line 1253 "./sql3.y"
    { (yyval.tree) = t_listst (4, REVOKE_STMT,
		    t_list (1,
		      t_listst (3, NULL, GR_REXECUTE, NULL)),
		    t_list (5, TABLE_DOTTED, (yyvsp[(4) - (6)].box), NULL, sqlp_view_u_id (), sqlp_view_g_id ()),
		    t_list_to_array ((yyvsp[(6) - (6)].list))); }
    break;

  case 251:
#line 1259 "./sql3.y"
    { (yyval.tree) = t_listst (4, REVOKE_ROLE_STMT, t_list_to_array ((yyvsp[(2) - (4)].list)), t_list_to_array ((yyvsp[(4) - (4)].list)), 0); }
    break;

  case 252:
#line 1263 "./sql3.y"
    { (yyval.subtok) = 0; }
    break;

  case 253:
#line 1264 "./sql3.y"
    { (yyval.subtok) = 1; }
    break;

  case 254:
#line 1269 "./sql3.y"
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

  case 255:
#line 1282 "./sql3.y"
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

  case 256:
#line 1294 "./sql3.y"
    { (yyval.box) = t_list_to_array_box ((yyvsp[(1) - (1)].list)); }
    break;

  case 257:
#line 1298 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 258:
#line 1300 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 259:
#line 1305 "./sql3.y"
    { (yyval.tree) = t_listst (3, NULL, GR_SELECT, (yyvsp[(2) - (2)].tree)); }
    break;

  case 260:
#line 1306 "./sql3.y"
    { (yyval.tree) = t_listst (3, NULL, GR_INSERT, NULL); }
    break;

  case 261:
#line 1307 "./sql3.y"
    { (yyval.tree) = t_listst (3, NULL, GR_DELETE, NULL); }
    break;

  case 262:
#line 1309 "./sql3.y"
    { (yyval.tree) = t_listst (3, NULL, GR_UPDATE, (yyvsp[(2) - (2)].tree)); }
    break;

  case 263:
#line 1311 "./sql3.y"
    { (yyval.tree) = t_listst (3, NULL, GR_REFERENCES, (yyvsp[(2) - (2)].tree)); }
    break;

  case 264:
#line 1316 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].box), NULL); }
    break;

  case 265:
#line 1318 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].box), NULL)); }
    break;

  case 266:
#line 1322 "./sql3.y"
    { (yyval.box) = (caddr_t) U_ID_PUBLIC; }
    break;

  case 268:
#line 1328 "./sql3.y"
    { (yyval.tree) = t_listst (3, SET_PASS_STMT, (yyvsp[(3) - (4)].box), (yyvsp[(4) - (4)].box)); }
    break;

  case 269:
#line 1332 "./sql3.y"
    { (yyval.tree) = t_listst (2, CREATE_USER_STMT, (yyvsp[(3) - (3)].box)); }
    break;

  case 270:
#line 1333 "./sql3.y"
    { (yyval.tree) = t_listst (2, CREATE_ROLE_STMT, (yyvsp[(3) - (3)].box)); }
    break;

  case 271:
#line 1337 "./sql3.y"
    { (yyval.tree) = t_listst (2, DELETE_USER_STMT, (yyvsp[(3) - (3)].box)); }
    break;

  case 272:
#line 1338 "./sql3.y"
    { (yyval.tree) = t_listst (3, DELETE_USER_STMT, (yyvsp[(3) - (4)].box), t_box_num (1)); }
    break;

  case 273:
#line 1339 "./sql3.y"
    { (yyval.tree) = t_listst (2, DELETE_USER_STMT, (yyvsp[(3) - (3)].box)); }
    break;

  case 274:
#line 1340 "./sql3.y"
    { (yyval.tree) = t_listst (3, DELETE_USER_STMT, (yyvsp[(3) - (4)].box), t_box_num (1)); }
    break;

  case 275:
#line 1341 "./sql3.y"
    { (yyval.tree) = t_listst (2, DROP_ROLE_STMT, (yyvsp[(3) - (3)].box)); }
    break;

  case 276:
#line 1346 "./sql3.y"
    { (yyval.tree) = t_listst (3, SET_GROUP_STMT, (yyvsp[(4) - (5)].box), (yyvsp[(5) - (5)].box)); }
    break;

  case 277:
#line 1351 "./sql3.y"
    { (yyval.tree) = t_listst (3, ADD_GROUP_STMT, (yyvsp[(4) - (5)].box), (yyvsp[(5) - (5)].box)); }
    break;

  case 278:
#line 1356 "./sql3.y"
    { (yyval.tree) = t_listst (3, DELETE_GROUP_STMT, (yyvsp[(4) - (5)].box), (yyvsp[(5) - (5)].box)); }
    break;

  case 279:
#line 1361 "./sql3.y"
    { (yyval.tree) = (ST *) t_alloc_box (0, DV_DB_NULL); }
    break;

  case 280:
#line 1363 "./sql3.y"
    {
		  (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("vector"),
		      sqlp_string_col_list (t_list_to_array ((yyvsp[(4) - (5)].list))));
		}
    break;

  case 281:
#line 1371 "./sql3.y"
    {
	      caddr_t *l = (caddr_t *) (yyvsp[(8) - (10)].tree);
	      (yyval.tree) = t_listst (3, CALL_STMT,
		  (yyvsp[(9) - (10)].box),
		  t_list (7, (yyvsp[(7) - (10)].box), (yyvsp[(3) - (10)].strval), (yyvsp[(5) - (10)].box), l[0], l[1], (yyvsp[(4) - (10)].tree), (yyvsp[(10) - (10)].tree)));
	    }
    break;

  case 282:
#line 1380 "./sql3.y"
    { (yyval.box) = t_alloc_box (0, DV_DB_NULL); }
    break;

  case 283:
#line 1381 "./sql3.y"
    { (yyval.box) = (yyvsp[(2) - (2)].strval); }
    break;

  case 284:
#line 1386 "./sql3.y"
    { (yyval.tree) = t_listst (2, t_alloc_box (0, DV_DB_NULL),
			t_alloc_box (0, DV_DB_NULL));
		}
    break;

  case 285:
#line 1390 "./sql3.y"
    { (yyval.tree) = t_listst (2, (yyvsp[(2) - (4)].tree), (yyvsp[(4) - (4)].tree)); }
    break;

  case 286:
#line 1394 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ("DB.DBA.vd_attach_view"); }
    break;

  case 287:
#line 1395 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ("DB.DBA.vd_attach_view_no_select"); }
    break;

  case 288:
#line 1399 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 289:
#line 1401 "./sql3.y"
    {
		  (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("concat"),
		      t_list (2, t_box_string ("\1"), (yyvsp[(3) - (3)].tree)));
		}
    break;

  case 290:
#line 1408 "./sql3.y"
    { (yyval.intval) = _SQL_CURSOR_STATIC; }
    break;

  case 291:
#line 1409 "./sql3.y"
    { (yyval.intval) = _SQL_CURSOR_DYNAMIC; }
    break;

  case 292:
#line 1410 "./sql3.y"
    { (yyval.intval) = _SQL_CURSOR_KEYSET_DRIVEN; }
    break;

  case 293:
#line 1416 "./sql3.y"
    {
				  (yyval.tree) = t_listst (5, CURSOR_DEF, (yyvsp[(2) - (5)].box), (yyvsp[(5) - (5)].tree), _SQL_CURSOR_FORWARD_ONLY, NULL);
				}
    break;

  case 294:
#line 1420 "./sql3.y"
    {
				  (yyval.tree) = t_listst (5, CURSOR_DEF, (yyvsp[(2) - (6)].box), (yyvsp[(6) - (6)].tree), (ptrlong) (yyvsp[(3) - (6)].intval), NULL);
				}
    break;

  case 295:
#line 1426 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 296:
#line 1427 "./sql3.y"
    { (yyval.box) = t_list_to_array_box ((yyvsp[(3) - (3)].list)); }
    break;

  case 297:
#line 1431 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 298:
#line 1433 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 299:
#line 1438 "./sql3.y"
    { (yyval.tree) = t_listst (3, ORDER_BY, (caddr_t) (yyvsp[(1) - (2)].tree), (ptrlong) (yyvsp[(2) - (2)].subtok));  }
    break;

  case 300:
#line 1440 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (3, ORDER_BY, t_list (3, COL_DOTTED, NULL, sqlp_xml_col_name ((yyvsp[(1) - (2)].tree))), (ptrlong) (yyvsp[(2) - (2)].subtok)); }
    break;

  case 301:
#line 1444 "./sql3.y"
    { (yyval.subtok) = ORDER_ASC; }
    break;

  case 302:
#line 1445 "./sql3.y"
    { (yyval.subtok) = ORDER_ASC; }
    break;

  case 303:
#line 1446 "./sql3.y"
    { (yyval.subtok) = ORDER_DESC; }
    break;

  case 304:
#line 1452 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
		  t_sqlp_box_id_upcase ("DB.DBA.repl_create_snapshot_log"),
		  t_list (1, (yyvsp[(5) - (5)].strval))); }
    break;

  case 305:
#line 1459 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
		  t_sqlp_box_id_upcase ("DB.DBA.repl_drop_snapshot_log"),
		  t_list (1, (yyvsp[(5) - (5)].strval))); }
    break;

  case 306:
#line 1466 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
		  t_sqlp_box_id_upcase ("DB.DBA.repl_purge_snapshot_log"),
		  t_list (1, (yyvsp[(5) - (5)].strval))); }
    break;

  case 307:
#line 1472 "./sql3.y"
    { (yyval.box) = (caddr_t) t_NULLCONST; }
    break;

  case 308:
#line 1473 "./sql3.y"
    { (yyval.box) = (yyvsp[(1) - (1)].box); }
    break;

  case 309:
#line 1477 "./sql3.y"
    { (yyval.box) = (caddr_t) t_NULLCONST; }
    break;

  case 310:
#line 1478 "./sql3.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 311:
#line 1483 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
		  t_sqlp_box_id_upcase ("DB.DBA.repl_create_inc_snapshot"),
		  t_list (4, (yyvsp[(6) - (7)].box), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].box), (yyvsp[(3) - (7)].strval))); }
    break;

  case 312:
#line 1487 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
		  t_sqlp_box_id_upcase ("DB.DBA.repl_create_snapshot"),
		  t_list (2, (yyvsp[(6) - (6)].box), (yyvsp[(4) - (6)].strval))); }
    break;

  case 313:
#line 1493 "./sql3.y"
    { (yyval.box) = t_box_num (0); }
    break;

  case 314:
#line 1494 "./sql3.y"
    { (yyval.box) = t_box_num (1); }
    break;

  case 315:
#line 1499 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
		  t_sqlp_box_id_upcase ("DB.DBA.repl_drop_snapshot"),
		  t_list (2, (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].box))); }
    break;

  case 316:
#line 1505 "./sql3.y"
    { (yyval.subtok) = 0; }
    break;

  case 317:
#line 1506 "./sql3.y"
    { (yyval.subtok) = 1; }
    break;

  case 318:
#line 1511 "./sql3.y"
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

  case 319:
#line 1524 "./sql3.y"
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

  case 320:
#line 1536 "./sql3.y"
    { (yyval.box) = t_box_num(0); }
    break;

  case 321:
#line 1537 "./sql3.y"
    { (yyval.box) = t_box_num(1); }
    break;

  case 322:
#line 1541 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 323:
#line 1542 "./sql3.y"
    { (yyval.box) = t_box_string ((yyvsp[(2) - (3)].strval)); }
    break;

  case 324:
#line 1547 "./sql3.y"
    {
	      (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("DB.DBA.vt_create_ftt"),
		  t_list (4, (yyvsp[(5) - (6)].strval), NULL, (yyvsp[(6) - (6)].box), NULL));
	    }
    break;

  case 325:
#line 1555 "./sql3.y"
    {
	      (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("DB.DBA.vt_drop_ftt"),
		  t_list (2, (yyvsp[(5) - (6)].strval), (yyvsp[(6) - (6)].box)));
	    }
    break;

  case 326:
#line 1562 "./sql3.y"
    { (yyval.box) = t_box_num (0); }
    break;

  case 327:
#line 1563 "./sql3.y"
    { (yyval.box) = t_box_num (1); }
    break;

  case 328:
#line 1567 "./sql3.y"
    { (yyval.box) = (caddr_t) t_NULLCONST; }
    break;

  case 329:
#line 1568 "./sql3.y"
    { (yyval.box) = t_box_string ((yyvsp[(3) - (3)].strval)); }
    break;

  case 330:
#line 1572 "./sql3.y"
    { (yyval.tree) = (ST*) t_NULLCONST; }
    break;

  case 331:
#line 1573 "./sql3.y"
    { (yyval.tree) = (ST*) t_list_to_array ((yyvsp[(4) - (5)].list)); }
    break;

  case 332:
#line 1577 "./sql3.y"
    { (yyval.box) = (caddr_t) t_NULLCONST; }
    break;

  case 333:
#line 1578 "./sql3.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 334:
#line 1582 "./sql3.y"
    { (yyval.box) = (caddr_t) t_NULLCONST; }
    break;

  case 335:
#line 1583 "./sql3.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 336:
#line 1587 "./sql3.y"
    { (yyval.box) = t_box_num (0); }
    break;

  case 337:
#line 1588 "./sql3.y"
    { (yyval.box) = t_box_num (1); }
    break;

  case 348:
#line 1606 "./sql3.y"
    { (yyval.tree) = (yyvsp[(3) - (3)].tree); }
    break;

  case 366:
#line 1628 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
			t_sqlp_box_id_upcase ("set_qualifier"),
			t_list (1, sqlp_new_qualifier_name ((yyvsp[(2) - (2)].box), box_length ((yyvsp[(2) - (2)].box))))); }
    break;

  case 367:
#line 1634 "./sql3.y"
    { (yyval.tree) = t_listst (2, CLOSE_STMT, (yyvsp[(2) - (2)].box)); }
    break;

  case 368:
#line 1639 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (3, CALL_STMT, t_sqlp_box_id_upcase ("__commit"), t_list (0)); }
    break;

  case 369:
#line 1645 "./sql3.y"
    { (yyval.tree) = t_listst (4, DELETE_POS, (yyvsp[(7) - (8)].box), (yyvsp[(3) - (8)].strval), (yyvsp[(8) - (8)].tree)); }
    break;

  case 370:
#line 1650 "./sql3.y"
    { (yyval.tree) = t_listst (2, DELETE_SRC,
		      sqlp_infoschema_redirect (t_listst (9, TABLE_EXP, t_list (1, (yyvsp[(3) - (5)].strval)),
		      (yyvsp[(4) - (5)].tree), NULL, NULL, NULL, NULL, (yyvsp[(5) - (5)].tree), NULL))); }
    break;

  case 371:
#line 1657 "./sql3.y"
    { (yyval.tree) = t_listst (5, FETCH_STMT, (yyvsp[(2) - (4)].box), t_list_to_array ((yyvsp[(4) - (4)].list)), (ptrlong) _SQL_FETCH_NEXT, t_box_num (1)); }
    break;

  case 372:
#line 1659 "./sql3.y"
    {
		  ptrlong fetch_type = sqlp_fetch_type_to_code ((yyvsp[(3) - (5)].box));
		  (yyval.tree) = t_listst (5, FETCH_STMT, (yyvsp[(2) - (5)].box), t_list_to_array ((yyvsp[(5) - (5)].list)), fetch_type, t_box_num (1));
		}
    break;

  case 373:
#line 1664 "./sql3.y"
    {
		  ptrlong fetch_type = sqlp_fetch_type_to_code ((yyvsp[(3) - (6)].box));
		  (yyval.tree) = t_listst (5, FETCH_STMT, (yyvsp[(2) - (6)].box), t_list_to_array ((yyvsp[(6) - (6)].list)), fetch_type, (yyvsp[(4) - (6)].tree));
		}
    break;

  case 374:
#line 1671 "./sql3.y"
    { (yyval.subtok) = INS_NORMAL; }
    break;

  case 375:
#line 1672 "./sql3.y"
    { (yyval.subtok) = INS_REPLACING; }
    break;

  case 376:
#line 1673 "./sql3.y"
    { (yyval.subtok) = INS_SOFT; }
    break;

  case 377:
#line 1678 "./sql3.y"
    { (yyval.box) = NULL;}
    break;

  case 378:
#line 1679 "./sql3.y"
    {(yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 379:
#line 1685 "./sql3.y"
    { (yyval.tree) = t_listst (7, INSERT_STMT, (yyvsp[(3) - (7)].strval), (yyvsp[(6) - (7)].tree), (yyvsp[(7) - (7)].tree), (ptrlong) (yyvsp[(2) - (7)].subtok), (yyvsp[(4) - (7)].box), (yyvsp[(5) - (7)].tree)); }
    break;

  case 380:
#line 1690 "./sql3.y"
    { (yyval.tree) = t_listst (2, INSERT_VALUES, sqlp_wrapper_sqlxml((ST**)t_list_to_array ((yyvsp[(3) - (4)].list)))); }
    break;

  case 382:
#line 1695 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 383:
#line 1697 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 385:
#line 1707 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_ORDER, t_CONS (1, NULL)); }
    break;

  case 386:
#line 1708 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_ANY_ORDER, t_CONS (1, NULL)); }
    break;

  case 387:
#line 1709 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_SPARQL, t_CONS (1, NULL)); }
    break;

  case 388:
#line 1710 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_SAME_AS, t_CONS (1, NULL)); }
    break;

  case 389:
#line 1711 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_ARRAY, t_CONS (1, NULL)); }
    break;

  case 390:
#line 1712 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_JOIN, t_CONS (OPT_HASH, NULL)); }
    break;

  case 391:
#line 1713 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_JOIN, t_CONS (OPT_INTERSECT, NULL)); }
    break;

  case 392:
#line 1714 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_JOIN, t_CONS (OPT_LOOP, NULL)); }
    break;

  case 393:
#line 1715 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_SUBQ_LOOP, t_CONS (SUBQ_LOOP, NULL)); }
    break;

  case 394:
#line 1716 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_SUBQ_LOOP, t_CONS (SUBQ_NO_LOOP, NULL)); }
    break;

  case 395:
#line 1717 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_INDEX, t_CONS ((yyvsp[(2) - (2)].box), NULL)); }
    break;

  case 396:
#line 1718 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_INDEX, t_CONS (t_box_string ("PRIMARY KEY"), NULL)); }
    break;

  case 397:
#line 1719 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_INDEX, t_CONS (t_box_string ("TEXT KEY"), NULL)); }
    break;

  case 398:
#line 1720 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_INDEX_ONLY, t_CONS (t_box_num (1), NULL)); }
    break;

  case 399:
#line 1721 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_RDF_INFERENCE, t_CONS ((yyvsp[(2) - (2)].box), NULL)); }
    break;

  case 400:
#line 1722 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_NO_CLUSTER, t_CONS (1, NULL)); }
    break;

  case 401:
#line 1723 "./sql3.y"
    { (yyval.list) = t_CONS (OPT_INTO, t_CONS ((yyvsp[(2) - (2)].tree), NULL)); }
    break;

  case 402:
#line 1724 "./sql3.y"
    {
	  if (!stricmp ((yyvsp[(1) - (2)].box), "vacuum"))
	    (yyval.list) = t_CONS (OPT_VACUUM, t_CONS ((yyvsp[(2) - (2)].box), NULL));
	  else if (!stricmp ((yyvsp[(1) - (2)].box), "RANDOM"))
	    (yyval.list) = t_CONS (OPT_RANDOM_FETCH, t_CONS ((yyvsp[(2) - (2)].box), NULL));
	  else
	    (yyval.list) = NULL;
	}
    break;

  case 403:
#line 1735 "./sql3.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); }
    break;

  case 404:
#line 1736 "./sql3.y"
    { (yyval.list) = NCONC ((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].list)); }
    break;

  case 405:
#line 1740 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 406:
#line 1741 "./sql3.y"
    { (yyval.tree) = (ST*) t_list_to_array ((yyvsp[(3) - (4)].list)); }
    break;

  case 407:
#line 1745 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 408:
#line 1746 "./sql3.y"
    { (yyval.tree) = (ST*) t_list_to_array ((yyvsp[(4) - (5)].list)); }
    break;

  case 409:
#line 1750 "./sql3.y"
    { (yyval.tree)  = (ST *) EXCLUSIVE_OPT; }
    break;

  case 410:
#line 1751 "./sql3.y"
    { (yyval.tree) = t_listst (2, PREFETCH_OPT, (yyvsp[(2) - (2)].box)); }
    break;

  case 411:
#line 1755 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 412:
#line 1757 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 413:
#line 1761 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 414:
#line 1762 "./sql3.y"
    { (yyval.box) = t_list_to_array_box ((yyvsp[(2) - (3)].list)); }
    break;

  case 415:
#line 1767 "./sql3.y"
    { (yyval.tree) = t_listst (4, OPEN_STMT, (yyvsp[(2) - (3)].box), (yyvsp[(3) - (3)].box), NULL); }
    break;

  case 416:
#line 1772 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (3, CALL_STMT, t_sqlp_box_id_upcase ("__rollback"), t_list (0)); }
    break;

  case 417:
#line 1777 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 418:
#line 1778 "./sql3.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 419:
#line 1784 "./sql3.y"
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

  case 420:
#line 1811 "./sql3.y"
    { (yyval.list) = t_CONS (sqlp_col_num ((yyvsp[(1) - (1)].box)), NULL); }
    break;

  case 421:
#line 1812 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS (sqlp_col_num ((yyvsp[(3) - (3)].box)), NULL)); }
    break;

  case 422:
#line 1816 "./sql3.y"
    { (yyval.box) = t_listbox (1, sqlp_col_num ((yyvsp[(1) - (1)].box))); }
    break;

  case 423:
#line 1817 "./sql3.y"
    { (yyval.box) = t_list_to_array_box ((yyvsp[(2) - (3)].list)); }
    break;

  case 424:
#line 1822 "./sql3.y"
    { global_trans->_.trans.min = (yyvsp[(3) - (4)].tree); }
    break;

  case 425:
#line 1823 "./sql3.y"
    { global_trans->_.trans.max = (yyvsp[(3) - (4)].tree); }
    break;

  case 426:
#line 1824 "./sql3.y"
    { global_trans->_.trans.distinct = 1; }
    break;

  case 427:
#line 1825 "./sql3.y"
    { global_trans->_.trans.exists = 1; }
    break;

  case 428:
#line 1826 "./sql3.y"
    { global_trans->_.trans.no_cycles = 1; }
    break;

  case 429:
#line 1827 "./sql3.y"
    { global_trans->_.trans.cycles_only = 1; }
    break;

  case 430:
#line 1828 "./sql3.y"
    { global_trans->_.trans.no_order = 1; }
    break;

  case 431:
#line 1829 "./sql3.y"
    { global_trans->_.trans.shortest_only = 1; }
    break;

  case 432:
#line 1830 "./sql3.y"
    { global_trans->_.trans.in = (ptrlong*) (yyvsp[(2) - (2)].box); }
    break;

  case 433:
#line 1831 "./sql3.y"
    { global_trans->_.trans.out = (ptrlong*) (yyvsp[(2) - (2)].box); }
    break;

  case 434:
#line 1832 "./sql3.y"
    { global_trans->_.trans.end_flag = (ptrlong)sqlp_col_num ((yyvsp[(2) - (2)].box)); }
    break;

  case 435:
#line 1833 "./sql3.y"
    { global_trans->_.trans.final_as = (yyvsp[(2) - (2)].box); }
    break;

  case 436:
#line 1834 "./sql3.y"
    { global_trans->_.trans.direction = unbox ((yyvsp[(2) - (2)].box)); }
    break;

  case 439:
#line 1844 "./sql3.y"
    { global_trans = (ST *) t_alloc_box (sizeof (sql_tree_t), DV_ARRAY_OF_POINTER); memset (global_trans, 0, box_length ((caddr_t)global_trans));}
    break;

  case 440:
#line 1845 "./sql3.y"
    { (yyval.tree) = global_trans; global_trans = NULL; }
    break;

  case 441:
#line 1850 "./sql3.y"
    { (yyval.intval) = 0; }
    break;

  case 442:
#line 1851 "./sql3.y"
    { (yyval.intval) = 0; }
    break;

  case 443:
#line 1852 "./sql3.y"
    { (yyval.intval) = 1; }
    break;

  case 444:
#line 1863 "./sql3.y"
    { (yyval.intval) = 0; }
    break;

  case 445:
#line 1864 "./sql3.y"
    { (yyval.intval) = 1; }
    break;

  case 446:
#line 1869 "./sql3.y"
    { (yyval.tree) = (ST*) (ptrlong) (yyvsp[(1) - (1)].intval); }
    break;

  case 447:
#line 1871 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (7, SELECT_TOP, (ptrlong) (yyvsp[(1) - (4)].intval), (yyvsp[(3) - (4)].box), t_box_num (0), /*$4, $5*/ 0, (ptrlong) (yyvsp[(4) - (4)].intval), NULL); }
    break;

  case 448:
#line 1873 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (7, SELECT_TOP, (ptrlong) (yyvsp[(1) - (6)].intval), (yyvsp[(4) - (6)].tree), t_box_num (0), /*$6, $7*/ 0, (ptrlong) (yyvsp[(6) - (6)].intval), NULL); }
    break;

  case 449:
#line 1875 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (7, SELECT_TOP, (ptrlong) (yyvsp[(1) - (6)].intval), (yyvsp[(5) - (6)].box), (yyvsp[(3) - (6)].box), /*$6, $7*/ 0, (ptrlong) (yyvsp[(6) - (6)].intval), NULL); }
    break;

  case 450:
#line 1877 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (7, SELECT_TOP, (ptrlong) (yyvsp[(1) - (8)].intval), (yyvsp[(6) - (8)].tree), (yyvsp[(4) - (8)].tree), /*$8, $9*/ 0, (ptrlong) (yyvsp[(8) - (8)].intval), NULL); }
    break;

  case 451:
#line 1878 "./sql3.y"
    { (yyval.tree) = t_listst (7, SELECT_TOP, NULL, NULL, NULL, NULL, NULL, (yyvsp[(1) - (1)].tree));}
    break;

  case 452:
#line 1880 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (7, SELECT_TOP, (ptrlong) (yyvsp[(1) - (7)].intval), t_box_num_and_zero (-1 * unbox((yyvsp[(6) - (7)].box))), (yyvsp[(3) - (7)].box), /*$6, $7*/ 0, (ptrlong) (yyvsp[(7) - (7)].intval), NULL); }
    break;

  case 453:
#line 1886 "./sql3.y"
    { ST ** asg = (ST **) t_list_to_array ((yyvsp[(4) - (9)].list));
		  ST ** cols = asg_col_list (asg);
		  ST ** vals = asg_val_list (asg);
		  (yyval.tree) = t_listst (6, UPDATE_POS, (yyvsp[(2) - (9)].strval), cols, vals, (yyvsp[(8) - (9)].box), (yyvsp[(9) - (9)].tree)); }
    break;

  case 454:
#line 1893 "./sql3.y"
    { (yyval.list) = NULL; }
    break;

  case 455:
#line 1894 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].box), NULL); }
    break;

  case 456:
#line 1896 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].box), NULL)); }
    break;

  case 457:
#line 1900 "./sql3.y"
    { (yyval.box) = t_listbox (2, (yyvsp[(1) - (3)].strval), sqlp_wrapper_sqlxml_assign((ST*)(yyvsp[(3) - (3)].tree))); }
    break;

  case 458:
#line 1905 "./sql3.y"
    {
		  ST **asg = (ST **) t_list_to_array ((yyvsp[(4) - (6)].list));
		  ST **cols = asg_col_list (asg);
		  ST **vals = asg_val_list (asg);
		  ST *table_exp = sqlp_infoschema_redirect (t_listst (9, TABLE_EXP,
		      t_list (1, t_box_copy_tree ((yyvsp[(2) - (6)].strval))), (yyvsp[(5) - (6)].tree), NULL, NULL, NULL, NULL, (yyvsp[(6) - (6)].tree), NULL));

		  (yyval.tree) = t_listst (5, UPDATE_SRC, (yyvsp[(2) - (6)].strval), cols, vals, table_exp);
		}
    break;

  case 459:
#line 1917 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 460:
#line 1918 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 464:
#line 1929 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 466:
#line 1936 "./sql3.y"
    { (yyval.subtok) = 0; }
    break;

  case 467:
#line 1937 "./sql3.y"
    { (yyval.subtok) = 1; }
    break;

  case 469:
#line 1943 "./sql3.y"
    { (yyval.tree) = t_listst (5, UNION_ST, (yyvsp[(1) - (5)].tree), (yyvsp[(5) - (5)].tree), (yyvsp[(4) - (5)].tree), sqlp_bunion_flag ((yyvsp[(1) - (5)].tree), (yyvsp[(5) - (5)].tree), (yyvsp[(2) - (5)].subtok))); }
    break;

  case 470:
#line 1945 "./sql3.y"
    { (yyval.tree) = t_listst (5, UNION_ALL_ST, (yyvsp[(1) - (6)].tree), (yyvsp[(6) - (6)].tree), (yyvsp[(5) - (6)].tree), sqlp_bunion_flag ((yyvsp[(1) - (6)].tree), (yyvsp[(6) - (6)].tree), (yyvsp[(2) - (6)].subtok))); }
    break;

  case 471:
#line 1947 "./sql3.y"
    { (yyval.tree) = t_listst (4, INTERSECT_ST, (yyvsp[(1) - (4)].tree), (yyvsp[(4) - (4)].tree), (yyvsp[(3) - (4)].tree)); }
    break;

  case 472:
#line 1949 "./sql3.y"
    { (yyval.tree) = t_listst (4, INTERSECT_ALL_ST, (yyvsp[(1) - (5)].tree), (yyvsp[(5) - (5)].tree), (yyvsp[(4) - (5)].tree)); }
    break;

  case 473:
#line 1951 "./sql3.y"
    { (yyval.tree) = t_listst (4, EXCEPT_ST, (yyvsp[(1) - (4)].tree), (yyvsp[(4) - (4)].tree), (yyvsp[(3) - (4)].tree)); }
    break;

  case 474:
#line 1953 "./sql3.y"
    { (yyval.tree) = t_listst (4, EXCEPT_ALL_ST, (yyvsp[(1) - (5)].tree), (yyvsp[(5) - (5)].tree), (yyvsp[(4) - (5)].tree)); }
    break;

  case 478:
#line 1963 "./sql3.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 480:
#line 1969 "./sql3.y"
    { (yyval.tree) = t_listst (5, UNION_ST, (yyvsp[(1) - (5)].tree), (yyvsp[(5) - (5)].tree), (yyvsp[(4) - (5)].tree), sqlp_bunion_flag ((yyvsp[(1) - (5)].tree), (yyvsp[(5) - (5)].tree), (yyvsp[(2) - (5)].subtok))); }
    break;

  case 481:
#line 1971 "./sql3.y"
    { (yyval.tree) = t_listst (5, UNION_ALL_ST, (yyvsp[(1) - (6)].tree), (yyvsp[(6) - (6)].tree), (yyvsp[(5) - (6)].tree), sqlp_bunion_flag ((yyvsp[(1) - (6)].tree), (yyvsp[(6) - (6)].tree), (yyvsp[(2) - (6)].subtok))); }
    break;

  case 482:
#line 1973 "./sql3.y"
    { (yyval.tree) = t_listst (4, INTERSECT_ST, (yyvsp[(1) - (4)].tree), (yyvsp[(4) - (4)].tree), (yyvsp[(3) - (4)].tree)); }
    break;

  case 483:
#line 1975 "./sql3.y"
    { (yyval.tree) = t_listst (4, INTERSECT_ALL_ST, (yyvsp[(1) - (5)].tree), (yyvsp[(5) - (5)].tree), (yyvsp[(4) - (5)].tree)); }
    break;

  case 484:
#line 1977 "./sql3.y"
    { (yyval.tree) = t_listst (4, EXCEPT_ST, (yyvsp[(1) - (4)].tree), (yyvsp[(4) - (4)].tree), (yyvsp[(3) - (4)].tree)); }
    break;

  case 485:
#line 1979 "./sql3.y"
    { (yyval.tree) = t_listst (4, EXCEPT_ALL_ST, (yyvsp[(1) - (5)].tree), (yyvsp[(5) - (5)].tree), (yyvsp[(4) - (5)].tree)); }
    break;

  case 487:
#line 1984 "./sql3.y"
    { (yyval.tree) = sqlp_embedded_xpath ((yyvsp[(2) - (2)].box)); }
    break;

  case 489:
#line 1989 "./sql3.y"
    { (yyval.tree) = sqlp_inline_order_by ((yyvsp[(2) - (4)].tree), (ST **) (yyvsp[(4) - (4)].box)); }
    break;

  case 490:
#line 1990 "./sql3.y"
    { (yyval.tree) = sqlp_embedded_xpath ((yyvsp[(2) - (2)].box)); }
    break;

  case 491:
#line 1994 "./sql3.y"
    { (yyval.tree) = sqlp_inline_order_by ((yyvsp[(3) - (5)].tree), (ST **) (yyvsp[(5) - (5)].box)); }
    break;

  case 492:
#line 1998 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 493:
#line 1999 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 494:
#line 2003 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 495:
#line 2005 "./sql3.y"
    { (yyval.tree) = (ST*) t_list_to_array ((yyvsp[(4) - (5)].list)); }
    break;

  case 496:
#line 2010 "./sql3.y"
    { (yyval.tree) = t_listst (5, SELECT_STMT, (yyvsp[(2) - (4)].tree),
		      sqlp_stars (sqlp_wrapper_sqlxml ((ST **) (yyvsp[(3) - (4)].tree)), (yyvsp[(4) - (4)].tree)->_.table_exp.from) , NULL, (yyvsp[(4) - (4)].tree));
		  sqlp_breakup ((yyval.tree)); }
    break;

  case 497:
#line 2018 "./sql3.y"
    { (yyval.tree) = t_listst (5, SELECT_STMT, (yyvsp[(2) - (4)].tree),
		      sqlp_stars (sqlp_wrapper_sqlxml ((ST **) (yyvsp[(3) - (4)].tree)), (yyvsp[(4) - (4)].tree)->_.table_exp.from) , NULL, (yyvsp[(4) - (4)].tree));
		  sqlp_breakup ((yyval.tree)); }
    break;

  case 498:
#line 2025 "./sql3.y"
    {
		  (yyval.tree) = t_listst (5, SELECT_STMT, NULL,
		      sqlp_stars (sqlp_wrapper_sqlxml ((ST **) (yyvsp[(3) - (3)].tree)), NULL) , NULL, NULL);
		  sqlp_breakup ((yyval.tree)); }
    break;

  case 499:
#line 2034 "./sql3.y"
    { (yyval.list) = dk_set_conc ((yyvsp[(2) - (3)].list), t_CONS (t_list (5, BOP_AS, (ptrlong) 1, NULL, t_box_string ("__brkup_cond"), NULL), NULL)); }
    break;

  case 500:
#line 2035 "./sql3.y"
    {
	  ST * cond = (ST*) t_list (5, BOP_AS, t_list (2, SEARCHED_CASE, t_list (4, (yyvsp[(4) - (5)].tree), (caddr_t)1,  t_list (2, QUOTE, NULL), 0)), NULL, t_box_string ("__brkup_cond"), NULL);
	  (yyval.list) = dk_set_conc ((yyvsp[(2) - (5)].list), t_CONS (cond, NULL)); }
    break;

  case 501:
#line 2041 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].list), NULL);}
    break;

  case 502:
#line 2042 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (2)].list), t_CONS ((yyvsp[(2) - (2)].list), NULL)); }
    break;

  case 503:
#line 2046 "./sql3.y"
    { (yyval.tree) = (ST *) t_list_to_array ((yyvsp[(1) - (1)].list)); }
    break;

  case 504:
#line 2047 "./sql3.y"
    { (yyval.tree) = (ST *) t_list_to_array (t_CONS (t_list (1, SELECT_BREAKUP), (yyvsp[(2) - (2)].list))); }
    break;

  case 505:
#line 2052 "./sql3.y"
    {
			ST ** group_by = 0;
			if ((yyvsp[(3) - (4)].tree))
			  group_by =  ((ST***)(yyvsp[(3) - (4)].tree))[0];
			(yyval.tree) = sqlp_infoschema_redirect (t_listst (9,
				TABLE_EXP, (yyvsp[(1) - (4)].tree), (yyvsp[(2) - (4)].tree), group_by, (yyvsp[(4) - (4)].tree), NULL, NULL, NULL, (yyvsp[(3) - (4)].tree)));
		}
    break;

  case 506:
#line 2064 "./sql3.y"
    {
			ST ** group_by = 0;
			if ((yyvsp[(3) - (7)].tree))
			  group_by =  ((ST***)(yyvsp[(3) - (7)].tree))[0];
			(yyval.tree) = sqlp_infoschema_redirect (t_listst (9,
				TABLE_EXP, (yyvsp[(1) - (7)].tree), (yyvsp[(2) - (7)].tree), group_by, (yyvsp[(4) - (7)].tree), (yyvsp[(5) - (7)].box), (ptrlong) (yyvsp[(6) - (7)].subtok), (yyvsp[(7) - (7)].tree), (yyvsp[(3) - (7)].tree)));
		}
    break;

  case 507:
#line 2074 "./sql3.y"
    { (yyval.tree) = (ST *) t_list_to_array ((yyvsp[(2) - (2)].list)); }
    break;

  case 508:
#line 2078 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].box), NULL); }
    break;

  case 509:
#line 2080 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].box), NULL)); }
    break;

  case 510:
#line 2085 "./sql3.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); }
    break;

  case 511:
#line 2086 "./sql3.y"
    { (yyval.list) =t_NCONC ((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].list)); }
    break;

  case 512:
#line 2092 "./sql3.y"
    { (yyval.tree) = (ST*) t_list_to_array ((yyvsp[(2) - (3)].list)); }
    break;

  case 513:
#line 2097 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (0); }
    break;

  case 514:
#line 2098 "./sql3.y"
    { (yyval.tree) = (ST *) t_list_to_array ((yyvsp[(1) - (1)].list)); }
    break;

  case 515:
#line 2103 "./sql3.y"
    { (yyval.box) = t_listbox (3, TABLE_REF,(yyvsp[(1) - (1)].strval), (caddr_t) NULL); }
    break;

  case 516:
#line 2105 "./sql3.y"
    {
		  (yyval.box) = t_listbox (3, DERIVED_TABLE, sqlp_view_def (NULL, (yyvsp[(2) - (4)].tree), 0), (yyvsp[(4) - (4)].box));
		}
    break;

  case 517:
#line 2109 "./sql3.y"
    {
		  (yyval.box) = t_listbox (3, DERIVED_TABLE, sqlp_view_def (NULL, (yyvsp[(2) - (5)].tree), 0), (yyvsp[(5) - (5)].box));
		}
    break;

  case 518:
#line 2113 "./sql3.y"
    { (yyval.box) = t_listbox (3, TABLE_REF,(yyvsp[(1) - (1)].tree), (caddr_t) NULL); }
    break;

  case 519:
#line 2115 "./sql3.y"
    {
		  (yyval.box) =  t_listbox (3, DERIVED_TABLE, t_list (4, PROC_TABLE, (yyvsp[(1) - (6)].strval), (yyvsp[(3) - (6)].tree), (yyvsp[(5) - (6)].tree)), (yyvsp[(6) - (6)].box));
		}
    break;

  case 520:
#line 2121 "./sql3.y"
    { (yyval.box) = t_listbox (3, TABLE_REF,(yyvsp[(1) - (1)].strval), (caddr_t) NULL); }
    break;

  case 521:
#line 2123 "./sql3.y"
    {
		  (yyval.box) = t_listbox (3, DERIVED_TABLE, sqlp_view_def (NULL, (yyvsp[(1) - (2)].tree), 0), (caddr_t) (yyvsp[(2) - (2)].box));
		}
    break;

  case 522:
#line 2127 "./sql3.y"
    {
		  (yyval.box) = t_listbox (3, DERIVED_TABLE, sqlp_view_def (NULL, (yyvsp[(1) - (3)].tree), 0), (caddr_t) (yyvsp[(3) - (3)].box));
		}
    break;

  case 523:
#line 2130 "./sql3.y"
    { (yyval.box) = (caddr_t) (yyvsp[(2) - (3)].tree); }
    break;

  case 524:
#line 2134 "./sql3.y"
    { (yyval.subtok) = J_INNER; }
    break;

  case 525:
#line 2135 "./sql3.y"
    { (yyval.subtok) = OJ_LEFT; }
    break;

  case 526:
#line 2136 "./sql3.y"
    { (yyval.subtok) = OJ_RIGHT; }
    break;

  case 527:
#line 2138 "./sql3.y"
    { (yyval.subtok) = OJ_FULL; }
    break;

  case 528:
#line 2139 "./sql3.y"
    { (yyval.subtok) = J_INNER; }
    break;

  case 529:
#line 2140 "./sql3.y"
    { (yyval.subtok) = J_CROSS; }
    break;

  case 532:
#line 2150 "./sql3.y"
    { (yyval.join).type = (yyvsp[(2) - (2)].subtok);
		  (yyval.join).natural = 1;
		}
    break;

  case 533:
#line 2154 "./sql3.y"
    { (yyval.join).type = (yyvsp[(1) - (1)].subtok);
		  (yyval.join).natural = 0;
		}
    break;

  case 534:
#line 2160 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 535:
#line 2161 "./sql3.y"
    { (yyval.tree) = (yyvsp[(2) - (3)].tree); }
    break;

  case 536:
#line 2162 "./sql3.y"
    { (yyval.tree) = (yyvsp[(2) - (3)].tree); }
    break;

  case 537:
#line 2167 "./sql3.y"
    {
		  (yyval.tree) = t_listst (6, JOINED_TABLE, (yyvsp[(2) - (5)].join).natural, (yyvsp[(2) - (5)].join).type,
			(yyvsp[(1) - (5)].box), (yyvsp[(4) - (5)].box), (yyvsp[(5) - (5)].tree));
		}
    break;

  case 538:
#line 2174 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 539:
#line 2175 "./sql3.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 540:
#line 2177 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (2, JC_USING, t_list_to_array ((yyvsp[(3) - (4)].list))); }
    break;

  case 541:
#line 2181 "./sql3.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 542:
#line 2185 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 543:
#line 2187 "./sql3.y"
    {
			(yyval.tree) = (ST*) t_list_to_array(t_CONS (t_list_to_array ((yyvsp[(3) - (3)].list)), NULL));
		}
    break;

  case 544:
#line 2191 "./sql3.y"
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
#line 2203 "./sql3.y"
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
#line 2237 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 547:
#line 2238 "./sql3.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 548:
#line 2242 "./sql3.y"
    { (yyval.subtok) = 0; }
    break;

  case 549:
#line 2243 "./sql3.y"
    { (yyval.subtok) = PL_EXCLUSIVE; }
    break;

  case 550:
#line 2244 "./sql3.y"
    { (yyval.subtok) = sqlp_xml_select_flags ((yyvsp[(3) - (3)].box), NULL); }
    break;

  case 551:
#line 2245 "./sql3.y"
    { (yyval.subtok) = sqlp_xml_select_flags ((yyvsp[(3) - (4)].box), (yyvsp[(4) - (4)].box)); }
    break;

  case 552:
#line 2252 "./sql3.y"
    { BIN_OP ((yyval.tree), BOP_OR, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)) }
    break;

  case 553:
#line 2254 "./sql3.y"
    { BIN_OP ((yyval.tree), BOP_AND, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)) }
    break;

  case 554:
#line 2256 "./sql3.y"
    { UN_OP ((yyval.tree), BOP_NOT, (yyvsp[(2) - (2)].tree)) }
    break;

  case 555:
#line 2257 "./sql3.y"
    { (yyval.tree) = (yyvsp[(2) - (3)].tree); }
    break;

  case 565:
#line 2274 "./sql3.y"
    {
		  ST *eq_op;
		  BIN_OP (eq_op, BOP_EQ, (ST *) t_box_num_and_zero (0), (yyvsp[(1) - (1)].tree));
		  NEGATE ((yyval.tree), eq_op);
                }
    break;

  case 566:
#line 2283 "./sql3.y"
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
#line 2306 "./sql3.y"
    { ST *copy = (ST *) t_box_copy_tree ((caddr_t) (yyvsp[(1) - (6)].tree));
		  ST *low_test;
		  ST *high_test;
		  BIN_OP (low_test, BOP_LT, (yyvsp[(1) - (6)].tree), (yyvsp[(4) - (6)].tree));
		  BIN_OP (high_test, BOP_GT, copy, (yyvsp[(6) - (6)].tree));
		  BIN_OP ((yyval.tree), BOP_OR, low_test, high_test);
		}
    break;

  case 568:
#line 2314 "./sql3.y"
    { ST *copy = (ST *) t_box_copy_tree ((caddr_t) (yyvsp[(1) - (5)].tree));
		  ST *low_test;
		  ST *high_test;
		  BIN_OP (low_test, BOP_GTE, (yyvsp[(1) - (5)].tree), (yyvsp[(3) - (5)].tree));
		  BIN_OP (high_test, BOP_LTE, copy, (yyvsp[(5) - (5)].tree));
		  BIN_OP ((yyval.tree), BOP_AND, low_test, high_test);
		}
    break;

  case 569:
#line 2325 "./sql3.y"
    { ST* tmp;
		  BIN_OP (tmp, BOP_LIKE, (yyvsp[(1) - (5)].tree), (ST *) (yyvsp[(4) - (5)].tree));
		  tmp->_.bin_exp.more = (yyvsp[(5) - (5)].box);
		  NEGATE ((yyval.tree), tmp);
		}
    break;

  case 570:
#line 2331 "./sql3.y"
    {
		  BIN_OP ((yyval.tree), BOP_LIKE, (yyvsp[(1) - (4)].tree), (ST *) (yyvsp[(3) - (4)].tree));
		  (yyval.tree)->_.bin_exp.more = (yyvsp[(4) - (4)].box);
		}
    break;

  case 571:
#line 2338 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 572:
#line 2340 "./sql3.y"
    {
		  if (!DV_STRINGP ((yyvsp[(2) - (2)].box)) || box_length ((yyvsp[(2) - (2)].box)) != 2)
		    yy_new_error ("Invalid escape character in LIKE", "37000", "SQ136");
		  (yyval.box) = (yyvsp[(2) - (2)].box);
	  	}
    break;

  case 573:
#line 2346 "./sql3.y"
    {
		  if (!DV_STRINGP ((yyvsp[(3) - (4)].box)) || box_length ((yyvsp[(3) - (4)].box)) != 2)
		    yy_new_error ("Invalid escape character in LIKE", "37000", "SQ136");
		  (yyval.box) = (yyvsp[(3) - (4)].box);
		}
    break;

  case 574:
#line 2355 "./sql3.y"
    { ST *tmp;
		  BIN_OP (tmp, BOP_NULL, (yyvsp[(1) - (4)].tree), NULL);
		  NEGATE ((yyval.tree), tmp);
		}
    break;

  case 575:
#line 2359 "./sql3.y"
    { BIN_OP ((yyval.tree), BOP_NULL, (yyvsp[(1) - (3)].tree), NULL); }
    break;

  case 576:
#line 2364 "./sql3.y"
    {
		  ST *in = NULL;
		  in = SUBQ_PRED (SOME_PRED, (yyvsp[(1) - (4)].tree), sqlp_wpar_nonselect ((yyvsp[(4) - (4)].tree)), BOP_EQ, NULL);
		  NEGATE ((yyval.tree), in);
		}
    break;

  case 577:
#line 2370 "./sql3.y"
    {
		  (yyval.tree) = SUBQ_PRED (SOME_PRED, (yyvsp[(1) - (3)].tree), sqlp_wpar_nonselect ((yyvsp[(3) - (3)].tree)), BOP_EQ, NULL); }
    break;

  case 578:
#line 2373 "./sql3.y"
    { (yyval.tree) = sqlp_in_exp ((yyvsp[(1) - (6)].tree), (yyvsp[(5) - (6)].list), 1);
		}
    break;

  case 579:
#line 2376 "./sql3.y"
    { (yyval.tree) = sqlp_in_exp ((yyvsp[(1) - (5)].tree), (yyvsp[(4) - (5)].list), 0);
		}
    break;

  case 580:
#line 2389 "./sql3.y"
    { (yyval.tree) = SUBQ_PRED ((yyvsp[(3) - (4)].intval), (yyvsp[(1) - (4)].tree), sqlp_wpar_nonselect ((yyvsp[(4) - (4)].tree)), (yyvsp[(2) - (4)].subtok), NULL); }
    break;

  case 581:
#line 2393 "./sql3.y"
    { (yyval.intval) = SOME_PRED; }
    break;

  case 582:
#line 2394 "./sql3.y"
    { (yyval.intval) = ALL_PRED; }
    break;

  case 583:
#line 2395 "./sql3.y"
    { (yyval.intval) = SOME_PRED; }
    break;

  case 584:
#line 2400 "./sql3.y"
    {
		  /* exists (select * ..) becomes exists (select 1 ...) */
		  ST * ext_subq = (yyvsp[(2) - (2)].tree);
		  ext_subq->_.select_stmt.selection = (caddr_t*) t_list (1, t_box_num (1));
		  ext_subq->_.select_stmt.top = NULL;
		  (yyval.tree) = (ST *) SUBQ_PRED (EXISTS_PRED, NULL, ext_subq, NULL, NULL); }
    break;

  case 585:
#line 2409 "./sql3.y"
    { (yyval.tree) = (ST *) t_list (2, SCALAR_SUBQ, sqlp_add_top_1 ((yyvsp[(1) - (1)].tree))); }
    break;

  case 586:
#line 2420 "./sql3.y"
    { (yyval.tree) = (yyvsp[(2) - (3)].tree); }
    break;

  case 587:
#line 2421 "./sql3.y"
    { (yyval.tree) = (yyvsp[(3) - (4)].tree); }
    break;

  case 588:
#line 2426 "./sql3.y"
    { BIN_OP ((yyval.tree), BOP_MINUS, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)) }
    break;

  case 589:
#line 2427 "./sql3.y"
    { BIN_OP ((yyval.tree), BOP_PLUS, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)) }
    break;

  case 590:
#line 2428 "./sql3.y"
    { BIN_OP ((yyval.tree), BOP_TIMES, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)) }
    break;

  case 591:
#line 2429 "./sql3.y"
    { BIN_OP ((yyval.tree), BOP_DIV, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)) }
    break;

  case 592:
#line 2430 "./sql3.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 593:
#line 2431 "./sql3.y"
    { if (sqlp_is_num_lit ((caddr_t)((yyvsp[(2) - (2)].tree)))) (yyval.tree) = sqlp_minus ((caddr_t)((yyvsp[(2) - (2)].tree)));
				          else BIN_OP ((yyval.tree), BOP_MINUS, (ST*) t_box_num (0), (yyvsp[(2) - (2)].tree)) }
    break;

  case 596:
#line 2435 "./sql3.y"
    { (yyval.tree) = (sql_tree_t *) (yyvsp[(1) - (1)].tree); }
    break;

  case 599:
#line 2441 "./sql3.y"
    { (yyval.tree) = (sql_tree_t *) (yyvsp[(1) - (1)].box); }
    break;

  case 602:
#line 2458 "./sql3.y"
    { (yyval.tree) = (yyvsp[(2) - (3)].tree); }
    break;

  case 603:
#line 2460 "./sql3.y"
    { dk_set_t exps = t_CONS ((yyvsp[(2) - (5)].tree), (yyvsp[(4) - (5)].list));
		  (yyval.tree) = t_listst (2, COMMA_EXP, t_list_to_array (exps));
		}
    break;

  case 616:
#line 2478 "./sql3.y"
    { (yyval.tree) = (sql_tree_t *) (yyvsp[(1) - (1)].box); }
    break;

  case 619:
#line 2495 "./sql3.y"
    { (yyval.tree) = (yyvsp[(2) - (3)].tree); }
    break;

  case 620:
#line 2497 "./sql3.y"
    { dk_set_t exps = t_CONS ((yyvsp[(2) - (5)].tree), (yyvsp[(4) - (5)].list));
		  (yyval.tree) = t_listst (2, COMMA_EXP, t_list_to_array (exps));
		}
    break;

  case 633:
#line 2516 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("_cvt"),
			t_list (2,
			  t_list (2, QUOTE, (yyvsp[(3) - (6)].tree)),
			  sqlp_wrapper_sqlxml_assign ((yyvsp[(5) - (6)].tree)) ) );
		}
    break;

  case 634:
#line 2524 "./sql3.y"
    { (yyval.strval) = NULL; }
    break;

  case 635:
#line 2525 "./sql3.y"
    { (yyval.strval) = (yyvsp[(2) - (2)].strval); }
    break;

  case 636:
#line 2530 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("_cvt"),
			t_list ((yyvsp[(6) - (7)].strval) == NULL ? 2 : 3, t_list (2, QUOTE, (yyvsp[(5) - (7)].tree)),
			sqlp_wrapper_sqlxml_assign ((yyvsp[(3) - (7)].tree)), (yyvsp[(6) - (7)].strval) ) );
		}
    break;

  case 637:
#line 2543 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (5, XML_COL, (yyvsp[(1) - (3)].box), (yyvsp[(2) - (3)].box), (yyvsp[(3) - (3)].box), XML_COL_ATTR); }
    break;

  case 638:
#line 2545 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (5, XML_COL, (yyvsp[(1) - (3)].box), (yyvsp[(2) - (3)].box), t_sym_string(""), sqlp_xml_col_directive ((yyvsp[(3) - (3)].box))); }
    break;

  case 639:
#line 2547 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (5, XML_COL, (yyvsp[(1) - (4)].box), (yyvsp[(2) - (4)].box), (yyvsp[(3) - (4)].box), sqlp_xml_col_directive ((yyvsp[(4) - (4)].box))); }
    break;

  case 640:
#line 2552 "./sql3.y"
    { (yyval.tree) = t_listst (5, BOP_AS, (yyvsp[(1) - (4)].tree), NULL, (yyvsp[(3) - (4)].box), (yyvsp[(4) - (4)].tree)); }
    break;

  case 641:
#line 2554 "./sql3.y"
    { (yyval.tree) = t_listst (5, BOP_AS, (yyvsp[(1) - (3)].tree), NULL, (yyvsp[(3) - (3)].box), NULL); }
    break;

  case 642:
#line 2556 "./sql3.y"
    { (yyval.tree) = t_listst (5, BOP_AS, (yyvsp[(1) - (2)].tree), NULL, (yyvsp[(2) - (2)].box), NULL); }
    break;

  case 643:
#line 2558 "./sql3.y"
    { (yyval.tree) = t_listst (6, BOP_AS, (yyvsp[(1) - (3)].tree), NULL, sqlp_xml_col_name ((yyvsp[(3) - (3)].tree)), NULL, (yyvsp[(3) - (3)].tree)); }
    break;

  case 644:
#line 2560 "./sql3.y"
    { (yyval.tree) = t_listst (5, BOP_AS, (yyvsp[(1) - (3)].tree), NULL, t_sym_string ((yyvsp[(3) - (3)].box)), NULL); }
    break;

  case 645:
#line 2562 "./sql3.y"
    { (yyval.tree) = t_listst (5, BOP_AS, (yyvsp[(1) - (2)].tree), NULL, t_sym_string ((yyvsp[(2) - (2)].box)), NULL); }
    break;

  case 646:
#line 2567 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("aref"),
		    t_list_to_array (t_CONS ((yyvsp[(1) - (2)].tree), (yyvsp[(2) - (2)].list))) ); }
    break;

  case 648:
#line 2574 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("aref"),
		    t_list_to_array (t_CONS ((yyvsp[(1) - (2)].tree), (yyvsp[(2) - (2)].list))) ); }
    break;

  case 649:
#line 2579 "./sql3.y"
    { (yyval.list) = NULL; }
    break;

  case 651:
#line 2587 "./sql3.y"
    { (yyval.box) = sqlp_proc_name (NULL, 0, NULL, 0, NULL, (yyvsp[(1) - (1)].box)); }
    break;

  case 652:
#line 2588 "./sql3.y"
    { (yyval.box) = sqlp_proc_name (NULL, 0, (yyvsp[(1) - (3)].box), box_length ((yyvsp[(1) - (3)].box)), NULL, (yyvsp[(3) - (3)].box)); }
    break;

  case 653:
#line 2589 "./sql3.y"
    { (yyval.box) = sqlp_proc_name ((yyvsp[(1) - (5)].box), box_length ((yyvsp[(1) - (5)].box)), (yyvsp[(3) - (5)].box), box_length ((yyvsp[(3) - (5)].box)), NULL, (yyvsp[(5) - (5)].box)); }
    break;

  case 654:
#line 2590 "./sql3.y"
    { (yyval.box) = sqlp_proc_name ((yyvsp[(1) - (7)].box), box_length ((yyvsp[(1) - (7)].box)), (yyvsp[(3) - (7)].box), box_length ((yyvsp[(3) - (7)].box)), (yyvsp[(5) - (7)].box), (yyvsp[(7) - (7)].box)); }
    break;

  case 655:
#line 2591 "./sql3.y"
    { (yyval.box) = sqlp_proc_name ((yyvsp[(1) - (4)].box), box_length ((yyvsp[(1) - (4)].box)), NULL, 0, NULL, (yyvsp[(4) - (4)].box)); }
    break;

  case 656:
#line 2592 "./sql3.y"
    { (yyval.box) = sqlp_proc_name ((yyvsp[(1) - (6)].box), box_length ((yyvsp[(1) - (6)].box)), NULL, 0, (yyvsp[(4) - (6)].box), (yyvsp[(6) - (6)].box)); }
    break;

  case 657:
#line 2593 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ("left"); }
    break;

  case 658:
#line 2594 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ("right"); }
    break;

  case 659:
#line 2595 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase ("log"); }
    break;

  case 660:
#line 2600 "./sql3.y"
    { (yyval.list) = t_CONS (t_list (3, KWD_PARAM, (yyvsp[(1) - (3)].box), (yyvsp[(3) - (3)].tree)), NULL);}
    break;

  case 661:
#line 2601 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (5)].list), t_CONS (t_list (3, KWD_PARAM, (yyvsp[(3) - (5)].box), (yyvsp[(5) - (5)].tree)), NULL)); }
    break;

  case 662:
#line 2606 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 663:
#line 2607 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 664:
#line 2608 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL));}
    break;

  case 665:
#line 2612 "./sql3.y"
    { (yyval.list) = NULL; }
    break;

  case 666:
#line 2613 "./sql3.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); }
    break;

  case 667:
#line 2614 "./sql3.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); }
    break;

  case 668:
#line 2615 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].list)); }
    break;

  case 669:
#line 2617 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].list)); }
    break;

  case 670:
#line 2618 "./sql3.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); }
    break;

  case 671:
#line 2623 "./sql3.y"
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
#line 2635 "./sql3.y"
    {
		  (yyval.tree) = t_listst (3, CALL_STMT,
		      t_sqlp_box_id_upcase ((yyvsp[(1) - (8)].subtok) == SQL_FN_TIMESTAMPADD ? "timestampadd" : "timestampdiff"),
		      t_listst (3, t_box_num((yyvsp[(3) - (8)].subtok)), (yyvsp[(5) - (8)].tree), (yyvsp[(7) - (8)].tree)));
		}
    break;

  case 673:
#line 2641 "./sql3.y"
    {
		  (yyval.tree) = t_listst (3, CALL_STMT,
		      t_sqlp_box_id_upcase ("__extract"),
		      t_listst (2, t_box_string ((yyvsp[(3) - (6)].box)), (yyvsp[(5) - (6)].tree)));
		}
    break;

  case 674:
#line 2647 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, (yyvsp[(2) - (6)].box), t_list_to_array ((yyvsp[(4) - (6)].list))); }
    break;

  case 675:
#line 2649 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("left"), t_list_to_array ((yyvsp[(4) - (6)].list))); }
    break;

  case 676:
#line 2651 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("right"), t_list_to_array ((yyvsp[(4) - (6)].list))); }
    break;

  case 677:
#line 2653 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("log"), t_list_to_array ((yyvsp[(4) - (6)].list))); }
    break;

  case 678:
#line 2655 "./sql3.y"
    {
		  if (stricmp ((yyvsp[(2) - (8)].box), "POSITION"))
		    yyerror ("syntax error");
		  (yyval.tree) = t_listst (3, CALL_STMT, (yyvsp[(2) - (8)].box),
		      t_listst (2, (yyvsp[(4) - (8)].tree), (yyvsp[(6) - (8)].tree)));
		}
    break;

  case 679:
#line 2662 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, (yyvsp[(2) - (6)].box), t_list_to_array ((yyvsp[(4) - (6)].list))); }
    break;

  case 680:
#line 2664 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, (yyvsp[(2) - (3)].box), t_list_to_array (NULL)); }
    break;

  case 681:
#line 2666 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
			t_sqlp_box_id_upcase ("get_user"), t_list_to_array ((yyvsp[(4) - (6)].list))); }
    break;

  case 682:
#line 2669 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
			t_sqlp_box_id_upcase ("chr"), t_list_to_array ((yyvsp[(4) - (6)].list))); }
    break;

  case 683:
#line 2672 "./sql3.y"
    {
		  (yyval.tree) = t_listst (3, CALL_STMT,
		      t_sqlp_box_id_upcase ((yyvsp[(2) - (10)].subtok) == SQL_FN_TIMESTAMPADD ? "timestampadd" : "timestampdiff"),
		      t_listst (3, t_box_num((yyvsp[(4) - (10)].subtok)), (yyvsp[(6) - (10)].tree), (yyvsp[(8) - (10)].tree)));
		}
    break;

  case 684:
#line 2678 "./sql3.y"
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
#line 2687 "./sql3.y"
    {
		  (yyval.tree) = t_listst (3, CALL_STMT,
		      t_sqlp_box_id_upcase ("__extract"),
		      t_listst (2, t_box_string ((yyvsp[(4) - (8)].box)), (yyvsp[(6) - (8)].tree)));
		}
    break;

  case 686:
#line 2693 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, t_list (1, (yyvsp[(3) - (7)].tree)),
			t_list_to_array ((yyvsp[(6) - (7)].list))); }
    break;

  case 687:
#line 2696 "./sql3.y"
    {
		  (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("curdate"), t_list (0));
		}
    break;

  case 688:
#line 2700 "./sql3.y"
    {
		  (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("curtime"), t_list (0));
		}
    break;

  case 689:
#line 2704 "./sql3.y"
    {
		  (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("curtime"), t_list (1, (yyvsp[(3) - (4)].tree)));
		}
    break;

  case 690:
#line 2708 "./sql3.y"
    {
		  (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("curdatetime"), t_list (0));
		}
    break;

  case 691:
#line 2712 "./sql3.y"
    {
		  (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("curdatetime"), t_list (1, (yyvsp[(3) - (4)].tree)));
		}
    break;

  case 692:
#line 2716 "./sql3.y"
    {
		  caddr_t bit = t_box_num (0);
		  caddr_t bit_index = t_box_num (0);
		  (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("__grouping"), t_list (3, (yyvsp[(3) - (4)].tree), bit, bit_index));
		}
    break;

  case 693:
#line 2726 "./sql3.y"
    { (yyval.tree) = t_listst (4, CALL_STMT, (yyvsp[(2) - (3)].strval), t_list_to_array (NULL), (yyvsp[(1) - (3)].box)); }
    break;

  case 694:
#line 2728 "./sql3.y"
    { (yyval.tree) = t_listst (4, CALL_STMT, (yyvsp[(2) - (6)].strval), t_list_to_array ((yyvsp[(4) - (6)].list)), (yyvsp[(1) - (6)].box)); }
    break;

  case 695:
#line 2748 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
			t_sqlp_box_id_upcase (obe_keyword_to_bif_fun_name ((yyvsp[(2) - (4)].box))),
			t_list (1, (yyvsp[(3) - (4)].box)));
		}
    break;

  case 696:
#line 2753 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (3, CALL_STMT, t_sqlp_box_id_upcase ("get_keyword"),
				   t_list (2, (yyvsp[(2) - (3)].box), t_list (3, COL_DOTTED, NULL, t_sqlp_box_id_upcase ("params")))); }
    break;

  case 697:
#line 2758 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 698:
#line 2759 "./sql3.y"
    { t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 699:
#line 2763 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 700:
#line 2764 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 701:
#line 2765 "./sql3.y"
    { t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 702:
#line 2766 "./sql3.y"
    { t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 705:
#line 2772 "./sql3.y"
    { (yyval.box) = t_listbox (3, CALL_STMT,
				t_sqlp_box_id_upcase ("get_user"), t_list (0)); }
    break;

  case 707:
#line 2778 "./sql3.y"
    { (yyval.box) = (caddr_t) (yyvsp[(1) - (1)].tree); }
    break;

  case 708:
#line 2783 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (2, SIMPLE_CASE,
			t_list_to_array (t_CONS ((yyvsp[(2) - (4)].tree), (yyvsp[(3) - (4)].list)))); }
    break;

  case 709:
#line 2789 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (2, SEARCHED_CASE, t_list_to_array ((yyvsp[(2) - (3)].list))); }
    break;

  case 710:
#line 2793 "./sql3.y"
    { (yyval.list) =  (yyvsp[(1) - (1)].list); }
    break;

  case 711:
#line 2794 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].list)); }
    break;

  case 712:
#line 2798 "./sql3.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); }
    break;

  case 713:
#line 2799 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].list)); }
    break;

  case 714:
#line 2804 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(2) - (4)].tree), t_CONS ((yyvsp[(4) - (4)].tree), NULL)); }
    break;

  case 715:
#line 2806 "./sql3.y"
    { (yyval.list) = t_CONS ( t_list (2, QUOTE, NULL), t_CONS ((yyvsp[(2) - (2)].tree), NULL)); }
    break;

  case 716:
#line 2811 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(2) - (4)].tree), t_CONS ((yyvsp[(4) - (4)].tree), NULL)); }
    break;

  case 717:
#line 2813 "./sql3.y"
    { (yyval.list) = t_CONS ( t_list (2, QUOTE, NULL), t_CONS ((yyvsp[(2) - (2)].tree), NULL)); }
    break;

  case 718:
#line 2818 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (2, COALESCE_EXP, t_list_to_array ((yyvsp[(3) - (4)].list))); }
    break;

  case 719:
#line 2823 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (2, SIMPLE_CASE,
		  	t_list (5, (yyvsp[(3) - (6)].tree), (yyvsp[(5) - (6)].tree), t_alloc_box (0, DV_DB_NULL),
			t_list (2, QUOTE, NULL), t_box_copy_tree ((caddr_t) (yyvsp[(3) - (6)].tree)))); }
    break;

  case 721:
#line 2831 "./sql3.y"
    { (yyval.box) = t_listbox (3, PARAM_WITH_IND, (yyvsp[(1) - (2)].box), (yyvsp[(2) - (2)].box)); }
    break;

  case 722:
#line 2833 "./sql3.y"
    { (yyval.box) = t_listbox (3, PARAM_WITH_IND, (yyvsp[(1) - (3)].box), (yyvsp[(3) - (3)].box)); }
    break;

  case 723:
#line 2838 "./sql3.y"
    {
		  ST **arglist = (ST **)(t_list_to_array ((yyvsp[(4) - (5)].list)));
		  (yyval.tree) = sqlp_make_user_aggregate_fun_ref ((yyvsp[(2) - (5)].box), arglist, 1);
		}
    break;

  case 724:
#line 2843 "./sql3.y"
    { FN_REF ((yyval.tree), (yyvsp[(1) - (5)].subtok), 1, (yyvsp[(4) - (5)].tree)) }
    break;

  case 725:
#line 2844 "./sql3.y"
    { FN_REF ((yyval.tree), (yyvsp[(1) - (5)].subtok), 0, (yyvsp[(4) - (5)].tree)) }
    break;

  case 726:
#line 2845 "./sql3.y"
    { FN_REF ((yyval.tree), (yyvsp[(1) - (4)].subtok), 0, (yyvsp[(3) - (4)].tree)) }
    break;

  case 734:
#line 2856 "./sql3.y"
    { (yyval.box) = (caddr_t) t_NULLCONST; }
    break;

  case 735:
#line 2857 "./sql3.y"
    { (yyval.box) = ((caddr_t *)(yyvsp[(3) - (3)].tree))[0]; }
    break;

  case 736:
#line 2858 "./sql3.y"
    { (yyval.box) = (caddr_t) DV_XML_ENTITY; }
    break;

  case 737:
#line 2859 "./sql3.y"
    { (yyval.box) = (caddr_t) DV_RDF; }
    break;

  case 738:
#line 2860 "./sql3.y"
    { (yyval.box) = (caddr_t) DV_ARRAY_OF_POINTER; }
    break;

  case 743:
#line 2868 "./sql3.y"
    { (yyval.box) = t_box_num_and_zero (-1 * unbox ((yyvsp[(2) - (2)].box))); }
    break;

  case 744:
#line 2869 "./sql3.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 746:
#line 2872 "./sql3.y"
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
#line 2885 "./sql3.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 749:
#line 2887 "./sql3.y"
    { (yyval.box) = (caddr_t) t_NULLCONST; }
    break;

  case 750:
#line 2899 "./sql3.y"
    { (yyval.strval) = sqlp_table_name (NULL, 0, NULL, 0, (yyvsp[(1) - (1)].box), 1); }
    break;

  case 751:
#line 2900 "./sql3.y"
    { (yyval.strval) = sqlp_table_name (NULL, 0, (yyvsp[(1) - (3)].box), box_length ((yyvsp[(1) - (3)].box)), (yyvsp[(3) - (3)].box), 1); }
    break;

  case 752:
#line 2901 "./sql3.y"
    { (yyval.strval) = sqlp_table_name ((yyvsp[(1) - (5)].box), box_length ((yyvsp[(1) - (5)].box)), (yyvsp[(3) - (5)].box), box_length ((yyvsp[(3) - (5)].box)), (yyvsp[(5) - (5)].box), 1); }
    break;

  case 753:
#line 2902 "./sql3.y"
    { (yyval.strval) = sqlp_table_name ((yyvsp[(1) - (4)].box), box_length ((yyvsp[(1) - (4)].box)), NULL, 0, (yyvsp[(4) - (4)].box), 1); }
    break;

  case 754:
#line 2906 "./sql3.y"
    { (yyval.strval) = sqlp_table_name (NULL, 0, NULL, 0, (yyvsp[(1) - (1)].box), 0); }
    break;

  case 755:
#line 2907 "./sql3.y"
    { (yyval.strval) = sqlp_table_name (NULL, 0, (yyvsp[(1) - (3)].box), box_length ((yyvsp[(1) - (3)].box)), (yyvsp[(3) - (3)].box), 0); }
    break;

  case 756:
#line 2908 "./sql3.y"
    { (yyval.strval) = sqlp_table_name ((yyvsp[(1) - (5)].box), box_length ((yyvsp[(1) - (5)].box)), (yyvsp[(3) - (5)].box), box_length ((yyvsp[(3) - (5)].box)), (yyvsp[(5) - (5)].box), 0); }
    break;

  case 757:
#line 2909 "./sql3.y"
    { (yyval.strval) = sqlp_table_name ((yyvsp[(1) - (4)].box), box_length ((yyvsp[(1) - (4)].box)), NULL, 0, (yyvsp[(4) - (4)].box), 0); }
    break;

  case 758:
#line 2913 "./sql3.y"
    { (yyval.strval) = (bif_find((yyvsp[(1) - (1)].box)) ? (yyvsp[(1) - (1)].box) : sqlp_new_table_name (NULL, 0, NULL, 0, (yyvsp[(1) - (1)].box))); }
    break;

  case 759:
#line 2914 "./sql3.y"
    { (yyval.strval) = sqlp_new_table_name (NULL, 0, (yyvsp[(1) - (3)].box), box_length ((yyvsp[(1) - (3)].box)), (yyvsp[(3) - (3)].box)); }
    break;

  case 760:
#line 2915 "./sql3.y"
    { (yyval.strval) = sqlp_new_table_name ((yyvsp[(1) - (5)].box), box_length ((yyvsp[(1) - (5)].box)), (yyvsp[(3) - (5)].box), box_length ((yyvsp[(3) - (5)].box)), (yyvsp[(5) - (5)].box)); }
    break;

  case 761:
#line 2916 "./sql3.y"
    { (yyval.strval) = sqlp_new_table_name ((yyvsp[(1) - (4)].box), box_length ((yyvsp[(1) - (4)].box)), NULL, 0, (yyvsp[(4) - (4)].box)); }
    break;

  case 762:
#line 2920 "./sql3.y"
    { (yyval.strval) = sqlp_new_table_name (NULL, 0, NULL, 0, (yyvsp[(1) - (1)].box)); }
    break;

  case 763:
#line 2921 "./sql3.y"
    { (yyval.strval) = sqlp_new_table_name (NULL, 0, (yyvsp[(1) - (3)].box), box_length ((yyvsp[(1) - (3)].box)), (yyvsp[(3) - (3)].box)); }
    break;

  case 764:
#line 2922 "./sql3.y"
    { (yyval.strval) = sqlp_new_table_name ((yyvsp[(1) - (5)].box), box_length ((yyvsp[(1) - (5)].box)), (yyvsp[(3) - (5)].box), box_length ((yyvsp[(3) - (5)].box)), (yyvsp[(5) - (5)].box)); }
    break;

  case 765:
#line 2923 "./sql3.y"
    { (yyval.strval) = sqlp_new_table_name ((yyvsp[(1) - (4)].box), box_length ((yyvsp[(1) - (4)].box)), NULL, 0, (yyvsp[(4) - (4)].box)); }
    break;

  case 766:
#line 2928 "./sql3.y"
    { (yyval.strval) = t_listbox (6, TABLE_DOTTED, (yyvsp[(1) - (2)].strval), NULL, sqlp_view_u_id (), sqlp_view_g_id (), (yyvsp[(2) - (2)].tree)); }
    break;

  case 767:
#line 2930 "./sql3.y"
    {
		  (yyval.strval) = t_listbox (6, TABLE_DOTTED, (yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].box), sqlp_view_u_id (), sqlp_view_g_id (), (yyvsp[(4) - (4)].tree));
		}
    break;

  case 768:
#line 2934 "./sql3.y"
    {
		  (yyval.strval) = t_listbox (6, TABLE_DOTTED, (yyvsp[(1) - (3)].strval), (yyvsp[(2) - (3)].box), sqlp_view_u_id (), sqlp_view_g_id (), (yyvsp[(3) - (3)].tree));
		}
    break;

  case 769:
#line 2942 "./sql3.y"
    { (yyval.tree) = t_listst (3, COL_DOTTED, NULL, (yyvsp[(1) - (1)].box));
		}
    break;

  case 770:
#line 2945 "./sql3.y"
    { (yyval.tree) = t_listst (3, COL_DOTTED, c_pref (NULL, 0, NULL, 0, (yyvsp[(1) - (3)].box)), (yyvsp[(3) - (3)].box));
		}
    break;

  case 771:
#line 2948 "./sql3.y"
    { (yyval.tree) = t_listst (3, COL_DOTTED, c_pref (NULL, 0, (yyvsp[(1) - (5)].box), box_length ((yyvsp[(1) - (5)].box)), (yyvsp[(3) - (5)].box)), (yyvsp[(5) - (5)].box));
		}
    break;

  case 772:
#line 2951 "./sql3.y"
    { (yyval.tree) = t_listst (3, COL_DOTTED, c_pref ((yyvsp[(1) - (7)].box), box_length ((yyvsp[(1) - (7)].box)), (yyvsp[(3) - (7)].box), box_length ((yyvsp[(3) - (7)].box)), (yyvsp[(5) - (7)].box)), (yyvsp[(7) - (7)].box));
		}
    break;

  case 773:
#line 2954 "./sql3.y"
    { (yyval.tree) = t_listst (3, COL_DOTTED, c_pref ((yyvsp[(1) - (6)].box), box_length ((yyvsp[(1) - (6)].box)), NULL, 0, (yyvsp[(4) - (6)].box)), (yyvsp[(6) - (6)].box));
		}
    break;

  case 774:
#line 2957 "./sql3.y"
    { (yyval.tree) = t_listst (3, COL_DOTTED, (long) 0, STAR);
		}
    break;

  case 775:
#line 2960 "./sql3.y"
    { (yyval.tree) = t_listst (3, COL_DOTTED, c_pref (NULL, 0, NULL, 0, (yyvsp[(1) - (3)].box)), STAR);
		}
    break;

  case 776:
#line 2963 "./sql3.y"
    { (yyval.tree) = t_listst (3, COL_DOTTED, c_pref (NULL, 0, (yyvsp[(1) - (5)].box), box_length ((yyvsp[(1) - (5)].box)), (yyvsp[(3) - (5)].box)), STAR);
		}
    break;

  case 777:
#line 2966 "./sql3.y"
    { (yyval.tree) = t_listst (3, COL_DOTTED, c_pref ((yyvsp[(1) - (7)].box), box_length ((yyvsp[(1) - (7)].box)), (yyvsp[(3) - (7)].box), box_length ((yyvsp[(3) - (7)].box)), (yyvsp[(5) - (7)].box)), STAR);
		}
    break;

  case 778:
#line 2969 "./sql3.y"
    { (yyval.tree) = t_listst (3, COL_DOTTED, c_pref ((yyvsp[(1) - (6)].box), box_length ((yyvsp[(1) - (6)].box)), NULL, 0, (yyvsp[(4) - (6)].box)), STAR);
		}
    break;

  case 779:
#line 2976 "./sql3.y"
    { (yyval.tree) = sqlp_numeric (0, 0);
		}
    break;

  case 780:
#line 2979 "./sql3.y"
    { (yyval.tree) = sqlp_numeric ((yyvsp[(3) - (4)].box), 0);
		}
    break;

  case 781:
#line 2982 "./sql3.y"
    { (yyval.tree) = sqlp_numeric ((yyvsp[(3) - (6)].box), (yyvsp[(5) - (6)].box));
		}
    break;

  case 782:
#line 2985 "./sql3.y"
    { (yyval.tree) = sqlp_numeric (0, 0);
		}
    break;

  case 783:
#line 2988 "./sql3.y"
    { (yyval.tree) = sqlp_numeric ((yyvsp[(3) - (4)].box), 0);
		}
    break;

  case 784:
#line 2991 "./sql3.y"
    { (yyval.tree) = sqlp_numeric ((yyvsp[(3) - (6)].box), (yyvsp[(5) - (6)].box));
		}
    break;

  case 785:
#line 2994 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_LONG_INT, (long) 0);
		}
    break;

  case 786:
#line 2997 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_SHORT_INT, (long) 0);
		}
    break;

  case 787:
#line 3000 "./sql3.y"
    { (yyval.tree) = t_listst (3, (ptrlong) DV_INT64, t_box_num (19), t_box_num (0));
		}
    break;

  case 788:
#line 3003 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_DOUBLE_FLOAT, (long) 0);
		}
    break;

  case 789:
#line 3006 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_DOUBLE_FLOAT, (long) 0);
		}
    break;

  case 790:
#line 3009 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_SINGLE_FLOAT, (long) 0);
		}
    break;

  case 791:
#line 3012 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_DOUBLE_FLOAT, (long) 0);
		}
    break;

  case 792:
#line 3015 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_BLOB, t_box_num (0x7fffffff));
		}
    break;

  case 793:
#line 3018 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_BLOB_BIN, t_box_num (0x7fffffff));
		}
    break;

  case 794:
#line 3021 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_BIN, (long) 0);
		}
    break;

  case 795:
#line 3024 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_BIN, (yyvsp[(3) - (4)].box));
		}
    break;

  case 796:
#line 3027 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_BIN, (yyvsp[(3) - (4)].box));
		}
    break;

  case 797:
#line 3030 "./sql3.y"
    { (yyval.tree) = t_listst (3, (long) DV_TIMESTAMP, (long) 10, (long) 6);
		}
    break;

  case 798:
#line 3033 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_DATETIME, (long) 19);
		}
    break;

  case 799:
#line 3036 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_TIME, (long) 8);
		}
    break;

  case 800:
#line 3039 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_DATE, (long) 10);
		}
    break;

  case 801:
#line 3042 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_WIDE, (long) 1);
		}
    break;

  case 802:
#line 3045 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_WIDE, (yyvsp[(3) - (4)].box));
		}
    break;

  case 803:
#line 3048 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_WIDE, (long) 0);
		}
    break;

  case 804:
#line 3051 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_WIDE, (yyvsp[(3) - (4)].box));
		}
    break;

  case 805:
#line 3054 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_BLOB_WIDE, t_box_num (0x7fffffff));
		}
    break;

  case 806:
#line 3057 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_ANY, (long) 0); }
    break;

  case 807:
#line 3059 "./sql3.y"
    {
		  assert_ms_compat("Columns of type ANY (length) may be created only in MS-compatibility mode");
		  (yyval.tree) = t_listst (2, (long) DV_ANY, (long) 0);
		}
    break;

  case 808:
#line 3064 "./sql3.y"
    { (yyval.tree) = t_listst (2, (ptrlong) DV_IRI_ID, (yyvsp[(3) - (4)].box));
		}
    break;

  case 809:
#line 3067 "./sql3.y"
    { (yyval.tree) = t_listst (2, (ptrlong) DV_IRI_ID, (ptrlong)12); /* #i+10digits */
		}
    break;

  case 810:
#line 3070 "./sql3.y"
    { (yyval.tree) = t_listst (2, (ptrlong) DV_IRI_ID_8, (ptrlong)22); /* #i+20digits */
		}
    break;

  case 812:
#line 3077 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_LONG_STRING, (long) 1);
		}
    break;

  case 813:
#line 3080 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_LONG_STRING, (long) 0);
		}
    break;

  case 814:
#line 3083 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_LONG_STRING, (yyvsp[(3) - (4)].box));
		}
    break;

  case 815:
#line 3086 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_LONG_STRING, (yyvsp[(3) - (4)].box));
		}
    break;

  case 816:
#line 3091 "./sql3.y"
    { (yyval.box) = t_box_num (0x7fffffff); }
    break;

  case 817:
#line 3092 "./sql3.y"
    { (yyval.box) = (yyvsp[(3) - (4)].box); }
    break;

  case 818:
#line 3097 "./sql3.y"
    {
		  (yyval.tree) = t_listst (5, (long) DV_ARRAY_OF_POINTER, (yyvsp[(2) - (2)].box), 0, 0, (yyvsp[(1) - (2)].tree));
		}
    break;

  case 819:
#line 3100 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 820:
#line 3101 "./sql3.y"
    { (yyval.tree) = t_listst (4, (long) DV_OBJECT, 0, 0, (yyvsp[(1) - (1)].strval)); }
    break;

  case 822:
#line 3107 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_LONG_STRING, (long) 1);
		}
    break;

  case 823:
#line 3110 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_LONG_STRING, (long) 0);
		}
    break;

  case 824:
#line 3113 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_LONG_STRING, (yyvsp[(3) - (4)].box));
		}
    break;

  case 825:
#line 3116 "./sql3.y"
    { (yyval.tree) = t_listst (2, (long) DV_LONG_STRING, (yyvsp[(3) - (4)].box));
		}
    break;

  case 826:
#line 3119 "./sql3.y"
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
#line 3129 "./sql3.y"
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
#line 3139 "./sql3.y"
    {
		  (yyval.tree) = t_listst (4, (long) DV_BLOB, t_box_num (0x7fffffff), NULL, t_box_string ("DB.DBA.__ANY"));
		}
    break;

  case 829:
#line 3143 "./sql3.y"
    { (yyval.tree) = t_listst (5, (long) DV_BLOB, t_box_num (0x7fffffff), NULL, NULL,
		    t_list (2, t_box_string ("xml_col"), t_box_string ("1")));
		}
    break;

  case 830:
#line 3150 "./sql3.y"
    {
		  if (strchr ((yyvsp[(1) - (1)].box), '.'))
		    yy_new_error ("Dots not allowed inside column names", "37000", "SQ137");
		  else
		    (yyval.strval) = (yyvsp[(1) - (1)].box);
		}
    break;

  case 831:
#line 3158 "./sql3.y"
    {
		  assert_ms_compat("Qualified column names are allowed only in MS-compatibility mode.");
		  (yyval.strval) = (yyvsp[(7) - (7)].box);
		}
    break;

  case 832:
#line 3165 "./sql3.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].box); }
    break;

  case 833:
#line 3169 "./sql3.y"
    { (yyval.box) = (yyvsp[(1) - (1)].box); }
    break;

  case 834:
#line 3173 "./sql3.y"
    { (yyval.box) = (yyvsp[(1) - (1)].box); }
    break;

  case 835:
#line 3174 "./sql3.y"
    { (yyval.box) = (yyvsp[(1) - (1)].box); }
    break;

  case 836:
#line 3184 "./sql3.y"
    { (yyval.box) = (yyvsp[(1) - (1)].box); }
    break;

  case 837:
#line 3188 "./sql3.y"
    { (yyval.tree) = (ST *) 0; }
    break;

  case 838:
#line 3189 "./sql3.y"
    { (yyval.tree) = (ST *) (yyvsp[(1) - (1)].box); }
    break;

  case 839:
#line 3193 "./sql3.y"
    { (yyval.tree) = (ST *) 0; }
    break;

  case 840:
#line 3194 "./sql3.y"
    { (yyval.tree) = (ST *) (yyvsp[(2) - (2)].box); }
    break;

  case 841:
#line 3199 "./sql3.y"
    { (yyval.tree) = t_listst (4, OP_SHUTDOWN, (yyvsp[(2) - (2)].tree), NULL, NULL); }
    break;

  case 842:
#line 3201 "./sql3.y"
    { (yyval.tree) = t_listst (4, OP_CHECKPOINT, (yyvsp[(2) - (2)].tree), NULL, NULL); }
    break;

  case 843:
#line 3203 "./sql3.y"
    { (yyval.tree) = t_listst (4, OP_CHECKPOINT, (yyvsp[(2) - (3)].box), (yyvsp[(3) - (3)].box), NULL); }
    break;

  case 844:
#line 3205 "./sql3.y"
    { (yyval.tree) = t_listst (4, OP_BACKUP, (yyvsp[(2) - (2)].box), NULL, NULL); }
    break;

  case 845:
#line 3207 "./sql3.y"
    { (yyval.tree) = t_listst (4, OP_CHECK, NULL, NULL, NULL); }
    break;

  case 846:
#line 3209 "./sql3.y"
    { (yyval.tree) = t_listst (4, OP_SYNC_REPL, (yyvsp[(3) - (4)].tree), (yyvsp[(4) - (4)].tree), NULL); }
    break;

  case 847:
#line 3211 "./sql3.y"
    { (yyval.tree) = t_listst (4, OP_DISC_REPL, (yyvsp[(3) - (3)].tree), NULL, NULL); }
    break;

  case 848:
#line 3213 "./sql3.y"
    { (yyval.tree) = t_listst (4, OP_LOG_ON, NULL, NULL, NULL); }
    break;

  case 849:
#line 3215 "./sql3.y"
    { (yyval.tree) = t_listst (4, OP_LOG_OFF, NULL, NULL, NULL); }
    break;

  case 857:
#line 3248 "./sql3.y"
    {
		  (yyval.tree) = t_listst (9, USER_AGGREGATE_DECL, (yyvsp[(3) - (13)].strval), (yyvsp[(4) - (13)].box), (yyvsp[(5) - (13)].tree),
				 (yyvsp[(7) - (13)].strval), (yyvsp[(9) - (13)].strval), (yyvsp[(11) - (13)].strval), (yyvsp[(12) - (13)].box), (yyvsp[(13) - (13)].box) );
		}
    break;

  case 858:
#line 3255 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 859:
#line 3256 "./sql3.y"
    { (yyval.box) = (yyvsp[(2) - (2)].strval); }
    break;

  case 860:
#line 3260 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 861:
#line 3261 "./sql3.y"
    { (yyval.box) = (caddr_t)1; }
    break;

  case 862:
#line 3267 "./sql3.y"
    { (yyval.tree) = t_listst (7, ROUTINE_DECL, (ptrlong) (yyvsp[(2) - (7)].subtok), (yyvsp[(3) - (7)].strval), (yyvsp[(4) - (7)].box), (yyvsp[(5) - (7)].tree), (yyvsp[(7) - (7)].tree), (yyvsp[(6) - (7)].box)); }
    break;

  case 863:
#line 3270 "./sql3.y"
    {
		  (yyval.tree) = t_listst (8, REMOTE_ROUTINE_DECL, (ptrlong) (yyvsp[(2) - (9)].subtok), (yyvsp[(3) - (9)].strval), (yyvsp[(4) - (9)].box), (yyvsp[(5) - (9)].tree), (yyvsp[(7) - (9)].box), (yyvsp[(9) - (9)].box), (yyvsp[(6) - (9)].box));
		}
    break;

  case 864:
#line 3275 "./sql3.y"
    { (yyval.tree) = sqlp_udt_create_external_proc ((ptrlong) (yyvsp[(2) - (12)].subtok), (yyvsp[(3) - (12)].strval),
		    (yyvsp[(4) - (12)].box), (yyvsp[(5) - (12)].tree), (yyvsp[(6) - (12)].box), (ptrlong) (yyvsp[(8) - (12)].intval), (yyvsp[(11) - (12)].box), (ST **) (yyvsp[(12) - (12)].tree)); }
    break;

  case 865:
#line 3283 "./sql3.y"
    { (yyval.tree) = t_listst (7, ROUTINE_DECL, (ptrlong) (yyvsp[(1) - (6)].subtok), (yyvsp[(2) - (6)].box), (yyvsp[(3) - (6)].box), (yyvsp[(4) - (6)].tree), (yyvsp[(6) - (6)].tree), (yyvsp[(5) - (6)].box)); }
    break;

  case 866:
#line 3288 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (2)].tree), NULL); }
    break;

  case 867:
#line 3290 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(2) - (3)].tree), NULL)); }
    break;

  case 868:
#line 3295 "./sql3.y"
    {
		  (yyval.tree) = t_listst (3, MODULE_DECL, (yyvsp[(3) - (6)].strval), t_list_to_array ((yyvsp[(5) - (6)].list)));
		}
    break;

  case 869:
#line 3301 "./sql3.y"
    { (yyval.subtok) = FUNCTION; }
    break;

  case 870:
#line 3302 "./sql3.y"
    { (yyval.subtok) = PROCEDURE; }
    break;

  case 871:
#line 3306 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 872:
#line 3307 "./sql3.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 873:
#line 3311 "./sql3.y"
    { (yyval.box) = (caddr_t) t_list (0); }
    break;

  case 874:
#line 3312 "./sql3.y"
    { (yyval.box) = t_list_to_array_box ((yyvsp[(2) - (3)].list)); }
    break;

  case 875:
#line 3317 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 876:
#line 3319 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 877:
#line 3324 "./sql3.y"
    { (yyval.tree) = t_listst (6, LOCAL_VAR, (ptrlong) (yyvsp[(1) - (4)].subtok), (yyvsp[(2) - (4)].tree), (yyvsp[(3) - (4)].tree), NULL, (yyvsp[(4) - (4)].box)); }
    break;

  case 878:
#line 3326 "./sql3.y"
    { (yyval.tree) = t_listst (6, LOCAL_VAR, (ptrlong) (yyvsp[(1) - (6)].subtok), (yyvsp[(2) - (6)].tree), (yyvsp[(3) - (6)].tree), (yyvsp[(5) - (6)].box), (yyvsp[(6) - (6)].box)); }
    break;

  case 879:
#line 3328 "./sql3.y"
    { (yyval.tree) = t_listst (6, LOCAL_VAR, (ptrlong) (yyvsp[(1) - (6)].subtok), (yyvsp[(2) - (6)].tree), (yyvsp[(3) - (6)].tree), (yyvsp[(5) - (6)].box), (yyvsp[(6) - (6)].box)); }
    break;

  case 880:
#line 3332 "./sql3.y"
    { (yyval.subtok) = IN_MODE; }
    break;

  case 881:
#line 3333 "./sql3.y"
    { (yyval.subtok) = OUT_MODE; }
    break;

  case 882:
#line 3334 "./sql3.y"
    { (yyval.subtok) = INOUT_MODE; }
    break;

  case 883:
#line 3338 "./sql3.y"
    { (yyval.subtok) = IN_MODE; }
    break;

  case 885:
#line 3343 "./sql3.y"
    { (yyval.subtok) = 0; }
    break;

  case 886:
#line 3344 "./sql3.y"
    { (yyval.subtok) = SOAP_MSG_IN;    }
    break;

  case 887:
#line 3345 "./sql3.y"
    { (yyval.subtok) = SOAP_MSG_OUT;   }
    break;

  case 888:
#line 3346 "./sql3.y"
    { (yyval.subtok) = SOAP_MSG_INOUT; }
    break;

  case 889:
#line 3347 "./sql3.y"
    { (yyval.subtok) = SOAP_MMSG_IN;    }
    break;

  case 890:
#line 3348 "./sql3.y"
    { (yyval.subtok) = SOAP_MMSG_OUT;   }
    break;

  case 891:
#line 3349 "./sql3.y"
    { (yyval.subtok) = SOAP_MMSG_INOUT; }
    break;

  case 892:
#line 3353 "./sql3.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); }
    break;

  case 893:
#line 3354 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].list)); }
    break;

  case 894:
#line 3358 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (3)].box), t_CONS ((yyvsp[(3) - (3)].box), NULL)); }
    break;

  case 895:
#line 3362 "./sql3.y"
    { (yyval.intval) = 0; }
    break;

  case 896:
#line 3363 "./sql3.y"
    { (yyval.intval) = SOAP_MSG_HEADER; }
    break;

  case 897:
#line 3364 "./sql3.y"
    { (yyval.intval) = SOAP_MSG_FAULT; }
    break;

  case 898:
#line 3365 "./sql3.y"
    { (yyval.intval) = SOAP_MSG_LITERAL; }
    break;

  case 899:
#line 3366 "./sql3.y"
    { (yyval.intval) = SOAP_MSG_XML; }
    break;

  case 900:
#line 3367 "./sql3.y"
    { (yyval.intval) = (SOAP_MSG_LITERALW|SOAP_MSG_LITERAL); }
    break;

  case 901:
#line 3368 "./sql3.y"
    { (yyval.intval) = SOAP_MSG_HTTP; }
    break;

  case 902:
#line 3372 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 903:
#line 3374 "./sql3.y"
    { (yyval.box) = t_listbox (3, (yyvsp[(5) - (9)].box), (ptrlong) ((yyvsp[(3) - (9)].intval)|(yyvsp[(6) - (9)].subtok)), t_list_to_array_box ((yyvsp[(8) - (9)].list))); }
    break;

  case 904:
#line 3375 "./sql3.y"
    { (yyval.box) = t_listbox (3, (yyvsp[(2) - (3)].box), (ptrlong) ((yyvsp[(1) - (3)].intval)|(yyvsp[(3) - (3)].subtok)), NULL); }
    break;

  case 905:
#line 3379 "./sql3.y"
    {  (yyval.box) = t_box_float ((float) unbox ((yyvsp[(1) - (1)].box))); }
    break;

  case 906:
#line 3380 "./sql3.y"
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
#line 3391 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].box), NULL); }
    break;

  case 908:
#line 3392 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].box), NULL)); }
    break;

  case 909:
#line 3396 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (2, PROC_COST, t_list_to_array ((yyvsp[(3) - (4)].list))); }
    break;

  case 922:
#line 3413 "./sql3.y"
    { (yyval.tree) = t_listst (1, NULL_STMT); }
    break;

  case 923:
#line 3417 "./sql3.y"
    { BR_PUSH }
    break;

  case 924:
#line 3418 "./sql3.y"
    { (yyval.tree) = t_listst (5, COMPOUND_STMT,
			   t_list_to_array ((yyvsp[(3) - (4)].list)),
			   t_box_num (BR_GET),
			   t_box_num (BR_LGET),
                           t_box_string (scn3_get_file_name ())
			); BR_POP }
    break;

  case 925:
#line 3427 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 926:
#line 3428 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (2)].list), t_CONS ((yyvsp[(2) - (2)].tree), NULL)); }
    break;

  case 929:
#line 3434 "./sql3.y"
    { BR_PUSH }
    break;

  case 930:
#line 3434 "./sql3.y"
    { (yyval.tree) = BR_CSTM ((yyvsp[(2) - (2)].tree)); BR_POP }
    break;

  case 933:
#line 3440 "./sql3.y"
    { (yyval.tree) = t_listst (3, LABELED_STMT, (yyvsp[(1) - (3)].box), (yyvsp[(3) - (3)].tree)); }
    break;

  case 934:
#line 3441 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (3, CALL_STMT, t_sqlp_box_id_upcase ("http"), t_list (1, (yyvsp[(1) - (1)].box))); }
    break;

  case 935:
#line 3442 "./sql3.y"
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
#line 3450 "./sql3.y"
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
#line 3458 "./sql3.y"
    {
          ST *qry = (yyvsp[(2) - (3)].tree);
          ST *scalar_qry = (yyval.tree) = (ST *) t_list (2, SCALAR_SUBQ, sqlp_add_top_1 (qry));
          (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("isnull"), t_list (1, scalar_qry)); }
    break;

  case 939:
#line 3466 "./sql3.y"
    { BR_PUSH }
    break;

  case 940:
#line 3466 "./sql3.y"
    { (yyval.tree) = BR_CSTM ((yyvsp[(2) - (3)].tree)); BR_POP }
    break;

  case 941:
#line 3467 "./sql3.y"
    { BR_PUSH }
    break;

  case 942:
#line 3467 "./sql3.y"
    { (yyval.tree) = BR_CSTM ((yyvsp[(2) - (2)].tree)); BR_POP }
    break;

  case 946:
#line 3478 "./sql3.y"
    {
		  ST **temp = (ST **) t_list_to_array ((yyvsp[(2) - (3)].list));
		  (yyval.tree) = t_listst (2, VARIABLE_DECL,
		      sqlp_local_variable_decls ((caddr_t *) temp, (yyvsp[(3) - (3)].tree)));
		}
    break;

  case 947:
#line 3487 "./sql3.y"
    { (yyval.list) = t_CONS (t_list (3, COL_DOTTED, NULL, (yyvsp[(1) - (1)].box)), NULL); }
    break;

  case 948:
#line 3489 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS (t_list (3, COL_DOTTED, NULL, (yyvsp[(3) - (3)].box)), NULL)); }
    break;

  case 949:
#line 3493 "./sql3.y"
    { (yyval.box) = (caddr_t) SQL_NO_DATA_FOUND; }
    break;

  case 950:
#line 3494 "./sql3.y"
    { (yyval.box) = (caddr_t) t_list (2, (yyvsp[(2) - (2)].box), sqlp_handler_star_pos ((yyvsp[(2) - (2)].box))); }
    break;

  case 951:
#line 3496 "./sql3.y"
    {
		  (yyval.box) = t_listbox (2, (yyvsp[(3) - (3)].box), sqlp_handler_star_pos ((yyvsp[(3) - (3)].box)));
		}
    break;

  case 952:
#line 3499 "./sql3.y"
    { (yyval.box) = (caddr_t) SQL_SQLEXCEPTION; }
    break;

  case 953:
#line 3500 "./sql3.y"
    { (yyval.box) = t_listbox (2, t_box_string ("01*"), 2); }
    break;

  case 960:
#line 3510 "./sql3.y"
    { (yyval.tree) = sqlp_resignal (NULL); }
    break;

  case 961:
#line 3511 "./sql3.y"
    { (yyval.tree) = sqlp_resignal ((yyvsp[(2) - (2)].tree)); }
    break;

  case 968:
#line 3522 "./sql3.y"
    { (yyval.tree) = t_listst (4, HANDLER_DECL, HANDT_CONTINUE, t_list (1, (yyvsp[(2) - (4)].box)), t_list (2, GOTO_STMT, (yyvsp[(4) - (4)].box))); }
    break;

  case 969:
#line 3524 "./sql3.y"
    { (yyval.tree) = t_listst (4, HANDLER_DECL, HANDT_CONTINUE, t_list (1, (yyvsp[(2) - (5)].box)), t_list (2, GOTO_STMT, (yyvsp[(5) - (5)].box))); }
    break;

  case 970:
#line 3526 "./sql3.y"
    { (yyval.tree) = t_listst (4, HANDLER_DECL, HANDT_CONTINUE, t_list (1, (yyvsp[(2) - (3)].box)), sqlp_resignal (NULL)); }
    break;

  case 971:
#line 3528 "./sql3.y"
    { (yyval.tree) = t_listst (4, HANDLER_DECL, (ptrlong) (yyvsp[(2) - (6)].intval), t_list_to_array ((yyvsp[(5) - (6)].list)), (yyvsp[(6) - (6)].tree)); }
    break;

  case 972:
#line 3532 "./sql3.y"
    { (yyval.intval) = HANDT_CONTINUE; }
    break;

  case 973:
#line 3533 "./sql3.y"
    { (yyval.intval) = HANDT_EXIT; }
    break;

  case 974:
#line 3537 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].box), NULL); }
    break;

  case 975:
#line 3538 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].box), NULL)); }
    break;

  case 980:
#line 3546 "./sql3.y"
    { (yyval.tree) = sqlp_resignal (NULL); }
    break;

  case 981:
#line 3547 "./sql3.y"
    { (yyval.tree) = sqlp_resignal ((yyvsp[(2) - (3)].tree)); }
    break;

  case 988:
#line 3557 "./sql3.y"
    { (yyval.tree) = t_listst (3, ASG_STMT, (yyvsp[(1) - (3)].tree), sqlp_wrapper_sqlxml_assign((ST*)(yyvsp[(3) - (3)].tree))); }
    break;

  case 989:
#line 3559 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
	    					t_sqlp_box_id_upcase ("aset"),
						t_list_to_array (t_CONS ((yyvsp[(1) - (4)].tree), t_NCONC ((yyvsp[(2) - (4)].list), t_CONS ((yyvsp[(4) - (4)].tree), NULL)))) ); }
    break;

  case 990:
#line 3566 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(2) - (3)].tree), NULL); }
    break;

  case 991:
#line 3567 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (4)].list), t_CONS ((yyvsp[(3) - (4)].tree), NULL)); }
    break;

  case 994:
#line 3602 "./sql3.y"
    { ST *first = t_listst (3, COND_CLAUSE, (yyvsp[(3) - (6)].tree), (yyvsp[(5) - (6)].tree));
		  ST *cond_list = t_listst (1, first);
		  (yyval.tree) = t_listst (3, IF_STMT, cond_list, (yyvsp[(6) - (6)].tree));
		}
    break;

  case 995:
#line 3609 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 996:
#line 3610 "./sql3.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 997:
#line 3615 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, (yyvsp[(2) - (5)].box), t_list_to_array ((yyvsp[(4) - (5)].list))); }
    break;

  case 998:
#line 3616 "./sql3.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 999:
#line 3617 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 1000:
#line 3621 "./sql3.y"
    { (yyval.box) = t_box_string ((yyvsp[(2) - (2)].box)); }
    break;

  case 1001:
#line 3622 "./sql3.y"
    { (yyval.box) = t_box_string ((yyvsp[(2) - (2)].box)); }
    break;

  case 1002:
#line 3623 "./sql3.y"
    { (yyval.box) = t_box_string ((yyvsp[(1) - (2)].box)); }
    break;

  case 1003:
#line 3624 "./sql3.y"
    { (yyval.box) = t_box_string ((yyvsp[(1) - (1)].box)); }
    break;

  case 1004:
#line 3629 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("__set"),
		      t_list (2, t_sqlp_box_upcase ((yyvsp[(2) - (4)].box)), (yyvsp[(4) - (4)].tree))); }
    break;

  case 1005:
#line 3632 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("__set"),
		      t_list (2, t_sqlp_box_upcase ((yyvsp[(2) - (3)].box)), t_box_num (1))); }
    break;

  case 1006:
#line 3635 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("__set"),
		      t_list (2, t_sqlp_box_upcase ((yyvsp[(2) - (3)].box)), t_box_num (0))); }
    break;

  case 1007:
#line 3638 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("__set"),
		      t_list (2, t_sqlp_box_upcase ((yyvsp[(3) - (5)].box)), (yyvsp[(5) - (5)].box))); }
    break;

  case 1008:
#line 3643 "./sql3.y"
    { (yyval.tree) = t_listst (2, GOTO_STMT, (yyvsp[(2) - (2)].box)); }
    break;

  case 1009:
#line 3644 "./sql3.y"
    { (yyval.tree) = t_listst (2, GOTO_STMT, (yyvsp[(3) - (3)].box)); }
    break;

  case 1010:
#line 3648 "./sql3.y"
    { (yyval.tree) = t_listst (2, RETURN_STMT, sqlp_wrapper_sqlxml_assign((ST*)(yyvsp[(2) - (2)].tree))); }
    break;

  case 1011:
#line 3649 "./sql3.y"
    { (yyval.tree) = t_listst (2, RETURN_STMT, NULL); }
    break;

  case 1012:
#line 3654 "./sql3.y"
    { (yyval.tree) = t_listst (3, WHILE_STMT, (yyvsp[(3) - (5)].tree), (yyvsp[(5) - (5)].tree)); }
    break;

  case 1017:
#line 3665 "./sql3.y"
    { (yyval.list) = NULL; }
    break;

  case 1018:
#line 3666 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 1019:
#line 3667 "./sql3.y"
    { (yyval.list) = (yyvsp[(3) - (3)].tree) ? t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)) : (yyvsp[(1) - (3)].list); }
    break;

  case 1023:
#line 3677 "./sql3.y"
    { (yyval.list) = NULL; }
    break;

  case 1024:
#line 3678 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 1025:
#line 3679 "./sql3.y"
    { (yyval.list) = (yyvsp[(3) - (3)].tree) ? t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)) : (yyvsp[(1) - (3)].list); }
    break;

  case 1026:
#line 3683 "./sql3.y"
    { NEGATE ((yyval.tree), t_listst (3, BOP_EQ, t_box_num_and_zero (0), t_box_num (1))); }
    break;

  case 1027:
#line 3684 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 1028:
#line 3689 "./sql3.y"
    { (yyval.tree) = sqlp_for_statement ((yyvsp[(2) - (4)].tree), (yyvsp[(4) - (4)].tree)); }
    break;

  case 1029:
#line 3691 "./sql3.y"
    { (yyval.tree) = sqlp_c_for_statement ((ST **) t_list_to_array ((yyvsp[(3) - (9)].list)), (yyvsp[(5) - (9)].tree), (ST **) t_list_to_array ((yyvsp[(7) - (9)].list)), (yyvsp[(9) - (9)].tree)); }
    break;

  case 1030:
#line 3693 "./sql3.y"
    { (yyval.tree) = sqlp_foreach_statement ((yyvsp[(3) - (9)].tree), (yyvsp[(4) - (9)].box), (yyvsp[(6) - (9)].tree), (yyvsp[(9) - (9)].tree)); }
    break;

  case 1031:
#line 3699 "./sql3.y"
    { (yyval.tree) = t_listst (8, TRIGGER_DEF, (yyvsp[(3) - (10)].box), (ptrlong) (yyvsp[(4) - (10)].subtok), (yyvsp[(5) - (10)].box), (yyvsp[(7) - (10)].strval), (yyvsp[(8) - (10)].box), (yyvsp[(9) - (10)].box), (yyvsp[(10) - (10)].tree)); }
    break;

  case 1032:
#line 3703 "./sql3.y"
    { (yyval.box) = 0; }
    break;

  case 1033:
#line 3704 "./sql3.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 1035:
#line 3712 "./sql3.y"
    { (yyval.subtok) = TRIG_BEFORE; }
    break;

  case 1036:
#line 3713 "./sql3.y"
    { (yyval.subtok) = TRIG_AFTER; }
    break;

  case 1037:
#line 3714 "./sql3.y"
    { (yyval.subtok) = TRIG_INSTEAD; }
    break;

  case 1038:
#line 3718 "./sql3.y"
    { (yyval.box) = (caddr_t) TRIG_INSERT; }
    break;

  case 1039:
#line 3719 "./sql3.y"
    { (yyval.box) = (caddr_t) (yyvsp[(2) - (2)].tree); }
    break;

  case 1040:
#line 3721 "./sql3.y"
    { (yyval.box) = (caddr_t) TRIG_DELETE; }
    break;

  case 1041:
#line 3725 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 1042:
#line 3726 "./sql3.y"
    { (yyval.box) = (caddr_t) t_list_to_array ((yyvsp[(2) - (2)].list)); }
    break;

  case 1043:
#line 3730 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 1044:
#line 3731 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 1045:
#line 3735 "./sql3.y"
    { (yyval.tree) = t_listst (2, OLD_ALIAS, (yyvsp[(3) - (3)].box)); }
    break;

  case 1046:
#line 3736 "./sql3.y"
    { (yyval.tree) = t_listst (2, NEW_ALIAS, (yyvsp[(3) - (3)].box)); }
    break;

  case 1047:
#line 3741 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
			t_sqlp_box_id_upcase ("DB.DBA.ddl_drop_trigger"),
			t_list (1, t_box_string ((yyvsp[(3) - (3)].strval))));
		}
    break;

  case 1048:
#line 3750 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
			t_sqlp_box_id_upcase ("DB.DBA.ddl_drop_proc"),
			t_list (2, t_box_string ((yyvsp[(3) - (3)].strval)), 4));
		}
    break;

  case 1049:
#line 3755 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
			t_sqlp_box_id_upcase ("DB.DBA.ddl_drop_proc"),
			t_list (1, t_box_string ((yyvsp[(3) - (3)].strval))));
		}
    break;

  case 1050:
#line 3760 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT,
			t_sqlp_box_id_upcase ("DB.DBA.ddl_drop_proc"),
			t_list (2, t_box_string ((yyvsp[(3) - (3)].strval)), 0));
		}
    break;

  case 1051:
#line 3774 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 1052:
#line 3775 "./sql3.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 1053:
#line 3779 "./sql3.y"
    {
	  if ((yyvsp[(1) - (1)].tree)->_.col_ref.name == STAR)
	    yyerror ("No stars allowed inside XML view definition");
	  else
/*mapping schema*/
	    (yyval.tree) = (ST*) t_list (5, (yyvsp[(1) - (1)].tree), box_dv_uname_string ((yyvsp[(1) - (1)].tree)->_.col_ref.name), XV_XC_ATTRIBUTE, NULL, NULL);
	}
    break;

  case 1054:
#line 3786 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (5, (yyvsp[(1) - (3)].tree), box_dv_uname_string ((yyvsp[(3) - (3)].box)), XV_XC_ATTRIBUTE, NULL, NULL); }
    break;

  case 1055:
#line 3787 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (5, (yyvsp[(1) - (3)].tree), box_dv_uname_string ((yyvsp[(3) - (3)].box)), XV_XC_SUBELEMENT, NULL, NULL); }
    break;

  case 1056:
#line 3800 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 1057:
#line 3801 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 1058:
#line 3806 "./sql3.y"
    { (yyval.tree) = (ST*) t_list_to_array ((yyvsp[(2) - (3)].list)); }
    break;

  case 1059:
#line 3810 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 1060:
#line 3811 "./sql3.y"
    { (yyval.tree) = (ST *) t_list_to_array ((yyvsp[(4) - (5)].list)); }
    break;

  case 1061:
#line 3817 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 1062:
#line 3818 "./sql3.y"
    { (yyval.tree) = (yyvsp[(3) - (4)].tree); }
    break;

  case 1063:
#line 3823 "./sql3.y"
    { (yyval.subtok) = 0; }
    break;

  case 1064:
#line 3824 "./sql3.y"
    { (yyval.subtok) = 1; }
    break;

  case 1065:
#line 3830 "./sql3.y"
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
#line 3849 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 1067:
#line 3850 "./sql3.y"
    { (yyval.tree) = (ST*) t_list_to_array ((yyvsp[(2) - (3)].list)); }
    break;

  case 1068:
#line 3855 "./sql3.y"
    { (yyval.tree) = (yyvsp[(1) - (1)].tree); }
    break;

  case 1069:
#line 3856 "./sql3.y"
    { ST * tmp  = (ST*) t_list_to_array ((yyvsp[(2) - (3)].list));
/*mapping schema*/
	(yyval.tree) = (ST *) t_list (12, NULL, NULL, NULL, NULL, NULL, (ptrlong) 1, NULL, tmp, NULL, NULL, NULL, NULL); }
    break;

  case 1070:
#line 3866 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 1071:
#line 3867 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 1072:
#line 3871 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 1073:
#line 3872 "./sql3.y"
    { (yyval.box) = t_box_num (1); }
    break;

  case 1074:
#line 3876 "./sql3.y"
    { (yyval.box) = t_box_num (0); }
    break;

  case 1075:
#line 3877 "./sql3.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 1076:
#line 3893 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (2, t_box_num(0), t_box_string("")); }
    break;

  case 1077:
#line 3894 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (2, t_box_num(1), t_box_string("")); }
    break;

  case 1078:
#line 3895 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (2, t_box_num(2), t_box_string("")); }
    break;

  case 1079:
#line 3896 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (2, t_box_num(3), (yyvsp[(2) - (2)].box)); }
    break;

  case 1080:
#line 3897 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (2, t_box_num(5), t_box_string("")); }
    break;

  case 1081:
#line 3898 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (2, t_box_num(6), (yyvsp[(2) - (2)].box)); }
    break;

  case 1082:
#line 3902 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 1083:
#line 3904 "./sql3.y"
    {
	     if (stricmp ((yyvsp[(3) - (7)].box), "OWNER") && stricmp ((yyvsp[(3) - (7)].box), "NAME"))
	       yyerror ("syntax error at WebDAV OWNER keyword");
	     (yyval.tree) = (ST*) t_list (5, (yyvsp[(2) - (7)].box), (yyvsp[(4) - (7)].box), (yyvsp[(5) - (7)].box), (yyvsp[(6) - (7)].box), (yyvsp[(7) - (7)].tree));
	   }
    break;

  case 1086:
#line 3919 "./sql3.y"
    {
              if ((yyvsp[(2) - (3)].subtok) != BOP_EQ)
		yyerror ("'=' expected");
	      (yyval.tree) = (ST *) t_list (2, (yyvsp[(1) - (3)].box), (yyvsp[(3) - (3)].box));
            }
    break;

  case 1087:
#line 3930 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 1088:
#line 3932 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (2)].list), t_CONS ((yyvsp[(2) - (2)].tree), NULL)); }
    break;

  case 1089:
#line 3937 "./sql3.y"
    { (yyval.list) = NULL; }
    break;

  case 1090:
#line 3939 "./sql3.y"
    { (yyval.list) = (yyvsp[(2) - (3)].list); }
    break;

  case 1091:
#line 3945 "./sql3.y"
    { (yyval.tree) = (ST*) t_list (12, XML_VIEW, (yyvsp[(4) - (9)].strval), NULL, NULL, 0,
			     (yyvsp[(7) - (9)].tree), (ptrlong) (yyvsp[(8) - (9)].subtok), (yyvsp[(9) - (9)].tree), t_list_to_array ((yyvsp[(6) - (9)].list)), NULL, NULL, NULL); }
    break;

  case 1092:
#line 3952 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, t_sqlp_box_id_upcase ("DB.DBA.xml_view_drop"), t_list (1, (yyvsp[(4) - (4)].strval))); }
    break;

  case 1093:
#line 3973 "./sql3.y"
    {
		  (yyval.tree) = t_listst (3, CALL_STMT,
		      t_sqlp_box_id_upcase ("concat"),
		      t_listst (2, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree)));
		}
    break;

  case 1094:
#line 3982 "./sql3.y"
    { (yyval.strval) = sqlp_type_name (NULL, 0, NULL, 0, (yyvsp[(1) - (1)].box), 1); }
    break;

  case 1095:
#line 3983 "./sql3.y"
    { (yyval.strval) = sqlp_type_name (NULL, 0, (yyvsp[(1) - (3)].box), box_length ((yyvsp[(1) - (3)].box)), (yyvsp[(3) - (3)].box), 1); }
    break;

  case 1096:
#line 3984 "./sql3.y"
    { (yyval.strval) = sqlp_type_name ((yyvsp[(1) - (5)].box), box_length ((yyvsp[(1) - (5)].box)), (yyvsp[(3) - (5)].box), box_length ((yyvsp[(3) - (5)].box)), (yyvsp[(5) - (5)].box), 1); }
    break;

  case 1097:
#line 3985 "./sql3.y"
    { (yyval.strval) = sqlp_type_name ((yyvsp[(1) - (4)].box), box_length ((yyvsp[(1) - (4)].box)), NULL, 0, (yyvsp[(4) - (4)].box), 1); }
    break;

  case 1098:
#line 3989 "./sql3.y"
    { (yyval.strval) = sqlp_type_name (NULL, 0, NULL, 0, (yyvsp[(1) - (1)].box), 0); }
    break;

  case 1099:
#line 3990 "./sql3.y"
    { (yyval.strval) = sqlp_type_name (NULL, 0, (yyvsp[(1) - (3)].box), box_length ((yyvsp[(1) - (3)].box)), (yyvsp[(3) - (3)].box), 0); }
    break;

  case 1100:
#line 3991 "./sql3.y"
    { (yyval.strval) = sqlp_type_name ((yyvsp[(1) - (5)].box), box_length ((yyvsp[(1) - (5)].box)), (yyvsp[(3) - (5)].box), box_length ((yyvsp[(3) - (5)].box)), (yyvsp[(5) - (5)].box), 0); }
    break;

  case 1101:
#line 3992 "./sql3.y"
    { (yyval.strval) = sqlp_type_name ((yyvsp[(1) - (4)].box), box_length ((yyvsp[(1) - (4)].box)), NULL, 0, (yyvsp[(4) - (4)].box), 0); }
    break;

  case 1102:
#line 3996 "./sql3.y"
    { (yyval.strval) = sqlp_new_table_name (NULL, 0, NULL, 0, (yyvsp[(1) - (1)].box)); }
    break;

  case 1103:
#line 3997 "./sql3.y"
    { (yyval.strval) = sqlp_new_table_name (NULL, 0, (yyvsp[(1) - (3)].box), box_length ((yyvsp[(1) - (3)].box)), (yyvsp[(3) - (3)].box)); }
    break;

  case 1104:
#line 3998 "./sql3.y"
    { (yyval.strval) = sqlp_new_table_name ((yyvsp[(1) - (5)].box), box_length ((yyvsp[(1) - (5)].box)), (yyvsp[(3) - (5)].box), box_length ((yyvsp[(3) - (5)].box)), (yyvsp[(5) - (5)].box)); }
    break;

  case 1105:
#line 3999 "./sql3.y"
    { (yyval.strval) = sqlp_new_table_name ((yyvsp[(1) - (4)].box), box_length ((yyvsp[(1) - (4)].box)), NULL, 0, (yyvsp[(4) - (4)].box)); }
    break;

  case 1106:
#line 4003 "./sql3.y"
    { sqlp_udt_current_type = (yyvsp[(3) - (5)].strval); }
    break;

  case 1107:
#line 4005 "./sql3.y"
    {
	       (yyval.tree) = t_listst (7, UDT_DEF,
		   (yyvsp[(3) - (9)].strval), (yyvsp[(4) - (9)].strval), (yyvsp[(5) - (9)].tree), (yyvsp[(7) - (9)].tree), (yyvsp[(8) - (9)].tree), (yyvsp[(9) - (9)].tree));
	       sqlp_udt_current_type = NULL;
	       sqlp_udt_current_type_lang = UDT_LANG_NONE;
	     }
    break;

  case 1108:
#line 4015 "./sql3.y"
    {
	       (yyval.tree) = t_listst (3, UDT_DROP, (yyvsp[(3) - (4)].strval), (ptrlong) (yyvsp[(4) - (4)].intval));
	     }
    break;

  case 1109:
#line 4021 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 1110:
#line 4023 "./sql3.y"
    {
	       (yyval.tree) = t_listst (3, UDT_EXT,
		   (ptrlong) (yyvsp[(2) - (5)].intval), (yyvsp[(5) - (5)].box));
	       sqlp_udt_current_type_lang = (yyvsp[(2) - (5)].intval);
       	     }
    break;

  case 1111:
#line 4029 "./sql3.y"
    {
	       (yyval.tree) = t_listst (3, UDT_EXT,
		   (ptrlong) (yyvsp[(5) - (5)].intval), (yyvsp[(3) - (5)].box));
	       sqlp_udt_current_type_lang = (yyvsp[(5) - (5)].intval);
       	     }
    break;

  case 1112:
#line 4035 "./sql3.y"
    {
	       (yyval.tree) = t_listst (3, UDT_EXT,
		   (ptrlong) (yyvsp[(2) - (2)].intval), NULL);
	       sqlp_udt_current_type_lang = (yyvsp[(2) - (2)].intval);
       	     }
    break;

  case 1113:
#line 4043 "./sql3.y"
    { (yyval.strval) = NULL; }
    break;

  case 1114:
#line 4044 "./sql3.y"
    { (yyval.strval) = (yyvsp[(2) - (2)].strval); }
    break;

  case 1115:
#line 4048 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 1116:
#line 4049 "./sql3.y"
    { (yyval.tree) = (yyvsp[(2) - (2)].tree); }
    break;

  case 1117:
#line 4053 "./sql3.y"
    { (yyval.tree) = (ST *) t_list_to_array ((yyvsp[(2) - (3)].list)); }
    break;

  case 1118:
#line 4058 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 1119:
#line 4059 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 1120:
#line 4063 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 1121:
#line 4064 "./sql3.y"
    { (yyval.tree) = t_listst (4, UDT_EXT, UDT_LANG_NONE, (yyvsp[(3) - (3)].box), NULL); }
    break;

  case 1122:
#line 4065 "./sql3.y"
    { (yyval.tree) = t_listst (4, UDT_EXT, UDT_LANG_NONE, (yyvsp[(3) - (6)].box), (yyvsp[(6) - (6)].box)); }
    break;

  case 1123:
#line 4066 "./sql3.y"
    { (yyval.tree) = t_listst (4, UDT_EXT, UDT_LANG_NONE, NULL, (yyvsp[(3) - (3)].box)); }
    break;

  case 1124:
#line 4070 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 1125:
#line 4071 "./sql3.y"
    { (yyval.tree) = t_listst (3, UDT_SOAP, NULL, (yyvsp[(2) - (2)].box)); }
    break;

  case 1126:
#line 4072 "./sql3.y"
    { (yyval.tree) = t_listst (3, UDT_SOAP, (yyvsp[(2) - (2)].box), NULL); }
    break;

  case 1127:
#line 4073 "./sql3.y"
    { (yyval.tree) = t_listst (3, UDT_SOAP, (yyvsp[(2) - (4)].box), (yyvsp[(4) - (4)].box)); }
    break;

  case 1128:
#line 4074 "./sql3.y"
    { (yyval.tree) = t_listst (3, UDT_SOAP, (yyvsp[(4) - (4)].box), (yyvsp[(2) - (4)].box)); }
    break;

  case 1129:
#line 4078 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 1130:
#line 4079 "./sql3.y"
    { (yyval.tree) = (ST *) (yyvsp[(3) - (3)].box); }
    break;

  case 1131:
#line 4084 "./sql3.y"
    {
	      (yyval.tree) = t_listst (8, UDT_MEMBER, (yyvsp[(1) - (7)].box), (yyvsp[(2) - (7)].tree), (yyvsp[(3) - (7)].tree), (yyvsp[(4) - (7)].box), (yyvsp[(5) - (7)].strval), (yyvsp[(6) - (7)].tree), (yyvsp[(7) - (7)].tree));
	    }
    break;

  case 1132:
#line 4090 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 1133:
#line 4091 "./sql3.y"
    { (yyval.tree) = (yyvsp[(4) - (4)].tree); }
    break;

  case 1134:
#line 4092 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 1135:
#line 4096 "./sql3.y"
    { (yyval.box) = t_alloc_box (0, DV_DB_NULL); }
    break;

  case 1136:
#line 4097 "./sql3.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 1137:
#line 4101 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 1138:
#line 4102 "./sql3.y"
    { (yyval.tree) = (ST *) t_list_to_array ((yyvsp[(1) - (1)].list)); }
    break;

  case 1139:
#line 4106 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 1140:
#line 4107 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (2)].list), t_CONS ((yyvsp[(2) - (2)].tree), NULL)); }
    break;

  case 1141:
#line 4111 "./sql3.y"
    { (yyval.tree) = t_listst (2, UDT_FINAL, 1); }
    break;

  case 1142:
#line 4112 "./sql3.y"
    { (yyval.tree) = t_listst (2, UDT_FINAL, 0); }
    break;

  case 1143:
#line 4113 "./sql3.y"
    { (yyval.tree) = t_listst (2, UDT_REF, (yyvsp[(3) - (3)].tree)); }
    break;

  case 1144:
#line 4114 "./sql3.y"
    { (yyval.tree) = t_listst (2, UDT_REF, (yyvsp[(4) - (5)].list)); }
    break;

  case 1145:
#line 4115 "./sql3.y"
    { (yyval.tree) = t_listst (1, UDT_REF);  }
    break;

  case 1146:
#line 4116 "./sql3.y"
    { (yyval.tree) = t_listst (3, UDT_REFCAST, 0, (yyvsp[(8) - (8)].box)); }
    break;

  case 1147:
#line 4117 "./sql3.y"
    { (yyval.tree) = t_listst (3, UDT_REFCAST, 1, (yyvsp[(8) - (8)].box)); }
    break;

  case 1148:
#line 4118 "./sql3.y"
    { (yyval.tree) = t_listst (2, UDT_REFCAST, 0); }
    break;

  case 1149:
#line 4119 "./sql3.y"
    { (yyval.tree) = t_listst (2, UDT_REFCAST, 1); }
    break;

  case 1150:
#line 4120 "./sql3.y"
    { (yyval.tree) = t_listst (2, UDT_UNRESTRICTED, 1); }
    break;

  case 1151:
#line 4121 "./sql3.y"
    { (yyval.tree) = t_listst (2, UDT_SOAP, (yyvsp[(2) - (2)].box)); }
    break;

  case 1152:
#line 4125 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 1153:
#line 4126 "./sql3.y"
    { (yyval.tree) = (ST *) t_list_to_array ((yyvsp[(1) - (1)].list)); }
    break;

  case 1154:
#line 4130 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 1155:
#line 4131 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 1156:
#line 4135 "./sql3.y"
    { (yyval.intval) = UDT_METHOD_INSTANCE; }
    break;

  case 1157:
#line 4136 "./sql3.y"
    { (yyval.intval) = UDT_METHOD_STATIC;  }
    break;

  case 1158:
#line 4137 "./sql3.y"
    { (yyval.intval) = UDT_METHOD_INSTANCE; }
    break;

  case 1159:
#line 4141 "./sql3.y"
    { (yyval.box) = (caddr_t) t_list (0); }
    break;

  case 1160:
#line 4142 "./sql3.y"
    { (yyval.box) = t_list_to_array_box ((yyvsp[(2) - (3)].list)); }
    break;

  case 1161:
#line 4147 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 1162:
#line 4149 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 1163:
#line 4154 "./sql3.y"
    { (yyval.tree) = t_listst (6, LOCAL_VAR, IN_L, (yyvsp[(2) - (4)].tree), (yyvsp[(3) - (4)].tree), NULL, (yyvsp[(4) - (4)].tree)); }
    break;

  case 1164:
#line 4159 "./sql3.y"
    {
	      (yyval.tree) = t_listst (6, UDT_METHOD,
		  (ptrlong) (yyvsp[(1) - (7)].intval), (yyvsp[(3) - (7)].box), (yyvsp[(4) - (7)].box), (yyvsp[(6) - (7)].tree), (yyvsp[(7) - (7)].strval));
	    }
    break;

  case 1165:
#line 4164 "./sql3.y"
    {
	      (yyval.tree) = t_listst (6, UDT_METHOD,
		  UDT_METHOD_CONSTRUCTOR, (yyvsp[(3) - (5)].box), (yyvsp[(4) - (5)].box), NULL, (yyvsp[(5) - (5)].strval));
	    }
    break;

  case 1166:
#line 4172 "./sql3.y"
    {
	      (yyval.tree) = t_listst (5, UDT_METHOD_DEF,
		  0, (yyvsp[(1) - (3)].tree), (ptrlong) (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].tree));
	    }
    break;

  case 1167:
#line 4177 "./sql3.y"
    {
	      (yyval.tree) = t_listst (5, UDT_METHOD_DEF,
		  1, (yyvsp[(2) - (2)].tree), NULL, NULL);
	    }
    break;

  case 1168:
#line 4184 "./sql3.y"
    { (yyval.intval) = 0; }
    break;

  case 1169:
#line 4185 "./sql3.y"
    { (yyval.intval) = 1; }
    break;

  case 1170:
#line 4186 "./sql3.y"
    { (yyval.intval) = 2; }
    break;

  case 1171:
#line 4187 "./sql3.y"
    { (yyval.intval) = 3; }
    break;

  case 1172:
#line 4191 "./sql3.y"
    { (yyval.strval) = NULL; }
    break;

  case 1173:
#line 4192 "./sql3.y"
    { (yyval.strval) = (yyvsp[(2) - (2)].strval); }
    break;

  case 1174:
#line 4196 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 1175:
#line 4197 "./sql3.y"
    { (yyval.tree) = (ST *)t_list_to_array ((yyvsp[(1) - (1)].list)); }
    break;

  case 1176:
#line 4202 "./sql3.y"
    {
	      (yyval.list) = ((yyvsp[(1) - (1)].tree) != NULL ? t_CONS ((yyvsp[(1) - (1)].tree), NULL) : NULL);
	    }
    break;

  case 1177:
#line 4206 "./sql3.y"
    {
	      if ((yyvsp[(2) - (2)].tree) != NULL)
		(yyval.list) = t_NCONC ((yyvsp[(1) - (2)].list), t_CONS ((yyvsp[(2) - (2)].tree), NULL));
	    }
    break;

  case 1178:
#line 4213 "./sql3.y"
    { (yyval.tree) = t_listst (4, UDT_EXT, (ptrlong) (yyvsp[(2) - (2)].intval), NULL, NULL); }
    break;

  case 1179:
#line 4214 "./sql3.y"
    { (yyval.tree) = NULL; /* no action for now */ }
    break;

  case 1180:
#line 4215 "./sql3.y"
    { (yyval.tree) = NULL; /* no action for now */ }
    break;

  case 1181:
#line 4216 "./sql3.y"
    { (yyval.tree) = NULL; /* no action for now */ }
    break;

  case 1182:
#line 4217 "./sql3.y"
    { (yyval.tree) = NULL; /* no action for now */ }
    break;

  case 1183:
#line 4218 "./sql3.y"
    { (yyval.tree) = NULL; /* no action for now */ }
    break;

  case 1184:
#line 4219 "./sql3.y"
    { (yyval.tree) = NULL; /* no action for now */ }
    break;

  case 1185:
#line 4220 "./sql3.y"
    { (yyval.tree) = NULL; /* no action for now */ }
    break;

  case 1186:
#line 4221 "./sql3.y"
    { (yyval.tree) = NULL; /* no action for now */ }
    break;

  case 1187:
#line 4222 "./sql3.y"
    { (yyval.tree) = NULL; /* no action for now */ }
    break;

  case 1188:
#line 4223 "./sql3.y"
    { (yyval.tree) = NULL; /* no action for now */ }
    break;

  case 1189:
#line 4224 "./sql3.y"
    { (yyval.tree) = t_listst (4, UDT_EXT, UDT_LANG_NONE, (yyvsp[(3) - (3)].box), NULL); }
    break;

  case 1190:
#line 4225 "./sql3.y"
    { (yyval.tree) = t_listst (4, UDT_VAR_EXT, UDT_LANG_NONE, (yyvsp[(4) - (4)].box), NULL); }
    break;

  case 1191:
#line 4226 "./sql3.y"
    { (yyval.tree) = t_listst (4, UDT_EXT, UDT_LANG_NONE, NULL, (yyvsp[(3) - (3)].box)); }
    break;

  case 1192:
#line 4230 "./sql3.y"
    { yyerror ("Language ADA not supported"); }
    break;

  case 1193:
#line 4231 "./sql3.y"
    { (yyval.intval) = UDT_LANG_C; }
    break;

  case 1194:
#line 4232 "./sql3.y"
    { yyerror ("Language COBOL not supported"); }
    break;

  case 1195:
#line 4233 "./sql3.y"
    { yyerror ("Language FORTRAN not supported"); }
    break;

  case 1196:
#line 4234 "./sql3.y"
    { yyerror ("Language MUMPS not supported"); }
    break;

  case 1197:
#line 4235 "./sql3.y"
    { yyerror ("Language PASCAL not supported"); }
    break;

  case 1198:
#line 4236 "./sql3.y"
    { yyerror ("Language PLI not supported"); }
    break;

  case 1199:
#line 4237 "./sql3.y"
    { (yyval.intval) = UDT_LANG_JAVA; }
    break;

  case 1200:
#line 4238 "./sql3.y"
    { (yyval.intval) = UDT_LANG_CLR; }
    break;

  case 1202:
#line 4243 "./sql3.y"
    { (yyval.intval) = UDT_LANG_SQL; }
    break;

  case 1203:
#line 4247 "./sql3.y"
    { (yyval.tree) = NULL; }
    break;

  case 1204:
#line 4248 "./sql3.y"
    { (yyval.tree) = (ST *) (yyvsp[(2) - (2)].strval); }
    break;

  case 1205:
#line 4254 "./sql3.y"
    {
	     (yyval.tree) = (ST *) sqlp_udt_method_decl (0, (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].box), (yyvsp[(5) - (10)].box), (caddr_t) (yyvsp[(6) - (10)].tree), (yyvsp[(9) - (10)].strval), (caddr_t) (yyvsp[(10) - (10)].tree), (caddr_t) (yyvsp[(7) - (10)].box));
	   }
    break;

  case 1206:
#line 4259 "./sql3.y"
    {
	     (yyval.tree) = (ST *) sqlp_udt_method_decl (0, UDT_METHOD_CONSTRUCTOR, (yyvsp[(4) - (9)].strval), (yyvsp[(5) - (9)].box), (caddr_t) (yyvsp[(6) - (9)].tree), (yyvsp[(8) - (9)].strval), (caddr_t) (yyvsp[(9) - (9)].tree), NULL);
	   }
    break;

  case 1207:
#line 4266 "./sql3.y"
    { (yyval.tree) = t_listst (5, CALL_STMT, (yyvsp[(3) - (6)].box), t_list_to_array ((yyvsp[(5) - (6)].list)), NULL, (yyvsp[(1) - (6)].strval)); }
    break;

  case 1208:
#line 4271 "./sql3.y"
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
#line 4280 "./sql3.y"
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
#line 4288 "./sql3.y"
    { (yyval.list) = t_NCONC (t_CONS ((yyvsp[(1) - (3)].box), NULL), (yyvsp[(3) - (3)].list)); }
    break;

  case 1211:
#line 4293 "./sql3.y"
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
#line 4303 "./sql3.y"
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
#line 4312 "./sql3.y"
    { (yyval.list) = t_NCONC (t_CONS ((yyvsp[(1) - (3)].box), NULL), (yyvsp[(3) - (3)].list)); }
    break;

  case 1214:
#line 4317 "./sql3.y"
    { (yyval.tree) = t_listst (5, CALL_STMT, (yyvsp[(3) - (6)].box), t_list_to_array (t_CONS ((yyvsp[(1) - (6)].tree), (yyvsp[(5) - (6)].list))), NULL, (ptrlong) 1); }
    break;

  case 1215:
#line 4319 "./sql3.y"
    { (yyval.tree) = (ST *) sqlp_udt_identifier_chain_to_member_handler ((yyvsp[(1) - (4)].list), (caddr_t) (yyvsp[(3) - (4)].list), 0); }
    break;

  case 1216:
#line 4321 "./sql3.y"
    { (yyval.tree) = t_listst (5, CALL_STMT, (yyvsp[(7) - (10)].box), t_list_to_array (t_CONS ((yyvsp[(2) - (10)].tree), (yyvsp[(9) - (10)].list))), NULL, t_list (1, (yyvsp[(4) - (10)].strval))); }
    break;

  case 1217:
#line 4323 "./sql3.y"
    { (yyval.tree) = t_listst (5, CALL_STMT, (yyvsp[(7) - (10)].box), t_list_to_array (t_CONS ((yyvsp[(2) - (10)].tree), (yyvsp[(9) - (10)].list))), NULL, t_list (1, (yyvsp[(4) - (10)].strval))); }
    break;

  case 1218:
#line 4328 "./sql3.y"
    { (yyval.tree) = t_listst (5, CALL_STMT, (yyvsp[(5) - (8)].box), t_list_to_array (t_CONS ((yyvsp[(3) - (8)].tree), (yyvsp[(7) - (8)].list))), NULL, (ptrlong) 1); }
    break;

  case 1219:
#line 4330 "./sql3.y"
    { (yyval.tree) = (ST *) sqlp_udt_identifier_chain_to_member_handler ((yyvsp[(3) - (6)].list), (caddr_t) (yyvsp[(5) - (6)].list), 0); }
    break;

  case 1220:
#line 4332 "./sql3.y"
    { (yyval.tree) = t_listst (5, CALL_STMT, (yyvsp[(9) - (12)].box), t_list_to_array (t_CONS ((yyvsp[(4) - (12)].tree), (yyvsp[(11) - (12)].list))), NULL, t_list (1, (yyvsp[(6) - (12)].strval))); }
    break;

  case 1221:
#line 4334 "./sql3.y"
    { (yyval.tree) = t_listst (5, CALL_STMT, (yyvsp[(9) - (12)].box), t_list_to_array (t_CONS ((yyvsp[(4) - (12)].tree), (yyvsp[(11) - (12)].list))), NULL, t_list (1, (yyvsp[(6) - (12)].strval))); }
    break;

  case 1223:
#line 4340 "./sql3.y"
    { (yyval.tree) = (ST *) sqlp_udt_identifier_chain_to_member_handler (t_NCONC (t_CONS ((yyvsp[(1) - (3)].box), NULL), (yyvsp[(3) - (3)].list)), NULL, 1); }
    break;

  case 1224:
#line 4345 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, (yyvsp[(3) - (3)].box), t_list (1, (yyvsp[(1) - (3)].tree))); }
    break;

  case 1225:
#line 4347 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, t_list (2, (yyvsp[(7) - (7)].box), (yyvsp[(4) - (7)].strval)), t_list (1, (yyvsp[(2) - (7)].tree))); }
    break;

  case 1226:
#line 4349 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, t_list (2, (yyvsp[(7) - (7)].box), (yyvsp[(4) - (7)].strval)), t_list (1, (yyvsp[(2) - (7)].tree))); }
    break;

  case 1227:
#line 4353 "./sql3.y"
    { (yyval.box) = (yyvsp[(1) - (1)].box); }
    break;

  case 1228:
#line 4354 "./sql3.y"
    { (yyval.box) = t_sqlp_box_id_upcase (yytext); }
    break;

  case 1229:
#line 4359 "./sql3.y"
    { (yyval.tree) = t_listst (3, CALL_STMT, (yyvsp[(2) - (5)].strval), t_list_to_array ((yyvsp[(4) - (5)].list))); }
    break;

  case 1230:
#line 4363 "./sql3.y"
    { (yyval.tree) = t_listst (3, UDT_ALTER, (yyvsp[(3) - (4)].strval), (yyvsp[(4) - (4)].tree)); }
    break;

  case 1231:
#line 4367 "./sql3.y"
    { (yyval.tree) = t_listst (2, UDT_MEMBER_ADD, (yyvsp[(3) - (3)].tree)); }
    break;

  case 1232:
#line 4368 "./sql3.y"
    { (yyval.tree) = t_listst (3, UDT_MEMBER_DROP, (yyvsp[(3) - (4)].box), (ptrlong) (yyvsp[(4) - (4)].intval)); }
    break;

  case 1233:
#line 4369 "./sql3.y"
    { (yyval.tree) = t_listst (2, UDT_METHOD_ADD, (yyvsp[(2) - (2)].tree)); }
    break;

  case 1234:
#line 4370 "./sql3.y"
    { (yyval.tree) = t_listst (3, UDT_METHOD_DROP, (yyvsp[(2) - (3)].tree), (ptrlong) (yyvsp[(3) - (3)].intval)); }
    break;

  case 1235:
#line 4374 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 1236:
#line 4375 "./sql3.y"
    { (yyval.box) = t_box_num (1); }
    break;

  case 1237:
#line 4376 "./sql3.y"
    { (yyval.box) = t_box_num (2); }
    break;

  case 1238:
#line 4380 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 1239:
#line 4381 "./sql3.y"
    { (yyval.box) = t_box_num (1); }
    break;

  case 1240:
#line 4386 "./sql3.y"
    {
	     (yyval.tree) = (ST*) t_list (3, CALL_STMT, t_sqlp_box_id_upcase ("DB.DBA.CLR_CREATE_LIBRARY"),
		 t_list (4, (yyvsp[(5) - (7)].tree), (yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].box), (yyvsp[(6) - (7)].box)));
	   }
    break;

  case 1241:
#line 4394 "./sql3.y"
    {
	     (yyval.tree) = (ST*) t_list (3, CALL_STMT, t_sqlp_box_id_upcase ("DB.DBA.CLR_CREATE_ASSEMBLY"),
		 t_list (4, (yyvsp[(5) - (7)].tree), (yyvsp[(3) - (7)].strval), (yyvsp[(7) - (7)].box), (yyvsp[(6) - (7)].box)));
	   }
    break;

  case 1242:
#line 4402 "./sql3.y"
    {
	     (yyval.tree) = (ST*) t_list (3, CALL_STMT, t_sqlp_box_id_upcase ("DB.DBA.CLR_DROP_LIBRARY"),
		 t_list (1, (yyvsp[(3) - (3)].strval)));
	   }
    break;

  case 1243:
#line 4410 "./sql3.y"
    {
	     (yyval.tree) = (ST*) t_list (3, CALL_STMT, t_sqlp_box_id_upcase ("DB.DBA.CLR_DROP_LIBRARY"),
		 t_list (1, (yyvsp[(3) - (3)].strval)));
	   }
    break;

  case 1244:
#line 4421 "./sql3.y"
    { (yyval.tree) = t_listst (5, NULL, NULL, (ptrlong)CP_INT, t_box_num (0xffff), NULL); }
    break;

  case 1245:
#line 4422 "./sql3.y"
    { (yyval.tree) = t_listst (5, NULL, NULL, (ptrlong)CP_INT, (yyvsp[(3) - (4)].box), NULL); }
    break;

  case 1246:
#line 4423 "./sql3.y"
    { (yyval.tree) = t_listst (5, NULL, NULL, (ptrlong)CP_INT, t_box_num (0xffff), NULL); }
    break;

  case 1247:
#line 4424 "./sql3.y"
    { (yyval.tree) = t_listst (5, NULL, NULL, (ptrlong)CP_INT, (yyvsp[(3) - (4)].box), NULL); }
    break;

  case 1248:
#line 4425 "./sql3.y"
    { (yyval.tree) = t_listst (5, NULL, NULL, (ptrlong)CP_WORD, NULL, t_box_num (0xffff)); }
    break;

  case 1249:
#line 4426 "./sql3.y"
    { (yyval.tree) = t_listst (5, NULL, NULL, (ptrlong)CP_WORD, (yyvsp[(3) - (6)].box), (yyvsp[(5) - (6)].box)); }
    break;

  case 1250:
#line 4427 "./sql3.y"
    { (yyval.tree) = t_listst (5, NULL, NULL, (ptrlong)CP_WORD, t_box_num (- unbox ((yyvsp[(4) - (7)].box))), (yyvsp[(6) - (7)].box)); }
    break;

  case 1251:
#line 4432 "./sql3.y"
    { (yyval.box) = (yyvsp[(1) - (1)].box); if (!cl_name_to_host ((yyvsp[(1) - (1)].box))) yyerror ("undefined host name in cluster def"); }
    break;

  case 1252:
#line 4436 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].box), NULL); }
    break;

  case 1253:
#line 4437 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].box), NULL)); }
    break;

  case 1254:
#line 4441 "./sql3.y"
    { (yyval.box) = t_listbox (2, (yyvsp[(2) - (5)].box), (yyvsp[(4) - (5)].box)); }
    break;

  case 1255:
#line 4445 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].box), NULL); }
    break;

  case 1256:
#line 4446 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].box), NULL)); }
    break;

  case 1257:
#line 4451 "./sql3.y"
    { (yyval.tree) = t_listst (3, NULL, t_list_to_array ((yyvsp[(3) - (4)].list)), NULL); }
    break;

  case 1258:
#line 4452 "./sql3.y"
    { (yyval.tree) = t_listst (3, NULL, t_list_to_array ((yyvsp[(3) - (6)].list)), t_list_to_array ((yyvsp[(6) - (6)].list))); }
    break;

  case 1259:
#line 4457 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(1) - (1)].tree), NULL); }
    break;

  case 1260:
#line 4458 "./sql3.y"
    { (yyval.list) = t_NCONC ((yyvsp[(1) - (3)].list), t_CONS ((yyvsp[(3) - (3)].tree), NULL)); }
    break;

  case 1261:
#line 4462 "./sql3.y"
    { (yyval.box) = NULL; }
    break;

  case 1262:
#line 4463 "./sql3.y"
    { (yyval.box) = (caddr_t) 1;}
    break;

  case 1263:
#line 4468 "./sql3.y"
    { (yyval.tree) = t_listst (4, CLUSTER_DEF, t_box_string ((yyvsp[(3) - (5)].box)), (yyvsp[(4) - (5)].box), t_list_to_array ((yyvsp[(5) - (5)].list))); }
    break;

  case 1264:
#line 4472 "./sql3.y"
    { (yyval.list) = t_CONS ((yyvsp[(2) - (2)].tree), NULL); (yyvsp[(2) - (2)].tree)->_.col_part.col = (yyvsp[(1) - (2)].box); }
    break;

  case 1265:
#line 4473 "./sql3.y"
    { (yyvsp[(4) - (4)].tree)->_.col_part.col = (yyvsp[(3) - (4)].box); (yyval.list) = t_NCONC ((yyvsp[(1) - (4)].list), (yyvsp[(4) - (4)].tree));}
    break;

  case 1266:
#line 4477 "./sql3.y"
    { (yyval.list) = NULL;}
    break;

  case 1267:
#line 4478 "./sql3.y"
    { (yyval.list) = (yyvsp[(2) - (3)].list); }
    break;

  case 1268:
#line 4481 "./sql3.y"
    { (yyval.box) = t_sym_string  ("__ALL"); }
    break;

  case 1269:
#line 4482 "./sql3.y"
    { (yyval.box) = (yyvsp[(2) - (2)].box); }
    break;

  case 1270:
#line 4488 "./sql3.y"
    { (yyval.tree) = t_listst (5, PARTITION_DEF,  (yyvsp[(5) - (8)].strval), (yyvsp[(3) - (8)].box), (yyvsp[(7) - (8)].box), t_list_to_array ((yyvsp[(8) - (8)].list))); }
    break;


/* Line 1267 of yacc.c.  */
#line 14582 "sql3.c"
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



