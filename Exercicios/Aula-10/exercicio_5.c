#include<stdio.h>

int main(){
    int numero;
    printf("Coloque um numero de 1 a 5 para ser lido: ");
    scanf("%d",&numero);
    printf("Numero por extenso: ");
    if(numero==1){
        printf("Um");
    }
    else if(numero==2){
        printf("Dois");
    }
    else if(numero==3){
        printf("Tres");
    }
    else if(numero==4){
        printf("Quatro");
    }
    else if(numero==5){
        printf("Cinco");
    }
    else{
        printf("Fora do alcance");
    }
}