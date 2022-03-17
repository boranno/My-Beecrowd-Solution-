#include<stdio.h>
int main()
{
    int a,b,c,d,csd,asb;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    csd=c+d;
    asb=a+b;
    if(b>c && d>a && csd>asb && c>0 && d>0 && a%2==0){
        printf("Valores aceitos\n");
    }
    else{
        printf("Valores nao aceitos\n");
      }

    return 0;
}
