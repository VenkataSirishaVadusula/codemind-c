#include<stdio.h>
void mix(int i,int n,int k,int a,int b);
int main()
{
    int i,n,k=0,a,b=0;
    scanf("%d",&n);
    mix(i,n,k,a,b);
}
void mix(int i,int n,int k,int a,int b)
{
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