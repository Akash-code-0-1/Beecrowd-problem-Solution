#include<stdio.h>
int main()
{
    int i,j,k,a,b;
    scanf("%d %d",&a,&b);
    for(i=0,k=1;k<=b;i++)
    {
        for(j=1;j<=a;j++,k++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
}