#include<stdio.h>
void hallo(int t,int x,int y);
int main()
{
    int t,x,y;
    scanf("%d
",&t);
    hallo(t,x,y);
}
void hallo(int t,int x,int y)
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
}