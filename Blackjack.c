#include<stdio.h>
void blackjack(int a,int b);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    blackjack(a,b);
}
void blackjack(int a,int b)
{
    int c=21-(a+b);
    if(c>10)
    {
        printf("%d",-1);
    }
    else
    {
        printf("%d",c);
    }
}