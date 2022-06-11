#include<stdio.h>
int main()
{

    long long int n,m;
    while(scanf("%lld %lld",&n,&m)!=EOF)
    {
        int i,j,k,l,d,r,sum=0;
        for(;m>0;)
        {
            r=m%10;;
            m=m/10;

            sum=sum+r;
        }
        if(sum%3==0)
        {
            printf("%d sim\n",sum);
        }
        else{
            printf("%d nao\n",sum);
        }
    }
    return 0;
}

