#include<stdio.h>
#include<conio.h>
void main()
{
char n;
clrscr();
printf("enter the letter:");
scanf("%c",&n);
if(n>='a'&&n<='z')
{
printf("alphabet");
}
else
{
printf("no");
}
getch();
}
