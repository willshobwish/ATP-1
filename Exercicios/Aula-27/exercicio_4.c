#include<stdio.h>
#include<stdbool.h>

int fatorial(int numero_1){
    int resultado = 1, quantidade = 1;
    for(int a=1;a<=numero_1;a++){
        resultado = a * resultado;
    }
    return resultado;
}

int main(void){
    int entrada_1;
    scanf("%d",&entrada_1);
    printf("%d",fatorial(entrada_1));
}