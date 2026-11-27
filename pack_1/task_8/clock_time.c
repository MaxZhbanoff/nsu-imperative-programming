#include "clock_time.h"

ClockTime add_seconds(ClockTime time, long long seconds)
{
    const int seconds_per_day = 86400;
    int total = (time.hours * 3600 + time.minutes * 60 + time.seconds
                 + seconds % seconds_per_day) % seconds_per_day;
    if (total < 0)
        total += seconds_per_day;

    ClockTime result = {total / 3600, total / 60 % 60, total % 60};
    return result;
}
