#include <stdio.h>

int main() {

     int Tc,t,sum=0;
     scanf("%d",&Tc);
     for(t=0;t<Tc;t++)
     {
         int a,b;
         scanf("%d %d",&a,&b);
         sum=sum+(a*b);
     }
     printf("%d\n",sum);
    return 0;
}
