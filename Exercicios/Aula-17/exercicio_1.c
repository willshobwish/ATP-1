#include<stdio.h>

int main(){
    int vezes = 0, numero, soma = 0;
    while(vezes<5){
        printf("Coloque um numero para somar: ");
        scanf("%d",&numero);
        soma = soma + numero;
        printf("A %d soma ainda eh: %d\n",vezes + 1, soma);
        vezes = vezes + 1;
    }
}