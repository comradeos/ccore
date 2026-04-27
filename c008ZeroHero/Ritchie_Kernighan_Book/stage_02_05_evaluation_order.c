#include <stdio.h>

int main()
{
    int a = 2;
    int b = 5;
    
    int result = 0;

    // bad
    result = ((a++) - (++a) * b++); // -18
    printf("(bad)result = %d\n", result);
    
    a = 2;
    b = 5;

    //good
    int n1 = a++;
    int n2 = ++a;
    int n3 = b++;
    result = (n1 - n2) * n3; // -10 ? why?
    printf("(good)result = %d\n", result);



    return 0;
}

