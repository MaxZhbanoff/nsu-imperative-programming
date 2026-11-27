#include <stdio.h>

#include "long_num.h"

LongNum makeLongNum(int x)
{
    LongNum a;
    a.len = 0;
    if (x == 0)
    {
        a.arr[0] = 0;
        a.len = 1;
    }
    while (x != 0)
    {
        a.arr[a.len] = x % 10;
        a.len++;
        x /= 10;
    }
    return a;
}

LongNum sumLongNum(const LongNum *const x, const LongNum *const y)
{
    LongNum res;
    int k = (x->len > y->len) ? x->len : y->len;
    int carry = 0;

    for (int i = 0; i < k; i++)
    {
        int a = (i < x->len) ? x->arr[i] : 0;
        int b = (i < y->len) ? y->arr[i] : 0;
        int s = a + b + carry;
        res.arr[i] = s % 10;
        carry = s / 10;
    }

    if (carry != 0)
    {
        res.arr[k] = carry;
        res.len = k + 1;
    }
    else
    {
        res.len = k;
    }
    return res;
}

LongNum multiLongIntNum(const LongNum *const x, const int y)
{
    LongNum res;
    if (y == 0)
    {
        res.len = 1;
        res.arr[0] = 0;
        return res;
    }
    int k = x->len;
    int carry = 0;
    for (int i = 0; i < k; i++)
    {
        int s = x->arr[i] * y + carry;
        res.arr[i] = s % 10;
        carry = s / 10;
    }
    int len = k;
    while (carry != 0)
    {
        res.arr[len++] = carry % 10;
        carry /= 10;
    }
    res.len = len;
    return res;
}

LongNum multiLongLongNum(const LongNum *const x, const LongNum *const y)
{
    LongNum res = makeLongNum(0);
    if ((x->len == 1 && x->arr[0] == 0) ||
        (y->len == 1 && y->arr[0] == 0))
        return res;

    for (int j = 0; j < y->len; j++)
    {
        if (y->arr[j] == 0)
            continue;
        LongNum part = multiLongIntNum(x, y->arr[j]);
        for (int k = part.len - 1; k >= 0; k--)
            part.arr[k + j] = part.arr[k];
        for (int k = 0; k < j; k++)
            part.arr[k] = 0;
        part.len += j;
        res = sumLongNum(&res, &part);
    }
    return res;
}

void printLong(const LongNum *const x)
{
    for (int i = x->len - 1; i >= 0; i--)
    {
        printf("%d", x->arr[i]);
    }
    printf("\n");
}

LongNum readLongNum()
{
    LongNum a;
    a.len = 0;
    int c;
    do
    {
        c = getchar();
    } while (c == ' ' || c == '\n' || c == '\r' || c == '\t');

    while (c >= '0' && c <= '9')
    {
        a.arr[a.len++] = c - '0';
        c = getchar();
    }
    for (int i = 0, j = a.len - 1; i < j; i++, j--)
    {
        int t = a.arr[i];
        a.arr[i] = a.arr[j];
        a.arr[j] = t;
    }
    if (a.len == 0)
    {
        a.arr[0] = 0;
        a.len = 1;
    }
    while (a.len > 1 && a.arr[a.len - 1] == 0)
        a.len--;

    return a;
}

long long getValue(const LongNum *a)
{
    long long res = 0;
    for (int i = a->len - 1; i >= 0; i--)
    {
        res *= 10;
        res += a->arr[i];
    }
    return res;
}
