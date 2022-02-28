#include<stdio.h>
int isprime(int n)
{
    int f=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        f++;
    }
    if(f!=2)
    return 0;
    else
    return 1;
}
int main()
{
    int n,i,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            int p=isprime(i);
            if(p==0)
            k++;
        }
    }
    printf("%d",k);
    return 0;
}