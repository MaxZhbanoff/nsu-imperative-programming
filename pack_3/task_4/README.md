# Задача 4. Сколько буков
Требуется реализовать функцию, которая будет определять, сколько в строке больших букв, маленьких букв и цифр. Функция должна иметь сигнатуру:
``` c
int calcLetters(char *iStr, int *oLowerCnt, int *oUpperCnt, int *oDigitsCnt);
```
Здесь $iStr$ — указатель на начало строки, завершающейся нулевым символом. Параметры $oLowerCnt$, $oUpperCnt$ и $oDigitsCnt$ выходные: вызывающий передаёт в них указатель на какие-нибудь локальные переменные, чтобы получить в них соответствующий результат. Функция возвращает длину строки $iStr$, в переменную $*oLowerCnt$ нужно записать количество маленьких букв, в $*oUpperCnt$ записать количество больших букв, а в $*oDigitsCnt$ записать количество цифр.
В качестве тестовой задачи нужно прочитать все строки файла и распечатать статистику для каждой из них.
## Формат ввода
Строки файла могут содержать любые печатаемые символы ASCII, включая пробелы (коды от 32 до 126 включительно). Поэтому рекомендуется использовать $gets$ для чтения строк.
Длина любой строки не превышает 100, строки могут быть пустыми. Учтите, что последняя строка файла также завершается символом перевода строки.
## Формат вывода
Для каждой строки входного файла выведите статистику ровно в том же формате, как в примере выходных данных.
## Пример 1
**Ввод:** 
/*C-style comments can contain
multiple lines*/ /*or just one*/
// C++-style comment lines
int main() { 
   // The below code wont be run
   //return 1;
   return 0; //this will be run 
}
**Вывод:** 
Line 1 has 30 chars: 24 are letters (23 lower, 1 upper), 0 are digits.
Line 2 has 32 chars: 22 are letters (22 lower, 0 upper), 0 are digits.
Line 3 has 26 chars: 18 are letters (17 lower, 1 upper), 0 are digits.
Line 4 has 12 chars: 7 are letters (7 lower, 0 upper), 0 are digits.
Line 5 has 31 chars: 21 are letters (20 lower, 1 upper), 0 are digits.
Line 6 has 13 chars: 6 are letters (6 lower, 0 upper), 1 are digits.
Line 7 has 30 chars: 19 are letters (19 lower, 0 upper), 1 are digits.
Line 8 has 1 chars: 0 are letters (0 lower, 0 upper), 0 are digits.

---
**ЖБАНОВ МАКСИМ ЕВГЕНЬЕВИЧ**