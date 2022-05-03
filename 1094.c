#include<stdio.h>
int main()
{
    int n,c=0,r=0,s=0,i,j,total;
    float cpar,rpar,spar;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a;
        char b;
        scanf("%d %c",&a,&b);
        if(b=='C')
        {
            c+=a;
        }
        else if(b=='R')
        {
            r+=a;
        }
        else if(b=='S')
        {
            s+=a;
        }
    }
    total=c+r+s;
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n",c,r,s);
    printf("Percentual de coelhos: %.2f %%\n",(c*100.00)/(float)total);
    printf("Percentual de ratos: %.2f %%\n",(r*100.00)/(float)total);
    printf("Percentual de sapos: %.2f %%\n",(s*100.00)/(float)total);
    return 0;
}
