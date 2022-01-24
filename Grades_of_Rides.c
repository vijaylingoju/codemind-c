#include<stdio.h>
int main()
{
    int a,b,c,p;
    scanf("%d%d%d",&a,&b,&c);
    if(a>50 && b>60 && c>100)
    p=10;
    else if(a>50 && b>60 && c<=100)
    p=9;
    else if(a<=50 && b>60 && c>100)
    p=8;
    else if(a>50 && b<=60 && c>100)
    p=7;
    else if(a>50 || b>60 || c>100)
    p=6;
    else
    p=5;
    printf("%d",p);
    return 0;
}