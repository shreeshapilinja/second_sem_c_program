#include <stdio.h>

void main()
{
    float a,b,area,peri;
    printf("Enter length and breadth: \n");
    scanf("%f%f",&a,&b);
    area=a*b;
    peri=2*(a+b);
    printf("area = %f\n",area);
    printf("perimeter = %f\n",peri);

}
