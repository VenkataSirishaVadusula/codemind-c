#include<stdio.h>
int stock(int t,int a,int b);
int main()
{
    int t,a,b;
    scanf("%d",&t);
    int x=stock(t,a,b);
}
int stock(int t,int a,int b)
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
     return 0;
}