//
// Created by Admin on 10/3/2022.
//

#ifndef CCORE_C039_QUEST_GAME_H
#define CCORE_C039_QUEST_GAME_H

#endif //CCORE_C039_QUEST_GAME_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>


#define width 80 // ширина окна
#define height 25  // высота окна

struct {
    char map[height][width+1];
} loc; // имя переменной структурного типа

/**
 * Процедура загрузки в локацию информации из файла.
 * @param fileName имя файла.
 */
void loc_LoadFromFile(char *fileName) {
    memset(&loc.map, ' ', sizeof(loc)); // заполнить все матрицу map символом пробела
    for (int i = 0; i < height; ++i) { // заполнить весь последний столбец символом конца строки
        loc.map[i][width] = '\0';
    }
    FILE *f = fopen(fileName, "r"); // открываем файл на чтение
    char c[80]; // переменная для хранения текущей строки заполнения локации
    int line = 0; // начинаем с нулевой строки
    while (!feof(f)) { // до конца файла
        fgets(c, width, f); // читаем каждую строку
        int cnt = strlen(c); // после чтения узнаем ее длину без символа конца строки
        if (c[cnt-1] == '\n') { // если в конце стоит символ перевода строки,
            cnt--; // то уменьшаем длину строки на 1, так как он нам не нужен
        }
        strncpy(loc.map[line], c, cnt); // после чего копируем в  текущую сроки нашей локации
        line++; // переходим на следующую строку
    }
    fclose(f); // закрываем файл
    loc.map[height-1][width-1] = '\0'; // последний символ последней строки ставим символ конца строки,
    // что бы каретка не переходила на слудеющую строку после отрисовки уровня
}


void c039_quest_game() {




}