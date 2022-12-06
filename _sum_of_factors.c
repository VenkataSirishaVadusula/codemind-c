#include<stdio.h>
void sum(int i,int s,int n);
int main()
{
    int i,s=0,n;
    scanf("%d",&n);
    sum(i,s,n);
}
void sum(int i,int s,int n)
{
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    printf("%d",s);
}