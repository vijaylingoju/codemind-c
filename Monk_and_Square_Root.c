#include<stdio.h>
int main()
{
    long int p,n,m,i=0,x,f;
    scanf("%ld",&p);
    while(p)
    {
        i=0;
        f=0;
        scanf("%ld%ld",&n,&m);
        while(i<m+n)
        {
            if((i*i)%m==n)
            {
                f=1;
                x=i;
                break;
            }
            i++;
        }
        if(f==1)
        printf("%ld
",i);
        else
        printf("-1
");
        p--;
    }
    return 0;
}