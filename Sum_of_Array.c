#include<stdio.h>
int array(int n,int sum);
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int x=array(n,sum);
}
int array(int n,int sum)
{
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}