#include<stdio.h>
void main()
{
    goto s;
    a: printf("for\t");
    goto m;
    s: printf("C Programming\t");
    goto a;
    m: printf("Problem Solving\t");
}