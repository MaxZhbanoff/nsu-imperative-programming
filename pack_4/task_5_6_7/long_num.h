#pragma once

#define MAX_LONG_NUM_LEN 4000

/**
 * Структура представляющая длинное целое неотрицательное число.
 */
typedef struct LongNum_s
{
    // количество цифр в числе
    int len;
    // массив цифр числа от младшего разряда к старшему
    int arr[MAX_LONG_NUM_LEN];
} LongNum;

/**
 * Создать длинное число из обычного числа
 */
LongNum makeLongNum(int x);

/**
 * Вычислить сумму двух длинных чисел
 */
LongNum sumLongNum(const LongNum *x, const LongNum *y);

/**
 * Перемножить длинное число на целое число
 */
LongNum multiLongIntNum(const LongNum *x, int y);

/**
 * Перемножить два длинных числа
 */
LongNum multiLongLongNum(const LongNum *x, const LongNum *y);

/**
 * Печатает длинное число на экран
 */
void printLong(const LongNum * x);

/**
 * Считывает длинное число с клавиатуры
 */
LongNum readLongNum();

/**
 * Получить значение числа
 */
long long getValue(const LongNum *a);
