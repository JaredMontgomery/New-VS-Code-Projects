#include <stdio.h>

int main(void)
{
    // Repeatedly takes input until the user quits with 'q'.
    while (1)
    {
        // Takes input for a number.
        double num_1;
        printf("Enter a number: ");
        scanf(" %lf", &num_1);

        // Takes input for another number.
        double num_2;
        printf("Enter another number: ");
        scanf(" %lf", &num_2);

        // Takes input for an operation.
        char op;
        printf("Enter a operation (+, -, *, /, or q to quit): ");
        scanf(" %c", &op);

        if (op == 'q')
        {
            break;
        }

        // Chooses the correct operation, calculates, and shows the result.
        switch (op)
        {
            case '+':
                printf("%lf + %lf = %lf", num_1, num_2, num_1 + num_2);

                break;
            case '-':
                printf("%lf - %lf = %lf", num_1, num_2, num_1 - num_2);

                break;
            case '*':
                printf("%lf * %lf = %lf", num_1, num_2, num_1 * num_2);

                break;
            case '/':
                printf("%lf / %lf = %lf", num_1, num_2, num_1 / num_2);

                break;

            default:
                printf("'%c' is not supported as an operation.", op);
        }

        printf("\n");
    }
}
