#ifndef HISTOGRAM_H
#define HISTOGRAM_H

#include <stdio.h>

enum { ASCII_FIRST_PRINTABLE = 32, ASCII_LAST_PRINTABLE = 126 };

void count_characters(FILE *input, size_t counts[ASCII_LAST_PRINTABLE + 1]);

#endif
