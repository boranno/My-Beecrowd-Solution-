#include <stdio.h>

int main() {

    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    if(n<(a+b))
    {
        printf("Deixa para amanha!\n");
    }
    else
    {
        printf("Farei hoje!\n");
    }

    return 0;
}
