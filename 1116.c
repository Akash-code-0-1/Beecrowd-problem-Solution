#include<stdio.h>
int main()
{
    int  n, i;
    float res,a, b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%f%f",&a,&b);
        if(b==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            res=a/b;
            printf("%.1f\n",res);
        }
    }
}
