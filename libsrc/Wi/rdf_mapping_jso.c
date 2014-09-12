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
#include "rdf_mapping_jso.h"
/* Flags listed below this line are for temporary use, they never appear in databases sho they may be changed. */
/* Flags of actions to be done in case of match of triple pattern to conditions of the quad map */
/* Flags that are responsible for various serialization features. */
/* Some features are labeled as "blocking", because if such a feature is required but flag is not set, an error is signaled. */
/* An occurrence of a non-blocking feature provides some hint to the optimizer of the SPARQL service endpoint; a blocking one alters semantics. */

jso_class_descr_t jso__rdf_val_range_array = {
  JSO_CAT_ARRAY,  "array of struct rdf_val_range_s *",
  "http://www.openlinksw.com/schemas/virtrdf#array-of-ValRange" ,
  "http://www.openlinksw.com/schemas/virtrdf#" , "array-of-ValRange" ,
  NULL, {
    { 0, -1, NULL, NULL },
    {  "http://www.openlinksw.com/schemas/virtrdf#ValRange" , 0, (SMALLEST_POSSIBLE_POINTER-2)} } };

jso_field_descr_t jso_fields__rdf_val_range[] = {
  { NULL	, "rvrRestrictions"	, JSO_BITMASK	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(rdf_val_range_t,rvrRestrictions)	, NULL },
  { NULL	, "rvrDatatype"	, JSO_ANY_URI	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(rdf_val_range_t,rvrDatatype)	, NULL },
  { NULL	, "rvrLanguage"	, JSO_ANY_URI	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(rdf_val_range_t,rvrLanguage)	, NULL },
  { NULL	, "rvrFixedValue"	, JSO_ANY	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(rdf_val_range_t,rvrFixedValue)	, NULL },
  { NULL	, "rvrSprintffs"	, JSO_STRING_array	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(rdf_val_range_t,rvrSprintffs)	, NULL },
  { NULL	, "rvrSprintffCount"	, JSO_INTEGER	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(rdf_val_range_t,rvrSprintffCount)	, NULL },
  { NULL	, "rvrIriClasses"	, JSO_ANY_array	, JSO_PRIVATE	, JSO_FIELD_OFFSET(rdf_val_range_t,rvrIriClasses)	, NULL },
  { NULL	, "rvrIriClassCount"	, JSO_INTEGER	, JSO_PRIVATE	, JSO_FIELD_OFFSET(rdf_val_range_t,rvrIriClassCount)	, NULL },
  { NULL	, "rvrRedCuts"	, JSO_ANY_array	, JSO_PRIVATE	, JSO_FIELD_OFFSET(rdf_val_range_t,rvrRedCuts)	, NULL },
  { NULL	, "rvrRedCutCount"	, JSO_INTEGER	, JSO_PRIVATE	, JSO_FIELD_OFFSET(rdf_val_range_t,rvrRedCutCount)	, NULL },
/* Don't forget to add NULLS to SPART_RVR_LIST_OF_NULLS when adding fields here */
  { NULL	, NULL	, NULL	,0xdeadce11	,0xdeadce11	,NULL } };

jso_class_descr_t jso__rdf_val_range = {
  JSO_CAT_STRUCT,  "struct rdf_val_range_s",
  "http://www.openlinksw.com/schemas/virtrdf#ValRange" ,
  "http://www.openlinksw.com/schemas/virtrdf#" , "ValRange" ,
  NULL, {
    {
      sizeof (rdf_val_range_t),
      -1, jso_fields__rdf_val_range, NULL },
    { NULL, 0, 0} } };

jso_class_descr_t jso__qm_format_array = {
  JSO_CAT_ARRAY,  "array of struct qm_format_s *",
  "http://www.openlinksw.com/schemas/virtrdf#array-of-QuadMapFormat" ,
  "http://www.openlinksw.com/schemas/virtrdf#" , "array-of-QuadMapFormat" ,
  NULL, {
    { 0, -1, NULL, NULL },
    {  "http://www.openlinksw.com/schemas/virtrdf#QuadMapFormat" , 0, (SMALLEST_POSSIBLE_POINTER-2)} } };

jso_field_descr_t jso_fields__qm_format[] = {
  { NULL	, "qmfName"	, JSO_STRING	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_format_t,qmfName)	, NULL },
