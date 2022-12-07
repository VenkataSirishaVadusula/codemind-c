#include<stdio.h>
int count(int M,int N,int i,int c);
int main()
{
    int M,N,i,c=0;
    scanf("%d%d",&M,&N);
    int x=count(M,N,i,c);
}
int count(int M,int N,int i,int c)
{
    for(i=M;i<=N;i++)
    {
        if(i%2==0 && i%3==0)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}