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
    float width, height;
} TObject; // тип данных структуры персонажа

TObject mario; // персонаж

/**
 * Задание начальной позиции персонажа
 */
void setObjectPos(TObject *obj, float xPos, float yPos) {
    (*obj).x = xPos;
    (*obj).y = yPos;
}

#include <math.h> // математическая библиотека

/**
 * Отображение персонажа на карте
 */
void putObjectOnMap(TObject obj) {
    int ix = (int) roundf(obj.x);
    int iy = (int) roundf(obj.y);
    int iWidth = (int) roundf(obj.width);
    int iHeight = (int) roundf(obj.height);

    for (int i = ix; i < (ix+iWidth); ++i) {
        for (int j = iy; j < (iy+iHeight); ++j) {
            map[j][i] = '@';
        }
    }
}

/**
 * Инициализация персонажа
 * @param obj объект
 * @param xPos  позиция
 * @param yPos позиция
 * @param objWidth толщина
 * @param objHeight  высота
 */
void initObject(TObject *obj, float xPos, float yPos, float objWidth, float objHeight) {
    setObjectPos(obj, xPos, yPos);
    (*obj).width = objWidth;
    (*obj).height = objHeight;
}

#include <windows.h> // для GetKeyState

/**
 *
 * @param x
 * @param y
 */
void setCursor(int x, int y) {
    COORD coord;
}

void c029_game_platformer() {

    initObject(&mario, 39,10,3,3);

    do {
        clearMap();
        putObjectOnMap(mario);
        showMap();
    } while (GetKeyState(VK_ESCAPE) >= 0); // для этого нужно подключить windows.h

}