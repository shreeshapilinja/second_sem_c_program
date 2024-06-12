#include <stdio.h>
void main()
{
    int m, n, a, b, lcm, rem;
    printf("Enter two integers\n");
    scanf("%d%d",&m,&n);
    a=m;
    b=n;
    do
    {
        rem=m%n;
        m=n;
        n=rem;
    }while(n!=0);
    lcm=(a*b)/m;
    printf("LCM is %d\n",lcm);
    printf("GCD is %d\n",m);
}