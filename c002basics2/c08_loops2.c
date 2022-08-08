#include <stdio.h>



int main()
{
    for(int i = 0; i < 10; i++) {
        
        if(i == 3) {
            continue;
        }        

        if(i > 5) {
            break;
        }

        printf("%d ", i);
    }
    
    printf("\n\n");

    return 0;
}