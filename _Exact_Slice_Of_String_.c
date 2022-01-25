#include<stdio.h>
int main()
{
    char s[100];
    int i,n1,n2,j;
    scanf("%[^
]s",&s);
    scanf("%d%d",&n1,&n2);
        
        // for(k=1;s[k]!=NULL;k++);
        for(j=n1;j<=n2;j++)
        {
            printf("%c",s[j]);
        }
    return 0;
}