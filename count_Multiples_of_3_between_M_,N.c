#include<stdio.h>
void count(int n,int m,int i,int c);
int main()
{
    int n,m,i,c=0;
    scanf("%d%d",&m,&n);
    count(n,m,i,c);
}
void count(int n,int m,int i,int c)
{
    for(i=m;i<=n;i++)
    {
       if(i%3==0)
        {
            c++;
        }
    }
    printf("%d",c);
}