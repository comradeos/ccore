//
// Created by Admin on 9/27/2022.
//

#ifndef CCORE_C032_SWITCH_STATIC_H
#define CCORE_C032_SWITCH_STATIC_H

#endif //CCORE_C032_SWITCH_STATIC_H

#include <stdio.h>
#include <stdlib.h>


int getInt() {
    static int i = 0;
    return i++;
}

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
}