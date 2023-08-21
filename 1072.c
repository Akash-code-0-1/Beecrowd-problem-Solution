#include<stdio.h>
int main()
{
    int n,i,count1=0,count2=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]>=10 && ar[i]<=20)
        {
            count1++;
        }
        else
        {
        count2++;
        }
    }
    printf("%d in\n",count1);
    printf("%d out\n",count2);
}