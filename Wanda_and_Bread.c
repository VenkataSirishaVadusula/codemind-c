#include<stdio.h>
int bread(int n,int m,int k);
int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    int x=bread(n,m,k);
}
int bread(int n,int m,int k)
{
    if(m*k<n)
    printf("NO");
    else
    printf("YES");
    return 0;
}