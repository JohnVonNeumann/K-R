#include <stdio.h>

int main()
{
        int c;

        do {
            c = getchar();
            switch (c != EOF) {
            case 0:             /* okay */
            case 1:             /* okay */
                break;
            default:
                fprintf(stderr, "(c != EOF) was neither 0 nor 1\n");
                return 1;
            }
        } while (c != EOF);

        printf("%d\n", c);
}
