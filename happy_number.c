#include<stdio.h>
int main()
{
    int n,i,d,s=0;
    scanf("%d",&n);
    int k=n;
    while(k>9)
    {
        s=0;
        while(k)
        {
            d=k%10;
            s+=d*d;
            k=k/10;
        }
        if(s==1 || s==7)
        {
            printf("True");
            return 0;
        }
        k=s;
    }
    printf("False");
    return 0;
}