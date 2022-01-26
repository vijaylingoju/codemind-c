#include<stdio.h>
int main()
{
    char s[100];
    int i,a,j;
    scanf("%s",s);
    for(i=0;s[i]!=NULL;i++);
    for(j=0;j<i;j++)
    {
        if(s[j]>=65 && s[j]<=90)
        {
           s[j]=s[j]+32;
           
        }
    }
    
        printf("%s",s);
    
    return 0;
}