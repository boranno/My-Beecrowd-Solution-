#include <stdio.h>
int main() {
        int i,j;
        int d[31];
        int e[31];
        int Tc,t;
        while(scanf("%d",&Tc)!=EOF)
        {
            for(i=0;i<31;i++)
            {
                d[i]=0;
                e[i]=0;
            }
            int Boot=0;
            for(t=0;t<Tc;t++)
            {
                int M;
                char L;
                scanf("%d %c",&M,&L);
                if(L=='D')
                {
                    d[M-30]++;
                }
                else
                {
                    e[M-30]++;
                }
            }
            for(i=0;i<31;i++)
            {
                if(d[i]<=e[i])
                {
                    Boot+=d[i];
                }
                else
                {
                    Boot+=e[i];
                }
            }
            printf("%d\n",Boot);
        }
    return 0;
}
