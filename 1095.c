#include<stdio.h>
int main()
{
    int i,j,temp=0,val;
    val = 1;
    for(i=val;i<=val;i=i+3)
    {
        val=i;
        for(j=60;j>=0;j=j-5)
        {
            printf("I=%d\tJ=%d\n",i,j);
        }

    }
}