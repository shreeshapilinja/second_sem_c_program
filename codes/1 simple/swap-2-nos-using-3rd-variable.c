/* To swap values of two integer variables */ 
#include<stdio.h> 
void main() 
{ 
    int a, b, c; 
    printf("Enter two integers\n"); 
    scanf("%d%d",&a, &b);
    c=a; a=b; b=c; 
    printf("After swap a =%d and b=%d\n",a, b); 
}