#include<stdio.h>
int main()
{
    int i,j,n,temp;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        int first=ar[i];

        for(j=i+1;j<n;j++)
        {
            if(ar[j]==ar[i]){
            continue;}
             else if(ar[j]<ar[i])
            {
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
                if(ar[j]==ar[i])
                continue;

            }
        }

    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",ar[i]);
    }

}