#include <stdio.h>

int main()
{
    printf("Type conversion:\n");

    float example_1 = 2 + 5.0;
    int example_2 = 'A' + 25;
    int example_3 = 5 / 2;
    float example_4 = 5 / 2.0;
    float example_5 = (float)5 / 2.0;
    
    printf(
        "int + float = %.2f\n"
        "char + int = %d\n"
        "int / int = %d\n"
        "int / float = %.2f\n"
        "(float)int / float = %.2f\n",
        example_1,
        example_2,
        example_3,
        example_4,
        example_5
    );


    return 0;
}


