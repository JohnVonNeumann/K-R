#include <stdio.h>

#define LOWER   -30
#define UPPER   300
#define STEP    10

/* Converts Celsius into Fahrenheit from low to high
 * Using the equation:
 *      (Celsius * 1.8) + 32 = Fahrenheit
 */
void main()
{
        int celsius, fahr;

        celsius = LOWER;
        printf("|Celsius|Fahr|\n");
        while( celsius <= UPPER) {
                fahr = (celsius * 1.8) + 32;
                printf("|%d\t|%d|\n", celsius, fahr);
                celsius = celsius + STEP;
        }
}
