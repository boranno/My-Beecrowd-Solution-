#include<stdio.h>
#include<math.h>
int main()
{
    int Tc;
    scanf("%d",&Tc);
    while(Tc--)
    {
        long long int n,c,r;
        scanf("%lld",&n);
        c=1+8*n;
        r=(-1+sqrt(c))/2;

        printf("%d\n",r);
    }
    return 0;
}
