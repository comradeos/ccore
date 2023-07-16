#include <stdio.h>
#include <stdlib.h>

#define MAX_MENU_ITEMS 100

typedef struct MenuItem
{
    char *name;
    struct MenuItem
*sub_menu;    
} MenuItem;

MenuItem
menu[MAX_MENU_ITEMS];
int menu_size =0;

void add_menu_item(char *name) {
    menu[menu_size].sub_menu = NULL;
    menu_size++;
}

void add_sub_menu_item(int parent_index, char *name) {
    if (parent_index >= 0 && parent_index <menu_size) {
        if (menu[parent_index].sub_menu == NULL) {
            menu[parent_index].sub_menu = (MenuItem *)
            malloc(sizeof(MenuItem) * MAX_MENU_ITEMS);
        } 
        int i = 0;
        while (menu[parent_index].sub_menu[i].name != NULL) {
            i++;
        }
        menu[parent_index].sub_menu[i].name = name;
        menu[parent_index].sub_menu[i].sub_menu = NULL;
    }
}

void print_menu(MenuItem*menu, int level) {
    for (int i = 0; i < level; i++) {
        printf("  ");
    }
    printf("- %s\n", menu->name);
    if (menu->sub_menu != NULL) {
        for (int i = 0; menu->sub_menu[i].name != NULL; i++) {
            print_menu(&menu->sub_menu[i], level + 1);
        }
        
    }
    
}

int main() {

    add_menu_item("File");
        add_sub_menu_item(0 , "New");
        add_sub_menu_item(0 , "Open");
        add_sub_menu_item(0 , "Save");
        add_sub_menu_item(0 , "Exit");
    
    add_menu_item("Edit");
        add_sub_menu_item(0 , "Cut");
        add_sub_menu_item(0 , "Copy");
        add_sub_menu_item(0 , "Paste");
    
    printf("Menu:\n");
    for (int i = 0; i < menu_size; i++) {
        print_menu(&menu[i], 0);
    }

    return 0;
}