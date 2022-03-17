#include<stdio.h>
#include<math.h>
//In this problem you have to read an integer value and calculate
//the smallest possible number of banknotes in which the value may be decomposed.
//The possible banknotes are 100, 50, 20, 10, 5, 2 e 1.
//Print the read value and the list of banknotes.
int main()
{
    int a,b,c,d,e,f,g,inp;
    scanf("%d",&inp);
    a=floor(inp/100);
    b=floor((inp-a*100)/50);
    c=floor((inp-a*100-b*50)/20);
    d=floor((inp-a*100-b*50-c*20)/10);
    e=floor((inp-a*100-b*50-c*20-d*10)/5);
    f=floor((inp-a*100-b*50-c*20-d*10-e*5)/2);
    g=floor((inp-a*100-b*50-c*20-d*10-e*5-f*2)/1);
    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",inp,a,b,c,d,e,f,g);
    return 0;
}
