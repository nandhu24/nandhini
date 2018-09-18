#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter the number");
scanf("%d",&a);
if(a%2==0&&a>=0)
{
printf("\n even");
}
else if(a<=0)
{
printf("invalid");
}
else
{
printf("odd");
}
getch();
}
