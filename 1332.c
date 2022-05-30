#include<stdio.h>
int main()
{
    int i=0,n,j,k,l;
    scanf("%d",&n);
    char str[6];
    while(i<n)
    {
        scanf("%s",&str);
        if(str[0]=='o' && str[1]=='n' || str[1]=='n' && str[2]=='e' || str[0]=='o' && str[2]=='e')
        {
            printf("%d\n",1);
        }
        else if(str[0]=='t' && str[1]=='w' || str[1]=='w' && str[2]=='o' || str[0]=='t' && str[2]=='o')
        {
            printf("%d\n",2);
        }
        else if(str[1]=='h' && str[2]=='r' && str[3]=='e' && str[4]=='e' || str[0]=='t' && str[2]=='r' && str[3]=='e' && str[4]=='e'  || str[0]=='t' && str[1]=='h' && str[3]=='e' && str[4]=='e' || str[0]=='t' && str[1]=='h' && str[2]=='r' && str[3]=='e' || str[0]=='t' && str[1]=='h' && str[2]=='r' && str[4]=='e')
        {
            printf("%d\n",3);
        }
        i++;

    }
    return 0;
}
