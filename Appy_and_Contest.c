#include<stdio.h>
int main()
{
    int t;
    int n,a,b,k,c=0;
    scanf("%d",&t);
    while(t)
    {
        scanf("%d%d%d%d",&n,&a,&b,&k);
        if(a%b==0)
        c=n/b-n/a;
        else if(b%a==0)
        c=n/a-n/b;
        else
        c=n/a+n/b-2*(n/(a*b));
        if(c>=k)
        printf("Win
");
        else
        printf("Lose
");
        t--;
    }
    return 0;
}