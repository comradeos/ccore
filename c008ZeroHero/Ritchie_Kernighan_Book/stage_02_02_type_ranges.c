#include <stdio.h>
#include <limits.h>

int main()
{
    printf(
        "int: min == %d, max == %d\n"
        "char: min == %d, max == %d\n",
        INT_MIN, INT_MAX,
        CHAR_MIN, CHAR_MAX
    );

    int int_max = INT_MAX;
    int int_overflow = ++int_max;

    char char_max = CHAR_MAX;
    char char_overflow = ++char_max;

    printf(
        "int_max: %d\n"
        "int_overflow: %d\n"
        "char_max: %d\n"
        "char_overflow: %d\n",
        int_max, int_overflow,
        char_max, char_overflow
    );

    return 0;
}

