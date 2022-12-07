#include<stdio.h>
int large(int a,int b,int c);
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int x=large(a,b,c);
}
int large(int a,int b,int c)
{
    if(a>c && a>b)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",c);
    }
    return 0;
}