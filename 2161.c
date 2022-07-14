#include<stdio.h>
int main()
{
    double fr=0;
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        fr=1/(6.0+fr);
    }
    printf("%.10lf\n",(3.0+fr));
    return 0;
}
