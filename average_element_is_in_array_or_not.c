#include<stdio.h>
int array(int n,int i,int s,int k,int avg);
int main()
{
    int n,i,s=0,k=0,avg;
    scanf("%d",&n);
    int ele=array( n,i,s,k,avg);
}
int array(int n,int i,int s,int k,int avg)
{
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(int j=0;j<n;j++)
    {
        s=s+x[j];
    }
    avg=s/n;
    for(int h=0;h<n;h++)
    {
        if(avg==x[h])
        {
            printf("True");
            k++;
            break;
        }
    }
    if(k==0)
    {
        printf("False");
    }
    return 0;
}