/* Templates that convert raw column into other types (can be applied to both field and not field expression) */
  { NULL	, "qmfShortTmpl"	, JSO_STRING	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_format_t,qmfShortTmpl)	, NULL },
  { NULL	, "qmfLongTmpl"	, JSO_STRING	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_format_t,qmfLongTmpl)	, NULL },
  { NULL	, "qmfSqlvalTmpl"	, JSO_STRING	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_format_t,qmfSqlvalTmpl)	, NULL },
  { NULL	, "qmfDatatypeTmpl"	, JSO_STRING	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_format_t,qmfDatatypeTmpl)	, NULL },
  { NULL	, "qmfLanguageTmpl"	, JSO_STRING	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_format_t,qmfLanguageTmpl)	, NULL },
  { NULL	, "qmfBoolTmpl"	, JSO_STRING	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_format_t,qmfBoolTmpl)	, NULL },
/* Templates of booleans that tell whether the short is of some sort: */
  { NULL	, "qmfIsrefOfShortTmpl"	, JSO_STRING	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_format_t,qmfIsrefOfShortTmpl)	, NULL },
  { NULL	, "qmfIsuriOfShortTmpl"	, JSO_STRING	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_format_t,qmfIsuriOfShortTmpl)	, NULL },
  { NULL	, "qmfIsblankOfShortTmpl"	, JSO_STRING	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_format_t,qmfIsblankOfShortTmpl)	, NULL },
  { NULL	, "qmfIslitOfShortTmpl"	, JSO_STRING	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_format_t,qmfIslitOfShortTmpl)	, NULL },
  { NULL	, "qmfIsnumericOfShortTmpl"	, JSO_STRING	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_format_t,qmfIsnumericOfShortTmpl)	, NULL },
/* Templates of 0/1 integer expressions that tell whether the short is of some sort: */
  { NULL	, "qmf01uriOfShortTmpl"	, JSO_STRING	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_format_t,qmf01uriOfShortTmpl)	, NULL },
  { NULL	, "qmf01blankOfShortTmpl"	, JSO_STRING	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_format_t,qmf01blankOfShortTmpl)	, NULL },
/* Templates that convert short value into other types (can be applied to both field and not field expression) */
  { NULL	, "qmfLongOfShortTmpl"	, JSO_STRING	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_format_t,qmfLongOfShortTmpl)	, NULL },
  { NULL	, "qmfSqlvalOfShortTmpl"	, JSO_STRING	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_format_t,qmfSqlvalOfShortTmpl)	, NULL },
  { NULL	, "qmfDatatypeOfShortTmpl"	, JSO_STRING	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_format_t,qmfDatatypeOfShortTmpl)	, NULL },
  { NULL	, "qmfLanguageOfShortTmpl"	, JSO_STRING	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_format_t,qmfLanguageOfShortTmpl)	, NULL },
  { NULL	, "qmfBoolOfShortTmpl"	, JSO_STRING	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_format_t,qmfBoolOfShortTmpl)	, NULL },
  { NULL	, "qmfIidOfShortTmpl"	, JSO_STRING	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_format_t,qmfIidOfShortTmpl)	, NULL },
  { NULL	, "qmfUriOfShortTmpl"	, JSO_STRING	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_format_t,qmfUriOfShortTmpl)	, NULL },
  { NULL	, "qmfStrsqlvalOfShortTmpl"	, JSO_STRING	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_format_t,qmfStrsqlvalOfShortTmpl)	, NULL },
/* Templates of expressions that make short values from other representations */
  { NULL	, "qmfShortOfTypedsqlvalTmpl"	, JSO_STRING	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_format_t,qmfShortOfTypedsqlvalTmpl)	, NULL },
  { NULL	, "qmfShortOfSqlvalTmpl"	, JSO_STRING	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_format_t,qmfShortOfSqlvalTmpl)	, NULL },
  { NULL	, "qmfShortOfLongTmpl"	, JSO_STRING	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_format_t,qmfShortOfLongTmpl)	, NULL },
  { NULL	, "qmfShortOfUriTmpl"	, JSO_STRING	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_format_t,qmfShortOfUriTmpl)	, NULL },
  { NULL	, "qmfShortOfNiceSqlvalTmpl"	, JSO_STRING	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_format_t,qmfShortOfNiceSqlvalTmpl)	, NULL },
  { NULL	, "qmfDtpOfNiceSqlval"	, JSO_INTEGER	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_format_t,qmfDtpOfNiceSqlval)	, NULL },
