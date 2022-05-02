#include<stdio.h>
int main()
{
    int x,y,i,c,mx,mn;
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        mx=x;
        mn=y;
    }
    else
    {
        mx=y;
        mn=x;
    }

    //printf("%d %d",mx,mn);
    for(i=mn+1;i<mx;i++)
    {
        c=i%5;
        if(c==2 || c==3)
        {
            printf("%d\n",i);
        }
    }

}
