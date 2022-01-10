#include<stdio.h>

int main(){
    float numero_1, numero_2, resultado;
    char operacao;
    printf("Insira uma operacao: ");
    scanf("%c",&operacao);
    printf("Insira um numero: ");
    scanf("%f",&numero_1);
    printf("Insira um outro numero: ");
    scanf("%f",&numero_2);
    if(operacao == '+'){
        resultado = numero_1 + numero_2;
    }
    else if(operacao == '-'){
        resultado = numero_1 - numero_2;
    }
    else if(operacao == '*'){
        resultado = numero_1 * numero_2;
    }
    else if(operacao == '/'){
        resultado = numero_1 / numero_2;
    }
    else{
        printf("Operacao invalida");
    }
    printf("%f", resultado);
}