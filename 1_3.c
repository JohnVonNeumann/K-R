#include <stdio.h>

#define LOWER   0
#define UPPER   300
#define STEP    20

/* Converts Fahrenheit into Celsius from low to high
 * Using the equation:
 *      5 * (Fahrenheit - 32) / 9 = Celsius
 */

void main()
{
        int fahr, celsius;

        fahr = LOWER;
        printf("|Fahr\t|Celsius|\n");
        while ( fahr <= UPPER ) {
                celsius = 5 * (fahr-32) / 9;
                printf("|%d\t|%d|\n", fahr, celsius);
                fahr = fahr + STEP;
        }
}
