#include <stdio.h>

#include "print_time.h"

void printTime(char *const buf, const int h, const int m, const int s)
{
    sprintf(buf, "%02d:%02d:%02d", h, m, s);
}
