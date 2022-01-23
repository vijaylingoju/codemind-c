#include<stdio.h>
int main()
{
    int n1,n2,f,i,j;
    scanf("%d%d",&n1,&n2);
    for(j=n1;j<=n2;j++)
    {
        f=0;
    for(i=1;i<=j;i++)
    {
        if(j%i==0)
        f++;
    }
    if(f==2)
    printf("%d
",j);
    }
    return 0;
}