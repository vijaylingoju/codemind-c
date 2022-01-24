#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[100];
    int a,s=0,j,i,p;
    scanf("%s",str);
    //int p=atoi(str);
    for(i=0;str[i]!=NULL;i++);
     for(j=0;j<i;j++)
     {
         //a=(int)str[j];
       if(str[j]>='0'&& str[j]<='9')
        s=s+(str[j]-'0');
     }
     printf("%d
",s);
    
    return 0;
}