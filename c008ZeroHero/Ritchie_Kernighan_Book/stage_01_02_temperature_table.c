// gcc -Wall -o ./app stage_02_temperature_table.c && ./app

#include <stdio.h>

float get_temperature_c(int temperature_f);

int main()
{
    int upper_temperature = 300;
    int step = 20;
    float temperature_c = 0;
    int temperature_f = 0;
    
    printf("%-12s%-12s\n", "Fahrenheit","Celsius");

    while(temperature_f <= upper_temperature) 
    {
        temperature_c = get_temperature_c(temperature_f);

        printf("%-12d%-12.1f\n", temperature_f, temperature_c);
        
        temperature_f = temperature_f + step;
    }

    return 0;
}

float get_temperature_c(int temperature_f) 
{
    return (5.0 / 9.0) * (temperature_f - 32);
}
