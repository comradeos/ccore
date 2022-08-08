#include <stdio.h>



int main()
{
    for(size_t i = 0; i < 10; i++) {
        printf("%I64d ", i);
    }
    printf("\n\n");



    for(float i = 100; i > 10; i /=2 ) {
        printf("%.2f \n", i);
    }
    printf("\n\n");

    

    #include <stdbool.h>

    bool hasCar = true;
    int val; 

    while (true == hasCar)
    {
        printf("0/1? ");
        scanf("%d", &val);
        if(val == 0) {
            hasCar = false;
        }
    }
    


    int j = 0;
    do {
        j++;
        printf("%d \n", j);

    } while (j < 10);



    return 0;
}