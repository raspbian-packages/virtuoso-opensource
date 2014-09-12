#ifndef __RFD_MAPPING_JSO_H
#define __RFD_MAPPING_JSO_H
/*  */
/* $Id$ */
/*  */
/* This file is part of the OpenLink Software Virtuoso Open-Source (VOS) */
/* project. */
/*  */
/* Copyright (C) 1998-2012 OpenLink Software */
/*  */
/* This project is free software; you can redistribute it and/or modify it */
/* under the terms of the GNU General Public License as published by the */
/* Free Software Foundation; only version 2 of the License, dated June 1991. */
/*  */
/* This program is distributed in the hope that it will be useful, but */
/* WITHOUT ANY WARRANTY; without even the implied warranty of */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU */
/* General Public License for more details. */
/*  */
/* You should have received a copy of the GNU General Public License along */
/* with this program; if not, write to the Free Software Foundation, Inc., */
/* 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA */
/*  */
/*  */
/* Flags that describe restrictions on possible values of the variable or the use of the var */
#include "jso.h"
#define SPART_VARR__ALL	0xFFFF	/*! OR of everything, do not forget to edit when new bits are added. */
#define SPART_VARR_SPRINTFF	0x0001	/*! The values of a variable is always made according to one of specified formats */
#define SPART_VARR_IS_REF	0x0002	/*! The value is a node reference, IRI or blank */
#define SPART_VARR_IS_IRI	0x0004	/*! The value is an IRI node reference */
#define SPART_VARR_IS_BLANK	0x0008	/*! The value is a blank node reference */
#define SPART_VARR_IRI_CALC	0x0010	/*! The variable an IRI calculated by other data, e_iri_classes of equiv class will contain known formats of possible values of the variable */
#define SPART_VARR_IS_LIT	0x0020	/*! The value is a literal */
#define SPART_VARR_TYPED	0x0040	/*! The value is a literal of a known type and the type is saved as e_datatype of equiv class */
#define SPART_VARR_FIXED	0x0080	/*! The value is known and e_fixedvalue contains either SQL representation of the literal or IRI string of the IRI node reference */
#define SPART_VARR_NOT_NULL	0x0100	/*! The variable is always bound, can't be NULL */
#define SPART_VARR_LONG_EQ_SQL	0x0200	/*! The value is a number of some sort or a datetime or NULL, not string or RDF box. */
/* Flags listed below this line are for temporary use, they never appear in databases sho they may be changed. */
#define SPART_VARR_ALWAYS_NULL	0x0400	/*! The variable is never bound, can't have value other than NULL */
#define SPART_VARR_GLOBAL	0x0800	/*! The variable is a global parameter */
#define SPART_VARR_EXTERNAL	0x1000	/*! The variable is in scalar subquery and is bound outside */
#define SPART_VARR_EXPORTED	0x2000	/*! The variable is exported to the final result-set */
#define SPART_VARR_CONFLICT	0x4000	/*! The variable should match conflicting requirements or should appear in the result set of an empty union, so it is never bound */
#define SPART_VARR_EQ_VAR	0x8000	/*! This is to indicate that the equivalence class saves some equalities that no longer exists as filters */
/* Flags of actions to be done in case of match of triple pattern to conditions of the quad map */
#define SPART_QM_EMPTY	0x0002	/*! The quad map does not contain real mapping but it's a root of tree of submaps and it can set a common 'exclusive' */
#define SPART_QM_EXCLUSIVE	0x0004	/*! The quad map is an almost-exclusive storage for triples whose fields match fixed fields of the map. Red cut in the pattern matching search. This takes precedence over SPART_QM_SOFT_EXCLUSIVE */
#define SPART_QM_OK_FOR_ANY_QUAD	0x0008	/*! The quad map may contain any quad so it can be used as a default qm of the storage */
#define SPART_QM_SOFT_EXCLUSIVE	0x0010	/*! The quad map is either exclusive or not, discretion is made by compiler */
#define SPART_QS_NO_IMPLICIT_USER_QM	0x0001	/*! The quad storage disables user quad maps for triple patterns with unbound graph */
#define SPART_QS_BLOCK_DEFAULT_QM	0x0002	/*! The quad storage disables the use of default quad map and signals an error if no other qm matches */
/* Flags that are responsible for various serialization features. */
/* Some features are labeled as "blocking", because if such a feature is required but flag is not set, an error is signaled. */
/* An occurrence of a non-blocking feature provides some hint to the optimizer of the SPARQL service endpoint; a blocking one alters semantics. */
#define SSG_SD_QUAD_MAP	0x0001	/*! Allows the use of QUAD MAP groups in the output */
#define SSG_SD_OPTION	0x0002	/*! Allows the use of OPTION keyword in the output */
#define SSG_SD_BREAKUP	0x0004	/*! Flags if BREAKUP hint options should be printed, this has no effect w/o SSG_SD_OPTION */
#define SSG_SD_PKSELFJOIN	0x0008	/*! Flags if PKSELFJOIN hint options should be printed, this has no effect w/o SSG_SD_OPTION */
#define SSG_SD_RVR	0x0010	/*! Flags if RVR hint options should be printed, this has no effect w/o SSG_SD_OPTION */
#define SSG_SD_IN	0x0020	/*! Allows the use of IN operator, non-blocking because can be replaced with '=' */
#define SSG_SD_LIKE	0x0040	/*! Allows the use of LIKE operator, blocking */
#define SSG_SD_GLOBALS	0x0080	/*! Allows the use of global variables (with colon at the front of the name), blocking in most of cases */
#define SSG_SD_BI	0x0100	/*! Allows the use of SPARQL-BI extensions, blocking in most of cases */
#define SSG_SD_VIRTSPECIFIC	0x0200	/*! Allows the use of Virtuoso-specific features not listed above, say DEFINE, blocking in most of cases */
#define SSG_SD_VOS_509	0x03FF	/*! Allows everything that is supported by Virtuoso Open Source 5.0.9 */
#define SSG_SD_SERVICE	0x0400	/*! Allows the use of SERVICE extension, blocking */
#define SSG_SD_VOS_5_LATEST	0x0FFF	/*! Allows everything that is supported by CVS head of Virtuoso Open Source 5.x.x */
#define SSG_SD_TRANSIT	0x1000	/*! Allows the use of transitivity extension, blocking */
#define SSG_SD_VOS_6	0x1FFF	/*! Allows everything that is supported by Virtuoso Open Source 6.0.0 */
#define SSG_SD_SPARQL11_DRAFT	0x2000	/*! Allows the use of SPARQL 1.1 aggregates, BINDINGS, new built-in functions, MINUS, EXISTS syntax */
#define SSG_SD_SPARQL11_MORE	0x4000	/*! Allows the use of SPARQL 1.1 BIND, path expressions, entilement */

