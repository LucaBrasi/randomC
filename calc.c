#include <stdio.h>

void selection(void);
int sum(int num1, int num2);
int difference(int num1, int num2);
int product(int num1, int num2);

void selection(void)
{
    int num1, num2, selection;

    printf("1: The sum of two\n"
            "2: The difference of two\n"
            "3: The product of two\n"
            "Choose operation:");
    scanf("%d", &selection);

    printf("input first number:");
    scanf("%d", &num1);
    printf("input second number:");
    scanf("%d", &num2);

    switch (selection) {
        case 1:
            printf("%d + %d = %d\n", num1, num2, sum(num1, num2));
            break;
        case 2:
            printf("%d - %d = %d\n", num1, num2, difference(num1, num2));
            break;
        case 3:
            printf("%d * %d = %d\n", num1, num2, product(num1, num2));
            break;
        default:
            break;
    }
}

int sum(int num1, int num2)
{
    return num1 + num2;
}

int difference(int num1, int num2)
{
    return num1 - num2;
}

int product(int num1, int num2)
{
    return num1 * num2;
}

int main(void)
{
    selection();
    return 0;
}
