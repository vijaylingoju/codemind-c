#include<stdio.h>
#include<math.h>
int main()
{
    int n,r=0,i=0,j,arr[100],rev=0,p=0,s=0,x;
    scanf("%d",&n);
    x=n;
    while(n!=0)
    {
        r=n%10;
        arr[i]=r;
        n=n/10;
        i++;
    }
    p=i-1;
    for(j=1;j<=i;j++)
    {
        s=s+pow(arr[p],j);
        p--;
    }
    if(x==s)
    printf("True");
    else
    printf("False");
    return 0;
}