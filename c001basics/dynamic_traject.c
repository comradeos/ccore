// gcc -o application.exe -Wall dynamic_traject.c && application.exe

#include <stdio.h>

int trajects(int n)
{
    int K[n+1];
    K[0] = 0;
    K[1] = 1;
    for (int i = 2; i <= n; i++) {
        K[i] = K[i-1] + K[i-2];
    }
    return K[n];
}

int main(int argc, char * argv[])
{   
    printf("%d\n", trajects(7));
    printf("%d\n", trajects(8));
    printf("%d\n", trajects(9));
    printf("%d\n", trajects(10));
    printf("%d\n", trajects(11));
    printf("%d\n", trajects(12));
    return 0;
}
