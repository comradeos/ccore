// gcc -o app.exe -Wall c06_switch_case.c && app.exe

#include <stdio.h>

int main(int argc, char * argv[])
{
    int x = 7;
    switch (x)
    {
    case 1:
        printf("one \n");
        break;
    case 2:
        printf("two \n");
        break;
    case 3:
        printf("three \n");
        break;
    default:
        printf("out of variants \n");
        break;
    }
    
    return 0;
}
