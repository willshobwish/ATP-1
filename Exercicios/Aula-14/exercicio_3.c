#include<stdio.h>
#include<math.h>

int main(){
    double numero, raiz_resultado;
    printf("Coloque um numero para a raiz quadrada: ");
    scanf("%lf",&numero);
    raiz_resultado = sqrt(numero);
    printf("%f", raiz_resultado);
}