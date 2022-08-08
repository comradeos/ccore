// gcc -o app.exe -Wall c06_switch_case.c && app.exe

#include <stdio.h>
#include <assert.h>

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
        printf("out of variants3 \n");
        break;
    }

    assert(x == 6);
    printf("1\n");
    
    return 0;
}
