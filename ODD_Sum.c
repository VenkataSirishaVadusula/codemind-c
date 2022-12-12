#include<stdio.h>
int odd(int n,int sum);
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int x=odd(n,sum);
}
int odd(int n,int sum)
{
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
        sum=sum+a[i];
        }
    }
    printf("%d",sum);
    return 0;
}