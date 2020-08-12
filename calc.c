#include <stdio.h>

/*	int getnum(int, int);
 *	int getnum(int, int);
 *	{
 *	        collect numbers
 *	        with this?
 *	}
 */

int num1, num2;
void selection(void);
void sum(void);
void difference(void);
void product(void);

void selection(void)
{
    int selection;
    printf("1: The sum of two\n"
            "2: The difference of two\n"
            "3: The product of two\n"
            "q: quit program\n\n"
            "Choose operation:");
    scanf("%d", &selection);

    switch (selection) {
        case 1:
            sum();
            break;
        case 2:
            difference();
            break;
        case 3:
            product();
            break;
        case 'q':
            printf("Closing program...");
            break;
        default:
            break;
    }
}

void sum(void)
{
    printf("input first number:");
    scanf("%d", &num1);
    printf("input second number:");
    scanf("%d", &num2);
    int sum = num1 + num2;
    printf("%d + %d = %d\n\n", num1, num2, sum);
}

void difference(void)
{
    printf("input first number:");
    scanf("%d", &num1);
    printf("input second number:");
    scanf("%d", &num2);
    int difference = num1 - num2;
    printf("%d - %d = %d\n\n", num1, num2, difference);
}

void product(void)
{
    printf("input first number:");
    scanf("%d", &num1);
    printf("input second number:");
    scanf("%d", &num2);
    int products = num1 * num2;
    printf("%d * %d = %d\n\n", num1, num2, products);
}

int main(void)
{
    selection();
    return 0;
}
