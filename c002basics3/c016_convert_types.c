#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int intNumber = 7;                  // целое число
    printf("%d\n", intNumber);          // отобразить как целое число
    printf("%.2f\n", (float)intNumber); // отобразить как дробное число, с 2мя знаками после запятой

    float floatNumber = 5.2;          // дробное число
    printf("%.2f\n", floatNumber);    // отобразить как дробное число
    printf("%d\n", (int)floatNumber); // отобразить как целое число

    printf("%d\n", (int)round(floatNumber)); // отобразить как целое число

    printf("------------------------\n");

    // преобразовать число в строку
    float fnumber = 23.13; // создаем число
    int inumber = 73;      // создаем число

    char str[10]; // создаем строку

    sprintf(str, "%.2f", fnumber); // преобразуем число в строку, способ 1
    printf("%s\n", str);           // выводим строку

    sprintf(str, "%i", inumber); // преобразуем число в строку, способ 1
    printf("%s\n", str);         // выводим строку

    printf("------------------------\n");

    gcvt(fnumber, 4, str); // преобразуем число в строку, способ 2
    printf("%s\n", str);   // выводим строку

    itoa(inumber, str, 10); // преобразуем число в строку, способ 2
    printf("%s\n", str);    // выводим строку

    return 0;
}
