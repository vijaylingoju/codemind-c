#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=0,a,b,i;
    scanf("%d",&n);
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=n;i<=a;i++)
    {
        if(i%b==0)
        c++;
    }
    printf("%d",c);
    return 0;
}