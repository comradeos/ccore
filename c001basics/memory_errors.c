#include <stdio.h>


int segmentation_fault(){
    return 0;
}






int memory_leak(){
    return 0;
}

int main(int argc, char * argv[]) 
{
    int number = 25;
    int * pointer = &number;
    printf("value of a = %d, address of a is %p", number, pointer);
    number = 123; 
    return 0;
}