#include<stdio.h>
int main()
{
    int t,n,i,j,k=0;
    scanf("%d",&t);
    for(i=0;i<5;i++)
    {
        scanf("%d",&n);
        if(n==t)
        {
            k++;
        }
    }
    printf("%d\n",k);
    return 0;
}
