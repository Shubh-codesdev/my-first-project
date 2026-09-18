#include <stdio.h>
int main()
{
    int a,b,c;
    
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);

    printf("before swap a=%d,b=%d",a,b);
c=a;
a=b;
b=c;
printf("After swap a=%d,b=%d",a,b);
return 0;
}
    
