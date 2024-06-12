#include <stdio.h>
#define PI 3.1415927

void main()
{
    int a,b,c;
    printf("Enter two integer: \n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("after swapping\na=%d and b=%d\n",a,b);
}