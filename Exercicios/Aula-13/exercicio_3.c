#include<stdio.h>
int main(){
    int dia_nascimento, mes_nascimento, ano_nascimento, dia_atual, mes_atual, ano_atual, idade_extra;
    printf("Coloque a data de nascimento separado por espacos: ");
    scanf("%d%d%d",&dia_nascimento,&mes_nascimento,&ano_nascimento);
    printf("Coloque a data atual separado por espacos: ");
    scanf("%d%d%d",&dia_atual,&mes_atual,&ano_atual);
    if(dia_atual >= dia_nascimento && mes_atual >= mes_nascimento){
        idade_extra = 0;
    }
    else{
        idade_extra = -1;
    }
    printf("Voce possui %d anos.",ano_atual-ano_nascimento+idade_extra);
}