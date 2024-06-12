#include<stdio.h>
void main()
{
    float c, f;
    printf("Enter the temperature in Fahrenheit \n");
    scanf("%f", &f);
    c =(f - 32) * 5 / 9;
    printf("Temperature in Celsius is %f\n", c);
}