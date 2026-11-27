#ifndef DATE_TIME_H
#define DATE_TIME_H

typedef struct DateTime_s {
    int year, month, day;
    int hours, minutes, seconds;
} DateTime;

DateTime min(const DateTime *arr, int cnt);

#endif
