#include<stdio.h>
void fibo(int a,int b,int c,int n);
int main()
{
    int a=0,b=1,c=0,n;
    scanf("%d",&n);
    fibo(a,b,c,n);
}
void fibo(int a,int b,int c,int n)
{
    while(n>c)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(n-a<b-n)
    {
        printf("%d ",a);
    }
    else if(n-a==b-n)
    {
        printf("%d %d",a,b);
    }
    else
    {
        printf("%d ",b);
    }
}