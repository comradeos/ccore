#include <stdio.h>
#include <stdlib.h>

int get5() {
    return 5;
}

void c030_pointer_on_function() {
    int (*func)(); // func - имя указателя на функцию, int говорит о том что указатель должен указывать на функцию которая возвращает целый тип
    printf("%d\n", get5());
}