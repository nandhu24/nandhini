#include<stdio.h>
int main()
{
int n,rem,revint=0,oint;
printf("enter the integer:");
scanf("%d",&n)
oint=n;
if(n!=0)
{
rem=n%10;
revint=revint*10+rem;
n/=10;
}
if(revint=rem)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
