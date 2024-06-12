#include<stdio.h>
#define PI 3.1415927 
void main() 
{ 
    float area, r; 
    printf("Enter value for radius\n"); 
    scanf("%f",&r); area=PI*r*r; 
    printf("Area=%f",area);
}