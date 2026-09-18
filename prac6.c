#include <stdio.h>
int main()
{
    int i,n,fibonacci,next,t1=0,t2=1;

    printf("how much long series ypu want: ");
    scanf("%d",&n);

    printf("fibonacci series: ");
    for(i=0;i<n;i++)
    {

        printf("%d,",t1);

        next=t1+t2;
        t1=t2;
        t2=next;
    
    }
  return 0;
    
}