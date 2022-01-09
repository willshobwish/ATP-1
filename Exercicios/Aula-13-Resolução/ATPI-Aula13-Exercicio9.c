#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int A, B, C;

    printf("\nDigite 3 números para colocarmos eles em ordem crescente\n");
    printf("Digite o número 1: ");
    scanf("%d", &A);
    printf("Digite o número 2: ");
    scanf("%d", &B);
    printf("Digite o número 3: ");
    scanf("%d", &C);

    if(A >= B){
        if(C >= A){
            printf("\nOrdem crescente: %d %d %d\n", B, A, C);
        }
        else{
            if(C <= B){
                printf("\nOrdem crescente: %d %d %d\n", C, B, A);
            }
            else{
                printf("\nOrdem crescente: %d %d %d\n", B, C, A);
            }
        }
    }
    else{
        if(C >= B){
            printf("\nOrdem crescente: %d %d %d\n", A, B, C);
        }
        else {
              if(C <= A){
                printf("\nOrdem crescente: %d %d %d\n", C, A, B);
              }
              else{
                printf("\nOrdem crescente: %d %d %d\n", A, C, B);
              }
        }
    }

    return 0;
}
