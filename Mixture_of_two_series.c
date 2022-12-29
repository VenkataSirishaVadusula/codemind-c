#include<stdio.h>
#include<math.h>
void mix(int a,int b,int k1,int k2,int i,int n);
int main()
{
    int a,b,k1=0,k2=0,i,n;
    scanf("%d",&n);
    mix(a,b,k1,k2,i,n);
}
void mix(int a,int b,int k1,int k2,int i,int n)
{
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            a=pow(3,k1);
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