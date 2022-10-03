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
    memset(&loc, ' ', sizeof(loc));
    for (int i = 0; i < height; ++i) {
        loc.map[i][width] = '\0';
    }
    FILE *f = foper('');
}


void c039_quest_game() {
    CreateDirectoryA("c039_quest_game", NULL); // создать папку




}