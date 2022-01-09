#include<stdio.h>

int main(){
    float entrada, numero;
    float divisao, soma=0;
    scanf("%f",&entrada);
    for(float cont=1;cont<=entrada;cont++){
        divisao = 1/cont;
        soma = soma + divisao;
    }
    printf("%f",soma);
}