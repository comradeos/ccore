#include "stdio.h"

typedef struct SubMenuItem {
    char * name;
} SubMenuItem_t ;

typedef struct MenuItem {
    char * name;
    int subMenuSize;
    SubMenuItem_t subMenuItems[10];
} MenuItem_t ;

MenuItem_t menu[10];
int size = 0;

void addMenu(char * name) {
    MenuItem_t item;
    item.name = name;
    menu[size] = item;
    ++size;
}

void addSubMenu(int index, char * name) {
    SubMenuItem_t subItem;
    subItem.name = name;
    menu[index].subMenuItems[menu[index].subMenuSize] = subItem;
    ++menu[index].subMenuSize;
}

void printMenu() {
    for (int i=0; i<size; ++i) {
        printf("- %s\n", menu[i].name);
        if (menu[i].subMenuSize > 0) {
            for (int j=0; j<menu[i].subMenuSize; ++j) {
                printf("--- %s\n", menu[i].subMenuItems[j]);
            }
        }
    }
}

int main() {
    addMenu("Courses");
    addSubMenu(0, "New");
    addSubMenu(0, "All");
    addMenu("Practice");
    addMenu("Program");
    addSubMenu(1, "Build");
    addSubMenu(1, "Deploy");
    addSubMenu(1, "Update");
    printMenu();
    return 0;
}