#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,pos,neg,agv,sqrte;
    scanf("%lf%lf%lf",&a,&b,&c);
    agv=(b*b-4*a*c);


    if (a == 0 || agv<0){
        printf("Impossivel calcular\n");
    }
    else {
            sqrte=sqrt(agv);
            pos=(-b+sqrte)/(2*a);
            neg=(-b-sqrte)/(2*a);
            printf("R1 = %.5lf\nR2 = %.5lf\n",pos,neg);
    }
    return 0;
}
