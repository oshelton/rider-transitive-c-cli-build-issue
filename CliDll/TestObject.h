#pragma once

#include "ITestObject.h"

using namespace System;

namespace CliDll
{
    public ref class TestObject : public ITestObject
    {
    public:
        virtual void WriteToConsole(String^ toWrite);
    };
}