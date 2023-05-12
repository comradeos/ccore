#include <stdio.h>
#include "mylib.h"

void CDC_Transmit_HS(int * variable, int value) {
    * variable = value;
}

static void CallMe() {
    printf("CallMe()\n");
}


int main() {
    int outerVariable;
    CDC_Transmit_HS(&outerVariable, 123);
    printf("outerVariable: %d\n", outerVariable);

    return 0;
}

// uint8_t CDC_Transmit_HS(uint8_t* Buf, uint16_t Len)


