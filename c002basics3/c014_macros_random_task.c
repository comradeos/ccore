#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CONST 10 // 1

int main()
{
    printf("%d", CONST); // 1

    
    int array[CONST]; // 2
    for (size_t i = 0; i < CONST; i++) 
    {
        array[i] = i + 1; // 2
    }
    
    printf("\n");

    for (size_t i = 0; i < CONST; i++)
    {
        printf("%d ", array[i]); // 2
    }

    printf("\n");




    srand(time(NULL)); // 3
    int randomNumber = (rand() % (20 - 10 + 1)) + 10;  
    printf("%d ", randomNumber);

    
    
    
    return 0;
}