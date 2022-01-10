#include<stdio.h>
    
int main(){
    int numero;
    printf("Coloque um numero inteiro: ");
    scanf("%d",&numero);
    if(numero%3 == 0){
        printf("Eh divisivel por 3\n");
        
    }
    else{
        printf("Nao eh divisivel por 3\n");
    }
    if (numero%5==0){
        printf("Eh divisivel por 5\n");
    }
    else{
        printf("Nao eh divisivel por 5\n");
    }
}