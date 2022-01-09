#include<stdio.h>

int main(){
    int quantidade = 0, numero, soma = 0, quantidade_desejada;
    printf("Coloque a quantidade de numeros que deseja somar: ");
    scanf("%d",&quantidade_desejada);
    while(quantidade < quantidade_desejada){
        printf("Coloque os numeros para somar: ");
        scanf("%d",&numero);
        soma = soma + numero;
        quantidade = quantidade + 1;
    }
    printf("A soma eh: %d",soma);
}