#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05.4/Lab_05.4.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int k = 1;
			Assert::AreEqual(S0(k), -0.26, 0.01);
		}
	};
}
