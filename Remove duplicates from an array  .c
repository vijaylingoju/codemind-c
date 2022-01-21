#include <stdio.h>  
int main()  
{  
    int arr[20],i,j,k,s;
    scanf ("%d", &s);  
    for (i=0; i<s; i++)  
    {  
        scanf("%d",&arr[i]);  
    }    
    for (i=0; i<s; i++)  
    {  
        for (j=i+1;j<s;j++)  
        {  
            if (arr[i]==arr[j])  
            {  
                for (k=j; k<s- 1;k++)  
                { 
                    arr[k]=arr[k+1];  
                }  
                s--;  
                j--;      
            }  
        }  
    }        
    for ( i = 0; i < s; i++)  
    {  
        printf ("%d ", arr[i]);  
    }  
    return 0;  
}