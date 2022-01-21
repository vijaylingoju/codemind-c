#include<stdio.h>
int main()
{
    int d,n,rev=0,r,p,q,t;
    scanf("%d",&n);
    r=n;
    while(n)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    p=r*r;
    q=rev*rev;
    rev=0;
    t=q;
     while(q)
    {
        d=q%10;
        rev=rev*10+d;
        q=q/10;
    }
    if(rev==p)
    printf("True");
    else
    printf("False");
    return 0;
}