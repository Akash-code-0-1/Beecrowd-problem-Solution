#include<stdio.h>
int main()
{
    int i,ar[20],ar2[20];
    for(i=0;i<10;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]<=0)
        {
            ar[i]=1;
        }
    }
    for(i=0;i<10;i++)
    {
        printf("X[%d] = %d\n",i,ar[i]);
    }
}