#include <stdio.h>

int main()
{
    int a  = 7;
    
    printf("a = 7\n");
    printf("before a++ a == %d\n", a++);
    printf("after a++ a == %d\n\n", a);

    int b = 7;

    printf("b = 7\n");
    printf("before ++b b == %d\n", ++b);
    printf("after ++b b == %d\n", b);
 
    return 0;
}
