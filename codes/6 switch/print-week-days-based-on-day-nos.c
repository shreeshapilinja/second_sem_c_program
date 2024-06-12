#include <stdio.h>
void main()
{
    int daynumber;
    printf("Enter day number from 0 to 6\n");
    scanf("%d", &daynumber);
    switch(daynumber)
    {
        case 0: printf("Sunday");
        break;
        case 1: printf("Monday");
        break;
        case 2: printf("tuesday");
        break;
        case 3: printf("wednesday");
        break;
        case 4: printf("thursday");
        break;
        case 5: printf("friday");
        break;
        case 6: printf("saturday");
        break;
        default: printf("invalid input");
    }
}