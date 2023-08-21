#include<stdio.h>
int main()
{
    int size,i,count=0;
    scanf("%d",&size);
    int limit;
    limit=size+15;

    for(i=size;i<limit;i++)
    {
        if(i%2!=0)
        {
            count++;
            printf("%d\n",i);
            if (count==6)
            break;
        }
    }
}