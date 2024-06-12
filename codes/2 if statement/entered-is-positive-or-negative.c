#include <stdio.h>
void main() 
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0) 
    {
        printf("You entered %d is negative.\n", number);
    }
    if (number > 0) 
    {
        printf("You entered %d is positive.\n", number);
    }
}