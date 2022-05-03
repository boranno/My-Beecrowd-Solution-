#include<stdio.h>
int main()
{
    int x,y=0,z,i;
    scanf("%d",&x);
    while(1)
    {
        scanf("%d",&z);
        if(z>x)
        {
            break;
        }

    }
    for(i=x;i;i++)
    {
        y++;
        if(x>z)
        {
            break;
        }
        x+=i;

    }
    printf("%d\n",y);
    return 0;
}
