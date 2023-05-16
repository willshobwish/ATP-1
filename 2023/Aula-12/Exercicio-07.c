#include <stdio.h>

/*7) Faça um programa em que troque todas as ocorrências de uma letra L1 pela
letra L2 em uma string. A string e as letras L1 e L2 devem ser fornecidas pelo
usuário.*/
// int main() {
//     char s[100], L1, L2;
//     int k = 0;
//     gets(s);
    // A função gets() não é segura porque não verifica o tamanho da string inserida pelo usuário, o que pode acarretar em overflow 
    // https://stackoverflow.com/questions/1694036/why-is-the-gets-function-so-dangerous-that-it-should-not-be-used
    // Recomenda-se utilizar a funcao fgets()
    // https://www.tutorialspoint.com/c_standard_library/c_function_fgets.htm
    // scanf("%s", &s[100]);
    // É necessário utilizar somente o fflush(stdin); ou setbuf(stdin, NULL); toda vez que o usuário digitar no programa para zerar o buffer de entrada
    // Dependendo do compilador, pode ser que o fflush não funcione corretamente, por exemplo, no meu não funcionou, tive que utilizar o setbuf
    // https://www.geeksforgeeks.org/use-fflushstdin-c/
    // scanf("%c", &L1);
    // A cada scanf() é necessário chamar a função fflush(stdin); ou setbuf(stdin, NULL); para limpar o buffer de entrada
//     scanf("%c", &L2);
//     fflush(stdin);
//     while (s[k] != '\0') {
//         if (s[k] == L1) {
//             printf("%c", L2);
//         } else {
//             printf("%c", s[k]);
//         }
//         k++;
//     }
//     return 0;
// }

int main(void) {
    char l1, l2, palavra[100];
    fgets(palavra, 100, stdin);
    // Após a utilização da função fgets() não é necessário chamar a função fflush(stdin); ou setbuf(stdin, NULL);
    scanf("%c", &l1);
    setbuf(stdin, NULL);
    scanf("%c", &l2);
    setbuf(stdin, NULL);
    printf("Letras inseridas:\nSubstituir: %c \nPor: %c\n", l1, l2);
    printf("Sem modificacao: %s\n", palavra);
    int i = 0;
    while (palavra[i] != '\0' && i < 100) {
        if (palavra[i] == l1) {
            palavra[i] = l2;
        }
        i++;
    }
    printf("Com modificacao: %s\n", palavra);
    return 0;
}