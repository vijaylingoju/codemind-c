#include<stdio.h>
int main()
{
    int n,i,p=0,j,x;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        p=0;
        scanf("%d",&n);
       for(j=1;j<=n;j++)
       {
           if(n==j*j)
           {
           printf("True
");
           p++;
               break;
           }
       }
       if(p==0)
       printf("False
");
    }
    return 0;
}