/* Templates of expressions that find existing short values from other representations */
  { NULL	, "qmfExistingShortOfTypedsqlvalTmpl"	, JSO_STRING	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_format_t,qmfExistingShortOfTypedsqlvalTmpl)	, NULL },
  { NULL	, "qmfExistingShortOfSqlvalTmpl"	, JSO_STRING	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_format_t,qmfExistingShortOfSqlvalTmpl)	, NULL },
  { NULL	, "qmfExistingShortOfLongTmpl"	, JSO_STRING	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_format_t,qmfExistingShortOfLongTmpl)	, NULL },
  { NULL	, "qmfExistingShortOfUriTmpl"	, JSO_STRING	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_format_t,qmfExistingShortOfUriTmpl)	, NULL },
  { NULL	, "qmfExistingShortOfNiceSqlvalTmpl"	, JSO_STRING	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_format_t,qmfExistingShortOfNiceSqlvalTmpl)	, NULL },
/* Misc */
  { NULL	, "qmfIsBijection"	, JSO_BOOLEAN	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_format_t,qmfIsBijection)	, NULL },
  { NULL	, "qmfDerefFlags"	, JSO_BOOLEAN	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_format_t,qmfDerefFlags)	, NULL },
  { NULL	, "qmfIsStable"	, JSO_BOOLEAN	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_format_t,qmfIsStable)	, NULL },
  { NULL	, "qmfIsSubformatOfLong"	, JSO_BOOLEAN	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_format_t,qmfIsSubformatOfLong)	, NULL },
  { NULL	, "qmfIsSubformatOfLongWhenEqToSql"	, JSO_BOOLEAN	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_format_t,qmfIsSubformatOfLongWhenEqToSql)	, NULL },
  { NULL	, "qmfIsSubformatOfLongWhenRef"	, JSO_BOOLEAN	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_format_t,qmfIsSubformatOfLongWhenRef)	, NULL },
  { NULL	, "qmfCmpFuncName"	, JSO_STRING	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_format_t,qmfCmpFuncName)	, NULL },
  { NULL	, "qmfTypeminTmpl"	, JSO_STRING	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_format_t,qmfTypeminTmpl)	, NULL },
  { NULL	, "qmfTypemaxTmpl"	, JSO_STRING	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_format_t,qmfTypemaxTmpl)	, NULL },
  { NULL	, "qmfWrapDistinct"	, JSO_BOOLEAN	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_format_t,qmfWrapDistinct)	, NULL },
/* Metadata about values that can be stored in this field */
  { NULL	, "qmfColumnCount"	, JSO_INTEGER	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_format_t,qmfColumnCount)	, NULL },
  { NULL	, "qmfOkForAnySqlvalue"	, JSO_BOOLEAN	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_format_t,qmfOkForAnySqlvalue)	, NULL },
  { NULL	, "qmfUriIdOffset"	, JSO_INTEGER	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_format_t,qmfUriIdOffset)	, NULL },
  { NULL	, "qmfCustomString1"	, JSO_STRING	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_format_t,qmfCustomString1)	, NULL },
  { NULL	, "qmfArgDtps"	, JSO_STRING	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_format_t,qmfArgDtps)	, NULL },
  { NULL	, "qmfSuperFormats"	, JSO_IRI_OF_qm_format_array	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_format_t,qmfSuperFormats)	, NULL },
  { NULL	, "qmfValRange-rvrRestrictions"	, JSO_BITMASK	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_format_t,qmfValRange.rvrRestrictions)	, NULL },
  { NULL	, "qmfValRange-rvrDatatype"	, JSO_ANY_URI	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_format_t,qmfValRange.rvrDatatype)	, NULL },
  { NULL	, "qmfValRange-rvrLanguage"	, JSO_ANY_URI	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_format_t,qmfValRange.rvrLanguage)	, NULL },
  { NULL	, "qmfValRange-rvrFixedValue"	, JSO_ANY	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_format_t,qmfValRange.rvrFixedValue)	, NULL },
  { NULL	, "qmfValRange-rvrSprintffs"	, JSO_STRING_array	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_format_t,qmfValRange.rvrSprintffs)	, NULL },
  { NULL	, "qmfValRange-rvrSprintffCount"	, JSO_INTEGER	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_format_t,qmfValRange.rvrSprintffCount)	, NULL },
  { NULL	, NULL	, NULL	,0xdeadce11	,0xdeadce11	,NULL } };

jso_class_descr_t jso__qm_format = {
  JSO_CAT_STRUCT,  "struct qm_format_s",
  "http://www.openlinksw.com/schemas/virtrdf#QuadMapFormat" ,
  "http://www.openlinksw.com/schemas/virtrdf#" , "QuadMapFormat" ,
  NULL, {
    {
      sizeof (qm_format_t),
      -1, jso_fields__qm_format, NULL },
    { NULL, 0, 0} } };

