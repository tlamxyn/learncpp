#include "input.h"
#include <stdio.h>
#include <cstdlib>
#include <string_view>

int getIntFromConsole(std::string_view message = "", std::string_view errorMessage = "")
{
    // const char *cc_message(message.c_str());
    // const char *cc_errorMessage(errorMessage.c_str());

    int number{};

    // Explain what: This variable is used to check if it store '\n' character
    char temp{};

    while (true)
    {
        printf("%s", message);

        // Explain what: Check if the input is integer only (no other characters)
        // Explain why 1: Scanf returns number of fields that were successfully converted and assigned
        // Explain why 2: prevent user type mix of number and character, check if the last character is \n
        if (scanf("%d%c", &number, &temp) == 2 && temp == '\n')
        {
            // Explain why: The input now is valid
            break;
        };

        // The input now is not valid

        printf("%s", errorMessage);

        // Explain what: is used to clear wrong input value in variable
        clearIntBuffer(&number);
    }

    return number;
}

void clearIntBuffer(int *number)
{
    /**
     * Explain how: getchar() takes a character out of buffer
     * - then it is copied to the value of 'number'
     * - the 'number' then is check if it is end or not
     * - to preven the inputs of user contain many lines
     * check if 'number' is end of line or not
     *
     * For normal case, the wrong input contain 1 '\n' character
     * (by Enter). But somehow if user find a way to type more than
     * one '\n' character without press Enter, that would be bad.
     * So the statement '(*number) != EOF' is to check for that case
     */
    while (((*number) = getchar()) != '\n' && (*number) != EOF)
    {
        /**
         * Explain what: If the loop is in here, then the buffer
         * still has wrong inputs from user. So it can be buffed
         */
    }
}

int getNumberInRange(int start, int end)
{
    std::string_view inputMessage{"Please input integer number:\n"};
    std::string_view errorMessage{"Wrong input, it's not an integer number\n"};
    int value{getIntFromConsole(inputMessage, errorMessage)};

    while (value < start || value > end)
    {
        printf("Wrong input, the value is out of range [%d, %d]\n", start, end);
        printf("Try again with number in range [%d, %d]\n", start, end);
        value = getIntFromConsole(inputMessage, errorMessage);
    }

    return value;
}