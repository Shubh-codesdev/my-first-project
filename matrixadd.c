#include <stdio.h>
int main()
{
    int a[2][2],b[2][2],c[2][2];
    int i,j;

    printf("enter 4 numbers for first matrix:\n ");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
        printf("\nenter 4 numbers for second matrix:\n ");

        for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }

    }
    printf("\n");
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\n");
    printf("The sum of 2 matrices is:\n ");
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}


