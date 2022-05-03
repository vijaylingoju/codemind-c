#include<stdio.h>
int fun(int *arr,int n)
{
    int i,j,k;
     for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<n;k++)
                {
                    arr[k]=arr[k+1];
                }
                j--;
                n--;
            }
        }
    }
    return n;
}
int main()
{
    int i,j,k,m1,n1,c,arr[1000],str[1000],p=0;
    scanf("%d%d",&m1,&n1);
    for(i=0;i<m1;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n1;i++)
    scanf("%d",&str[i]);
    int m=fun(arr,m1);
    int n=fun(str,n1);
    for(i=0;i<m;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==str[j])
            {
                c++;
            }
        }
        if(c==0)
        printf("%d ",arr[i]);
    }
     for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<m;j++)
        {
            if(str[i]==arr[j])
            {
                c++;
            }
        }
        if(c==0)
        printf("%d ",str[i]);
    }
}