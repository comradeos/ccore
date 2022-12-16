#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char message[100] = "this is a string "; // string
    int value = 231; // integer

    char tmp[50]; // temp string (50 chars allowed)
    sprintf(tmp, "%d", value); // convert and put into var "tmp" value (231)

    strcat(message, tmp); // message + tmp (this is a string + 231)
    printf("%s\n", message); // this is a string 231
    
    return 0;
}