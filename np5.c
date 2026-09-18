#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("Enter Two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    switch(op)
    {
        case '+':
            printf("Result is %d\n", a + b);
            break;

        case '-':
            printf("Result is %d\n", a - b);
            break;

        case '*':
            printf("Result is %d\n", a * b);
            break;

        case '/':
            printf("Result is %d\n", a / b);
            break;

        case '%':
            printf("Result is %d\n", a % b);
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}
     