#include<stdio.h>
void sequence(int n,int i,int k,int l);
int main()
{
    int n,i,k,l;
    scanf("%d",&n);
    sequence(n,i,k,l);
}
void sequence(int n,int i,int k,int l)
{
    while(n!=1)
    {
        if(n%2==0)
        {
            printf("%d ",n);
            n/=2;
        }
        else
        {
            printf("%d ",n);
            n=(n*3)+1;
        }
    }
    printf("1");
}