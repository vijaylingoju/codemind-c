#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100],s3[100],temp;
    int l,i,j;
    scanf("%s",s1);
    scanf("%s",s2);
    strcat(s1,s2);
    l=strlen(s1);
    for(i=0;i<l-1;i++)
    {
        for(j=i+1;j<l;j++)
        {
        if(s1[i]>s1[j])
        {
            temp=s1[i];
            s1[i]=s1[j];
            s1[j]=temp;
        }
        }
    }
    printf("%s",s1);
    return 0;
}