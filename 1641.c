#include<stdio.h>
#include<math.h>
int main()
{
    int i=1;
    while(1)
    {
        int r,b,c,j,k;
        scanf("%d",&r);
        if(r==0)
        {
            break;
        }
        scanf("%d%d",&b,&c);
        float at,pi=3.1415,d;
        d=r*2;
        at=sqrt((b*b)+(c*c));
        if(at<=d)
        {
            printf("Pizza %d fits on the table.\n",i);
        }
        else
        {
            printf("Pizza %d does not fit on the table.\n",i);
        }
        i=i+1;
    }
    return 0;
}
