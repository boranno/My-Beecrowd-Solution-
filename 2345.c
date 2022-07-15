#include <stdio.h>

int main() {
    int arr[4],i,j,temp,k;
    for(i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    k=(arr[0]+arr[3])-(arr[1]+arr[2]);
    printf("%d\n",abs(k));
    return 0;
}
