#include<stdio.h>
int main()
{
    char s[100];
    int i,x=0,p=0,y=0,j,k;
    scanf("%s",s);
   // scanf("%d%d",&n1,&n2);
    for(k=0;s[k]!=NULL;k++);
    
    for(i=0;i<k;i++)
    {
     x=0;   
    for(j=0;j<k;j++)
    {
        
            if(s[i]==s[j])
            x++;
    }
        if(x==1)
        {
            printf("%d",i);
             return 0;
        }
        else
        p++;
        
     }
             if(k==p)
        printf("-1");
        return 0;
}