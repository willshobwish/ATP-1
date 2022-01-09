#include<stdio.h>
#include<stdbool.h>

int soma(int numero_1, int numero_2){
    int resultado = 0;
    resultado = numero_1 + numero_2;
    return resultado;
}

int subtracao(int numero_1, int numero_2){
    int resultado = 0;
    resultado = numero_1 - numero_2;
    return resultado;
}

int multiplicacao(int numero_1, int numero_2){
    int resultado = 0;
    resultado = numero_1*numero_2;
    return resultado;
}

float divisao(int numero_1, int numero_2){
    int resultado = 0;
    if(numero_2>0){
        resultado = numero_1/numero_2;
        return resultado;
    }
}

int main(void){
    int entrada_1, entrada_2;
    scanf("%d%d",&entrada_1, &entrada_2);
    printf("Soma: %d\n",soma(entrada_1, entrada_2));
    printf("Subtracao: %d\n",subtracao(entrada_1, entrada_2));
    printf("Multiplicao: %d\n",multiplicacao(entrada_1, entrada_2));
    printf("Divisao: %.2f\n",divisao(entrada_1, entrada_2));
}