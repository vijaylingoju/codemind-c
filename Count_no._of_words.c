#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int c=0,i;
    scanf("%[^
]",s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==' ')
        c++;
    }
    printf("%d",c+1);
    return 0;
}