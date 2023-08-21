#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]<0 && ar[i]%2!=0)
        {
            printf("ODD NEGATIVE\n");
        }
        else if(ar[i]==0)
        {
            printf("NULL\n");
        }
        else if(ar[i]>0 && ar[i]%2==0)
        {
            printf("EVEN POSITIVE\n");
        }
        else if(ar[i]>0 && ar[i]%2!=0)
        {
            printf("ODD POSITIVE\n");
        }
        else if(ar[i]<0 && ar[i]%2==0)
        {
            printf("EVEN NEGATIVE\n");
        }
    }
}