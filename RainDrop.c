#include<stdio.h>
int main()
{
    int n,f=0;
    scanf("%d",&n);
    if(n%3==0)
    {
        printf("Pling");
        f=1;
    }
    if(n%5==0)
    {
        printf("Plang");
        f=1;
    }
    if(n%7==0)
    {
        printf("Plong");
        f=1;
    }
    if(f==0)
    printf("%d",n);
    return 0;
}