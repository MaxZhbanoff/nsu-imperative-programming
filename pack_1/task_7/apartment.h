#ifndef APARTMENT_H
#define APARTMENT_H

typedef struct {
    int entrance, floor;
} Location;

Location locate_apartment(int n, int m, int p, int k, int floors);

#endif
