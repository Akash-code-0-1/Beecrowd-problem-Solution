#include<stdio.h>
int main(){
    float sl;
    scanf("%f",&sl);
    (sl>=0.00 && sl<=2000.00)?printf("Without taxes\n"):(sl>=2000.01 && sl<=3000.00)?printf("R$ %.2f\n",sl*0.08):(sl>=3000.01 && sl<=4500.00)?printf("R$ %.2f\n",sl*0.18):(sl>4500.00)?printf("R$ %.2f\n",sl*0.28)
}
