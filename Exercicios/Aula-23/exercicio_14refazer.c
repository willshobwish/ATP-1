#include<stdio.h>
#include<stdbool.h>

int main(){
    char entrada[200], entrada2[100];
    int letras=0;
    fgets(entrada,200,stdin);
    fgets(entrada2,200,stdin);
    for(int qnt=0;entrada[qnt]!='\0'&&entrada[qnt]!='\n';qnt++){
        letras++;
    }
    for(int posicao = letras +1, qnt2 = 0;entrada2[qnt2];letras++,qnt2++){
        entrada[letras] = entrada2[posicao];
    }
    printf("%s",entrada);
}