#define JSO_IRI_OF_rdf_val_range_array  "http://www.openlinksw.com/schemas/virtrdf#array-of-ValRange"
typedef struct rdf_val_range_s * *rdf_val_range_array_t;

/*! Description of set of possible values of a variable or a format or an pattern item */
#define JSO_IRI_OF_rdf_val_range  "http://www.openlinksw.com/schemas/virtrdf#ValRange"
typedef struct rdf_val_range_s
{
  ptrlong	rvrRestrictions;	/*!< Natural restrictions on values stored at the field */
  ccaddr_t	rvrDatatype;	/*!< Datatype of stored values, if fixed */
  ccaddr_t	rvrLanguage;	/*!< Language, if fixed */
  ccaddr_t	rvrFixedValue;	/*!< Value of stored values, if fixed */
  ccaddr_t *	rvrSprintffs;	/*!< Sprintf formats that cover possible IRI values */
  ptrlong	rvrSprintffCount;	/*!< Number of used items of rvrSprintffs */
  ccaddr_t *	rvrIriClasses;	/*!< Possible types of the IRI, if the IRI is calculable */
  ptrlong	rvrIriClassCount;	/*!< Number of used items of rvrIRIClasses */
  ccaddr_t *	rvrRedCuts;	/*!< Impossible values, blocked by option (EXCLUSIVE) of earlier quad maps */
  ptrlong	rvrRedCutCount;	/*!< Number of used items of rvrRedCuts */
/* Don't forget to add NULLS to SPART_RVR_LIST_OF_NULLS when adding fields here */
} rdf_val_range_t;

