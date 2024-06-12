#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
float a, b, c, root1, root2, real, imag, d;
printf("Enter values for a, b and c\n");
scanf("%f%f%f",&a,&b,&c);
if(a==0)
{
printf("Roots are not possible\n");
exit(0);
}
d=b*b-4*a*c;
if(d==0)
{
root1=root2=-b/(2*a);
printf("The real and equal root is %f\n",root1);
}
else if(d>0)
{
root1=(-b+sqrt(d))/(2*a);
root2=(-b-sqrt(d))/(2*a);
printf("The distinct roots are %f and %f\n",root1,root2);
}
else
{
real=-b/(2*a);
imag=sqrt(fabs(d))/(2*a);
printf("The complex roots are\n");
printf("Root1=%f+i%f\n",real,imag);
printf("Root2=%f-i%f\n",real,imag);
}
}