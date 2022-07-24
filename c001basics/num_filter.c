#include <stdio.h>

int main(int argc, char *argv[])
{
    long long int number = 987798798;
    while (number > 0)
    {   
        int digit = number % 10;
        if (digit==7) {
            printf("%d ", digit);
        }
        number /= 10;
    }
    
}

/*
gcc -o application.exe -Wall num_filter.c && application.exe 
*/