#define JSO_IRI_OF_qm_format_array  "http://www.openlinksw.com/schemas/virtrdf#array-of-QuadMapFormat"
typedef struct qm_format_s * *qm_format_array_t;

/*! Description of single field where RDF data may come from */
#define JSO_IRI_OF_qm_format  "http://www.openlinksw.com/schemas/virtrdf#QuadMapFormat"
typedef struct qm_format_s
{
  ccaddr_t	qmfName;	/*!< Name used for error messages and debugging */
/* Templates that convert raw column into other types (can be applied to both field and not field expression) */
  ccaddr_t	qmfShortTmpl;	/*!< 'short' value template */
  ccaddr_t	qmfLongTmpl;	/*!< 'long' value template */
  ccaddr_t	qmfSqlvalTmpl;	/*!< 'sqlval' value template */
  ccaddr_t	qmfDatatypeTmpl;	/*!< datatype value template, compiler will use qmfDatatypeOfShortTmpl if this one is not set */
  ccaddr_t	qmfLanguageTmpl;	/*!< language value template, compiler will use qmfLanguageOfShortTmpl if this one is not set */
  ccaddr_t	qmfBoolTmpl;	/*!< Boolean value template */
/* Templates of booleans that tell whether the short is of some sort: */
  ccaddr_t	qmfIsrefOfShortTmpl;	/*!< ... whether the short is ref */
  ccaddr_t	qmfIsuriOfShortTmpl;	/*!< ... whether the short is uri */
  ccaddr_t	qmfIsblankOfShortTmpl;	/*!< ... whether the short is blank node ref */
  ccaddr_t	qmfIslitOfShortTmpl;	/*!< ... whether the short is literal */
  ccaddr_t	qmfIsnumericOfShortTmpl;	/*!< ... whether the short is number (unlike SSG_VALMODE_NUM, no DATE/TIME etc., only number) */
/* Templates of 0/1 integer expressions that tell whether the short is of some sort: */
  ccaddr_t	qmf01uriOfShortTmpl;	/*!< ... whether the short is uri, result is 1 or 0 */
  ccaddr_t	qmf01blankOfShortTmpl;	/*!< ... whether the short is blank node ref, result is 1 or 0 */
/* Templates that convert short value into other types (can be applied to both field and not field expression) */
  ccaddr_t	qmfLongOfShortTmpl;	/*!< ... long from short */
  ccaddr_t	qmfSqlvalOfShortTmpl;	/*!< ... SQL value from short */
  ccaddr_t	qmfDatatypeOfShortTmpl;	/*!< ... datatype IRI STRING from short */
  ccaddr_t	qmfLanguageOfShortTmpl;	/*!< ... language ID STRING from short */
  ccaddr_t	qmfBoolOfShortTmpl;	/*!< ... boolean value from short */
  ccaddr_t	qmfIidOfShortTmpl;	/*!< ... URI_ID from short */
  ccaddr_t	qmfUriOfShortTmpl;	/*!< ... URI STRING from short */
  ccaddr_t	qmfStrsqlvalOfShortTmpl;	/*!< ... SQL representation of the STRING value of short */
/* Templates of expressions that make short values from other representations */
  ccaddr_t	qmfShortOfTypedsqlvalTmpl;	/*!< ... makes short by SQL value with specified type and/or language */
  ccaddr_t	qmfShortOfSqlvalTmpl;	/*!< ... makes short by sqlvalue with no language and a datatype specified by SQL type */
  ccaddr_t	qmfShortOfLongTmpl;	/*!< ... makes short by long */
  ccaddr_t	qmfShortOfUriTmpl;	/*!< ... makes short by uri */
  ccaddr_t	qmfShortOfNiceSqlvalTmpl;	/*!< ... works like qmfShortOfSqlvalTmpl for values of one selected data type, not suitable for other types */
  ptrlong	qmfDtpOfNiceSqlval;	/*!< The 'nice' DTP that is an acceptable type of qmfShortOfNiceSqlvalTmpl, zero or unset if no nice type */
/* Templates of expressions that find existing short values from other representations */
  ccaddr_t	qmfExistingShortOfTypedsqlvalTmpl;	/*!< ... finds existing obj by SQL value with specified type and/or language */
  ccaddr_t	qmfExistingShortOfSqlvalTmpl;	/*!< ... finds existing obj by sqlvalue with no language and a datatype specified by SQL type */
  ccaddr_t	qmfExistingShortOfLongTmpl;	/*!< ... finds existing obj by long */
  ccaddr_t	qmfExistingShortOfUriTmpl;	/*!< ... finds existing obj by uri */
  ccaddr_t	qmfExistingShortOfNiceSqlvalTmpl;	/*!< ... works like qmfExistingShortOfSqlvalTmpl for values of one selected data type, not suitable for other types */
/* Misc */
  ptrlong	qmfIsBijection;	/*!< Nonzero if the format is bijection so long values are equal IFF short values of the type are equal */
  ptrlong	qmfDerefFlags;	/*!< Flags of IRI dereferencing */
  ptrlong	qmfIsStable;	/*!< Nonzero if sql values are in order IFF of short values are in order */
  ptrlong	qmfIsSubformatOfLong;	/*!< Nonzero if the format is subformat of LONG valmode */
  ptrlong	qmfIsSubformatOfLongWhenEqToSql;	/*!< Nonzero if the format is subformat of LONG valmode for values that have same representation in LONG and SQL valmodes */
  ptrlong	qmfIsSubformatOfLongWhenRef;	/*!< Nonzero if the format is subformat of LONG valmode for values that are IRIs or blank nodes */
  ccaddr_t	qmfCmpFuncName;	/*!< Name of comparison function that acts like strcmp but args are of this type */
  ccaddr_t	qmfTypeminTmpl;	/*!< Template of expn that returns the smallest value of the type of value of arg */
  ccaddr_t	qmfTypemaxTmpl;	/*!< Template of expn that returns the biggest possible value of the type of value of arg */
  ptrlong	qmfWrapDistinct;	/*!< Nonzero if SELECT DISTINCT requires RDF_DIST_SER_LONG/RDF_DIST_DESER_LONG wrapping. */
/* Metadata about values that can be stored in this field */
  ptrlong	qmfColumnCount;	/*!< Number of columns of the original data (usually 1, zero if variable and not yet set) */
  ptrlong	qmfOkForAnySqlvalue;	/*!< Nonzero if the field format can store any possible SQL value (even if the field itself can not) */
  ptrlong	qmfUriIdOffset;	/*!< The value that should be added to locally stored ref id in order to get portable ref id */
  ccaddr_t	qmfCustomString1;	/*!< The value that can be used as a value of ^{custom-string-1}^ in templates */
  ccaddr_t	qmfArgDtps;	/*!< String of dtp_t bytes, can be used as a value of ^{opt-comma-arg-dtps}^ in templates */
  qm_format_array_t	qmfSuperFormats;	/*!< Array of formats that can store any value that current format can store */
  rdf_val_range_t qmfValRange;	/*! Natural restrictions on values stored in the source column of format */
} qm_format_t;

