#include<stdio.h>
#include<limits.h>

int main(){
    int minimo = INT_MIN, valor, quantidade = 0;
    while(quantidade<5){
        quantidade++;
        printf("Coloque um numero para comparar: ");
        scanf("%d",&valor);
        if(valor>minimo){
            minimo = valor;
        }
    }
    printf("O maior numero eh: %d", minimo);
}