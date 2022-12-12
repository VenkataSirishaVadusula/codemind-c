#include<stdio.h>
void mario(int X);
int main()
{
    int X;
    scanf("%d",&X);
    mario(X);
}
void mario(int X)
{
    if(X%3==1)
    printf("HUGE");
    else if(X%3==0)
    printf("NORMAL");
    else
    printf("SMALL");
}