#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* analyzeTriangle(int side1, int side2, int side3);
extern "C" int* getTriangleSides(int* triangleSides);
extern "C" char* analyzeRectangle(int side1, int side2, int side3, int side4);
extern "C" int* getRectangleSides(int* rectangleSides);
extern "C" bool isRectangle(int side1, int side2, int side3, int side4);
extern "C" void calculateAngles(double a, double b, double c);
extern "C" int isTriangle(float a, float b, float c);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PolygonCheckerTestCases
{
	TEST_CLASS(PolygonCheckerTestCases)
	{
	public:
		
		TEST_METHOD(analyze_triangle_not_triangle_test1)
		{

			int side1 = 0;

			int side2 = 1;

			int side3 = 2;

			char* expected = "Not a triangle";

			char* actual = analyzeTriangle(side1, side2, side3);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(analyze_triangle_not_triangle_test2) 
		{

			int side1 = 0;

			int side2 = 0;

			int side3 = 2;

			char* expected = "Not a triangle";

			char* actual = analyzeTriangle(side1, side2, side3);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(analyze_triangle_not_triangle_test3)
		{

			int side1 = 0;

			int side2 = 0;

			int side3 = 0;

			char* expected = "Not a triangle";

			char* actual = analyzeTriangle(side1, side2, side3);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(analyze_triangle_not_triangle_test4)
		{

			int side1 = 100;

			int side2 = 10;

			int side3 = 1;

			char* expected = "Not a triangle";

			char* actual = analyzeTriangle(side1, side2, side3);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(analyze_triangle_not_triangle_test5)
		{

			int side1 = 10;

			int side2 = 1000;

			int side3 = 1;

			char* expected = "Not a triangle";

			char* actual = analyzeTriangle(side1, side2, side3);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(analyze_triangle_not_triangle_test6)
		{

			int side1 = 1;

			int side2 = 10;

			int side3 = 1000;

			char* expected = "Not a triangle";

			char* actual = analyzeTriangle(side1, side2, side3);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(analyze_triangle_not_triangle_test7)
		{

			int side1 = 10;

			int side2 = 1;

			int side3 = 1000;

			char* expected = "Not a triangle";

			char* actual = analyzeTriangle(side1, side2, side3);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(analyze_triangle_not_triangle_test8)
		{

			int side1 = 1000;

			int side2 = 1;

			int side3 = 10;

			char* expected = "Not a triangle";

			char* actual = analyzeTriangle(side1, side2, side3);

			Assert::AreEqual(expected, actual);

		}



	};
}
