
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,pos,neg,agv;
    scanf("%f%f%f",&a,&b,&c);
    agv=((b*b-4*a*c));
    printf("%f",agv);
    pos=(-a+agv)/2*a;
    neg=(-a-agv)/2*a;
    printf("R1 = %f\nR2 = %f\n",pos,neg);
    return 0;
}
