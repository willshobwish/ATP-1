#include<stdio.h>

int main(){
    int gasto, cupom, cupons_ganho;
    printf("Quantos gastou nesse supermercado: ");
    scanf("%d",&gasto);
    cupom = 20;
    cupons_ganho=gasto/cupom;
    printf("Voce ganhou %.0d cupons",cupons_ganho);
    return 0;
}