/* ANSI-C code produced by gperf version 3.0.3 */
/* Command-line: /usr/bin/gperf -aCDGptr -Kkwd -L ANSI-C -k'1,2,3,5,7,$' --ignore-case -Nsparql_lex_hash_kw sparqlwords.gperf  */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 24 "sparqlwords.gperf"
struct sparql_keyword { char *kwd; int token; int subtype; };

#define TOTAL_KEYWORDS 172
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 15
#define MIN_HASH_VALUE 166
#define MAX_HASH_VALUE 1259
/* maximum key range = 1094, duplicates = 0 */

#ifndef GPERF_DOWNCASE
#define GPERF_DOWNCASE 1
static unsigned char gperf_downcase[256] =
  {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,
     15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,
     30,  31,  32,  33,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43,  44,
     45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,
     60,  61,  62,  63,  64,  97,  98,  99, 100, 101, 102, 103, 104, 105, 106,
    107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
    122,  91,  92,  93,  94,  95,  96,  97,  98,  99, 100, 101, 102, 103, 104,
    105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119,
    120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134,
    135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149,
    150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164,
    165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179,
    180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194,
    195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209,
    210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224,
    225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
    240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254,
    255
  };
#endif

#ifndef GPERF_CASE_STRCMP
#define GPERF_CASE_STRCMP 1
static int
gperf_case_strcmp (register const char *s1, register const char *s2)
{
  for (;;)
    {
      unsigned char c1 = gperf_downcase[(unsigned char)*s1++];
      unsigned char c2 = gperf_downcase[(unsigned char)*s2++];
      if (c1 != 0 && c1 == c2)
        continue;
      return (int)c1 - (int)c2;
    }
}
#endif

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (register const char *str, register unsigned int len)
{
  static const unsigned short asso_values[] =
    {
      1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260,
      1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260,
      1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260,
      1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260,
      1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260,  140,
         7, 1260,  211,  242,   49, 1260,   89, 1260, 1260, 1260,
      1260, 1260, 1260, 1260, 1260,  240,  138,   58,  168,   41,
       223,  157,  141,   74,   49,   40,  135,  198,  174,  230,
         8,   78,  147,  168,  165,  233,  111,   27,    0,   13,
        23, 1260, 1260, 1260, 1260,  129, 1260,  240,  138,   58,
       168,   41,  223,  157,  141,   74,   49,   40,  135,  198,
       174,  230,    8,   78,  147,  168,  165,  233,  111,   27,
         0,   13,   23, 1260, 1260, 1260, 1260, 1260, 1260, 1260,
      1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260,
      1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260,
      1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260,
      1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260,
      1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260,
      1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260,
      1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260,
      1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260,
      1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260,
      1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260,
      1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260,
      1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260, 1260,
      1260, 1260, 1260, 1260, 1260, 1260
    };
  register int hval = (int)len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[6]];
      /*FALLTHROUGH*/
      case 6:
      case 5:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const struct sparql_keyword wordlist[] =
  {
#line 42 "sparqlwords.gperf"
    {"BY",			BY_L			, 0},
#line 174 "sparqlwords.gperf"
    {"TZ",			SPARQL_BIF		, SPAR_BIF_TZ},
#line 129 "sparqlwords.gperf"
    {"PREFIX",		PREFIX_L		, 0},
#line 98 "sparqlwords.gperf"
    {"LIKE",			LIKE_L			, 0},
#line 195 "sparqlwords.gperf"
    {"WHERE",		WHERE_L			, 0},
#line 45 "sparqlwords.gperf"
    {"CEIL",			SPARQL_BIF		, SPAR_BIF_CEIL},
#line 50 "sparqlwords.gperf"
    {"COPY",			COPY_L			, 0},
#line 79 "sparqlwords.gperf"
    {"IFP",			IFP_L			, 0},
#line 132 "sparqlwords.gperf"
    {"REGEX",		SPARQL_BIF		, SPAR_BIF_REGEX},
#line 87 "sparqlwords.gperf"
    {"IRI",			IRI_L			, 0},
#line 169 "sparqlwords.gperf"
    {"TEXT",			TEXT_L			, 0},
#line 196 "sparqlwords.gperf"
    {"WITH",			WITH_L			, 0},
#line 83 "sparqlwords.gperf"
    {"INDEX",		INDEX_L			, 0},
#line 81 "sparqlwords.gperf"
    {"IN",			IN_L			, 0},
#line 55 "sparqlwords.gperf"
    {"DAY",			SPARQL_BIF		, SPAR_BIF_DAY},
#line 61 "sparqlwords.gperf"
    {"DESC",			DESC_L			, 0},
#line 106 "sparqlwords.gperf"
    {"MAX",			MAX_L			, 0},
#line 198 "sparqlwords.gperf"
    {"YEAR",			SPARQL_BIF		, SPAR_BIF_YEAR},
#line 68 "sparqlwords.gperf"
    {"EXISTS",		EXISTS_L		, 0},
#line 67 "sparqlwords.gperf"
    {"EXCLUSIVE",		EXCLUSIVE_L		, 0},
#line 105 "sparqlwords.gperf"
    {"MAP",			MAP_L			, 0},
#line 52 "sparqlwords.gperf"
    {"CREATE",		CREATE_L		, 0},
#line 118 "sparqlwords.gperf"
    {"NOW",			SPARQL_BIF		, SPAR_BIF_NOW},
#line 89 "sparqlwords.gperf"
    {"ISIRI",		SPARQL_BIF		, SPAR_BIF_ISIRI},
#line 197 "sparqlwords.gperf"
    {"XML",			XML_L			, 0},
#line 175 "sparqlwords.gperf"
    {"T_CYCLES_ONLY",	T_CYCLES_ONLY_L		, 0},
#line 34 "sparqlwords.gperf"
    {"ASK",			ASK_L			, 0},
#line 182 "sparqlwords.gperf"
    {"T_MAX",		T_MAX_L			, 0},
#line 188 "sparqlwords.gperf"
    {"T_STEP",		T_STEP_L		, 0},
#line 147 "sparqlwords.gperf"
    {"SERVICE",		SERVICE_L		, 0},
#line 96 "sparqlwords.gperf"
    {"LCASE",		SPARQL_BIF		, SPAR_BIF_LCASE},
#line 116 "sparqlwords.gperf"
    {"NIL",			NIL_L			, 0},
#line 78 "sparqlwords.gperf"
    {"IF",			SPARQL_BIF		, SPAR_BIF_IF},
#line 104 "sparqlwords.gperf"
    {"MAKE",			MAKE_L			, 0},
#line 134 "sparqlwords.gperf"
    {"REPLACE",		SPARQL_BIF		, SPAR_BIF_REPLACE},
#line 126 "sparqlwords.gperf"
    {"OR",			_BAR_BAR		, 0},
#line 33 "sparqlwords.gperf"
    {"ASC",			ASC_L			, 0},
#line 193 "sparqlwords.gperf"
    {"URI",			SPARQL_BIF		, SPAR_BIF_URI},
#line 44 "sparqlwords.gperf"
    {"CLEAR",		CLEAR_L			, 0},
#line 137 "sparqlwords.gperf"
    {"SCORE",		SCORE_L			, 0},
#line 181 "sparqlwords.gperf"
    {"T_IN",			T_IN_L			, 0},
#line 76 "sparqlwords.gperf"
    {"GROUP",		GROUP_L			, 0},
#line 59 "sparqlwords.gperf"
    {"DELETE",		DELETE_L		, 0},
#line 65 "sparqlwords.gperf"
    {"DROP",			DROP_L			, 0},
#line 128 "sparqlwords.gperf"
    {"PREDICATE",		PREDICATE_L		, 0},
#line 146 "sparqlwords.gperf"
    {"SELECT",		SELECT_L		, 0},
#line 39 "sparqlwords.gperf"
    {"BIJECTION",		BIJECTION_L		, 0},
#line 32 "sparqlwords.gperf"
    {"AS",			AS_L			, 0},
#line 63 "sparqlwords.gperf"
    {"DETACH",		DETACH_L		, 0},
#line 113 "sparqlwords.gperf"
    {"MOVE",			MOVE_L			, 0},
#line 173 "sparqlwords.gperf"
    {"TRUE",			true_L			, 0},
#line 37 "sparqlwords.gperf"
    {"BASE",			BASE_L			, 0},
#line 189 "sparqlwords.gperf"
    {"UCASE",		SPARQL_BIF		, SPAR_BIF_UCASE},
#line 97 "sparqlwords.gperf"
    {"LIBRARY",		LIBRARY_L		, 0},
#line 108 "sparqlwords.gperf"
    {"MIN",			MIN_L			, 0},
#line 70 "sparqlwords.gperf"
    {"FILTER",		FILTER_L		, 0},
#line 171 "sparqlwords.gperf"
    {"TO",			TO_L			, 0},
#line 93 "sparqlwords.gperf"
    {"ISURI",		SPARQL_BIF		, SPAR_BIF_ISURI},
#line 40 "sparqlwords.gperf"
    {"BNODE",		SPARQL_BIF		, SPAR_BIF_BNODE},
#line 158 "sparqlwords.gperf"
    {"STR",			SPARQL_BIF		, SPAR_BIF_STR},
#line 120 "sparqlwords.gperf"
    {"OBJECT",		OBJECT_L		, 0},
#line 86 "sparqlwords.gperf"
    {"INTO",			INTO_L			, 0},
#line 29 "sparqlwords.gperf"
    {"ALL",			ALL_L			, 0},
#line 57 "sparqlwords.gperf"
    {"DEFINE",		DEFINE_L		, 0},
#line 66 "sparqlwords.gperf"
    {"ENCODE_FOR_URI",	SPARQL_BIF		, SPAR_BIF_ENCODE_FOR_URI},
#line 36 "sparqlwords.gperf"
    {"AVG",			AVG_L			, 0},
#line 46 "sparqlwords.gperf"
    {"COALESCE",		SPARQL_BIF		, SPAR_BIF_COALESCE},
#line 121 "sparqlwords.gperf"
    {"OF",			OF_L			, 0},
#line 119 "sparqlwords.gperf"
    {"NULL",			NULL_L			, 0},
#line 170 "sparqlwords.gperf"
    {"TIMEZONE",		SPARQL_BIF		, SPAR_BIF_TIMEZONE},
#line 69 "sparqlwords.gperf"
    {"FALSE",		false_L			, 0},
#line 148 "sparqlwords.gperf"
    {"SHA1",			SPARQL_BIF		, SPAR_BIF_SHA1},
#line 82 "sparqlwords.gperf"
    {"INF",			INF_L			, 0},
#line 101 "sparqlwords.gperf"
    {"LOCAL",		LOCAL_L			, 0},
#line 162 "sparqlwords.gperf"
    {"STRLEN",		SPARQL_BIF		, SPAR_BIF_STRLEN},
#line 152 "sparqlwords.gperf"
    {"SHA512",		SPARQL_BIF		, SPAR_BIF_SHA512},
#line 88 "sparqlwords.gperf"
    {"ISBLANK",		SPARQL_BIF		, SPAR_BIF_ISBLANK},
#line 94 "sparqlwords.gperf"
    {"LANG",			LANG_L			, 0},
#line 62 "sparqlwords.gperf"
    {"DESCRIBE",		DESCRIBE_L		, 0},
#line 64 "sparqlwords.gperf"
    {"DISTINCT",		DISTINCT_L		, 0},
#line 27 "sparqlwords.gperf"
    {"ABS",			SPARQL_BIF		, SPAR_BIF_ABS},
#line 153 "sparqlwords.gperf"
    {"SILENT",		SILENT_L		, 0},
#line 130 "sparqlwords.gperf"
    {"QUAD",			QUAD_L			, 0},
#line 131 "sparqlwords.gperf"
    {"RAND",			SPARQL_BIF		, SPAR_BIF_RAND},
#line 85 "sparqlwords.gperf"
    {"INSERT",		INSERT_L		, 0},
#line 155 "sparqlwords.gperf"
    {"SOURCE",		GRAPH_L			, 0},
#line 117 "sparqlwords.gperf"
    {"NOT",			NOT_L			, 0},
#line 99 "sparqlwords.gperf"
    {"LIMIT",		LIMIT_L			, 0},
#line 28 "sparqlwords.gperf"
    {"ADD",			ADD_L			, 0},
#line 179 "sparqlwords.gperf"
    {"T_EXISTS",		T_EXISTS_L		, 0},
#line 31 "sparqlwords.gperf"
    {"AND",			_AMP_AMP		, 0},
#line 133 "sparqlwords.gperf"
    {"REDUCED",		REDUCED_L		, 0},
#line 115 "sparqlwords.gperf"
    {"NAN",			NAN_L			, 0},
#line 149 "sparqlwords.gperf"
    {"SHA224",		SPARQL_BIF		, SPAR_BIF_SHA224},
#line 43 "sparqlwords.gperf"
    {"CLASS",		CLASS_L			, 0},
#line 35 "sparqlwords.gperf"
    {"ATTACH",		ATTACH_L		, 0},
#line 102 "sparqlwords.gperf"
    {"LOAD",			LOAD_L			, 0},
#line 156 "sparqlwords.gperf"
    {"SQLQUERY",		SQLQUERY_L		, 0},
#line 145 "sparqlwords.gperf"
    {"SECONDS",		SPARQL_BIF		, SPAR_BIF_SECONDS},
#line 109 "sparqlwords.gperf"
    {"MINUS",		MINUS_L			, 0},
#line 185 "sparqlwords.gperf"
    {"T_NO_CYCLES",		T_NO_CYCLES_L		, 0},
#line 154 "sparqlwords.gperf"
    {"SOFT",			SOFT_L			, 0},
#line 38 "sparqlwords.gperf"
    {"BINDINGS",		BINDINGS_L		, 0},
#line 194 "sparqlwords.gperf"
    {"USING",		USING_L			, 0},
#line 54 "sparqlwords.gperf"
    {"DATATYPE",		DATATYPE_L		, 0},
#line 100 "sparqlwords.gperf"
    {"LITERAL",		LITERAL_L		, 0},
#line 167 "sparqlwords.gperf"
    {"SUM",			SUM_L			, 0},
#line 72 "sparqlwords.gperf"
    {"FROM",			FROM_L			, 0},
#line 60 "sparqlwords.gperf"
    {"DEREF",		DEREF_L			, 0},
#line 138 "sparqlwords.gperf"
    {"SCORE_LIMIT",		SCORE_LIMIT_L		, 0},
#line 125 "sparqlwords.gperf"
    {"OPTION",		OPTION_L		, 0},
#line 159 "sparqlwords.gperf"
    {"STRDT",		SPARQL_BIF		, SPAR_BIF_STRDT},
#line 53 "sparqlwords.gperf"
    {"DATA",			DATA_L			, 0},
#line 91 "sparqlwords.gperf"
    {"ISNUMERIC",		SPARQL_BIF		, SPAR_BIF_ISNUMERIC},
#line 77 "sparqlwords.gperf"
    {"HAVING",		HAVING_L		, 0},
#line 75 "sparqlwords.gperf"
    {"GRAPH",		GRAPH_L			, 0},
#line 90 "sparqlwords.gperf"
    {"ISLITERAL",		SPARQL_BIF		, SPAR_BIF_ISLITERAL},
#line 192 "sparqlwords.gperf"
    {"UNION",		UNION_L			, 0},
#line 111 "sparqlwords.gperf"
    {"MODIFY",		MODIFY_L		, 0},
#line 30 "sparqlwords.gperf"
    {"ALTER",		ALTER_L			, 0},
#line 92 "sparqlwords.gperf"
    {"ISREF",		SPARQL_BIF		, SPAR_BIF_ISREF},
#line 84 "sparqlwords.gperf"
    {"INFERENCE",		INFERENCE_L		, 0},
#line 135 "sparqlwords.gperf"
    {"RETURNS",		RETURNS_L		, 0},
#line 127 "sparqlwords.gperf"
    {"ORDER",		ORDER_L			, 0},
#line 183 "sparqlwords.gperf"
    {"T_MIN",		T_MIN_L			, 0},
#line 150 "sparqlwords.gperf"
    {"SHA256",		SPARQL_BIF		, SPAR_BIF_SHA256},
#line 80 "sparqlwords.gperf"
    {"IDENTIFIED",		IDENTIFIED_L		, 0},
#line 176 "sparqlwords.gperf"
    {"T_DIRECTION",		T_DIRECTION_L		, 0},
#line 107 "sparqlwords.gperf"
    {"MD5",			SPARQL_BIF		, SPAR_BIF_MD5},
#line 151 "sparqlwords.gperf"
    {"SHA384",		SPARQL_BIF		, SPAR_BIF_SHA384},
#line 51 "sparqlwords.gperf"
    {"COUNT",		COUNT_L			, 0},
#line 166 "sparqlwords.gperf"
    {"SUBSTR",		SPARQL_BIF		, SPAR_BIF_SUBSTR},
#line 184 "sparqlwords.gperf"
    {"T_OUT",		T_OUT_L			, 0},
#line 47 "sparqlwords.gperf"
    {"CONCAT",		SPARQL_BIF		, SPAR_BIF_CONCAT},
#line 177 "sparqlwords.gperf"
    {"T_DISTINCT",		T_DISTINCT_L		, 0},
#line 187 "sparqlwords.gperf"
    {"T_SHORTEST_ONLY",	T_SHORTEST_ONLY_L	, 0},
#line 71 "sparqlwords.gperf"
    {"FLOOR",		SPARQL_BIF		, SPAR_BIF_FLOOR},
#line 123 "sparqlwords.gperf"
    {"OFFSET",		OFFSET_L		, 0},
#line 112 "sparqlwords.gperf"
    {"MONTH",		SPARQL_BIF		, SPAR_BIF_MONTH},
#line 157 "sparqlwords.gperf"
    {"STORAGE",		STORAGE_L		, 0},
#line 178 "sparqlwords.gperf"
    {"T_END_FLAG",		T_END_FLAG_L		, 0},
#line 186 "sparqlwords.gperf"
    {"T_NO_ORDER",		T_NO_ORDER_L		, 0},
#line 165 "sparqlwords.gperf"
    {"SUBJECT",		SUBJECT_L		, 0},
#line 141 "sparqlwords.gperf"
    {"SAME_AS_P",		SAME_AS_P_L		, 0},
#line 172 "sparqlwords.gperf"
    {"TRANSITIVE",		TRANSITIVE_L		, 0},
#line 41 "sparqlwords.gperf"
    {"BOUND",		BOUND_L			, 0},
#line 74 "sparqlwords.gperf"
    {"HOURS",		SPARQL_BIF		, SPAR_BIF_HOURS},
#line 136 "sparqlwords.gperf"
    {"ROUND",		SPARQL_BIF		, SPAR_BIF_ROUND},
#line 114 "sparqlwords.gperf"
    {"NAMED",		NAMED_L			, 0},
#line 110 "sparqlwords.gperf"
    {"MINUTES",		SPARQL_BIF		, SPAR_BIF_MINUTES},
#line 103 "sparqlwords.gperf"
    {"MACRO",		MACRO_L			, 0},
#line 163 "sparqlwords.gperf"
    {"STRSTARTS",		SPARQL_BIF		, SPAR_BIF_STRSTARTS},
#line 160 "sparqlwords.gperf"
    {"STRENDS",		SPARQL_BIF		, SPAR_BIF_STRENDS},
#line 168 "sparqlwords.gperf"
    {"TABLE_OPTION",		TABLE_OPTION_L		, 0},
#line 56 "sparqlwords.gperf"
    {"DEFAULT",		DEFAULT_L		, 0},
#line 180 "sparqlwords.gperf"
    {"T_FINAL_AS",		T_FINAL_AS_L		, 0},
#line 124 "sparqlwords.gperf"
    {"OPTIONAL",		OPTIONAL_L		, 0},
#line 164 "sparqlwords.gperf"
    {"SUBCLASS",		SUBCLASS_L		, 0},
#line 191 "sparqlwords.gperf"
    {"UNDEF",		UNDEF_L			, 0},
#line 48 "sparqlwords.gperf"
    {"CONSTRUCT",		CONSTRUCT_L		, 0},
#line 161 "sparqlwords.gperf"
    {"STRLANG",		SPARQL_BIF		, SPAR_BIF_STRLANG},
#line 49 "sparqlwords.gperf"
    {"CONTAINS",		SPARQL_BIF		, SPAR_BIF_CONTAINS},
#line 58 "sparqlwords.gperf"
    {"DEFMACRO",		DEFMACRO_L		, 0},
#line 139 "sparqlwords.gperf"
    {"SAME_AS",		SAME_AS_L		, 0},
#line 142 "sparqlwords.gperf"
    {"SAME_AS_S",		SAME_AS_S_L		, 0},
#line 95 "sparqlwords.gperf"
    {"LANGMATCHES",		SPARQL_BIF		, SPAR_BIF_LANGMATCHES},
#line 190 "sparqlwords.gperf"
    {"UNBOUND",		UNBOUND_L		, 0},
#line 144 "sparqlwords.gperf"
    {"SAMETERM",		SPARQL_BIF		, SPAR_BIF_SAMETERM},
#line 140 "sparqlwords.gperf"
    {"SAME_AS_O",		SAME_AS_O_L		, 0},
#line 143 "sparqlwords.gperf"
    {"SAME_AS_S_O",		SAME_AS_S_O_L		, 0},
#line 73 "sparqlwords.gperf"
    {"FUNCTION",		FUNCTION_L		, 0},
#line 122 "sparqlwords.gperf"
    {"OFFBAND",		OFFBAND_L		, 0}
  };

