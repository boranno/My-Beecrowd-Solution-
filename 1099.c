#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        int X,Y,temp,j,sum=0;
        scanf("%d %d",&X,&Y);
        if(X>Y)
        {
            temp=Y;
            Y=X;
            X=temp;
        }
        for(j=X+1;j<Y;j++)
        {
            if(j%2!=0)
            {
                sum+=j;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
