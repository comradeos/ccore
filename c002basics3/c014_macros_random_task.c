#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CONST 10 // 1

int main()
{
    printf("%d", CONST); // 1
    int array[CONST]; // 2
    for (size_t i = 0; i < CONST; i++) {
        array[i] = i + 1; // 2
    }
    printf("\n");
    for (size_t i = 0; i < CONST; i++) {
        printf("%d ", array[i]); // 2
    }
    printf("\n");



    // random between 10 and 19
    srand(time(NULL)); // 3
    int randomNumber = (rand() % (19 - 10 + 1)) + 10; // 3
    printf("%d ", randomNumber); // 3

    

    srand(time(NULL)); // 4
    int anotherRandomNumber; // 4
    for (size_t i = 0; i < CONST; i++) {
        anotherRandomNumber = (rand() % (39 - 20 + 1)) + 20; // 4
        array[i] = anotherRandomNumber; // 4
    }
    printf("\n");
    for (size_t i = 0; i < CONST; i++) {
        printf("%d ", array[i]); // 4 s
    }
    printf("\n");

    return 0;
}