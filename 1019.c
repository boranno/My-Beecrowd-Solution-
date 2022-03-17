#include<stdio.h>
#include<math.h>
int main()
{
    int sec,h,m,s;
    scanf("%d",&sec);
    h=floor(sec/3600);
    m=floor((sec-h*3600)/60);
    s=floor((sec-h*3600-m*60));
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
