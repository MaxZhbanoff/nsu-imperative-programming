#include "words.h"

static int is_separator(const char c, const char *sep)
{
    while (*sep != 0)
    {
        if (c == *sep)
        {
            return 1;
        }
        sep++;
    }
    return 0;
}

/**
 * вырезает подслово и возвращает его начало и конец
 * @param s входная строка
 * @param start начало слова
 * @param end конец слова + 1 или конец строки
 * @param sep разделители
 * @return 1 если слово найдено, 0 если строка закончилась и слово не найдено
 */
int extract(const char *s, int *const start, int *const end, const char *const sep)
{
    *start = -1;
    int i = 0;
    while (*s != 0)
    {
        if (!is_separator(*s, sep))
        {
            if (*start < 0)
            {
                *start = i;
            }
        }
        else
        {
            if (*start >= 0)
            {
                *end = i;
                return 1;
            }
        }
        i++;
        s++;
    }
    *end = i;
    return *start >= 0;
}
