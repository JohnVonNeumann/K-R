#include <stdio.h>

/* Converts Fahrenheit into Celsius from low to high
 * Using the equation:
 *      5 * (Fahrenheit - 32) / 9 = Celsius
 */

void main()
{
        int fahr, celsius;
        int lower, upper, step;

        lower = 0;
        upper = 300;
        step = 20;

        fahr = lower;
        printf("|Fahr\t|Celsius|\n");
        while ( fahr <= upper ) {
                celsius = 5 * (fahr-32) / 9;
                printf("|%d\t|%d|\n", fahr, celsius);
                fahr = fahr + step;
        }
}
