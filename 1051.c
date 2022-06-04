#include<stdio.h>
int main()
{
    float n,taxe,a,b,c;
    scanf("%f",&n);
    if(n<=2000)
    {
        printf("Isento\n");
    }
    else if(n>2000 && n<= 3000)
    {
        printf("R$ %.2f\n",((n-2000)*8)/100);
    }
    else if(n>3000 && n<=4500)
    {
        printf("R$ %.2f\n",(((n-3000)*18)/100)+80);
    }
    else if(n>4500)
    {
        printf("R$ %.2f\n",(((n-4500)*28)/100)+349.9982);
    }
    return 0;
}
