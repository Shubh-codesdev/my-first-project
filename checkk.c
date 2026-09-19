#include <stdio.h>
#include <math.h>
 int main() 
 {
    int num,result=0,next,original;

    printf("Enter a numebr ");
    scanf("%d",&num);
    original=num;

    while(num>0)
    {
    next=num%10;
    result += pow(next,3);
    num=num/10;

    }
    if (result == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

      return 0;
     } 