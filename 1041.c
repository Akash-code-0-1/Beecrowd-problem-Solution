#include<stdio.h>
int main()
{
    float sl, nsl;
    scanf("%f",&sl);
    if(sl>=0 && sl<=400.00){
    nsl=0.15*sl;
    printf("Novo salario: %.2f",nsl+sl);
    printf("\nReajuste ganho: %.2f",nsl);
    printf("\nEm percentual: 15 %%");
    }
    else if(sl>=400.01 && sl<=800.00){
    nsl=0.12*sl;
    printf("Novo salario: %.2f",nsl+sl);
    printf("\nReajuste ganho: %.2f",nsl);
    printf("\nEm percentual: 12 %%");
    }
    else if(sl>=800.01 && sl<=1200.00){
    nsl=0.1*sl;
    printf("Novo salario: %.2f",nsl+sl);
    printf("\nReajuste ganho: %.2f",nsl);
    printf("\nEm percentual: 10 %%");
    }
    else if(sl>=1200.01 && sl<=2000.00){
    nsl=0.07*sl;
    printf("Novo salario: %.2f",nsl+sl);
    printf("\nReajuste ganho: %.2f",nsl);
    printf("\nEm percentual: 7 %%");
    }
    else if(sl>2000.00){
    nsl=0.04*sl;
    printf("Novo salario: %.2f",nsl+sl);
    printf("\nReajuste ganho: %.2f",nsl);
    printf("\nEm percentual: 4 %%");
    }
    return 0;

}
