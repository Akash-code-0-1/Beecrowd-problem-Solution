#include<stdio.h>
int main()
{
    double ar[10];
    float av;
    int i,count=0;

    for(i=0;i<6;i++)
    {
        scanf("%lf",&ar[i]);
    }
    float sum=0;
    for(i=0;i<6;i++)
    {
        if(ar[i]>0)
        {
        count++;
        sum+=ar[i]; 
        } 
    }
    printf("%d valores positivos\n",count);
    printf("%.1f\n",(sum/count));
}