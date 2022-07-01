#include<stdio.h>
int fib(int n,int* f,int* d)
{
    (*f)++;
    if(n==0 || n==1)
    {
        if(n==1)
        {
            (*d)++;

        }
        return n;
    }
    else{
     return fib((n-1),f,d)+fib((n-2),f,d);
    }
}
int main()
{
    int Tc;
    scanf("%d",&Tc);
    while(Tc--)
    {
        int a,b=0,d=0;
        scanf("%d",&a);
        fib(a,&b,&d);
        printf("fib(%d) = %d calls = %d\n",a,b-1,d);
    }
    return 0;
}
