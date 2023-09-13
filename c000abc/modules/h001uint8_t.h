#include <stdio.h>
#include <stdint.h>

void h001uint8_t() {
    // uint8_t has range 0 - 255
    uint8_t num = 255;
    uint8_t num2 = 256; // 0 -> overflow

    printf("%d\n", num);
}
}