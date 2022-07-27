// gcc -o application.exe -Wall fib_time_lib.c && application.exe

#include <stdio.h>
#include <time.h>

static int cache[100] = {0};

int main(int ac, char * av[])
{
    for (int i = 1; i < 50; i++)
    {
        clock_t time1 = clock();
        int result = fib_dynamic(i);        
        clock_t time2 = clock();
        
        int delta_ms = (time2 - time1)*1000/CLOCKS_PER_SEC;
        int delta_ms2 = (time2 - time1);
        printf("fib(%d) = %d (%d ms1 | %d ms2)\n", i, result, delta_ms, delta_ms2);
        // printf("fib(%d) = %d (%d ms1 | %d ms2)\n", i, result, delta_ms, delta_ms2);

    }
    return 0;
}

/**
 * @brief Последовательность Фиббоначи. 
 * 
 * @param n предельное значение
 * @return int 
 */
int fibonacci(int n)
{
    if (n <= 1) {
        return n;
    } else if (cache[n] != 0) {
        return cache[n];
    } else {
        cache[n] = fibonacci(n-1) + fibonacci(n-2); 
        return cache[n];
    }
}

/**
 * @brief Последовательность Фиббоначи. 
 * 
 * @param n предельное значение
 * @return int 
 */
int fib_dynamic(int n)
{
    int fib[n+1];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
    return fib[n];
    
}