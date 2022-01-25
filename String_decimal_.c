#include<stdio.h>
int main()
{
    char s[100];
    int i,j,n,c,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=0;
        scanf("%s",s);
         for(k=1;s[k]!=NULL;k++);
        for(j=0;j<k;j++)
        {
            if(s[j]>='0' && s[j]<='9')
            c++;
        }
        if(c==k)
        printf("True
");
        else
        printf("False
");
        
    }
    return 0;
}