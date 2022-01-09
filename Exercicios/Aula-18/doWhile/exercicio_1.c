#include<stdio.h>

int main(){
    int cont = 0, entrada = 0;
    float soma;
    do{
        printf("Coloque o numero %d: ",cont);
        scanf("%d",&entrada);
        cont++;
        soma = entrada + soma;
    }while(cont<5);
    printf("Media: %f", soma/5);
}