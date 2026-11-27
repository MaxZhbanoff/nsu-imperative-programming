#include "division.h"

Division divide(int a, int b)
{
    int quotient = a / b;
    int remainder = a % b;
    Division result = {
        quotient - (remainder < 0),
        quotient + (remainder > 0),
        quotient,
        remainder < 0 ? remainder + b : remainder
    };
    return result;
}
