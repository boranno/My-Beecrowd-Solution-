 #include<stdio.h>
int main()
{
    int Tc,t;
    scanf("%d",&Tc);
    for(t=0;t<Tc;t++)
    {
        char str1[51];
        char str2[51];
        scanf("%s",str1);
        scanf("%s",str2);
        int i,j,s1=0,s2=0;
        for(i=0;str1[s1]!='\0' || str2[s2]!='\0';i++)
        {
            //printf("%c s1  %c s2",str1[s1],str2[s2]);
            if(str1[s1]!='\0' && i%2==0 )
            {
                printf("%c",str1[s1]);
                s1++;
            }
            else if(str2[s2]!='\0' && i%2!=0)
            {
                printf("%c",str2[s2]);
                s2++;
            }
        }
        printf("\n");
    }
    return 0;
}
