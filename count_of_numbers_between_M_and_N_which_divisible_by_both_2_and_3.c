#include<stdio.h>
void count(int M,int N,int i,int c);
int main()
{
    int M,N,i,c=0;
    scanf("%d%d",&M,&N);
    count(M,N,i,c);
}
void count(int M,int N,int i,int c)
{
    for(i=M;i<=N;i++)
    {
        if(i%2==0 && i%3==0)
        {
            c++;
        }
    }
    printf("%d",c);
}