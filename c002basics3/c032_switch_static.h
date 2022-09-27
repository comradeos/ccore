//
// Created by Admin on 9/27/2022.
//

#ifndef CCORE_C032_SWITCH_STATIC_H
#define CCORE_C032_SWITCH_STATIC_H

#endif //CCORE_C032_SWITCH_STATIC_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int getInt() {
    static int i = 0;
    return i++;
}

void c032Tasks();

void c032_switch_static() {
    int val = 3;
    switch(val) {
        case 1:
        case 3:
        case 5:
        case 7:
            printf("777\n");
            break;
        case 6:
            printf("666\n");
            break;
        default:
            printf("default\n");
            break;
    }


    printf("%d\n", getInt());
    printf("%d\n", getInt());
    printf("%d\n", getInt());
    printf("\n");

    c032Tasks();
}

void c032Tasks() {
    /*
    * при помощи генератора случайных чисел и оператора switch напишите программу,
    * которая будет советовать вам, какой фильм сегодня посмотреть.
    */
    srand(time(NULL));
    int num = (rand() % (5 - 1 + 1)) + 1;

    switch (num) {
        case 1:
            printf("Rick and Morty\n");
            break;
        case 2:
            printf("Adventure Time\n");
            break;
        case 3:
            printf("Gravity Falls\n");
            break;
        case 4:
            printf("Family Guy\n");
            break;
        case 5:
            printf("South Park\n");
            break;
        default:
            printf("I don't know\n");
            break;
    }


}