jso_class_descr_t jso__qm_atable_array = {
  JSO_CAT_ARRAY,  "array of struct qm_atable_s *",
  "http://www.openlinksw.com/schemas/virtrdf#array-of-QuadMapATable" ,
  "http://www.openlinksw.com/schemas/virtrdf#" , "array-of-QuadMapATable" ,
  NULL, {
    { 0, -1, NULL, NULL },
    {  "http://www.openlinksw.com/schemas/virtrdf#QuadMapATable" , 0, (SMALLEST_POSSIBLE_POINTER-2)} } };

jso_field_descr_t jso_fields__qm_atable[] = {
  { NULL	, "qmvaAlias"	, JSO_STRING	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_atable_t,qmvaAlias)	, NULL },
  { NULL	, "qmvaTableName"	, JSO_STRING	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_atable_t,qmvaTableName)	, NULL },
  { NULL	, NULL	, NULL	,0xdeadce11	,0xdeadce11	,NULL } };

jso_class_descr_t jso__qm_atable = {
  JSO_CAT_STRUCT,  "struct qm_atable_s",
  "http://www.openlinksw.com/schemas/virtrdf#QuadMapATable" ,
  "http://www.openlinksw.com/schemas/virtrdf#" , "QuadMapATable" ,
  NULL, {
    {
      sizeof (qm_atable_t),
      -1, jso_fields__qm_atable, NULL },
    { NULL, 0, 0} } };

jso_class_descr_t jso__qm_column_array = {
  JSO_CAT_ARRAY,  "array of struct qm_column_s *",
  "http://www.openlinksw.com/schemas/virtrdf#array-of-QuadMapColumn" ,
  "http://www.openlinksw.com/schemas/virtrdf#" , "array-of-QuadMapColumn" ,
  NULL, {
    { 0, -1, NULL, NULL },
    {  "http://www.openlinksw.com/schemas/virtrdf#QuadMapColumn" , 0, (SMALLEST_POSSIBLE_POINTER-2)} } };

jso_field_descr_t jso_fields__qm_column[] = {
  { NULL	, "qmvcAlias"	, JSO_STRING	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_column_t,qmvcAlias)	, NULL },
  { NULL	, "qmvcColumnName"	, JSO_STRING	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_column_t,qmvcColumnName)	, NULL },
  { NULL	, "qmvcColumnFromIRI"	, JSO_STRING	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_column_t,qmvcColumnFromIRI)	, NULL },
  { NULL	, NULL	, NULL	,0xdeadce11	,0xdeadce11	,NULL } };

jso_class_descr_t jso__qm_column = {
  JSO_CAT_STRUCT,  "struct qm_column_s",
  "http://www.openlinksw.com/schemas/virtrdf#QuadMapColumn" ,
  "http://www.openlinksw.com/schemas/virtrdf#" , "QuadMapColumn" ,
  NULL, {
    {
      sizeof (qm_column_t),
      -1, jso_fields__qm_column, NULL },
    { NULL, 0, 0} } };

jso_class_descr_t jso__qm_ftext_array = {
  JSO_CAT_ARRAY,  "array of struct qm_ftext_s *",
  "http://www.openlinksw.com/schemas/virtrdf#array-of-QuadMapFText" ,
  "http://www.openlinksw.com/schemas/virtrdf#" , "array-of-QuadMapFText" ,
  NULL, {
    { 0, -1, NULL, NULL },
    {  "http://www.openlinksw.com/schemas/virtrdf#QuadMapFText" , 0, (SMALLEST_POSSIBLE_POINTER-2)} } };

jso_field_descr_t jso_fields__qm_ftext[] = {
  { NULL	, "qmvftAlias"	, JSO_STRING	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_ftext_t,qmvftAlias)	, NULL },
  { NULL	, "qmvftAuxAlias"	, JSO_STRING	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_ftext_t,qmvftAuxAlias)	, NULL },
  { NULL	, "qmvftTableName"	, JSO_STRING	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_ftext_t,qmvftTableName)	, NULL },
  { NULL	, "qmvftAuxTableName"	, JSO_STRING	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_ftext_t,qmvftAuxTableName)	, NULL },
  { NULL	, "qmvftColumnName"	, JSO_STRING	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_ftext_t,qmvftColumnName)	, NULL },
  { NULL	, "qmvftConds"	, JSO_STRING_array	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_ftext_t,qmvftConds)	, NULL },
  { NULL	, "qmvftXmlIndex"	, JSO_BOOLEAN	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_ftext_t,qmvftXmlIndex)	, NULL },
  { NULL	, NULL	, NULL	,0xdeadce11	,0xdeadce11	,NULL } };

