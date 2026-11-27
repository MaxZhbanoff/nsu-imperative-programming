#include "date_time.h"

static DateTime get_earlier(DateTime a, DateTime b) {
    if (a.year != b.year) { return a.year < b.year ? a : b; }
    if (a.month != b.month) { return a.month < b.month ? a : b; }
    if (a.day != b.day) { return a.day < b.day ? a : b; }
    if (a.hours != b.hours) { return a.hours < b.hours ? a : b; }
    if (a.minutes != b.minutes) { return a.minutes < b.minutes ? a : b; }
    if (a.seconds != b.seconds) { return a.seconds < b.seconds ? a : b; }
    return a;
}

DateTime min(const DateTime *arr, int cnt) {
    DateTime q = arr[0];
    for (int i = 1; i < cnt; i++) {
        q = get_earlier(q, arr[i]);
    }
    return q;
}
