#include<stdio.h>
int main()
{
    int n,x,d,i,f,s=0,p=1;;
    scanf("%d",&n);
    x=n;
    while(n)
    {
        p=1;
        d=n%10;
        for(i=1;i<=d;i++)
        p=p*i;
        s=s+p;
        n=n/10;
    }
    if(x==s)
    printf("The number %d is a strong number",x);
    else
    printf("The number %d is not a strong number",x);
    return 0;
}