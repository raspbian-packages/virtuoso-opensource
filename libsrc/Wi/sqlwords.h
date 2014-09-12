/* ANSI-C code produced by gperf version 3.0.3 */
/* Command-line: /usr/bin/gperf -aCDGptr -Kkeiiyword -L ANSI-C -k'1,2,3,6,9,$' -Nlex_hash_kw ./sqlwords.gperf  */

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

#line 24 "./sqlwords.gperf"
struct keyword { char *keiiyword; int token; };

#define TOTAL_KEYWORDS 312
#define MIN_WORD_LENGTH 1
#define MAX_WORD_LENGTH 17
#define MIN_HASH_VALUE 153
#define MAX_HASH_VALUE 2029
/* maximum key range = 1877, duplicates = 0 */

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
      2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030,
      2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030,
      2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030,
      2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030,
      2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030,
      2030, 2030, 2030, 2030, 2030, 2030,  182, 2030, 2030, 2030,
      2030, 2030, 2030, 2030, 2030,   59,  252,  199,  337,    7,
       328,  214,  440,  277,  202,   89,  112,  241,  204,  191,
       393,  506,  104,  157,  183,  153,  505,   22,  486,  147,
       203, 2030, 2030, 2030, 2030,  433, 2030, 2030, 2030, 2030,
      2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030,
      2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030,
      2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030,
      2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030,
      2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030,
      2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030,
      2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030,
      2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030,
      2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030,
      2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030,
      2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030,
      2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030,
      2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030,
      2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030,
      2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030, 2030,
      2030, 2030, 2030, 2030, 2030, 2030, 2030
    };
  register int hval = (int)len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[8]];
      /*FALLTHROUGH*/
      case 8:
      case 7:
      case 6:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
      case 4:
      case 3:
        hval += asso_values[(unsigned char)str[2]+1];
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

