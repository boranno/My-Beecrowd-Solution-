#include<stdio.h>
int main()
{
    int j=1,n,k=0;
    scanf("%d",&n);
    while(k<n)
    {
        printf("%d %d %d PUM\n",j,j+1,j+2);
        k++;
        j+=4;
    }
    return 0;
}

