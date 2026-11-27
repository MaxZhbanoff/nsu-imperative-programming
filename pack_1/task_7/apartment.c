#include "apartment.h"

Location locate_apartment(int n, int m, int p, int k, int floors)
{
    for (int units = 1; units <= 500; units++) {
        int per_entrance = floors * units;
        if ((m - 1) / per_entrance + 1 == p &&
            (m - 1) % per_entrance / units + 1 == k) {
            Location result = {
                (n - 1) / per_entrance + 1,
                (n - 1) % per_entrance / units + 1
            };
            return result;
        }
    }

    Location unknown = {0, 0};
    return unknown;
}
