#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int dia, mes, ano;

    printf("\nDigite uma data para verificarmos se ela � v�lida\n");
    printf("Digite o dia: ");
    scanf("%d", &dia, &mes, &ano);
    printf("Digite o m�s: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if(mes >= 1 && mes <= 12){
        //caso o mes seja fevereiro
        if(mes == 2){
            //caso seja ano bissexto
            if((ano%400 == 0) || (ano%4 == 0 && ano%100 != 0)){
                //verificamos se o dia est� entre 1 e 29
                if(dia >= 1 && dia <= 29){
                    printf("\nA data entrada � v�lida!\n");
                }
                else{
                    printf("\nA data entrada � invalida - Fevereiro tem apenas 29 dias em anos bissextos.\n");
                }
            }
            else{ //caso seja ano n�o bissexto
                if(dia >= 1 && dia <= 28){//verificamos se o dia est� entre 1 e 28;
                    printf("\nA data entrada � v�lida!\n");
                }
                else{ //caso n�o estiver entre 1 e 18, data invalida
                    printf("\nA data entrada � invalida - Fevereiro tem apenas 28 dias em anos n�o bissextos.\n");
                }
            }
        }//caso seja qualquer outro mes de 30 dias (abril (4), junho(6), setembro(9) e novembro(11))
        else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
            if(dia >= 1 && dia <= 30){
                printf("\nA data entrada � v�lida!\n");
            }
            else{
                printf("\nA data entrada � inv�lida - Os meses de Abril(4), Junho(6), Setembro(9) e Novembro(11) t�m apenas 30 dias.\n");
            }
        }
        //caso seja um mes de 31 dias (janeiro(1), mar�o(3), maio(5), julho(7), agosto(8), outubro(10) e dezembro(12))
        else if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
            if(dia >= 1 && dia <= 31){
                printf("\nA data entrada � v�lida!\n");
            }
            else{
                printf("\nA data entrada � inv�lida - Os meses de Janeiro(1), Mar�o(3), Maio(5), Julho(7), Agosto(8), Outubro(10) e Dezembro(12) t�m apenas 31 dias.\n");
            }
        }
    }
    else{ //caso o m�s n�o esteja entre 1 e 126
        printf("\nA data entrada � inv�lida---os meses s�o entre 1 e 12.\n");
    }

    return 0;
}
