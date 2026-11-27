#include <stdio.h>
#include <string.h>

#include "read_time.h"

int main(void)
{
    char line[18];
    if (fgets(line, sizeof(line), stdin) == NULL)
        return ferror(stdin) != 0;

    line[strcspn(line, "\r\n")] = '\0';

    int hours, minutes, seconds;
    int result = readTime(line, &hours, &minutes, &seconds);
    printf("%d %d %d %d\n", result, hours, minutes, seconds);

    result = readTime(line, &hours, &minutes, NULL);
    printf("%d %d %d\n", result, hours, minutes);

    result = readTime(line, &hours, NULL, NULL);
    printf("%d %d\n", result, hours);
    return 0;
}
