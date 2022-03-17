#include<stdio.h>
//Calculate a car's average consumption being provided the total distance traveled (in Km) and the spent fuel total (in liters).
int main()
{
    int a;
    float b,avg;
    scanf("%d%f",&a,&b);
    avg=a/b;
    printf("%.3f km/l\n",avg);
    return 0;
}