jso_class_descr_t jso__qm_ftext = {
  JSO_CAT_STRUCT,  "struct qm_ftext_s",
  "http://www.openlinksw.com/schemas/virtrdf#QuadMapFText" ,
  "http://www.openlinksw.com/schemas/virtrdf#" , "QuadMapFText" ,
  NULL, {
    {
      sizeof (qm_ftext_t),
      -1, jso_fields__qm_ftext, NULL },
    { NULL, 0, 0} } };

jso_class_descr_t jso__qm_value_array = {
  JSO_CAT_ARRAY,  "array of struct qm_value_s *",
  "http://www.openlinksw.com/schemas/virtrdf#array-of-QuadMapValue" ,
  "http://www.openlinksw.com/schemas/virtrdf#" , "array-of-QuadMapValue" ,
  NULL, {
    { 0, -1, NULL, NULL },
    {  "http://www.openlinksw.com/schemas/virtrdf#QuadMapValue" , 0, (SMALLEST_POSSIBLE_POINTER-2)} } };

jso_field_descr_t jso_fields__qm_value[] = {
  { NULL	, "qmvTableName"	, JSO_STRING	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_value_t,qmvTableName)	, NULL },
  { NULL	, "qmvATables"	, JSO_IRI_OF_qm_atable_array	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_value_t,qmvATables)	, NULL },
  { NULL	, "qmvColumns"	, JSO_IRI_OF_qm_column_array	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_value_t,qmvColumns)	, NULL },
  { NULL	, "qmvConds"	, JSO_STRING_array	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_value_t,qmvConds)	, NULL },
  { NULL	, "qmvFormat"	, JSO_IRI_OF_qm_format	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_value_t,qmvFormat)	, NULL },
  { NULL	, "qmvFText"	, JSO_IRI_OF_qm_ftext	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_value_t,qmvFText)	, NULL },
  { NULL	, "qmvGeo"	, JSO_IRI_OF_qm_ftext	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_value_t,qmvGeo)	, NULL },
  { NULL	, "qmvColumnsFormKey"	, JSO_BOOLEAN	, JSO_REQUIRED	, JSO_FIELD_OFFSET(qm_value_t,qmvColumnsFormKey)	, NULL },
  { NULL	, "qmvColumnsToIRI"	, JSO_STRING	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_value_t,qmvColumnsToIRI)	, NULL },
  { NULL	, "qmvIriClass"	, JSO_ANY_URI	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_value_t,qmvIriClass)	, NULL },
  { NULL	, "qmvRange-rvrRestrictions"	, JSO_BITMASK	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_value_t,qmvRange.rvrRestrictions)	, NULL },
  { NULL	, "qmvRange-rvrDatatype"	, JSO_ANY_URI	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_value_t,qmvRange.rvrDatatype)	, NULL },
  { NULL	, "qmvRange-rvrLanguage"	, JSO_ANY_URI	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_value_t,qmvRange.rvrLanguage)	, NULL },
  { NULL	, "qmvRange-rvrFixedValue"	, JSO_ANY	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(qm_value_t,qmvRange.rvrFixedValue)	, NULL },
  { NULL	, NULL	, NULL	,0xdeadce11	,0xdeadce11	,NULL } };

jso_class_descr_t jso__qm_value = {
  JSO_CAT_STRUCT,  "struct qm_value_s",
  "http://www.openlinksw.com/schemas/virtrdf#QuadMapValue" ,
  "http://www.openlinksw.com/schemas/virtrdf#" , "QuadMapValue" ,
  NULL, {
    {
      sizeof (qm_value_t),
      -1, jso_fields__qm_value, NULL },
    { NULL, 0, 0} } };

jso_class_descr_t jso__quad_map_array = {
  JSO_CAT_ARRAY,  "array of struct quad_map_s *",
  "http://www.openlinksw.com/schemas/virtrdf#array-of-QuadMap" ,
  "http://www.openlinksw.com/schemas/virtrdf#" , "array-of-QuadMap" ,
  NULL, {
    { 0, -1, NULL, NULL },
    {  "http://www.openlinksw.com/schemas/virtrdf#QuadMap" , 0, (SMALLEST_POSSIBLE_POINTER-2)} } };

