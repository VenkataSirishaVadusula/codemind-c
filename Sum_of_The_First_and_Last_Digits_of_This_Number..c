#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,l,f,c=0;
    scanf("%d",&t);
    while(t)
    {
        scanf("%d",&n);
        l=n%10;
        while(n>=10)
        {
            n=n/10;
        }
        f=n;
        printf("%d
",f+l);
        t--;
    }
}