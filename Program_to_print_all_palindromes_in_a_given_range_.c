#include<stdio.h>
int main()
{
    int p,q,rev=0,d,i,x;
    scanf("%d%d",&p,&q);
    for(i=p;i<=q;i++)
    {
    rev=0;
    x=i;
    d=0;
    while(x)
    {
        d=x%10;
        rev=rev*10+d;
        x=x/10;
        
    }
    
    if(rev==i)
    {
        printf("%d ",i);
    }
    }
    return 0;
}
 