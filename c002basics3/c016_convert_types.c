#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int randomBetween(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}




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

    printf("------------------------\n");




    // преобразовать строку в число (целое)
    char string[50] = "123"; // строка
    int intNum; // переменна для хранения числа
    intNum = atoi(string); // преобразовать строку в число 
    printf("%d\n", intNum); // вывести число


    // преобразовать строку в число (дробное)
    char string2[50] = "23.12"; // строка
    float floatNum; // переменна для хранения числа
    floatNum = atof(string2); // преобразовать строку в число 
    printf("%f\n", floatNum); // вывести число



    printf("------------------------\n");
    char c = 105;
    printf("%c\n", c);

    printf("------------------------\n");

    








    
    
    char randomString[20];

    srand(time(NULL));
    for (size_t i = 0; i < 20; i++)
    {
        randomString[i] = randomBetween(0,255);
    }
    
    for (size_t i = 0; i < 20; i++)
    {
        printf("%c", randomString[i]);
    }
    printf("\n");




    for (size_t i = 0; i < 20; i++)
    {
        randomString[i] = randomBetween(97,122);
    }
    
    for (size_t i = 0; i < 20; i++)
    {
        printf("%c", randomString[i]);
    }
    printf("\n");


    
    return 0;
}


// 1234567wwq56

