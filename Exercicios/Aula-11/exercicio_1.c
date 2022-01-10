// Faça um programa para verificar se um determinado número inteiro é divisível por 3 e por 5

#include<stdio.h>

int main(){
    int numero;
    printf("Coloque um numero inteiro: ");
    scanf("%d",&numero);
    if(numero%3 == 0 && numero%5 == 0){
        printf("Eh divisivel por 3 e 5 simultaneamente");
    }
    else{
        printf("Nao sao divisiveis");
    }
}