#include<stdio.h>
int main()
{
long long n;
int count=0;
printf("enter the no:");
scanf("%lld",&n);
while(n!=0)
{
n/=10;
++count;
}
printf("no is;",count);
}
