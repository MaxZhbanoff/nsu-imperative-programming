#include "histogram.h"

int main(void)
{
    size_t counts[ASCII_LAST_PRINTABLE + 1] = {0};
    count_characters(stdin, counts);
    if (ferror(stdin))
        return 1;

    for (int c = ASCII_FIRST_PRINTABLE; c <= ASCII_LAST_PRINTABLE; c++) {
        if (counts[c] == 0)
            continue;

        printf("%c ", c);
        for (size_t i = 0; i < counts[c]; i++)
            putchar('#');
        putchar('\n');
    }
    return 0;
}
