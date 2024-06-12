#include<stdio.h>
void main()
{
int num, temp, rem, rev = 0;
printf("Enter a positive integer\n");
scanf("%d",&num);
temp = num; /* having a copy of original positive integer */
while( num != 0)
{
rem = num % 10;
rev = rev * 10 + rem;
num = num / 10;
}
printf("Reverse of the positive integer is %d\n",rev); //Printing reversed integer
if(temp == rev) // comparing original positive integer with reversed one
{
printf("%d is a palindrome\n",temp);
}
else
{
printf("%d is not a palindrome\n",temp);
}
}