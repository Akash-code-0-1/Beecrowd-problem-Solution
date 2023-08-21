#include<stdio.h>
int main ()
{
    int i,a,b,c;
    do
    {
    scanf("%d",&c);
    if(c==0)
    {
        break;
    }
    int poa=0,pob=0;
    for(i=0;i<c;i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            poa++;
        }
        else if(b>a)
        {
            pob++;
        }
    }
    printf("%d %d\n",poa,pob);
    }
    while(c!=0); 
}