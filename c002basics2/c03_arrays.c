// gcc -o app.exe -Wall c03_arrays.c && app.exe

#include <stdio.h>

int main()
{
    int array[] = {1, 2, 3};
    array[0] = 56;
    printf("%d\n", array[0]);

    char word[] = "hello";
    printf("%s\n", word);
    printf("%c\n", word[0]);
    
    return 0;
}
