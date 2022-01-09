#include<stdio.h>

int main(){
    char nome[100], idade[100], endereco[100], telefone[100];
    gets(nome);
    gets(idade);
    gets(endereco);
    gets(telefone);
    printf("Lista\n%s-%s-%s-%s",nome,idade,endereco,telefone);
}