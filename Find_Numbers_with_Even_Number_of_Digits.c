#include<stdio.h>
int main()
{
    int n,arr[100],i,c=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        while(arr[i])
        {
            c++;
            arr[i]=arr[i]/10;
        }
        if(c%2==0)
        j++;
    }
    printf("%d",j);
    return 0;
}