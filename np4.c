#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,D;
    float x1,x2;

    printf("Enter three numbers= ");
    scanf("%d %d %d",&a,&b,&c);

    D=pow(b,2)-4*a*c;

    if (D>0)
    {
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        printf("the roots are real and distinct\nAnd the value of roots are %.2f and %.2f\n",x1,x2);
    }
    else if (D==0)
    {
      x1=x2=-b/2*a;
       printf("the roots are real and same\n and the value of roots are %.2f %.2f",x1,x2);
    }
    else if (D<0)
    {
     printf("The roots are imaginary\n");
    }
        return 0;
     }
    