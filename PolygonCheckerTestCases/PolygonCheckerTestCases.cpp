#include "pch.h"
#include "CppUnitTest.h"
#include <cassert>

extern "C" char* analyzeTriangle(int side1, int side2, int side3);
extern "C" int* getTriangleSides(int* triangleSides);
extern "C" char* analyzeRectangle(int side1, int side2, int side3, int side4);
extern "C" int* getRectangleSides(int* rectangleSides);
extern "C" bool isRectangle(int side1, int side2, int side3, int side4);
extern "C" double calculateAngles(double a, double b, double c, double*angleA, double*angleB, double*angleC);
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

        // Rectangle test cases
        TEST_METHOD(analyze_rectangle_test1)
        {
            int side1 = 3;
            int side2 = 4;
            int side3 = 3;
            int side4 = 4;
            char* expected = "It's a rectangle!";
            char* actual = analyzeRectangle(side1, side2, side3, side4);
            Assert::AreEqual(expected, actual);
        };

        TEST_METHOD(analyze_rectangle_test2)
        {
            int side1 = 6;
            int side2 = 3;
            int side3 = 6;
            int side4 = 3;
            char* expected = "It's a rectangle!";
            char* actual = analyzeRectangle(side1, side2, side3, side4);
            Assert::AreEqual(expected, actual);
        };

        TEST_METHOD(analyze_rectangle_test3)
        {
            int side1 = 6;
            int side2 = 8;
            int side3 = 6;
            int side4 = 8;
            char* expected = "It's a rectangle!";
            char* actual = analyzeRectangle(side1, side2, side3, side4);
            Assert::AreEqual(expected, actual);
        };

        TEST_METHOD(analyze_rectangle_test4)
        {
            int side1 = 10;
            int side2 = 15;
            int side3 = 10;
            int side4 = 15;
            char* expected = "It's a rectangle!";
            char* actual = analyzeRectangle(side1, side2, side3, side4);
            Assert::AreEqual(expected, actual);
        };

        TEST_METHOD(analyze_rectangle_test5)
        {
            int side1 = 100;
            int side2 = 50;
            int side3 = 100;
            int side4 = 50;
            char* expected = "It's a rectangle!";
            char* actual = analyzeRectangle(side1, side2, side3, side4);
            Assert::AreEqual(expected, actual);
        };

        TEST_METHOD(analyze_rectangle_test6)
        {
            int side1 = 14;
            int side2 = 7;
            int side3 = 14;
            int side4 = 7;
            char* expected = "It's a rectangle!";
            char* actual = analyzeRectangle(side1, side2, side3, side4);
            Assert::AreEqual(expected, actual);
        };

        TEST_METHOD(analyze_rectangle_test7)
        {
            int side1 = 1;
            int side2 = 100;
            int side3 = 1;
            int side4 = 100;
            char* expected = "It's a rectangle!";
            char* actual = analyzeRectangle(side1, side2, side3, side4);
            Assert::AreEqual(expected, actual);
        };

        TEST_METHOD(analyze_rectangle_test8)
        {
            int side1 = 12;
            int side2 = 6;
            int side3 = 12;
            int side4 = 6;
            char* expected = "It's a rectangle!";
            char* actual = analyzeRectangle(side1, side2, side3, side4);
            Assert::AreEqual(expected, actual);
        };

        TEST_METHOD(analyze_rectangle_test9)
        {
            int side1 = 9;
            int side2 = 5;
            int side3 = 9;
            int side4 = 5;
            char* expected = "It's a rectangle!";
            char* actual = analyzeRectangle(side1, side2, side3, side4);
            Assert::AreEqual(expected, actual);
        };

        TEST_METHOD(analyze_rectangle_test10)
        {
            int side1 = 15;
            int side2 = 20;
            int side3 = 15;
            int side4 = 20;
            char* expected = "It's a rectangle!";
            char* actual = analyzeRectangle(side1, side2, side3, side4);
            Assert::AreEqual(expected, actual);
        };

        // Not a rectangle test cases
        TEST_METHOD(analyze_not_rectangle_test1)
        {
            int side1 = 1;
            int side2 = 2;
            int side3 = 3;
            int side4 = 4;
            char* expected = "It's not a rectangle.";
            char* actual = analyzeRectangle(side1, side2, side3, side4);
            Assert::AreEqual(expected, actual);
        };

        TEST_METHOD(analyze_not_rectangle_test2)
        {
            int side1 = 6;
            int side2 = 7;
            int side3 = 8;
            int side4 = 9;
            char* expected = "It's not a rectangle.";
            char* actual = analyzeRectangle(side1, side2, side3, side4);
            Assert::AreEqual(expected, actual);
        };

        TEST_METHOD(analyze_not_rectangle_test3)
        {
            int side1 = 2;
            int side2 = 5;
            int side3 = 3;
            int side4 = 6;
            char* expected = "It's not a rectangle.";
            char* actual = analyzeRectangle(side1, side2, side3, side4);
            Assert::AreEqual(expected, actual);
        };

        TEST_METHOD(analyze_not_rectangle_test4)
        {
            int side1 = 8;
            int side2 = 8;
            int side3 = 8;
            int side4 = 2;
            char* expected = "It's not a rectangle.";
            char* actual = analyzeRectangle(side1, side2, side3, side4);
            Assert::AreEqual(expected, actual);
        };

        TEST_METHOD(analyze_not_rectangle_test5)
        {
            int side1 = 500;
            int side2 = 9;
            int side3 = 5;
            int side4 = 152;
            char* expected = "It's not a rectangle.";
            char* actual = analyzeRectangle(side1, side2, side3, side4);
            Assert::AreEqual(expected, actual);
        };

        TEST_METHOD(analyze_not_rectangle_test6)
        {
            int side1 = 4;
            int side2 = 4;
            int side3 = 7;
            int side4 = 7;
            char* expected = "It's not a rectangle.";
            char* actual = analyzeRectangle(side1, side2, side3, side4);
            Assert::AreEqual(expected, actual);
        };

        TEST_METHOD(analyze_not_rectangle_test7)
        {
            int side1 = 3;
            int side2 = 9;
            int side3 = 4;
            int side4 = 4;
            char* expected = "It's not a rectangle.";
            char* actual = analyzeRectangle(side1, side2, side3, side4);
            Assert::AreEqual(expected, actual);
        };

        TEST_METHOD(analyze_not_rectangle_test8)
        {
            int side1 = 10;
            int side2 = 15;
            int side3 = 5;
            int side4 = 20;
            char* expected = "It's not a rectangle.";
            char* actual = analyzeRectangle(side1, side2, side3, side4);
            Assert::AreEqual(expected, actual);
        };

        TEST_METHOD(analyze_not_rectangle_test9)
        {
            int side1 = 700000;
            int side2 = -992;
            int side3 = 7;
            int side4 = 7552;
            char* expected = "It's not a rectangle.";
            char* actual = analyzeRectangle(side1, side2, side3, side4);
            Assert::AreEqual(expected, actual);
        };

        TEST_METHOD(analyze_not_rectangle_test10)
        {
            int side1 = 1;
            int side2 = 5;
            int side3 = 3;
            int side4 = 6;
            char* expected = "It's not a rectangle.";
            char* actual = analyzeRectangle(side1, side2, side3, side4);
            Assert::AreEqual(expected, actual);
        };

        // Rectangle boundary test cases
        TEST_METHOD(analyze_rectangle_boundary_test1)
        {
            int side1 = INT_MAX;
            int side2 = INT_MIN;
            int side3 = INT_MAX;
            int side4 = INT_MIN;
            char* expected = "It's a rectangle!";
            char* actual = analyzeRectangle(side1, side2, side3, side4);
            Assert::AreEqual(expected, actual);
        };

        TEST_METHOD(analyze_rectangle_boundary_test2)
        {
            int side1 = 1;
            int side2 = 1;
            int side3 = INT_MAX;
            int side4 = INT_MAX;
            char* expected = "It's not a rectangle.";
            char* actual = analyzeRectangle(side1, side2, side3, side4);
            Assert::AreEqual(expected, actual);
        };

        TEST_METHOD(analyze_rectangle_boundary_test3)
        {
            int side1 = INT_MAX;
            int side2 = INT_MAX;
            int side3 = INT_MAX;
            int side4 = INT_MAX;
            char* expected = "It's not a rectangle.";
            char* actual = analyzeRectangle(side1, side2, side3, side4);
            Assert::AreEqual(expected, actual);
        };

        TEST_METHOD(analyze_rectangle_boundary_test4)
        {
            int side1 = INT_MIN;
            int side2 = INT_MIN;
            int side3 = INT_MIN;
            int side4 = INT_MIN;
            char* expected = "It's not a rectangle.";
            char* actual = analyzeRectangle(side1, side2, side3, side4);
            Assert::AreEqual(expected, actual);
        };

        TEST_METHOD(analyze_rectangle_boundary_test5)
        {
            int side1 = INT_MIN;
            int side2 = INT_MAX;
            int side3 = INT_MIN;
            int side4 = INT_MAX;
            char* expected = "It's a rectangle!";
            char* actual = analyzeRectangle(side1, side2, side3, side4);
            Assert::AreEqual(expected, actual);
        };

		// Triangle ngles unit test cases
		TEST_METHOD(Analyze_Equilateral_Triangle_Test1)
		{
			double a = 5.0, b = 5.0, c = 5.0;
			double angleA, angleB, angleC;

			calculateAngles(a, b, c, &angleA, &angleB, &angleC);

			assert(fabs(angleA - 60.0) < 0.0001);
			assert(fabs(angleB - 60.0) < 0.0001);
			assert(fabs(angleC - 60.0) < 0.0001);
		};

		TEST_METHOD(Analyze_Right_Angled_Triangle_Test2)
		{
			double a = 3.0, b = 4.0, c = 5.0;
			double angleA, angleB, angleC;
			calculateAngles(a, b, c, &angleA, &angleB, &angleC);

			assert(fabs(angleA - 37.30) < 0.01);
			assert(fabs(angleA - 52.70) < 0.01);
			assert(angleC == 90.0);
		}

		TEST_METHOD(Analyze_Isosceles_Triangle_Test3)
		{
			double a = 4.0, b = 4.0, c = 6.0;
			double angleA, angleB, angleC;
			calculateAngles(a, b, c, &angleA, &angleB, &angleC);

			assert(fabs(angleA - angleB) < 0.001);
		}

		TEST_METHOD(Analyze_Scalene_Trianle_Test4)
		{

			double a = 3.0, b = 4.0, c = 5.0;
			double angleA, angleB, angleC;
			calculateAngles(a, b, c, &angleA, &angleB, &angleC);

			void* expectedAngleA ="39";
			void* expectedAngleB = "54";
			void* expectedAngleC = "87";

			assert(fabs(angleA - 39) < 0.001);
			assert(fabs(angleB - 54) < 0.001);
			assert(fabs(angleC - 87) < 0.001);
		}

		TEST_METHOD(Analyze_Invalid_Triangle_Test5)
		{

			double a = 2.0, b = 2.0, c = 4.0;
			double angleA, angleB, angleC;

			calculateAngles(a, b, c, &angleA, &angleB, &angleC);

			assert(isNotAn(angleA));   //AngleA invalid Triangle therefore undefined
			assert(isNoAn(angleB));    //AngleB invalid Triangle therefore undefined
			assert(isNotAn(angleC));   //AngleC invalid Triangle therefore undefined

		}

		TEST_METHOD(Analyze_Negative_SideLengths_Test6)
		{

			double a = 2.0, b = -5.0, c = -8.0;
			double angleA, angleB, angleC;

			calculateAngles(a, b, c, &angleA, &angleB, &angleC);

			assert(isNotAn(angleA));   //AngleA undefined for negative side length
			assert(isNotAn(angleB));   //AngleB undefined for negative side length
			assert(isNotAn(angleC));   //AngleC undefined for negative side length

		TEST_METHOD(Analyze_StringInput_Test7)
		{
			double angleA, angleB, angleC;

			calculateAngles("5.0", "6.0", "7.0", &anglesA, &angleB, &angleC);

			assert(isNotAn(angleA));   //AngleA undefined for non-numeric inputs
			assert(isNotAn(angleB));   //AngleB undefined for non-numeric inputs
			assert(isNotAn(angleC));   //AngleC undefined for non-numeric inputs

		}

		TEST_METHOD(Invalid_Triangles_Test8)
		{
			double a = 1.0, b = 1.0, c = 3.0;
			double angleA, angleB, angleC;

			int result = calculateAngles(a, b, c, &angleA, &angleB, &angleC);

			assert(result == 0); // Assuming the function returns 0 for an invalid triangle

		};

		TEST_METHOD(Analyze_Zero_SideLength_Test9)
		{
			double a = 0.0, b = 0.0, c = 0.0;
			double angleA, angleB, angleC;

			calculateAngles(a, b, c, &angleA, &angleB, &angleC);

			assert(isNotAn(angleA));   //AngleA undefined for zero side length
			assert(isNotAn(angleB));   //AngleB undefined for zero side length
			assert(isNotAn(angleC));   //AngleC undefined for zero side length
		}

		TEST_METHOD(Analyze_greaterThan180SideLength_Test10)
		{
			double a = 190.7, b = 200.9, c = 1000.0;
			double angleA, angleB, angleC;

			calculateAngles(a, b, c, &angleA, &angleB, &angleC);

			assert(isNotAn(angleA));   //AngleA undefined for greater than 180 Triangle
			assert(isNotAn(angleB));   //AngleB undefined for greater than 180 Triangle
			assert(isNotAn(angleC));   //AngleC undefined for greater than 180 Triangle
		};

	
	};
};