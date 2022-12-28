#include<stdio.h>
void sudi(int a1,int b1,int s1,int d1);
int main()
{
   int a1,b1,s1,d1;
   scanf("%d%d",&a1,&b1);
   sudi(a1,b1,s1,d1);
}
void sudi(int a1,int b1,int s1,int d1)
{
   float a2,b2,s2,d2;
   scanf("%f%f",&a2,&b2);
   s1=a1+b1;
   d1=a1-b1;
   printf("%d %d
",s1,d1);
   s2=a2+b2;
   d2=a2-b2;
   printf("%0.1f %0.1f",s2,d2);
}