#include <stdio.h>

#include "clock_time.h"

int main(void)
{
    ClockTime time;
    long long seconds;
    if (scanf("%d %d %d %lld", &time.hours, &time.minutes, &time.seconds, &seconds) != 4)
        return 1;

    time = add_seconds(time, seconds);
    printf("%d %d %d\n", time.hours, time.minutes, time.seconds);
    return 0;
}
