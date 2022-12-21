#include<stdio.h>
int bags(int n,int k,int m);
int main()
{
    int n,k,m;
    scanf("%d%d%d",&n,&k,&m);
    int x=bags(n,k,m);
}
int bags(int n,int k,int m)
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
   return 0; 
}