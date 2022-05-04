#include<stdio.h>
int main()
{
    int arr1[20];
    int arr2[20];
    int i,j,k,l,n=20,x=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(j=n-1;j>=0;j--)
    {
        arr2[x]=arr1[j];
        x++;
    }

    for(l=0;l<n;l++)
    {
        printf("N[%d] = %d\n",l,arr2[l]);
    }
    return 0;

}
