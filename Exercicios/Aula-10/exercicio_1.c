#include<stdio.h>

int main(){
    int numero;
    printf("Coloque um numero: ");
    scanf("%d",&numero);
    if (numero%2==1){
        printf("Esse numero eh impar");
    }
    else{
        printf("Esse numero eh par");
    }
}