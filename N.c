#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("enter the no:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
sum=sum+i;
}
printf("%d",sum);
return 0;
}
