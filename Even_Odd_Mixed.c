#include<stdio.h>
int main()
{
    int n,d,arr[100],i=0,e=0,o=0,j;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        arr[i]=d;
        n=n/10;
        i++;
    }
    for(j=0;j<i;j++)
    {
        if(arr[j]%2==0)
        e++;
        else
        o++;
    }
    if(i==e)
    printf("Even");
    if(i==o)
    printf("Odd");
    if(e<i && o<i)
    printf("Mixed");
    return 0;
}