// gcc -o application.exe -Wall recursion.c && application.exe

#include <stdio.h>

int factorial(int number)
{   
    if (number == 1){
       return 1;
    } else {
        return number*factorial(number-1);
    }
}


void doll(int n) {
    if (n == 1) {
        printf("Last doll!\n");
    } else {
        printf("Top side %d \n", n);
        doll(n-1);
        printf("Bottom side %d \n", n);
    }
    
}

int main(int argc, char *argv[])
{
    // printf("%d ", factorial(3));
    doll(3);
    return 0;
}