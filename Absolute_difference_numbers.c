#include <stdio.h>
#include<stdlib.h>
long int digitsCount(int long n)
{
    int len = 0;
    while (n > 0)
    {
        len++;
        n /= 10;
    }
    return len;
}
long int absoluteFirstLast(int long n, int x){
    int i = 0, mod = 1;
    while (i < x) 
    {
        mod *= 10;
        i++;
    }
    int last = n % mod;
    long int len = digitsCount(n);
    while (len != x)
    {
        n /= 10;
      len--;
    }
     int first = n;
    return abs(first - last);
}
 int main()
{
    long int n , x ;
    scanf("%ld%ld",&n,&x);
   printf("%ld",absoluteFirstLast(n, x));
    return 0;
}
 