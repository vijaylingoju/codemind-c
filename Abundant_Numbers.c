#include<stdio.h>
int main()
{
    int n,arr[100],i,s=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        s=s+i;
    }
    if(s>n)
    printf("True");
    else
    printf("False");
    
     return 0;
}