#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char string_usuario[100];
    char string_copia[100];
    int contador = 0;
    fgets(string_usuario, 100, stdin);
    while (string_usuario[contador] != '\0') {
        string_copia[contador] = string_usuario[contador];
        // string_usuario[contador] = string_copia[contador];
        contador++;
    }
    printf("String copiada: %s", string_copia);
}