#define JSO_IRI_OF_qm_atable_array  "http://www.openlinksw.com/schemas/virtrdf#array-of-QuadMapATable"
typedef struct qm_atable_s * *qm_atable_array_t;

/*! Description of single source RDBMS table alias */
#define JSO_IRI_OF_qm_atable  "http://www.openlinksw.com/schemas/virtrdf#QuadMapATable"
typedef struct qm_atable_s
{
  ccaddr_t	qmvaAlias;	/*!< Table alias where the column comes from */
  ccaddr_t	qmvaTableName;	/*!< Column name */
} qm_atable_t;

#define JSO_IRI_OF_qm_column_array  "http://www.openlinksw.com/schemas/virtrdf#array-of-QuadMapColumn"
typedef struct qm_column_s * *qm_column_array_t;

/*! Description of single source RDBMS column */
#define JSO_IRI_OF_qm_column  "http://www.openlinksw.com/schemas/virtrdf#QuadMapColumn"
typedef struct qm_column_s
{
  ccaddr_t	qmvcAlias;	/*!< Table alias where the column comes from */
  ccaddr_t	qmvcColumnName;	/*!< Column name */
  ccaddr_t	qmvcColumnFromIRI;	/*!<  */
} qm_column_t;

#define JSO_IRI_OF_qm_ftext_array  "http://www.openlinksw.com/schemas/virtrdf#array-of-QuadMapFText"
typedef struct qm_ftext_s * *qm_ftext_array_t;

