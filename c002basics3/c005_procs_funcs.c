#include <stdio.h>
#include <stdlib.h>

void procedure1()
{
    printf("Hello, procedure1!\n");
    printf("www\n");
    printf("123\n");
}

int function1()
{
    printf("function1\n");
    return 7; 
}

void home1(int x)
{
    if (x < 10) {
        printf("%d\n", x);
    } else {
        printf("error\n");
    }
}

int home2(int a, int b)
{
    if (a > b) {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    printf("Hello, world!\n");
    procedure1();
    function1();

    int x = function1();
    printf("%d\n", x);

    home1(5);
    home1(15);
    home1(home2(5,2));
    home1(home2(2,5));

    return 0;
}


