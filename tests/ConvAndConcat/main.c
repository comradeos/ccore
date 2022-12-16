#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char message[100] = "this is a string ";
    int value = 231;

    printf("%d\n", value);
    printf("%s\n", message);

    char tmp[50];
    sprintf(tmp, "%d", 444);

    printf("%s\n", tmp);
    strcat(message, tmp);
    strcat(message, "dddd");
    printf("%s\n", message);
    
    return 0;
}