#ifndef _INPUT_H_
#define _INPUT_H_

#include <string_view>

namespace learncpp
{
    int getIntFromConsole(std::string_view, std::string_view);

    static void clearIntBuffer(int *); // There is no need to use it out of file

    static void clearIntBufferV2(); // There is no need to use it out of file

    int getNumberInRange(int, int);
}

#endif