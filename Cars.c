#include<stdio.h>
void cars(int n);
int main()
{
    int n=4;
    scanf("%d",&n);
    cars(n);
}
void cars(int n)
{
    if(n%4==0)
    printf("%d",n/4);
    else 
    printf("%d",n/4+1);
}