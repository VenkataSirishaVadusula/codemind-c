#include<stdio.h>
#include<math.h>
void eos(int i,int n,int a,int b,int k1,int k2);
int main()
{
    int i,n,a,b,k1=0,k2=1;
    scanf("%d",&n);
    eos(i,n,a,b,k1,k2);
}
void eos(int i,int n,int a,int b,int k1,int k2)
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
}