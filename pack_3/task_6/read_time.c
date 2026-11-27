#include "read_time.h"

#include <stddef.h>

static int read_component(const char **cursor)
{
    const char *p = *cursor;
    if (*p < '0' || *p > '9')
        return -1;

    int value = *p++ - '0';
    if (*p >= '0' && *p <= '9')
        value = value * 10 + (*p++ - '0');

    *cursor = p;
    return value;
}

int readTime(char *iStr, int *oHours, int *oMinutes, int *oSeconds)
{
    const char *cursor = iStr;
    int hours = read_component(&cursor);
    int minutes = -1;
    int seconds = 0;

    if (*cursor == ':') {
        cursor++;
        minutes = read_component(&cursor);
        if (*cursor == ':') {
            cursor++;
            seconds = read_component(&cursor);
        }
    }

    int valid = *cursor == '\0' && hours >= 0 && hours <= 23 &&
                minutes >= 0 && minutes <= 59 && seconds >= 0 && seconds <= 59;
    if (oHours != NULL)
        *oHours = valid ? hours : -1;
    if (oMinutes != NULL)
        *oMinutes = valid ? minutes : -1;
    if (oSeconds != NULL)
        *oSeconds = valid ? seconds : -1;

    return valid;
}
