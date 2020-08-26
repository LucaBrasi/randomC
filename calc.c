#include <stdio.h>

void selection(void);
void sum(int n1, int n2);
void difference(int n1, int n2);
void product(int n1, int n2);

void selection(void)
{
    int n1, n2, selection;

    printf("1: The sum of two\n"
            "2: The difference of two\n"
            "3: The product of two\n"
            "q: quit program\n\n"
            "Choose operation:");
    scanf("%d", &selection);

    printf("input first number:");
    scanf("%d", &n1);
    printf("input second number:");
    scanf("%d", &n2);

    switch (selection) {
        case 1:
            sum(n1, n2);
            break;
        case 2:
            difference(n1, n2);
            break;
        case 3:
            product(n1, n2);
            break;
        case 'q':
            printf("Closing program...");
            break;
        default:
            break;
    }
}

void sum(int n1, int n2)
{
    int sum = n1 + n2;
    printf("%d + %d = %d\n\n", n1, n2, sum);
}

void difference(int n1, int n2)
{
    int difference = n1 - n2;
    printf("%d - %d = %d\n\n", n1, n2, difference);
}

void product(int n1, int n2)
{
    int products = n1 * n2;
    printf("%d * %d = %d\n\n", n1, n2, products);
}

int main(void)
{
    selection();
    return 0;
}
