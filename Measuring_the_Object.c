#include<stdio.h>
int main()
{
    int W,X,Y,Z;
    scanf("%d%d%d%d",&W,&X,&Y,&Z);
    if(Z+X+Y==W)
    printf("YES");
    else if(Z+X==W||X+Y==W)
    printf("YES");
    else if(Z+Y==W||X==W||Y==W||Z==W)
    printf("YES");
    else
    printf("NO");
}
