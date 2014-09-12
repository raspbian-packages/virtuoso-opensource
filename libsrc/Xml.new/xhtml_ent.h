/* ANSI-C code produced by gperf version 3.0.3 */
/* Command-line: /usr/bin/gperf -aCDGptr -Kentity -L ANSI-C -k'1,2,3,4,5,$' -Nxhtml_ent_gperf ./xhtml_ent.gperf  */

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

#line 1 "./xhtml_ent.gperf"
struct xhtml_ent_s { const char *entity; int encoded_symbol; const char *descr;};

#define TOTAL_KEYWORDS 253
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 8
#define MIN_HASH_VALUE 120
#define MAX_HASH_VALUE 1383
/* maximum key range = 1264, duplicates = 0 */

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
      1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384,
      1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384,
      1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384,
      1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384,
      1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384,  136,
       230,  120,  177, 1384, 1384, 1384, 1384, 1384, 1384, 1384,
      1384, 1384, 1384, 1384, 1384,   82,   18,   28,  187,    1,
       175,   74,   27,   26, 1384,  236,  128,  123,  222,   68,
        49, 1384,    4,  207,  215,  179, 1384, 1384,  191,  123,
       234, 1384, 1384, 1384, 1384, 1384, 1384,  223,   16,   18,
        62,  209,  146,   19,   37,  237,   59,   98,   52,  187,
        44,   67,   47,  169,   41,   59,  243,  255,   91,    7,
       227,  241,    9,   47, 1384, 1384, 1384, 1384, 1384, 1384,
      1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384,
      1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384,
      1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384,
      1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384,
      1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384,
      1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384,
      1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384,
      1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384,
      1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384,
      1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384,
      1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384,
      1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384, 1384,
      1384, 1384, 1384, 1384, 1384, 1384, 1384
    };
  register int hval = (int)len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]+1];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const struct xhtml_ent_s wordlist[] =
  {
#line 251 "./xhtml_ent.gperf"
    {"loz",      	9674	, DESCR("lozenge; UNICODE(25CA) TABLE(ISOpub)")},
#line 225 "./xhtml_ent.gperf"
    {"cap",      	8745	, DESCR("intersection = cap; UNICODE(2229) TABLE(ISOtech)")},
#line 250 "./xhtml_ent.gperf"
    {"rang",      	9002	, DESCR("right-pointing angle bracket = ket; UNICODE(232A) TABLE(ISOtech)")},
#line 230 "./xhtml_ent.gperf"
    {"cong",      	8773	, DESCR("approximately equal to; UNICODE(2245) TABLE(ISOtech)")},
#line 249 "./xhtml_ent.gperf"
    {"lang",      	9001	, DESCR("left-pointing angle bracket = bra; UNICODE(2329) TABLE(ISOtech)")},
#line 109 "./xhtml_ent.gperf"
    {"circ",      	710	, DESCR(" modifier letter circumflex accent; UNICODE(02C6) TABLE(ISOpub)")},
#line 224 "./xhtml_ent.gperf"
    {"or",      	8744	, DESCR("logical or = vee; UNICODE(2228) TABLE(ISOtech)")},
#line 200 "./xhtml_ent.gperf"
    {"harr",      	8596	, DESCR("left right arrow; UNICODE(2194) TABLE(ISOamsa)")},
#line 206 "./xhtml_ent.gperf"
    {"hArr",      	8660	, DESCR("left right double arrow; UNICODE(21D4) TABLE(ISOamsa)")},
#line 198 "./xhtml_ent.gperf"
    {"rarr",      	8594	, DESCR("rightwards arrow; UNICODE(2192) TABLE(ISOnum)")},
#line 236 "./xhtml_ent.gperf"
    {"sub",      	8834	, DESCR("subset of; UNICODE(2282) TABLE(ISOtech)")},
#line 204 "./xhtml_ent.gperf"
    {"rArr",      	8658	, DESCR("rightwards double arrow; UNICODE(21D2) TABLE(ISOtech)")},
#line 196 "./xhtml_ent.gperf"
    {"larr",      	8592	, DESCR("leftwards arrow; UNICODE(2190) TABLE(ISOnum)")},
#line 202 "./xhtml_ent.gperf"
    {"lArr",      	8656	, DESCR("leftwards double arrow; UNICODE(21D0) TABLE(ISOtech)")},
#line 199 "./xhtml_ent.gperf"
    {"darr",      	8595	, DESCR("downwards arrow; UNICODE(2193) TABLE(ISOnum)")},
#line 226 "./xhtml_ent.gperf"
    {"cup",      	8746	, DESCR("union = cup; UNICODE(222A) TABLE(ISOtech)")},
#line 205 "./xhtml_ent.gperf"
    {"dArr",      	8659	, DESCR("downwards double arrow; UNICODE(21D3) TABLE(ISOamsa)")},
#line 3 "./xhtml_ent.gperf"
    {"nbsp",      	160	, DESCR("no-break space = non-breaking space; UNICODE(00A0) TABLE(ISOnum)")},
#line 17 "./xhtml_ent.gperf"
    {"reg",      	174	, DESCR("registered sign = registered trade mark sign; UNICODE(00AE) TABLE(ISOnum)")},
#line 51 "./xhtml_ent.gperf"
    {"ETH",      	208	, DESCR("latin capital letter ETH; UNICODE(00D0) TABLE(ISOlat1)")},
#line 237 "./xhtml_ent.gperf"
    {"sup",      	8835	, DESCR("superset of; UNICODE(2283) TABLE(ISOtech)")},
#line 19 "./xhtml_ent.gperf"
    {"deg",      	176	, DESCR("degree sign; UNICODE(00B0) TABLE(ISOnum)")},
#line 185 "./xhtml_ent.gperf"
    {"bull",      	8226	, DESCR("bullet = black small circle; UNICODE(2022) TABLE(ISOpub)")},
#line 220 "./xhtml_ent.gperf"
    {"prop",      	8733	, DESCR("proportional to; UNICODE(221D) TABLE(ISOtech)")},
#line 184 "./xhtml_ent.gperf"
    {"piv",      	982	, DESCR("greek pi symbol; UNICODE(03D6) ISOgrk3")},
#line 248 "./xhtml_ent.gperf"
    {"rfloor",      	8971	, DESCR("right floor; UNICODE(230B) TABLE(ISOamsc)")},
#line 215 "./xhtml_ent.gperf"
    {"prod",      	8719	, DESCR("n-ary product = product sign; UNICODE(220F) TABLE(ISOamsb)")},
#line 247 "./xhtml_ent.gperf"
    {"lfloor",      	8970	, DESCR("left floor = apl downstile; UNICODE(230A) TABLE(ISOamsc)")},
#line 18 "./xhtml_ent.gperf"
    {"macr",      	175	, DESCR("macron = spacing macron = overline = APL overbar; UNICODE(00AF) TABLE(ISOdia)")},
#line 222 "./xhtml_ent.gperf"
    {"ang",      	8736	, DESCR("angle; UNICODE(2220) TABLE(ISOamso)")},
#line 243 "./xhtml_ent.gperf"
    {"perp",      	8869	, DESCR("up tack = orthogonal to = perpendicular; UNICODE(22A5) TABLE(ISOtech)")},
#line 214 "./xhtml_ent.gperf"
    {"ni",      	8715	, DESCR("contains as member; UNICODE(220B) TABLE(ISOtech)")},
#line 172 "./xhtml_ent.gperf"
    {"pi",      	960	, DESCR("greek small letter pi; UNICODE(03C0) ISOgrk3")},
#line 148 "./xhtml_ent.gperf"
    {"Pi",      	928	, DESCR("greek capital letter pi; UNICODE(03A0) ISOgrk3")},
#line 115 "./xhtml_ent.gperf"
    {"zwj",      	8205	, DESCR("zero width joiner; UNICODE(200D) NEW TABLE(RFC2070)")},
#line 100 "./xhtml_ent.gperf"
    {"amp",      	38	, DESCR(" ampersand; UNICODE(0026) TABLE(ISOnum)")},
#line 126 "./xhtml_ent.gperf"
    {"dagger",      	8224	, DESCR("dagger; UNICODE(2020) TABLE(ISOpub)")},
#line 235 "./xhtml_ent.gperf"
    {"ge",      	8805	, DESCR("greater-than or equal to; UNICODE(2265) TABLE(ISOtech)")},
#line 149 "./xhtml_ent.gperf"
    {"Rho",      	929	, DESCR("greek capital letter rho; UNICODE(03A1)")},
#line 45 "./xhtml_ent.gperf"
    {"Ecirc",      	202	, DESCR("latin capital letter E with circumflex; UNICODE(00CA) TABLE(ISOlat1)")},
#line 46 "./xhtml_ent.gperf"
    {"Euml",      	203	, DESCR("latin capital letter E with diaeresis; UNICODE(00CB) TABLE(ISOlat1)")},
#line 169 "./xhtml_ent.gperf"
    {"nu",      	957	, DESCR("greek small letter nu; UNICODE(03BD) ISOgrk3")},
#line 219 "./xhtml_ent.gperf"
    {"radic",      	8730	, DESCR("square root = radical sign; UNICODE(221A) TABLE(ISOtech)")},
#line 197 "./xhtml_ent.gperf"
    {"uarr",      	8593	, DESCR("upwards arrow; UNICODE(2191) TABLE(ISOnum)")},
#line 203 "./xhtml_ent.gperf"
    {"uArr",      	8657	, DESCR("upwards double arrow; UNICODE(21D1) TABLE(ISOamsa)")},
#line 232 "./xhtml_ent.gperf"
    {"ne",      	8800	, DESCR("not equal to; UNICODE(2260) TABLE(ISOtech)")},
#line 114 "./xhtml_ent.gperf"
    {"zwnj",      	8204	, DESCR("zero width non-joiner; UNICODE(200C) NEW TABLE(RFC2070)")},
#line 11 "./xhtml_ent.gperf"
    {"uml",      	168	, DESCR("diaeresis = spacing diaeresis; UNICODE(00A8) TABLE(ISOdia)")},
#line 49 "./xhtml_ent.gperf"
    {"Icirc",      	206	, DESCR("latin capital letter I with circumflex; UNICODE(00CE) TABLE(ISOlat1)")},
#line 234 "./xhtml_ent.gperf"
    {"le",      	8804	, DESCR("less-than or equal to; UNICODE(2264) TABLE(ISOtech)")},
#line 112 "./xhtml_ent.gperf"
    {"emsp",      	8195	, DESCR("em space; UNICODE(2003) TABLE(ISOpub)")},
#line 50 "./xhtml_ent.gperf"
    {"Iuml",      	207	, DESCR("latin capital letter I with diaeresis; UNICODE(00CF) TABLE(ISOlat1)")},
#line 173 "./xhtml_ent.gperf"
    {"rho",      	961	, DESCR("greek small letter rho; UNICODE(03C1) ISOgrk3")},
#line 223 "./xhtml_ent.gperf"
    {"and",      	8743	, DESCR("logical and = wedge; UNICODE(2227) TABLE(ISOtech)")},
#line 201 "./xhtml_ent.gperf"
    {"crarr",      	8629	, DESCR("downwards arrow with corner leftwards  = carriage return; UNICODE(21B5) NEW")},
#line 111 "./xhtml_ent.gperf"
    {"ensp",      	8194	, DESCR("en space; UNICODE(2002) TABLE(ISOpub)")},
#line 66 "./xhtml_ent.gperf"
    {"szlig",      	223	, DESCR("latin small letter sharp s = ess-zed; UNICODE(00DF) TABLE(ISOlat1)")},
#line 22 "./xhtml_ent.gperf"
    {"sup3",      	179	, DESCR("superscript three = superscript digit three = cubed; UNICODE(00B3) TABLE(ISOnum)")},
#line 24 "./xhtml_ent.gperf"
    {"micro",      	181	, DESCR("micro sign; UNICODE(00B5) TABLE(ISOnum)")},
#line 87 "./xhtml_ent.gperf"
    {"ocirc",      	244	, DESCR("latin small letter o with circumflex; UNICODE(00F4) TABLE(ISOlat1)")},
#line 55 "./xhtml_ent.gperf"
    {"Ocirc",      	212	, DESCR("latin capital letter O with circumflex; UNICODE(00D4) TABLE(ISOlat1)")},
#line 7 "./xhtml_ent.gperf"
    {"curren",      	164	, DESCR("currency sign; UNICODE(00A4) TABLE(ISOnum)")},
#line 9 "./xhtml_ent.gperf"
    {"brvbar",      	166	, DESCR("broken bar = broken vertical bar; UNICODE(00A6) TABLE(ISOnum)")},
#line 89 "./xhtml_ent.gperf"
    {"ouml",      	246	, DESCR("latin small letter o with diaeresis; UNICODE(00F6) TABLE(ISOlat1)")},
#line 57 "./xhtml_ent.gperf"
    {"Ouml",      	214	, DESCR("latin capital letter O with diaeresis; UNICODE(00D6) TABLE(ISOlat1)")},
#line 171 "./xhtml_ent.gperf"
    {"omicron",      	959	, DESCR("greek small letter omicron; UNICODE(03BF) NEW")},
#line 147 "./xhtml_ent.gperf"
    {"Omicron",      	927	, DESCR("greek capital letter omicron; UNICODE(039F)")},
#line 37 "./xhtml_ent.gperf"
    {"Acirc",      	194	, DESCR("latin capital letter A with circumflex; UNICODE(00C2) TABLE(ISOlat1)")},
#line 40 "./xhtml_ent.gperf"
    {"Aring",      	197	, DESCR("latin capital letter A with ring above = latin capital letter A ring; UNICODE(00C5) TABLE(ISOlat1)")},
#line 39 "./xhtml_ent.gperf"
    {"Auml",      	196	, DESCR("latin capital letter A with diaeresis; UNICODE(00C4) TABLE(ISOlat1)")},
#line 144 "./xhtml_ent.gperf"
    {"Mu",      	924	, DESCR("greek capital letter mu; UNICODE(039C)")},
#line 28 "./xhtml_ent.gperf"
    {"sup1",      	185	, DESCR("superscript one = superscript digit one; UNICODE(00B9) TABLE(ISOnum)")},
#line 8 "./xhtml_ent.gperf"
    {"yen",      	165	, DESCR("yen sign = yuan sign; UNICODE(00A5) TABLE(ISOnum)")},
#line 131 "./xhtml_ent.gperf"
    {"euro",      	8364	, DESCR(" euro sign; UNICODE(20AC) NEW")},
#line 13 "./xhtml_ent.gperf"
    {"ordf",      	170	, DESCR("feminine ordinal indicator; UNICODE(00AA) TABLE(ISOnum)")},
#line 116 "./xhtml_ent.gperf"
    {"lrm",      	8206	, DESCR("left-to-right mark; UNICODE(200E) NEW TABLE(RFC2070)")},
#line 146 "./xhtml_ent.gperf"
    {"Xi",      	926	, DESCR("greek capital letter xi; UNICODE(039E) ISOgrk3")},
#line 229 "./xhtml_ent.gperf"
    {"sim",      	8764	, DESCR("tilde operator = varies with = similar to; UNICODE(223C) TABLE(ISOtech)")},
#line 127 "./xhtml_ent.gperf"
    {"Dagger",      	8225	, DESCR("double dagger; UNICODE(2021) TABLE(ISOpub)")},
#line 107 "./xhtml_ent.gperf"
    {"scaron",      	353	, DESCR(" latin small letter s with caron; UNICODE(0161) TABLE(ISOlat2)")},
#line 108 "./xhtml_ent.gperf"
    {"Yuml",      	376	, DESCR(" latin capital letter Y with diaeresis; UNICODE(0178) TABLE(ISOlat2)")},
#line 193 "./xhtml_ent.gperf"
    {"real",      	8476	, DESCR("blackletter capital R = real part symbol; UNICODE(211C) TABLE(ISOamso)")},
#line 102 "./xhtml_ent.gperf"
    {"gt",      	62	, DESCR(" greater-than sign; UNICODE(003E) TABLE(ISOnum)")},
#line 6 "./xhtml_ent.gperf"
    {"pound",      	163	, DESCR("pound sign; UNICODE(00A3) TABLE(ISOnum)")},
#line 170 "./xhtml_ent.gperf"
    {"xi",      	958	, DESCR("greek small letter xi; UNICODE(03BE) ISOgrk3")},
#line 216 "./xhtml_ent.gperf"
    {"sum",      	8721	, DESCR("n-ary sumation; UNICODE(2211) TABLE(ISOamsb)")},
#line 168 "./xhtml_ent.gperf"
    {"mu",      	956	, DESCR("greek small letter mu; UNICODE(03BC) ISOgrk3")},
#line 83 "./xhtml_ent.gperf"
    {"eth",      	240	, DESCR("latin small letter eth; UNICODE(00F0) TABLE(ISOlat1)")},
#line 105 "./xhtml_ent.gperf"
    {"oelig",      	339	, DESCR(" latin small ligature oe; UNICODE(0153) TABLE(ISOlat2)")},
#line 101 "./xhtml_ent.gperf"
    {"lt",      	60	, DESCR(" less-than sign; UNICODE(003C) TABLE(ISOnum)")},
#line 25 "./xhtml_ent.gperf"
    {"para",      	182	, DESCR("pilcrow sign = paragraph sign; UNICODE(00B6) TABLE(ISOnum)")},
#line 62 "./xhtml_ent.gperf"
    {"Ucirc",      	219	, DESCR("latin capital letter U with circumflex; UNICODE(00DB) TABLE(ISOlat1)")},
#line 167 "./xhtml_ent.gperf"
    {"lambda",      	955	, DESCR("greek small letter lambda; UNICODE(03BB) ISOgrk3")},
#line 63 "./xhtml_ent.gperf"
    {"Uuml",      	220	, DESCR("latin capital letter U with diaeresis; UNICODE(00DC) TABLE(ISOlat1)")},
#line 29 "./xhtml_ent.gperf"
    {"ordm",      	186	, DESCR("masculine ordinal indicator; UNICODE(00BA) TABLE(ISOnum)")},
#line 207 "./xhtml_ent.gperf"
    {"forall",      	8704	, DESCR("for all; UNICODE(2200) TABLE(ISOtech)")},
#line 137 "./xhtml_ent.gperf"
    {"Epsilon",      	917	, DESCR("greek capital letter epsilon; UNICODE(0395)")},
#line 145 "./xhtml_ent.gperf"
    {"Nu",      	925	, DESCR("greek capital letter nu; UNICODE(039D)")},
#line 27 "./xhtml_ent.gperf"
    {"cedil",      	184	, DESCR("cedilla = spacing cedilla; UNICODE(00B8) TABLE(ISOdia)")},
#line 104 "./xhtml_ent.gperf"
    {"OElig",      	338	, DESCR(" latin capital ligature OE; UNICODE(0152) TABLE(ISOlat2)")},
#line 132 "./xhtml_ent.gperf"
    {"fnof",      	402	, DESCR("latin small f with hook = function = florin; UNICODE(0192) TABLE(ISOtech)")},
#line 186 "./xhtml_ent.gperf"
    {"hellip",      	8230	, DESCR("horizontal ellipsis = three dot leader; UNICODE(2026) TABLE(ISOpub)")},
#line 238 "./xhtml_ent.gperf"
    {"nsub",      	8836	, DESCR("not a subset of; UNICODE(2284) ISOamsn")},
#line 211 "./xhtml_ent.gperf"
    {"nabla",      	8711	, DESCR("nabla = backward difference; UNICODE(2207) TABLE(ISOtech)")},
#line 15 "./xhtml_ent.gperf"
    {"not",      	172	, DESCR("not sign = discretionary hyphen; UNICODE(00AC) TABLE(ISOnum)")},
#line 103 "./xhtml_ent.gperf"
    {"apos",      	39	, DESCR(" apostrophe mark; UNICODE(0027) TABLE(ISOnum)")},
#line 239 "./xhtml_ent.gperf"
    {"sube",      	8838	, DESCR("subset of or equal to; UNICODE(2286) TABLE(ISOtech)")},
#line 41 "./xhtml_ent.gperf"
    {"AElig",      	198	, DESCR("latin capital letter AE = latin capital ligature AE; UNICODE(00C6) TABLE(ISOlat1)")},
#line 77 "./xhtml_ent.gperf"
    {"ecirc",      	234	, DESCR("latin small letter e with circumflex; UNICODE(00EA) TABLE(ISOlat1)")},
#line 208 "./xhtml_ent.gperf"
    {"part",      	8706	, DESCR("partial differential; UNICODE(2202) TABLE(ISOtech)")},
#line 78 "./xhtml_ent.gperf"
    {"euml",      	235	, DESCR("latin small letter e with diaeresis; UNICODE(00EB) TABLE(ISOlat1)")},
#line 190 "./xhtml_ent.gperf"
    {"frasl",      	8260	, DESCR("fraction slash; UNICODE(2044) NEW")},
#line 12 "./xhtml_ent.gperf"
    {"copy",      	169	, DESCR("copyright sign; UNICODE(00A9) TABLE(ISOnum)")},
#line 253 "./xhtml_ent.gperf"
    {"clubs",      	9827	, DESCR("black club suit = shamrock; UNICODE(2663) TABLE(ISOpub)")},
#line 69 "./xhtml_ent.gperf"
    {"acirc",      	226	, DESCR("latin small letter a with circumflex; UNICODE(00E2) TABLE(ISOlat1)")},
#line 117 "./xhtml_ent.gperf"
    {"rlm",      	8207	, DESCR("right-to-left mark; UNICODE(200F) NEW TABLE(RFC2070)")},
#line 72 "./xhtml_ent.gperf"
    {"aring",      	229	, DESCR("latin small letter a with ring above = latin small letter a ring; UNICODE(00E5) TABLE(ISOlat1)")},
#line 43 "./xhtml_ent.gperf"
    {"Egrave",      	200	, DESCR("latin capital letter E with grave; UNICODE(00C8) TABLE(ISOlat1)")},
#line 71 "./xhtml_ent.gperf"
    {"auml",      	228	, DESCR("latin small letter a with diaeresis; UNICODE(00E4) TABLE(ISOlat1)")},
#line 118 "./xhtml_ent.gperf"
    {"ndash",      	8211	, DESCR("en dash; UNICODE(2013) TABLE(ISOpub)")},
#line 81 "./xhtml_ent.gperf"
    {"icirc",      	238	, DESCR("latin small letter i with circumflex; UNICODE(00EE) TABLE(ISOlat1)")},
#line 240 "./xhtml_ent.gperf"
    {"supe",      	8839	, DESCR("superset of or equal to; UNICODE(2287) TABLE(ISOtech)")},
#line 30 "./xhtml_ent.gperf"
    {"raquo",      	187	, DESCR("right-pointing double angle quotation mark = right pointing guillemet; UNICODE(00BB) TABLE(ISOnum)")},
#line 82 "./xhtml_ent.gperf"
    {"iuml",      	239	, DESCR("latin small letter i with diaeresis; UNICODE(00EF) TABLE(ISOlat1)")},
#line 98 "./xhtml_ent.gperf"
    {"yuml",      	255	, DESCR("latin small letter y with diaeresis; UNICODE(00FF) TABLE(ISOlat1)")},
#line 14 "./xhtml_ent.gperf"
    {"laquo",      	171	, DESCR("left-pointing double angle quotation mark = left pointing guillemet; UNICODE(00AB) TABLE(ISOnum)")},
#line 47 "./xhtml_ent.gperf"
    {"Igrave",      	204	, DESCR("latin capital letter I with grave; UNICODE(00CC) TABLE(ISOlat1)")},
#line 94 "./xhtml_ent.gperf"
    {"ucirc",      	251	, DESCR("latin small letter u with circumflex; UNICODE(00FB) TABLE(ISOlat1)")},
#line 218 "./xhtml_ent.gperf"
    {"lowast",      	8727	, DESCR("asterisk operator; UNICODE(2217) TABLE(ISOtech)")},
#line 143 "./xhtml_ent.gperf"
    {"Lambda",      	923	, DESCR("greek capital letter lambda; UNICODE(039B) ISOgrk3")},
#line 122 "./xhtml_ent.gperf"
    {"sbquo",      	8218	, DESCR("single low-9 quotation mark; UNICODE(201A) NEW")},
#line 95 "./xhtml_ent.gperf"
    {"uuml",      	252	, DESCR("latin small letter u with diaeresis; UNICODE(00FC) TABLE(ISOlat1)")},
#line 74 "./xhtml_ent.gperf"
    {"ccedil",      	231	, DESCR("latin small letter c with cedilla; UNICODE(00E7) TABLE(ISOlat1)")},
#line 106 "./xhtml_ent.gperf"
    {"Scaron",      	352	, DESCR(" latin capital letter S with caron; UNICODE(0160) TABLE(ISOlat2)")},
#line 255 "./xhtml_ent.gperf"
    {"diams",      	9830	, DESCR("black diamond suit; UNICODE(2666) TABLE(ISOpub)")},
#line 42 "./xhtml_ent.gperf"
    {"Ccedil",      	199	, DESCR("latin capital letter C with cedilla; UNICODE(00C7) TABLE(ISOlat1)")},
#line 246 "./xhtml_ent.gperf"
    {"rceil",      	8969	, DESCR("right ceiling; UNICODE(2309) TABLE(ISOamsc)")},
#line 166 "./xhtml_ent.gperf"
    {"kappa",      	954	, DESCR("greek small letter kappa; UNICODE(03BA) ISOgrk3")},
#line 21 "./xhtml_ent.gperf"
    {"sup2",      	178	, DESCR("superscript two = superscript digit two = squared; UNICODE(00B2) TABLE(ISOnum)")},
#line 213 "./xhtml_ent.gperf"
    {"notin",      	8713	, DESCR("not an element of; UNICODE(2209) TABLE(ISOtech)")},
#line 241 "./xhtml_ent.gperf"
    {"oplus",      	8853	, DESCR("circled plus = direct sum; UNICODE(2295) TABLE(ISOamsb)")},
#line 217 "./xhtml_ent.gperf"
    {"minus",      	8722	, DESCR("minus sign; UNICODE(2212) TABLE(ISOtech)")},
#line 245 "./xhtml_ent.gperf"
    {"lceil",      	8968	, DESCR("left ceiling = apl upstile; UNICODE(2308) TABLE(ISOamsc)")},
#line 85 "./xhtml_ent.gperf"
    {"ograve",      	242	, DESCR("latin small letter o with grave; UNICODE(00F2) TABLE(ISOlat1)")},
#line 53 "./xhtml_ent.gperf"
    {"Ograve",      	210	, DESCR("latin capital letter O with grave; UNICODE(00D2) TABLE(ISOlat1)")},
#line 97 "./xhtml_ent.gperf"
    {"thorn",      	254	, DESCR("latin small letter thorn with; UNICODE(00FE) TABLE(ISOlat1)")},
#line 26 "./xhtml_ent.gperf"
    {"middot",      	183	, DESCR("middle dot = Georgian comma = Greek middle dot; UNICODE(00B7) TABLE(ISOnum)")},
#line 91 "./xhtml_ent.gperf"
    {"oslash",      	248	, DESCR("latin small letter o with stroke; = latin small letter o slash; UNICODE(00F8) TABLE(ISOlat1)")},
#line 59 "./xhtml_ent.gperf"
    {"Oslash",      	216	, DESCR("latin capital letter O with stroke = latin capital letter O slash; UNICODE(00D8) TABLE(ISOlat1)")},
#line 35 "./xhtml_ent.gperf"
    {"Agrave",      	192	, DESCR("latin capital letter A with grave = latin capital letter A grave; UNICODE(00C0) TABLE(ISOlat1)")},
#line 191 "./xhtml_ent.gperf"
    {"weierp",      	8472	, DESCR("script capital P = power set  = Weierstrass p; UNICODE(2118) TABLE(ISOamso)")},
#line 5 "./xhtml_ent.gperf"
    {"cent",      	162	, DESCR("cent sign; UNICODE(00A2) TABLE(ISOnum)")},
#line 174 "./xhtml_ent.gperf"
    {"sigmaf",      	962	, DESCR("greek small letter final sigma; UNICODE(03C2) ISOgrk3")},
#line 73 "./xhtml_ent.gperf"
    {"aelig",      	230	, DESCR("latin small letter ae = latin small ligature ae; UNICODE(00E6) TABLE(ISOlat1)")},
#line 139 "./xhtml_ent.gperf"
    {"Eta",      	919	, DESCR("greek capital letter eta; UNICODE(0397)")},
#line 10 "./xhtml_ent.gperf"
    {"sect",      	167	, DESCR("section sign; UNICODE(00A7) TABLE(ISOnum)")},
#line 128 "./xhtml_ent.gperf"
    {"permil",      	8240	, DESCR("per mille sign; UNICODE(2030) TABLE(ISOtech)")},
#line 90 "./xhtml_ent.gperf"
    {"divide",      	247	, DESCR("division sign; UNICODE(00F7) TABLE(ISOnum)")},
#line 179 "./xhtml_ent.gperf"
    {"chi",      	967	, DESCR("greek small letter chi; UNICODE(03C7) ISOgrk3")},
#line 4 "./xhtml_ent.gperf"
    {"iexcl",      	161	, DESCR("inverted exclamation mark; UNICODE(00A1) TABLE(ISOnum)")},
#line 154 "./xhtml_ent.gperf"
    {"Chi",      	935	, DESCR("greek capital letter chi; UNICODE(03A7)")},
#line 151 "./xhtml_ent.gperf"
    {"Tau",      	932	, DESCR("greek capital letter tau; UNICODE(03A4)")},
#line 152 "./xhtml_ent.gperf"
    {"Upsilon",      	933	, DESCR("greek capital letter upsilon; UNICODE(03A5) ISOgrk3")},
#line 44 "./xhtml_ent.gperf"
    {"Eacute",      	201	, DESCR("latin capital letter E with acute; UNICODE(00C9) TABLE(ISOlat1)")},
#line 33 "./xhtml_ent.gperf"
    {"frac34",      	190	, DESCR("vulgar fraction three quarters = fraction three quarters; UNICODE(00BE) TABLE(ISOnum)")},
#line 254 "./xhtml_ent.gperf"
    {"hearts",      	9829	, DESCR("black heart suit = valentine; UNICODE(2665) TABLE(ISOpub)")},
#line 119 "./xhtml_ent.gperf"
    {"mdash",      	8212	, DESCR("em dash; UNICODE(2014) TABLE(ISOpub)")},
#line 178 "./xhtml_ent.gperf"
    {"phi",      	966	, DESCR("greek small letter phi; UNICODE(03C6) ISOgrk3")},
#line 65 "./xhtml_ent.gperf"
    {"THORN",      	222	, DESCR("latin capital letter THORN; UNICODE(00DE) TABLE(ISOlat1)")},
#line 153 "./xhtml_ent.gperf"
    {"Phi",      	934	, DESCR("greek capital letter phi; UNICODE(03A6) ISOgrk3")},
#line 31 "./xhtml_ent.gperf"
    {"frac14",      	188	, DESCR("vulgar fraction one quarter = fraction one quarter; UNICODE(00BC) TABLE(ISOnum)")},
#line 141 "./xhtml_ent.gperf"
    {"Iota",      	921	, DESCR("greek capital letter iota; UNICODE(0399)")},
#line 180 "./xhtml_ent.gperf"
    {"psi",      	968	, DESCR("greek small letter psi; UNICODE(03C8) ISOgrk3")},
#line 155 "./xhtml_ent.gperf"
    {"Psi",      	936	, DESCR("greek capital letter psi; UNICODE(03A8) ISOgrk3")},
#line 176 "./xhtml_ent.gperf"
    {"tau",      	964	, DESCR("greek small letter tau; UNICODE(03C4) ISOgrk3")},
#line 48 "./xhtml_ent.gperf"
    {"Iacute",      	205	, DESCR("latin capital letter I with acute; UNICODE(00CD) TABLE(ISOlat1)")},
#line 175 "./xhtml_ent.gperf"
    {"sigma",      	963	, DESCR("greek small letter sigma; UNICODE(03C3) ISOgrk3")},
#line 161 "./xhtml_ent.gperf"
    {"epsilon",      	949	, DESCR("greek small letter epsilon; UNICODE(03B5) ISOgrk3")},
#line 221 "./xhtml_ent.gperf"
    {"infin",      	8734	, DESCR("infinity; UNICODE(221E) TABLE(ISOtech)")},
#line 16 "./xhtml_ent.gperf"
    {"shy",      	173	, DESCR("soft hyphen = discretionary hyphen; UNICODE(00AD) TABLE(ISOnum)")},
#line 20 "./xhtml_ent.gperf"
    {"plusmn",      	177	, DESCR("plus-minus sign = plus-or-minus sign; UNICODE(00B1) TABLE(ISOnum)")},
#line 60 "./xhtml_ent.gperf"
    {"Ugrave",      	217	, DESCR("latin capital letter U with grave; UNICODE(00D9) TABLE(ISOlat1)")},
#line 252 "./xhtml_ent.gperf"
    {"spades",      	9824	, DESCR("black spade suit; UNICODE(2660) TABLE(ISOpub)")},
#line 125 "./xhtml_ent.gperf"
    {"bdquo",      	8222	, DESCR("double low-9 quotation mark; UNICODE(201E) NEW")},
#line 181 "./xhtml_ent.gperf"
    {"omega",      	969	, DESCR("greek small letter omega; UNICODE(03C9) ISOgrk3")},
#line 156 "./xhtml_ent.gperf"
    {"Omega",      	937	, DESCR("greek capital letter omega; UNICODE(03A9) ISOgrk3")},
#line 227 "./xhtml_ent.gperf"
    {"int",      	8747	, DESCR("integral; UNICODE(222B) TABLE(ISOtech)")},
#line 142 "./xhtml_ent.gperf"
    {"Kappa",      	922	, DESCR("greek capital letter kappa; UNICODE(039A)")},
#line 183 "./xhtml_ent.gperf"
    {"upsih",      	978	, DESCR("greek upsilon with hook symbol; UNICODE(03D2) NEW")},
#line 133 "./xhtml_ent.gperf"
    {"Alpha",      	913	, DESCR("greek capital letter alpha; UNICODE(0391)")},
#line 212 "./xhtml_ent.gperf"
    {"isin",      	8712	, DESCR("element of; UNICODE(2208) TABLE(ISOtech)")},
#line 124 "./xhtml_ent.gperf"
    {"rdquo",      	8221	, DESCR("right double quotation mark; UNICODE(201D) TABLE(ISOnum)")},
#line 86 "./xhtml_ent.gperf"
    {"oacute",      	243	, DESCR("latin small letter o with acute; UNICODE(00F3) TABLE(ISOlat1)")},
#line 54 "./xhtml_ent.gperf"
    {"Oacute",      	211	, DESCR("latin capital letter O with acute; UNICODE(00D3) TABLE(ISOlat1)")},
#line 75 "./xhtml_ent.gperf"
    {"egrave",      	232	, DESCR("latin small letter e with grave; UNICODE(00E8) TABLE(ISOlat1)")},
#line 99 "./xhtml_ent.gperf"
    {"quot",      	34	, DESCR(" quotation mark = APL quote; UNICODE(0022) TABLE(ISOnum)")},
#line 32 "./xhtml_ent.gperf"
    {"frac12",      	189	, DESCR("vulgar fraction one half = fraction one half; UNICODE(00BD) TABLE(ISOnum)")},
#line 58 "./xhtml_ent.gperf"
    {"times",      	215	, DESCR("multiplication sign; UNICODE(00D7) TABLE(ISOnum)")},
#line 177 "./xhtml_ent.gperf"
    {"upsilon",      	965	, DESCR("greek small letter upsilon; UNICODE(03C5) ISOgrk3")},
#line 123 "./xhtml_ent.gperf"
    {"ldquo",      	8220	, DESCR("left double quotation mark; UNICODE(201C) TABLE(ISOnum)")},
#line 244 "./xhtml_ent.gperf"
    {"sdot",      	8901	, DESCR("dot operator; UNICODE(22C5) TABLE(ISOamsb)")},
#line 36 "./xhtml_ent.gperf"
    {"Aacute",      	193	, DESCR("latin capital letter A with acute; UNICODE(00C1) TABLE(ISOlat1)")},
#line 67 "./xhtml_ent.gperf"
    {"agrave",      	224	, DESCR("latin small letter a with grave = latin small letter a grave; UNICODE(00E0) TABLE(ISOlat1)")},
#line 110 "./xhtml_ent.gperf"
    {"tilde",      	732	, DESCR(" small tilde; UNICODE(02DC) TABLE(ISOdia)")},
#line 79 "./xhtml_ent.gperf"
    {"igrave",      	236	, DESCR("latin small letter i with grave; UNICODE(00EC) TABLE(ISOlat1)")},
#line 121 "./xhtml_ent.gperf"
    {"rsquo",      	8217	, DESCR("right single quotation mark; UNICODE(2019) TABLE(ISOnum)")},
#line 162 "./xhtml_ent.gperf"
    {"zeta",      	950	, DESCR("greek small letter zeta; UNICODE(03B6) ISOgrk3")},
#line 158 "./xhtml_ent.gperf"
    {"beta",      	946	, DESCR("greek small letter beta; UNICODE(03B2) ISOgrk3")},
#line 134 "./xhtml_ent.gperf"
    {"Beta",      	914	, DESCR("greek capital letter beta; UNICODE(0392)")},
#line 120 "./xhtml_ent.gperf"
    {"lsquo",      	8216	, DESCR("left single quotation mark; UNICODE(2018) TABLE(ISOnum)")},
#line 159 "./xhtml_ent.gperf"
    {"gamma",      	947	, DESCR("greek small letter gamma; UNICODE(03B3) ISOgrk3")},
#line 92 "./xhtml_ent.gperf"
    {"ugrave",      	249	, DESCR("latin small letter u with grave; UNICODE(00F9) TABLE(ISOlat1)")},
#line 84 "./xhtml_ent.gperf"
    {"ntilde",      	241	, DESCR("latin small letter n with tilde; UNICODE(00F1) TABLE(ISOlat1)")},
#line 64 "./xhtml_ent.gperf"
    {"Yacute",      	221	, DESCR("latin capital letter Y with acute; UNICODE(00DD) TABLE(ISOlat1)")},
#line 113 "./xhtml_ent.gperf"
    {"thinsp",      	8201	, DESCR("thin space; UNICODE(2009) TABLE(ISOpub)")},
#line 88 "./xhtml_ent.gperf"
    {"otilde",      	245	, DESCR("latin small letter o with tilde; UNICODE(00F5) TABLE(ISOlat1)")},
#line 56 "./xhtml_ent.gperf"
    {"Otilde",      	213	, DESCR("latin capital letter O with tilde; UNICODE(00D5) TABLE(ISOlat1)")},
#line 38 "./xhtml_ent.gperf"
    {"Atilde",      	195	, DESCR("latin capital letter A with tilde; UNICODE(00C3) TABLE(ISOlat1)")},
#line 163 "./xhtml_ent.gperf"
    {"eta",      	951	, DESCR("greek small letter eta; UNICODE(03B7) ISOgrk3")},
#line 135 "./xhtml_ent.gperf"
    {"Gamma",      	915	, DESCR("greek capital letter gamma; UNICODE(0393) ISOgrk3")},
#line 150 "./xhtml_ent.gperf"
    {"Sigma",      	931	, DESCR("greek capital letter sigma; UNICODE(03A3) ISOgrk3")},
#line 61 "./xhtml_ent.gperf"
    {"Uacute",      	218	, DESCR("latin capital letter U with acute; UNICODE(00DA) TABLE(ISOlat1)")},
#line 233 "./xhtml_ent.gperf"
    {"equiv",      	8801	, DESCR("identical to; UNICODE(2261) TABLE(ISOtech)")},
#line 157 "./xhtml_ent.gperf"
    {"alpha",      	945	, DESCR("greek small letter alpha; UNICODE(03B1) ISOgrk3")},
#line 192 "./xhtml_ent.gperf"
    {"image",      	8465	, DESCR("blackletter capital I = imaginary part; UNICODE(2111) TABLE(ISOamso)")},
#line 187 "./xhtml_ent.gperf"
    {"prime",      	8242	, DESCR("prime = minutes = feet; UNICODE(2032) TABLE(ISOtech)")},
#line 160 "./xhtml_ent.gperf"
    {"delta",      	948	, DESCR("greek small letter delta; UNICODE(03B4) ISOgrk3")},
#line 188 "./xhtml_ent.gperf"
    {"Prime",      	8243	, DESCR("double prime = seconds = inches; UNICODE(2033) TABLE(ISOtech)")},
#line 76 "./xhtml_ent.gperf"
    {"eacute",      	233	, DESCR("latin small letter e with acute; UNICODE(00E9) TABLE(ISOlat1)")},
#line 189 "./xhtml_ent.gperf"
    {"oline",      	8254	, DESCR("overline = spacing overscore; UNICODE(203E) NEW")},
#line 68 "./xhtml_ent.gperf"
    {"aacute",      	225	, DESCR("latin small letter a with acute; UNICODE(00E1) TABLE(ISOlat1)")},
#line 165 "./xhtml_ent.gperf"
    {"iota",      	953	, DESCR("greek small letter iota; UNICODE(03B9) ISOgrk3")},
#line 80 "./xhtml_ent.gperf"
    {"iacute",      	237	, DESCR("latin small letter i with acute; UNICODE(00ED) TABLE(ISOlat1)")},
#line 96 "./xhtml_ent.gperf"
    {"yacute",      	253	, DESCR("latin small letter y with acute; UNICODE(00FD) TABLE(ISOlat1)")},
#line 231 "./xhtml_ent.gperf"
    {"asymp",      	8776	, DESCR("almost equal to = asymptotic to; UNICODE(2248) ISOamsr")},
#line 93 "./xhtml_ent.gperf"
    {"uacute",      	250	, DESCR("latin small letter u with acute; UNICODE(00FA) TABLE(ISOlat1)")},
#line 130 "./xhtml_ent.gperf"
    {"rsaquo",      	8250	, DESCR("single right-pointing angle quotation mark; UNICODE(203A) ISO proposed")},
#line 194 "./xhtml_ent.gperf"
    {"trade",      	8482	, DESCR("trade mark sign; UNICODE(2122) TABLE(ISOnum)")},
#line 129 "./xhtml_ent.gperf"
    {"lsaquo",      	8249	, DESCR("single left-pointing angle quotation mark; UNICODE(2039) ISO proposed")},
#line 195 "./xhtml_ent.gperf"
    {"alefsym",      	8501	, DESCR("alef symbol = first transfinite cardinal; UNICODE(2135) NEW")},
#line 242 "./xhtml_ent.gperf"
    {"otimes",      	8855	, DESCR("circled times = vector product; UNICODE(2297) TABLE(ISOamsb)")},
#line 210 "./xhtml_ent.gperf"
    {"empty",      	8709	, DESCR("empty set = null set = diameter; UNICODE(2205) TABLE(ISOamso)")},
#line 52 "./xhtml_ent.gperf"
    {"Ntilde",      	209	, DESCR("latin capital letter N with tilde; UNICODE(00D1) TABLE(ISOlat1)")},
#line 70 "./xhtml_ent.gperf"
    {"atilde",      	227	, DESCR("latin small letter a with tilde; UNICODE(00E3) TABLE(ISOlat1)")},
#line 34 "./xhtml_ent.gperf"
    {"iquest",      	191	, DESCR("inverted question mark = turned question mark; UNICODE(00BF) TABLE(ISOnum)")},
#line 138 "./xhtml_ent.gperf"
    {"Zeta",      	918	, DESCR("greek capital letter zeta; UNICODE(0396)")},
#line 136 "./xhtml_ent.gperf"
    {"Delta",      	916	, DESCR("greek capital letter delta; UNICODE(0394) ISOgrk3")},
#line 228 "./xhtml_ent.gperf"
    {"there4",      	8756	, DESCR("therefore; UNICODE(2234) TABLE(ISOtech)")},
#line 23 "./xhtml_ent.gperf"
    {"acute",      	180	, DESCR("acute accent = spacing acute; UNICODE(00B4) TABLE(ISOdia)")},
#line 209 "./xhtml_ent.gperf"
    {"exist",      	8707	, DESCR("there exists; UNICODE(2203) TABLE(ISOtech)")},
#line 182 "./xhtml_ent.gperf"
    {"thetasym",      	977	, DESCR("greek small letter theta symbol; UNICODE(03D1) NEW")},
#line 140 "./xhtml_ent.gperf"
    {"Theta",      	920	, DESCR("greek capital letter theta; UNICODE(0398) ISOgrk3")},
#line 164 "./xhtml_ent.gperf"
    {"theta",      	952	, DESCR("greek small letter theta; UNICODE(03B8) ISOgrk3")}
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
      0,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,   1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,   2,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,   3,  -1,  -1,   4,  -1,  -1,  -1,   5,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,   6,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
      7,  -1,   8,  -1,   9,  10,  11,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  12,  -1,  13,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  14,  15,  16,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  17,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  18,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  19,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  20,  -1,  21,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  22,  -1,  -1,
     -1,  23,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  24,  -1,  25,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  26,  -1,  -1,  27,  -1,  -1,  28,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  29,  30,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  31,  -1,  -1,  32,  -1,  33,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  34,  -1,  -1,
     -1,  -1,  -1,  -1,  35,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  36,  -1,  -1,  -1,  37,  -1,  38,  -1,
     -1,  -1,  39,  -1,  -1,  -1,  -1,  40,  -1,  -1,
     -1,  -1,  41,  -1,  -1,  -1,  -1,  42,  43,  -1,
     44,  45,  46,  -1,  -1,  -1,  47,  48,  -1,  49,
     50,  -1,  51,  -1,  -1,  52,  -1,  53,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  54,  -1,
     -1,  -1,  -1,  55,  -1,  -1,  -1,  -1,  56,  -1,
     -1,  57,  -1,  -1,  58,  -1,  -1,  -1,  59,  60,
     61,  -1,  62,  63,  64,  -1,  -1,  -1,  65,  66,
     -1,  -1,  -1,  67,  -1,  68,  -1,  -1,  69,  -1,
     -1,  70,  -1,  71,  -1,  -1,  -1,  -1,  72,  73,
     -1,  -1,  -1,  -1,  74,  -1,  -1,  -1,  75,  76,
     -1,  -1,  -1,  -1,  -1,  77,  -1,  78,  -1,  -1,
     -1,  -1,  79,  -1,  -1,  -1,  -1,  -1,  -1,  80,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  81,  82,
     -1,  -1,  83,  -1,  -1,  84,  -1,  85,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  86,  -1,  -1,  -1,  -1,
     -1,  87,  -1,  -1,  -1,  88,  -1,  -1,  -1,  -1,
     -1,  -1,  89,  -1,  90,  -1,  -1,  -1,  -1,  -1,
     91,  -1,  92,  -1,  -1,  93,  94,  95,  -1,  96,
     97,  -1,  98,  -1,  -1,  99, 100, 101, 102, 103,
    104, 105,  -1,  -1,  -1,  -1,  -1,  -1, 106, 107,
    108,  -1,  -1,  -1, 109, 110, 111,  -1, 112, 113,
     -1,  -1,  -1,  -1, 114, 115, 116,  -1, 117, 118,
     -1,  -1,  -1,  -1, 119,  -1,  -1,  -1, 120, 121,
    122,  -1,  -1, 123,  -1,  -1,  -1, 124,  -1,  -1,
     -1, 125,  -1, 126,  -1,  -1, 127, 128, 129,  -1,
    130, 131,  -1,  -1,  -1,  -1, 132,  -1,  -1,  -1,
    133,  -1,  -1,  -1, 134,  -1, 135,  -1, 136, 137,
     -1, 138,  -1,  -1, 139,  -1, 140,  -1, 141, 142,
     -1,  -1,  -1,  -1, 143, 144,  -1,  -1,  -1,  -1,
     -1, 145,  -1,  -1,  -1,  -1, 146, 147, 148, 149,
     -1,  -1,  -1, 150,  -1,  -1,  -1,  -1, 151, 152,
     -1, 153,  -1,  -1,  -1, 154,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 155,  -1,  -1, 156,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 157,  -1,  -1,  -1,
     -1,  -1, 158,  -1,  -1,  -1,  -1, 159,  -1,  -1,
     -1,  -1, 160,  -1, 161,  -1,  -1, 162, 163, 164,
     -1,  -1,  -1,  -1,  -1, 165,  -1, 166,  -1,  -1,
     -1, 167, 168, 169,  -1, 170, 171, 172,  -1, 173,
     -1,  -1, 174, 175,  -1, 176,  -1, 177,  -1,  -1,
    178, 179,  -1,  -1,  -1, 180, 181, 182, 183,  -1,
    184, 185,  -1, 186,  -1,  -1,  -1, 187,  -1, 188,
     -1,  -1,  -1,  -1, 189,  -1,  -1,  -1,  -1, 190,
     -1,  -1,  -1, 191, 192, 193, 194, 195, 196,  -1,
     -1, 197,  -1, 198, 199, 200,  -1,  -1,  -1, 201,
    202,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 203,
     -1,  -1,  -1,  -1, 204,  -1,  -1, 205, 206,  -1,
     -1,  -1,  -1,  -1,  -1, 207,  -1, 208, 209,  -1,
    210,  -1, 211,  -1,  -1, 212,  -1,  -1,  -1,  -1,
    213,  -1,  -1, 214,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1, 215, 216,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 217,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 218,  -1, 219,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 220,  -1,  -1, 221,  -1,  -1, 222,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1, 223, 224,  -1,  -1,  -1,
     -1,  -1,  -1, 225, 226, 227, 228,  -1, 229,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    230,  -1,  -1,  -1,  -1,  -1,  -1, 231,  -1,  -1,
     -1,  -1,  -1,  -1, 232,  -1,  -1,  -1, 233,  -1,
     -1,  -1,  -1, 234,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 235,  -1, 236,  -1,  -1,  -1,  -1,  -1,
    237,  -1,  -1,  -1,  -1, 238,  -1,  -1, 239,  -1,
    240,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    241,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 242, 243,  -1,  -1,  -1,  -1,  -1,
    244,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 245,  -1,  -1,  -1,  -1,  -1, 246,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1, 247,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1, 248,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1, 249,  -1,  -1,
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
    250,  -1,  -1,  -1,  -1, 251,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1, 252
  };

#ifdef __GNUC__
__inline
#ifdef __GNUC_STDC_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct xhtml_ent_s *
xhtml_ent_gperf (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = wordlist[index].entity;

              if (*str == *s && !strcmp (str + 1, s + 1))
                return &wordlist[index];
            }
        }
    }
  return 0;
}
