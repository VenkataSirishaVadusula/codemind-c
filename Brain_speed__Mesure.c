#include<stdio.h>
void brain(int x,int y);
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    brain(x,y);
}
void brain(int x,int y)
{
    if(x<y)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}