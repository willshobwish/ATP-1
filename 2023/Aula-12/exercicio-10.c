/*10) Faça um programa para ler duas strings e verificar se elas são iguais, ou seja,
verificar se o conteúdo é o mesmo nas duas frases informadas.*/
#include <stdio.h>



int main() {
    char s[100], t[100];
    int k;
    fgets(s, 100, stdin);
    fgets(t, 100, stdin);
    while (s[k] != '\0') {
        // [a,b,c,d]
        // [a,b,d,c]
        if (s[k] != t[k]) {
            printf("strings diferentes");
            // break;
            return 0;
        } else {
        k++;}
    }
    printf("strings iguais");
}