#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int idade;
    printf("\nDigite a idade do nadador: ");
    scanf("%d", &idade);

    if(idade >= 5 && idade <= 7){
        printf("\nNadador categoria Infantil A\n");
    }
    else if(idade >= 8 && idade <= 10){
        printf("\nNadador categoria Infantil B\n");
    }
    else if(idade >= 11 && idade <= 13){
        printf("\nNadador categoria Juvenil A\n");
    }
    else if(idade >= 14 && idade <= 17){
        printf("\nNadador categoria Juvenil B\n");
    }
    else if(idade >= 18){
        printf("\nNadador categoria Adulto\n");
    }
    else{
        printf("\nEssa é uma idade inválida ou esse nadador é muito novo.\n");
    }
    return 0;
}

