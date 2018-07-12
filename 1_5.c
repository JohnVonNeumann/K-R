#include <stdio.h>

/* Converts Celsius into Fahrenheit from high to low
 * Using the equation:
 *      Celsius * 1.8 + 32 = Fahrenheit
 */
void main()
{
        int celsius, fahr;
        int lower, upper, step;

        lower = -30;
        upper = 300;
        step = 10;

        celsius = upper;
        printf("|Celsius|Fahr|\n");
        while( celsius >= lower) {
                fahr = (celsius * 1.8) + 32;
                printf("|%d\t|%d|\n", celsius, fahr);
                celsius = celsius - step;
        }
}
