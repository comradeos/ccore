#include <stdio.h>
#include <stdint.h>

void print_bin(uint8_t num)
{
    for (int i = 7; i >= 0; --i) {
        putchar((num & (1 << i)) ? '1' : '0');
    }
    putchar('\n');
}

int main()
{
    uint8_t num = 9;
    
    print_bin(num); // 00001001

    printf("%d\n", num & 1);

    printf("%d\n", 8 & 1); // 0
    
    return 0;
}