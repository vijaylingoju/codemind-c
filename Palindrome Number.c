#include<stdio.h>
int main()
{
    int n,d,rev=0,i,arr[100],k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        rev=0;
        k=arr[i];
    while(arr[i])
    {
        d=arr[i]%10;
        rev=rev*10+d;
        arr[i]=arr[i]/10;
    }
    //printf("%d",rev);
    if(k==rev)
    printf("True
");
    else
    printf("False
");
    }
    return 0;
}