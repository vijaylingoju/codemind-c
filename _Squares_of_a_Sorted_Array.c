#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],i,temp,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    arr[i]=pow(arr[i],2);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}