#include<stdio.h>
int main()
{
    int n,x,i,count2=0,count3=0,count4=0,count5=0;
    scanf("%d",&n);
    int ar[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(ar[i]%2==0)
        {
            count2++;
        }
        if(ar[i]%3==0)
        {
            count3++;
        }
        if(ar[i]%4==0)
        {
            count4++;
        }
        if(ar[i]%5==0)
        {
            count5++;
        }
    }
    printf("%d Multiplo(s) de 2\n",count2);
    printf("%d Multiplo(s) de 3\n",count3);
    printf("%d Multiplo(s) de 4\n",count4);
    printf("%d Multiplo(s) de 5\n",count5);
}