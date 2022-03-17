#include<stdio.h>
int main()
{
    int a,b,c,maxe;
    scanf("%d%d%d",&a,&b,&c);
    maxe=a;
    if (a<b || a<c){
        if (b<c){
            maxe=c;
        }
    else {
        maxe=b;
           }
    }
    printf("%d eh o maior\n",maxe);
    return 0;
}
