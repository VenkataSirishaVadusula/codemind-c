#include<stdio.h>
int main()
{
    int X;
    scanf("%d",&X);
    if(X%3==1)
    printf("HUGE");
    else if(X%3==0)
    printf("NORMAL");
    else
    printf("SMALL");
}