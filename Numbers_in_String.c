#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int s=0,i;
    scanf("%[^
]",str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>=48 && str[i]<=57)
        s=s+str[i]-'0';
    }
    printf("%d",s);
    return 0;
}