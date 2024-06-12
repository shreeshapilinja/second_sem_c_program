#include<stdio.h> 
#define PI 3.1415927 
void main() 
{ 
    float peri, r; 
    printf("Enter value for radius\n"); 
    scanf("%f",&r); peri=2*PI*r; 
    printf("Perimeter=%f\n",peri);
}