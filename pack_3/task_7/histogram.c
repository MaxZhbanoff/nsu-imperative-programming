#include "histogram.h"

void count_characters(FILE *input, size_t counts[ASCII_LAST_PRINTABLE + 1])
{
    int c;
    while ((c = getc(input)) != EOF) {
        if (c >= ASCII_FIRST_PRINTABLE && c <= ASCII_LAST_PRINTABLE)
            counts[c]++;
    }
}
