#include<math.h>
#include<stdio.h>
int main()
{
    double a,b,c,d,e,f;
    scanf("%lf%lf%lf",&a,&b,&c);
    d=sqrt(b*b-4* a*c);
    switch(d>0)
    {
    case 0:
        printf("Impossivel calcular\n");
        break ;
    case 1:
        switch(a>0)
        {
        case 0:
            printf("Impossivel calcular\n");
            break ;
        case 1:
            e=(-b+d)/(2*a);
            f=(-b-d)/(2*a);
            printf("R1 = %.5lf\n",e);
            printf("R2 = %.5lf\n",f);
        }
    }
    return 0;
}
