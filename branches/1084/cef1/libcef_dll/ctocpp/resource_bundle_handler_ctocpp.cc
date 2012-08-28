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

#include "libcef_dll/ctocpp/resource_bundle_handler_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

bool CefResourceBundleHandlerCToCpp::GetLocalizedString(int message_id,
    CefString& string) {
  if (CEF_MEMBER_MISSING(struct_, get_localized_string))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->get_localized_string(struct_,
      message_id,
      string.GetWritableStruct());

  // Return type: bool
  return _retval?true:false;
}

bool CefResourceBundleHandlerCToCpp::GetDataResource(int resource_id,
    void*& data, size_t& data_size) {
  if (CEF_MEMBER_MISSING(struct_, get_data_resource))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->get_data_resource(struct_,
      resource_id,
      &data,
      &data_size);

  // Return type: bool
  return _retval?true:false;
}


#ifndef NDEBUG
template<> long CefCToCpp<CefResourceBundleHandlerCToCpp,
    CefResourceBundleHandler, cef_resource_bundle_handler_t>::DebugObjCt = 0;
#endif
