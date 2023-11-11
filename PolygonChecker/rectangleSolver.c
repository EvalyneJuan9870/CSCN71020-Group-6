#include <stdbool.h>
#include "rectangleSolver.h"

bool isRectangle(int side1, int side2, int side3, int side4) {
    // Check if opposite sides are equal (a rectangle property)
    if ((side1 == side3 && side2 == side4) || (side1 == side2 && side3 == side4) || (side1 == side4 && side2 == side3)) {
        // Check if adjacent sides are not equal (another rectangle property)
        if (side1 != side2 && side2 != side3 && side3 != side4 && side4 != side1) {
            return true; // It's a rectangle
        }
    }
    return false; // It's not a rectangle
}