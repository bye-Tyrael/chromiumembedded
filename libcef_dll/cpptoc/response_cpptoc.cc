// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/cpptoc/response_cpptoc.h"
#include "libcef_dll/transfer_util.h"


// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK response_get_status(struct _cef_response_t* self)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int _retval = CefResponseCppToC::Get(self)->GetStatus();

  // Return type: simple
  return _retval;
}


void CEF_CALLBACK response_set_status(struct _cef_response_t* self, int status)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefResponseCppToC::Get(self)->SetStatus(
      status);
}


cef_string_userfree_t CEF_CALLBACK response_get_status_text(
    struct _cef_response_t* self)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefResponseCppToC::Get(self)->GetStatusText();

  // Return type: string
  return _retval.DetachToUserFree();
}


void CEF_CALLBACK response_set_status_text(struct _cef_response_t* self,
    const cef_string_t* statusText)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: statusText; type: string_byref_const
  DCHECK(statusText);
  if (!statusText)
    return;

  // Execute
  CefResponseCppToC::Get(self)->SetStatusText(
      CefString(statusText));
}


cef_string_userfree_t CEF_CALLBACK response_get_mime_type(
    struct _cef_response_t* self)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefResponseCppToC::Get(self)->GetMimeType();

  // Return type: string
  return _retval.DetachToUserFree();
}


void CEF_CALLBACK response_set_mime_type(struct _cef_response_t* self,
    const cef_string_t* mimeType)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: mimeType; type: string_byref_const
  DCHECK(mimeType);
  if (!mimeType)
    return;

  // Execute
  CefResponseCppToC::Get(self)->SetMimeType(
      CefString(mimeType));
}


cef_string_userfree_t CEF_CALLBACK response_get_header(
    struct _cef_response_t* self, const cef_string_t* name)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;
  // Verify param: name; type: string_byref_const
  DCHECK(name);
  if (!name)
    return NULL;

  // Execute
  CefString _retval = CefResponseCppToC::Get(self)->GetHeader(
      CefString(name));

  // Return type: string
  return _retval.DetachToUserFree();
}


void CEF_CALLBACK response_get_header_map(struct _cef_response_t* self,
    cef_string_multimap_t headerMap)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: headerMap; type: string_map_multi_byref
  DCHECK(headerMap);
  if (!headerMap)
    return;

  // Translate param: headerMap; type: string_map_multi_byref
  std::multimap<CefString,CefString> headerMapMultimap;
  transfer_string_multimap_contents(headerMap, headerMapMultimap);

  // Execute
  CefResponseCppToC::Get(self)->GetHeaderMap(
      headerMapMultimap);

  // Restore param: headerMap; type: string_map_multi_byref
  cef_string_multimap_clear(headerMap);
  transfer_string_multimap_contents(headerMapMultimap, headerMap);
}


void CEF_CALLBACK response_set_header_map(struct _cef_response_t* self,
    cef_string_multimap_t headerMap)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: headerMap; type: string_map_multi_byref_const
  DCHECK(headerMap);
  if (!headerMap)
    return;

  // Translate param: headerMap; type: string_map_multi_byref_const
  std::multimap<CefString,CefString> headerMapMultimap;
  transfer_string_multimap_contents(headerMap, headerMapMultimap);

  // Execute
  CefResponseCppToC::Get(self)->SetHeaderMap(
      headerMapMultimap);
}



// CONSTRUCTOR - Do not edit by hand.

CefResponseCppToC::CefResponseCppToC(CefResponse* cls)
    : CefCppToC<CefResponseCppToC, CefResponse, cef_response_t>(cls)
{
  struct_.struct_.get_status = response_get_status;
  struct_.struct_.set_status = response_set_status;
  struct_.struct_.get_status_text = response_get_status_text;
  struct_.struct_.set_status_text = response_set_status_text;
  struct_.struct_.get_mime_type = response_get_mime_type;
  struct_.struct_.set_mime_type = response_set_mime_type;
  struct_.struct_.get_header = response_get_header;
  struct_.struct_.get_header_map = response_get_header_map;
  struct_.struct_.set_header_map = response_set_header_map;
}

#ifndef NDEBUG
template<> long CefCppToC<CefResponseCppToC, CefResponse,
    cef_response_t>::DebugObjCt = 0;
#endif

