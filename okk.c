#include <stdio.h>

int main() {
    int a, b;

    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    printf("Before swapping:");
    printf("a = %d , b = %d", a, b);
    
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\n After swapping:");
    printf("a = %d , b = %d", a, b);

    return 0;
}