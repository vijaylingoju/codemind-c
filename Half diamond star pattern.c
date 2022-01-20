#include<stdio.h> 
int main() 
{ 
   int n,i,j;
   scanf("%d",&n);
   if(n>=3 && n<=100)
   {
   for(i=1;i<=2*n-1;i++)
   {
       if(i<=n)
       {
       for(j=1;j<=n;j++)
       {
           if(j<=i)
           printf("*");
           else
           printf("");
       }
       printf("
");
       }
       else
       {
       for(j=2*n-1;j>=i;j--)
       {
           if(j>=i)
           printf("*");
           else
           printf(" ");
       }
       printf("
");
       }
   }
   }
   else
   {
       printf("The pattern is not possible");
   }
   return 0;
}