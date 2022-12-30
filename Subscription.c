#include<stdio.h>
void sub(int t,int n,int x);
int main()
{
    int t,n,x;
    scanf("%d",&t);
    sub(t,n,x);
}
void sub(int t,int n,int x)
{
    while(t)
    {
        scanf("%d",&x);
        if(x>30)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
        t--;
    }
}