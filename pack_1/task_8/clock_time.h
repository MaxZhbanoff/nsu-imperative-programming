#ifndef CLOCK_TIME_H
#define CLOCK_TIME_H

typedef struct {
    int hours, minutes, seconds;
} ClockTime;

ClockTime add_seconds(ClockTime time, long long seconds);

#endif
