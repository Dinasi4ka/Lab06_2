#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab06_2/Lab06_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int array[] = { 2,4,5,7,8 };
			int t;
			t = Min(array, 10);
			Assert::AreEqual(t, 0);
		}
	};
}
