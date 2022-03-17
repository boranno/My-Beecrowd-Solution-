#include <stdio.h>

int main()
{
    float a,b,avg;
    scanf("%f%f",&a,&b);
     if (a==1.0){
        avg=4.00*b;
        printf("Total: R$ %.2f\n",avg);
    }
    else if (a==2.0){
       avg=4.50*b;
        printf("Total: R$ %.2f\n",avg);
    }
    else if (a==3.0){
        avg=5.00*b;
        printf("Total: R$ %.2f\n",avg);
    }
    else if (a==4){
        avg=2.00*b;
        printf("Total: R$ %.2f\n",avg);
    }
    else if (a==5.0){
        avg=1.50*b;
        printf("Total: R$ %.2f\n",avg);
    }
    else{
        return 0;
    }
    return 0;

}
