#include <stdio.h>

int main() {

    //The formula to calculate the area of a circumference is defined as A = π . R2. Considering to this problem that π = 3.14159:
    //Calculate the area using the formula given in the problem description.

     double r,a,n=3.14159;
     scanf("%lf",&r);
     a=n*r*r;
     printf("A=%.4lf\n",a);
    return 0;
}
