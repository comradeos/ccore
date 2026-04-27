#include <stdio.h>

int main()
{
    printf(
        "1. Size of types:\n"
        "int: %lu bytes\n"
        "float: %lu bytes\n"
        "char: %lu byte\n",
        sizeof(int), 
        sizeof(float), 
        sizeof(char)
    );
    
    int a = 5;
    int b = 2;

    int res_1 = a / b; // no fract 5 / 2 = 2
    float res_2 = a / b; // logic error 5 / 2 = 2.0
    float res_3 = (float)a / b;  // 5.0 / 2 = 2.5 ok
    
    printf(
        "2. Div difference:\n"
        "%d / %d = %d\n"
        "%d / %d = %.2f\n"
        "(float)%d / %d = %.2f\n",
        a, b, res_1,
        a, b, res_2,
        a, b, res_3
    );

    char my_char = 'A';

    printf(
        "3. Char as digit and symbol:\n"
        "'%c' == %d\n", 
        my_char,
        (int)my_char
    );
  
    return 0;
}
