#include <stdio.h>
void main()
{
int i, j, k, temp;
printf("I\tI^2\tI^3\tI^4 \n");
printf("--------------------------------\n");
i = 1;
while (i < 10) /* Outer loop */
{
j=1;
while (j < 5) /* 1st level of nesting */
{
temp=1;
k=1;
while (k < j)
{
temp = temp * i;
k++;
}
printf ("%d\t", temp);
j++;
}
printf ("\n");
i++;
}
}
