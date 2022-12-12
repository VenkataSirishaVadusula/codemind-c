#include<stdio.h>
int mario(int X);
int main()
{
    int X;
    scanf("%d",&X);
    int x=mario(X);
}
int mario(int X)
{
    if(X%3==1)
    printf("HUGE");
    else if(X%3==0)
    printf("NORMAL");
    else
    printf("SMALL");
    return 0;
}