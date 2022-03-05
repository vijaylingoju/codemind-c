#include<stdio.h>
int isprime(int n)
{
    int f=0,i;
    for(i=1;i<=n;i++)
    if(n%i==0)
    f++;
    if(f==2)
    return 1;
    else
    return 0;
}
int main()
{
    int n1,n2,i;
    scanf("%d%d",&n1,&n2);
    for(i=n1+n2+1;;i++)
    {
        if(isprime(i)==1)
        {
            printf("%d",i-n1-n2);
            break;
        }
    }
    return 0;
}