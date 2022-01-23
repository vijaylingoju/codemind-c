#include<stdio.h>
int main()
{
    int n,arr[1000],i,o=0,e=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     for(i=0;i<n;i++)
     {
         if(arr[i]%2)
         o++;
         else
         e++;
     }
     printf("%d %d",e,o);
     return 0;
}