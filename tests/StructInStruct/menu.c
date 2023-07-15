#include "stdio.h"

typedef struct MenuItem {
    char * name;
    struct MenuItem * menuItem;
} MenuItem_t ;

MenuItem_t menu[10];
int menu_size = 0;

void addMenuItem(char * name) {
    menu[menu_size].name = name;
}

void printMenu() {
    for (int i=0; i<=menu_size; ++i) {
        printf("%s\n", menu[i].name);
    }
}

int main() {
    addMenuItem("item1");
    printMenu();
}