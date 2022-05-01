#include<stdio.h>
int main()
{
    int i,p,arr[1000][1000],j,s1=0,s2=0,c,r,f,s3=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
   for(i=0;i<c;i++)
    {
        f=0;
        s2=0;
        for(j=0;j<r-1;j++)
        {
            if(arr[j][i]<arr[j+1][i])
            f++;
            else if(arr[j][i]>arr[j+1][i])
            s2++;
            else
            s3++;
        }
        if(f+s3==r-1 || s2+s3==r-1)
        s1++;
    }
    printf("%d",s1);
}