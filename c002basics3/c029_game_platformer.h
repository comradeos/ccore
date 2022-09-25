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
    float vertSpeed; // вертикальная скорость
} TObject; // тип данных структуры персонажа

TObject mario; // персонаж

/**
 * Задание начальной позиции персонажа
 * @param obj Указатель на объект
 * @param xPos вертикальная позиция
 * @param yPos горизонтальная позиция
 */
void setObjectPos(TObject *obj, float xPos, float yPos) {
    (*obj).x = xPos;
    (*obj).y = yPos;
}

#include <math.h> // математическая библиотека

/**
 * Отображение персонажа на карте
 * @param obj объект (персонаж)
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
 * @param xPos  позиция горизонталь
 * @param yPos позиция вертикаль
 * @param objWidth толщина
 * @param objHeight  высота
 */
void initObject(TObject *obj, float xPos, float yPos, float objWidth, float objHeight) {
    setObjectPos(obj, xPos, yPos);
    (*obj).width = objWidth;
    (*obj).height = objHeight;
    (*obj).vertSpeed = 0;
}

#include <windows.h> // для GetKeyState

/**
 * Изменение положения курсора
 * @param x горизонталь
 * @param y вертикаль
 */
void setCursor(short x, short y) { // можно также использовать int
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}




void c029_game_platformer() {

    initObject(&mario, 39,10,3,3);

    do {
        clearMap();
        putObjectOnMap(mario);
        setCursor(0,0);
        showMap();
    } while (GetKeyState(VK_ESCAPE) >= 0); // для этого нужно подключить windows.h

}