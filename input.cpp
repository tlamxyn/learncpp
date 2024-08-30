#include "input.h"
#include <stdio.h>
#include <cstdlib>
#include <string>

int getIntFromConsole(std::string message = "", std::string errorMessage = "")
{
    const char *cc_message(message.c_str());
    const char *cc_errorMessage(errorMessage.c_str());

    int number{};

    // Explain what: This variable is used to check if it store '\n' character
    char temp{};

    while (true)
    {
        printf("%s", cc_message);

        // Explain what: Check if the input is integer only (no other characters)
        // Explain why 1: Scanf returns number of fields that were successfully converted and assigned
        // Explain why 2: prevent user type mix of number and character, check if the last character is \n
        if (scanf("%d%c", &number, &temp) == 2 && temp == '\n')
        {
            // Explain why: The input now is valid
            break;
        };

        // The input now is not valid

        printf("%s", cc_errorMessage);

        // Explain what: is used to clear wrong input value in variable
        clearIntBuffer(&number);
    }

    return number;
}

void clearIntBuffer(int *number)
{
    while (((*number) = getchar()) != '\n' && (*number) != EOF)
    {
    }
}