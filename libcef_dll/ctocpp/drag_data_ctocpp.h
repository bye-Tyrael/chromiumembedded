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

#ifndef CEF_LIBCEF_DLL_CTOCPP_DRAG_DATA_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_DRAG_DATA_CTOCPP_H_
#pragma once

#ifndef USING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed wrapper-side only")
#else  // USING_CEF_SHARED

#include <vector>
#include "include/cef_drag_data.h"
#include "include/capi/cef_drag_data_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefDragDataCToCpp
    : public CefCToCpp<CefDragDataCToCpp, CefDragData, cef_drag_data_t> {
 public:
  explicit CefDragDataCToCpp(cef_drag_data_t* str)
      : CefCToCpp<CefDragDataCToCpp, CefDragData, cef_drag_data_t>(str) {}
  virtual ~CefDragDataCToCpp() {}

  // CefDragData methods
  virtual bool IsLink() OVERRIDE;
  virtual bool IsFragment() OVERRIDE;
  virtual bool IsFile() OVERRIDE;
  virtual CefString GetLinkURL() OVERRIDE;
  virtual CefString GetLinkTitle() OVERRIDE;
  virtual CefString GetLinkMetadata() OVERRIDE;
  virtual CefString GetFragmentText() OVERRIDE;
  virtual CefString GetFragmentHtml() OVERRIDE;
  virtual CefString GetFragmentBaseURL() OVERRIDE;
  virtual CefString GetFileExtension() OVERRIDE;
  virtual CefString GetFileName() OVERRIDE;
  virtual bool GetFileNames(std::vector<CefString>& names) OVERRIDE;
};

#endif  // USING_CEF_SHARED
#endif  // CEF_LIBCEF_DLL_CTOCPP_DRAG_DATA_CTOCPP_H_

