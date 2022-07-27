#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Факториал числа
 * 
 * @param n - целое число
 * @return int 
 */
int factorial(int n)
{
    if (n==1) {
        return n*1;
    } else {
        return n *= factorial(n-1);
    }
}

int main(int argc, char * argv[])
{
    printf("%d\n", factorial(3)); // 6
    return 0;
} 