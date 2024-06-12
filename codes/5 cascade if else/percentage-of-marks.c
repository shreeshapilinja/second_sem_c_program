#include<stdio.h>
void main()
{
    int marks;
    printf("Enter the marks obtained\n");
    scanf("%d",&marks);
    if (marks>100)
    printf("Invalid Marks\n");
    else if(marks >= 80)
    printf("S Grade\n");
    else if(marks >= 70)
    printf("A Grade\n");
    else if(marks >= 60)
    printf("B Grade\n");
    else if(marks >= 50)
    printf("C Grade\n");
    else if(marks >= 45)
    printf("D Grade\n");
    else if(marks >= 40)
    printf("E Grade\n");
    else
    printf("Fail\n");
}