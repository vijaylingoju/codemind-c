#include<stdio.h>
int main()
{
    int n,d,c=0,temp=0,arr[100],k=0,p=0,i;
    scanf("%d",&n);
    temp=n;
    c=0;
    while(n)
    {
        d=n%10;
        arr[k]=d;
        n=n/10;
        k++;
    }
    for(i=0;i<=k;i++)
    {
        for(p=0;p<=k;p++)
        {
            if(arr[i]==arr[p])
            c++;
        }
        
    }
    if(c!=k+1)
    {
        printf("Not Unique Number");
    }
    else 
    {
        printf("Unique Number");
    }
    return 0;
}