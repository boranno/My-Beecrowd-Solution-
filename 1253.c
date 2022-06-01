#include<stdio.h>
int main()
{
    int TC,i;
    scanf("%d",&TC);
    for(i=0;i<TC;i++)
    {
        int i,j,k,l,s1,s2,shift;
        char str[51];
        scanf("%s",&str);
        scanf("%d",&shift);
        for(j=0;str[j]!='\0';j++)
        {
            s1=(int)str[j]-shift;

            if(s1<65)
            {
                s2=64-s1;
                printf("%c",90-s2);
            }
            else
            {
                printf("%c",s1);
            }
        }
        printf("\n");
    }
    return 0;
}
