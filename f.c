#include<stdio.h>
int main()
{
    int a,b,c,temp;
    while(1)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a==0 && b==0 && c==0)
        {
            break;
        }
        if(c<a && a>b)
        {
            temp=c;
            c=a;
            a=temp;
        }
        else if(c<b)
        {
            temp=c;
            c=b;
            b=temp;
        }
        if((c*c)==((a*a)+(b*b)))
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
    }
    return 0;
}
