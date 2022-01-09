#include<stdio.h>

int main(){
    float entrada, soma;
    for(int cont = 0; cont<4; cont++){
        printf("Nota %d: ",cont+1);
        scanf("%f",&entrada);
        soma = entrada + soma;
    }
    printf("Soma: %f\n",soma);
    printf("Media: %f\n",soma/4);
}