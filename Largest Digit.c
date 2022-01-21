#include<stdio.h>
int main()
{
    int d,n,rev=0,r=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        if(r<d)
        r=d;
        n=n/10;
    }
    printf("%d",r);
    return 0;
}