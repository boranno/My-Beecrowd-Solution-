#include<stdio.h>
int main()
{
    int a,b,c,d;
    float e,f,avg;
    scanf("%d%d%f",&a,&b,&e);
    scanf("%d%d%f",&c,&d,&f);
    avg=b*e+d*f;
    printf("VALOR A PAGAR: R$ %.2f\n",avg);
    return 0;
}
