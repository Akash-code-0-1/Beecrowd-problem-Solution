#include <stdio.h>
int main()
{
    
    int d,m,y;
    char a,b;
    
    scanf("%d%c%d%c%d",&d,&a,&m,&b,&y);
    
    printf("%02d/%02d/%02d\n",m,d,y);
    printf("%02d/%02d/%02d\n",y,m,d);
    printf("%02d-%02d-%02d\n",d,m,y);
    return 0;
}

