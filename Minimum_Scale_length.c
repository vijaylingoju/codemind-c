#include<stdio.h>
int main()
{
    int n,arr[100],i,max,p,c,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    for(i=2;i<max;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]%i==0)
            c++;
        }
        if(c==n)
        {
        f=1;
        p=i;
        }
    }
    if(f==1)
    printf("%d",p);
    else
    printf("1");
    return 0;
}