static const struct keyword wordlist[] =
  {
#line 255 "./sqlwords.gperf"
    {"REVOKE", REVOKE},
#line 186 "./sqlwords.gperf"
    {"LEVEL", LEVEL_L},
#line 120 "./sqlwords.gperf"
    {"ELSE", ELSE},
#line 246 "./sqlwords.gperf"
    {"RENAME", RENAME},
#line 245 "./sqlwords.gperf"
    {"REMOTE", REMOTE},
#line 180 "./sqlwords.gperf"
    {"JAVA", JAVA},
#line 50 "./sqlwords.gperf"
    {"AS", AS},
#line 67 "./sqlwords.gperf"
    {"C", C},
#line 217 "./sqlwords.gperf"
    {"OR", OR},
#line 218 "./sqlwords.gperf"
    {"ORDER", ORDER},
#line 256 "./sqlwords.gperf"
    {"REXECUTE", REXECUTE},
#line 45 "./sqlwords.gperf"
    {"ALTER", ALTER},
#line 184 "./sqlwords.gperf"
    {"LANGUAGE", LANGUAGE},
#line 261 "./sqlwords.gperf"
    {"SAFE", SAFE_L},
#line 182 "./sqlwords.gperf"
    {"KEY", KEY},
#line 71 "./sqlwords.gperf"
    {"CASE", CASE},
#line 301 "./sqlwords.gperf"
    {"TABLE", TABLE},
#line 196 "./sqlwords.gperf"
    {"MODULE", MODULE},
#line 335 "./sqlwords.gperf"
    {"WORK", WORK},
#line 49 "./sqlwords.gperf"
    {"ARRAY", ARRAY},
#line 314 "./sqlwords.gperf"
    {"UNDER", UNDER},
#line 198 "./sqlwords.gperf"
    {"NAME", NAME_L},
#line 241 "./sqlwords.gperf"
    {"REAL", REAL},
#line 122 "./sqlwords.gperf"
    {"ENABLE", ENABLE_L},
#line 58 "./sqlwords.gperf"
    {"BEFORE", BEFORE},
#line 48 "./sqlwords.gperf"
    {"ARE", ARE},
#line 269 "./sqlwords.gperf"
    {"SET", SET},
#line 243 "./sqlwords.gperf"
    {"REFERENCES", REFERENCES},
#line 268 "./sqlwords.gperf"
    {"SERIALIZABLE", SERIALIZABLE_L},
#line 188 "./sqlwords.gperf"
    {"LIKE", LIKE},
#line 185 "./sqlwords.gperf"
    {"LEFT", LEFT},
#line 125 "./sqlwords.gperf"
    {"ESCAPE", ESCAPE},
#line 303 "./sqlwords.gperf"
    {"TEXT", TEXT_L},
#line 240 "./sqlwords.gperf"
    {"READS", READS},
#line 44 "./sqlwords.gperf"
    {"ALL", ALL},
#line 260 "./sqlwords.gperf"
    {"ROLE", ROLE_L},
#line 66 "./sqlwords.gperf"
    {"BY", BY},
#line 285 "./sqlwords.gperf"
    {"STYLE", STYLE},
#line 124 "./sqlwords.gperf"
    {"END", ENDX},
#line 104 "./sqlwords.gperf"
    {"DATE", DATE_L},
#line 97 "./sqlwords.gperf"
    {"CUBE", CUBE},
#line 274 "./sqlwords.gperf"
    {"SOME", SOME},
#line 308 "./sqlwords.gperf"
    {"TO", TO},
#line 317 "./sqlwords.gperf"
    {"UPDATE", UPDATE},
#line 81 "./sqlwords.gperf"
    {"CLR", CLR},
#line 316 "./sqlwords.gperf"
    {"UNIQUE", UNIQUE},
#line 204 "./sqlwords.gperf"
    {"NO", NO_L},
#line 144 "./sqlwords.gperf"
    {"GENERAL", GENERAL},
#line 176 "./sqlwords.gperf"
    {"IS", IS},
#line 199 "./sqlwords.gperf"
    {"NATURAL", NATURAL},
#line 146 "./sqlwords.gperf"
    {"GO", GO},
#line 214 "./sqlwords.gperf"
    {"ON", ON},
#line 109 "./sqlwords.gperf"
    {"DELETE", DELETE_L},
#line 220 "./sqlwords.gperf"
    {"OUTER", OUTER},
#line 313 "./sqlwords.gperf"
    {"TRIGGER", TRIGGER},
#line 46 "./sqlwords.gperf"
    {"AND", AND},
#line 103 "./sqlwords.gperf"
    {"DATA", DATA},
#line 68 "./sqlwords.gperf"
    {"CALL", CALL},
#line 47 "./sqlwords.gperf"
    {"ANY", ANY},
#line 250 "./sqlwords.gperf"
    {"RESIGNAL", RESIGNAL},
#line 72 "./sqlwords.gperf"
    {"CAST", CAST},
#line 60 "./sqlwords.gperf"
    {"BEST", BEST},
#line 61 "./sqlwords.gperf"
    {"BETWEEN", BETWEEN},
#line 254 "./sqlwords.gperf"
    {"RETURNS", RETURNS},
#line 262 "./sqlwords.gperf"
    {"SAME_AS", SAME_AS},
#line 56 "./sqlwords.gperf"
    {"AUTOREGISTER", AUTOREGISTER_L},
#line 318 "./sqlwords.gperf"
    {"USE", USE},
#line 42 "./sqlwords.gperf"
    {"AFTER", AFTER},
#line 213 "./sqlwords.gperf"
    {"OLD", OLD},
#line 95 "./sqlwords.gperf"
    {"CREATE", CREATE},
#line 242 "./sqlwords.gperf"
    {"REF", REF},
#line 252 "./sqlwords.gperf"
    {"RESULT", RESULT},
#line 54 "./sqlwords.gperf"
    {"ATTRIBUTE", ATTRIBUTE},
#line 183 "./sqlwords.gperf"
    {"KEYSET", KEYSET},
#line 306 "./sqlwords.gperf"
    {"TIME", TIME},
#line 332 "./sqlwords.gperf"
    {"WHILE", WHILE},
#line 253 "./sqlwords.gperf"
    {"RETURN", RETURN},
#line 219 "./sqlwords.gperf"
    {"OUT", OUT_L},
#line 157 "./sqlwords.gperf"
    {"IN", IN_L},
#line 258 "./sqlwords.gperf"
    {"ROLLBACK", ROLLBACK},
#line 286 "./sqlwords.gperf"
    {"SYNC", SYNC},
#line 239 "./sqlwords.gperf"
    {"READ", READ_L},
#line 83 "./sqlwords.gperf"
    {"COBOL", COBOL},
#line 39 "./sqlwords.gperf"
    {"ADA", ADA},
#line 191 "./sqlwords.gperf"
    {"LONG", LONG_L},
#line 206 "./sqlwords.gperf"
    {"NULL", NULLX},
#line 236 "./sqlwords.gperf"
    {"PURGE", PURGE},
#line 78 "./sqlwords.gperf"
    {"CLOSE", CLOSE},
#line 115 "./sqlwords.gperf"
    {"DO", DO},
#line 201 "./sqlwords.gperf"
    {"NEW", NEW},
#line 102 "./sqlwords.gperf"
    {"CURSOR", CURSOR},
#line 110 "./sqlwords.gperf"
    {"DESC", DESC},
#line 320 "./sqlwords.gperf"
    {"USING", USING},
#line 203 "./sqlwords.gperf"
    {"NOT", NOT},
#line 267 "./sqlwords.gperf"
    {"SELF", SELF_L},
#line 194 "./sqlwords.gperf"
    {"MODIFY", MODIFY},
#line 40 "./sqlwords.gperf"
    {"ADD", ADD},
#line 55 "./sqlwords.gperf"
    {"AUTHORIZATION", AUTHORIZATION},
#line 319 "./sqlwords.gperf"
    {"USER", USER},
#line 273 "./sqlwords.gperf"
    {"SOFT", SOFT},
#line 171 "./sqlwords.gperf"
    {"INTEGER", INTEGER},
#line 147 "./sqlwords.gperf"
    {"GOTO", GOTO},
#line 51 "./sqlwords.gperf"
    {"ASC", ASC},
#line 265 "./sqlwords.gperf"
    {"SCHEMA", SCHEMA},
#line 148 "./sqlwords.gperf"
    {"GRANT", GRANT},
#line 197 "./sqlwords.gperf"
    {"MUMPS", MUMPS},
#line 251 "./sqlwords.gperf"
    {"RESTRICT", RESTRICT},
#line 163 "./sqlwords.gperf"
    {"INDICATOR", INDICATOR},
#line 88 "./sqlwords.gperf"
    {"COMPRESS", COMPRESS},
#line 315 "./sqlwords.gperf"
    {"UNION", UNION},
#line 266 "./sqlwords.gperf"
    {"SELECT", SELECT},
#line 284 "./sqlwords.gperf"
    {"START", START_L},
#line 164 "./sqlwords.gperf"
    {"INNER", INNER},
#line 136 "./sqlwords.gperf"
    {"FOR", FOR},
#line 200 "./sqlwords.gperf"
    {"NCHAR", NCHAR},
#line 70 "./sqlwords.gperf"
    {"CASCADE", CASCADE},
#line 334 "./sqlwords.gperf"
    {"WITHOUT", WITHOUT_L},
#line 107 "./sqlwords.gperf"
    {"DECLARE", DECLARE},
#line 92 "./sqlwords.gperf"
    {"CONTINUE", CONTINUE},
#line 302 "./sqlwords.gperf"
    {"TEMPORARY", TEMPORARY},
#line 331 "./sqlwords.gperf"
    {"WHERE", WHERE},
#line 181 "./sqlwords.gperf"
    {"JOIN", JOIN},
#line 52 "./sqlwords.gperf"
    {"ASSEMBLY", ASSEMBLY_L},
#line 151 "./sqlwords.gperf"
    {"HANDLER", HANDLER},
#line 41 "./sqlwords.gperf"
    {"ADMIN", ADMIN_L},
#line 82 "./sqlwords.gperf"
    {"COALESCE", COALESCE},
#line 322 "./sqlwords.gperf"
    {"VALUE", VALUE},
#line 170 "./sqlwords.gperf"
    {"INT", INTEGER},
#line 84 "./sqlwords.gperf"
    {"COLLATE", COLLATE},
#line 175 "./sqlwords.gperf"
    {"INTO", INTO},
#line 244 "./sqlwords.gperf"
    {"REFERENCING", REFERENCING},
#line 142 "./sqlwords.gperf"
    {"FULL", FULL},
#line 105 "./sqlwords.gperf"
    {"DATETIME", DATETIME},
#line 187 "./sqlwords.gperf"
    {"LIBRARY", LIBRARY_L},
#line 310 "./sqlwords.gperf"
    {"TYPE", TYPE},
#line 211 "./sqlwords.gperf"
    {"OF", OF},
#line 96 "./sqlwords.gperf"
    {"CROSS", CROSS},
#line 106 "./sqlwords.gperf"
    {"DECIMAL", DECIMAL_L},
#line 108 "./sqlwords.gperf"
    {"DEFAULT", DEFAULT},
#line 223 "./sqlwords.gperf"
    {"PASCAL", PASCAL_L},
#line 118 "./sqlwords.gperf"
    {"DTD", DTD},
#line 275 "./sqlwords.gperf"
    {"SOURCE", SOURCE},
#line 93 "./sqlwords.gperf"
    {"CONVERT", CONVERT},
#line 321 "./sqlwords.gperf"
    {"VALIDATE", VALIDATE_L},
#line 195 "./sqlwords.gperf"
    {"MODIFIES", MODIFIES},
#line 132 "./sqlwords.gperf"
    {"EXIT", EXIT},
#line 168 "./sqlwords.gperf"
    {"INSTANCE", INSTANCE_L},
#line 325 "./sqlwords.gperf"
    {"VARCHAR", VARCHAR},
#line 205 "./sqlwords.gperf"
    {"NOVALIDATE", NOVALIDATE_L},
#line 333 "./sqlwords.gperf"
    {"WITH", WITH},
#line 98 "./sqlwords.gperf"
    {"CURRENT", CURRENT},
#line 59 "./sqlwords.gperf"
    {"BEGIN", BEGINX},
#line 134 "./sqlwords.gperf"
    {"FINAL", FINAL_L},
#line 100 "./sqlwords.gperf"
    {"CURRENT_TIME", CURRENT_TIME},
#line 112 "./sqlwords.gperf"
    {"DISABLE", DISABLE_L},
#line 247 "./sqlwords.gperf"
    {"REPEATABLE", REPEATABLE_L},
#line 133 "./sqlwords.gperf"
    {"FETCH", FETCH},
#line 79 "./sqlwords.gperf"
    {"CLUSTER", CLUSTER},
#line 156 "./sqlwords.gperf"
    {"IF", IF},
#line 189 "./sqlwords.gperf"
    {"LOCATOR", LOCATOR},
#line 139 "./sqlwords.gperf"
    {"FORTRAN", FORTRAN},
#line 305 "./sqlwords.gperf"
    {"TIES", TIES},
#line 43 "./sqlwords.gperf"
    {"AGGREGATE", AGGREGATE},
#line 225 "./sqlwords.gperf"
    {"PERCENT", PERCENT},
#line 152 "./sqlwords.gperf"
    {"HAVING", HAVING},
#line 232 "./sqlwords.gperf"
    {"PRIMARY", PRIMARY},
#line 173 "./sqlwords.gperf"
    {"INTERNAL", INTERNAL},
#line 190 "./sqlwords.gperf"
    {"LOG", LOGX},
#line 121 "./sqlwords.gperf"
    {"ELSEIF", ELSEIF},
#line 86 "./sqlwords.gperf"
    {"COMMIT", COMMIT},
#line 130 "./sqlwords.gperf"
    {"EXTERNAL", EXTERNAL},
#line 287 "./sqlwords.gperf"
    {"SYSTEM", SYSTEM},
#line 281 "./sqlwords.gperf"
    {"SQLSTATE", SQLSTATE_L},
#line 160 "./sqlwords.gperf"
    {"INDEX", INDEX},
#line 90 "./sqlwords.gperf"
    {"CONSTRUCTOR", CONSTRUCTOR},
#line 233 "./sqlwords.gperf"
    {"PRIVILEGES", PRIVILEGES},
#line 228 "./sqlwords.gperf"
    {"PLI", PLI},
#line 326 "./sqlwords.gperf"
    {"VARIABLE", VARIABLE},
#line 283 "./sqlwords.gperf"
    {"STATIC", STATIC_L},
#line 329 "./sqlwords.gperf"
    {"WHEN", WHEN},
#line 73 "./sqlwords.gperf"
    {"CHAR", CHARACTER},
#line 257 "./sqlwords.gperf"
    {"RIGHT", RIGHT},
#line 127 "./sqlwords.gperf"
    {"EXCLUSIVE", EXCLUSIVE},
#line 129 "./sqlwords.gperf"
    {"EXISTS", EXISTS},
#line 128 "./sqlwords.gperf"
    {"EXECUTE", EXECUTE},
#line 278 "./sqlwords.gperf"
    {"SQL", SQL_L},
#line 63 "./sqlwords.gperf"
    {"BINARY", BINARY},
#line 135 "./sqlwords.gperf"
    {"FLOAT", FLOAT_L},
#line 91 "./sqlwords.gperf"
    {"CONTAINS", CONTAINS},
#line 294 "./sqlwords.gperf"
    {"T_IN", T_IN},
#line 296 "./sqlwords.gperf"
    {"T_MIN", T_MIN},
#line 276 "./sqlwords.gperf"
    {"SPARQL", SPARQL_L},
#line 131 "./sqlwords.gperf"
    {"EXTRACT", EXTRACT},
#line 167 "./sqlwords.gperf"
    {"INSERT", INSERT},
#line 208 "./sqlwords.gperf"
    {"NUMERIC", NUMERIC},
#line 85 "./sqlwords.gperf"
    {"COLUMN", COLUMN},
#line 123 "./sqlwords.gperf"
    {"ENCODING", ENCODING},
#line 116 "./sqlwords.gperf"
    {"DOUBLE", DOUBLE_L},
#line 75 "./sqlwords.gperf"
    {"CHECK", CHECK},
#line 165 "./sqlwords.gperf"
    {"INOUT", INOUT_L},
#line 327 "./sqlwords.gperf"
    {"VECTOR", VECTOR_L},
#line 212 "./sqlwords.gperf"
    {"OFF", OFF},
#line 169 "./sqlwords.gperf"
    {"INSTEAD", INSTEAD},
#line 99 "./sqlwords.gperf"
    {"CURRENT_DATE", CURRENT_DATE},
#line 141 "./sqlwords.gperf"
    {"FROM", FROM},
#line 193 "./sqlwords.gperf"
    {"METHOD", METHOD},
#line 89 "./sqlwords.gperf"
    {"CONSTRAINT", CONSTRAINT},
#line 336 "./sqlwords.gperf"
    {"XML", XML},
#line 311 "./sqlwords.gperf"
    {"TRANSACTION", TRANSACTION_L},
#line 192 "./sqlwords.gperf"
    {"LOOP", LOOP},
#line 138 "./sqlwords.gperf"
    {"FOREIGN", FOREIGN},
#line 226 "./sqlwords.gperf"
    {"PERMISSION_SET", PERMISSION_SET},
#line 149 "./sqlwords.gperf"
    {"GROUP", GROUP},
#line 179 "./sqlwords.gperf"
    {"IRI_ID_8", IRI_ID_8},
#line 227 "./sqlwords.gperf"
    {"PERSISTENT", PERSISTENT},
#line 293 "./sqlwords.gperf"
    {"T_FINAL_AS", T_FINAL_AS},
#line 271 "./sqlwords.gperf"
    {"SMALLINT", SMALLINT},
#line 298 "./sqlwords.gperf"
    {"T_NO_ORDER", T_NO_ORDER},
#line 215 "./sqlwords.gperf"
    {"OPEN", OPEN},
#line 289 "./sqlwords.gperf"
    {"T_DIRECTION", T_DIRECTION},
#line 323 "./sqlwords.gperf"
    {"VALUES", VALUES},
#line 153 "./sqlwords.gperf"
    {"HASH", HASH},
#line 94 "./sqlwords.gperf"
    {"CORRESPONDING", CORRESPONDING},
#line 328 "./sqlwords.gperf"
    {"VIEW", VIEW},
#line 235 "./sqlwords.gperf"
    {"PUBLIC", PUBLIC},
#line 216 "./sqlwords.gperf"
    {"OPTION", OPTION},
#line 202 "./sqlwords.gperf"
    {"NONINCREMENTAL", NONINCREMENTAL},
#line 145 "./sqlwords.gperf"
    {"GENERATED", GENERATED},
#line 119 "./sqlwords.gperf"
    {"DYNAMIC", DYNAMIC},
#line 304 "./sqlwords.gperf"
    {"THEN", THEN},
#line 143 "./sqlwords.gperf"
    {"FUNCTION", FUNCTION},
#line 172 "./sqlwords.gperf"
    {"INTERSECT", INTERSECT},
#line 224 "./sqlwords.gperf"
    {"PASSWORD", PASSWORD},
#line 166 "./sqlwords.gperf"
    {"INPUT", INPUT},
#line 69 "./sqlwords.gperf"
    {"CALLED", CALLED},
#line 162 "./sqlwords.gperf"
    {"INDEX_ONLY", INDEX_ONLY},
#line 114 "./sqlwords.gperf"
    {"DISTINCT", DISTINCT},
#line 299 "./sqlwords.gperf"
    {"T_OUT", T_OUT},
#line 290 "./sqlwords.gperf"
    {"T_DISTINCT", T_DISTINCT},
#line 126 "./sqlwords.gperf"
    {"EXCEPT", EXCEPT},
#line 222 "./sqlwords.gperf"
    {"PARTITION", PARTITION},
#line 150 "./sqlwords.gperf"
    {"GROUPING", GROUPING},
#line 300 "./sqlwords.gperf"
    {"T_SHORTEST_ONLY", T_SHORTEST_ONLY},
#line 111 "./sqlwords.gperf"
    {"DETERMINISTIC", DETERMINISTIC},
#line 324 "./sqlwords.gperf"
    {"VARBINARY", VARBINARY},
#line 117 "./sqlwords.gperf"
    {"DROP", DROP},
#line 65 "./sqlwords.gperf"
    {"BREAKUP", BREAKUP},
#line 27 "./sqlwords.gperf"
    {"__TAG", __TAG_L},
#line 272 "./sqlwords.gperf"
    {"SNAPSHOT", SNAPSHOT},
#line 264 "./sqlwords.gperf"
    {"UNRESTRICTED", UNRESTRICTED_L},
#line 234 "./sqlwords.gperf"
    {"PROCEDURE", PROCEDURE},
#line 248 "./sqlwords.gperf"
    {"REPLACING", REPLACING},
#line 279 "./sqlwords.gperf"
    {"SQLCODE", SQLCODE},
#line 229 "./sqlwords.gperf"
    {"POSITION", POSITION_L},
#line 174 "./sqlwords.gperf"
    {"INTERVAL", INTERVAL},
#line 207 "./sqlwords.gperf"
    {"NULLIF", NULLIF},
#line 178 "./sqlwords.gperf"
    {"IRI_ID", IRI_ID},
#line 292 "./sqlwords.gperf"
    {"T_EXISTS", T_EXISTS},
#line 309 "./sqlwords.gperf"
    {"TOP", TOP},
#line 53 "./sqlwords.gperf"
    {"ATTACH", ATTACH},
#line 297 "./sqlwords.gperf"
    {"T_NO_CYCLES", T_NO_CYCLES},
#line 101 "./sqlwords.gperf"
    {"CURRENT_TIMESTAMP", CURRENT_TIMESTAMP},
#line 74 "./sqlwords.gperf"
    {"CHARACTER", CHARACTER},
#line 249 "./sqlwords.gperf"
    {"REPLICATION", REPLICATION},
#line 295 "./sqlwords.gperf"
    {"T_MAX", T_MAX},
#line 76 "./sqlwords.gperf"
    {"CHECKED", CHECKED},
#line 137 "./sqlwords.gperf"
    {"FOREACH", FOREACH},
#line 259 "./sqlwords.gperf"
    {"ROLLUP", ROLLUP},
#line 312 "./sqlwords.gperf"
    {"TRANSITIVE", TRANSITIVE},
#line 238 "./sqlwords.gperf"
    {"RDF_BOX", RDF_BOX_L},
#line 62 "./sqlwords.gperf"
    {"BIGINT", BIGINT},
#line 158 "./sqlwords.gperf"
    {"INCREMENTAL", INCREMENTAL},
#line 140 "./sqlwords.gperf"
    {"FOUND", FOUND},
#line 154 "./sqlwords.gperf"
    {"IDENTITY", IDENTITY},
#line 113 "./sqlwords.gperf"
    {"DISCONNECT", DISCONNECT},
#line 210 "./sqlwords.gperf"
    {"OBJECT_ID", OBJECT_ID},
#line 230 "./sqlwords.gperf"
    {"PRECISION", PRECISION},
#line 330 "./sqlwords.gperf"
    {"WHENEVER", WHENEVER},
#line 277 "./sqlwords.gperf"
    {"SPECIFIC", SPECIFIC},
#line 177 "./sqlwords.gperf"
    {"ISOLATION", ISOLATION_L},
#line 159 "./sqlwords.gperf"
    {"INCREMENT", INCREMENT_L},
#line 237 "./sqlwords.gperf"
    {"QUIETCAST", QUIETCAST_L},
#line 282 "./sqlwords.gperf"
    {"SQLWARNING", SQLWARNING},
#line 57 "./sqlwords.gperf"
    {"BACKUP", BACKUP},
#line 231 "./sqlwords.gperf"
    {"PREFETCH", PREFETCH},
#line 87 "./sqlwords.gperf"
    {"COMMITTED", COMMITTED_L},
#line 263 "./sqlwords.gperf"
    {"UNCOMMITTED", UNCOMMITTED_L},
#line 64 "./sqlwords.gperf"
    {"BITMAP", BITMAPPED},
#line 161 "./sqlwords.gperf"
    {"INDEX_NO_FILL", INDEX_NO_FILL},
#line 280 "./sqlwords.gperf"
    {"SQLEXCEPTION", SQLEXCEPTION},
#line 270 "./sqlwords.gperf"
    {"SHUTDOWN", SHUTDOWN},
#line 80 "./sqlwords.gperf"
    {"CLUSTERED", CLUSTERED},
#line 209 "./sqlwords.gperf"
    {"NVARCHAR", NVARCHAR},
#line 32 "./sqlwords.gperf"
    {"__SOAP_NAME", __SOAP_NAME},
#line 30 "./sqlwords.gperf"
    {"__SOAP_HEADER", __SOAP_HEADER},
#line 155 "./sqlwords.gperf"
    {"IDENTIFIED", IDENTIFIED},
#line 26 "./sqlwords.gperf"
    {"__COST", __COST},
#line 337 "./sqlwords.gperf"
    {"XPATH", XPATH},
#line 33 "./sqlwords.gperf"
    {"__SOAP_TYPE", __SOAP_TYPE},
#line 307 "./sqlwords.gperf"
    {"TIMESTAMP", TIMESTAMP},
#line 288 "./sqlwords.gperf"
    {"T_CYCLES_ONLY", T_CYCLES_ONLY},
#line 291 "./sqlwords.gperf"
    {"T_END_FLAG", T_END_FLAG},
#line 29 "./sqlwords.gperf"
    {"__SOAP_DOCW", __SOAP_DOCW},
#line 37 "./sqlwords.gperf"
    {"__SOAP_ENC_MIME", __SOAP_ENC_MIME},
#line 35 "./sqlwords.gperf"
    {"__SOAP_FAULT", __SOAP_FAULT},
#line 34 "./sqlwords.gperf"
    {"__SOAP_XML_TYPE", __SOAP_XML_TYPE},
#line 221 "./sqlwords.gperf"
    {"OVERRIDING", OVERRIDING},
#line 77 "./sqlwords.gperf"
    {"CHECKPOINT", CHECKPOINT},
#line 28 "./sqlwords.gperf"
    {"__SOAP_DOC", __SOAP_DOC},
#line 36 "./sqlwords.gperf"
    {"__SOAP_DIME_ENC", __SOAP_DIME_ENC},
#line 38 "./sqlwords.gperf"
    {"__SOAP_OPTIONS", __SOAP_OPTIONS},
#line 31 "./sqlwords.gperf"
    {"__SOAP_HTTP", __SOAP_HTTP}
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
     -1,  -1,  -1,   0,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,   1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,   2,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,   3,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,   4,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,   5,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,   6,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,   7,
     -1,   8,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,   9,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  10,  -1,  -1,  -1,
     -1,  -1,  -1,  11,  -1,  -1,  12,  -1,  -1,  -1,
     -1,  13,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  14,
     -1,  -1,  15,  16,  -1,  -1,  -1,  -1,  -1,  17,
     -1,  -1,  -1,  18,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  19,  20,  -1,  -1,  -1,  -1,  21,  22,
     -1,  -1,  -1,  23,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  24,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  25,  -1,  26,  -1,  -1,  27,  -1,  -1,  -1,
     -1,  28,  29,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     30,  31,  -1,  -1,  32,  33,  -1,  34,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  35,  36,  -1,
     -1,  -1,  -1,  -1,  -1,  37,  -1,  -1,  38,  -1,
     39,  -1,  40,  41,  -1,  -1,  -1,  42,  -1,  -1,
     -1,  -1,  -1,  43,  -1,  44,  -1,  -1,  -1,  45,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  46,  -1,
     47,  -1,  -1,  48,  49,  -1,  -1,  -1,  50,  -1,
     -1,  51,  -1,  -1,  -1,  52,  53,  54,  -1,  -1,
     55,  -1,  56,  -1,  -1,  57,  58,  -1,  59,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  60,  61,
     62,  -1,  63,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  64,  -1,  65,  -1,  -1,  66,  67,
     68,  69,  -1,  -1,  -1,  -1,  70,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  71,  -1,  -1,  -1,
     72,  73,  -1,  -1,  -1,  74,  75,  -1,  76,  -1,
     -1,  -1,  -1,  77,  -1,  -1,  -1,  78,  -1,  -1,
     -1,  -1,  79,  -1,  -1,  -1,  -1,  -1,  80,  -1,
     -1,  -1,  -1,  -1,  81,  -1,  82,  -1,  -1,  -1,
     83,  -1,  84,  -1,  85,  86,  87,  -1,  -1,  -1,
     -1,  88,  89,  90,  -1,  -1,  -1,  -1,  -1,  -1,
     91,  92,  -1,  -1,  93,  -1,  -1,  94,  -1,  95,
     -1,  -1,  -1,  96,  -1,  97,  98,  -1,  -1,  99,
     -1,  -1, 100, 101,  -1, 102,  -1, 103, 104,  -1,
    105,  -1, 106,  -1, 107,  -1, 108,  -1, 109,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 110,  -1,  -1,
    111, 112,  -1, 113,  -1,  -1,  -1,  -1,  -1, 114,
     -1,  -1, 115,  -1,  -1, 116,  -1,  -1,  -1, 117,
    118, 119, 120, 121,  -1,  -1, 122,  -1, 123, 124,
     -1,  -1,  -1,  -1, 125,  -1,  -1, 126,  -1,  -1,
    127,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 128, 129,
     -1,  -1,  -1,  -1, 130,  -1,  -1,  -1, 131,  -1,
     -1, 132,  -1,  -1,  -1,  -1, 133, 134,  -1, 135,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 136, 137,
    138,  -1,  -1,  -1,  -1, 139,  -1, 140,  -1,  -1,
     -1,  -1,  -1, 141,  -1, 142,  -1,  -1,  -1, 143,
     -1, 144, 145, 146,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 147,  -1,  -1, 148,  -1, 149,  -1,  -1,  -1,
     -1,  -1,  -1, 150,  -1,  -1,  -1,  -1, 151,  -1,
     -1,  -1,  -1, 152,  -1, 153,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 154,  -1,  -1,  -1,  -1,  -1, 155,
     -1,  -1,  -1, 156, 157, 158,  -1,  -1,  -1,  -1,
     -1,  -1, 159,  -1,  -1,  -1, 160,  -1,  -1, 161,
    162, 163,  -1,  -1,  -1, 164,  -1, 165, 166,  -1,
    167,  -1,  -1,  -1, 168,  -1, 169,  -1,  -1,  -1,
    170,  -1,  -1,  -1,  -1, 171,  -1,  -1, 172, 173,
     -1,  -1,  -1, 174,  -1, 175,  -1, 176, 177,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 178,  -1, 179, 180,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 181,
    182,  -1,  -1,  -1,  -1, 183,  -1,  -1, 184, 185,
    186, 187,  -1, 188,  -1,  -1, 189,  -1,  -1, 190,
     -1,  -1, 191,  -1,  -1, 192, 193,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 194, 195,  -1, 196,  -1,  -1,
     -1,  -1,  -1, 197,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 198, 199, 200, 201,  -1,  -1, 202,  -1, 203,
    204,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 205, 206, 207,  -1,  -1,  -1,  -1,  -1,  -1,
    208,  -1,  -1, 209,  -1,  -1,  -1,  -1,  -1,  -1,
     -1, 210, 211,  -1,  -1,  -1,  -1,  -1,  -1, 212,
    213, 214,  -1,  -1,  -1, 215,  -1,  -1, 216, 217,
    218,  -1, 219,  -1,  -1, 220, 221,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 222, 223,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 224,
     -1, 225, 226,  -1, 227,  -1,  -1,  -1, 228, 229,
     -1, 230,  -1,  -1,  -1,  -1, 231,  -1,  -1,  -1,
     -1, 232,  -1,  -1,  -1, 233,  -1,  -1,  -1, 234,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    235,  -1, 236,  -1,  -1,  -1,  -1, 237, 238,  -1,
     -1,  -1, 239,  -1,  -1,  -1,  -1,  -1,  -1, 240,
    241,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 242,  -1,  -1,  -1,  -1, 243, 244,  -1,
     -1, 245,  -1,  -1,  -1,  -1,  -1, 246, 247,  -1,
     -1,  -1,  -1,  -1, 248, 249,  -1,  -1,  -1,  -1,
    250,  -1,  -1, 251,  -1, 252, 253,  -1,  -1, 254,
    255,  -1,  -1, 256,  -1,  -1, 257,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 258,  -1,  -1,  -1,
     -1, 259,  -1,  -1,  -1,  -1, 260,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 261, 262, 263,  -1,
     -1, 264,  -1,  -1,  -1,  -1,  -1,  -1, 265,  -1,
     -1,  -1, 266,  -1,  -1,  -1,  -1,  -1, 267,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 268, 269,
     -1, 270,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 271, 272,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 273,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 274,  -1,  -1,  -1,  -1, 275, 276,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 277,  -1,  -1,
     -1,  -1,  -1, 278,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 279,  -1,  -1,
     -1,  -1,  -1,  -1, 280, 281, 282,  -1,  -1,  -1,
    283,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 284,  -1,  -1,  -1,
    285,  -1,  -1,  -1,  -1,  -1, 286,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 287,  -1,  -1,  -1,  -1, 288,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 289,  -1,  -1, 290, 291,  -1,  -1,  -1,
     -1,  -1,  -1, 292,  -1,  -1,  -1,  -1,  -1, 293,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 294,  -1,  -1,  -1,
     -1,  -1,  -1, 295,  -1, 296, 297,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 298,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 299,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 300,  -1,
    301,  -1,  -1,  -1,  -1,  -1, 302,  -1, 303,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 304,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 305,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 306,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 307,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 308,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 309,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 310,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 311
  };

#ifdef __GNUC__
__inline
#ifdef __GNUC_STDC_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct keyword *
lex_hash_kw (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = wordlist[index].keiiyword;

              if (*str == *s && !strcmp (str + 1, s + 1))
                return &wordlist[index];
            }
        }
    }
  return 0;
}
