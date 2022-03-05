#include<stdio.h>
int main()
{
    int t,n,i,p;
    scanf("%d",&t);
    while(t)
    {
        p=1;
        scanf("%d",&n);
        for(i=2;i<=n;i++)
        {
            p*=i;
        }
        printf("%d
",p);
        t--;
    }
    return 0;
}