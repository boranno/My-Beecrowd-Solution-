#include<stdio.h>
int main()
{
    int N,i,j,k,l,temp,p;
    scanf("%d",&N);
    int arr[1000];
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    temp=arr[0];
    for(j=0;j<N;j++)
    {
        if(temp>arr[j])
        {
            temp=arr[j];
            p=j;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",temp,p);
    return 0;
}
