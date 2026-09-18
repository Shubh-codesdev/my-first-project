#include <stdio.h>

int main()
{
    float a, b, x, result;

    printf("Enter a, b and x: ");
    scanf("%f %f %f", &a, &b, &x);

    result = (a*x + b) / (a*x - b);

    printf("Result = %.2f", result);

    return 0;
}