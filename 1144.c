#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        j=i*i;
        k=j*i;
        printf("%d %d %d\n%d %d %d\n",i,j,k,i,j+1,k+1);
    }
}
