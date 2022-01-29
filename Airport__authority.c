#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],p,s=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&p);
    for(i=0;i<n;i++)
    {
        if(arr[i]>p)
        s+=2;
        else
        s+=1;
    }
    printf("%d",s);
    return 0;
}