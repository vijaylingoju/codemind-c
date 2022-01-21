#include<stdio.h>
int main()
{
    int d,p=1,s=0,n;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        s=s+d;
        p=p*d;
        n=n/10;
    }
    printf("%d",p-s);
        
    return 0;
}