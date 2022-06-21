#include<stdio.h>
int main()
{
    int p,i;
    float avg,pnum,q;
    scanf("%d",&p);
    for(i=0;i<p;i++)
    {
        scanf("%f %f",&pnum,&q);
        if(pnum==1001)
        {
            avg=avg+(1.50*q);
        }
        else if(pnum==1002)
        {
            avg=avg+(2.50*q);
        }
        else if(pnum==1003)
        {
            avg=avg+(3.50*q);
        }
        else if(pnum==1004)
        {
            avg=avg+(4.50*q);
        }
        else if(pnum==1005)
        {
            avg=avg+(5.50*q);
        }
    }
    printf("%.2f\n",avg);
    return 0;
}
