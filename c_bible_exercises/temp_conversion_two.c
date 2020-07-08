#include <stdio.h>

/* Exercise 1-4 */

/* print Celsius-Fahrenheit table for celsius = 0, 20, ..., 300; floating-point version */

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    printf("celsius   fahr\n"); /* prints header above table */

    while(celsius <= upper) {

        fahr = ((9.0 / 5.0) * celsius) + 32.0;
        printf("%7.0f %7.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;

}
