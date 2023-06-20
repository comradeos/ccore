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
    // ALGOL 60 (Algorithmic Language 1960)
    // BASIC (Beginners' All-purpose Symbolic Instruction Code) 1964
    // BCPL (Basic Combined Programming Language) 1967 / B 1969
    // PASCAL 1970
    // C 1972
    // C++ 1985

    // malloc() and free()

    char inputBuffer[1024]; // size of input buffer
    char * tmp;

    scanf("%s", inputBuffer);
    printf("%s\n", inputBuffer);

    long long int number = strtoll(inputBuffer, &tmp, 10);
    printf("number is: %lld", number);
}
