#include<stdio.h>
int even(int n,int sum);
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    even(n,sum);
}
int even(int n,int sum)
{
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            break;
        }
        sum=sum+a[i];
    }
    printf("%d",sum);
}