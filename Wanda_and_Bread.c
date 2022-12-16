#include<stdio.h>
void bread(int n,int m,int k);
int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    bread(n,m,k);
}
void bread(int n,int m,int k)
{
    if(m*k<n)
    printf("NO");
    else
    printf("YES");
}