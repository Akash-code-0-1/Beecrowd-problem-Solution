#include<stdio.h>
int main()
{
    char c;
    int res,a,b;
    scanf("%d",&res);
    scanf("%d %c %d",&a,&c,&b);
    if(c==43)
    {
        if(a+b==res)
        {
            printf("OK\n");
        }
        else{
            printf("OVERFLOW\n");
        }
    }
    else if(c==42)
        {
        if(a*b==res)
        {
            printf("OK\n");
        }
        else{
            printf("OVERFLOW\n");
        }
    }
}