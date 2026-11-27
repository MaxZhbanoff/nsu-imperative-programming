#include <assert.h>
#include <stdio.h>

#include "date_time.h"

static void test_earliest_date(void)
{
    const DateTime dates[] = {
        {2018, 8, 12, 23, 44, 13}, {2019, 1, 1, 0, 0, 0},
        {2018, 2, 13, 13, 1, 7}, {2018, 2, 13, 13, 1, 8}
    };
    DateTime result = min(dates, 4);
    assert(result.year == 2018 && result.month == 2 && result.day == 13);
    assert(result.hours == 13 && result.minutes == 1 && result.seconds == 7);
}

static void test_single_date(void)
{
    const DateTime date = {2020, 1, 31, 0, 0, 0};
    assert(min(&date, 1).day == 31);
}

int main(void)
{
    test_earliest_date();
    test_single_date();

    puts("All tests passed successfully");
    return 0;
}
