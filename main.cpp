/**
 * Program Drop Ball
 * Calculate the height of a ball which fall from a certain height
 * from a tower until it's on the ground
 */

#include "input.h"
#include "gravity.h"

#include <string>
#include <iostream>

int main()
{

    printf("Calculate the fall of a ball whose height depends on user input\n");

    long towerheight{getNumberInRange(0, 1000000)};

    dropObjectFrom(towerheight);

    return 0;
}