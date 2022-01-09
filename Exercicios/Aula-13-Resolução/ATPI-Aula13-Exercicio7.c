#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int dia, mes, ano;

    printf("\nDigite uma data para verificarmos se ela é válida\n");
    printf("Digite o dia: ");
    scanf("%d", &dia, &mes, &ano);
    printf("Digite o mês: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if(mes >= 1 && mes <= 12){
        //caso o mes seja fevereiro
        if(mes == 2){
            //caso seja ano bissexto
            if((ano%400 == 0) || (ano%4 == 0 && ano%100 != 0)){
                //verificamos se o dia está entre 1 e 29
                if(dia >= 1 && dia <= 29){
                    printf("\nA data entrada é válida!\n");
                }
                else{
                    printf("\nA data entrada é invalida - Fevereiro tem apenas 29 dias em anos bissextos.\n");
                }
            }
            else{ //caso seja ano não bissexto
                if(dia >= 1 && dia <= 28){//verificamos se o dia está entre 1 e 28;
                    printf("\nA data entrada é válida!\n");
                }
                else{ //caso não estiver entre 1 e 18, data invalida
                    printf("\nA data entrada é invalida - Fevereiro tem apenas 28 dias em anos não bissextos.\n");
                }
            }
        }//caso seja qualquer outro mes de 30 dias (abril (4), junho(6), setembro(9) e novembro(11))
        else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
            if(dia >= 1 && dia <= 30){
                printf("\nA data entrada é válida!\n");
            }
            else{
                printf("\nA data entrada é inválida - Os meses de Abril(4), Junho(6), Setembro(9) e Novembro(11) têm apenas 30 dias.\n");
            }
        }
        //caso seja um mes de 31 dias (janeiro(1), março(3), maio(5), julho(7), agosto(8), outubro(10) e dezembro(12))
        else if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
            if(dia >= 1 && dia <= 31){
                printf("\nA data entrada é válida!\n");
            }
            else{
                printf("\nA data entrada é inválida - Os meses de Janeiro(1), Março(3), Maio(5), Julho(7), Agosto(8), Outubro(10) e Dezembro(12) têm apenas 31 dias.\n");
            }
        }
    }
    else{ //caso o mês não esteja entre 1 e 126
        printf("\nA data entrada é inválida---os meses são entre 1 e 12.\n");
    }

    return 0;
}
