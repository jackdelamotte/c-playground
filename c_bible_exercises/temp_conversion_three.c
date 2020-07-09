#include <stdio.h>
#define  LOWER 0
#define  UPPER 300
#define  STEP 20

/* Exercise 1-5 */

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 but in reverse order and using a for loop */

int main()
{
    float fahr;

    printf("fahr   celsius\n"); /* prints header above table */

    for(fahr = UPPER; fahr >= LOWER; fahr -= STEP)
        printf("%4.0f %7.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));

    return 0;

}
