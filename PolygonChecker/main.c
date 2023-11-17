#include <stdio.h>
#include <stdbool.h>

#include "main.h"
#include "triangleSolver.h"

int side = 0;

int main() {
	bool continueProgram = true;
	while (continueProgram) {
		printWelcome();

		int shapeChoice = printShapeMenu();

		switch (shapeChoice)
		{
		case 2:
			printf_s("Rectangle selected.\n");
			int rectangleSides[4] = { 0, 0, 0, 0 };
			int* rectangleSidesPtr = getRectangleSides(rectangleSides);
			char* rectangleResult = analyzeRectangle(rectangleSidesPtr[0], rectangleSidesPtr[1], rectangleSidesPtr[2], rectangleSidesPtr[3]);
			printf_s("%s\n", rectangleResult);
			break;

		case 1:
			printf_s("Triangle selected.\n");
			int triangleSides[3] = { 0, 0, 0 };
			int* triangleSidesPtr = getTriangleSides(triangleSides);
			//printf_s("! %d\n", triangleSidesPtr[0]);
			char* result = analyzeTriangle(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);
			printf_s("%s\n", result);
			break;

		case 2:
			rintf_s("Angles selected.\n");
			float a, b, c, A, B, C;

			printf("Enter the sides of the triangle (a b c): ");
			if (scanf("%f %f %f", &a, &b, &c) != 3) {
				fprintf(stderr, "Failed to read 3 numbers\n");
				return 1;
			}

			if (!isTriangle(a, b, c)) {
				fprintf(stderr, "The sides %.2f, %.2f, %.2f do not form a valid triangle\n", a, b, c);
				return 1;
			}

			calculateAngles(a, b, c, &A, &B, &C);

			printf("Sides:  %6.2f %6.2f %6.2f\n", a, b, c);
			printf("Angles: %6.2f %6.2f %6.2f\n", A, B, C);

			break;

		case 0:
			continueProgram = false;
			break;
		default:
			printf_s("Invalid value entered.\n");
			break;
		}
	}
	return 0;
}

void printWelcome() {
	printf_s("\n");
	printf_s(" **********************\n");
	printf_s("**     Welcome to     **\n");
	printf_s("**   Polygon Checker  **\n");
	printf_s(" **********************\n");
}

int printShapeMenu() {
	printf_s("2. Rectangle\n");
	printf_s("1. Triangle\n");
	printf_s("2. Angles\n");
	printf_s("0. Exit\n");

	int shapeChoice;

	printf_s("Enter number: ");
	scanf_s("%1o", &shapeChoice);

	return shapeChoice;
}

int* getTriangleSides(int* triangleSides) {
	printf_s("Enter the three sides of the triangle: ");
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &triangleSides[i]);
	}
	return triangleSides;
}



int* getRectangleSides(int* rectangleSides) {
	printf_s("Enter the four sides of the rectangle: ");
	for (int i = 0; i < 4; i++) {
		scanf_s("%d", &rectangleSides[i]);
	}
	return rectangleSides;
}

char* analyzeRectangle(int side1, int side2, int side3, int side4) {
	if (isRectangle(side1, side2, side3, side4)) {
		return "It's a rectangle!";
	}
	return "It's not a rectangle.";
}

