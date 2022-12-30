#include<stdio.h>
int brain(int x,int y);
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int s=brain(x,y);
}
int brain(int x,int y)
{
    if(x<y)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}