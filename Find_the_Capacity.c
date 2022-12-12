#include<stdio.h>
int capa(int cap,int s,int t,int b,int tc);
int main()
{
    int cap,s,t,b,tc;
    scanf("%d%d%d",&s,&t,&b);
    int x=capa(cap,s,t,b,tc);
}
int capa(int cap,int s,int t,int b,int tc)
{
    cap=2*s*t*b*512;
    tc=cap/1024;
    printf("%dKB",tc);
    return 0;
}