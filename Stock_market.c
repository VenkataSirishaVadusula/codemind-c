#include<stdio.h>
void stock(int t,int a,int b);
int main()
{
    int t,a,b;
    scanf("%d",&t);
    stock(t,a,b);
}
void stock(int t,int a,int b)
{
    while(t)
    {
        scanf("%d%d",&a,&b);
        if(a>b)
        {
            printf("LOSS
");
        }
        else if(a<b)
        {
            printf("PROFIT
");
        }
        else
        {
        printf("NEUTRAL
");
        }
        t--;
    }
}