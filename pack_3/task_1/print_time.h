#pragma once

/**
 * Печатает время в формате HH:MM:SS в выходной буфе
 * @param buf буфер в который нужно печатать время - должен быть заранее аллоцирован
 */
void printTime(char *const buf, const int h, const int m, const int s);