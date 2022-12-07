#include<stdio.h>
int even(int i,int n);
int main()
{
    int i,n;
    scanf("%d",&n);
    int x=even(i,n);
}
int even(int i,int n)
{
    for(i=n*2;i>=1;i--)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}