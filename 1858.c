
#include<stdio.h>
int main()
{
    int N,u;
    while(scanf("%d",&N)!=EOF)
    {
        int i,j,k,l,temp,p=0;
        //scanf("%d",&N);
        int arr[1000];
        for(i=0;i<N;i++)
        {
            scanf("%d",&arr[i]);
        }
        temp=arr[0];
        for(j=0;j<N;j++)
        {
            if(temp<arr[j])
            {
                temp=arr[j];
                p=j;
            }
        }
        if(temp<10)
        {
            printf("%d\n",1);
        }
        else if(temp>10 && temp<20)
        {
            printf("%d\n",2);
        }
        else if(temp>=20)
        {
            printf("%d\n",3);
        }
    }
    return 0;
}
