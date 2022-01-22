#include<stdio.h>
int main()
{
    int M,N;
    scanf("%d%d",&M,&N);
    if(M%2==0 ||N%2==0)
    printf("Player 1");
    else
    printf("Player 2");
    return 0;
}