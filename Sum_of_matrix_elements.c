#include<stdio.h>
int main()
{
	int i,j,arr[100],r,c,n,s=0;
	scanf("%d%d",&r,&c);//4 5
    n=r*c;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    s+=arr[i];
    printf("%d",s);
	return 0;
}