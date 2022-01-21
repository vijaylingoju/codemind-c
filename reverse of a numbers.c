#include<stdio.h>
int main()
{
    int d,n,rev=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    printf("%d",rev);
    return 0;
}