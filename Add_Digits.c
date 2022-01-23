#include<stdio.h>
int sum(int n)
{
    int d,s=0;
    while(n)
    {
        d=n%10;
        s=s+d;
        n=n/10;
    }
    return s;
}
int main()
{
    int n,s=0,d,c=0,x,p=0;
    scanf("%d",&n);
    //x=n;
   // x=sum(n);
   while(1)
   {
       x=n;
    if(x<10)
    {
   printf("%d",x);
   break;
    }
    else
    {
    n=sum(x);
    continue;
    }
   }
    return 0;
}