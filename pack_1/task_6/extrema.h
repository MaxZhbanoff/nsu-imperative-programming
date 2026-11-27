#ifndef EXTREMA_H
#define EXTREMA_H

typedef struct {
    int min_index, max_index;
} Extrema;

Extrema find_extrema(const int values[], int count);

#endif
