#include <stdio.h>
#include <stdbool.h>

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
	else {
		result = "Scalene triangle";
	}

	return result;
}

void calculateAngles(float a, float b, float c, float* A, float* B, float* C)
{
    const float pi = acos(-1);

    if (a == b && b == c) {
        // Equilateral triangle
        *A = *B = *C = 60.0;
    }
    else {
        *A = (180.0 / pi) * acos(fmin(1.0, fmax(-1.0, (b * b + c * c - a * a) / (2 * b * c))));
        *B = (180.0 / pi) * acos(fmin(1.0, fmax(-1.0, (a * a + c * c - b * b) / (2 * a * c))));
        *C = 180.0 - *A - *B;

        // Check for right-angled triangle
        if (fabs(*A - 90.0) < 1.0) {
            *B = 180.0 - *A - *C;
        }
        else if (fabs(*B - 90.0) < 1.0) {
            *A = 180.0 - *B - *C;
        }
        else if (fabs(*C - 90.0) < 1.0) {
            *A = 180.0 - *B - *C;
        }
    }
}

int isTriangle(float a, float b, float c)
{
    return (a + b > c) && (b + c > a) && (a + c > b) && (fabs(a - b) < c) && (fabs(a - c) < b) && (fabs(b - c) < a);
}
