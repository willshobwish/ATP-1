#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int dia_atual, mes_atual, ano_atual;
    int dia_nascimento, mes_nascimento, ano_nascimento;
    int idade;

    printf("\Digite o dia de hoje: ");
    scanf("%d", &dia_atual);
    printf("\Digite o mes de hoje: ");
    scanf("%d", &mes_atual);
    printf("\Digite o ano de hoje: ");
    scanf("%d", &ano_atual);

    printf("\Digite o dia de nascimento: ");
    scanf("%d", &dia_nascimento);
    printf("\Digite o mês de nascimento: ");
    scanf("%d", &mes_nascimento);
    printf("\Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    idade = ano_atual-ano_nascimento;
    if (mes_atual<mes_nascimento || (mes_nascimento==mes_atual && dia_atual<dia_nascimento)){
        idade = idade - 1;
    }


    printf("A idade é: %d anos\n", idade);
    return;
}


