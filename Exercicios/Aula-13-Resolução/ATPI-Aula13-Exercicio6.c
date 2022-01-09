#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int ano;

    printf("\nDigite um ano para verificar se ele � bissexto: ");
    scanf("%d", &ano);

    if((ano%400 == 0) || (ano%4 == 0 && ano%100 != 0)){
        printf("\nO ano %d � bissexto.\n", ano);
    }
    else{
        printf("\nO ano %d n�o � bissexto.\n", ano);
    }
    return 0;
}

