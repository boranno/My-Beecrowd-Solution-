#include<stdio.h>
int main()
{
    int n,i,j,k=0,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&l);
        for(j=2;j<l;j++)
        {
            if(l%j==0)
            {
                k++;
            }
        }
        if(k>0)
        {
            printf("%d nao eh primo\n",l);
        }
        else
        {
            printf("%d eh primo\n",l);
        }
        k=0;
    }
    return 0;
}
