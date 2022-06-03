#include<stdio.h>
int main()
{
    char str[51];
    int i,j,l=0;
    while(gets(str)!=NULL)
    {
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]!=' ' && str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
            {
                if(str[i]>96 && l%2==0)
                {
                    str[i]=(int)str[i]-32;
                }
                else if(str[i]<96 && l%2!=0)
                {
                    str[i]=(int)str[i]+32;
                }
                l++;
            }
        }
        printf("%s\n",str);
        l=0;
    }
    return 0;
}
