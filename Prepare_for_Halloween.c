#include<stdio.h>
int hallo(int t,int x,int y);
int main()
{
    int t,x,y;
    scanf("%d
",&t);
    int s=hallo(t,x,y);
}
int hallo(int t,int x,int y)
{
    while(t)
    {
        scanf("%d %d",&x,&y);
        if(x*2>y*5)
        {
            printf("Chocolate
");
        }
        else if(x*2==y*5)
        {
            printf("Either
");
        }
        else if(x*2<y*5)
        {
            printf("Candy
");
        }
        t--;
    }
    return 0;
}