#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP3.3D/Triangle.cpp"
#include "../OOP3.3D/Triad.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest30
{
	TEST_CLASS(UnitTest30)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Triangle a;
			a.Init(3, 4, 5);
			Assert::AreEqual(round(a.calculateAngleA()), round(36.8699));

		}
	};
}