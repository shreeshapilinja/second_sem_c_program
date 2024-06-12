#include<stdio.h>
void main()
{
    int age;
    printf("Enter age\n");
    scanf("%d",&age);
    if(age>=18)
        printf("Eligible\n");
    else
        printf("Not Eligible\n");
}