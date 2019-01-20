#include <stdio.h>
int main()
{
    char ch;
    printf("enter the charater:");
    scanf("%c",&ch);
    if(ch=='a'||ch=='A'||ch=='e'||ch=='i'||ch=='E'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    printf("%c is a vowel\n",ch);
    else
    printf("%c is a consonant");
    return 0;
}
