#include<stdio.h>
int main()
{
    int n,arr[100],max,hcf,i,p=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    max=arr[0];
    for(i=1;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    for(i=1;i<max;i++)
    {
        c=0;
        for(p=0;p<n;p++)
        {
            if(arr[p]%i==0)
            {
                c++;           
            }
        }
        if(c==n)
            hcf=i;
    }
    printf("%d",hcf);
    return 0;
}