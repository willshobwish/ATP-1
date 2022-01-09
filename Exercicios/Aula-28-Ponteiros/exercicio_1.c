#include<stdio.h>

void quociente_resto(int n, int d, int *q, int *r){
    *q = n/d;
    *r = n%d;
}

int main(void){
    int numerador, denominador;
    int quociente, resto;
    printf("Numerador: ");
    scanf("%d",&numerador);
    printf("Numerador: ");
    scanf("%d", &denominador);
    quociente_resto(numerador, denominador, &quociente, &resto);
    printf("Quociente: %d", quociente);
    printf("\nResto: %d", resto);
    return 0;
}