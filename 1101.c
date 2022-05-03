#include<stdio.h>
int main()
{
	while(1)
	{
	    int i,j,k=0;
		int a=0,b=0;
		scanf("%d%d",&a,&b);
		if(b>a)
        {
            k=a;
            a=b;
            b=k;
        }
		int sum=0;
		if(a>0 && b>0)
		{
			for(j=b;j<=a;j++)
			{
				printf("%d",j);
				printf(" ");
				sum=sum+j;
			}
			printf("Sum=%d\n",sum);
		}
		else
		{
			break;
		}
	}
	return 0;
}
