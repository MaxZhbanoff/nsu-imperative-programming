#ifndef STATS_H
#define STATS_H

typedef struct Label_s {
    char name[16];
    int age;
} Label;

typedef struct NameStats_s {
    int cntTotal;
    int cntLong; 
} NameStats;

typedef struct AgeStats_s {
    int cntTotal; 
    int cntAdults;
    int cntKids; 
} AgeStats;

void calcStats(const Label *arr, int cnt, NameStats *oNames, AgeStats *oAges);

#endif
