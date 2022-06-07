#include<stdio.h>
int main()
{
    int Tcase,i;
    scanf("%d",&Tcase);
    for(i=0;i<Tcase;i++)
    {
        int  T,j,l=0,sum=1;
        scanf("%d",&T);
        for(j=1;j<T;j++)
        {
            if(j%2!=0)
            {
                sum=sum-1;
            }
            else
            {
                sum=sum+1;
            }
        }
        printf("%d\n",sum);
        sum=1;
    }
    return 0;
}
