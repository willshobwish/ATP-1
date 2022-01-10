#include<stdio.h>

int main(){
    float ganhador1, ganhador2, ganhador3, porcentagem1, porcentagem2, porcentagem3, valor_premio, valor_total_aposta;
    printf("O quanto o amigo 1 aspostou: R$");
    scanf("%f",&ganhador1);
    printf("O quanto o amigo 2 aspostou: R$");
    scanf("%f",&ganhador2);
    printf("O quanto o amigo 3 aspostou: R$");
    scanf("%f",&ganhador3);
    printf("Coloque o quanto ganhou: R$");
    scanf("%f",&valor_premio);
    valor_total_aposta = ganhador1+ganhador2+ganhador3;
    porcentagem1=ganhador1/valor_total_aposta*100;
    porcentagem2=ganhador2/valor_total_aposta*100;
    porcentagem3=ganhador3/valor_total_aposta*100;
    printf("O primeiro ganhador ganhou: R$%.2f com %.2f%%\n",(ganhador1/valor_total_aposta)*valor_premio, porcentagem1);
    printf("O segundo ganhador ganhou: R$%.2f com %.2f%%\n",(ganhador2/valor_total_aposta)*valor_premio, porcentagem2);
    printf("O terceiro ganhador ganhou: R$%.2f com %.2f%%",(ganhador3/valor_total_aposta)*valor_premio, porcentagem3);
    return 0;
}