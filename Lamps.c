#include<stdio.h>
void lamps(int n,int k,int x,int y);
int main()
{
    int n,k,x,y;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    lamps(n,k,x,y);
}
void lamps(int n,int k,int x,int y)
{
    if(x<y)
    {
        printf("%d",n*x);
    }
    else
    {
        printf("%d",k*x+(n-k)*y);
    }
}