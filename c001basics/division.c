#include <stdio.h>

int main(int argc, char *argv[])
{
    int x = -12345;
    while (x != 0)
    {
        printf("%d %d\n", x/10, x%10);
        x /= 10;
    }

    /*

    -1234 -5
    -123 -4
    -12 -3
    -1 -2
    0 -1

    */
    
    double y = 1.0/2.0; // точкой сообщаем тип float (double)
    printf("\n%f\n\n", y);

    int yd, zd;
    yd = 1;
    printf("yd=%d\n", yd++);
    zd = yd+1;
    printf("zd=%d\n", zd);

    double xd;
    xd = (double)yd / (double)zd;
    printf("%f\n", xd);
    return 0;
}

/*

clear && gcc -o division.exe -Wall division.c && division.exe 

*/