#include "gravity.h"

#include <cstdio>

double calculateObjectHeight(int towerHeight, int second)
{
    constexpr double gravity{9.8};

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

void dropObjectFrom(int towerHeight)
{
    int i = 0;
    while (true)
    {
        double ballheight = calculateObjectHeight(towerHeight, i);

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