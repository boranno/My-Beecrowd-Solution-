#include<stdio.h>
int main()
{
    int arr1[100];
    int temp=0,i,j,n=10,index=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(j=0;j<n;j++)
    {
        if(temp==0)
        {
            temp=arr1[0];

        }
        if(j+1<n && temp<arr1[j+1])
        {
            temp=arr1[j+1];
            index=j+2;
        }
    }
    printf("%d\n%d",temp,index);
}
