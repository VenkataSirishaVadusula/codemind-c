#include<stdio.h>
void bags(int n,int k,int m);
int main()
{
    int n,k,m;
    scanf("%d%d%d",&n,&k,&m);
    bags(n,k,m);
}
void bags(int n,int k,int m)
{
    int cpb=m*k;
    if(n%cpb==0)
    {
        printf("%d",n/cpb);
    }
    else
    {
        printf("%d",n/cpb+1);
    }
}