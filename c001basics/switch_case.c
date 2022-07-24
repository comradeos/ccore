#include <stdio.h>

int main(int argc, char *argv[])
{
    int x;
    printf("Input x: ");
    scanf("%d", &x);

    switch(x)
    {
        case 1: printf("One\n");
                break; // обязательный break
        case 3: printf("Tree\n");
                break;
        case 5: printf("Five\n");
                break;
        case 7: printf("Seven\n");
                break;
        default: printf("I don't know this number\n");
    }; // точка с запятой также обязательна
    return 0;
}

/*

clear && gcc -o switch_case.exe -Wall switch_case.c && switch_case.exe

*/