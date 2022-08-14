#include <stdio.h>
#include <stdlib.h>


int main() {
    int a = 1;
    int b = 1;
    
    a += ++b + ++b;
    printf("a = %d, b = %d\n", a, b); // a = 7, b = 3


    // do
    // {
    //     scanf("%d", &a);
    //     printf("a = %d\n", a);
    // } while (a != 7);
    

    for (size_t i = 2; i <= 18; i++) {
        if (i%2 == 0) {
            printf("%I64d ", i);
        }
    }
    printf("\n");    

    int i = 1;
    do {
        i++;
        if (i % 2 != 0) {
            continue;
        }
        printf("%d ", i);
    } while (i <= 18);
    printf("\n");  

    i = 1;
    while (i <= 18) {
        i++;
        if (i % 2 != 0) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");    


    char myString[8];
    for (size_t i = 0; i < 8; i++) {
        myString[i] = '#';
    }
    
    printf("%s\n", myString);

    for (size_t i = 0; i < 8; i++) {
        printf("%c ", myString[i]);
    }


    i = 0;
    while (myString[i] != '\0')
    {
        printf("%c\n", myString[i]);
        i++;
    }
    
    return 0;
}
