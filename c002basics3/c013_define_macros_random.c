#include <stdio.h>
#include <stdlib.h>

// #макрос(константа) имя значение
#define cnt 5
// можно создавать идентификатор для типа 
#define celoe int

#define celoeK int k = 57;

#define anotherMacros printf("%s\n", "This is my macros!");

int main()
{
    celoe i = 7;
    printf("%d\n", cnt);
    printf("%d\n", i);
    celoeK;
    printf("%d\n", k);

    anotherMacros; // This is my macros!

    return 0;
}