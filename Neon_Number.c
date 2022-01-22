#include<stdio.h>
int main()
{
    int n,r,s=0,k;
    scanf("%d",&n);
    k=n*n;
    while(k)
    {
        r=k%10;
        s=s+r;
        k=k/10;
    }
    if(s==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
    return 0;
}