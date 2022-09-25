#include <stdio.h>
#include <stdlib.h>
#include <math.h> // математическая библиотека
#include <windows.h> // для GetKeyState

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
TObject brick[1]; // кирпич, делаем сразу массив кирпичей что бы легче было добавлять новые

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

/**
 * Проверяет попадпет ли координата в пределы карты
 * @param x горизонталь
 * @param y вертикаль
 * @return true/false
 */
BOOL isPosInMap(int x, int y) {
    return ((x >= 0)  && (x < mapWidth) && (y >=0 ) && (y < mapHeight));
}

/**
 * Отображение персонажа на карте
 * @param obj объект
 */
void putObjectOnMap(TObject obj) {
    int ix = (int) roundf(obj.x);
    int iy = (int) roundf(obj.y);
    int iWidth = (int) roundf(obj.width);
    int iHeight = (int) roundf(obj.height);

    for (int i = ix; i < (ix+iWidth); ++i) {
        for (int j = iy; j < (iy+iHeight); ++j) {
            if (isPosInMap(ix, iy)) {
                map[j][i] = '@';
            }
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

BOOL isCollision(TObject obj1, TObject obj2); // говорим компилятору что такая функция существует, но будет описана ниже

/**
 * Пересчитывает скорость и изменяет вертикально место положения объекта
 * @param obj указатель или объект
 */
void vertMoveObject(TObject *obj) {
    (*obj).vertSpeed += (float) 0.05; // ускорение
    setObjectPos(obj, (*obj).x, (*obj).y + (*obj).vertSpeed);
    if (isCollision(*obj, brick[0])) {

    }
}

/**
 * Проверка на столкновение
 * @param obj1 первый объект
 * @param obj2 второй объект
 * @return true/false
 */
BOOL isCollision(TObject obj1, TObject obj2) {
    return ((obj1.x + obj1.width) > obj2.x) && (obj1.x < (obj2.x + obj2.width)) &&
           ((obj1.y + obj1.height) > obj2.y) && (obj1.y < (obj2.y + obj2.height));
}

void c029_game_platformer() {

    initObject(&mario, 39,10,3,3);
    initObject((TObject *) &brick, 20, 20, 40, 5);

    do {
        clearMap();
        vertMoveObject(&mario);
        putObjectOnMap(brick[0]);
        putObjectOnMap(mario);

        setCursor(0,0);
        showMap();
//        Sleep(10);
    } while (GetKeyState(VK_ESCAPE) >= 0); // для этого нужно подключить windows.h

}