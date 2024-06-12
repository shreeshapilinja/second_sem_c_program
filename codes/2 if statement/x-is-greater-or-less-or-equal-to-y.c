#include <stdio.h>
void main()
{
    int x, y;
    printf("enter the value of x:\n");
    scanf("%d", &x);
    printf("enter the value of y:\n");
    scanf("%d", &y);
    if (x>y)
    {
	printf("x is greater than y\n");
    }
    if (x<y)
    {
	printf("x is less than y\n");
    }
    if (x==y)
    {
	printf("x is equal to y\n");
    }
}
