#include "pch.h"
#include "CppUnitTest.h"
#include "../AP_LR_5.1/AP_LR_5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest50
{
	TEST_CLASS(UnitTest50)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
		double t;
			t = h(1, 1);
				Assert::AreEqual(0.666667, t, 0.000001);
		}
	};
}
