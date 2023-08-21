#include<stdio.h>
#include<math.h>
int main()
{
    int size,i,res;
    scanf("%d",&size);
    for(i=2;i<=size;i++)
    {
        if(i%2==0)
        {
            res=pow(i,2);
            printf("%d^2 = %d\n",i,res);
        }
    }
}