#include <stdio.h>
#include <stdlib.h>

#include "stats.h"

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1 || n < 0)
        return 1;

    Label *people = calloc(n, sizeof(*people));
    if (people == NULL && n != 0)
        return 1;

    for (int i = 0; i < n; i++) {
        if (scanf("%15s %d let", people[i].name, &people[i].age) != 2) {
            free(people);
            return 1;
        }
    }

    NameStats names;
    AgeStats ages;
    calcStats(people, n, &names, &ages);
    printf("names: total = %d\nnames: long = %d\nages: total = %d\nages: adult = %d\nages: kid = %d\n",
           names.cntTotal, names.cntLong, ages.cntTotal, ages.cntAdults, ages.cntKids);

    free(people);
    return 0;
}
