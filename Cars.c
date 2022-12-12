#include<stdio.h>
int cars(int n);
int main()
{
    int n=4;
    scanf("%d",&n);
    int x=cars(n);
}
int cars(int n)
{
    if(n%4==0)
    printf("%d",n/4);
    else 
    printf("%d",n/4+1);
    return 0;
}