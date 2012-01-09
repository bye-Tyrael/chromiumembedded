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

#include "libcef_dll/cpptoc/proxy_handler_cpptoc.h"


// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK proxy_handler_get_proxy_for_url(
    struct _cef_proxy_handler_t* self, const cef_string_t* url,
    struct _cef_proxy_info_t* proxy_info) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: url; type: string_byref_const
  DCHECK(url);
  if (!url)
    return;
  // Verify param: proxy_info; type: struct_byref
  DCHECK(proxy_info);
  if (!proxy_info)
    return;

  // Translate param: proxy_info; type: struct_byref
  CefProxyInfo proxy_infoObj;
  if (proxy_info)
    proxy_infoObj.AttachTo(*proxy_info);

  // Execute
  CefProxyHandlerCppToC::Get(self)->GetProxyForUrl(
      CefString(url),
      proxy_infoObj);

  // Restore param: proxy_info; type: struct_byref
  if (proxy_info)
    proxy_infoObj.DetachTo(*proxy_info);
}


// CONSTRUCTOR - Do not edit by hand.

CefProxyHandlerCppToC::CefProxyHandlerCppToC(CefProxyHandler* cls)
    : CefCppToC<CefProxyHandlerCppToC, CefProxyHandler, cef_proxy_handler_t>(
        cls) {
  struct_.struct_.get_proxy_for_url = proxy_handler_get_proxy_for_url;
}

#ifndef NDEBUG
template<> long CefCppToC<CefProxyHandlerCppToC, CefProxyHandler,
    cef_proxy_handler_t>::DebugObjCt = 0;
#endif