jso_field_descr_t jso_fields__quad_map[] = {
  { NULL	, "qmGraphRange-rvrRestrictions"	, JSO_BITMASK	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_map_t,qmGraphRange.rvrRestrictions)	, NULL },
  { NULL	, "qmGraphRange-rvrDatatype"	, JSO_ANY_URI	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_map_t,qmGraphRange.rvrDatatype)	, NULL },
  { NULL	, "qmGraphRange-rvrLanguage"	, JSO_ANY_URI	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_map_t,qmGraphRange.rvrLanguage)	, NULL },
  { NULL	, "qmGraphRange-rvrFixedValue"	, JSO_ANY	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_map_t,qmGraphRange.rvrFixedValue)	, NULL },
  { NULL	, "qmSubjectRange-rvrRestrictions"	, JSO_BITMASK	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_map_t,qmSubjectRange.rvrRestrictions)	, NULL },
  { NULL	, "qmSubjectRange-rvrDatatype"	, JSO_ANY_URI	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_map_t,qmSubjectRange.rvrDatatype)	, NULL },
  { NULL	, "qmSubjectRange-rvrLanguage"	, JSO_ANY_URI	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_map_t,qmSubjectRange.rvrLanguage)	, NULL },
  { NULL	, "qmSubjectRange-rvrFixedValue"	, JSO_ANY	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_map_t,qmSubjectRange.rvrFixedValue)	, NULL },
  { NULL	, "qmPredicateRange-rvrRestrictions"	, JSO_BITMASK	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_map_t,qmPredicateRange.rvrRestrictions)	, NULL },
  { NULL	, "qmPredicateRange-rvrDatatype"	, JSO_ANY_URI	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_map_t,qmPredicateRange.rvrDatatype)	, NULL },
  { NULL	, "qmPredicateRange-rvrLanguage"	, JSO_ANY_URI	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_map_t,qmPredicateRange.rvrLanguage)	, NULL },
  { NULL	, "qmPredicateRange-rvrFixedValue"	, JSO_ANY	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_map_t,qmPredicateRange.rvrFixedValue)	, NULL },
  { NULL	, "qmObjectRange-rvrRestrictions"	, JSO_BITMASK	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_map_t,qmObjectRange.rvrRestrictions)	, NULL },
  { NULL	, "qmObjectRange-rvrDatatype"	, JSO_ANY_URI	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_map_t,qmObjectRange.rvrDatatype)	, NULL },
  { NULL	, "qmObjectRange-rvrLanguage"	, JSO_ANY_URI	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_map_t,qmObjectRange.rvrLanguage)	, NULL },
  { NULL	, "qmObjectRange-rvrFixedValue"	, JSO_ANY	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_map_t,qmObjectRange.rvrFixedValue)	, NULL },
  { NULL	, "qmGraphMap"	, JSO_IRI_OF_qm_value	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_map_t,qmGraphMap)	, NULL },
  { NULL	, "qmSubjectMap"	, JSO_IRI_OF_qm_value	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_map_t,qmSubjectMap)	, NULL },
  { NULL	, "qmPredicateMap"	, JSO_IRI_OF_qm_value	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_map_t,qmPredicateMap)	, NULL },
  { NULL	, "qmObjectMap"	, JSO_IRI_OF_qm_value	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_map_t,qmObjectMap)	, NULL },
  { NULL	, "qmTableName"	, JSO_STRING	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_map_t,qmTableName)	, NULL },
  { NULL	, "qmATables"	, JSO_IRI_OF_qm_atable_array	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_map_t,qmATables)	, NULL },
  { NULL	, "qmConds"	, JSO_STRING_array	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_map_t,qmConds)	, NULL },
  { NULL	, "qmTableRowFilter"	, JSO_STRING	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_map_t,qmTableRowFilter)	, NULL },
  { NULL	, "qmUserSubMaps"	, JSO_IRI_OF_quad_map_array	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_map_t,qmUserSubMaps)	, NULL },
  { NULL	, "qmMatchingFlags"	, JSO_BITMASK	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_map_t,qmMatchingFlags)	, NULL },
  { NULL	, "qmPriorityOrder"	, JSO_INTEGER	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_map_t,qmPriorityOrder)	, NULL },
  { NULL	, "qmAliasesKeyrefdByQuad"	, JSO_STRING_array	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_map_t,qmAliasesKeyrefdByQuad)	, NULL },
  { NULL	, "qmAllATableUses"	, JSO_INTEGER_array	, JSO_PRIVATE	, JSO_FIELD_OFFSET(quad_map_t,qmAllATableUses)	, NULL },
  { NULL	, "qmAllATableUseCount"	, JSO_INTEGER	, JSO_PRIVATE	, JSO_FIELD_OFFSET(quad_map_t,qmAllATableUseCount)	, NULL },
  { NULL	, "qmAllConds"	, JSO_STRING_array	, JSO_PRIVATE	, JSO_FIELD_OFFSET(quad_map_t,qmAllConds)	, NULL },
  { NULL	, "qmAllCondCount"	, JSO_INTEGER	, JSO_PRIVATE	, JSO_FIELD_OFFSET(quad_map_t,qmAllCondCount)	, NULL },
  { NULL	, NULL	, NULL	,0xdeadce11	,0xdeadce11	,NULL } };

