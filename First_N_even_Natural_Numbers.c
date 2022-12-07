#include<stdio.h>
void even(int i,int n);
int main()
{
    int i,n;
    scanf("%d",&n);
    even(i,n);
}
void even(int i,int n)
{
    for(i=n*2;i>=1;i--)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}