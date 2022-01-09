#include<stdio.h>
#include<math.h>

int main(){
    double numero, resultado_potencia, elevado;
    printf("Coloque a base e o expoente: ");
    scanf("%lf%lf",&numero,&elevado);
    resultado_potencia = pow(numero, elevado);
    printf("%f", resultado_potencia);
}