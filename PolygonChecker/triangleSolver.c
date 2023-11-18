#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#include "triangleSolver.h"

char* analyzeTriangle(int side1, int side2, int side3) {
	char* result = "";
	if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
		result = "Not a triangle";
	}
	else if (side1 == side2 && side1 == side3) {
		result = "Equilateral triangle";
	}
	else if ((side1 == side2 && side1 != side3) || 
		(side1 == side3 && side1 != side2))
	{
		result = "Isosceles triangle";
	}
	else if(side1 != side2 != side3){ 
		result = "Scalene triangle";
	}
	else {
		result = "Not a triangle";
	}

	return result;
}

double calculateAngles(double a, double b, double c, double*angleA, double*angleB, double*angleC)
{
	// Calculate semi-perimeter
	double s = (a + b + c) / 2;

	double pi;

	pi = acos(-1);

	// Calculate area using Heron's formula

	double area = sqrt(s * (s - a) * (s - b) * (s - c));

	// Calculate circumradius

	double R = (a * b * c) / (4 * area);

	// Calculate angles

	double angleA = (180 / pi) * asin(a / (2 * R));
	double angleB = (180 / pi) * asin(b / (2 * R));
	double angleC = (180 / pi) * asin(c / (2 * R));

	// Print results

	printf("Sides:  %6.2f %6.2f %6.2f\n", a, b, c);
	printf("Angles: %6.2f %6.2f %6.2f\n", angleA, angleB, angleC);
	return (60, 60, 60);

}

int isTriangle(float a, float b, float c)
{
	return (a + b > c) && (b + c > a) && (a + c > b) && (fabs(a - b) < c) && (fabs(a - c) < b) && (fabs(b - c) < a);
}

