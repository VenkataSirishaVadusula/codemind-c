#include<stdio.h>
#include<math.h>
int eos(int i,int n,int a,int b,int k1,int k2);
int main()
{
    int i,n,a,b,k1=0,k2=1;
    scanf("%d",&n);
    int x=eos(i,n,a,b,k1,k2);
}
int eos(int i,int n,int a,int b,int k1,int k2)
{
    for(i=1;i<=n+1;i++)
    {
        if(i%2==0)
        {
            a=pow(3,k1-1);
            printf("%d ",a);
            k1++;
        }
        else
        {
            b=pow(2,k2);
            printf("%d ",b);
            k2++;  
        }
    }
    return 0;
}