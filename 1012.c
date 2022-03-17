#include<stdio.h>
int main()
{
    double a,b,c,triangle,circle,trapezium,square,rectangle,pi=3.14159;
    scanf("%lf%lf%lf",&a,&b,&c);
    triangle=(c*a)/2.0;
    circle=pi*c*c;
    trapezium=((a+b)*c)/2.0;
    square=b*b;
    rectangle=a*b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",triangle,circle,trapezium,square,rectangle);
    return 0;
}
