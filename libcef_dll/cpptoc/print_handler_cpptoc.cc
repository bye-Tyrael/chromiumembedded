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

#include "libcef_dll/cpptoc/print_handler_cpptoc.h"
#include "libcef_dll/ctocpp/browser_ctocpp.h"
#include "libcef_dll/ctocpp/frame_ctocpp.h"


// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK print_handler_get_print_options(
    struct _cef_print_handler_t* self, cef_browser_t* browser,
    struct _cef_print_options_t* printOptions)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return 0;
  // Verify param: printOptions; type: struct_byref
  DCHECK(printOptions);
  if (!printOptions)
    return 0;

  // Translate param: printOptions; type: struct_byref
  CefPrintOptions printOptionsObj;
  if (printOptions)
    printOptionsObj.AttachTo(*printOptions);

  // Execute
  bool _retval = CefPrintHandlerCppToC::Get(self)->GetPrintOptions(
      CefBrowserCToCpp::Wrap(browser),
      printOptionsObj);

  // Restore param: printOptions; type: struct_byref
  if (printOptions)
    printOptionsObj.DetachTo(*printOptions);

  // Return type: bool
  return _retval;
}


int CEF_CALLBACK print_handler_get_print_header_footer(
    struct _cef_print_handler_t* self, cef_browser_t* browser,
    cef_frame_t* frame, const cef_print_info_t* printInfo,
    const cef_string_t* url, const cef_string_t* title, int currentPage,
    int maxPages, cef_string_t* topLeft, cef_string_t* topCenter,
    cef_string_t* topRight, cef_string_t* bottomLeft,
    cef_string_t* bottomCenter, cef_string_t* bottomRight)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return 0;
  // Verify param: frame; type: refptr_diff
  DCHECK(frame);
  if (!frame)
    return 0;
  // Verify param: printInfo; type: struct_byref_const
  DCHECK(printInfo);
  if (!printInfo)
    return 0;
  // Verify param: url; type: string_byref_const
  DCHECK(url);
  if (!url)
    return 0;
  // Verify param: title; type: string_byref_const
  DCHECK(title);
  if (!title)
    return 0;
  // Verify param: topLeft; type: string_byref
  DCHECK(topLeft);
  if (!topLeft)
    return 0;
  // Verify param: topCenter; type: string_byref
  DCHECK(topCenter);
  if (!topCenter)
    return 0;
  // Verify param: topRight; type: string_byref
  DCHECK(topRight);
  if (!topRight)
    return 0;
  // Verify param: bottomLeft; type: string_byref
  DCHECK(bottomLeft);
  if (!bottomLeft)
    return 0;
  // Verify param: bottomCenter; type: string_byref
  DCHECK(bottomCenter);
  if (!bottomCenter)
    return 0;
  // Verify param: bottomRight; type: string_byref
  DCHECK(bottomRight);
  if (!bottomRight)
    return 0;

  // Translate param: printInfo; type: struct_byref_const
  CefPrintInfo printInfoObj;
  if (printInfo)
    printInfoObj.Set(*printInfo, false);
  // Translate param: topLeft; type: string_byref
  CefString topLeftStr(topLeft);
  // Translate param: topCenter; type: string_byref
  CefString topCenterStr(topCenter);
  // Translate param: topRight; type: string_byref
  CefString topRightStr(topRight);
  // Translate param: bottomLeft; type: string_byref
  CefString bottomLeftStr(bottomLeft);
  // Translate param: bottomCenter; type: string_byref
  CefString bottomCenterStr(bottomCenter);
  // Translate param: bottomRight; type: string_byref
  CefString bottomRightStr(bottomRight);

  // Execute
  bool _retval = CefPrintHandlerCppToC::Get(self)->GetPrintHeaderFooter(
      CefBrowserCToCpp::Wrap(browser),
      CefFrameCToCpp::Wrap(frame),
      printInfoObj,
      CefString(url),
      CefString(title),
      currentPage,
      maxPages,
      topLeftStr,
      topCenterStr,
      topRightStr,
      bottomLeftStr,
      bottomCenterStr,
      bottomRightStr);

  // Return type: bool
  return _retval;
}



// CONSTRUCTOR - Do not edit by hand.

CefPrintHandlerCppToC::CefPrintHandlerCppToC(CefPrintHandler* cls)
    : CefCppToC<CefPrintHandlerCppToC, CefPrintHandler, cef_print_handler_t>(
        cls)
{
  struct_.struct_.get_print_options = print_handler_get_print_options;
  struct_.struct_.get_print_header_footer =
      print_handler_get_print_header_footer;
}

#ifndef NDEBUG
template<> long CefCppToC<CefPrintHandlerCppToC, CefPrintHandler,
    cef_print_handler_t>::DebugObjCt = 0;
#endif

