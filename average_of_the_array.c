#include<stdio.h>
int array(int n,int i,int s);
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    int ga=array(n,i,s);
}
int array(int n,int i,int s)
{
    int x[n];
    float avg;
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+x[i];
    }
    avg=(float)s/n;
    printf("%0.2f",avg);
}