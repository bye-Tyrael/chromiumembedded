// Copyright (c) 2011 The Chromium Embedded Framework Authors. All rights
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

#ifndef _REQUESTHANDLER_CTOCPP_H
#define _REQUESTHANDLER_CTOCPP_H

#ifndef BUILDING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed DLL-side only")
#else // BUILDING_CEF_SHARED

#include "include/cef.h"
#include "include/cef_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefRequestHandlerCToCpp
    : public CefCToCpp<CefRequestHandlerCToCpp, CefRequestHandler,
        cef_request_handler_t>
{
public:
  CefRequestHandlerCToCpp(cef_request_handler_t* str)
      : CefCToCpp<CefRequestHandlerCToCpp, CefRequestHandler,
          cef_request_handler_t>(str) {}
  virtual ~CefRequestHandlerCToCpp() {}

  // CefRequestHandler methods
  virtual bool OnBeforeBrowse(CefRefPtr<CefBrowser> browser,
      CefRefPtr<CefFrame> frame, CefRefPtr<CefRequest> request,
      NavType navType, bool isRedirect) OVERRIDE;
  virtual bool OnBeforeResourceLoad(CefRefPtr<CefBrowser> browser,
      CefRefPtr<CefRequest> request, CefString& redirectUrl,
      CefRefPtr<CefStreamReader>& resourceStream,
      CefRefPtr<CefResponse> response, int loadFlags) OVERRIDE;
  virtual void OnResourceRedirect(CefRefPtr<CefBrowser> browser,
      const CefString& old_url, CefString& new_url) OVERRIDE;
  virtual void OnResourceResponse(CefRefPtr<CefBrowser> browser,
      const CefString& url, CefRefPtr<CefResponse> response,
      CefRefPtr<CefContentFilter>& filter) OVERRIDE;
  virtual bool OnProtocolExecution(CefRefPtr<CefBrowser> browser,
      const CefString& url, bool& allowOSExecution) OVERRIDE;
  virtual bool GetDownloadHandler(CefRefPtr<CefBrowser> browser,
      const CefString& mimeType, const CefString& fileName,
      int64 contentLength, CefRefPtr<CefDownloadHandler>& handler) OVERRIDE;
  virtual bool GetAuthCredentials(CefRefPtr<CefBrowser> browser, bool isProxy,
      const CefString& host, int port, const CefString& realm,
      const CefString& scheme, CefString& username,
      CefString& password) OVERRIDE;
};

#endif // BUILDING_CEF_SHARED
#endif // _REQUESTHANDLER_CTOCPP_H

