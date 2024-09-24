/**
 * Program Drop Ball
 * Calculate the height of a ball which fall from a certain height
 * from a tower until it's on the ground
 */
#include "computing.h"
#include "input.h"

#include <string>
#include <iostream>

int main()
{
    std::string_view msg = "Enter an integer: \n";
    std::string_view errMsg = "Wrong, it's an integer\n";
    int number{learncpp::getIntFromConsole(msg, errMsg)};

    std::cout << number << " is ";
    if (learncpp::isEven(number))
    {
        std::cout << "even\n";
    }
    else
    {
        std::cout << "odd\n";
    }
    return 0;
}