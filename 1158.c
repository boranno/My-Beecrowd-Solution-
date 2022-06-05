#include<stdio.h>
int main()
{
    int x,n,o=0,y;
    scanf("%d",&n);
    while(o<n)
    {
        scanf("%d %d",&x,&y);
        int i,l=0,sum=0;
        for(i=x;l<y;i++)
        {
            if(i%2!=0)
            {
                sum=sum+i;
                l++;
            }
        }
        printf("%d\n",sum);
        o++;
    }
    return 0;
}

