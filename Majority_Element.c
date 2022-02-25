#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],i=-1,max=0,j,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        int c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
              c++;
            }
            if(max<c)
            {
            max=c;
            p=i;
            }
        }
         if(max>n/2)
            {
                printf("%d",arr[p]);
                break;
            }
    }
    return 0;
}