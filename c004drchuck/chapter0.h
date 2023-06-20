//
// Created by comradeos on 20/06/2023.
//

#ifndef C004DRCHUCK_CHAPTER0_H
#define C004DRCHUCK_CHAPTER0_H

#endif //C004DRCHUCK_CHAPTER0_H

#include "stdio.h"
#include "stdlib.h"

void chapter0() {
    printf("chapter0: \n");

    // malloc / free
    char buffer[10];
    char * tmp;

    printf("Enter number of elements: ");
    scanf("%s", buffer);

    long int number = strtol(buffer, &tmp, 10);

    printf("Number is %ld", number);
}
