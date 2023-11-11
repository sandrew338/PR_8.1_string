#include "pch.h"
#include "CppUnitTest.h"
#include"../main.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::string a = "=123=2";
			Assert::AreEqual(QuantityOfSymb(a,'='), 2);
		}
	};
}
