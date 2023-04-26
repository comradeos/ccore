#include <stdio.h>

#define MY_VAR 1

extern int x;  // "int x" декларує і визначає змінну, а "extern int x" просто декларує змінну

int main()
{
   #ifdef MY_VAR
        printf("MY_VAR is defined.\n");
   #endif

    extern int x;
   printf("End of script.\n");

   return 0;
}