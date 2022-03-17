#include<stdio.h>
#include<math.h>
int main()
{
    int day,y,m,d;
    scanf("%d",&day);
    y=floor(day/365);
    m=floor((day-y*365)/30);
    d=floor((day-y*365-m*30));
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
    return 0;
}
