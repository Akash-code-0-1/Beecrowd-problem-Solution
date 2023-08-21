#include<stdio.h>
int main()
{
    int i,j,k=7,l;
    for(i=1;i<=9;i=i+2)
    {
        for(j=1,l=k;j<=3;l--,j++)
        {
            printf("I=%d J=%d\n",i,l);
        }
        k=k+2;
    }
}