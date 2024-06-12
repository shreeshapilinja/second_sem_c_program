#include<stdio.h>
#include<math.h>
void main()
{
    char symbols;
    float a,b,c;
    printf("enter first number\n");
    scanf("%f",&a);
    printf("select the operator\n+ add\n- subtract (a-b)\n* multiply\n/ division\n^ power (a^b)\ns squareroot (s or any other charecter)\n");
    scanf("%*c%c",&symbols);
    printf("enter second number\n");
    scanf("%f",&b);
    printf("Answer for %f%c%f = ",a,symbols,b);
    switch(symbols)
    {
        case '+': printf("%.2f",a+b);
                break;
        case '-': printf("%.2f",a-b);
                break;
        case '*': printf("%.2f",a*b);
                break;
        case '/': printf("%.2f",a/b);
                break;
        case '^': printf("%.2f",pow(a,b));
                break;
        default:printf("square root of a %.2f\nsquare root of b %.2f",sqrt(a),sqrt(b));
    }
}