#include<stdio.h>
int main()
{
    int n,d,arr[100],k=0,i;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        if(d%10)
        arr[k++]=d;
        n=n/10;
    }
    for(i=k;i>=0;i--)
    {
    	if(arr[i]%2)
    	printf("%d",arr[i]*arr[i]);
	}
    return 0;
}