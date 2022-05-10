#include "stdafx.h"
#include "CppUnitTest.h" // библиотека дл€ Unit тестировани€ от мелком€гких 
#include "..\dashkaUnit\DS.h" // наш класс 
#include <fstream>

#define TEST_CASE_DIRECTORY GetDirectoryName(__FILE__)

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

string GetDirectoryName(string path) {
	const size_t last_slash_idx = path.rfind('\\');
	if (std::string::npos != last_slash_idx)
	{
		return path.substr(0, last_slash_idx + 1);
	}
	return "";
}

string GetFileName(string name, int n) {
	return TEST_CASE_DIRECTORY + name + to_string(n) + ".txt";
}

//ifstream testIn("D://VisualStudioProj//cpp//dashkaUnit//UnitTest1//test.txt");
//ifstream answIn("D://VisualStudioProj//cpp//dashkaUnit//UnitTest1//rightAnswers.txt");
ifstream testIn;
ifstream answIn;
ofstream out;
namespace UnitTest1
{
	
	TEST_CLASS(UnitTest1)
	{
		
	public:
		int m1, m2, m3;
		string answ;
		TEST_METHOD(TestMethod1)
		{
			testIn.open(GetFileName("test", 1));
			answIn.open(GetFileName("rightAnswers", 1));

			testIn >> m1>> m2>> m3;		
			answIn >> answ;
			
			Lab3 first(m1, m2, m3);
			out.open(GetFileName("out", 1));
			out << first.Solve();
			Assert::AreEqual(first.Solve(), answ);
			testIn.close();
			answIn.close();
			out.close();
		}
		TEST_METHOD(TestMethod2)
		{
			testIn.open(GetFileName("test", 2));
			answIn.open(GetFileName("rightAnswers", 2));

			testIn >> m1 >> m2 >> m3;
			answIn >> answ;

			Lab3 first(m1, m2, m3);
			out.open(GetFileName("out", 2));
			out << first.Solve();
			Assert::AreEqual(first.Solve(), answ);
			testIn.close();
			answIn.close();
			out.close();
		}
		TEST_METHOD(TestMethod3)
		{
			testIn.open(GetFileName("test", 3));
			answIn.open(GetFileName("rightAnswers", 3));
			
			testIn >> m1 >> m2 >> m3;
			answIn >> answ;

			Lab3 first(m1, m2, m3);
			out.open(GetFileName("out", 3));
			out << first.Solve();
			Assert::AreEqual(first.Solve(), answ);
			testIn.close();
			answIn.close();
			out.close();
		}
	};
}