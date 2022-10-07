#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>


#define width 80 // ширина окна
#define height 25  // высота окна

struct {
    char map[height][width+1];
    POINT sz;
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
        if (cnt > loc.sz.x) loc.sz.x = cnt;
    }
    fclose(f); // закрываем файл
    loc.map[height-1][width-1] = '\0'; // последний символ последней строки ставим символ конца строки,
    // что бы каретка не переходила на слудеющую строку после отрисовки уровня
}


char gmap[height][width+1]; // карта



/**
 * Установить курсор в позицию 0, 0.
 */
void SetCurPos() {
    COORD coord;
    coord.X = 0;
    coord.Y = 0;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}



/**
 * Отображение карты на экране.
 */
void map_Show() {
    SetCurPos();
    for (int i = 0; i < height; ++i) {
        printf("%s", gmap[i]);
    }
}

/**
 * Скопировать локацию в карту.
 */
void loc_PutOnMap() {
    memcpy(gmap, loc.map, sizeof(gmap));
}


struct { // структура игрока
    POINT pos;
    POINT locPos;
    char name[20];
} player;


/**
 * Инициаоизация игрока.
 * @param x координата.
 * @param y координата.
 */
void player_Init(int xLoc, int yLoc, int x, int y, char *name) {
    player.pos.x = x;
    player.pos.y = y;
    player.locPos.x = xLoc;
    player.locPos.y = yLoc;
    sprintf(player.name, "%s", name);
}

/**
 * Поместить игрока на карту.
 */
void player_PutOnMap() {
    gmap[player.pos.y][player.pos.x] = 'A';
}


/**
 * Перемещение персонажа.
 */
void player_Control() {
    POINT old = player.pos;
    if (GetKeyState('W') < 0) player.pos.y--;
    if (GetKeyState('S') < 0) player.pos.y++;
    if (GetKeyState('A') < 0) player.pos.x--;
    if (GetKeyState('D') < 0) player.pos.x++;
    if (gmap[player.pos.y][player.pos.x] != ' ') {
        player.pos = old;
    }
}

/**
 * Сохраняет данные игрока в файл.
 */
void player_Save() {
    FILE *f = fopen(player.name, "wb");
        fwrite(&player, 1, sizeof(player), f);
    fclose(f);
}

/**
 * Загружает данные игрока из файла.
 */
void player_Load(char *name) {
    FILE *f = fopen(name, "rb");
    if (f == NULL) {
        // если файл не найден - создать игрока на позиции 5, 5
        player_Init(0,0, 5,5, name);
    } else {
        fread(&player, 1, sizeof(player), f);
    }
    fclose(f);
}

/**
 * процедура загрузки новой локации в зависимости от новой переменной.
 */
void player_LoadLocation() {
    char c[100];
    sprintf(c, "map_%ld_%ld.txt", player.locPos.x, player.locPos.y);
    loc_LoadFromFile(c);
}

void c039_quest_game() {

    player_Load("Iaroslav");
    player_LoadLocation();

    do {
        player_Control();
        loc_PutOnMap();
        player_PutOnMap();
        map_Show();
        // Sleep(50);
    } while (GetKeyState(VK_ESCAPE) >= 0);

    player_Save();

// https://youtu.be/jucHXihq1Xs?t=308

}