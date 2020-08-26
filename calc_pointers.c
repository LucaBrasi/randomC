#include <stdio.h>

void selection(void);
void sum(int *num1, int *num2);
void difference(int *num1, int *num2);
void product(int *num1, int *num2);

void selection(void)
{
    int num1, num2, selection;

    printf("1: The sum of two\n"
            "2: The difference of two\n"
            "3: The product of two\n"
            "q: quit program\n\n"
            "Choose operation:");
    scanf("%d", &selection);

    printf("input first number:");
    scanf("%d", &num1);
    printf("input second number:");
    scanf("%d", &num2);

    switch (selection) {
        case 1:
            sum(&num1, &num2);
            break;
        case 2:
            difference(&num1, &num2);
            break;
        case 3:
            product(&num1, &num2);
            break;
        case 'q':
            printf("Closing program...");
            break;
        default:
            break;
    }
}

void sum(int *num1, int *num2)
{
    int sum = *num1 + *num2;
    printf("%d + %d = %d\n\n", *num1, *num2, sum);
}

void difference(int *num1, int *num2)
{
    int difference = *num1 - *num2;
    printf("%d - %d = %d\n\n", *num1, *num2, difference);
}

void product(int *num1, int *num2)
{
    int products = *num1 * *num2;
    printf("%d * %d = %d\n\n", *num1, *num2, products);
}

int main(void)
{
    selection();
    return 0;
}
