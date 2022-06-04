#include<stdio.h>
int main()
{
    float x,sum=0;
    int l=0;
    while(1)
    {
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
            break;
        }
    }
    return 0;
}
