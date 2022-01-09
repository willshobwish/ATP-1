#include<stdio.h>
#include<math.h>

int main(){
    double numero, arredondamento_cima, arredondamento_baixo, arredondamento, arredondamento_frac;
    printf("Coloque um numero para arredondar: ");
    scanf("%lf",&numero);
    arredondamento_cima = ceil(numero);
    arredondamento_baixo = floor(numero);
    arredondamento = round(numero);
    arredondamento_frac = trunc(numero);
    printf("Ceil: %f\nFloor: %f\nRound: %f\nTrunc: %f\n", arredondamento_cima, arredondamento_baixo, arredondamento, arredondamento_frac);
}