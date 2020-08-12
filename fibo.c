#include <stdio.h>

/* fibonacci number is the sum of 2 previous numbers
 * f = f1 + f2
 * This program prints fibonacci number and char to visualize it.
 */

int f1 = 0, f2 = 1, f = 0, i, n;

const char dot = '.';

int main(void)
{
    printf("How far you want to go?: ");
    scanf("%d", &n);

    /*printf("Fibonacci sequence:\n%d\n%d\n", f1, f2);*/
    f = f1 + f2;

    while (f <= n) {
        if (f < 10)
            printf("%d   ", f);
        else if (f >= 10 && f < 100)
            printf("%d  ", f);
        else if (f >= 100 && f < 1000)
            printf("%d ", f);

        for (i = 1; i <= f; i++)
            putchar(dot);

        putchar('\n');
        f1 = f2;
        f2 = f;
        f = f1 + f2;
    }
    return 0;
}
