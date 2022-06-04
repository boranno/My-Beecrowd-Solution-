#include<stdio.h>
int main()
{
    float x,sum=0;
    int l=0,i;
    while(1)
    {
        labal1:
        scanf("%f",&x);
        if(x>=0 && x<=10)
        {
            sum+=x;
            l++;
        }
        else
        {
            printf("nota invalida\n");
        }
        if(l==2)
        {
            printf("media = %.2f\n",sum/2.0);
            while(1)
            {
                scanf("%f",&x);
                if(x==1)
                {
                    printf("novo calculo (1-sim 2-nao)\n");
                    sum=0,l=0;
                    goto labal1;
                }
                else if(x==2)
                {
                    break;
                }
                else
                {
                    printf("novo calculo (1-sim 2-nao) else\n");
                }
            }
            break;
        }
    }
    return 0;
}
