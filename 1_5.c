#include <stdio.h>

#define LOWER   -30
#define UPPER   300
#define STEP    10

/* Converts Celsius into Fahrenheit from high to low
 * Using the equation:
 *      Celsius * 1.8 + 32 = Fahrenheit
 */
void main()
{
        int celsius, fahr;

        celsius = UPPER;
        printf("|Celsius|Fahr|\n");
        while( celsius >= LOWER) {
                fahr = (celsius * 1.8) + 32;
                printf("|%d\t|%d|\n", celsius, fahr);
                celsius = celsius - STEP;
        }
}
