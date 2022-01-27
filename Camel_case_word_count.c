#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int c=0,i;
    scanf("%s",&s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>=65 && s[i+1]<=90)
        c++;
    }
    printf("%d",c);
    return 0;
}