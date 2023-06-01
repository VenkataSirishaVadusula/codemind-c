#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        long long int d,l,r;
        scanf("%lld%lld%lld",&d,&l,&r);
        if(d<l)
        printf("Too Early
");
        else if(d>r)
        printf("Too Late
");
        else if(d>=l&&d<r)
        printf("Take second dose now
");
    }
}