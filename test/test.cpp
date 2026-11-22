
#include "pch.h"
#include "CppUnitTest.h"
#include "../ЛР 10.1 B/Students.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest101B
{
	TEST_CLASS(UnitTest101B)
	{
	public:

		TEST_METHOD(TestCountThree)
		{
			Student p[5];
			int k[5];

			p[0].surname = "Ivanenko";
			p[0].course = 1;
			p[0].specialty = COMPUTER_SCIENCE;
			p[0].physics = 5;
			p[0].math = 3;
			p[0].programming = 3;

			p[1].surname = "Petrenko";
			p[1].course = 2;
			p[1].specialty = INFORMATICS;
			p[1].physics = 3;
			p[1].math = 4;
			p[1].numerical_methods = 3;

			p[2].surname = "Sydorenko";
			p[2].course = 3;
			p[2].specialty = MATH_ECONOMICS;
			p[2].physics = 4;
			p[2].math = 3;
			p[2].pedagogy = 3;

			p[3].surname = "Kovalenko";
			p[3].course = 1;
			p[3].specialty = COMPUTER_SCIENCE;
			p[3].physics = 3;
			p[3].math = 5;
			p[3].programming = 4;

			p[4].surname = "Bondar";
			p[4].course = 2;
			p[4].specialty = LABOR_TRAINING;
			p[4].physics = 3;
			p[4].math = 3;
			p[4].pedagogy = 5; 

			CountThree(p, 5, k);

			Assert::AreEqual(3, k[0]); 
			Assert::AreEqual(3, k[1]); 
			Assert::AreEqual(1, k[2]); 
			Assert::AreEqual(1, k[3]); 
			Assert::AreEqual(1, k[4]); 
		}

		TEST_METHOD(TestCountThreeNone)
		{
			Student p[2];
			int k[5] = { 99, 99, 99, 99, 99 };

			p[0].surname = "Ivanenko";
			p[0].course = 1;
			p[0].specialty = COMPUTER_SCIENCE;
			p[0].physics = 5;
			p[0].math = 4;
			p[0].programming = 5;

			p[1].surname = "Petrenko";
			p[1].course = 2;
			p[1].specialty = LABOR_TRAINING;
			p[1].physics = 4;
			p[1].math = 5;
			p[1].pedagogy = 2;

			CountThree(p, 2, k);

			for (int j = 0; j < 5; j++)
				Assert::AreEqual(0, k[j]);
		}
	};
}