#include<stdio.h>
int main()
{
    int a,i,j,k,l;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        float n1,dive;
        int d=0;
        scanf("%f",&n1);
        while(1)
        {
            if(n1>1.0)
            {
                dive=n1/2.0;
                n1=dive;
                d++;
            }
            else
            {
                break;
            }
        }
        printf("%d dias\n",d);
    }
    return 0;
}
