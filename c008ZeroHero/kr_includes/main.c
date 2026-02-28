#include <stdio.h>
#include <stdlib.h>
#include "userlib.h"

int main(void)
{
    printf("Includes tests\n");
    printf("This is from main()\n");

    User user = {25, "Iaroslav"};
    print_info(user);

    return 0;
}