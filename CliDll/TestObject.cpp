#include "TestObject.h"

using namespace System;

namespace CliDll
{
    void TestObject::WriteToConsole(String^ toWrite)
    {
        Console::WriteLine(toWrite);
    }
}