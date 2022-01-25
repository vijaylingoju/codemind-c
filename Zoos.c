#include<stdio.h>
int main()
{
    char s[100];
    int i,x=0,y=0,j;
    scanf("%s",s);
   // scanf("%d%d",&n1,&n2);
    for(i=0;s[i]!=NULL;i++);
    for(j=0;j<i;j++)
        {
            if(s[j]=='z')
            x++;
            else
            y++;
        }
        if(2*x==y)
        printf("Yes");
        else
        printf("No");
        
    return 0;
}