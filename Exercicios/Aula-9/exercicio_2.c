#include<stdio.h>

int main(){
    int numero;
    printf("Coloque um numero inteiro: ");
    scanf("%d",&numero);

    if(numero>0){
        printf("Eh um numero positivo");
    }
    else{
        if (numero<0)
        {
            printf("Eh um numero negativo");
        }
        else{
            printf("O numero eh zero");
        }
        
    }
}