#include<stdio.h>
int check(int n)
{
    int i;
    for(i=1;i<n;i++)
    {
        if(i*i==n)
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int p=check(n);
    if(p==1)
    printf("True");
    else
    printf("False");
    return 0;
}