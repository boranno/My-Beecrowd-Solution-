#include <stdio.h>

int main() {
    int Tc,t;
    scanf("%d",&Tc);
    for(t=0;t<Tc;t++)
    {
        char str[4];
        int value;
        scanf("%s",&str);
        if(str[0]==str[2])
        {
            value=(str[0]-48)*(str[2]-48);
        }
        else if(str[1]>64 && str[1]<91)
        {
            value=(str[2]-48)-(str[0]-48);
        }
        else
        {
            value=(str[0]-48)+(str[2]-48);
        }
        printf("%d\n",value);
    }
    return 0;
}
