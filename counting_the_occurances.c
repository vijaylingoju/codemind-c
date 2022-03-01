#include<stdio.h>
int main()
{
    char a[1000],b;
    int i=0,n=0,len=0;
    scanf("%[^
]%*c",a);
    scanf(" %c",&b);
    for(i=0;a[i]!=NULL;i++)
    {
        if(b==a[i])
        {
            n++;
        }
    }
    if(n==0)
    {
        printf("-1");
        return 0;
    }
    printf("%d",n);
    return 0;
}