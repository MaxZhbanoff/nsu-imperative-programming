#include <assert.h>
#include <stdio.h>

#include "clock_time.h"

static void test_minute_rollover(void)
{
    ClockTime result = add_seconds((ClockTime){12, 34, 9}, 57);
    assert(result.hours == 12 && result.minutes == 35 && result.seconds == 6);
}

static void test_day_rollover(void)
{
    ClockTime result = add_seconds((ClockTime){23, 59, 59}, 86401);
    assert(result.hours == 0 && result.minutes == 0 && result.seconds == 0);
}

int main(void)
{
    test_minute_rollover();
    test_day_rollover();

    puts("All tests passed successfully");
    return 0;
}
