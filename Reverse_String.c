#include<stdio.h>
int main()
{
    char s[100],s1[100];
    int i,j,k=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++);
    for(j=i-1;j>=0;j--)
    {
        s1[j]=s[k];
        k++;
    }
    printf("%s",s1);
    return 0;
}