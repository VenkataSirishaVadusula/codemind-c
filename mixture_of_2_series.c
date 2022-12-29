#include<stdio.h>
int main()
{
    int i,n,k=0,a,b=0;
    scanf("%d",&n);
    for(i=1;i<=n+1;i++)
    {
        if(i%2==0)
        {
            printf("%d ",b);
            b++;
        }
        else
        {
            a=k*2;
            printf("%d ",a);
            k++;
        }
    }
}