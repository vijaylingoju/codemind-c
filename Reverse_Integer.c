
#include<stdio.h>
int main()
{
    int n,rev=0,d,c=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        if(d==0)
        c++;
        rev=rev*10+d;
        n=n/10;
    }
    printf("%d",rev);
    return 0;
}
