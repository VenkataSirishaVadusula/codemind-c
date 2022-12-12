#include<stdio.h>
void obj(int W,int X,int Y,int Z);
int main()
{
    int W,X,Y,Z;
    scanf("%d%d%d%d",&W,&X,&Y,&Z);
    obj(W,X,Y,Z);
}
void obj(int W,int X,int Y,int Z)
{
    if(Z+X+Y==W)
    printf("YES");
    else if(Z+X==W||X+Y==W)
    printf("YES");
    else if(Z+Y==W||X==W||Y==W||Z==W)
    printf("YES");
    else
    printf("NO");
}