/*! Free text or geo parameters of a quad map value */
#define JSO_IRI_OF_qm_ftext  "http://www.openlinksw.com/schemas/virtrdf#QuadMapFText"
typedef struct qm_ftext_s
{
  ccaddr_t	qmvftAlias;	/*!< Alias of a table with free-text data */
  ccaddr_t	qmvftAuxAlias;	/*!< Alias of a table that links free-text data back to object (if needed) */
  ccaddr_t	qmvftTableName;	/*!< Name of a table with free-text data */
  ccaddr_t	qmvftAuxTableName;	/*!< Name of a table that links free-text data back to object (if needed) */
  ccaddr_t	qmvftColumnName;	/*!< Name of a column with free-text data */
  ccaddr_t *	qmvftConds;	/*!< Templates of filters and join conditions related to the free-text indexing table */
  ptrlong	qmvftXmlIndex;	/*!< Flags if the free-text index is XML so can use xcontains (ditto xpath_contains) */
} qm_ftext_t;

#define JSO_IRI_OF_qm_value_array  "http://www.openlinksw.com/schemas/virtrdf#array-of-QuadMapValue"
typedef struct qm_value_s * *qm_value_array_t;

/*! Description of one of four column patterns of a mapping pattern */
#define JSO_IRI_OF_qm_value  "http://www.openlinksw.com/schemas/virtrdf#QuadMapValue"
typedef struct qm_value_s
{
  ccaddr_t	qmvTableName;	/*!< Table name that is used if no alias is used */
  qm_atable_array_t	qmvATables;	/*!< Aliased tables whose aliases are used in columns */
  qm_column_array_t	qmvColumns;	/*!< Relational columns used as a source for qmvFormat */
  ccaddr_t *	qmvConds;	/*!< Templates of filters and join conditions related to the value */
  struct qm_format_s *	qmvFormat;	/*!< Quad map format used to convert relational data into RDF nodes */
  struct qm_ftext_s *	qmvFText;	/*!< Free text parameters */
  struct qm_ftext_s *	qmvGeo;	/*!< Geo parameters */
  ptrlong	qmvColumnsFormKey;	/*!< Flags whether columns of qmvColumns form a unique key of the relational table */
  ccaddr_t	qmvColumnsToIRI;	/*!<  */
  ccaddr_t	qmvIriClass;	/*!< Known IRI class, if the IRI is calculable */
  rdf_val_range_t qmvRange;	/*! Natural restrictions on values stored in the source column of format */
} qm_value_t;

#define JSO_IRI_OF_quad_map_array  "http://www.openlinksw.com/schemas/virtrdf#array-of-QuadMap"
typedef struct quad_map_s * *quad_map_array_t;

