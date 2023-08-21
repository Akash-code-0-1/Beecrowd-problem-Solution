#include<stdio.h>
int main()
{
    float x;
    int n,count=0;
    for(n=1;n<=6;n++)
    {
        scanf("%d",&x);
        if(x>0)
        count=count+1;
    }
    printf("%d valores positivos\n",count);
}