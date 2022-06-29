#include <stdio.h>

int main() {

    int a;
    scanf("%d",&a);
    if(a==0)
    {
        printf("E\n");
    }
    else if(a>0 && a<36)
    {
        printf("D\n");
    }
    else if(a>35 && a<61)
    {
        printf("C\n");
    }
    else if(a>60 && a<86)
    {
        printf("B\n");
    }
    else if(a>85 && a<101)
    {
        printf("A\n");
    }

    return 0;
}
