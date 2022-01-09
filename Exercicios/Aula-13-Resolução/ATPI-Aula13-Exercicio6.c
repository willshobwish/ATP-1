#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int ano;

    printf("\nDigite um ano para verificar se ele é bissexto: ");
    scanf("%d", &ano);

    if((ano%400 == 0) || (ano%4 == 0 && ano%100 != 0)){
        printf("\nO ano %d é bissexto.\n", ano);
    }
    else{
        printf("\nO ano %d não é bissexto.\n", ano);
    }
    return 0;
}

