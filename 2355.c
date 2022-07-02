 #include<stdio.h>
#include<math.h>
int main()
{
    while(1)
    {
        int N;
        scanf("%d",&N);
        if(N==0){break;}
        double avg=N/90.0;
        int a=floor(avg*1),b=ceil(avg*7);
        printf("Brasil %d x Alemanha %d\n",a,b);
    }
    return 0;
}
