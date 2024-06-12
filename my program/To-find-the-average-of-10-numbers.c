# include <stdio.h>
void main()
{
int i, avg, sample[10];
for (i=1; i<11; i++)
{
printf ("\nEnter number %d :", i);
scanf("%d", &sample[i]);
}
avg = 0;
for (i=1; i<11; i++)
avg = avg + sample[i];
printf ("\nThe average is: %d\n", avg/10);
}