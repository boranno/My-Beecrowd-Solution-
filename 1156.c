#include<stdio.h>
int main()
{
    float sum=1,i,j=2.0;
    for(i=3;i<40;i)
    {
        sum+=(i/j);
        j=j*2.0;
        i+=2.0;
    }
    printf("%.2f\n",sum);
    return 0;
}
