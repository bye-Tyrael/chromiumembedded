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

#include "libcef_dll/cpptoc/focus_handler_cpptoc.h"
#include "libcef_dll/ctocpp/browser_ctocpp.h"
#include "libcef_dll/ctocpp/domnode_ctocpp.h"
#include "libcef_dll/ctocpp/frame_ctocpp.h"


// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK focus_handler_on_take_focus(struct _cef_focus_handler_t* self,
    cef_browser_t* browser, int next) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return;

  // Execute
  CefFocusHandlerCppToC::Get(self)->OnTakeFocus(
      CefBrowserCToCpp::Wrap(browser),
      next?true:false);
}

int CEF_CALLBACK focus_handler_on_set_focus(struct _cef_focus_handler_t* self,
    cef_browser_t* browser, enum cef_handler_focus_source_t source) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return 0;

  // Execute
  bool _retval = CefFocusHandlerCppToC::Get(self)->OnSetFocus(
      CefBrowserCToCpp::Wrap(browser),
      source);

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK focus_handler_on_focused_node_changed(
    struct _cef_focus_handler_t* self, cef_browser_t* browser,
    struct _cef_frame_t* frame, cef_domnode_t* node) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return;
  // Unverified params: frame, node

  // Execute
  CefFocusHandlerCppToC::Get(self)->OnFocusedNodeChanged(
      CefBrowserCToCpp::Wrap(browser),
      CefFrameCToCpp::Wrap(frame),
      CefDOMNodeCToCpp::Wrap(node));
}


// CONSTRUCTOR - Do not edit by hand.

CefFocusHandlerCppToC::CefFocusHandlerCppToC(CefFocusHandler* cls)
    : CefCppToC<CefFocusHandlerCppToC, CefFocusHandler, cef_focus_handler_t>(
        cls) {
  struct_.struct_.on_take_focus = focus_handler_on_take_focus;
  struct_.struct_.on_set_focus = focus_handler_on_set_focus;
  struct_.struct_.on_focused_node_changed =
      focus_handler_on_focused_node_changed;
}

#ifndef NDEBUG
template<> long CefCppToC<CefFocusHandlerCppToC, CefFocusHandler,
    cef_focus_handler_t>::DebugObjCt = 0;
#endif

