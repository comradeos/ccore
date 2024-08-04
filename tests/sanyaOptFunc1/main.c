#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

// заглушка 
#define DELAY_LEN 100
#define LOW 0
#define HIGH 1
int BUF_DMA[1000];
int BitIsSet(uint32_t Color) { return 1; }
// заглушка 

void e563cegbw_pixel_rgb_tobuf_dma(uint32_t Color, uint8_t posX) {
    volatile uint16_t i;
    for(i=0; i<8; i++) {
        if (BitIsSet((Color>>16)&255),(7-i)==1) {
            BUF_DMA[DELAY_LEN+posX*24+i+0] = HIGH;
        } else {
            BUF_DMA[DELAY_LEN+posX*24+i+0] = LOW;
        }

        if (BitIsSet((Color>>8)&255),(7-i)==1) {
            BUF_DMA[DELAY_LEN+posX*24+i+8] = HIGH;
        } else {
            BUF_DMA[DELAY_LEN+posX*24+i+8] = LOW;
        }

        if (BitIsSet((Color)&255),(7-i)==1) {
            BUF_DMA[DELAY_LEN+posX*24+i+16] = HIGH;
        } else {
            BUF_DMA[DELAY_LEN+posX*24+i+16] = LOW;
        }
    }
}

int main() {
    printf("Hello, World!\n");
    printf("BitIsSet = %d;\n", BitIsSet(1));
    printf("DELAY_LEN = %d;\n", DELAY_LEN);
    printf("BUF_DMA = %d;\n", BUF_DMA[0]);

    e563cegbw_pixel_rgb_tobuf_dma(0x00FF00, 0);
    return 0;
}