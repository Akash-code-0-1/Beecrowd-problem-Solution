#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    (a==61)?printf("Brasilia\n"):(a==71)?printf("Salvador\n"):(a==11)?printf("Sao Paulo\n"):(a==21)?printf("Rio de Janeiro\n"):(a==32)?printf("Juiz de Fora\n"):(a==19)?printf("Campinas\n"):(a==27)?printf("Vitoria\n"):(a==31)?printf("Belo Horizonte\n"):printf("DDD nao cadastrado\n");
    return 0;
}

