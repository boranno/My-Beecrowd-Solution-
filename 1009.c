#include<stdio.h>
int main()
{
    char name[20];
    double a,b,parsent,avg;
    scanf("%s",&name);
    scanf("%lf%lf",&a,&b);
    parsent=(b*15)/100;
    avg=a+parsent;
    printf("TOTAL = R$ %.2lf\n",avg);
    return 0;
}
