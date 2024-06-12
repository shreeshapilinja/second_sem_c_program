#include<stdio.h>
void main()
{
    int f, f1=0,f2=1,n,i;
    printf("Enter value of n\n");
    scanf("%d",&n);
    printf("Fibonacci numbers are\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\t",f1);
        f=f1+f2;
        f1=f2;
        f2=f;
    }
}