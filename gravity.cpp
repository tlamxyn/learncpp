#include "gravity.h"

#include <cstdio>

namespace learncpp
{
    double calculateObjectHeight(int towerHeight, int second)
    {
        // Using formula: s = (u * t) + (a * t^2)/2
        // here u (initial velocity) = 0, so (u * t) = 0
        double fallDistance{gravity * (second * second) / 2.0};
        double ballHeight{towerHeight - fallDistance};

        if (ballHeight < groundHeight)
        {
            return groundHeight;
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
}