#include <stdio.h>
int main()
{
    int ano, dia, mes;
    printf("Coloque uma data para validar: ");
    scanf("%d%d%d", &dia, &mes, &ano);
    if(ano>=0){
        printf("Ano valido\n");
    }
    else{
        printf("Ano invalido\n");
    }
    if(mes>=1 && mes<=12){
        printf("Mes valido\n");
    }
    else{
        printf("Mes invalido\n");
    }
    //Somente para o mes de fevereiro
    if(mes==2){
        //Condição do ano bissexto
        if(ano%400==0 || (ano%4==0 && !ano%100==0)){
            if(dia>=1 && dia<=29){
                printf("Dia valido\n");
            }
            else{
                printf("Dia invalido\n");
            }
        }
    }
    //Verifição de outros meses
    else if(dia>=1 && dia<=30){
        printf("Dia valido\n");
    }
    else{
        printf("Dia invalido\n");
    }
    return 0;
}