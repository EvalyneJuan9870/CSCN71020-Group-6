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

			int side1 = 4;

			int side2 = 4;

			int side3 = 0;

			char* expected = "Not a triangle";

			char* actual = analyzeTriangle(side1, side2, side3);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(analyze_triangle_not_triangle_test_negative_values_test5) {

			int side1 = -3;

			int side2 = -2;

			int side3 = -1;

			char* expected = "Not a triangle";

			char* actual = analyzeTriangle(side1, side2, side3);

			Assert::AreEqual(expected, actual);

		}

		TEST_METHOD(analyze_triangle_not_triangle_test_negative_values_test6) {

			int side1 = 3;

			int side2 = -2;

			int side3 = -1;

			char* expected = "Not a triangle";

			char* actual = analyzeTriangle(side1, side2, side3);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(analyze_triangle_not_triangle_test_negative_values_test7) {

			int side1 = 3;

			int side2 = 2;

			int side3 = -1;

			char* expected = "Not a triangle";

			char* actual = analyzeTriangle(side1, side2, side3);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(analyze_triangle_is_scalene_test1) {

			int side1 = 1;

			int side2 = 2;

			int side3 = 3;

			char* expected = "Scalene triangle";

			char* actual = analyzeTriangle(side1, side2, side3);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(analyze_triangle_is_scalene_test2) {

			int side1 = 10;

			int side2 = 20;

			int side3 = 30;

			char* expected = "Scalene triangle";

			char* actual = analyzeTriangle(side1, side2, side3);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(analyze_triangle_is_scalene_test3) {

			int side1 = 30;

			int side2 = 20;

			int side3 = 10;

			char* expected = "Scalene triangle";

			char* actual = analyzeTriangle(side1, side2, side3);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(analyze_triangle_is_scalene_test4) {

			int side1 = 20;

			int side2 = 30;

			int side3 = 10;

			char* expected = "Scalene triangle";

			char* actual = analyzeTriangle(side1, side2, side3);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(analyze_triangle_is_scalene_test5) {

			int side1 = 10;

			int side2 = 30;

			int side3 = 20;

			char* expected = "Scalene triangle";

			char* actual = analyzeTriangle(side1, side2, side3);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(analyze_triangle_is_scalene_test6) {

			int side1 = 20;

			int side2 = 10;

			int side3 = 30;

			char* expected = "Scalene triangle";

			char* actual = analyzeTriangle(side1, side2, side3);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(analyze_triangle_is_scalene_test7) {

			int side1 = 33;

			int side2 = 19;

			int side3 = 64;

			char* expected = "Scalene triangle";

			char* actual = analyzeTriangle(side1, side2, side3);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(analyze_triangle_is_scalene_test8) {

			int side1 = 10000000;

			int side2 = 20000000;

			int side3 = 30000000;

			char* expected = "Scalene triangle";

			char* actual = analyzeTriangle(side1, side2, side3);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(analyze_triangle_is_iscoceles_test1) {

			int side1 = 2;

			int side2 = 2;

			int side3 = 4;

			char* expected = "Isosceles triangle";

			char* actual = analyzeTriangle(side1, side2, side3);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(analyze_triangle_is_iscoceles_test2) {

			int side1 = 4;

			int side2 = 2;

			int side3 = 4;

			char* expected = "Isosceles triangle";

			char* actual = analyzeTriangle(side1, side2, side3);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(analyze_triangle_is_iscoceles_test3) {

			int side1 = 100;

			int side2 = 50;

			int side3 = 100;

			char* expected = "Isosceles triangle";

			char* actual = analyzeTriangle(side1, side2, side3);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(analyze_triangle_is_iscoceles_test4) {

			int side1 = 233;

			int side2 = 97;

			int side3 = 233;

			char* expected = "Isosceles triangle";

			char* actual = analyzeTriangle(side1, side2, side3);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(analyze_triangle_is_isoceles_test5) {

			int side1 = 78;

			int side2 = 40;

			int side3 = 78;

			char* expected = "Isosceles triangle";

			char* actual = analyzeTriangle(side1, side2, side3);

			Assert::AreEqual(expected, actual);


		}

		TEST_METHOD(analyze_triangle_is_Equilateral_test1) {

			int side1 = 2;

			int side2 = 2;

			int side3 = 2;

			char* expected = "Equilateral triangle";

			char* actual = analyzeTriangle(side1, side2, side3);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(analyze_triangle_is_Equilateral_test2) {

			int side1 = 5;

			int side2 = 5;

			int side3 = 5;

			char* expected = "Equilateral triangle";

			char* actual = analyzeTriangle(side1, side2, side3);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(analyze_triangle_is_Equilateral_test3) {

			int side1 = 55;

			int side2 = 55;

			int side3 = 55;

			char* expected = "Equilateral triangle";

			char* actual = analyzeTriangle(side1, side2, side3);

			Assert::AreEqual(expected, actual);

		}
		TEST_METHOD(analyze_triangle_is_Equilateral_test4) {

			int side1 = 100000;

			int side2 = 100000;

			int side3 = 100000;

			char* expected = "Equilateral triangle";

			char* actual = analyzeTriangle(side1, side2, side3);

			Assert::AreEqual(expected, actual);

		}


	};
}
