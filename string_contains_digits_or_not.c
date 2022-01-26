#include<stdio.h>
int main()
{
    char s[100];
    int i,p,a,j,n,c;
    scanf("%d",&n);
    for(p=1;p<=n;p++)
    {
        c=0;
    scanf("%s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        
    }
    for(j=0;j<i;j++)
    {
        //c=0;
        if(s[j]>=48 && s[j]<=57)
        {
            c++;
        }
    }
    if(c==0)
        printf("No
");
        else
        printf("Yes
");
    }
    return 0;
}