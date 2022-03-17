#include<stdio.h>
int main()
{
    float num;
    float a1=0.0,a2=25.0,a3=50.0,a4=75.0,a5=100.0;
    scanf("%f",& num);
    if (num>=a1 && num<=a2)
        printf("Intervalo [0,25]\n");

    else if(num>a2 && num<=a3)
        printf("Intervalo (25,50]\n");

    else if(num>a3 && num<=a4)
        printf("Intervalo [50,75]\n");

    else if(num>a4 && num<=a5)
        printf("Intervalo (75,100]\n");

    else
        printf("Fora de intervalo\n");

    return 0;

}
