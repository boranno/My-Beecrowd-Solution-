#include <stdio.h>

int main() {

 long int X,M;
 while(1)
 {
     scanf("%ld %ld",&X,&M);
     if(M==0 && X==0)
     {
         break;
     }
     printf("%ld\n",M*X);
 }
    return 0;
}
