#include<stdio.h>
int main()
{
    int a,b,n,i;
    float sum =0,res;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);

        if(a==1001)
        {
            res = (b* 1.50);
        }
        else if(a==1002)
        {
            res = (b* 2.50);
        }
        else if(a== 1003)
        {
            res = (b* 3.50);
        }
        else if(a== 1004)
        {
            res = (b* 4.50);
        }
        else if(a== 1005)
        {
            res = (b* 5.50);
        }
        sum = sum + res;
    }
    printf("%.2f\n",sum);
}