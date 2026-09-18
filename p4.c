#include <stdio.h>
int main()
{
    float C,F;
    
    printf("Enter degree in celsies: ");
    scanf("%f",&C);

    F=(9.0/5.0*C)+32;

    printf("The value of degree in fahrenheit is = %.2f",F);

    return 0;
}