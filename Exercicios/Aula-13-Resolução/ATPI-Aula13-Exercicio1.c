#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    float num1, num2, resultado;
    char operacao;

    printf("\nDigite o primeiro numero: ");
    scanf("%f", &num1);
    printf("\nDigite o primeiro numero: ");
    scanf("%f", &num2);
    setbuf(stdin, NULL);//limpa o buffer do teclado (entrada stdin) para poder fazer a leitura correta do caractere
    printf("\nDigite a operação desejada (+, -, * ou /): ");
    scanf("%c", &operacao);

    if(operacao == '+'){
        resultado = num1 + num2;
    }
    else if(operacao == '-'){
        resultado = num1 - num2;
    }
    else if(operacao == '/'){
        resultado = num1/num2;
    }
    else if(operacao == '*'){
        resultado = num1*num2;
    }
    else{
        printf("\nOperação invalida, tente novamente com uma das sugeridas.");
        return;
    }

    printf("\nO resultado da operação é = %f\n", resultado);
    return 0;
}

