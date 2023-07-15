#include "stdio.h"

typedef struct MenuItem {
    char * name;
    struct MenuItem * menuItem;
} MenuItem_t ;

MenuItem_t menu[10];
int menu_size = 0;

void addMenuItem(char * name) {
    menu[menu_size].name = name;
    ++menu_size;
}

void addSubMenuItem(int index, char * name) {
    MenuItem_t sm;
    sm.name = name;
    menu[index].menuItem = &sm;
}

void printMenu() {
    for (int i=0; i<=menu_size; ++i) {
        printf("%s\n", menu[i].name);
        if (menu[i].menuItem != NULL) {
            printf("-> %s\n", menu[i].menuItem->name);
        }
    }
}

int main() {
    addMenuItem("item1");
    addSubMenuItem(0, "subItem1");
    addMenuItem("item2");

    printMenu();
}