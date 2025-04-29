#pragma once

using namespace System;

namespace CliDll
{
    public interface class ITestObject
    {
        void WriteToConsole(String^ toWrite);
    };
}