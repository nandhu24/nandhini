include <stdio.h>
#include <math.h>
int main()
{
int number, originalNumber, remainder, result = 0, n = 0 ;
printf("Enter an integer: ");
scanf("%d", &number);
originalNumber = number;
while (originalNumber != 0)
{
originalNumber /= 1;
++n;
}
originalNumber = number;
while (originalNumber != 0)
{
remainder = originalNumber%10;
result += pow(remainder, n);
originalNumber /= 10;
}
if(result == number)
printf("yes", number);
else
printf("no", number);
return 0;
}
