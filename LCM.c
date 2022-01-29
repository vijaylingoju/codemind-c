#include<stdio.h>
int main()
{
	int i,a,b,k,hcf;
	scanf("%d%d",&a,&b);
	if(a>b)
	k=a;
	else
	k=b;
while(1)
	{
	    if(k%a==0 && k%b==0)
	    {
	    printf("%d",k);
	    break;
	    }
	    ++k;
	}
	return 0;
}