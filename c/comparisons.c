#include <stdio.h>

int main(void)
{
    double x, y;

    // Prompts and takes input for a number.
    printf("Enter a number: ");
    scanf("%lf", &x);

    // Prompts and takes input for another number.
    printf("Enter another number: ");
    scanf("%lf", &y);

    printf("\n");

    if (x < y)
    {
        printf("%lf is less than %lf.\n", x, y);
    }
    else if (x == y)
    {
        printf("%lf is equal to %lf.\n", x, y);
    }
    // If not less than or equal to y, then x must be greater. It can't be
    // anything else.
    else
    {
        printf("%lf is greater than %lf.\n", x, y);
    }
}