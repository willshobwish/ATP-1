#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    float A, B, C;

    printf("\nEntre com o tamanho dos 3 lados (A, B e C) de um triângulo\n");
    printf("Digite tamanho do lado A: ");
    scanf("%f", &A, &B, &C);
    printf("Digite tamanho do lado B: ");
    scanf("%f", &B);
    printf("Digite tamanho do lado C: ");
    scanf("%f", &C);

    // caso o tamanho dos lados seja menor que a soma dos outros dois
    if((A < B + C) && (B < C + A) && (C < B + A)){
        printf("\nEsses lados podem formar um triângulo!\n");
    }
    else{
        printf("\nEsses lados não podem formar um triângulo!\n");
    }
    return 0;
}
