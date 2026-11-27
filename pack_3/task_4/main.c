#include <stdio.h>
#include <string.h>

#include "letters.h"

int main(void)
{
    char line[103];
    for (size_t number = 1; fgets(line, sizeof(line), stdin) != NULL; number++) {
        line[strcspn(line, "\r\n")] = '\0';

        int lower, upper, digits;
        int total = calcLetters(line, &lower, &upper, &digits);
        printf("Line %zu has %d chars: %d are letters (%d lower, %d upper), %d are digits.\n",
               number, total, lower + upper, lower, upper, digits);
    }
    return ferror(stdin) != 0;
}
