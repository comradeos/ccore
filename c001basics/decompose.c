#include <stdio.h>

void print_number_factors(int number)
{
    int div = 2;

    while (div <= number)
    {
        if (number%div == 0)
        {   
            printf("result: %d / %d = %d\n", number, div, number/div);
            number = number/div;
        } 
        else
        {
            div++;
        }
    }
}

int main(int argc, char * argv[])
{
    //  Программа разложения числа на множители
    int number;
    
    printf("Input number: ");
    scanf("%d", &number);

    print_number_factors(number);
    return 0;
}

/*

gcc -o application.exe -Wall decompose.c && application.exe 

*/