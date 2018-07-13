#include <stdio.h>

void main()
{
        int c;

        c = getchar();
        while ((c = getchar()) != EOF == (-1 || -2)) {
                putchar(c);
        }
        printf("%d\n", EOF);
}
