#include<stdio.h>
void main()
{
    int i=1, n, sum=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i++;
        
    }
    printf("Sum is %d\n",sum);
}