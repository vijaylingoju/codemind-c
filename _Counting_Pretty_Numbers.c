#include<stdio.h>
int main()
{
    int n,r1,r2,k,i,d;
    scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
        int c=0;
    scanf("%d%d",&r1,&r2);
    for(i=r1;i<=r2;i++)
    {
        d=i%10;
        if(d==2||d==3||d==9)
        c++;
    }
    printf("%d
",c);
    }
    return 0;
}