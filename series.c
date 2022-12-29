#include<stdio.h>
#include<math.h>
int series(int a,int b,int k1,int k2,int i,int n);
int main()
{
    int a,b,k1=0,k2=0,i,n;
    scanf("%d",&n);
    printf("0 ");
    int x=series(a,b,k1,k2,i,n);
}
int series(int a,int b,int k1,int k2,int i,int n)
{
    for(i=0;i<=n-2;i++)
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
    return 0;
}