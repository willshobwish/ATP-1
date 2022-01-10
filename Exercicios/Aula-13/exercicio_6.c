#include<stdio.h>

int main(){
    int ano;
    printf("Coloque um ano para verificar se eh bissexto: ");
    scanf("%d",&ano);
    if(ano%400==0 || (ano%4==0 && !ano%100==0)){
        printf("Ano bissexto");
    }
    else{
        printf("Ano nao bissexto");
    }
}