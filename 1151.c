#include<stdio.h>
int main()
{
    int f,n,num1=0,num2=1,fib;
    scanf("%d",&n);
    for(f=0; f<=n; f++)
    {
        if(f<=1)
        fib=f;
        else
        {
            fib=num1+num2;
            num1=num2;
            num2=fib;
        }
           printf(" %d",fib);
    }

}