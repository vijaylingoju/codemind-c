#include<stdio.h>
int main()
{
    int n1,n2,d,x,i,c=0,k=0,p;
    scanf("%d%d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
    x=i;
    k=0,c=0;
    while(x)
    {
        
        d=x%10;
        if(d!=0 && i%d==0)
        {
            k++;
        }
        x=x/10;
        c++;
    }
    if(c==k)
    printf("%d ",i);
    }
    //printf("");
    return 0;
    
}