#ifndef _INPUT_H_
#define _INPUT_H_

#include <string_view>

namespace learncpp
{
    int getIntFromConsole(std::string_view, std::string_view);

    static void clearIntBuffer(int *);

    static void clearIntBufferV2();

    int getNumberInRange(int, int);
}

#endif