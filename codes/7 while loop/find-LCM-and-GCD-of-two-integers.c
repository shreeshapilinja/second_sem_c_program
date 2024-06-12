#include <stdio.h>
void main()
{
    int m, n, a, b, lcm, rem;
    printf("Enter two integers\n");
    scanf("%d%d",&m,&n);
    a=m;
    b=n;
    while(n!=0)
    {
        rem=m%n;
        m=n;
        n=rem;
    }
    lcm=(a*b)/m;
    printf("LCM is %d\n",lcm);
    printf("GCD is %d\n",m);
}