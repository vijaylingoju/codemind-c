#include<stdio.h>
int fun(int n)
{
    int rev=0,d;
    while(n)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    return rev;
}
int main()
{
    int x,t;
    scanf("%d",&x);
    t=fun(x);
    x+=t;
    while(1)
    {
        t=fun(x);
        if(t==x)
        {
            printf("%d",t);
            break;
        }
        x+=t;
    }
}