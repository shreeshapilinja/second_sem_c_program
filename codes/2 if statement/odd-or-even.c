#include<stdio.h>
void main()
{ 
    int num;
    printf("Enter an integer\n");
    scanf("%d", &num);
    if(num%2==0)
        printf("Number is Even\n");
    if(num%2!=0) 
        printf("Number is Odd\n");
}