#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,j,k,l=0,m=0,n=1,mn;
    int arr[a];
    while(l!=a)
    {
        mn=m+n;
        //printf("%d m %d n\n",m,n);
        for(j=m+1;j<n;j++)
        {
            if(l==a)
            {
                break;
            }
            arr[l]=j;
            //printf("%d l\n",l);

            l++;
        }

        m=n;
        n=mn;
    }
    printf("%d\n",arr[l-1]);
    return 0;
}
