#include <stdio.h>
int main()
{
    int a,b,c;

    printf("Enter three numbers= ");
    scanf("%d %d %d",&a,&b,&c);

    if (a>b && a>c)
 {
    printf("a is greatest of three");
}
else if (b>a && b>c)
{
printf("b is greatest of three");
}
else 
{
printf("c is greatest of three");
}
return 0;
}