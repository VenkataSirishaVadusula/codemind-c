#include<stdio.h>
void array(int n,int sum);
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    array(n,sum);
}
void array(int n,int sum)
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
}