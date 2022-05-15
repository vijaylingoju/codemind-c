#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s[5];
    int h=0,i,m=0;
    float k1,k2,x,p;
    scanf("%s",s);
    for(i=0;i<2;i++)
    {
        h=h*10+(s[i]-48);
    }
    for(i=3;i<5;i++)
    {
        m=m*10+(s[i]-48);
    }
    //printf("%d :%d",n,m);
    k1=h*30;
    k2=m/12.0;
    k1+=k2*6;
    k2=m*6;
    x=abs(k1-k2);
    p=360-x;
    if(p>x)
    printf("%.1lf",x);
    else
    printf("%.1lf",p);
}