//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
// This code is licensed under the MIT License (MIT).
// THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
// IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
// PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.
//
//*********************************************************

#include "pch.h"
#include <winrt/SDKTemplate.h>
#include "MainPage.h"
#include "SampleConfiguration.h"

using namespace winrt;
using namespace winrt::Windows::Foundation::Collections;
using namespace winrt::SDKTemplate;

hstring implementation::MainPage::FEATURE_NAME()
{
    return L"Capabilities C++/WinRT Sample";
}

IVector<Scenario> implementation::MainPage::scenariosInner = winrt::single_threaded_observable_vector<Scenario>(
{
    Scenario{ L"Check capability and set display message", xaml_typename<SDKTemplate::Scenario1_Check>() },
    Scenario{ L"Request multiple capabilities", xaml_typename<SDKTemplate::Scenario2_RequestMany>() },
});
