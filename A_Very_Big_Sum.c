#include<stdio.h>
int main()
{
    long int n,arr[100],s=0,i;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&arr[i]);
        s=s+arr[i];
    }
    //s=s+arr[i];
    printf("%ld",s);
    return 0;
}