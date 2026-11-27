#include "stats.h"
#include <string.h>

void calcStats(const Label *arr, int cnt, NameStats *oNames, AgeStats *oAges)
{
    oNames->cntTotal = cnt;
    oAges->cntTotal = cnt;
    oNames->cntLong = 0;
    oAges->cntAdults = 0;
    oAges->cntKids = 0;
    for (int i = 0; i < cnt; i++) {
        if (arr[i].age >= 18)
            oAges->cntAdults++;
        else if (arr[i].age < 14)
            oAges->cntKids++;

        if (strlen(arr[i].name) > 10)
            oNames->cntLong++;
    }
}
