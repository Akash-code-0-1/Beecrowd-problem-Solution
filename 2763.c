#include <stdio.h>
int main()
{
    int long long a,b,c,d;
    scanf("%lld.%lld.%lld-%lld",&a,&b,&c,&d);
    printf("%03lld\n%03lld\n%03lld\n%02lld\n",a,b,c,d);

    return 0;
}