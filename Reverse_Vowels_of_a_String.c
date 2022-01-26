#include<stdio.h>
int main()
{
    char s[100],s2[100],s1[100],s3[100];
    int i,k,p=0,q=0,x,c=0,u=0;
    scanf("%s",s);
    for(k=0;s[k]!=NULL;k++)
    {
        if(s[k]=='a' ||s[k]=='e'|| s[k]=='i' ||s[k]=='o'||s[k]=='u'||s[k]=='A'|| s[k]=='E' ||s[k]=='I'||s[k]=='O'||s[k]=='U')
        {
            s3[p]=s[k];
            p++;
        }
       /* else
        {
            s1[q]=s[k];
            q++;
        }*/
    }
    for(i=p-1;i>=0;i--)
    {
        s2[c]=s3[i];
        c++;
    }
    for(x=0;x<k;x++)
    {
        if(s[x]=='a' ||s[x]=='e'|| s[x]=='i'|| s[x]=='o'||s[x]=='u'||s[x]=='A' ||s[x]=='E'|| s[x]=='I'||s[x]=='O'||s[x]=='U')
        {
         printf("%c",s2[u]); 
         u++;
        }
        else
        {
            printf("%c",s[x]);
            
        }
    }
    return 0;
}