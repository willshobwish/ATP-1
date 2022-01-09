#include<stdio.h>

void conversao(int entrada_segundos, int *segundos, int *minutos, int *horas){
    *horas = entrada_segundos/3600;
    //Restante do programa
}

void teste(void){
    return 10;
}

int teste_retorno(void){
    return 10;
}

int main(void){
    printf("Retorno de teste_retorno eh %d",teste_retorno());
    // int entrada_segundos, segundos, minutos, horas;
    // int* ponteiro;
    // scanf("%d", &entrada_segundos);
    // *ponteiro = &entrada_segundos;
    // conversao(entrada_segundos, &segundos, &minutos, &horas);
    // printf("Resultado");
}