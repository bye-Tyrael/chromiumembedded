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

#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/frame_cpptoc.h"
#include "libcef_dll/cpptoc/v8context_cpptoc.h"
#include "libcef_dll/ctocpp/v8context_handler_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

void CefV8ContextHandlerCToCpp::OnContextCreated(CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefFrame> frame, CefRefPtr<CefV8Context> context)
{
  if (CEF_MEMBER_MISSING(struct_, on_context_created))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;
  // Verify param: frame; type: refptr_diff
  DCHECK(frame.get());
  if (!frame.get())
    return;
  // Verify param: context; type: refptr_diff
  DCHECK(context.get());
  if (!context.get())
    return;

  // Execute
  struct_->on_context_created(struct_,
      CefBrowserCppToC::Wrap(browser),
      CefFrameCppToC::Wrap(frame),
      CefV8ContextCppToC::Wrap(context));
}


void CefV8ContextHandlerCToCpp::OnContextReleased(CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefFrame> frame, CefRefPtr<CefV8Context> context)
{
  if (CEF_MEMBER_MISSING(struct_, on_context_released))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;
  // Verify param: frame; type: refptr_diff
  DCHECK(frame.get());
  if (!frame.get())
    return;
  // Verify param: context; type: refptr_diff
  DCHECK(context.get());
  if (!context.get())
    return;

  // Execute
  struct_->on_context_released(struct_,
      CefBrowserCppToC::Wrap(browser),
      CefFrameCppToC::Wrap(frame),
      CefV8ContextCppToC::Wrap(context));
}



#ifndef NDEBUG
template<> long CefCToCpp<CefV8ContextHandlerCToCpp, CefV8ContextHandler,
    cef_v8context_handler_t>::DebugObjCt = 0;
#endif

