#include<stdio.h>
int main()
{
    int n,i,ani,total,ct=0,rt=0,st=0;
    char nam;
    double x,y,z;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
            scanf("%d",&ani);
            scanf("%c",&nam);

            if(nam=='C')
            {
                ct+=ani;
            }
             else if(nam=='R')
            {
                rt+=ani;
            }
             else
            {

                
                st+=ani;
            }
    }
    total=ct+rt+st;
    x=(ct*100.00)/total;
    y=(rt*100.00)/total;
    z=(st*100.00)/total;

    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",ct);
    printf("Total de ratos: %d\n",rt);
    printf("Total de sapos: %d\n",st);
    printf("Percentual de coelhos: %.2lf %%\n",x);
    printf("Percentual de ratos: %.2lf %%\n",y);
    printf("Percentual de sapos: %.2lf %%\n",z);
}