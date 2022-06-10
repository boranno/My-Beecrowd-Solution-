#include<stdio.h>
int main()
{
    int arr[10];
    int i,j,k,l;
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>0)
        {
            printf("x[%d] = %d\n",i,arr[i]);
        }
        else{
                printf("x[%d] = %d\n",i,1);

        }
    }
    return 0;
}
