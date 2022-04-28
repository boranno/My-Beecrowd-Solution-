#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        float x,y,z;
        scanf("%f%f",&x,&y);
        if(y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            z=x/y;
            printf("%.1f\n",z);
        }
    }
}
