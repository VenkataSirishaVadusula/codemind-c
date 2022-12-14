#include<stdio.h>
int ele(int n,int k);
int main()
{
    int n,k=0;
    scanf("%d",&n);
    int s=ele(n,k);
}
int ele(int n,int k)
{
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int num;
    scanf("%d",&num);
    for(int j=0;j<n;j++)
    {
        if(num==x[j])
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