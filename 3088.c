#include<stdio.h>
int main()
{
    char str[10000];
    while(getline(str)!=EOF)
    {

        int i,j;
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]==' ' && str[i+1]=='.' || str[i+1]==',')
            {
                continue;
            }
            else{
                printf("%c",str[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
