#include<stdio.h>
void large(int a,int b,int c);
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    large(a,b,c);
}
void large(int a,int b,int c)
{
    if(a>c && a>b)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",c);
    }
}