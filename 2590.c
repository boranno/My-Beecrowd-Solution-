#include<stdio.h>
int main()
{
    int Tc,N;
    scanf("%d",&Tc);
    while(Tc--)
    {
        scanf("%d",&N);
        if(N%4==0)
        {printf("%d\n",1);}
        else if(N%4==1)
        {printf("%d\n",7);}
        else if(N%4==2)
        {printf("%d\n",9);}
        else if(N%4==3)
        {printf("%d\n",3);}
    }
    return 0;
}