static const short lookup[] =
  {
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,   0,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,   1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,   2,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,   3,  -1,   4,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,   5,   6,  -1,  -1,   7,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      8,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,   9,  -1,  -1,  10,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  11,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  12,  -1,  -1,  13,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  14,  -1,  15,
     -1,  16,  -1,  -1,  -1,  17,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  18,  -1,  19,  20,  21,  -1,
     -1,  22,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  23,
     -1,  24,  -1,  -1,  -1,  -1,  -1,  25,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  26,  -1,  -1,  -1,  -1,  -1,  27,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  28,  -1,  29,
     30,  31,  32,  33,  -1,  34,  35,  36,  -1,  -1,
     -1,  37,  -1,  38,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  39,  -1,  -1,  40,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  41,  42,  43,  -1,  -1,
     44,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  45,  -1,  -1,  46,  -1,  47,  48,
     -1,  -1,  -1,  -1,  49,  -1,  -1,  -1,  -1,  -1,
     50,  51,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  52,  -1,
     53,  -1,  -1,  54,  -1,  -1,  55,  56,  57,  58,
     59,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  60,  61,  62,  -1,
     -1,  -1,  -1,  63,  -1,  -1,  -1,  -1,  64,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  65,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  66,  -1,  67,  -1,
     -1,  68,  -1,  69,  -1,  70,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  71,  -1,  -1,  -1,  72,  73,  -1,
     -1,  74,  75,  -1,  -1,  -1,  -1,  76,  -1,  -1,
     77,  78,  -1,  -1,  -1,  79,  -1,  80,  -1,  -1,
     -1,  -1,  81,  82,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  83,  84,  -1,  85,  86,  -1,  -1,
     -1,  -1,  87,  -1,  -1,  -1,  -1,  88,  -1,  -1,
     89,  -1,  -1,  90,  -1,  -1,  -1,  91,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  92,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  93,  94,  95,  -1,  96,  -1,  -1,
     -1,  -1,  97,  -1,  98,  -1,  -1,  99,  -1, 100,
    101,  -1,  -1, 102, 103, 104,  -1,  -1, 105,  -1,
    106,  -1, 107,  -1,  -1,  -1,  -1, 108, 109,  -1,
     -1,  -1,  -1, 110,  -1, 111,  -1, 112,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 113, 114,
     -1, 115,  -1, 116, 117,  -1,  -1,  -1, 118, 119,
    120,  -1, 121, 122, 123, 124, 125,  -1,  -1, 126,
     -1,  -1, 127, 128,  -1, 129, 130, 131,  -1, 132,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 133,  -1,  -1,  -1,  -1,  -1, 134,
     -1,  -1,  -1,  -1,  -1, 135,  -1, 136, 137, 138,
     -1,  -1, 139, 140,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 141,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 142,  -1,  -1,
    143,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 144,  -1,  -1,  -1,
     -1,  -1, 145,  -1,  -1, 146,  -1,  -1,  -1,  -1,
     -1, 147,  -1, 148, 149,  -1,  -1,  -1,  -1,  -1,
     -1, 150,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 151,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 152,  -1,  -1,
    153,  -1, 154,  -1, 155,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 156,  -1, 157,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 158,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 159,  -1,  -1,  -1,  -1,  -1,
     -1, 160,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 161,  -1,  -1,  -1,  -1, 162,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 163,  -1,
    164,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 165,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 166,  -1,  -1, 167,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 168,  -1, 169,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 170,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 171
  };

#ifdef __GNUC__
__inline
#ifdef __GNUC_STDC_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct sparql_keyword *
sparql_lex_hash_kw (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = wordlist[index].kwd;

              if ((((unsigned char)*str ^ (unsigned char)*s) & ~32) == 0 && !gperf_case_strcmp (str, s))
                return &wordlist[index];
            }
        }
    }
  return 0;
}
