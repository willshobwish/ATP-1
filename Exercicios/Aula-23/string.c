#include<stdio.h>

int main(){
    char nome[50], teste = 'a';
    //String será com aspas duplas
    //Character sera com aspas simples
    printf("Coloque o seu nome:\n");
    scanf("%s",&nome);
    fflush(stdin);
    printf("Seu nome: %s",nome);
    fgets(nome,50,stdin);
}