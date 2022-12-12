#include<stdio.h>
void capa(int cap,int s,int t,int b,int tc);
int main()
{
    int cap,s,t,b,tc;
    scanf("%d%d%d",&s,&t,&b);
    capa(cap,s,t,b,tc);
}
void capa(int cap,int s,int t,int b,int tc)
{
    cap=2*s*t*b*512;
    tc=cap/1024;
    printf("%dKB",tc);
}