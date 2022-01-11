#include<stdio.h>

int main(){
    float numero_1, numero_2;
    printf("Coloque um numero: ");
    scanf("%f",&numero_1);
    printf("Coloque outro numero ou o mesmo: ");
    scanf("%f",&numero_2);
    if (numero_1 == numero_2){
        printf("Sao numeros iguais");
    }
    else{
        printf("Sao numeros diferentes");
    }
}