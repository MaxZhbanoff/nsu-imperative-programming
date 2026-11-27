#ifndef DIVISION_H
#define DIVISION_H

typedef struct {
    int down, up, quotient, remainder;
} Division;

Division divide(int a, int b);

#endif
