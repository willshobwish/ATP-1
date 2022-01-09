#include<stdio.h>

int main(){
    int numero_1, numero_2, diferenca;
    printf("Coloque um numero: ");
    scanf("%d",&numero_1);
    printf("Coloque um segundo numero: ");
    scanf("%d",&numero_2);
    if(numero_1==numero_2){
        printf("Os dois numeros sao iguais\n");
    }
    else if(numero_1>numero_2){
        printf("O numero maior eh %d\n",numero_1);
        diferenca=numero_1-numero_2;
    }
    else{
        printf("O numero maior eh %d\n",numero_2);
        diferenca=numero_2-numero_1;
    }
    printf("A diferenca entre eles eh: %d",diferenca);
    return 0;
}