jso_class_descr_t jso__quad_map = {
  JSO_CAT_STRUCT,  "struct quad_map_s",
  "http://www.openlinksw.com/schemas/virtrdf#QuadMap" ,
  "http://www.openlinksw.com/schemas/virtrdf#" , "QuadMap" ,
  NULL, {
    {
      sizeof (quad_map_t),
      -1, jso_fields__quad_map, NULL },
    { NULL, 0, 0} } };

jso_class_descr_t jso__sparql_macro_library_array = {
  JSO_CAT_ARRAY,  "array of struct sparql_macro_library_s *",
  "http://www.openlinksw.com/schemas/virtrdf#array-of-SparqlMacroLibrary" ,
  "http://www.openlinksw.com/schemas/virtrdf#" , "array-of-SparqlMacroLibrary" ,
  NULL, {
    { 0, -1, NULL, NULL },
    {  "http://www.openlinksw.com/schemas/virtrdf#SparqlMacroLibrary" , 0, (SMALLEST_POSSIBLE_POINTER-2)} } };

jso_field_descr_t jso_fields__sparql_macro_library[] = {
  { NULL	, "smlSourceText"	, JSO_STRING	, JSO_REQUIRED	, JSO_FIELD_OFFSET(sparql_macro_library_t,smlSourceText)	, NULL },
  { NULL	, "smlCompilationState"	, JSO_INTEGER	, JSO_PRIVATE	, JSO_FIELD_OFFSET(sparql_macro_library_t,smlCompilationState)	, NULL },
  { NULL	, "smlIncludes"	, JSO_ANY	, JSO_PRIVATE	, JSO_FIELD_OFFSET(sparql_macro_library_t,smlIncludes)	, NULL },
  { NULL	, "smlList"	, JSO_ANY	, JSO_PRIVATE	, JSO_FIELD_OFFSET(sparql_macro_library_t,smlList)	, NULL },
  { NULL	, NULL	, NULL	,0xdeadce11	,0xdeadce11	,NULL } };

jso_class_descr_t jso__sparql_macro_library = {
  JSO_CAT_STRUCT,  "struct sparql_macro_library_s",
  "http://www.openlinksw.com/schemas/virtrdf#SparqlMacroLibrary" ,
  "http://www.openlinksw.com/schemas/virtrdf#" , "SparqlMacroLibrary" ,
  NULL, {
    {
      sizeof (sparql_macro_library_t),
      -1, jso_fields__sparql_macro_library, NULL },
    { NULL, 0, 0} } };

jso_class_descr_t jso__quad_storage_array = {
  JSO_CAT_ARRAY,  "array of struct quad_storage_s *",
  "http://www.openlinksw.com/schemas/virtrdf#array-of-QuadStorage" ,
  "http://www.openlinksw.com/schemas/virtrdf#" , "array-of-QuadStorage" ,
  NULL, {
    { 0, -1, NULL, NULL },
    {  "http://www.openlinksw.com/schemas/virtrdf#QuadStorage" , 0, (SMALLEST_POSSIBLE_POINTER-2)} } };

jso_field_descr_t jso_fields__quad_storage[] = {
  { NULL	, "qsMjvMaps"	, JSO_IRI_OF_quad_map_array	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_storage_t,qsMjvMaps)	, NULL },
  { NULL	, "qsUserMaps"	, JSO_IRI_OF_quad_map_array	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_storage_t,qsUserMaps)	, NULL },
  { NULL	, "qsDefaultMap"	, JSO_IRI_OF_quad_map	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_storage_t,qsDefaultMap)	, NULL },
  { NULL	, "qsMacroLibrary"	, JSO_IRI_OF_sparql_macro_library	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_storage_t,qsMacroLibrary)	, NULL },
  { NULL	, "qsMatchingFlags"	, JSO_BITMASK	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_storage_t,qsMatchingFlags)	, NULL },
  { NULL	, "qsAlterInProgress"	, JSO_ANY	, JSO_OPTIONAL	, JSO_FIELD_OFFSET(quad_storage_t,qsAlterInProgress)	, NULL },
  { NULL	, NULL	, NULL	,0xdeadce11	,0xdeadce11	,NULL } };

