#include<stdio.h>
#include<limits.h>

int main(){
    int maximo = INT_MAX, minimo = INT_MIN, valor, quantidade = 0;
    float soma = 0;
    printf("maior inteiro: %d",maximo);
    while(quantidade<5){
        quantidade++;
        printf("Coloque um numero para comparar: ");
        scanf("%d",&valor);
        if(valor>minimo){
            minimo = valor;
        }
        if(valor<maximo){
            maximo = valor;
        }
        soma = soma + valor;
    }
    printf("O maior numero eh: %d\n", minimo);
    printf("O menor numero eh: %d\n", maximo);
    printf("A soma eh: %f\n",soma);
    printf("A media dos numeros eh: %f\n", soma/5);
    printf("maior inteiro: %d",maximo);
}