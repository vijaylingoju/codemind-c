#include<stdio.h>
int main()
{
    int n,i,k,t1=0,t2=1,nxtrm=t1+t2,p=0,q=0;
    scanf("%d",&n);
    printf("0 1 ");
    for(i=3;i<=n;++i)
    {
        printf("%d ",nxtrm);
        t1=t2;
        t2=nxtrm;
        nxtrm=t1+t2;
    }
    
     return 0;
}