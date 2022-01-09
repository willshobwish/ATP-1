#include<stdio.h>

int main(){
    float numero_1, numero_2;
    printf("Coloque dois numeros: ");
    scanf("%f%f",&numero_1,&numero_2);
    if(numero_1==numero_2){
        printf("Sao numeros iguais");
    }
    if (numero_1>numero_2){
        printf("%f e %f",numero_2, numero_1);
    }
    if (numero_1<numero_2)
    {
        printf("%f e %f",numero_1, numero_2);
    }
    
}