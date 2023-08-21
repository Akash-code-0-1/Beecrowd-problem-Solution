#include<stdio.h>
int main()
{
    int size,i;
    scanf("%d",&size);

    for(i=1;i<=size;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
    }
}