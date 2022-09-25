#include <stdio.h>
#include <stdlib.h>

// параметры игрового поля (окна)
#define mapWidth 80 // ширина
#define mapHeight 25 // высота

char map[mapHeight][mapWidth+1]; // игровое поле

/**
 * Очистить игровое поле
 */
void clearMap() {
    for (int i=0; i<mapWidth; i++) {
        map[0][i] = '.';
    }
    map[0][mapWidth] = '\0'; // символ конца строки

    for (int i = 1; i < mapHeight; ++i) {
        sprintf(map[i], "%s", map[0]); // копировать строку
    }
}

/**
 * Отобразить игровое поле
 */
void showMap() {
    map[mapHeight-1][mapWidth-1] = '\0';
    for (int i = 0; i < mapHeight; ++i) {
        printf("%s",map[i]);
    }
}

typedef struct SObject {
    float x,y;
} TObject; // тип данных структуры персонажа

TObject mario; // персонаж







void c029_game_platformer() {
    clearMap();
    showMap();
}