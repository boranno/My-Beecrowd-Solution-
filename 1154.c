#include<stdio.h>
int main()
{
    int age,l=0;
    float sage=0;
    while(1)
    {
        scanf("%d",&age);
        if(age>=0)
        {
            sage+=age;
            l++;
        }
        else{
            break;
        }
    }
    printf("%.2f",sage/l);
    return 0;
}
