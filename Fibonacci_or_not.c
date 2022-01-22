#include<stdio.h>
int main()
{
    int n,i,t1=0,t2=1,nxtrm=t1+t2,p=0;
    scanf("%d",&n);
    //printf("0 1 ");
    for(i=3;i<=n;++i)
    {
        
        t1=t2;
        t2=nxtrm;
        nxtrm=t1+t2;
        if(nxtrm==n || nxtrm==0 ||nxtrm==1)
        {
        printf("True");
        p++;
            break;
        }
    }
    if(p==0)
        printf("False");
    
     return 0;
}