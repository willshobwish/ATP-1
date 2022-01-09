#include<stdio.h>
int main(){
    int ladoA, ladoB, ladoC;
    printf("Coloque os tres lados dos triangulos: ");
    scanf("%d%d%d",&ladoA, &ladoB, &ladoC);
    if((ladoA<ladoB+ladoC)&&(ladoB<ladoA+ladoC)&&(ladoC<ladoB+ladoC)){
        printf("Triangulo existente");
    }
    else{
        printf("O triangulo nao existe");
    }
}