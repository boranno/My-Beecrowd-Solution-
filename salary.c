#include<stdio.h>
int main ()
{
    int A,B;
    float C;
    scanf("%d%d%f",&A,&B,&C);
    float salary=B*C;
    printf("NUMBER = %d\n",A);
    printf("SALARY = U$ %0.2f\n",salary);
}
