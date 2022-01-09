#include<stdio.h>
#include<math.h>

int main(){
    double nota100, nota50, entrada, restante;
    scanf("%lf",&entrada);
    nota100 = trunc(entrada/100);
    restante = nota100*100;
    nota50 = trunc((entrada-restante)/50);
    restante = restante + nota50*50;
    printf("%.0f notas de R$ 100\n", nota100);
    printf("%.0f notas de R$ 50\n", nota50);
}