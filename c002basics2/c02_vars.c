// gcc -o application.exe -Wall c02_vars.c && application.exe

#include <stdio.h>

int main()
{

    short num1 = 32767; // -32,768 to 32,767
    printf("short: %d \n", num1);

    signed short num2 = 32767; // -32,768 to 32,767
    printf("signed short: %d \n", num2);

    unsigned short num3 = 65535; // 0 to 65,535
    printf("unsigned short: %u \n", num3);

    int num4 =  2147483647; // -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647
    printf("int: %d \n", num4);

    unsigned int num5 = 4294967295; // 0 to 65,535 or 0 to 4,294,967,295
    printf("unsigned int: %u \n", num5);

    long long int num6 = 922337203685477580; // -9223372036854775808 to 9223372036854775807
    printf("long long int: %I64d \n", num6);



    float num7 = 25.2;
    printf("float: %.2f \n", num7);

    double num8 = 87312.7;
    printf("double: %.2f \n", num8);

    // char * my_string = "arr of chars";
    // printf("%s\n", my_string);

    return 0;
}




/*
 
%c	character
%d	decimal (integer) number (base 10)
%e	exponential floating-point number
%f	floating-point number
%i	integer (base 10)
%o	octal number (base 8)
%s	a string of characters
%u	unsigned decimal (integer) number
%x	number in hexadecimal (base 16)
%%	print a percent sign
\%	print a percent sign

 */