#include<stdio.h>

int main(){
    float entrada, soma;
    for(int cont = 0; cont<5; cont++){
        printf("Nota %d: ",cont+1);
        scanf("%f",&entrada);
        soma = entrada + soma;
    }
    printf("Media: %f",soma/5);
}