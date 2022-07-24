#include <stdio.h>
#include <stdbool.h>

bool is_prime(int x)
{
    for (int div = 2; div*div <= x; div++)
    {
        if (x % div == 0) return false;
    }
    return true;
}

int main(int argc, char *argv[])
{
    int x ;

    while (true) 
    {
        printf("Number: ");
        scanf("%d", &x);

        if (is_prime(x))
        {
            printf("Number %d is prime!\n", x);
        } else {
            printf("Number %d is not prime!\n", x);
        } 
    }
        
    return 0;
}

int main2(int argc, char *argv[])
{
    printf("Hello from break_continue.c\n");

    for(int i=0; i<20; ++i)
    {   
        if(i == 13) continue;  // пропустить число 13
        if(i%7 == 0) continue; // пропускать кратные 7 
        
        printf("Number i=%d. ", i);
        
        if(i%3 == 0)
        {
            printf("It's multiple of 3!\n");
        } else {
            printf("It's not multiple of 3...\n");
        }
    }
    
    return 0;
}


int main3(int argc, char *argv[])
{
    printf("Hello from break_continue.c\n");

    int x = 1;

    while(true)
    {
        printf("Input x:\n");
        scanf("%d", &x);
        printf("Number %d in hexadecimal is %X\n", x, x);
        
        if(x==7) break;
        
    }
    
    return 0;
}



/*

// getchar(); // пауза

gcc -o application.exe -Wall break_continue.c && application.exe 

*/

