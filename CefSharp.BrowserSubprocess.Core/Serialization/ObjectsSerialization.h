// Copyright � 2010-2015 The CefSharp Authors. All rights reserved.
//
// Use of this source code is governed by a BSD-style license that can be found in the LICENSE file.

#pragma once

#include "include/cef_values.h"

namespace CefSharp
{
    namespace Internals
    {
        namespace Serialization
        {
            JavascriptRootObject^ DeserializeJsObject(CefRefPtr<CefListValue> &list, int index);
        }
    }
}