#include "input.h"
#include <string>

#include <iostream>

void dropBallFrom(int);
double calculateBallHeight(int, int);

int main()
{

    printf("Calculate the fall of a ball whose height depends on user input\n");
    long towerheight{getNumberInRange(0, 1000000)};
    dropBallFrom(towerheight);
    return 0;
}

double calculateBallHeight(int towerHeight, int second)
{
    const double gravity{9.8};

    // Using formula: s = (u * t) + (a * t^2)/2
    // here u (initial velocity) = 0, so (u * t) = 0
    double fallDistance{gravity * (second * second) / 2.0};
    double ballHeight{towerHeight - fallDistance};

    if (ballHeight < 0.0)
    {
        return 0.0;
    }
    return ballHeight;
}

void dropBallFrom(int towerHeight)
{
    int i = 0;
    while (true)
    {
        double ballheight = calculateBallHeight(towerHeight, i);

        // If ball is on the ground
        if (ballheight == 0.0)
        {
            printf("At %d seconds, the ball is on the ground\n", i);
            break;
        }
        printf("At %d seconds, the ball is at height: %f meters\n", i, ballheight);
        ++i;
    }
}