jso_class_descr_t jso__quad_storage = {
  JSO_CAT_STRUCT,  "struct quad_storage_s",
  "http://www.openlinksw.com/schemas/virtrdf#QuadStorage" ,
  "http://www.openlinksw.com/schemas/virtrdf#" , "QuadStorage" ,
  NULL, {
    {
      sizeof (quad_storage_t),
      -1, jso_fields__quad_storage, NULL },
    { NULL, 0, 0} } };

void
rdf_mapping_jso_init (void)
{
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SPART_VARR__ALL", SPART_VARR__ALL);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SPART_VARR_SPRINTFF", SPART_VARR_SPRINTFF);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SPART_VARR_IS_REF", SPART_VARR_IS_REF);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SPART_VARR_IS_IRI", SPART_VARR_IS_IRI);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SPART_VARR_IS_BLANK", SPART_VARR_IS_BLANK);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SPART_VARR_IRI_CALC", SPART_VARR_IRI_CALC);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SPART_VARR_IS_LIT", SPART_VARR_IS_LIT);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SPART_VARR_TYPED", SPART_VARR_TYPED);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SPART_VARR_FIXED", SPART_VARR_FIXED);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SPART_VARR_NOT_NULL", SPART_VARR_NOT_NULL);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SPART_VARR_LONG_EQ_SQL", SPART_VARR_LONG_EQ_SQL);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SPART_VARR_ALWAYS_NULL", SPART_VARR_ALWAYS_NULL);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SPART_VARR_GLOBAL", SPART_VARR_GLOBAL);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SPART_VARR_EXTERNAL", SPART_VARR_EXTERNAL);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SPART_VARR_EXPORTED", SPART_VARR_EXPORTED);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SPART_VARR_CONFLICT", SPART_VARR_CONFLICT);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SPART_VARR_EQ_VAR", SPART_VARR_EQ_VAR);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SPART_QM_EMPTY", SPART_QM_EMPTY);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SPART_QM_EXCLUSIVE", SPART_QM_EXCLUSIVE);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SPART_QM_OK_FOR_ANY_QUAD", SPART_QM_OK_FOR_ANY_QUAD);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SPART_QM_SOFT_EXCLUSIVE", SPART_QM_SOFT_EXCLUSIVE);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SPART_QS_NO_IMPLICIT_USER_QM", SPART_QS_NO_IMPLICIT_USER_QM);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SPART_QS_BLOCK_DEFAULT_QM", SPART_QS_BLOCK_DEFAULT_QM);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SSG_SD_QUAD_MAP", SSG_SD_QUAD_MAP);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SSG_SD_OPTION", SSG_SD_OPTION);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SSG_SD_BREAKUP", SSG_SD_BREAKUP);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SSG_SD_PKSELFJOIN", SSG_SD_PKSELFJOIN);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SSG_SD_RVR", SSG_SD_RVR);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SSG_SD_IN", SSG_SD_IN);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SSG_SD_LIKE", SSG_SD_LIKE);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SSG_SD_GLOBALS", SSG_SD_GLOBALS);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SSG_SD_BI", SSG_SD_BI);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SSG_SD_VIRTSPECIFIC", SSG_SD_VIRTSPECIFIC);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SSG_SD_VOS_509", SSG_SD_VOS_509);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SSG_SD_SERVICE", SSG_SD_SERVICE);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SSG_SD_VOS_5_LATEST", SSG_SD_VOS_5_LATEST);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SSG_SD_TRANSIT", SSG_SD_TRANSIT);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SSG_SD_VOS_6", SSG_SD_VOS_6);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SSG_SD_SPARQL11_DRAFT", SSG_SD_SPARQL11_DRAFT);
  jso_define_const( "http://www.openlinksw.com/schemas/virtrdf#SSG_SD_SPARQL11_MORE", SSG_SD_SPARQL11_MORE);
  jso_define_class(&jso__rdf_val_range_array);
  jso_define_class(&jso__rdf_val_range);
  jso_define_class(&jso__qm_format_array);
  jso_define_class(&jso__qm_format);
  jso_define_class(&jso__qm_atable_array);
  jso_define_class(&jso__qm_atable);
  jso_define_class(&jso__qm_column_array);
  jso_define_class(&jso__qm_column);
  jso_define_class(&jso__qm_ftext_array);
  jso_define_class(&jso__qm_ftext);
  jso_define_class(&jso__qm_value_array);
  jso_define_class(&jso__qm_value);
  jso_define_class(&jso__quad_map_array);
  jso_define_class(&jso__quad_map);
  jso_define_class(&jso__sparql_macro_library_array);
  jso_define_class(&jso__sparql_macro_library);
  jso_define_class(&jso__quad_storage_array);
  jso_define_class(&jso__quad_storage);
}
