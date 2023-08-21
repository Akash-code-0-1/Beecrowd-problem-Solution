#include<stdio.h>
int main()
{
    int i,a,b,j;
    for(i=0;i<1000000;i++)
    {
        scanf("%d %d",&a,&b);
        if(a<=0 || b<=0)
        {
            break;
        }
        else
        {
            int sum=0;
            if(a<b)
            {
                for(j=a;j<=b;j++)
                {
                    printf("%d ",j);
                    sum=sum+j;
                }
                printf("Sum=%d\n",sum);
            }
            else if (b<a)
            {
                for(j=b;j<=a;j++)
                {
                    printf("%d ",j);
                    sum=sum+j;
                }
                printf("Sum=%d\n",sum);
            }
        }
    }

}