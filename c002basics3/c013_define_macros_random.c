#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// #макрос имя значение
#define cnt 5
// можно создавать идентификатор для типа 
#define celoe int

#define celoeK int k = 57;

#define anotherMacros printf("%s\n", "This is my macros!");

int main()
{
    celoe a = 7;
    printf("%d\n", cnt);
    printf("%d\n", a);
    
    celoeK;
    printf("%d\n", k);

    anotherMacros; // This is my macros!

    printf("%s\n", "--------------------------------");



// случайные числа
    int i;

    printf("%I64i\n", time(NULL));

    srand(time(NULL));
    i = rand(); // 0 - 32767
    printf("%d\n", i % 18);

    i = rand();
    printf("%d\n", i % 18);

    i = rand();
    printf("%d\n", i % 18);


    return 0;
}