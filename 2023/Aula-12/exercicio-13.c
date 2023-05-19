// 13) Palíndromo é uma frase ou palavra que pode ser lida, indiferentemente, da
// esquerda para a direita ou vice-versa. Faça um programa para ler uma string e
// verificar se o conteúdo é palíndromo. Exemplos: osso, ovo, reter, radar e salas.

// string_normal
// string_reversa

#include <stdio.h>
#include <stdlib.h>
int main() {
    char string_normal[] = {'a', 'b', 'c', '\0'};
    char string_reversa[] = {'\0', 'c', 'b', 'a'};

    int j = 0;
    int i = 0;
    for (i = 100; i > 0; i--) {
        string_reversa[i] = string_normal[j];
        j++;
    }
    char teste3[] = "abacate";
    char teste2[100];
}