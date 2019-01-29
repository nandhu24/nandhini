#include <stdio.h>
int main()
{
int n, i, fg = 0;
printf("Enter integer: ");
scanf("%d", &n);
for(i = 2; i <= n/2; ++i)
{
if(n%i == 0)
{
fg = 1;
break;
}
}
if (fg==0)
{
printf("yes");
}
else
{
printf("not");
}
return 0;
}
