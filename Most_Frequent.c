#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],p=0,j,i,x=0,v;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        p=0;
        for(j=0;j<n;j++)
        {
        if(arr[i]==arr[j])
        p++;
        }
        if(p>x)
        {
        x=p;
        v=arr[i];
        }
        else if(p==x)
        {
            if(arr[i]<v)
            v=arr[i];
        }
    }
    printf("%d",v);
    return 0;
}