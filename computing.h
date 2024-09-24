#ifndef _COMPUTING_H_
#define _COMPUTING_H_

#include <cmath>
#include <algorithm>

namespace learncpp
{
    constexpr bool isEven(int number)
    {
        return !(number % 2);
    }
    constexpr bool isOdd(int number)
    {
        return (number % 2);
    }

    // Return true if the difference between a and b is within epsilon percent of the larger of a and b
    constexpr bool approximatelyEqualRel(double a, double b, double relEpsilon)
    {
        return (std::abs(a - b) <= std::max(std::abs(a), std::abs(b)) * relEpsilon);
    }

    // Return true if the difference between a and b is less than or equal to absEpsilon, or within relEpsilon percent of the larger of a and b
    constexpr bool approximatelyEqualAbsRel(double a, double b, double absEpsilon, double relEpsilon)
    {
        // Check if the numbers are really close -- needed when comparing numbers near zero
        if (std::abs(a - b) <= absEpsilon)
        {
            return true;
        }

        // Otherwise fall back to Knuth's algorithm
        return approximatelyEqualRel(a, b, relEpsilon);
    }

    // `constAbs()` is constexpr version of `std::abs()`
    template <typename T>
    constexpr T constAbs(T x)
    {
        return (x > 0 ? x : -x);
    }
}
#endif