/*! Description of single mapping pattern, including its subpatterns */
#define JSO_IRI_OF_quad_map  "http://www.openlinksw.com/schemas/virtrdf#QuadMap"
typedef struct quad_map_s
{
  rdf_val_range_t qmGraphRange;	/*! Restrictions on graph */
  rdf_val_range_t qmSubjectRange;	/*! Restrictions on subject */
  rdf_val_range_t qmPredicateRange;	/*! Restrictions on predicate */
  rdf_val_range_t qmObjectRange;	/*! Restrictions on object */
  struct qm_value_s *	qmGraphMap;	/*!< Graph map if triple has a variable in graph position */
  struct qm_value_s *	qmSubjectMap;	/*!< Subject map if triple has a variable in subject position */
  struct qm_value_s *	qmPredicateMap;	/*!< Predicate map if triple has a variable in predicate position */
  struct qm_value_s *	qmObjectMap;	/*!< Object map if triple has a variable in object position */
  ccaddr_t	qmTableName;	/*!< Table name where mapped rows are from, if this is the only table. Use only if there's no alias and hence no qmvATable */
  qm_atable_array_t	qmATables;	/*!< Aliased tables whose aliases are used in qmConds but not in qmvConds */
  ccaddr_t *	qmConds;	/*!< Join conditions and filters not included into qmvConds of columns */
  ccaddr_t	qmTableRowFilter;	/*!< DEPRECATED Filter expression that is true for rows that should be mapped, will appear in WHERE clauses */
  quad_map_array_t	qmUserSubMaps;	/*!< Array of user-defined submaps, should never appear in MJVs or default storage */
  ptrlong	qmMatchingFlags;	/*!< What should be done in case of match of triple pattern to conditions of the quad map */
  ptrlong	qmPriorityOrder;	/*!< Integer to specify default order in parent's qmUserSubMaps */
  ccaddr_t *	qmAliasesKeyrefdByQuad;	/*!< List of aliases such that any quad made by the quad map can be made from exactly one row from the alias, so quad identifies the row there */
  ptrlong *	qmAllATableUses;	/*!< Complete list of all qmatu made for qmATables and qmvATables, sorted alphabetically by qmatu_alias */
  ptrlong	qmAllATableUseCount;	/*!< Number of used elements in qmAllATableUseCount */
  ccaddr_t *	qmAllConds;	/*!< Complete list of all join conditions from qmConds and qmvConds, sorted alphabetically */
  ptrlong	qmAllCondCount;	/*!< Number of used elements in qmAllCondCount */
} quad_map_t;

#define JSO_IRI_OF_sparql_macro_library_array  "http://www.openlinksw.com/schemas/virtrdf#array-of-SparqlMacroLibrary"
typedef struct sparql_macro_library_s * *sparql_macro_library_array_t;

/*! Library of SPARQL macro definitions that are loaded automatically when the storage is used */
#define JSO_IRI_OF_sparql_macro_library  "http://www.openlinksw.com/schemas/virtrdf#SparqlMacroLibrary"
typedef struct sparql_macro_library_s
{
  ccaddr_t	smlSourceText;	/*!< Source text of the library */
  ptrlong	smlCompilationState;	/*!< 2 for completely (and successfull compilation, 1 for compilation in progress, 0 for not even started */
  ccaddr_t	smlIncludes;	/*!< IRIs of included macro libraries */
  ccaddr_t	smlList;	/*!< The compiled library */
} sparql_macro_library_t;

#define JSO_IRI_OF_quad_storage_array  "http://www.openlinksw.com/schemas/virtrdf#array-of-QuadStorage"
typedef struct quad_storage_s * *quad_storage_array_t;

/*! All mapping patterns plus tracking info */
#define JSO_IRI_OF_quad_storage  "http://www.openlinksw.com/schemas/virtrdf#QuadStorage"
typedef struct quad_storage_s
{
  quad_map_array_t	qsMjvMaps;	/*!<  */
  quad_map_array_t	qsUserMaps;	/*!<  */
  struct quad_map_s *	qsDefaultMap;	/*!<  */
  struct sparql_macro_library_s *	qsMacroLibrary;	/*!<  */
  ptrlong	qsMatchingFlags;	/*!<  */
  ccaddr_t	qsAlterInProgress;	/*!<  */
} quad_storage_t;

extern void rdf_mapping_jso_init (void);
#endif
