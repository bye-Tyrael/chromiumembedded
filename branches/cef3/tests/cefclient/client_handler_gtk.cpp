// Copyright (c) 2011 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.

#include <gtk/gtk.h>
#include <string>
#include "cefclient/client_handler.h"
#include "include/cef_browser.h"
#include "include/cef_frame.h"
#include "include/cef_stream.h"
#include "include/wrapper/cef_stream_resource_handler.h"
#include "cefclient/resource_util.h"
#include "cefclient/string_util.h"

// ClientHandler::ClientLifeSpanHandler implementation
bool ClientHandler::OnBeforePopup(CefRefPtr<CefBrowser> parentBrowser,
                                  const CefPopupFeatures& popupFeatures,
                                  CefWindowInfo& windowInfo,
                                  const CefString& url,
                                  CefRefPtr<CefClient>& client,
                                  CefBrowserSettings& settings) {
  REQUIRE_UI_THREAD();

  return false;
}

CefRefPtr<CefResourceHandler> ClientHandler::GetResourceHandler(
      CefRefPtr<CefBrowser> browser,
      CefRefPtr<CefFrame> frame,
      CefRefPtr<CefRequest> request) {
  std::string url = request->GetURL();
  if (url == "http://tests/request") {
    // Show the request contents
    std::string dump;
    DumpRequestContents(request, dump);
    CefRefPtr<CefStreamReader> stream =
        CefStreamReader::CreateForData(
            static_cast<void*>(const_cast<char*>(dump.c_str())),
            dump.size());
    ASSERT(stream.get());
    return new CefStreamResourceHandler("text/plain", stream);
  } else if (url == "http://tests/localstorage") {
    // Show the localstorage contents
    CefRefPtr<CefStreamReader> stream =
        GetBinaryResourceReader("localstorage.html");
    ASSERT(stream.get());
    return new CefStreamResourceHandler("text/html", stream);
  } else if (url == "http://tests/xmlhttprequest") {
    // Show the xmlhttprequest contents
    CefRefPtr<CefStreamReader> stream =
       GetBinaryResourceReader("xmlhttprequest.html");
    ASSERT(stream.get());
    return new CefStreamResourceHandler("text/html", stream);
  }

  return NULL;
}

void ClientHandler::OnAddressChange(CefRefPtr<CefBrowser> browser,
                                    CefRefPtr<CefFrame> frame,
                                    const CefString& url) {
  REQUIRE_UI_THREAD();

  if (m_BrowserId == browser->GetIdentifier() && frame->IsMain()) {
      // Set the edit window text
    std::string urlStr(url);
    gtk_entry_set_text(GTK_ENTRY(m_EditHwnd), urlStr.c_str());
  }
}

void ClientHandler::OnTitleChange(CefRefPtr<CefBrowser> browser,
                                  const CefString& title) {
  REQUIRE_UI_THREAD();

  GtkWidget* window =
      gtk_widget_get_ancestor(GTK_WIDGET(browser->GetWindowHandle()),
                              GTK_TYPE_WINDOW);
  std::string titleStr(title);
  gtk_window_set_title(GTK_WINDOW(window), titleStr.c_str());
}

void ClientHandler::SendNotification(NotificationType type) {
  // TODO(port): Implement this method.
}

void ClientHandler::SetLoading(bool isLoading) {
  if (isLoading)
    gtk_widget_set_sensitive(GTK_WIDGET(m_StopHwnd), true);
  else
    gtk_widget_set_sensitive(GTK_WIDGET(m_StopHwnd), false);
}

void ClientHandler::SetNavState(bool canGoBack, bool canGoForward) {
  if (canGoBack)
    gtk_widget_set_sensitive(GTK_WIDGET(m_BackHwnd), true);
  else
    gtk_widget_set_sensitive(GTK_WIDGET(m_BackHwnd), false);

  if (canGoForward)
    gtk_widget_set_sensitive(GTK_WIDGET(m_ForwardHwnd), true);
  else
    gtk_widget_set_sensitive(GTK_WIDGET(m_ForwardHwnd), false);
}

void ClientHandler::CloseMainWindow() {
  // TODO(port): Close main window.
}
