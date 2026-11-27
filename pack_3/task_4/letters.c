#include "letters.h"

int calcLetters(char *iStr, int *oLowerCnt, int *oUpperCnt, int *oDigitsCnt)
{
    *oLowerCnt = 0;
    *oUpperCnt = 0;
    *oDigitsCnt = 0;

    int length = 0;
    for (; iStr[length] != '\0'; length++) {
        char c = iStr[length];
        if (c >= 'a' && c <= 'z')
            (*oLowerCnt)++;
        else if (c >= 'A' && c <= 'Z')
            (*oUpperCnt)++;
        else if (c >= '0' && c <= '9')
            (*oDigitsCnt)++;
    }
    return length;
}
