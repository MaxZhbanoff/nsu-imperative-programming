#include <stdio.h>

#include "convert.h"

void convert(const int p, const int q, FILE * in, FILE * out) {
    char alpha[62] = {
    '0','1','2','3','4','5','6','7','8','9',
    'a','b','c','d','e','f','g','h','i','j','k','l','m',
    'n','o','p','q','r','s','t','u','v','w','x','y','z',
    'A','B','C','D','E','F','G','H','I','J','K','L','M',
    'N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char dec_value[256] = {0};
    for (int i = 0; i < 62; i++)
    {
        dec_value[(unsigned char)alpha[i]] = i;
    }

    int n_dec = 0;
    while(1) {
        char symbol;
         if (fscanf(in, "%c", &symbol) != 1) {
            break; 
        }

        if (symbol == '\n' || symbol == '\r' || symbol == ' ' || symbol == '\0') {
            break;
        }

        n_dec *= p;
        n_dec += dec_value[(unsigned char)symbol];
    }

    if (n_dec == 0) {
        fprintf(out, "0");
        return;
    }

    char result_buffer[64];
    int count = 0;
    while (n_dec > 0) {
        result_buffer[count++] = alpha[n_dec % q];
        n_dec /= q;
    }
    for (int i = count - 1; i >= 0; i--) {
        fprintf(out, "%c", result_buffer[i]);
    }
}
