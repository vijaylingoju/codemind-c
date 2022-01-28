#include<stdio.h>
int main()
{
    int gcd,a,b,i,k;
    scanf("%d%d",&a,&b);
    if(a>b)
    k=a;
    else
    k=b;
    for(i=1;i<=k;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    printf("%d",gcd);
    return 0;
}