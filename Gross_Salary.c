#include<stdio.h>
int gross(int BS,int DA,int HRA);
int main()
{
    int BS,DA,HRA;
    scanf("%d",&BS);
    int x=gross(BS,DA,HRA);
}
int gross(int BS,int DA,int HRA)
{
    float GS;
    if(BS<=10000)
    {
        GS=BS+(0.8*BS)+(0.2*BS);
    }
    else if(BS>10000 && BS<20000)
    {
        GS=BS+(0.9*BS)+(0.25*BS);
    }
    else if(BS>20000)
    {
        GS=BS+(0.95*BS)+(0.30*BS);
    }
    printf("%0.2f",GS);
    return 0;
}