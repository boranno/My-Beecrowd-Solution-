#include<stdio.h>
int main()
{
    int T,p;
    scanf("%d",&T);
    for(p=0;p<T;p++)
    {
        int nums,i,j,k,value=0;
        scanf("%d",&nums);
        char str[101];
        for(i=0;i<nums;i++)
        {
            scanf("%s",&str);
            for(j=0;str[j]!='\0';j++)
            {
                value=value+((str[j]-65)+i+j);
            }
        }
        printf("%d\n",value);
    }
    return 0;
}
