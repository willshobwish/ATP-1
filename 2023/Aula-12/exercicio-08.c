/*8) Faça um programa que receba uma palavra e a imprima de trás-para-frente.*/
#include <stdio.h>
int main (){
    char s[100], sinv[100];
    int i, j, fim;
    fgets(s, 100, stdin);
    // determinar o fim do texto
    /*j=fim-1;
    s[fim]=j+1;
    s[0]=i;*/
    fim = 0;
    while (s[fim] != '\0' && s[fim] != '\n') {
        fim++;
    }
    // ver o texto invertido
    i = fim - 1;
    j = 0;
    while (j < fim) {
        sinv[j] = s[i];
        j++;
        i--;
    }
    sinv[fim] = '\0';
    printf("texto invertido: %s\n", sinv);

    return 0;
}