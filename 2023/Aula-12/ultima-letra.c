#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char s[100];
    int k = 0;
    // Necessita apenas de uma variavel
    // int ultima = 0;
    printf("digite a palavra: ");
    fgets(s, 100, stdin);
    //Assim esta utilizando processamento desnecessariamente 
    // while (k < 100) {
    //     if (s[k] != '\0') {
    //         ultima++;
    //         k++;
    //     }
    // }
    // Sera mais eficiente se ele contar ate encontrar o caractere nulo e parar do que contar 100 vezes
    while (s[k] != '\0') {
        k++;
    }
    // Aqui está imprimindo a posição da ultima letra
    // printf("a posicao e': %d", ultima);
    // Para imprimir o ultimo caractere eh necessário pegar o tamanho da string e fazer e subtrair o caractere nulo e o ulitmo
    // {'a','b','a','c','a','t','e','\0',}
    //                           ^    ^   
    // tamanho da string - 2 (sendo um do caractere nulo e a outra para mostrar o caractere que deseja)
    // O formato de impressao de caractere eh "%c"
    // Precisa especificar o vetor e o indice que quer tambem 
    printf("a posicao e': %c", s[k - 2]);
    return 0;
}
