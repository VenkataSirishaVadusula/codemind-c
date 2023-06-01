#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a>b)
        {
            if(b>c)
            {
                printf("%d
",b);
                
            }
            else
            {
                printf("%d
",c);
            }
        }
        else
        {
            if(b>c)
            {
                if(a>c)
                {
                    printf("%d
",a);
                }
                else
                {
                    printf("%d
",c);
                }
            }
            else
            {
                printf("%d
",b);
            }
        }
    }
}