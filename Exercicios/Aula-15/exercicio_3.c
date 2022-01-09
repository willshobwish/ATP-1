// Usando switch, faça um programa para ler dois valores e apresentar
// para o usuário o menu de opções conforme abaixo. Em seguida, o
// programa deverá ler a opção indicada pelo usuário e efetuar a operação
// desejada. Adicionalmente, o programa deve apresentar uma mensagem
// de erro caso a opção digitada for inválida.

#include <stdio.h>

int main()
{
    float numero_1, numero_2;
    int numero_operacao;
    printf("Insira dois numeros: ");
    scanf("%f%f", &numero_1, &numero_2);
    printf("1- Somar os dois numeros\n2- Subtrair os dois numeros\n3- Multiplicar os dois numeros\n4- Dividir os dois numeros (o denominador não pode ser zero)\n5- Sair\n\nDigite uma opcao: ");
    scanf("%d", &numero_operacao);
    switch (numero_operacao)
    {
    case 1:
        printf("%f", numero_1 + numero_2);
        break;
    case 2:
        printf("%f", numero_1 - numero_2);
        break;
    case 3:
        printf("%f", numero_1 * numero_2);
        break;
    case 4:
        if (numero_2 != 0)
        {
            printf("%f", numero_1 / numero_2);
        }
        else
        {
            printf("Nao eh possivel dividir por 0");
        }
        break;
    case 5:
        break;
    default:
    printf("Entrada invalida");
    }
    return 0;
}