 #include <stdio.h>
int main() {

    while(1)
    {
        int q,d,p,value;
        scanf("%d",&q);
        if(q==0)
        {
            break;
        }
        scanf("%d %d",&d,&p);
        value=(q*d*p)/(p-q);
        if(value==1)
        {
            printf("%d pagina\n",value);
        }
        else
        {
            printf("%d paginas\n",value);
        }
    }
    return 0;
}
