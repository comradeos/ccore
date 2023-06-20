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

    // malloc() and free()

    char inputBuffer[1024]; // size of input buffer
    char tmp[8];

    scanf("%s", inputBuffer);
    printf("%s\n", inputBuffer);

    long long int number = strtoll(inputBuffer, (char **) tmp, 10);
    printf("number is: %lld", number);
}
