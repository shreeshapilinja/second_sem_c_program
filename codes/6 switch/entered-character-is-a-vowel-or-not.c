/*Program to check whether an entered character is a vowel or not*/
#include<stdio.h>
void main()
{
char ch;
printf("Enter a character\n ");
scanf("%c",&ch);
switch(ch)
{
case 'A' :
case 'a' :
case 'E' :
case 'e' :
case 'I' :
case 'i' :
case 'O' :
case 'o' :
case 'U' :
case 'u' : printf("%c is an vowel\n",ch);
break;
default: printf("%c is not an vowel\n",ch);
}
}
