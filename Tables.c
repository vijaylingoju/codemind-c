#include<stdio.h>
int main()
{
    int n,r,p,i;
    scanf("%d%d",&n,&r);
    for(i=1;i<=r;i+=2)
    {
    p=i*n;
    printf("%d x %d = %d
",n,i,p);
    }
    return 0;
}