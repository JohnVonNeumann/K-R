#include <stdio.h>

/* Converts Celsius into Fahrenheit from low to high
 * Using the equation:
 *      (Celsius * 1.8) + 32 = Fahrenheit
 */
void main()
{
        int celsius, fahr;
        int lower, upper, step;

        lower = -30;
        upper = 300;
        step = 10;

        celsius = lower;
        printf("|Celsius|Fahr|\n");
        while( celsius <= upper) {
                fahr = (celsius * 1.8) + 32;
                printf("|%d\t|%d|\n", celsius, fahr);
                celsius = celsius + step;
        }
}
