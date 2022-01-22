#include<stdio.h>
int main()
{
    int n,i;
    float s=0.0,p;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        p=1/(float)i;
        s=s+p;
    }
    printf("%.2f",s);
    return 0;
}