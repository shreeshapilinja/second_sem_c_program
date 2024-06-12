/* Greatest among three integers using conditional operator */
#include<stdio.h>
void main()
{
    int a, b, c, big;
    printf("Enter three integers\n");
    scanf("%d%d%d", &a,&b,&c);
    big = a > b ? a : b;
    big = big > c ? big : c;
    printf("Biggest is %d\n",big);
}