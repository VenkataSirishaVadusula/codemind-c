#include<stdio.h>
void serie(int i,int n,int a,int b);
int main()
{
    int i,n,a=0,b=0;
    scanf("%d",&n);
    serie(i,n,a,b);
}
void serie(int i,int n,int a,int b)
{
    for(i=1;i<=n+1;i++)
    {
        if(i%2==0)
        {
            a=(a*3)+2;
            printf("%d ",a);
        }
        else
        {
            b=(b*2)+1;
            printf("%d ",b);
        }
    }
}