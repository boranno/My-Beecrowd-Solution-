#include<stdio.h>
int main()
{
    int N;
    while(scanf("%d",&N)!=EOF)
    {
        int i,j;
        char str[35]="LIFE IS NOT A PROBLEM TO BE SOLVED";
        for(i=0;i<N;i++)
        {
            printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}
