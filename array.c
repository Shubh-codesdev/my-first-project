#include <stdio.h>
int main()
{
    int marks[5],i,sum=0;

    printf("Enter 5 numbers: ");

    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);

        sum += marks[i];

    }

    printf("The sum of Marks is :%d\n",sum);

    return 0;
    
}