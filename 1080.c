#include<stdio.h>
int main()
{
    int i,temp,j=0,ar[200];
    for(i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<5;i++)
    {
        if(ar[0]<ar[i])
        {
        ar[0]=ar[i];
        temp=i+1;
        }
    }
    printf("%d\n%d\n",ar[0],temp);
}
