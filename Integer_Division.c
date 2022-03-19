#include<stdio.h>
#include<stdlib.h>
int main()
{
    long int  x;
    scanf("%ld",&x);
    if(x>0)
    {
        printf("%ld",x/10);
    }
    else
    {
        if(abs(x)%10==0)
        printf("%ld",x/10);
        else
        {
            x=(abs(x)/10)+1;
            printf("-%ld",x);
        }
    }
}