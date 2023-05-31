
//#include "CppUnitTest.h"
#include "../IT-company/Admin.h"
#include "../IT-company/Money.h"
#include "../IT-company/Profesion.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money qer(4500);
			Assert::AreEqual(4500, qer.getprice());
		}
		TEST_METHOD(TestMethod2)
		{
			Profesion qer("programer",23);
			Assert::AreEqual(23, qer.getselery());
		}
		TEST_METHOD(TestMethod3)
		{
			Admin qer("admin",2525);
			Assert::AreEqual(2525, qer.getpass());
		}
	};
}
