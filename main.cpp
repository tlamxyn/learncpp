#include "input.h"
#include <string>

int main()
{
    std::string message("Please Type An Interger: \n");
    std::string errorMessage("Wrong Input, You Must Use Integer Number\n");

    // Direct Initialte a variable by input
    int number{getIntFromConsole(message, errorMessage)};

    printf("Double that number is: %d\n", number * 2);

    return 0;
}