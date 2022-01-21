#include<stdio.h>
int main()
{
    int d,n,s=0,r;
    scanf("%d",&n);
    r=n;
    while(n)
    {
        d=n%10;
        s=s+d;
        n=n/10;;
    }
    if(r%s==0)
    printf("True");
    else
    printf("False");
    return 0;
}