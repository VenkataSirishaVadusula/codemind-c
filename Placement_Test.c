#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int x,n;
        scanf("%d%d",&x,&n);
        printf("%d
",(n*(x/10)));
    }
}