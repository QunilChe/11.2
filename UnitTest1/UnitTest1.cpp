#include "pch.h"
#include "CppUnitTest.h"
#include "../11.2/11.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LineSearch(p, 1);
		}
	};
}
