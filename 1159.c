#include<stdio.h>
int main()
{
    int x;
    while(1)
    {
        scanf("%d",&x);
        if(x==0)
        {
            break;
        }
        int i,l=0,sum=0;
        for(i=x;l<5;i++)
        {
            if(i%2==0)
            {
                sum=sum+i;
                l++;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
