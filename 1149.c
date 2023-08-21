#include<stdio.h>
int main()
{
    int a,n,i,sum=0;
    scanf("%d",&a);
    while(scanf("%d",&n) == n<=0)
    {
    for(i=n;i<=a;i++)
        {
            sum++;
        }
    }
    printf("%d\n",sum);
}