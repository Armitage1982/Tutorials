////////////////////////////////////////////////////////////////////////////////////////////////////
// NoesisGUI - http://www.noesisengine.com
// Copyright (c) 2013 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////


#include "App.xaml.h"

#include <NsCore/ReflectionImplement.h>


using namespace QuestLog;
using namespace Noesis;


////////////////////////////////////////////////////////////////////////////////////////////////////
const char* App::GetTitleOverride(UIElement*) const
{
    return "NoesisGUI - QuestLog";
}

////////////////////////////////////////////////////////////////////////////////////////////////////
NS_IMPLEMENT_REFLECTION(QuestLog::App)
{
    NsMeta<TypeId>("QuestLog.App");
}
